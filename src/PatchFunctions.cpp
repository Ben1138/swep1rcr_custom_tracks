#include <windows.h>
#include "Functions.h"
#include "PatchFunctions.h"
#include "Globals.h"

constexpr uint32_t s_pTextStart  = 0x0401000;
constexpr uint32_t s_pTextEnd    = 0x004ab7ff;


template<uint32_t pStart>
inline void PatchFunction(void* pFunction)
{
    static_assert(pStart >= s_pTextStart);
    static_assert(pStart < s_pTextEnd);

    // TODO: Check whether function to patch is at least 7 bytes in size
    uint8_t Instructions[7] =
    {
        0xBD, 0xDD, 0xCC, 0xBB, 0xAA,           // mov   ebp, 0xAABBCCDD
        0xFF, 0xE5,                             // jmp   ebp
    };

    // Patch 0xAABBCCDD
    *((uint32_t*)&Instructions[1]) = uint32_t(pFunction);

    memcpy((void*)pStart, Instructions, sizeof(Instructions));
}

void PatchAllFunctions()
{
    DWORD OldProtect;
    constexpr SIZE_T uTextSize = s_pTextEnd - s_pTextStart;
    if (!VirtualProtect((LPVOID)s_pTextStart, uTextSize, PAGE_EXECUTE_READWRITE, &OldProtect))
    {
        MessageBoxA(nullptr, "Failed to change protection of .text segment!", "Hook failed", MB_ICONERROR | MB_OK);
        return;
    }

    PatchFunction<0x0043b0b0>(&HandleCircuits);
}