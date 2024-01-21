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

// Something with strings (strcopy / strcat ?)
typedef int32_t (FUN_0049eb80_t)(char* param_1, const char* param_2);
static  FUN_0049eb80_t* FUN_0049eb80 = (FUN_0049eb80_t*)0x0049eb80;

typedef int32_t(FUN_004816b0_t)();
static  FUN_004816b0_t* FUN_004816b0 = (FUN_004816b0_t*)0x004816b0;

// I guessed the last 2 params based on my custom decompilation
typedef void(FUN_00450530_t)(int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, UnknStruct0* param_6, char* param_7);
static  FUN_00450530_t* FUN_00450530 = (FUN_00450530_t*)0x00450530;

typedef int32_t(FUN_00440620_t)(int32_t param_1);
static  FUN_00440620_t* FUN_00440620 = (FUN_00440620_t*)0x00440620;



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

// FUN_0043b240
void MenuTrackSelection()
{
    int iVar1;
    int32_t unaff_EDI;
    char* pcVar2;
    int32_t uVar3;
    int32_t uVar4;
    int32_t uVar5;
    int32_t uVar6;
    char* pcVar7;
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
        FUN_00469b90(uVar6);
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
        FUN_0049eb80(local_100, pText);

        // The following I decompiled by hand, Ghidra returned just trash
        int32_t a = FUN_004816b0();
        float b = float(a) * DAT_004ac86c * DAT_004ac93c;
        int32_t a1 = int32_t(b);

        a = FUN_004816b0();
        b = float(a) * DAT_004ac86c * DAT_004ac93c;
        int32_t a2 = int32_t(b);

        a = FUN_004816b0();
        b = float(a) * DAT_004ac86c * DAT_004ac93c;
        int32_t a3 = int32_t(b);

        FUN_00450530(0xa0, 0xcd, a3, a2, a1, pStruct, local_100);
    }

    const char* pTrackName = GetTrackName(pStruct->TrackID);
    const char* pText = FUN_00421360("~c~s%s");
    FUN_0049eb80(local_100, pText);
    FUN_00450530(0xa0, 0x36, 0, 0xffffffff, 0, 0xffffffff, local_100);
    uVar6 = FUN_0042de10(local_100, 0);
    FUN_0042de10(local_100, 0, 0x37, uVar6);
    uVar6 = __ftol();
    FUN_00440150(uVar6);

    switch (pStruct->CircuitIdx)
    {
        case 0:
            uVar6 = FUN_00421360(s_ / SCREENTEXT_530 / ~f0~c~sAmateur_P_004c0eb0);
            uVar5 = 0xffffffff;
            uVar4 = 0xffffffff;
            uVar3 = 0x32;
            break;
        case 1:
            uVar6 = FUN_00421360(s_ / SCREENTEXT_531 / ~f0~c~sSemi - Pro_P_004c0e7c);
            uVar5 = 0x3e;
            uVar4 = 0xffffffff;
            uVar3 = 0x44;
            break;
        case 2:
            uVar6 = FUN_00421360(s_ / SCREENTEXT_532 / ~f0~c~sGalactic_P_004c0e48);
            uVar5 = 0x11;
            uVar4 = 0xffffffbe;
            uVar3 = 0xffffffa3;
            break;
        case 3:
            uVar6 = FUN_00421360(s_ / SCREENTEXT_533 / ~f0~c~sInvitatio_004c0e10);
            uVar5 = 0x20;
            uVar4 = 0x59;
            uVar3 = 0xffffff9d;
            break;
        default:
            goto switchD_0043b503_caseD_4;
    }

    FUN_00450530(0xa0, 0x22, uVar3, uVar4, uVar5, 0xffffffff, uVar6);

switchD_0043b503_caseD_4:
    if (pStruct->bIsTournament == false)
    {
        if (pStruct->field_0x6d != '\0') {
            uVar6 = FUN_00421360(s_ / SCREENTEXT_543 / ~c~sTime_Attack_004c0dd0);
            goto LAB_0043b5c4;
        }
        if (pStruct->field_0x70 == '\x02') {
            uVar6 = FUN_00421360(s_ / SCREENTEXT_544 / ~c~s2_Player_004c0db0);
            goto LAB_0043b5c4;
        }
        pcVar7 = s_ / SCREENTEXT_542 / ~c~sFree_Play_004c0d90;
    }
    else
    {
        pcVar7 = s_ / SCREENTEXT_541 / ~c~sTournament_004c0df0;
    }

    uVar6 = FUN_00421360(pcVar7);
LAB_0043b5c4:
    FUN_0049eb80(local_100, uVar6);
    FUN_00450530(0xa0, 0x18, 0x32, 0xffffffff, 0xffffffff, 0xffffffff, local_100);
    FUN_004360e0(pStruct, DAT_0050c17c);
    iVar1 = CONCAT22((short)((uint)unaff_EDI >> 0x10), (short)(char)(&DAT_004bfef1)[pStruct->TrackID * 0xc]) + 0x45;
    FUN_004285d0(iVar1, 1);
    FUN_00428660(iVar1, 0xa0, 0x91);
    FUN_004286f0(iVar1, 0x3f800000, 0x3f800000);
    FUN_00428740(iVar1, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff);
    FUN_00450530(0xe0, 0x8a, 0, 0xffffffff, 0, 0xffffffff,
        &DAT_00e98f5c + (char)(&DAT_004bfef1)[pStruct->TrackID * 0xc] * 0x5c);
    FUN_0043fe90(0x2d, 0x54, 0x1e);
    if (DAT_0050c54c == 0)
    {
        FUN_00469c30(0, 0x3f800000, 1);
        puVar2 = &DAT_0050c918;
        do
        {
            if (DAT_004eb39c == 0)
            {
                if ((DAT_004d6b48 != 0) &&
                    ((iVar1 = FUN_0041d6b0(), iVar1 == 0 || (iVar1 = FUN_0041d6c0(), iVar1 != 0)))) 
                {
                    if (_g_bIsFreePlay != 0) {
                        FUN_004118b0(0);
                        return;
                    }
                    if (DAT_00e2a698 != 0) {
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
                    if (_g_bIsFreePlay != 0) {
                        FUN_004118b0(0);
                        return;
                    }
                    FUN_00440550(0x4d);
                    iVar1 = FUN_0041d6b0();
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
                if ((*puVar2 & 0x8000) != 0)
                {
                    if (CircuitIdx < g_TournamentMaxCircuitIdx)
                    {
                        pStruct->CircuitIdx = CircuitIdx + '\x01';
                        DAT_00e295d4 = -1;
                        FUN_00440550(0x58);
                        HandleCircuits(pStruct);
                    }
                    else
                    {
                        FUN_00440550(0x4b);
                    }
                }
                if ((*puVar2 & 0x4000) != 0)
                {
                    if (pStruct->CircuitIdx < '\x01')
                    {
                        FUN_00440550(0x4b);
                    }
                    else
                    {
                        pStruct->CircuitIdx = pStruct->CircuitIdx + -1;
                        DAT_00e295d4 = -1;
                        FUN_00440550(0x58);
                        HandleCircuits(pStruct);
                    }
                }
            }
            puVar2 = puVar2 + 1;
        } while ((int)puVar2 < 0x50c91c);
        DAT_00ea02b0 = (int)pStruct->TrackID;
        iVar1 = FUN_0041d6b0();
        if ((iVar1 == 0) || (iVar1 = FUN_0041d6c0(), iVar1 != 0))
        {
            DAT_00ea05ac = *(int32_t*)(&DAT_004bfee8 + pStruct->TrackID * 0xc);
            FUN_0041e5a0();
        }
    }
}