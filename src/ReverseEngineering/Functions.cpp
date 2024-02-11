#include "Functions.h"
#include "CustomTracks.h"
#include "Helpers.h"
#include <windows.h>
#include <assert.h>
#include <stdio.h>

namespace FUN
{
    typedef void(FUN_0045bee0_t)(MenuState* pStruct, int param_2, int param_3, int32_t param_4);
    static FUN_0045bee0_t* FUN_0045bee0 = (FUN_0045bee0_t*)0x0045bee0;

    typedef int32_t(FUN_00440a20_t)(int32_t param_1, int32_t param_2);
    static  FUN_00440a20_t* FUN_00440a20 = (FUN_00440a20_t*)0x00440a20;

    typedef void(__cdecl FUN_0043b1d0_t)(MenuState* pStruct);
    static  FUN_0043b1d0_t* FUN_0043b1d0 = (FUN_0043b1d0_t*)0x0043b1d0;

    typedef float10(FUN_00469b90_t)(float param_1);
    static  FUN_00469b90_t* FUN_00469b90 = (FUN_00469b90_t*)0x00469b90;

    typedef void(FUN_00456800_t)(MenuState* pState, int PlanetIdx, float Scale);
    static  FUN_00456800_t* DrawHoloPlanet = (FUN_00456800_t*)0x00456800;

    // Something with strings
    // "/SCREENTEXT_508/~~Abyss" -> "Abyss"
    typedef const char*(FUN_00421360_t)(const char* param_1);
    static  FUN_00421360_t* StrSanitise = (FUN_00421360_t*)0x00421360;

    // sprintf, but idk yet whether it's custom or the LibC variant
    typedef int32_t (FUN_0049eb80_t)(char* pDst, const char* pFormat, ...);
    static  FUN_0049eb80_t* rcr_sprintf = (FUN_0049eb80_t*)0x0049eb80;

    typedef int32_t(FUN_004816b0_t)();
    static  FUN_004816b0_t* FUN_004816b0 = (FUN_004816b0_t*)0x004816b0;

    // Position in pixels from
    //   X:  0 - 320
    //   Y:  0 - 240
    // Text formatters:
    //  ~f0  Large (default)
    //  ~f4  Small
    //  ~c   Centered
    //  ~s   Shadow
    typedef void(FUN_00450530_t)(int16_t PosX, int16_t PosY, uint8_t R, uint8_t G, uint8_t B, uint8_t A, const char* pText);
    static  FUN_00450530_t* UIText = (FUN_00450530_t*)0x00450530;

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

    // Something with Hangar Menu
    typedef void(FUN_00454d40_t)(MenuState* pState, int param_2);
    static  FUN_00454d40_t* SetMenuIdx = (FUN_00454d40_t*)0x00454d40;

    typedef void(FUN_0041e5a0_t)();
    static  FUN_0041e5a0_t* FUN_0041e5a0 = (FUN_0041e5a0_t*)0x0041e5a0;

    typedef void(FUN_00440150_t)(char* pText, int param_2);
    static  FUN_00440150_t* FUN_00440150 = (FUN_00440150_t*)0x00440150;

    typedef void(FUN_004285d0_t)(uint16_t ImgIdx, int32_t bVisible);
    static  FUN_004285d0_t* ImgVisible = (FUN_004285d0_t*)0x004285d0;

    typedef void(FUN_00428660_t)(uint16_t ImgIdx, uint16_t PosX, uint16_t PosY);
    static  FUN_00428660_t* ImgPosition = (FUN_00428660_t*)0x00428660;

    // ImgSize ?
    typedef void(FUN_004286c0_t)(uint16_t ImgIdx, uint16_t param_2, uint16_t param_3);
    static  FUN_004286c0_t* FUN_004286c0 = (FUN_004286c0_t*)0x004286c0;

    typedef void(FUN_004286f0_t)(uint16_t ImgIdx, float ScaleX, float ScaleY);
    static  FUN_004286f0_t* ImgScale = (FUN_004286f0_t*)0x004286f0;

    typedef void(FUN_00428740_t)(uint16_t ImgIdx, uint8_t R, uint8_t G, uint8_t B, uint8_t A);
    static  FUN_00428740_t* ImgColor = (FUN_00428740_t*)0x00428740;

    typedef void(FUN_004287e0_t)(uint16_t ImgIdx, uint32_t Flag);
    static  FUN_004287e0_t* ImgSetFlag = (FUN_004287e0_t*)0x004287e0;

    typedef void(FUN_00428800_t)(uint16_t ImgIdx, uint32_t Flag);
    static  FUN_00428800_t* ImgResetFlag = (FUN_00428800_t*)0x00428800;

    typedef void(FUN_00412e20_t)();
    static  FUN_00412e20_t* FUN_00412e20 = (FUN_00412e20_t*)0x00412e20;


    constexpr uint8_t CustomR = 150;
    constexpr uint8_t CustomG = 80;
    constexpr uint8_t CustomB = 220;


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
            g_CircuitIdxMax = 3 + CustomTracks::GetCircuitCount();

            if (pState->CircuitIdx < 4)
            {
                for (int i = 0; i < g_aTracksInCircuits[pState->CircuitIdx]; i++)
                {
                    if ((g_aBeatTracksGlobal[pState->CircuitIdx] & (1 << i)) != 0)
                    {
                        g_TracksInCurrentCircuit++;
                    }
                }
            else
            {
                g_TracksInCurrentCircuit = CustomTracks::GetTrackCount(pState->CircuitIdx - 4);
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
                // Custom Tracks are always playable
                return true;
            }
        }
        return ((uint8_t)(1 << TrackIdx) & TracksBitMask) != 0;
    }

    // FUN_00440620
    const char* GetTrackName(int32_t TrackID)
    {
        if (TrackID < 0 || (TrackID > 24 && TrackID < STOCK_TRACK_SLOTS_COUNT))
        {
            return "Invalid Track!";
        }

        switch (TrackID)
        {
            case 0:
                return StrSanitise(g_pTxtTrackID_00);
            case 1:
                return StrSanitise(g_pTxtTrackID_01);
            case 2:
                return StrSanitise(g_pTxtTrackID_02);
            case 3:
                return StrSanitise(g_pTxtTrackID_03);
            case 4:
                return StrSanitise(g_pTxtTrackID_04);
            case 5:
                return StrSanitise(g_pTxtTrackID_05);
            case 6:
                return StrSanitise(g_pTxtTrackID_06);
            case 7:
                return StrSanitise(g_pTxtTrackID_07);
            case 8:
                return StrSanitise(g_pTxtTrackID_08);
            case 9:
                return StrSanitise(g_pTxtTrackID_09);
            case 10:
                return StrSanitise(g_pTxtTrackID_10);
            case 11:
                return StrSanitise(g_pTxtTrackID_11);
            case 12:
                return StrSanitise(g_pTxtTrackID_12);
            case 13:
                return StrSanitise(g_pTxtTrackID_13);
            case 14:
                return StrSanitise(g_pTxtTrackID_14);
            case 15:
                return StrSanitise(g_pTxtTrackID_15);
            case 16:
                return StrSanitise(g_pTxtTrackID_16);
            case 17:
                return StrSanitise(g_pTxtTrackID_17);
            case 18:
                return StrSanitise(g_pTxtTrackID_18);
            case 19:
                return StrSanitise(g_pTxtTrackID_19);
            case 20:
                return StrSanitise(g_pTxtTrackID_20);
            case 21:
                return StrSanitise(g_pTxtTrackID_21);
            case 22:
                return StrSanitise(g_pTxtTrackID_22);
            case 23:
                return StrSanitise(g_pTxtTrackID_23);
            case 24:
                return StrSanitise(g_pTxtTrackID_24);
        }

        return CustomTracks::GetTrackName(TrackID - STOCK_TRACK_SLOTS_COUNT);
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
            const int32_t NumCircuits = 4 + (!pState->bIsTournament ? CustomTracks::GetCircuitCount() : 0);

            for (int32_t CircuitIdx = 0; CircuitIdx < NumCircuits; CircuitIdx++)
            {
                for (int32_t TrackIdx = 0; TrackIdx < 7; TrackIdx++)
                {
                    const uint16_t TotalTrackIdx = CircuitIdx * 7 + TrackIdx;

                    // Init track background
                    uint16_t ImgIdx = GetImgStartBackground(TotalTrackIdx);
                    ImgReset(ImgIdx, pState->aImages[3]);
                    ImgSetFlag(ImgIdx, IMG_UNKN_15);

                    // Init track border
                    ImgIdx = GetImgStartBorder(TotalTrackIdx);
                    ImgReset(ImgIdx, pState->aImages[4]);
                    ImgSetFlag(ImgIdx, IMG_UNKN_15);

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
                                ImgReset(ImgIdx, pState->aImages[2]);
                                break;
                            }

                            // 2nd place
                            case 2:
                            {
                                ImgReset(ImgIdx, pState->aImages[1]);
                                break;
                            }

                            // 1st place
                            case 3:
                            {
                                ImgReset(ImgIdx, pState->aImages[0]);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    // FUN_004360e0
    // Get's called just at once place: MenuTrackSelection()
    void DrawTracks(MenuState* pState, uint8_t CircuitIdx)
    {
        const uint8_t NumTracks = CircuitIdx < 4 ? g_aTracksInCircuits[CircuitIdx] : CustomTracks::GetTrackCount(CircuitIdx - 4);
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

        uint8_t R, G, B, A;
        uint16_t Beat = 0;
        for (uint8_t TrackIdx = 0; TrackIdx < NumTracks; TrackIdx++)
        {
            if (pState->bIsTournament)
            {
                const uint8_t Bits = TrackIdx * 2;
                Beat = (g_aBeatTrackPlace[CircuitIdx] >> Bits) & 3;
            }

            // Draw Background
            const uint16_t TotalTrackIdx = CircuitIdx * 7 + TrackIdx;
            uint16_t ImgIdx = GetImgStartBackground(TotalTrackIdx);
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
                    B = CustomB;
                    G = CustomG;
                    R = CustomR;
                    break;
                }
            }

            const bool bIsPlayable = IsTrackPlayable(pState, CircuitIdx, (byte)TrackIdx);
            if (!bIsPlayable)
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
            if (!pState->bIsTournament || FUN_00440a20(CircuitIdx, TrackIdx != 0))
            {
                // Draw Track Number
                UIText(TrackPosX + 60, 109, R, G, B, A, TxtTrackNum);

                // Draw "Race" string
                const char* pTxtRace = StrSanitise(g_pTxtRace);
                UIText(TrackPosX + 67, 111, R, G, B, A, pTxtRace);
            }

            if ((pState->bIsTournament && Beat == 0) && FUN_00440a20(CircuitIdx, TrackIdx == 0))
            {
                // Draw 4th place Text
                const char* pTxt4th = StrSanitise(g_pTxt4th);
                UIText(TrackPosX + 58, 111, R, G, B, A, pTxt4th);
            }

            // Draw Border
            ImgIdx = GetImgStartBorder(TotalTrackIdx);
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
    int32_t VerifySelectedTrack(MenuState* pState, int32_t SelectedTrackIdx)
    {
        bool bIsPlayable;
        int iVar2;
        uint8_t TrackCount;

        iVar2 = -1;
        TrackCount = 0;

        const uint8_t NumTracks = pState->CircuitIdx < 4 ? g_aTracksInCircuits[pState->CircuitIdx] : CustomTracks::GetTrackCount(pState->CircuitIdx - 4);
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


    // FUN_0043b240
    void MenuTrackSelection()
    {
        int iVar1;
        char* pcVar2;
        int32_t uVar6;
        char local_100[256];

        MenuState* pState = g_pMenuState;

        const TrackInfo Track = GetTrackInfo(pState->TrackID);

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
                    // TODO: Verify whether this is correct
                    const int32_t param_2 = (iVar1 & 0xFFFFFF00) | (uint8_t(g_TracksInCurrentCircuit) - 1);

                    iVar1 = FUN_00440a20(pState->CircuitIdx, param_2);
                    if (iVar1 != 0)
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
                pState->TrackID = g_TrackIDs[pState->CircuitIdx * 7 + SelectedTrackIdx];
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

            const char* pTrackName = GetTrackName(pState->TrackID);
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

        // Horizontal selection
        FUN_00440150(local_100, 55);

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
                char BufferPage[128];
                rcr_sprintf(BufferPage, "~c~sCustom Tracks - Page %u/%u", pState->CircuitIdx - 3, CustomTracks::GetCircuitCount());
                pTxtCircuit = StrSanitise(BufferPage);
                B = CustomB;
                G = CustomG;
                R = CustomR;

                constexpr uint16_t PosX = 20;
                constexpr uint16_t PosY = 180;
                UIText(PosX, PosY, 50, 255, 255, 255, "~f4~sPlace custom Tracks into Folder:");

                char BufferPath[1024];
                strcpy(BufferPath, "~f4~s");
                GetCurrentDirectory(sizeof(BufferPath) - 5, BufferPath + 5);
                for (uint16_t i = 0; i < strnlen_s(BufferPath, sizeof(BufferPath)) && i < sizeof(BufferPath); i++)
                {
                    if (BufferPath[i] == '\\')
                    {
                        BufferPath[i] = '/';
                    }
                }
                strcat(BufferPath, "/tracks/");
                UIText(PosX, PosY + 8, 50, 255, 255, 255, BufferPath);
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

                const char* pPlanetName = g_PlanetNames[Track.PlanetIdx].Name;
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
                if (DAT_004d6b48 != 0 && (IsFreePlay() == 0 || FUN_0041d6c0()!= 0) && pState->TrackID >= 0)
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
                    if (g_bIsFreePlay != 0)
                    {
                        FUN_004118b0();
                        return;
                    }

                    FUN_00440550(0x4d);
                    if (IsFreePlay() != 0 && FUN_0041d6c0() != 0)
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
}
