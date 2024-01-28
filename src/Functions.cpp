#include <windows.h>
#include "Functions.h"


typedef void(FUN_0045bee0_t)(MenuState* pStruct, int param_2, int param_3, int32_t param_4);
static FUN_0045bee0_t* FUN_0045bee0 = (FUN_0045bee0_t*)0x0045bee0;

typedef int32_t(FUN_00440a20_t)(int32_t param_1, int32_t param_2);
static  FUN_00440a20_t* FUN_00440a20 = (FUN_00440a20_t*)0x00440a20;

typedef void(__cdecl FUN_0043b1d0_t)(MenuState* pStruct);
static  FUN_0043b1d0_t* FUN_0043b1d0 = (FUN_0043b1d0_t*)0x0043b1d0;

typedef float10(FUN_00469b90_t)(float param_1);
static  FUN_00469b90_t* FUN_00469b90 = (FUN_00469b90_t*)0x00469b90;

//typedef int(FUN_00440af0_t)(UnknStruct0* pStruct, int param_2);
//static  FUN_00440af0_t* FUN_00440af0 = (FUN_00440af0_t*)0x00440af0;

typedef void(FUN_00456800_t)(MenuState* pStruct, int param_2, float param_3);
static  FUN_00456800_t* FUN_00456800 = (FUN_00456800_t*)0x00456800;

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

//typedef void(FUN_004360e0_t)(UnknStruct0* param_1, char param_2);
//static  FUN_004360e0_t* FUN_004360e0 = (FUN_004360e0_t*)0x004360e0;

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
static  FUN_00454d40_t* FUN_00454d40 = (FUN_00454d40_t*)0x00454d40;

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

typedef void(FUN_004282f0_t)(uint16_t ImgIdx, ImgDat* pUnknStruct1);
static  FUN_004282f0_t* ImgReset = (FUN_004282f0_t*)0x004282f0;

typedef void(FUN_004287e0_t)(uint16_t ImgIdx, uint32_t Flag);
static  FUN_004287e0_t* ImgSetFlag = (FUN_004287e0_t*)0x004287e0;

typedef void(FUN_00428800_t)(uint16_t ImgIdx, uint32_t Flag);
static  FUN_00428800_t* ImgResetFlag = (FUN_00428800_t*)0x00428800;


constexpr uint8_t CustomR = 150;
constexpr uint8_t CustomG = 80;
constexpr uint8_t CustomB = 220;

constexpr uint8_t NumCustomTracks = 3;


// FUN_0043b0b0
void __cdecl HandleCircuit(MenuState* pState)
{
    g_TournamentMaxCircuitIdx = 3;
    g_TracksInCurrentCircuit = 0;

    if (!pState->bIsTournament)
    {
        //if (g_aBeatTracksGlobal[3] == 0)
        //{
        //    g_TournamentMaxCircuitIdx = 2;
        //}
        g_TournamentMaxCircuitIdx = 4;

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
            g_TracksInCurrentCircuit = NumCustomTracks;
        }
    }
    else
    {
        if (g_aTracksSelectableTournament[3] == 0)
        {
            g_TournamentMaxCircuitIdx = 2;
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
    g_bCircuitIdxInRange = (int32_t)(pState->CircuitIdx < g_TournamentMaxCircuitIdx);
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
    static char CustomTrackName[128];
    if (TrackID < 0)
    {
        strcpy_s(CustomTrackName, sizeof(CustomTrackName), "Invalid Track!");
        return CustomTrackName;
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

    rcr_sprintf(CustomTrackName, "Custom Track %d", TrackID - 24);
    return CustomTrackName;
}

// FUN_0041d6b0
bool IsFreePlay()
{
    return g_bIsFreePlay;
}

int32_t FUN_0041d6c0()
{
    return DAT_004eb1c8;
}

// FUN_004584a0
void __cdecl InitTracks(MenuState* pState, bool bInitTracks)
{
    for (uint16_t local_8 = 0x82; local_8 < 0xa2; local_8++)
    {
        ImgReset(local_8, pState->aImages[5]);
    }
    if (bInitTracks)
    {
        for (int32_t CircuitIdx = 0; CircuitIdx < 5; CircuitIdx++)
        {
            for (int32_t TrackIdx = 0; TrackIdx < 7; TrackIdx++)
            {
                const uint8_t Bits = TrackIdx * 2;
                const uint16_t Beat = (g_aBeatTrackPlace[CircuitIdx] >> Bits) & 3;
                const uint16_t ImgIdx = CircuitIdx * 7 + 99 + TrackIdx;
                ImgReset(ImgIdx, pState->aImages[3]);
                ImgSetFlag(ImgIdx, IMG_UNKN_15);

                ImgReset(ImgIdx + 0x1c, pState->aImages[4]);
                ImgSetFlag(ImgIdx + 0x1c, IMG_UNKN_15);

                if (pState->bIsTournament)
                {
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
    int iVar1;
    int32_t uVar8;

    const uint8_t NumTracks = CircuitIdx < 4 ? g_aTracksInCircuits[CircuitIdx] : NumCustomTracks;
    if (NumTracks == 0)
    {
        return;
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
        uint16_t ImgIdx = CircuitIdx * 7 + 99 + TrackIdx;
        iVar1 = TrackIdx * 35;
        ImgVisible(ImgIdx, true);
        ImgPosition(ImgIdx, iVar1 + 55, 94);
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
        if (!pState->bIsTournament || (ImgIdx = FUN_00440a20(CircuitIdx, TrackIdx), ImgIdx != 0))
        {
            // Draw Track Number
            UIText(iVar1 + 60, 109, R, G, B, A, TxtTrackNum);

            // Draw "Race" string
            const char* pTxtRace = StrSanitise(g_pTxtRace);
            UIText(iVar1 + 67, 111, R, G, B, A, pTxtRace);
        }

        if ((pState->bIsTournament && (Beat == 0)) && (ImgIdx = FUN_00440a20(CircuitIdx, TrackIdx), ImgIdx == 0))
        {
            // Draw 4th place Text
            const char* pTxt4th = StrSanitise(g_pTxt4th);
            UIText(iVar1 + 58, 111, R, G, B, A, pTxt4th);
        }

        // Draw Border
        ImgIdx = CircuitIdx * 7 + 127 + TrackIdx;
        ImgVisible(ImgIdx, true);
        ImgPosition(ImgIdx, iVar1 + 53, 92);
        ImgScale(ImgIdx, 0.6667f, 0.6667f);
        ImgColor(ImgIdx, 163, 190, 17, A);
        if (!bIsPlayable)
        {
            ImgColor(ImgIdx, 128, 128, 128, A);
        }

        // Draw current selection
        if ((CircuitIdx == pState->CircuitIdx) && (uVar8 = VerifySelectedTrack(pState, g_SelectedTrackIdx), TrackIdx == uVar8))
        {
            ImgVisible(ImgIdx, false);
            ImgVisible(98, true);
            ImgPosition(98, iVar1 + 50, 89);
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

    const uint8_t NumTracksAvail = pState->CircuitIdx < 4 ? g_aTracksInCircuits[pState->CircuitIdx] : NumCustomTracks;
    if (NumTracksAvail == 0)
    {
        return -1;
    }

    while ((bIsPlayable = IsTrackPlayable(pState, pState->CircuitIdx, TrackCount), !bIsPlayable || (TrackCount != SelectedTrackIdx)))
    {
        TrackCount++;
        if (TrackCount >= NumTracksAvail)
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
    if (DAT_004c4000 != 0)
    {
        DAT_004c4000 = 0;
        FUN_0045bee0(pState, 0x25, 0xffffffff, 0);
        DAT_0050c54c = 0;

        if (pState->Field_0x0C == 0xc)
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
        DAT_0050c134 = *(char*)((int)&g_aTrackInfos[pState->TrackID].Unkn0 + 1);
        DAT_0050c17c = pState->CircuitIdx;
    }

    if (DAT_0050c54c == 0)
    {
        if (DAT_00e295d4 == g_SelectedTrackIdx)
        {
            uVar6 = 0x40533333;
            DAT_0050c134 = *(char*)((int)&g_aTrackInfos[pState->TrackID].Unkn0 + 1);
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

    if (DAT_00e295a0 > 0.0f)
    {
        FUN_00456800(pState, (int)DAT_0050c134, DAT_00e295a0 * 0.5f);
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
            pState->TrackID = *(int8_t*)(g_aTrackLoadIndices + SelectedTrackIdx + pState->CircuitIdx * 7);
        }
        else
        {
            pState->TrackID = 16; // Mon Gaza Speedway
        }

        // Print "Planet not loaded!!!" warning
        if ((g_aTrackInfos[pState->TrackID].LoadModel == -1) || (g_aTrackInfos[pState->TrackID].LoadSpline == -1))
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

            UIText(0xa0, 0xcd, R, G, B, 0xff, local_100);
        }

        const char* pTrackName = GetTrackName(pState->TrackID);
        rcr_sprintf(local_100, "~c~s%s", pTrackName);
        UIText(160, 54, 0, 0xFF, 0, 0xFF, local_100);
        pcVar2 = local_100;
        FUN_0042de10(pcVar2, 0);
        FUN_0042de10(local_100, 0);
    }
    else
    {
        pState->TrackID = -1;
    }

    // Horizontal selection
    FUN_00440150(local_100, 0x37);

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
            rcr_sprintf(BufferPage, "~c~sCustom Tracks - Page %u", pState->CircuitIdx - 3);
            pTxtCircuit = StrSanitise(BufferPage);
            B = CustomB;
            G = CustomG;
            R = CustomR;

            constexpr uint16_t PosX = 20;
            constexpr uint16_t PosY = 180;
            UIText(PosX, PosY, 50, 255, 255, 255, "~f4~sPlace custom Tracks into Folder:");

            char BufferPath[1024];
            strcpy_s(BufferPath, sizeof(BufferPath), "~f4~s");
            GetCurrentDirectory(sizeof(BufferPath) - 5, BufferPath + 5);
            for (uint16_t i = 0; i < strnlen_s(BufferPath, sizeof(BufferPath)) && i < sizeof(BufferPath); i++)
            {
                if (BufferPath[i] == '\\')
                {
                    BufferPath[i] = '/';
                }
            }
            strcat_s(BufferPath, sizeof(BufferPath), "/tracks/");
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
        const uint8_t PlanetIdx = g_aTrackInfos[pState->TrackID].PlanetIdx;

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

        // Draw planet preview image
        // Apparently, each ImgIdx can only be drawn once?
        const uint16_t ImgIdx = PlanetIdx + 69;
        ImgVisible(ImgIdx, true);
        ImgPosition(ImgIdx, 160, 150);
        ImgScale(ImgIdx, 1.0f, 1.0f);
        ImgColor(ImgIdx, 255, 255, 255, 255);

        const char* pPlanetName = g_PlanetNames[PlanetIdx].Name;
        UIText(224, 143, 0, 255, 0, 255, pPlanetName);
    }

    FUN_0043fe90(0x2d, 0x54, 0x1e);
    if (DAT_0050c54c == 0)
    {
        FUN_00469c30(0, 1.0f, 1);
        uint32_t& puVar2 = DAT_0050c918;
        if (DAT_004eb39c == 0)
        {
            if ((DAT_004d6b48 != 0) && ((iVar1 = IsFreePlay(), iVar1 == 0 || (iVar1 = FUN_0041d6c0(), iVar1 != 0))))
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
                FUN_00454d40(pState, 0xd);
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
                FUN_00454d40(pState, 9);
                return;
            }
        }
        uint8_t CircuitIdx = pState->CircuitIdx;
        if (DAT_0050c17c == CircuitIdx)
        {
            // Move down
            if ((puVar2 & 0x8000) != 0)
            {
                if (CircuitIdx < g_TournamentMaxCircuitIdx)
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
                    FUN_00440550(0x58);
                    HandleCircuit(pState);
                }
            }
        }

        if (pState->TrackID >= 0)
        {
            DAT_00ea02b0 = (int)pState->TrackID;
            if (!IsFreePlay() || FUN_0041d6c0() != 0)
            {
                DAT_00ea05ac = g_aTrackInfos[pState->TrackID].LoadModel;
                FUN_0041e5a0();
            }
        }
    }
}