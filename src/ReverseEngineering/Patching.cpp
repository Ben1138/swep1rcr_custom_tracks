#include "FUN.h"
#include "Patching.h"
#include "Globals.h"
#include "DBTracks.h"
#include <windows.h>
#include <assert.h>


namespace Patching
{
    constexpr uint32_t s_pSegmTextStart  = 0x0401000;
    constexpr uint32_t s_pSegmTextEnd    = 0x004ab7ff;


    inline void PatchFunction(uint32_t pStart, void* pFunction)
    {
        assert(pStart >= s_pSegmTextStart);
        assert(pStart <  s_pSegmTextEnd);

        uint16_t Segment;
#if _MSVC_LANG
        __asm
        {
            mov Segment, cs
        }
#else
        asm("mov %%cs, %0" : "=r" (Segment));
#endif

        // TODO: Check whether the function to patch is at least 7 bytes in size
        uint8_t Instructions[7] =
        {
            0xEA, 0xDD, 0xCC, 0xBB, 0xAA, 0xFF, 0xEE    // JMP 0xEEFF:0xAABBCCDD 
        };

        // Patch Address
        *((uint32_t*)&Instructions[1]) = uint32_t(pFunction);

        // Patch Segment
        *((uint16_t*)&Instructions[5]) = Segment;

        memcpy((void*)pStart, Instructions, sizeof(Instructions));
    }

    inline void PatchMemoryAccess(uint32_t pAccessOld, void* pAccessNew)
    {
        *((uint32_t*)pAccessOld) = uint32_t(pAccessNew);
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

        //PatchFunction(0x0042d600, &FUN::FileGet);                                 // All 3 calls covered, using EXT::FileGet instead
        PatchFunction(0x0042d680, &FUN::FileOpen);
        PatchFunction(0x0042d640, &FUN::FileRead);
        PatchFunction(0x0042d6f0, &FUN::FileClose);

        PatchFunction(0x0043b0b0, &FUN::HandleCircuit);
        PatchFunction(0x00440aa0, &FUN::IsTrackPlayable);
        PatchFunction(0x00440620, &FUN::GetTrackName);
        PatchFunction(0x0041d6b0, &FUN::IsFreePlay);
        PatchFunction(0x004584a0, &FUN::InitTracks);
        //PatchFunction(0x004360e0, &FUN::DrawTracks);                              // Get's called just once in MenuTrackSelection()
        PatchFunction(0x0043b240, &FUN::MenuTrackSelection);
        PatchFunction(0x00440af0, &FUN::VerifySelectedTrack);
        PatchFunction(0x00440a00, &FUN::GetRequiredPlaceToProceed);

        PatchFunction(0x004282f0, &FUN::ImgReset);
        PatchFunction(0x00428370, &FUN::ImgResetAll);

        PatchFunction(0x00440a20, &FUN::FUN_00440a20);
        PatchFunction(0x0041d6c0, &FUN::FUN_0041d6c0);

        // TODO: Write a python script for ghidra that automates this
        //PatchMemoryAccess(0x00436db9 + 3, DBTracks::g_aNewTrackInfos + 0x00);       // READ MOVSX
        //PatchMemoryAccess(0x00436dc0 + 3, DBTracks::g_aNewTrackInfos + 0x00);       // READ MOVSX
        //PatchMemoryAccess(0x00436edc + 3, DBTracks::g_aNewTrackInfos + 0x00);       // READ CMP
    }
}