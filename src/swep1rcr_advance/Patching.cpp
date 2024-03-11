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

    struct OldInstructions
    {
        void* pStart = nullptr;
        uint8_t Inst[7]{};
    };

    static OldInstructions g_aOlds[1024];
    static uint16_t g_uOldCount = 0;

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
        OldInstructions& rOld = g_aOlds[g_uOldCount++];
        memcpy(rOld.Inst, (void*)pStart, sizeof(rOld.Inst));
        rOld.pStart = (void*)pStart;

        uint8_t New[7] = { 0xEA, 0xDD, 0xCC, 0xBB, 0xAA, 0xFF, 0xEE };  // JMP 0xEEFF:0xAABBCCDD 

        // Patch Address
        *((uint32_t*)&New[1]) = uint32_t(pFunction);

        // Patch Segment
        *((uint16_t*)&New[5]) = Segment;

        memcpy((void*)pStart, New, sizeof(New));
    }

    inline void PatchMemoryAccess(uint32_t pAccessOld, void* pAccessNew)
    {
        assert(pAccessOld >= s_pSegmTextStart);
        assert(pAccessOld < s_pSegmTextEnd);
        *((uint32_t*)pAccessOld) = uint32_t(pAccessNew);
    }

    void PatchAll()
    {
        DWORD OldProtect;
        constexpr SIZE_T uTextSize = s_pSegmTextEnd - s_pSegmTextStart;
        if (!VirtualProtect((LPVOID)s_pSegmTextStart, uTextSize, PAGE_EXECUTE_READWRITE, &OldProtect))
        {
            MessageBoxA(nullptr, "Failed to change protection of .text segment!", "Hook failed", MB_ICONERROR | MB_OK);
            return;
        }

        assert(g_uOldCount == 0);

        //PatchFunction(0x0042d600, &FUN::FileGet);                                   // All 3 calls covered, using EXT::FileGet instead
        PatchFunction(0x0042d680, (void*)&FUN::FileOpen);
        PatchFunction(0x0042d640, (void*)&FUN::FileRead);
        PatchFunction(0x0042d6f0, (void*)&FUN::FileClose);

        PatchFunction(0x00425500, (void*)&FUN::CheckCD);
        PatchFunction(0x0043b0b0, (void*)&FUN::HandleCircuit);
        PatchFunction(0x00440aa0, (void*)&FUN::IsTrackPlayable);
        PatchFunction(0x00440620, (void*)&FUN::GetTrackName);
        PatchFunction(0x0041d6b0, (void*)&FUN::IsFreePlay);
        PatchFunction(0x004584a0, (void*)&FUN::InitTracks);
        //PatchFunction(0x004360e0(void*), &FUN::DrawTracks);                         // Get's called just once in MenuTrackSelection()
        PatchFunction(0x0043b240, (void*)&FUN::MenuTrackSelection);
        PatchFunction(0x0043b880, (void*)&FUN::MenuTrackInfo);
        PatchFunction(0x00440af0, (void*)&FUN::VerifySelectedTrack);
        PatchFunction(0x00440a00, (void*)&FUN::GetRequiredPlaceToProceed);

        PatchFunction(0x004282f0, (void*)&FUN::ImgReset);
        PatchFunction(0x00428370, (void*)&FUN::ImgResetAll);

        PatchFunction(0x00440a20, (void*)&FUN::FUN_00440a20);
        PatchFunction(0x0041d6c0, (void*)&FUN::FUN_0041d6c0);

        
        // DBTracks::g_aNewTrackInfos
        // FUN_0045b290
        // FUN_00457410
        // FUN_0043ca30
        // FUN_0045bab0
        // FUN_0045bab0
        // FUN_0044e320
        // FUN_004586e0
        // FUN_0045b7d0
        //PatchMemoryAccess(0x0043BEDC + 0x02, DBTracks::g_aNewTrackInfos + 0x0000);       // READ   CMP      MenuTrackInfo
        //PatchMemoryAccess(0x0043C679 + 0x03, DBTracks::g_aNewTrackInfos + 0x0000);       // READ   MOV      MenuTrackInfo
        //PatchMemoryAccess(0x0043B3D4 + 0x02, DBTracks::g_aNewTrackInfos + 0x0000);       // READ   CMP      MenuTrackSelection
        //PatchMemoryAccess(0x0043B798 + 0x03, DBTracks::g_aNewTrackInfos + 0x0000);       // READ   MOV      MenuTrackSelection
        //PatchMemoryAccess(0x0045B2F5 + 0x02, DBTracks::g_aNewTrackInfos + 0x0000);       // READ   CMP      FUN_0045b290
        //PatchMemoryAccess(0x0045B437 + 0x02, DBTracks::g_aNewTrackInfos + 0x0000);       // READ   MOV      FUN_0045b290
        //PatchMemoryAccess(0x0043BEE4 + 0x02, DBTracks::g_aNewTrackInfos + 0x0004);       // READ   CMP      MenuTrackInfo
        //PatchMemoryAccess(0x0043B3DC + 0x02,Old DBTracks::g_aNewTrackInfos + 0x0004);       // READ   CMP      MenuTrackSelection
        //PatchMemoryAccess(0x0045B42D + 0x02, DBTracks::g_aNewTrackInfos + 0x0004);       // READ   MOV      FUN_0045b290
        //PatchMemoryAccess(0x00436DB9 + 0x03, DBTracks::g_aNewTrackInfos + 0x0008);       // READ   MOVSX    MenuBeforeRace
        //PatchMemoryAccess(0x0045B2FE + 0x02, DBTracks::g_aNewTrackInfos + 0x0008);       // READ   MOV      FUN_0045b290
        //PatchMemoryAccess(0x0045B441 + 0x03, DBTracks::g_aNewTrackInfos + 0x0008);       // READ   MOVSX    FUN_0045b290
        //PatchMemoryAccess(0x0043BE90 + 0x04, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOVSX    MenuTrackInfo
        //PatchMemoryAccess(0x00436DC0 + 0x03, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOVSX    MenuBeforeRace
        //PatchMemoryAccess(0x0043B302 + 0x03, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOV      MenuTrackSelection
        //PatchMemoryAccess(0x0043B5FE + 0x05, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOVSX    MenuTrackSelection
        //PatchMemoryAccess(0x0043B64D + 0x04, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOVSX    MenuTrackSelection
        //PatchMemoryAccess(0x0043B342 + 0x03, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOV      MenuTrackSelection
        //PatchMemoryAccess(0x0045B426 + 0x03, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOVSX    FUN_0045b290
        //PatchMemoryAccess(0x0045B55E + 0x04, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOVSX    FUN_0045b290
        //PatchMemoryAccess(0x00457509 + 0x04, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOVSX    FUN_00457410
        //PatchMemoryAccess(0x00457556 + 0x03, DBTracks::g_aNewTrackInfos + 0x0009);       // READ   MOV      FUN_00457410
        //PatchMemoryAccess(0x0043C1C7 + 0x04, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOVSX    MenuTrackInfo
        //PatchMemoryAccess(0x00436EDC + 0x03, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   CMP      MenuBeforeRace
        //PatchMemoryAccess(0x0043CD92 + 0x04, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOVSX    FUN_0043ca30
        //PatchMemoryAccess(0x0043CDB7 + 0x04, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOVSX    FUN_0043ca30
        //PatchMemoryAccess(0x0045BAD2 + 0x03, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOV      FUN_0045bab0
        //PatchMemoryAccess(0x0045BB02 + 0x03, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOV      FUN_0045bab0
        //PatchMemoryAccess(0x0044E3C8 + 0x02, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOV      FUN_0044e320
        //PatchMemoryAccess(0x0044E3DD + 0x02, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOV      FUN_0044e320
        //PatchMemoryAccess(0x0043A2A7 + 0x04, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOVSX    HandleProgress
        //PatchMemoryAccess(0x0045907B + 0x04, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOVSX    FUN_004586e0
        //PatchMemoryAccess(0x00458F4A + 0x04, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOVSX    FUN_004586e0
        //PatchMemoryAccess(0x0045B873 + 0x03, DBTracks::g_aNewTrackInfos + 0x000A);       // READ   MOV      FUN_0045b7d0
        //PatchMemoryAccess(0x0045B4D9 + 0x02, DBTracks::g_aNewTrackInfos + 0x00C0);       // READ   MOV      FUN_0045b290
        //PatchMemoryAccess(0x0045B4DF + 0x02, DBTracks::g_aNewTrackInfos + 0x00C4);       // READ   MOV      FUN_0045b290
        //PatchMemoryAccess(0x0045B4ED + 0x03, DBTracks::g_aNewTrackInfos + 0x00C8);       // READ   MOVSX    FUN_0045b290
        //PatchMemoryAccess(0x0045B4D2 + 0x03, DBTracks::g_aNewTrackInfos + 0x00C9);       // READ   MOVSX    FUN_0045b290

        // Call Stack on last crash:
        //00456CA6	FUN_00456c70
        //0043BEC2	MenuTrackInfo
        //0045790F	MenuSwitch
        //004508F5	FUN_004508b0
    }

    void UnPatchAll()
    {
        assert(g_uOldCount > 0);

        for (uint16_t i = 0; i < g_uOldCount; i++)
        {
            OldInstructions& rOld = g_aOlds[i];
            memcpy(rOld.pStart, rOld.Inst, sizeof(rOld.Inst));
        }

        g_uOldCount = 0;   
    }
}