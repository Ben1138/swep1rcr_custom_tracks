#include "FUN.h"
#include "EXT.h"
#include "DBTracks.h"
#include "Version.h"
#include <windows.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

namespace FUN
{
    typedef void(FUN_0045bee0_t)(MenuState* pStruct, int param_2, int param_3, int32_t param_4);
    static FUN_0045bee0_t* FUN_0045bee0 = (FUN_0045bee0_t*)0x0045bee0;

    typedef void(__cdecl FUN_0043b1d0_t)(MenuState* pStruct);
    static  FUN_0043b1d0_t* FUN_0043b1d0 = (FUN_0043b1d0_t*)0x0043b1d0;

    typedef float10(FUN_00469b90_t)(float param_1);
    static  FUN_00469b90_t* FUN_00469b90 = (FUN_00469b90_t*)0x00469b90;

    typedef int32_t(FUN_004816b0_t)();
    static  FUN_004816b0_t* FUN_004816b0 = (FUN_004816b0_t*)0x004816b0;

    typedef int32_t(FUN_00440620_t)(int32_t param_1);
    static  FUN_00440620_t* FUN_00440620 = (FUN_00440620_t*)0x00440620;

    typedef void(FUN_0042de10_t)(char* param_1, int param_2);
    static  FUN_0042de10_t* FUN_0042de10 = (FUN_0042de10_t*)0x0042de10;

    typedef void(FUN_0043fe90_t)(int param_1, int param_2, int param_3);
    static  FUN_0043fe90_t* FUN_0043fe90 = (FUN_0043fe90_t*)0x0043fe90;

    typedef void(FUN_00469c30_t)(int param_1, float param_2, int param_3);
    static  FUN_00469c30_t* FUN_00469c30 = (FUN_00469c30_t*)0x00469c30;

    typedef void(FUN_004118b0_t)();
    static  FUN_004118b0_t* FUN_004118b0 = (FUN_004118b0_t*)0x004118b0;

    typedef void(FUN_00440550_t)(int32_t param_1);
    static  FUN_00440550_t* FUN_00440550 = (FUN_00440550_t*)0x00440550;

    typedef void(FUN_0041e5a0_t)();
    static  FUN_0041e5a0_t* FUN_0041e5a0 = (FUN_0041e5a0_t*)0x0041e5a0;

    // ImgSize ?
    typedef void(FUN_004286c0_t)(uint16_t ImgIdx, uint16_t param_2, uint16_t param_3);
    static  FUN_004286c0_t* FUN_004286c0 = (FUN_004286c0_t*)0x004286c0;

    typedef void(FUN_00412e20_t)();
    static  FUN_00412e20_t* FUN_00412e20 = (FUN_00412e20_t*)0x00412e20;

    typedef float10(FUN_0042f560_t)(float param_1, float param_2);
    static  FUN_0042f560_t* FUN_0042f560 = (FUN_0042f560_t*)0x0042f560;

    typedef float10(FUN_0042f3e0_t)(float param_1);
    static  FUN_0042f3e0_t* FUN_0042f3e0 = (FUN_0042f3e0_t*)0x0042f3e0;

    typedef void(FUN_0042f9b0_t)(float* param_1);
    static  FUN_0042f9b0_t* FUN_0042f9b0 = (FUN_0042f9b0_t*)0x0042f9b0;

    typedef void(FUN_00450560_t)(int32_t PosX, int32_t PosY, const char *pText);
    static  FUN_00450560_t* FUN_00450560 = (FUN_00450560_t*)0x00450560;  

    typedef int32_t(FUN_00485880_t)(int param_1, int *param_2);
    static  FUN_00485880_t* FUN_00485880 = (FUN_00485880_t*)0x00485880;  

    typedef void(FUN_0042fa80_t)(float *param_1,float *param_2,float param_3,float *param_4);
    static  FUN_0042fa80_t* FUN_0042fa80 = (FUN_0042fa80_t*)0x0042fa80;  

    typedef void(FUN_00431020_t)(uint8_t *param_1,int32_t param_2,int32_t param_3,int32_t param_4);
    static  FUN_00431020_t* FUN_00431020 = (FUN_00431020_t*)0x00431020;  

    typedef float10(FUN_0042f950_t)(float *param_1,float *param_2);
    static  FUN_0042f950_t* FUN_0042f950 = (FUN_0042f950_t*)0x0042f950;  

    typedef void(FUN_0044bb10_t)(int32_t *param_1, int param_2);
    static  FUN_0044bb10_t* FUN_0044bb10 = (FUN_0044bb10_t*)0x0044bb10;  

    typedef void(FUN_0040a120_t)(int param_1);
    static  FUN_0040a120_t* FUN_0040a120 = (FUN_0040a120_t*)0x0040a120;  

    typedef bool(FUN_00409d70_t)(uint32_t param_1);
    static  FUN_00409d70_t* FUN_00409d70 = (FUN_00409d70_t*)0x00409d70;  

    typedef void(FUN_00427d90_t)(int PlanetIdx, int param_2);
    static  FUN_00427d90_t* FUN_00427d90 = (FUN_00427d90_t*)0x00427d90; 

    // Compare two char[3]'s
    typedef bool(FUN_004409d0_t)(char *param_1, char *param_2);
    static  FUN_004409d0_t* FUN_004409d0 = (FUN_004409d0_t*)0x004409d0; 

    typedef void(FUN_00440c10_t)(MenuState *pState);
    static  FUN_00440c10_t* FUN_00440c10 = (FUN_00440c10_t*)0x00440c10; 

    typedef void(FUN_0041e660_t)();
    static  FUN_0041e660_t* FUN_0041e660 = (FUN_0041e660_t*)0x0041e660; 

    typedef void(FUN_0045a3e0_t)();
    static  FUN_0045a3e0_t* FUN_0045a3e0 = (FUN_0045a3e0_t*)0x0045a3e0;

    typedef void(FUN_0045bb60_t)();
    static  FUN_0045bb60_t* FUN_0045bb60 = (FUN_0045bb60_t*)0x0045bb60;
    
    typedef void(FUN_0045b5d0_t)(MenuState *pState);
    static FUN_0045b5d0_t* FUN_0045b5d0 = (FUN_0045b5d0_t*)0x0045b5d0;

    typedef void(FUN_00408640_t)(uint8_t param_1);
    static FUN_00408640_t* FUN_00408640 = (FUN_00408640_t*)0x00408640;

typedef void(FUN_0041bd90_t)(int32_t param_1,int32_t param_2,int32_t param_3);
static FUN_0041bd90_t* FUN_0041bd90 = (FUN_0041bd90_t*)0x0041bd90;

typedef int(FUN_00420f90_t)();
static FUN_00420f90_t* FUN_00420f90 = (FUN_00420f90_t*)0x00420f90;

typedef int*(FUN_0045b610_t)(MenuState *pState,int *param_2);
static FUN_0045b610_t* FUN_0045b610 = (FUN_0045b610_t*)0x0045b610;

typedef int*(FUN_0045b7d0_t)(MenuState *pState,int *param_2);
static FUN_0045b7d0_t* FUN_0045b7d0 = (FUN_0045b7d0_t*)0x0045b7d0;

typedef void(FUN_0041dd50_t)(MenuState *pState, UnknStruct3 *pUnkn3);
static FUN_0041dd50_t* FUN_0041dd50 = (FUN_0041dd50_t*)0x0041dd50;

typedef void(FUN_0041bd50_t)(int32_t param_1);
static FUN_0041bd50_t* FUN_0041bd50 = (FUN_0041bd50_t*)0x0041bd50;

typedef void(FUN_00445aa0_t)(int param_1);
static FUN_00445aa0_t* FUN_00445aa0 = (FUN_00445aa0_t*)0x00445aa0;

typedef void(FUN_00447300_t)(int param_1, int32_t param_2);
static FUN_00447300_t* FUN_00447300 = (FUN_00447300_t*)0x00447300;

typedef void(FUN_00450c50_t)(int param_1, UnknStruct3 *pUnkn3);
static FUN_00450c50_t* FUN_00450c50 = (FUN_00450c50_t*)0x00450c50;

typedef void(FUN_00449e30_t)();
static FUN_00449e30_t* FUN_00449e30 = (FUN_00449e30_t*)0x00449e30;

typedef void(FUN_0045b210_t)(MenuState *pState);
static FUN_0045b210_t* FUN_0045b210 = (FUN_0045b210_t*)0x0045b210;



    // FUN_0042d600
    FILE** FileGet(int32_t FileID)
    {
        // using custom memory instead of stock memory,
        // because apparently they're not initialized to zero
        static FILE* s_pModelblock    = nullptr;
        static FILE* s_pSpriteblock   = nullptr;
        static FILE* s_pSplineblock   = nullptr;
        static FILE* s_pTextureblock  = nullptr;

        switch (FileID)
        {
            case 0:
                return &s_pModelblock;
            case 1:
                return &s_pSpriteblock;
            case 2:
                return &s_pSplineblock;
            case 3:
                return &s_pTextureblock;
            default:
                return nullptr;
        }
    }

    // FUN_0042d680
    void FileOpen(int32_t FileID)
    {
        char Message[256];

        const char* pFilename = EXT::GetFilePath(FileID);
        if (!pFilename) // This check didn't exist before
        {
            snprintf(Message, sizeof(Message), "Failed to grab path for FileID: %d!", FileID);
            MessageBoxA(nullptr, Message, "File Error", MB_ICONERROR | MB_OK);
            exit(1);
        }

        FILE** ppFile = FileGet(FileID);
        if (!ppFile) // This check didn't exist before
        {
            snprintf(Message, sizeof(Message), "Failed to grab FILE* for FileID: %d!", FileID);
            MessageBoxA(nullptr, Message, "File Error", MB_ICONERROR | MB_OK);
            exit(1);
        }

        FILE* pFile = *ppFile;
        if (pFile)
        {
            // File already opened
            return;
        }

        pFile = fopen(pFilename, "rb");
        if (!pFile)
        {
            // LucasArts used to have an infinite loop here...
            snprintf(Message, sizeof(Message), "Failed to open file '%s' of FileID: %d!", pFilename, FileID);
            MessageBoxA(nullptr, Message, "File Error", MB_ICONERROR | MB_OK);
            exit(1);
        }
        *ppFile = pFile;
    }

    // FUN_0042d6f0
    void FileClose(int32_t FileID)
    {
        char Message[256];

        FILE** ppFile = FileGet(FileID);
        if (!ppFile) // This check didn't exist before
        {
            snprintf(Message, sizeof(Message), "Failed to grab FILE* for FileID: %d!", FileID);
            MessageBoxA(nullptr, Message, "File Error", MB_ICONERROR | MB_OK);
            exit(1);
        }

        FILE* pFile = *ppFile;
        if (pFile)
        {
            fclose(pFile);
            *ppFile = nullptr;
        }
    }

    // FUN_0042d640
    void FileRead(int32_t FileID, int32_t OffsetAddr, char* pDstBuffer, int32_t NumRead)
    {
        assert(FileID >= 0);
        assert(OffsetAddr >= 0);
        assert(pDstBuffer);
        assert(NumRead > 0);
        char Message[128];

        FILE** ppFile = FileGet(FileID);
        if (!ppFile) // This check didn't exist before
        {
            snprintf(Message, sizeof(Message), "Failed to grab FILE* for FileID: %d!", FileID);
            MessageBoxA(nullptr, Message, "File Error", MB_ICONERROR | MB_OK);
            exit(1);
        }

        FILE* pFile = *ppFile;
        if (!pFile) // This check didn't exist before
        {
            char Message[128];

            snprintf(Message, sizeof(Message), "Cannot read from closed File with FileID: %d!", FileID);
            MessageBoxA(nullptr, Message, "File Error", MB_ICONERROR | MB_OK);
            exit(1);
        }

        fseek(pFile, OffsetAddr, 0);
        const size_t BytesRead = fread(pDstBuffer, 1, NumRead, pFile);
        if (BytesRead < NumRead) // This check didn't exist before
        {
            snprintf(Message, sizeof(Message), "Wanted to read %d bytes, but %d are read from file with FileID: %d!", NumRead, BytesRead, FileID);
            MessageBoxA(nullptr, Message, "File Error", MB_ICONERROR | MB_OK);
            exit(1);
        }
    }

    // FUN_00448780
    /*uint32_t* ReadModel(int param_1)
    {
        uint32_t uVar1;
        int iVar2;
        uint32_t uVar3;
        int iVar4;
        uint32_t uVar5;
        uint32_t uVar6;
        char* pDstBuffer;
        uint32_t* puVar7;
        uint32_t* puVar8;
        uint32_t local_14;
        int local_10;
        uint32_t local_c[3];

        FileOpen(3);
        FileOpen(0);
        DAT_0050c600 = 1;
        DAT_0050c628 = 0;
        DAT_0050c62c = 0;
        DAT_0050c630 = 0;
        DAT_00e981e0 = 0;
        DAT_00e98240 = 0;
        DAT_00e98248 = 0;

        FileRead(0, 0, (char*)&local_14, 4);
        local_14 = (local_14 & 0xff00 | local_14 << 0x10) << 8 | (local_14 & 0xff0000 | local_14 >> 0x10) >> 8;
        if ((-1 < param_1) && (param_1 < (int)local_14))
        {
            FileRead(0, param_1 * 8 + 4, (char*)local_c, 0xc);
            puVar8 = local_c;
            for (int8_t i = 3; i > 0; i--)
            {
                uVar6 = *puVar8;
                *puVar8 = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 >> 0x10 | uVar6 & 0xff0000) >> 8;
                puVar8 = puVar8 + 1;
            }

            iVar4 = local_c[1] - local_c[0];
            uVar6 = local_c[2] - local_c[1];

            if (iVar4 < 0x25801)
            {
                FileRead(0, local_c[0], (char*)&DAT_00e6b180, iVar4);

                iVar4 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
                if (iVar4 > 0)
                {
                    puVar8 = &DAT_00e6b180;
                }
                for (int32_t i = iVar4; i > 0; i--)
                {
                    uVar1 = *puVar8;
                    *puVar8 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
                    puVar8 = puVar8 + 1;
                }

                local_10 = FUN_00445b40();
                puVar8 = (uint32_t*)(local_10 + 7U & 0xfffffff8);
                FileRead(0, local_c[1], (char*)puVar8, 0xc);
                uVar1 = *puVar8;

                if (((uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 >> 0x10 | uVar1 & 0xff0000) >> 8) == 0x436f6d70)
                {
                    uVar1 = puVar8[2];
                    iVar4 = uVar6 - 0xc;
                    uVar6 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
                    iVar2 = FUN_00445bf0();
                    if (iVar2 < (int)(uVar6 + 8))
                    {
                        DAT_0050c610 = 1;
                        FileClose(3);
                        FileClose(0);
                        return (uint32_t*)0x0;
                    }
                    pDstBuffer = (char*)(DAT_00e981e4 - iVar4 & 0xfffffff8);
                    if ((char*)(uVar6 + (int)puVar8) <= pDstBuffer)
                    {
                        FileRead(0, local_c[1] + 0xc, pDstBuffer, iVar4);
                        FUN_0042d520(pDstBuffer, puVar8);
                        FUN_00445b20((char*)(uVar6 + (int)puVar8));

                    LAB_00448a31:
                        iVar4 = 0;
                        DAT_00e9822c = local_10;
                        DAT_00e6b164 = FUN_00445b40();
                        local_10 = FUN_00445b40();

                        if (DAT_0050c604 != 0)
                        {
                            FUN_00445b40();
                            FUN_00445b40();
                            FUN_00445b40();
                            FUN_00445b40();
                        }

                        puVar7 = puVar8;
                        if (0 < (int)uVar6 >> 2)
                        {
                            do
                            {
                                if (((&DAT_00e6b180)[iVar4 >> 5] & 1 << (0x1f - ((uint8_t)iVar4 & 0x1f) & 0x1f)) != 0)
                                {
                                    uVar1 = *puVar7;
                                    uVar5 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8;
                                    uVar3 = (uVar1 & 0xff00 | uVar1 << 0x10) << 8 | uVar5;
                                    *puVar7 = uVar3;
                                    if ((uVar1 << 0x10 & 0xff0000) == 0xa0000)
                                    {
                                        FUN_00447490((uVar1 & 0xff00) << 8 | uVar5, puVar7, puVar7 + 1);
                                    }
                                    else if (uVar3 != 0)
                                    {
                                        *puVar7 = uVar3 + (int)puVar8;
                                    }
                                }

                                puVar7 = puVar7 + 1;
                                iVar4 = iVar4 + 1;
                            } while (iVar4 < (int)uVar6 >> 2);
                        }

                        FUN_004485d0(puVar8);
                        uVar6 = *puVar8;
                        if ((((uVar6 == 0x4d6f646c) || (uVar6 == 0x5472616b)) || (uVar6 == 0x506f6464)) ||
                            (((uVar6 == 0x50617274 || (uVar6 == 0x5363656e)) ||
                                ((uVar6 == 0x4d416c74 || (uVar6 == 0x50757070))))))
                        {
                            puVar8 = puVar8 + 1;
                        }
                        else
                        {
                            FUN_00426910(uVar6);
                        }

                        if (DAT_0050c604 != 0)
                        {
                            FUN_00445b40();
                            FUN_00445b40();
                            FUN_00445b40();
                            FUN_00445b40();
                        }
                        iVar4 = FUN_00445b40();
                        DAT_00e98240 = iVar4 - local_10;
                        DAT_00e981e0 = DAT_00e6b164 - DAT_00e9822c;
                        FileClose(3);
                        FileClose(0);
                        return puVar8;
                    }
                    FileClose(3);
                }
                else
                {
                    iVar4 = FUN_00445bf0();
                    if ((int)(uVar6 + 8) <= iVar4)
                    {
                        FileRead(0, local_c[1], (char*)puVar8, uVar6);
                        FUN_00445b20(uVar6 + (int)puVar8);
                        goto LAB_00448a31;
                    }
                    FileClose(3);
                }
                FileClose(0);
                DAT_0050c610 = 1;
                return (uint32_t*)0x0;
            }
        }

        FileClose(3);
        FileClose(0);
        return (uint32_t*)0x0;
    }*/

    // FUN_004282f0
    void ImgReset(uint16_t ImgIdx, ImgDat* pImgDat)
    {
        if (ImgIdx < 400)
        {
            if (ImgIdx >= g_ImgCount)
            {
                g_ImgCount = ImgIdx + 1;
            }
            g_aImageParams[ImgIdx].PosX    = 0;
            g_aImageParams[ImgIdx].PosY    = 0;
            g_aImageParams[ImgIdx].ScaleX  = 1.0f;
            g_aImageParams[ImgIdx].ScaleY  = 1.0f;
            g_aImageParams[ImgIdx].Unkn2   = 0.0f;
            g_aImageParams[ImgIdx].Flags   = ImgFlags::IMG_UNKN_0;
            g_aImageParams[ImgIdx].R       = 255;
            g_aImageParams[ImgIdx].G       = 255;
            g_aImageParams[ImgIdx].B       = 255;
            g_aImageParams[ImgIdx].A       = 255;
            g_aImageParams[ImgIdx].pImage  = pImgDat;
        }
    }

    // FUN_00428370
    void ImgResetAll()
    {
        FUN_00412e20();
        for (uint16_t ImgIdx = 0; ImgIdx < g_ImgCount; ImgIdx++)
        {
            ImgReset(ImgIdx, nullptr);
        }
        g_ImgCount = 0;
        return;
    }

    // FUN_0043b0b0
    void __cdecl HandleCircuit(MenuState* pState)
    {
        g_CircuitIdxMax = 3;
        g_TracksInCurrentCircuit = 0;

        if (!pState->bIsTournament)
        {
            //if (g_aBeatTracksGlobal[3] == 0)
            //{
            //    g_CircuitIdxMax = 2;
            //}
            g_CircuitIdxMax = DBTracks::GetCircuitCount(true) - 1;

            if (pState->CircuitIdx < 4)
            {
                for (int i = 0; i < g_aTracksInCircuits[pState->CircuitIdx]; i++)
                {
                    if ((g_aBeatTracksGlobal[pState->CircuitIdx] & (1 << i)) != 0)
                    {
                        g_TracksInCurrentCircuit++;
                    }
                }
            }
            else
            {
                g_TracksInCurrentCircuit = DBTracks::GetTrackCount(pState->CircuitIdx);
            }
        }
        else
        {
            if (g_aTracksSelectableTournament[3] == 0)
            {
                g_CircuitIdxMax = 2;
            }
            for (uint8_t i = 0; i < g_aTracksInCircuits[pState->CircuitIdx]; i++)
            {
                if ((g_aTracksSelectableTournament[pState->CircuitIdx] & (1 << i)) != 0)
                {
                    g_TracksInCurrentCircuit++;
                }
            }
        }

        if ((g_bIsFreePlay) && (pState->CircuitIdx < 3))
        {
            g_TracksInCurrentCircuit = g_aTracksInCircuits[pState->CircuitIdx];
        }
        if (g_SelectedTrackIdx >= g_TracksInCurrentCircuit)
        {
            g_SelectedTrackIdx = g_TracksInCurrentCircuit - 1;
        }
        if (g_TracksInCurrentCircuit > 0 && g_SelectedTrackIdx < 0)
        {
            g_SelectedTrackIdx = 0;
        }

        DAT_00e295c0 = (uint32_t)(pState->CircuitIdx > 0);
        g_bCircuitIdxInRange = (int32_t)(pState->CircuitIdx < g_CircuitIdxMax);
    }

    // FUN_00440aa0
    bool IsTrackPlayable(MenuState* pState, uint8_t CircuitIdx, uint8_t TrackIdx)
    {
        uint8_t TracksBitMask = g_aTracksSelectableTournament[CircuitIdx];
        if (g_bIsFreePlay && CircuitIdx < 3)
        {
            return true;
        }
        if (!pState->bIsTournament)
        {
            if (CircuitIdx < 4)
            {
                TracksBitMask = g_aBeatTracksGlobal[CircuitIdx];
            }
            else
            {
                return true;
            }
        }
        return ((uint8_t)(1 << TrackIdx) & TracksBitMask) != 0;
    }

    // FUN_00440620
    const char* GetTrackName(int32_t TrackID)
    {
        return DBTracks::GetTrackName(TrackID);
    }

    // FUN_0041d6b0
    bool IsFreePlay()
    {
        return g_bIsFreePlay;
    }

    // FUN_0041d6c0
    int32_t FUN_0041d6c0()
    {
        return DAT_004eb1c8;
    }

    // FUN_00425500
    int32_t CheckCD()
    {
        // Just skip CD check
        return 0;
    }

    // FUN_004584a0
    void __cdecl InitTracks(MenuState* pState, bool bInitTracks)
    {
        for (uint16_t ImgIdx = 130; ImgIdx < 162; ImgIdx++)
        {
            ImgReset(ImgIdx, pState->aImages[5]);
        }

        // Reset custom track images
        for (uint16_t ImgIdx = 256; ImgIdx < 400; ImgIdx++)
        {
            ImgReset(ImgIdx, nullptr);
        }

        if (bInitTracks)
        {
            const int32_t NumCircuits = DBTracks::GetCircuitCount(!pState->bIsTournament);

            for (int32_t CircuitIdx = 0; CircuitIdx < NumCircuits; CircuitIdx++)
            {
                for (int32_t TrackIdx = 0; TrackIdx < 7; TrackIdx++)
                {
                    const uint16_t TotalTrackIdx = CircuitIdx * 7 + TrackIdx;

                    // Init track background
                    const uint16_t ImgIdxBack = EXT::GetImgStartBackground(TotalTrackIdx);
                    ImgReset(ImgIdxBack, pState->aImages[3]);
                    ImgSetFlag(ImgIdxBack, IMG_UNKN_15);

                    // Init track border
                    const uint16_t ImgIdxBorder = EXT::GetImgStartBorder(TotalTrackIdx);
                    ImgReset(ImgIdxBorder, pState->aImages[4]);
                    ImgSetFlag(ImgIdxBorder, IMG_UNKN_15);

                    if (pState->bIsTournament)
                    {
                        assert(CircuitIdx < 4);
                        const uint8_t Bits = TrackIdx * 2;
                        const uint16_t Beat = (g_aBeatTrackPlace[CircuitIdx] >> Bits) & 3;

                        switch (Beat)
                        {
                            // 3rd place
                            case 1:
                            {
                                ImgReset(ImgIdxBack, pState->aImages[2]);
                                break;
                            }

                            // 2nd place
                            case 2:
                            {
                                ImgReset(ImgIdxBack, pState->aImages[1]);
                                break;
                            }

                            // 1st place
                            case 3:
                            {
                                ImgReset(ImgIdxBack, pState->aImages[0]);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    // FUN_004360e0
    // Get's called at just once place: MenuTrackSelection()
    void DrawTracks(MenuState* pState, uint8_t CircuitIdx)
    {
        const uint8_t NumTracks = DBTracks::GetTrackCount(CircuitIdx);
        if (NumTracks == 0)
        {
            return;
        }

        if (CircuitIdx < 4)
        {
            // Manually resetting visibility of custom tracks.
            // For the stock tracks, this happens somewhere else...
            for (uint16_t ImgIdx = 256; ImgIdx < 400; ImgIdx++)
            {
                ImgVisible(ImgIdx, false);
            }
        }

        uint16_t Beat = 0;
        uint8_t R, G, B, A;
        for (uint8_t TrackIdx = 0; TrackIdx < NumTracks; TrackIdx++)
        {
            if (pState->bIsTournament)
            {
                const uint8_t Bits = TrackIdx * 2;
                Beat = (g_aBeatTrackPlace[CircuitIdx] >> Bits) & 3;
            }

            // Draw Background
            const uint16_t TotalTrackIdx = CircuitIdx * 7 + TrackIdx;
            uint16_t ImgIdx = EXT::GetImgStartBackground(TotalTrackIdx);
            const uint16_t TrackPosX = TrackIdx * 35;
            ImgVisible(ImgIdx, true);
            ImgPosition(ImgIdx, TrackPosX + 55, 94);
            ImgScale(ImgIdx, 0.6667f, 0.6667f);

            A = 255;
            if (CircuitIdx != pState->CircuitIdx)
            {
                // Circuit transition animation
                A = uint8_t(DAT_00e295a0 * DAT_004ac7a4);
            }

            switch (CircuitIdx)
            {
                // Amateur
                case 0:
                {
                    B = 255;
                    G = 255;
                    R = 50;
                    break;
                }

                // Semi-Pro
                case 1:
                {
                    B = 62;
                    G = 255;
                    R = 68;
                    break;
                }

                // Galactic
                case 2:
                {
                    B = 17;
                    G = 190;
                    R = 163;
                    break;
                }

                // Invitational
                case 3:
                {
                    B = 32;
                    G = 89;
                    R = 157;
                    break;
                }

                // Custom Tracks
                default:
                {
                    B = DBTracks::COLOR_B;
                    G = DBTracks::COLOR_G;
                    R = DBTracks::COLOR_R;
                    break;
                }
            }

            EXT::Version TrackBuildVersion = DBTracks::GetTrackBuildVersion(TotalTrackIdx);
            const bool bTooNew = TrackBuildVersion > VERSION;

            const bool bIsPlayable = IsTrackPlayable(pState, CircuitIdx, TrackIdx);
            if (bTooNew)
            {
                B = 50;
                G = 50;
                R = 255;
            }
            else if (!bIsPlayable)
            {
                B = 128;
                G = 128;
                R = 128;
            }
            else if (Beat != 0)
            {
                B = 255;
                G = 255;
                R = 255;
            }
            ImgColor(ImgIdx, R, G, B, A);

            char TxtTrackNum[16];
            rcr_sprintf(TxtTrackNum, "~f2~s%d", TrackIdx + 1);
            if (!pState->bIsTournament || FUN_00440a20(CircuitIdx, TrackIdx))
            {
                // Draw Track Number
                UIText(TrackPosX + 60, 109, R, G, B, A, TxtTrackNum);

                // Draw "Race" string
                const char* pTxtRace = StrSanitise(g_pTxtRace);
                UIText(TrackPosX + 67, 111, R, G, B, A, pTxtRace);
            }

            if (pState->bIsTournament && Beat == 0 && !FUN_00440a20(CircuitIdx, TrackIdx))
            {
                // Draw 4th place Text
                const char* pTxt4th = StrSanitise(g_pTxt4th);
                UIText(TrackPosX + 58, 111, R, G, B, A, pTxt4th);
            }

            // Draw Border
            ImgIdx = EXT::GetImgStartBorder(TotalTrackIdx);
            ImgVisible(ImgIdx, true);
            ImgPosition(ImgIdx, TrackPosX + 53, 92);
            ImgScale(ImgIdx, 0.6667f, 0.6667f);
            ImgColor(ImgIdx, 163, 190, 17, A);
            if (!bIsPlayable)
            {
                ImgColor(ImgIdx, 128, 128, 128, A);
            }

            // Draw current selection
            if (CircuitIdx == pState->CircuitIdx && VerifySelectedTrack(pState, g_SelectedTrackIdx) == TrackIdx)
            {
                ImgVisible(ImgIdx, false);
                ImgVisible(98, true);
                ImgPosition(98, TrackPosX + 50, 89);
                ImgScale(98, 0.6667f, 0.6667f);
                ImgColor(98, 50, 255, 255, 255);
            }
        }
    }

    // FUN_00440af0
    // Returns number of unlocked tracks in given circuit
    int32_t VerifySelectedTrack(MenuState* pState, int32_t SelectedTrackIdx)
    {
        bool bIsPlayable;
        uint8_t TrackCount = 0;
        const uint8_t NumTracks = DBTracks::GetTrackCount(pState->CircuitIdx);
        if (NumTracks == 0)
        {
            return -1;
        }
        while ((bIsPlayable = IsTrackPlayable(pState, pState->CircuitIdx, TrackCount), !bIsPlayable || (TrackCount != SelectedTrackIdx)))
        {
            TrackCount++;
            if (TrackCount >= NumTracks)
            {
                return -1;
            }
        }
        return TrackCount;
    }
    
    // FUN_00440a00
    uint8_t GetRequiredPlaceToProceed(uint8_t CircuitIdx, uint8_t TrackIdx)
    {
        if (CircuitIdx > 2 || TrackIdx > 5)
        {
            return 3;
        }
        return 4;
    }

    bool FUN_00440a20(int32_t CircuitIdx, int32_t TrackIdx)
    {
        const uint8_t Bits = TrackIdx * 2;
        uint8_t Beat = (g_aBeatTrackPlace[CircuitIdx] >> Bits) & 3;
        const uint8_t ReqPlace = GetRequiredPlaceToProceed(CircuitIdx, TrackIdx);
        const bool bNextTrackSelectable = g_aTracksSelectableTournament[CircuitIdx] & (1 << (TrackIdx + 1));

        if ((ReqPlace > 3 || Beat != 0) && (CircuitIdx > 2 || bNextTrackSelectable))
        {
            return false;
        }
        return true;
    }

    // FUN_0043b240
    void MenuTrackSelection()
    {
        int iVar1;
        char* pcVar2;
        int32_t uVar6;
        char local_100[256];

        rcr_sprintf(local_100, "~f5~sVersion: %s", VERSION.ToString());
        UIText(5, 5, 255, 255, 255, 255, local_100);

        MenuState* pState = g_pMenuState;
        const TrackInfo Track = DBTracks::GetTrackInfo(pState->TrackID);

                EXT::Version SelectedTrackBuildVersion = DBTracks::GetTrackBuildVersion(pState->TrackID);
        const bool bSelectedTooNew = SelectedTrackBuildVersion > VERSION;

        if (DAT_004c4000 != 0)
        {
            DAT_004c4000 = 0;
            FUN_0045bee0(pState, 0x25, 0xffffffff, 0);
            DAT_0050c54c = 0;

            if (pState->Field_0x0C == 12)
            {
                DAT_00e295a0 = 1.0f;
            }
            if ((pState->Field_0x0C == 9) || (pState->Field_0x0C == 1))
            {
                pState->CircuitIdx = 0;
            }

            HandleCircuit(pState);
            iVar1 = pState->Field_0x0C;
            if ((iVar1 == 9) || (iVar1 == 1))
            {
                g_SelectedTrackIdx = 0;
                if (pState->bIsTournament)
                {
                    if (!FUN_00440a20(pState->CircuitIdx, g_TracksInCurrentCircuit - 1))
                    {
                        g_SelectedTrackIdx = g_TracksInCurrentCircuit - 1;
                    }
                }
            }
            else
            {
                FUN_0043b1d0(pState);
            }

            InitTracks(pState, true);
            DAT_0050c134 = Track.PlanetIdx;
            DAT_0050c17c = pState->CircuitIdx;
        }

        if (DAT_0050c54c == 0)
        {
            if (DAT_00e295d4 == g_SelectedTrackIdx)
            {
                uVar6 = 0x40533333;
                DAT_0050c134 = Track.PlanetIdx;
                DAT_0050c17c = pState->CircuitIdx;
                goto LAB_0043b357;
            }
        }
        else
        {
            uVar6 = 0xc0533333;
        LAB_0043b357:
            FUN_00469b90(float(uVar6));
        }

        if (DAT_00e295a0 > 0.0f && pState->TrackID >= 0)
        {
            DrawHoloPlanet(pState, (int)DAT_0050c134, DAT_00e295a0 * 0.5f);
        }
        if (DAT_0050c54c != 0)
        {
            return;
        }

        const int32_t SelectedTrackIdx = VerifySelectedTrack(pState, g_SelectedTrackIdx);
        if (SelectedTrackIdx >= 0)
        {
            if (pState->CircuitIdx < 4)
            {
                pState->TrackID = g_aTrackIDs[pState->CircuitIdx * 7 + SelectedTrackIdx];
            }
            else
            {
                pState->TrackID = pState->CircuitIdx * 7 + SelectedTrackIdx;
            }

            // Draw "Planet not loaded!!!" warning
            if ((Track.LoadModel == -1) || (Track.LoadSpline == -1))
            {
                const char* pText = StrSanitise(g_pTxtPlanetNotLoaded);
                rcr_sprintf(local_100, pText);

                // The following I decompiled by hand, Ghidra returned just trash
                int32_t a = FUN_004816b0();
                float b = float(a) * DAT_004ac86c * DAT_004ac93c;
                int32_t B = int32_t(b);

                a = FUN_004816b0();
                b = float(a) * DAT_004ac86c * DAT_004ac93c;
                int32_t G = int32_t(b);

                a = FUN_004816b0();
                b = float(a) * DAT_004ac86c * DAT_004ac93c;
                int32_t R = int32_t(b);

                UIText(160, 205, R, G, B, 255, local_100);
            }

            const char* pTrackName = DBTracks::GetTrackName(pState->TrackID);
            rcr_sprintf(local_100, "~c~s%s", pTrackName);
            UIText(160, 54, 0, 255, 0, 255, local_100);
            pcVar2 = local_100;
            FUN_0042de10(pcVar2, 0);
            FUN_0042de10(local_100, 0);
        }
        else
        {
            pState->TrackID = -1;
        }

        MenuAxisHorizontal(nullptr, 55);

        uint8_t R, G, B;
        const char* pTxtCircuit = nullptr;
        switch (pState->CircuitIdx)
        {
            case 0:
            {
                pTxtCircuit = StrSanitise(g_pTxtCircuitAmateur);
                B = 255;
                G = 255;
                R = 50;
                break;
            }
            case 1:
            {
                pTxtCircuit = StrSanitise(g_pTxtCircuitSemiPro);
                B = 62;
                G = 255;
                R = 68;
                break;
            }
            case 2:
            {
                pTxtCircuit = StrSanitise(g_pTxtCircuitGalactic);
                B = 17;
                G = 190;
                R = 163;
                break;
            }
            case 3:
            {
                pTxtCircuit = StrSanitise(g_pTxtCircuitInvitational);
                B = 32;
                G = 89;
                R = 157;
                break;
            }
            default:
            {
                assert(pState->TrackID >= 28);

                char BufferPage[128];
                rcr_sprintf(BufferPage, "~c~sCustom Tracks - Page %u/%u", pState->CircuitIdx - 3, DBTracks::GetCircuitCount(true) - 4);
                pTxtCircuit = StrSanitise(BufferPage);
                B = DBTracks::COLOR_B;
                G = DBTracks::COLOR_G;
                R = DBTracks::COLOR_R;

                rcr_sprintf(local_100, "~f4~sBuild for: %s", SelectedTrackBuildVersion.ToString());
                if (bSelectedTooNew)
                {
                    UIText(55, 80, 255, 50, 50, 255, local_100);
                    EXT::DrawTextBox(55, 150, 255, 50, 50, 255, "~f4~s", "Please update!", 17, 7, 8);
                }
                else
                {
                    UIText(55, 80, 50, 255, 255, 255, local_100);
                    const char* pDescription = "Brief description of the track";
                    EXT::DrawTextBox(55, 150, 50, 255, 255, 255, "~f4~s", pDescription, 17, 7, 8);
                }
                break;
            }
        }
        UIText(160, 34, R, G, B, 255, pTxtCircuit);

        const char* pTextMode = nullptr;
        if (!pState->bIsTournament)
        {
            if (pState->Field_0x6D != 0)
            {
                pTextMode = StrSanitise(g_pTxtTimeAttack);
                goto LAB_0043b5c4;
            }
            if (pState->Field_0x70 == 2)
            {
                pTextMode = StrSanitise(g_pTxt2Player);
                goto LAB_0043b5c4;
            }
            pTextMode = g_pTxtFreePlay;
        }
        else
        {
            pTextMode = g_pTxtTournament;
        }
        pTextMode = StrSanitise(pTextMode);

    LAB_0043b5c4:
        rcr_sprintf(local_100, pTextMode);
        UIText(160, 24, 50, 255, 255, 255, local_100);

        DrawTracks(pState, DAT_0050c17c);
        if (pState->TrackID >= 0)
        {
            //static uint16_t ImgIdx = 99;
            //static bool bDown[2] = { false, false };
            //if (GetKeyState(VK_ADD) & 0xF0 && !bDown[0])
            //{
            //    bDown[0] = true;
            //    ImgIdx++;
            //}
            //else if (!(GetKeyState(VK_ADD) & 0xF0) && bDown[0])
            //{
            //    bDown[0] = false;
            //}    
            //if (GetKeyState(VK_SUBTRACT) & 0xF0 && !bDown[1])
            //{
            //    bDown[1] = true;
            //    ImgIdx--;
            //}
            //else if (!(GetKeyState(VK_SUBTRACT) & 0xF0) && bDown[1])
            //{
            //    bDown[1] = false;
            //}

            // TODO: Custom Planets?
            if (Track.PlanetIdx < 8)
            {
                // Draw planet preview image
                const uint16_t ImgIdx = Track.PlanetIdx + 69;
                ImgVisible(ImgIdx, true);
                ImgPosition(ImgIdx, 160, 150);
                ImgScale(ImgIdx, 1.0f, 1.0f);
                ImgColor(ImgIdx, 255, 255, 255, 255);

                const char* pPlanetName = g_aPlanetNames[Track.PlanetIdx].Name;
                UIText(224, 143, 0, 255, 0, 255, pPlanetName);
            }
        }

        FUN_0043fe90(0x2d, 0x54, 0x1e);
        if (DAT_0050c54c == 0)
        {
            FUN_00469c30(0, 1.0f, 1);
            uint32_t& puVar2 = DAT_0050c918;
            if (DAT_004eb39c == 0)
            {
                if (DAT_004d6b48 != 0 && (IsFreePlay() == 0 || FUN_0041d6c0()!= 0) && pState->TrackID >= 0 && !bSelectedTooNew)
                {
                    if (g_bIsFreePlay != 0)
                    {
                        FUN_004118b0();
                        return;
                    }
                    if (DAT_00e2a698 != 0)
                    {
                        return;
                    }

                    FUN_00440550(0x54);
                    InitTracks(pState, false);
                    SetMenuIdx(pState, 13);
                    DAT_0050c54c = 1;
                    return;
                }
                if ((DAT_004d6b44 != 0) && (DAT_00e2a698 == 0))
                {
                    if (g_bIsFreePlay)
                    {
                        FUN_004118b0();
                        return;
                    }

                    FUN_00440550(0x4d);
                    if (IsFreePlay() && FUN_0041d6c0() != 0)
                    {
                        return;
                    }
                    InitTracks(pState, false);
                    SetMenuIdx(pState, 9);
                    return;
                }
            }
            uint8_t CircuitIdx = pState->CircuitIdx;
            if (DAT_0050c17c == CircuitIdx)
            {
                // Move down
                if ((puVar2 & 0x8000) != 0)
                {
                    if (CircuitIdx < g_CircuitIdxMax)
                    {
                        pState->CircuitIdx++;
                        DAT_00e295d4 = -1;
                        FUN_00440550(0x58);
                        HandleCircuit(pState);
                    }
                    else
                    {
                        FUN_00440550(0x4b);
                    }
                }

                // Move up
                if ((puVar2 & 0x4000) != 0)
                {
                    if (pState->CircuitIdx < 1)
                    {
                        FUN_00440550(0x4b);
                    }
                    else
                    {
                        pState->CircuitIdx--;
                        DAT_00e295d4 = -1;
                        FUN_00440550(88);
                        HandleCircuit(pState);
                    }
                }
            }

            if (pState->TrackID >= 0)
            {
                DAT_00ea02b0 = (int)pState->TrackID;
                if (!IsFreePlay() || FUN_0041d6c0() != 0)
                {
                    g_LoadTrackModel = Track.LoadModel;
                    FUN_0041e5a0();
                }
            }
        }
    }

    // FUN_0043b880
    void MenuTrackInfo(MenuState* pState)
    {
        int8_t iVar3;
        char cVar4;
        int iVar6;
        int8_t uVar13;
        int32_t uVar18;
        char local_40[64];

        if (g_uNumRacers == 0)
        {
            g_uNumRacers = 12;
        }
        if (DAT_0050c55c == 0)
        {
            DAT_0050c55c = 2;
        }

        iVar3 = DAT_0050c560;
        if (DAT_004c4000 != 0)
        {
            DAT_004c4000 = 0;
            FUN_0045bee0(pState, 0x25, -1, 0);
            DAT_0050c550 = 0;
            DAT_0050c554 = 0;

            if (pState->Field_0x0C == 12)
            {
                DAT_00e295a0 = 1.0;
            }

            HandleCircuits(pState);
            if (pState->Field_0x0C != 12)
            {
                FUN_0043b1d0(pState);
            }

            DAT_0050c430[0]  = 0xff;
            DAT_0050c430[1]  = 0xff;
            DAT_0050c430[2]  = 0xff;
            DAT_0050c430[3]  = 0xff;
            DAT_0050c430[4]  = 0xff;
            DAT_0050c430[5]  = 0xff;
            DAT_0050c430[6]  = 0xff;
            DAT_0050c430[7]  = 0xff;
            DAT_0050c430[8]  = 0xff;
            DAT_0050c430[9]  = 0xff;
            DAT_0050c430[10] = 0xff;
            DAT_0050c430[11] = 0xff;
            DAT_0050c560 = 0;

            if (BeatEverything1stPlace(pState))
            {
                iVar6 = DAT_0050c560;
                DAT_0050c560 = DAT_0050c560 + 1;
                DAT_0050c430[iVar6] = 0;
            }
            if (!pState->bIsTournament)
            {
                iVar3 = DAT_0050c560 + 1;
                DAT_0050c430[DAT_0050c560] = 2;
                if (pState->Field_0x6D != 0)
                {
                    goto LAB_0043b9b4;
                }
                DAT_0050c560 = DAT_0050c560 + 2;
                DAT_0050c430[iVar3] = 3;
                DAT_0050c430[DAT_0050c560] = 4;
            }
            else
            {
                int32_t NumUnlockedTracks = VerifySelectedTrack(pState, g_SelectedTrackIdx);
                iVar6 = FUN_00440a20(pState->CircuitIdx, NumUnlockedTracks);
                iVar3 = DAT_0050c560;
                if (iVar6 == 0)
                {
                    goto LAB_0043b9b4;
                }
                DAT_0050c430[DAT_0050c560] = 1;
            }
            iVar3 = DAT_0050c560 + 1;
        }

    LAB_0043b9b4:
        DAT_0050c560 = iVar3;
        const int32_t NumUnlockedTracks = VerifySelectedTrack(pState, g_SelectedTrackIdx);
        const uint8_t ReqPlaceToProcceed = GetRequiredPlaceToProceed(pState->CircuitIdx, NumUnlockedTracks);
        
        int32_t PosY = 160;
        if (DAT_0050c554 == 0 && DAT_0050c560 > 0)
        {
            for (int8_t i = 0; i < DAT_0050c560; i++)
            {
                if (DAT_0050c430[i] > 6)
                {
                    assert(false);
                    continue;
                }

                const char* pText = nullptr;
                switch (DAT_0050c430[i])
                {
                    case 0:
                    {
                        pText = StrSanitise(g_pTxtMirror);
                        UITextMenu(pState, 30, PosY, 10, DAT_0050c550, i, pText);
                        if (pState->Field_0x6E != 0)
                        {
                            pText = StrSanitise(g_pTxtOn);
                            uVar13 = (int8_t)DAT_0050c550;
                            goto LAB_0043be29;
                        }
                        pText = StrSanitise(g_pTxtOff);
                        goto LAB_0043be20;
                    }

                    // Tournament track winnings
                    case 1:
                    {
                        if (pState->WinningsID == 1)
                        {
                            pText = StrSanitise(g_pTxtFair);
                        }
                        else if (pState->WinningsID == 2)
                        {
                            pText = StrSanitise(g_pTxtSkilled);
                        }
                        else // == 3
                        {
                            assert(pState->WinningsID == 3);
                            pText = StrSanitise(g_pTxtWinnerTakesAll);
                        }

                        UITextMenu(pState, 30, PosY, 10, DAT_0050c550, i, StrSanitise(g_pTxtWinnings));
                        UITextMenu(pState, 85, PosY, 10, DAT_0050c550, i, pText);

                        UITextMenu(pState, 45, PosY + 10, 10, DAT_0050c550, i, StrSanitise(g_pTxt1st));
                        UITextMenu(pState, 45, PosY + 20, 10, DAT_0050c550, i, StrSanitise(g_pTxt2nd));
                        UITextMenu(pState, 45, PosY + 30, 10, DAT_0050c550, i, StrSanitise(g_pTxt3rd));
                        if (ReqPlaceToProcceed == 4)
                        {
                            UITextMenu(pState, 45, PosY + 40, 10, DAT_0050c550, i, StrSanitise(g_pTxt4th));
                        }

                        uint16_t PosYIt = PosY + 10;
                        for (int8_t j = 0; j < ReqPlaceToProcceed; j++)
                        {
                            float fTruguts = 1.0 + pState->CircuitIdx * 0.5;
                            fTruguts *= pState->Truguts[pState->WinningsID - 1].Truguts[j];
                            pText = StrSanitise("~f0~r~s%d");
                            rcr_sprintf(local_40, pText, (int)fTruguts);
                            UITextMenu(pState, 105, PosYIt, 10, DAT_0050c550, i, local_40);
                            PosYIt = PosYIt + 10;
                        }

                        continue;
                    }
                    case 2:
                    {
                        pText = StrSanitise("~f0~s%d");
                        rcr_sprintf(local_40, pText, pState->NumLaps);
                        pText = g_pTxtLaps;
                        break;
                    }
                    case 3:
                    {
                        pText = StrSanitise("~f0~s%d");
                        rcr_sprintf(local_40, pText, g_uNumRacers);
                        if (pState->Field_0x70 > 1)
                        {
                            pText = StrSanitise("~f0~s%d");
                            rcr_sprintf(local_40, pText, DAT_0050c55c);
                        }
                        pText = g_pTxtRacers;
                        goto LAB_0043bd30;
                    }
                    case 4:
                    {
                        if (pState->AISpeed == 1)
                        {
                            pText = StrSanitise(g_pTxtSlow);
                        }
                        else if (pState->AISpeed == 2)
                        {
                            pText = StrSanitise(g_pTxtAverage);
                        }
                        else
                        {
                            pText = StrSanitise(g_pTxtFast);
                        }
                        rcr_sprintf(local_40, pText);
                        pText = g_pTxtAISpeed;

                    LAB_0043bd30:
                        pText = StrSanitise(pText);
                        UITextMenu(pState, 30, PosY, 10, DAT_0050c550, i, pText);
                        pText = local_40;
                        uVar13 = DAT_0050c550;
                        goto LAB_0043be29;
                    }
                    case 5:
                    {
                        pText = StrSanitise(g_pTxtDemoMode);
                        UITextMenu(pState, 30, PosY, 10, DAT_0050c550, i, pText);
                        if (pState->Field_0x64 != 0)
                        {
                            pText = StrSanitise(g_pTxtOn);
                            goto LAB_0043be20;
                        }
                        pText = StrSanitise(g_pTxtOff);
                        uVar13 = DAT_0050c550;
                        goto LAB_0043be29;
                    }
                    case 6:
                    {
                        if (pState->Field_0x68 < 0)
                        {
                            pText = StrSanitise(g_pTxtOff2);
                            rcr_sprintf(local_40, pText);
                        }
                        else
                        {
                            pText = StrSanitise("~s%d");
                            rcr_sprintf(local_40, pText, pState->Field_0x68 + 1);
                        }
                        pText = g_pTxtCutscene;
                    }
                }
                pText = StrSanitise(pText);
                UITextMenu(pState, 30, PosY, 10, (char)DAT_0050c550, i, pText);

            LAB_0043be20:
                uVar13 = DAT_0050c550;

            LAB_0043be29:
                UITextMenu(pState, 85, PosY, 10, uVar13, i, local_40);

                PosY = PosY + 10;
            }
        }

        if (DAT_0050c554 == 0)
        {
            uVar18 = 0x40533333;
        }
        else
        {
            uVar18 = 0xc0533333;
        }

        FUN_00469b90(uVar18);

        TrackInfo Info = DBTracks::GetTrackInfo(pState->TrackID);
        if (DAT_00e295a0 > 0.0)
        {
            DrawHoloPlanet(pState, Info.PlanetIdx, DAT_00e295a0 * 0.5);
        }
        
        if (DAT_0050c554 == 0 && DAT_0050c554 == 0)
        {
            if (pState->TrackID < 28)
            {
                DrawTrackPreview(pState, pState->TrackID, 0.5);
            }

            // if ((Info.LoadModel == -1) ||
            //     (Info.LoadSpline == -1))
            // {
            //     pcVar7 = StrSanitise(g_TxtPlanetNotLoaded);
            //     rcr_sprintf(local_40, pcVar7);
            //     pcVar7 = local_40;
            //     uVar15 = 0xff;
            //     uVar16 = 0xff;
            //     uVar17 = 0xffff;
            //     FUN_004816b0();
            //     lVar12 = __ftol((double)CONCAT44(pcVar7, CONCAT22(uVar17, CONCAT11(uVar16, uVar15))));
            //     uVar5 = (undefined)lVar12;
            //     uVar13 = (undefined)((ulonglong)lVar12 >> 8);
            //     uVar14 = (undefined2)((ulonglong)lVar12 >> 0x10);
            //     FUN_004816b0();
            //     lVar12 = __ftol((double)CONCAT26(uVar17, CONCAT15(uVar16, CONCAT14(uVar15, CONCAT22(uVar14,
            //         CONCAT11(uVar13, uVar5))))));
            //     uVar18 = (undefined4)lVar12;
            //     FUN_004816b0();
            //     lVar12 = __ftol((double)CONCAT26(uVar14, CONCAT15(uVar13, CONCAT14(uVar5, uVar18))));
            //     UIText(0xa0, 0xcd, (int)lVar12, uVar18, CONCAT22(uVar14, CONCAT11(uVar13, uVar5)),
            //         CONCAT22(uVar17, CONCAT11(uVar16, uVar15)), pcVar7);
            // }

            // Track Name
            const char* pTrackName = GetTrackName(pState->TrackID);
            pTrackName = StrSanitise(pTrackName);
            rcr_sprintf(local_40, "~c~s%s", pTrackName);
            UIText(0xa0, 0x25, 0, 0xff, 0, 0xff, local_40);
            FUN_0042de10(local_40, 0);
            FUN_0042de10(local_40, 0);
            MenuAxisHorizontal(nullptr, 38);

            if (pState->TrackID < 28)
            {
                DrawRecord(pState, 100, 55, 0x437f0000, 0);
                DrawRecord(pState, 220, 55, 0x437f0000, 3);

                // Record 3 Laps
                iVar6 = pState->Field_0x6E + pState->TrackID * 2;
                if (pState->TrackID < 28 && DAT_00e365f4[iVar6] < 3599.0f)
                {
                    uint8_t PilotIdx = DAT_00e37404[iVar6];
                    const char* pNameFirst = StrSanitise(g_aPilotInfos[PilotIdx].NameFirst);
                    const char* pNameLast = StrSanitise(g_aPilotInfos[PilotIdx].NameLast);
                    rcr_sprintf(local_40, "~f4~c~s%s %s", pNameFirst, pNameLast);
                    UIText(100, 78, 163, 190, 17, 255, local_40);
                    ImgVisible(23 + PilotIdx, true);
                    ImgPosition(23 + PilotIdx, 84, 85);
                    ImgScale(23 + PilotIdx, 0.5, 0.5);
                    ImgColor(23 + PilotIdx, 255, 255, 255, 255);
                }

                // Record Best Lap
                iVar6 = pState->Field_0x6E + pState->TrackID * 2;
                if (pState->TrackID < 28 && DAT_00e366bc[iVar6] < 3599.0f)
                {
                    uint8_t PilotIdx = DAT_00e37436[iVar6];
                    const char* pNameFirst = StrSanitise(g_aPilotInfos[PilotIdx].NameFirst);
                    const char* pNameLast = StrSanitise(g_aPilotInfos[PilotIdx].NameLast);
                    rcr_sprintf(local_40, "~f4~c~s%s %s", pNameFirst, pNameLast);

                    UIText(220, 78, 163, 190, 17, 255, local_40);
                    ImgVisible(46 + PilotIdx, true);
                    ImgPosition(46 + PilotIdx, 204, 85);
                    ImgScale(46 + PilotIdx, 0.5, 0.5);
                    ImgColor(46 + PilotIdx, 255, 255, 255, 255);
                }
            }
            else
            {
                UIText(160, 75, 50, 255, 255, 255, "~f5~s~cRecords not available");
                UIText(160, 90, 50, 255, 255, 255, "~f5~s~cfor custom tracks");
            }

            // Track Favorite
            uint8_t FavPilotIdx = Info.FavoritePilot;
            const char* pNameFirst = StrSanitise(g_aPilotInfos[FavPilotIdx].NameFirst);
            const char* pNameLast = StrSanitise(g_aPilotInfos[FavPilotIdx].NameLast);

            UIText(240, 130, 50, 255, 255, 255, StrSanitise(g_pTxtTrackFavorite));
            rcr_sprintf(local_40, "~f4~c~s%s %s", pNameFirst, pNameLast);
            UIText(240, 137, 163, 190, 17, 255, local_40);
            ImgVisible(FavPilotIdx, true);
            ImgPosition(FavPilotIdx, 208, 145);
            ImgScale(FavPilotIdx, 1.0, 1.0);
            ImgColor(FavPilotIdx, 255, 255, 255, 255);
        
            // "Must place xxx or better to progress"
            if (pState->bIsTournament)
            {
                iVar6 = VerifySelectedTrack(pState, g_SelectedTrackIdx);
                iVar6 = FUN_00440a20(pState->CircuitIdx, iVar6);
                if (iVar6 != 0)
                {
                    const char* pMinPlace = ReqPlaceToProcceed == 3 ? g_pTxtMinPlace3rd : g_pTxtMinPlace4th;
                    pMinPlace = StrSanitise(pMinPlace);
                    UIText(160, 115, 163, 190, 17, 255, pMinPlace);
                }
            }

            if (DAT_0050c554 == 0 && DAT_00e295a0 >= 1.0)
            {
                if (DAT_004eb39c == 0)
                {
                    if (DAT_004d6b48 != 0 && DAT_00e2a698 == 0)
                    {
                        FUN_00440550(84);
                        if (!pState->bIsTournament)
                        {
                            if (pState->Field_0x6D == 0)
                            {
                                if (pState->Field_0x70 < 2)
                                {
                                    if (pState->Field_0x64 == 0 || g_uNumRacers != 2)
                                    {
                                        pState->Field_0x72 = g_uNumRacers;
                                    }
                                    else
                                    {
                                        pState->Field_0x72 = 1;
                                    }
                                }
                                else
                                {
                                    pState->Field_0x72 = DAT_0050c55c;
                                }
                            }
                            else
                            {
                                pState->Field_0x72 = 1;
                            }
                        }
                        else
                        {
                            pState->Field_0x72 = 12;
                        }
                        InitTracks(pState, false);
                        FUN_0045bee0(pState, 0x24, 3, 0);
                        DAT_0050c554 = 1;
                        return;
                    }
                    if (DAT_004d6b44 != 0 && DAT_00e2a698 == 0)
                    {
                        FUN_00440550(36);
                        InitTracks(pState, false);
                        SetMenuIdx(pState, 12);
                        return;
                    }
                }
                if (DAT_0050c560 > 1)
                {
                    if ((DAT_0050c918 & 0x4000) != 0)
                    {
                        DAT_0050c550--;
                        FUN_00440550(88);
                    }
                    if ((DAT_0050c918 & 0x8000) != 0)
                    {
                        DAT_0050c550++;
                        FUN_00440550(88);
                    }
                    if (DAT_0050c550 < 0)
                    {
                        DAT_0050c550 = DAT_0050c560 - 1;
                    }
                    if ((DAT_0050c560 - 1) < DAT_0050c550)
                    {
                        DAT_0050c550 = 0;
                    }
                }
                if (DAT_0050c560 > 0)
                {
                    if ((DAT_0050c918 & 0x20000) != 0)
                    {
                        switch (DAT_0050c430[DAT_0050c550])
                        {
                            case 0:
                            {
                                pState->Field_0x6E = pState->Field_0x6E == 0;
                                break;
                            }
                            case 1:
                            {
                                pState->WinningsID++;
                                break;
                            }
                            case 2:
                            {
                                pState->NumLaps++;
                                break;
                            }
                            case 3:
                            {
                                if (pState->Field_0x70 < 2)
                                {
                                    if (g_uNumRacers == 1)
                                    {
                                        g_uNumRacers = 2;
                                    }
                                    else if (g_uNumRacers < 20)
                                    {
                                        g_uNumRacers += 2;
                                    }
                                }
                                else
                                {
                                    cVar4 = DAT_0050c55c + 2;
                                    DAT_0050c55c = cVar4;
                                    if (cVar4 == 8)
                                    {
                                        DAT_0050c55c = 2;
                                    }
                                }
                                break;
                            }
                            case 4:
                            {
                                pState->AISpeed++;
                                break;
                            }
                            case 5:
                            {
                                pState->Field_0x64 = pState->Field_0x64 == 0;
                                break;
                            }
                            case 6:
                            {
                                pState->Field_0x68++;
                            }
                        }
                        FUN_00440550(88);
                    }
                    if ((DAT_0050c918 & 0x10000) != 0)
                    {
                        switch (DAT_0050c430[DAT_0050c550])
                        {
                            case 0:
                            {
                                pState->Field_0x6E = pState->Field_0x6E == 0;
                                break;
                            }
                            case 1:
                            {
                                pState->WinningsID--;
                                break;
                            }
                            case 2:
                            {
                                pState->NumLaps--;
                                break;
                            }
                            case 3:
                            {
                                if (pState->Field_0x70 < 2)
                                {
                                    if (g_uNumRacers == 2)
                                    {
                                        g_uNumRacers = 1;
                                    }
                                    else if (g_uNumRacers > 2)
                                    {
                                        g_uNumRacers -= 2;
                                    }
                                }
                                else
                                {
                                    cVar4 = DAT_0050c55c - 2;
                                    DAT_0050c55c = cVar4;
                                    if (cVar4 == 0)
                                    {
                                        DAT_0050c55c = 6;
                                    }
                                }
                                break;
                            }
                            case 4:
                            {
                                pState->AISpeed--;
                                break;
                            }
                            case 5:
                            {
                                pState->Field_0x64 = pState->Field_0x64 == 0;
                                break;
                            }
                            case 6:
                            {
                                pState->Field_0x68--;
                                break;
                            }
                        }
                        FUN_00440550(88);
                    }
                }
                if (pState->NumLaps < 1)
                {
                    pState->NumLaps = 5;
                }
                if (pState->NumLaps > 5)
                {
                    pState->NumLaps = 1;
                }
                if (pState->AISpeed < 1)
                {
                    pState->AISpeed = 3;
                }
                if (pState->AISpeed > 3)
                {
                    pState->AISpeed = 1;
                }
                if (pState->WinningsID < 1)
                {
                    pState->WinningsID = 3;
                }
                if (pState->WinningsID > 3)
                {
                    pState->WinningsID = 1;
                }
                if (pState->Field_0x68 < -1)
                {
                    pState->Field_0x68 = 20;
                }
                if (pState->Field_0x68 > 20)
                {
                    pState->Field_0x68 = -1;
                }

                if (IsFreePlay() || FUN_0041d6c0() != 0)
                {
                    g_LoadTrackModel = Info.LoadModel;
                    FUN_0041e5a0();
                }
            }
        }
    }

    // FUN_004368a0
    void MenuStartRace(MenuState *pState)
    {
        bool bVar1;
        float fVar2;
        char cVar3;
        int32_t uVar4;
        int iVar5;
        int iVar6;
        char cVar7;
        int iVar8;
        float10 fVar9;
        char *pcVar10;
        char local_71;
        float local_6c[3];
        char local_60[32];
        uint8_t local_40[16];   // Struct?
        float local_30[12];
        
        const char* pTrackName = DBTracks::GetTrackName(pState->TrackID);
        rcr_sprintf(local_60, "~f5~s~c%s", pTrackName);
        UIText(160, 40, 255, 255, 255, 255, local_60);

        iVar8 = -1;
        DAT_0050c480 = 0;
        if (DAT_004c4000 != 0)
        {
            DAT_004c4000 = 0;
            if (pState->Field_0x0C == 13)
            {
                pState->Field_0x5F = 0;
            }

            Vec3Sub(local_6c, DAT_00e298f0, DAT_00e2af90);
            fVar9 = (float10)Vec3Mag(local_6c);
            DAT_0050c11c = (float)fVar9;
            FUN_0042f9b0(local_6c);
            fVar9 = (float10)FUN_0042f560(-local_6c[0], local_6c[1]);
            DAT_0050c2e8[1] = fVar9;
            fVar9 = (float10)FUN_0042f3e0(local_6c[2]);
            DAT_0050c2e8[0] = fVar9;

            if (DAT_0050c2e8[1] < 0.0)
            {
                DAT_0050c2e8[1] += 360.0;
            }
            if (DAT_0050c2e8[1] > 360.0)
            {
                DAT_0050c2e8[1] -= 360.0;
            }
            if (DAT_0050c2e8[0] < -90.0)
            {
                DAT_0050c2e8[0] += 180.0;
            }
            if (DAT_0050c2e8[0] > 90.0)
            {
                DAT_0050c2e8[0] -= 180.0;
            }

            cVar7 = 1;
            DAT_0050c308[0] = 0;
            DAT_0050c308[1] = 0xff;
            DAT_0050c308[2] = 0xff;
            DAT_0050c308[3] = 0xff;
            DAT_0050c308[4] = 0xff;
            DAT_0050c308[5] = 0xff;
            DAT_0050c308[6] = 0xff;
            DAT_0050c308[7] = 0xff;
            DAT_0050c308[8] = 0xff;
            DAT_0050c308[9] = 0xff;
            DAT_0050c308[10] = 0xff;
            DAT_0050c308[11] = 0xff;

            if (pState->Field_0x70 == 1)
            {
                DAT_0050c308[0] = 0;
                DAT_0050c308[1] = 1;
                DAT_0050c308[2] = 0xff;
                DAT_0050c308[3] = 0xff;
                cVar7 = 2;
            }

            cVar3 = cVar7;
            if (pState->bIsTournament)
            {
                DAT_0050c308[cVar7] = 2;
                DAT_0050c308[(char)(cVar7 + 1)] = 3;
                cVar3 = cVar7 + 3;
                DAT_0050c308[(char)(cVar7 + 2)] = 4;
                if (DAT_00e35aa0 < 4)
                {
                    iVar6 = (int)cVar3;
                    cVar3 = cVar7 + 4;
                    DAT_0050c308[iVar6] = 5;
                }
            }

            DAT_0050c524 = cVar3 + 1;
            DAT_0050c308[cVar3] = 6;
        }

        FUN_00450560(160, 25, StrSanitise(g_pTxtMainMenu));

        uint16_t PosY = 80;
        for (uint8_t i = 0; i < DAT_0050c524; i++)
        {
            const char* pMenuEntry = nullptr;
            switch(DAT_0050c308[i])
            {
                case 0:
                {
                    pMenuEntry = "~f4~sLos Geht's"; //StrSanitise(g_pTxtStartRace);
                    break;
                }
                case 1:
                {
                    pMenuEntry = StrSanitise(g_pTxtInspectVehicle);
                    break;
                }
                case 2:
                {
                    pMenuEntry = StrSanitise(g_pTxtVehicleUpgrades);
                    break;
                }
                case 3:
                {
                    pMenuEntry = StrSanitise(g_pTxtBuyParts);
                    break;
                }
                case 4:
                {
                    pMenuEntry = StrSanitise(g_pTxtJunkyard);
                    break;
                }
                case 5:
                {
                    pMenuEntry = StrSanitise(g_pTxtBuyPitDroids);
                    break;
                }
                case 6:
                {
                    pMenuEntry = StrSanitise(g_pTxtChangeVehicle);
                    break;
                }
                case 7:
                {
                    pMenuEntry = StrSanitise(g_pTxtOptions);
                    break;
                }
            }

            rcr_sprintf(local_60, pMenuEntry);
            UITextMenu(pState, 60, PosY, 10, pState->Field_0x5F, i, local_60);
            PosY += 10;
        }

        for (uint8_t i = 0; i < pState->Field_0x70; i++)
        {
            if (((&DAT_0050c918)[i] & 0x8000) != 0)
            {
                cVar7 = pState->Field_0x5F + 1;
                pState->Field_0x5F = cVar7;
                if ((DAT_0050c524 - 1) < cVar7)
                {
                    pState->Field_0x5F = 0;
                }
                FUN_00440550(0x58);
            }
            if (((&DAT_0050c918)[i] & 0x4000) != 0)
            {
                cVar7 = pState->Field_0x5F + -1;
                pState->Field_0x5F = cVar7;
                if (cVar7 < 0)
                {
                    pState->Field_0x5F = DAT_0050c524 + -1;
                }
                FUN_00440550(88);
            }
            if (FUN_00485880(56, 0) != 0 || FUN_00485880(184,0) != 0 || FUN_00485880(42,0) != 0 || FUN_00485880(54,0) != 0)
            {
                fVar2 = DAT_0050c11c;
                bVar1 = false;
                DAT_0050c930 = 0;
                if (DAT_00e98ea0[i] > 0.1f || DAT_00e98ea0[i] < -0.1)
                {
                    bVar1 = true;
                    DAT_0050c2e8[1] = DAT_0050c2e8[1] - DAT_00e98ea0[iVar6] * DAT_00e22a50 * 105.0;
                }
                if (DAT_00e98e80[i] > 0.1 || DAT_00e98e80[i] < -0.1)
                {
                    DAT_0050c2e8[0] = DAT_0050c2e8[0] - DAT_00e98e80[i] * DAT_00e22a50 * -67.5;
                    if (DAT_0050c2e8[0] > 45.0)
                    {
                        DAT_0050c2e8[0] = 45.0;
                    }
                    if (DAT_0050c2e8[0] < -45.0)
                    {
                        DAT_0050c2e8[0] = -45.0;
                    }
                    bVar1 = true;
                }
                if (bVar1)
                {
                    FUN_00431020(local_40, DAT_0050c2e8[1], DAT_0050c2e8[0], 0);
                    FUN_0042fa80(DAT_00e2af90, DAT_00e298f0, -DAT_0050c11c, local_30);
                    if (DAT_0050c11c != fVar2)
                    {
                        fVar9 = (float10)FUN_0042f950(DAT_00e298f0,DAT_00e2af90);
                        DAT_0050c11c = (float)fVar9;
                    }
                    FUN_0044bb10(DAT_00e2ae80, 0xe298c0);
                }
            }
            if (DAT_004d6b44 != 0)
            {
                FUN_00440550(77);
                iVar8 = 3;
                DAT_004bfedc = 13;
            }
            if (DAT_004d6b48 != 0)
            {
                FUN_00440550(84);

                // Start Race
                if (pState->Field_0x5F == 0)
                {
                    iVar8 = -1;
                    FUN_0040a120(0);
                    FUN_00409d70(0xffffffff);
                    FUN_00409d70(0);

                    TrackInfo Info = DBTracks::GetTrackInfo(pState->TrackID);
                    FUN_00427d90(Info.PlanetIdx, Info.Unkn0);
                    
                    if (!IsFreePlay() || FUN_0041d6c0() != 0)
                    {
                        if (pState->bIsTournament && DAT_00e35a84 != Info.FavoritePilot && DAT_00ec8854 != 0.0f && DAT_0050c458 == 0)
                        {
                            DAT_004bfedc = 15;
                        }

                        DAT_0050c944 = 0xffffffff;
                        iVar8 = FUN_004409d0(DAT_00e35a60, DAT_004c0948);
                        if ((iVar8 != 0) && ((DAT_0050c908 & 4) != 0))
                        {
                            FUN_00440c10(pState);
                        }

                        FUN_0041e660();
                        return;
                    }
                }
                else
                {
                    switch (DAT_0050c308[pState->Field_0x5F])
                    {
                        case 1:
                        {
                            DAT_004bfedc = 8;
                            iVar8 = 2;
                            pState->Field_0x10 = 0;
                            FUN_0045a3e0();
                            break;
                        }
                        case 2:
                        {
                            DAT_004bfedc = 8;
                            iVar8 = 2;
                            pState->Field_0x10 = 1;
                            FUN_0045a3e0();
                            break;
                        }
                        case 3:
                        {
                            DAT_004bfedc = 7;
                            iVar8 = 0;
                            pState->Field_0x10 = 0;
                            break;
                        }
                        case 4:
                        {
                            iVar8 = 1;
                            DAT_004bfedc = 4;
                            break;
                        }
                        case 5:
                        {
                            DAT_004bfedc = 7;
                            iVar8 = 0;
                            pState->Field_0x10 = 1;
                            break;
                        }
                        case 6:
                        {
                            DAT_004bfedc = 9;
                            pState->Field_0x6F = i;
                            iVar8 = 3;
                            DAT_0050c480 = 1;
                            break;
                        }
                        case 7:
                        {
                            pState->Field_0x10 = 1;
                            return;
                        }
                    }
                }
            }
        }
        
        if (iVar8 != -1)
        {
            if (pState->Field_0x38 == iVar8)
            {
                SetMenuIdx(pState, DAT_004bfedc);
                return;
            }
            DAT_0050c944 = 0xffffffff;
        }
    }

    void FUN_0045b290(MenuState *pState, int* param_2, int param_3)
    {
        int8_t iVar1;
        uint8_t uVar2;
        char cVar3;
        int iVar4;
        int32_t unaff_ESI;
        int32_t unaff_EDI;
        int64_t lVar5;
        UnknStruct3 Unkn3;
        
        FUN_0045bb60();
        FUN_0045b5d0(pState);
        FUN_00408640(60);
        {
            uint8_t TrackID = 0;
            if (pState->Field_0x64 == 2)
            {
                pState->Field_0x70 = 1;
                pState->Field_0x72 = 3;
                do
                { //0x427bd4
                    do
                    {
                        // Not sure what this is exaclty...
                        pState->Field_0x00 = FUN_004816b0();
                        float hmk = (float)pState->Field_0x00;
                        hmk *= DAT_004acfa8;
                        hmk *= DAT_004ad1cc;
                        TrackID = (uint8_t)hmk;
                        pState->TrackID = TrackID;
                    } while (TrackID == 19);
                } while (DBTracks::GetTrackInfo(TrackID).LoadModel == -1 || DBTracks::GetTrackInfo(TrackID).Unkn0 != 0);
            }
        }

        if (DAT_0050ca3c != 0)
        {
            if ((pState->Field_0x14 & 8) != 0)
            {
                pState->TrackID = DAT_00e29890[DAT_0050c960];
            }
            pState->Field_0x64 = 1;
            DAT_00e364a8 = DAT_00e364a8 | 0x40;
        }

        iVar4 = IsFreePlay();
        if (iVar4 != 0)
        {
            FUN_0041bd90(1, 10, 120);
            pState->bIsTournament = false;
            uVar2 = FUN_00420f90();
            pState->Field_0x70 = uVar2;
            cVar3 = FUN_00420f90();
            pState->Field_0x72 = cVar3 + (char)DAT_00ea02b4;
            pState->TrackID = (int8_t)DAT_00ea02b0;
            pState->NumLaps = (uint8_t)DAT_00ea02b8;
        }
        if (DAT_0050ca3c != 0)
        {
            iVar1 = DAT_00e29890[DAT_0050c960];
            pState->Field_0x64 = 1;
            pState->TrackID = iVar1;
            DAT_00e364a8 = DAT_00e364a8 | 0x40;
        }

        FUN_00408640(0x46);
        iVar4 = IsFreePlay();
        if (iVar4 == 0)
        {
            Unkn3.Field_0x04 = FUN_0045b7d0(pState, param_2);
        }
        else
        {
            Unkn3.Field_0x04 = FUN_0045b610(pState, param_2);
        }

        Unkn3.Field_0x08 = (int32_t)(char)pState->Field_0x72;
        if (pState->Field_0x64 == 2)
        {
            Unkn3.Field_0x08 = 3;
        }
        else if (DAT_0050ca3c != 0)
        {
            Unkn3.Field_0x08 = 2;
        }

        Unkn3.Field_0x18 = -1;
        Unkn3.Field_0x20 = 0;

        TrackInfo Info = DBTracks::GetTrackInfo(pState->TrackID);
        Unkn3.LoadSpline = Info.LoadSpline;
        Unkn3.LoadModel = Info.LoadModel;

        if (pState->Field_0x64 == 2)
        {
            Unkn3.Field_0x20 = 0x1e;
        }
        else if (DAT_0050ca3c != 0)
        {
            Unkn3.Field_0x20 = 1000000;
        }

        Unkn3.Field_0x24 = (int32_t)(char)pState->NumLaps;
        if (pState->bIsTournament != false)
        {
            Unkn3.Field_0x24 = 3;
        }

        // Original fallback by LucasArts to "Mon Gazza Speedway"
        if (Unkn3.LoadModel == -1 || Unkn3.LoadSpline == -1)
        {
            Unkn3.LoadModel = g_aTrackInfos[16].LoadModel;
            Unkn3.LoadSpline = g_aTrackInfos[16].LoadSpline;
            Unkn3.PlanetIdx = g_aTrackInfos[16].PlanetIdx;
            Unkn3.Unkn0 = g_aTrackInfos[16].Unkn0;
        }

        if (param_3 == 0 && IsFreePlay() && pState->Field_0x64 != 2 && FUN_0041d6c0() != 0)
        {
            FUN_0041dd50(pState,&Unkn3);
        }

        FUN_00408640(80);
        FUN_0041bd50(1);
        Unkn3.Field_0x00 = 0x4265676e;
        FUN_00408640(90);
        if (pState->Field_0x68 > -1)
        {
            FUN_00445aa0(1);
            FUN_00447300(0x5363656e, 1);
            Unkn3.Field_0x04 = (int*)pState->Field_0x68;
            FUN_00450c50(0x5363656e, &Unkn3);
            return;
        }

        FUN_00449e30();
        FUN_00450c50(0x4a646765, &Unkn3);
        FUN_0045b210(pState);
        return;
    }
}
