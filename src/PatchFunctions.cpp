#include <windows.h>
#include "Functions.h"
#include "PatchFunctions.h"
#include "Globals.h"

constexpr uint32_t s_pSegmTextStart  = 0x0401000;
constexpr uint32_t s_pSegmTextEnd    = 0x004ab7ff;


template<uint32_t pStart>
inline void PatchFunction(void* pFunction)
{
    static_assert(pStart >= s_pSegmTextStart);
    static_assert(pStart < s_pSegmTextEnd);

    uint16_t Segment;
#if _MSVC_LANG
    __asm
    {
        mov Segment, cs
    }
#else
    asm("mov %%cs, %0" : "=r" (Segment));
#endif

    // TODO: Check whether function to patch is at least 7 bytes in size
    uint8_t Instructions[7] =
    {
        0xEA, 0xDD, 0xCC, 0xBB, 0xAA, 0xFF, 0xEE    // jmp 0xEEFF:0xAABBCCDD 
    };

    // Patch Address
    *((uint32_t*)&Instructions[1]) = uint32_t(pFunction);

    // Patch Segment
    *((uint16_t*)&Instructions[5]) = Segment;

    memcpy((void*)pStart, Instructions, sizeof(Instructions));
}

void PatchAllFunctions()
{
    DWORD OldProtect;
    constexpr SIZE_T uTextSize = s_pSegmTextEnd - s_pSegmTextStart;
    if (!VirtualProtect((LPVOID)s_pSegmTextStart, uTextSize, PAGE_EXECUTE_READWRITE, &OldProtect))
    {
        MessageBoxA(nullptr, "Failed to change protection of .text segment!", "Hook failed", MB_ICONERROR | MB_OK);
        return;
    }

    PatchFunction<0x0043b0b0>(&HandleCircuit);
    PatchFunction<0x00440aa0>(&IsTrackPlayable);
    PatchFunction<0x00440620>(&GetTrackName);
    PatchFunction<0x0041d6b0>(&IsFreePlay);
    PatchFunction<0x004584a0>(&DrawCircuitTracks);
    PatchFunction<0x0043b240>(&MenuTrackSelection);

    PatchFunction<0x0041d6c0>(&FUN_0041d6c0);
}