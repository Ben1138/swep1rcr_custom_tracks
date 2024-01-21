#include <windows.h>
#include "Functions.h"


typedef void(FUN_0045bee0_t)(UnknStruct0* pStruct, int param_2, int param_3, int32_t param_4);
static FUN_0045bee0_t* FUN_0045bee0 = (FUN_0045bee0_t*)0x0045bee0;

typedef int32_t(FUN_00440a20_t)(int32_t param_1, int32_t param_2);
static  FUN_00440a20_t* FUN_00440a20 = (FUN_00440a20_t*)0x00440a20;

typedef void(__cdecl FUN_0043b1d0_t)(UnknStruct0* pStruct);
static  FUN_0043b1d0_t* FUN_0043b1d0 = (FUN_0043b1d0_t*)0x0043b1d0;

typedef void(__cdecl FUN_004584a0_t)(UnknStruct0* pStruct, int param_2);
static  FUN_004584a0_t* FUN_004584a0 = (FUN_004584a0_t*)0x004584a0;

typedef float10(FUN_00469b90_t)(float param_1);
static  FUN_00469b90_t* FUN_00469b90 = (FUN_00469b90_t*)0x00469b90;

typedef int(FUN_00440af0_t)(UnknStruct0* pStruct, int param_2);
static  FUN_00440af0_t* FUN_00440af0 = (FUN_00440af0_t*)0x00440af0;

typedef void(FUN_00456800_t)(UnknStruct0* pStruct, int param_2, float param_3);
static  FUN_00456800_t* FUN_00456800 = (FUN_00456800_t*)0x00456800;

// Something with strings
// "/SCREENTEXT_508/~~Abyss" -> "Abyss"
typedef const char*(FUN_00421360_t)(const char* param_1);
static  FUN_00421360_t* FUN_00421360 = (FUN_00421360_t*)0x00421360;

// sprintf, but idk whether it's custom or the LibC variant
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

typedef void(FUN_004360e0_t)(UnknStruct0* param_1, char param_2);
static  FUN_004360e0_t* FUN_004360e0 = (FUN_004360e0_t*)0x004360e0;

typedef void(FUN_0043fe90_t)(int param_1, int param_2, int param_3);
static  FUN_0043fe90_t* FUN_0043fe90 = (FUN_0043fe90_t*)0x0043fe90;

typedef void(FUN_00469c30_t)(int param_1, int param_2, int param_3);
static  FUN_00469c30_t* FUN_00469c30 = (FUN_00469c30_t*)0x00469c30;

typedef void(FUN_004118b0_t)();
static  FUN_004118b0_t* FUN_004118b0 = (FUN_004118b0_t*)0x004118b0;

typedef void(FUN_00440550_t)(int32_t param_1);
static  FUN_00440550_t* FUN_00440550 = (FUN_00440550_t*)0x00440550;

// Something with Hangar Menu
typedef void(FUN_00454d40_t)(UnknStruct0* pStruct, int param_2);
static  FUN_00454d40_t* FUN_00454d40 = (FUN_00454d40_t*)0x00454d40;

typedef void(FUN_0041e5a0_t)();
static  FUN_0041e5a0_t* FUN_0041e5a0 = (FUN_0041e5a0_t*)0x0041e5a0;

typedef void(FUN_00440150_t)(int32_t param_1, int param_2);
static  FUN_00440150_t* FUN_00440150 = (FUN_00440150_t*)0x00440150;

typedef void(FUN_004285d0_t)(uint16_t ImgIdx, int32_t bVisible);
static  FUN_004285d0_t* ImgVisible = (FUN_004285d0_t*)0x004285d0;

typedef void(FUN_00428660_t)(uint16_t ImgIdx, uint16_t PosX, uint16_t PosY);
static  FUN_00428660_t* ImgPosition = (FUN_00428660_t*)0x00428660;

typedef void(FUN_004286f0_t)(uint16_t ImgIdx, float ScaleX, float ScaleY);
static  FUN_004286f0_t* ImgScale = (FUN_004286f0_t*)0x004286f0;

typedef void(FUN_00428740_t)(uint16_t ImgIdx, int8_t R, int8_t G, int8_t B, int8_t A);
static  FUN_00428740_t* ImgColor = (FUN_00428740_t*)0x00428740;


// FUN_0043b0b0
void __cdecl HandleCircuit(UnknStruct0* pStruct)
{
    g_TracksInCircuits[4] = 3;

    g_TournamentMaxCircuitIdx = 4;
    g_TracksInCurrentCurcuit = 0;

    if (!pStruct->bIsTournament)
    {
        //if (g_BeatTracksGlobal[3] == 0)
        //{
        //    g_TournamentMaxCircuitIdx = 2;
        //}
        for (int i = 0; i < g_TracksInCircuits[pStruct->CircuitIdx]; i++)
        {
            if ((g_BeatTracksGlobal[pStruct->CircuitIdx] & (1 << i)) != 0)
            {
                g_TracksInCurrentCurcuit++;
            }
        }
    }
    else
    {
        //if (g_TracksSelectableTournament[3] == 0)
        //{
        //    g_TournamentMaxCircuitIdx = 2;
        //}
        for (uint8_t i = 0; i < g_TracksInCircuits[pStruct->CircuitIdx]; i++)
        {
            if ((g_TracksSelectableTournament[pStruct->CircuitIdx] & (1 << i)) != 0)
            {
                g_TracksInCurrentCurcuit++;
            }
        }
    }

    if ((g_bIsFreePlay != 0) && (pStruct->CircuitIdx < 3))
    {
        g_TracksInCurrentCurcuit = g_TracksInCircuits[pStruct->CircuitIdx];
    }
    if (g_SelectedTrackIdx >= g_TracksInCurrentCurcuit)
    {
        g_SelectedTrackIdx = g_TracksInCurrentCurcuit - 1;
    }
    if (g_TracksInCurrentCurcuit > 0 && g_SelectedTrackIdx < 0)
    {
        g_SelectedTrackIdx = 0;
    }

    DAT_00e295c0 = (uint32_t)(pStruct->CircuitIdx > 0);
    g_bCircuitIdxInRange = (int32_t)(pStruct->CircuitIdx < g_TournamentMaxCircuitIdx);
}

// FUN_00440620
const char* GetTrackName(int32_t TrackID)
{
    switch (TrackID)
    {
        case 0:
            return FUN_00421360(g_TxtTrackID_00);
        case 1:
            return FUN_00421360(g_TxtTrackID_01);
        case 2:
            return FUN_00421360(g_TxtTrackID_02);
        case 3:
            return FUN_00421360(g_TxtTrackID_03);
        case 4:
            return FUN_00421360(g_TxtTrackID_04);
        case 5:
            return FUN_00421360(g_TxtTrackID_05);
        case 6:
            return FUN_00421360(g_TxtTrackID_06);
        case 7:
            return FUN_00421360(g_TxtTrackID_07);
        case 8:
            return FUN_00421360(g_TxtTrackID_08);
        case 9:
            return FUN_00421360(g_TxtTrackID_09);
        case 10:
            return FUN_00421360(g_TxtTrackID_10);
        case 11:
            return FUN_00421360(g_TxtTrackID_11);
        case 12:
            return FUN_00421360(g_TxtTrackID_12);
        case 13:
            return FUN_00421360(g_TxtTrackID_13);
        case 14:
            return FUN_00421360(g_TxtTrackID_14);
        case 15:
            return FUN_00421360(g_TxtTrackID_15);
        case 16:
            return FUN_00421360(g_TxtTrackID_16);
        case 17:
            return FUN_00421360(g_TxtTrackID_17);
        case 18:
            return FUN_00421360(g_TxtTrackID_18);
        case 19:
            return FUN_00421360(g_TxtTrackID_19);
        case 20:
            return FUN_00421360(g_TxtTrackID_20);
        case 21:
            return FUN_00421360(g_TxtTrackID_21);
        case 22:
            return FUN_00421360(g_TxtTrackID_22);
        case 23:
            return FUN_00421360(g_TxtTrackID_23);
        case 24:
            return FUN_00421360(g_TxtTrackID_24);
    }
    return nullptr;
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

// FUN_0043b240
void MenuTrackSelection()
{
    int iVar1;
    char* pcVar2;
    int32_t uVar3;
    int32_t uVar4;
    int32_t uVar5;
    int32_t uVar6;
    char local_100[256];
    char CircuitIdx;

    UnknStruct0* pStruct = g_pUnknStruct0;
    if (DAT_004c4000 != 0)
    {
        DAT_004c4000 = 0;
        FUN_0045bee0(pStruct, 0x25, 0xffffffff, 0);
        DAT_0050c54c = 0;

        if (pStruct->Field12_0x0C == 0xc)
        {
            DAT_00e295a0 = 1.0f;
        }
        if ((pStruct->Field12_0x0C == 9) || (pStruct->Field12_0x0C == 1))
        {
            pStruct->CircuitIdx = 0;
        }

        HandleCircuit(pStruct);
        iVar1 = pStruct->Field12_0x0C;
        if ((iVar1 == 9) || (iVar1 == 1))
        {
            g_SelectedTrackIdx = 0;
            if (pStruct->bIsTournament != false)
            {
                // TODO: Verify whether this is correct
                const int32_t param_2 = (iVar1 & 0xFFFFFF00) | (uint8_t(g_TracksInCurrentCurcuit) - 1);

                iVar1 = FUN_00440a20(pStruct->CircuitIdx, param_2);
                if (iVar1 != 0)
                {
                    g_SelectedTrackIdx = g_TracksInCurrentCurcuit - 1;
                }
            }
        }
        else
        {
            FUN_0043b1d0(pStruct);
        }

        FUN_004584a0(pStruct, 1);
        DAT_0050c134 = *(char*)((int)&g_UnknStruct1Array[pStruct->TrackID].UnknInt2 + 1);
        DAT_0050c17c = pStruct->CircuitIdx;
    }

    if (DAT_0050c54c == 0)
    {
        if (DAT_00e295d4 == g_SelectedTrackIdx)
        {
            uVar6 = 0x40533333;
            DAT_0050c134 = *(char*)((int)&g_UnknStruct1Array[pStruct->TrackID].UnknInt2 + 1);
            DAT_0050c17c = pStruct->CircuitIdx;
            goto LAB_0043b357;
        }
    }
    else
    {
        uVar6 = 0xc0533333;
    LAB_0043b357:
        FUN_00469b90(float(uVar6));
    }

    iVar1 = FUN_00440af0(pStruct, g_SelectedTrackIdx);
    pStruct->TrackID = *(int8_t*)(g_TrackLoadIndices + iVar1 + pStruct->CircuitIdx * 7);

    if (DAT_00e295a0 > 0.0f)
    {
        FUN_00456800(pStruct, (int)DAT_0050c134, DAT_00e295a0 * 0.5f);
    }
    if (DAT_0050c54c != 0)
    {
        return;
    }

    iVar1 = pStruct->TrackID * 0xc;
    if ((g_UnknStruct1Array[pStruct->TrackID].UnknInt0 == -1) || (g_UnknStruct1Array[pStruct->TrackID].UnknInt1 == -1))
    {
        const char* pText = FUN_00421360(g_TxtPlanetNotLoaded);
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

    const char* pTrackName = GetTrackName(pStruct->TrackID);
    const char* pText = FUN_00421360("~c~s%s");
    
    rcr_sprintf(local_100, pText, pTrackName);
    UIText(0xa0, 0x36, 0, 0xff, 0, 0xff, local_100);
    pcVar2 = local_100;
    FUN_0042de10(pcVar2, 0);
    FUN_0042de10(local_100, 0);

    // Idk about this shit...
    FUN_00440150(int32_t(pcVar2), 0x37);

    uint8_t R, G, B;
    const char* pTxtCircuit = nullptr;
    switch (pStruct->CircuitIdx)
    {
        case 0:
        {
            pTxtCircuit = FUN_00421360(g_TxtCircuitAmateur);
            B = 0xff;
            G = 0xff;
            R = 0x32;
            break;
        }
        case 1:
        {
            pTxtCircuit = FUN_00421360(g_TxtCircuitSemiPro);
            B = 0x3e;
            G = 0xff;
            R = 0x44;
            break;
        }
        case 2:
        {
            pTxtCircuit = FUN_00421360(g_TxtCircuitGalactic);
            B = 0x11;
            G = 0xbe;
            R = 0xa3;
            break;
        }
        case 3:
        {
            pTxtCircuit = FUN_00421360(g_TxtCircuitInvitational);
            B = 0x20;
            G = 0x59;
            R = 0x9d;
            break;
        }
        default:
        {
            char BufferPage[128];
            rcr_sprintf(BufferPage, "~c~sCustom Tracks - Page %u", pStruct->CircuitIdx - 3);
            pTxtCircuit = FUN_00421360(BufferPage);
            B = 0xFF;
            G = 0x00;
            R = 0xAA;

            constexpr uint16_t PosX = 20;
            constexpr uint16_t PosY = 180;
            UIText(PosX, PosY, 0x32, 0xFF, 0xFF, 0xFF, "~f4~sPlace custom Tracks into Folder:");

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
            UIText(PosX, PosY + 8, 0x32, 0xFF, 0xFF, 0xFF, BufferPath);
            break;
        }
    }
    UIText(160, 34, R, G, B, 0xFF, pTxtCircuit);

    const char* pTextMode = nullptr;
    if (pStruct->bIsTournament == false)
    {
        if (pStruct->Field_0x6D != 0)
        {
            pTextMode = FUN_00421360(g_TxtTimeAttack);
            goto LAB_0043b5c4;
        }
        if (pStruct->Field_0x70 == 2)
        {
            pTextMode = FUN_00421360(g_Txt2Player);
            goto LAB_0043b5c4;
        }
        pTextMode = g_TxtFreePlay;
    }
    else
    {
        pTextMode = g_TxtTournament;
    }
    pTextMode = FUN_00421360(pTextMode);

LAB_0043b5c4:
    rcr_sprintf(local_100, pTextMode);
    UIText(0xa0, 0x18, 0x32, 0xff, 0xff, 0xff, local_100);
    FUN_004360e0(pStruct, DAT_0050c17c);

    const uint8_t PlanetIdx = g_UnknStruct1Array[pStruct->TrackID].PlanetIdx;

    //static uint16_t ImgIdx = 69;
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
    const uint16_t ImgIdx = g_UnknStruct1Array[pStruct->TrackID].PlanetIdx + 0x45;
    ImgVisible(ImgIdx, true);
    ImgPosition(ImgIdx, 160, 145);
    ImgScale(ImgIdx, 1.0f, 1.0f);
    ImgColor(ImgIdx, 0xFF, 0xFF, 0xFF, 0xFF);

    const char* pPlanetName = g_PlanetNames[PlanetIdx].Name;
    UIText(0xe0, 0x8a, 0, 0xff, 0, 0xff, pPlanetName);
    FUN_0043fe90(0x2d, 0x54, 0x1e);
    if (DAT_0050c54c == 0)
    {
        FUN_00469c30(0, 0x3f800000, 1);
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
                FUN_004584a0(pStruct, 0);
                FUN_00454d40(pStruct, 0xd);
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
                iVar1 = IsFreePlay();
                if ((iVar1 != 0) && (iVar1 = FUN_0041d6c0(), iVar1 != 0)) {
                    return;
                }
                FUN_004584a0(pStruct, 0);
                FUN_00454d40(pStruct, 9);
                return;
            }
        }
        CircuitIdx = pStruct->CircuitIdx;
        if (DAT_0050c17c == CircuitIdx)
        {
            if ((puVar2 & 0x8000) != 0)
            {
                if (CircuitIdx < g_TournamentMaxCircuitIdx)
                {
                    pStruct->CircuitIdx = CircuitIdx + 1;
                    DAT_00e295d4 = -1;
                    FUN_00440550(0x58);
                    HandleCircuit(pStruct);
                }
                else
                {
                    FUN_00440550(0x4b);
                }
            }
            if ((puVar2 & 0x4000) != 0)
            {
                if (pStruct->CircuitIdx < 1)
                {
                    FUN_00440550(0x4b);
                }
                else
                {
                    pStruct->CircuitIdx = pStruct->CircuitIdx + -1;
                    DAT_00e295d4 = -1;
                    FUN_00440550(0x58);
                    HandleCircuit(pStruct);
                }
            }
        }
        DAT_00ea02b0 = (int)pStruct->TrackID;
        iVar1 = IsFreePlay();
        if ((iVar1 == 0) || (iVar1 = FUN_0041d6c0(), iVar1 != 0))
        {
            DAT_00ea05ac = g_UnknStruct1Array[pStruct->TrackID].UnknInt0;
            FUN_0041e5a0();
        }
    }
}