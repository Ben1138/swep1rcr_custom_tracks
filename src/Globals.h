#pragma once
#include "Types.h"

static int32_t&      g_TournamentMaxCircuitIdx         = *(int32_t*)     0x00e295c8;
static uint8_t*      g_TracksSelectableTournament      =  (uint8_t*)     0x00e35a85;        // Length: 4
static int32_t&      g_TracksInCurrentCurcuit          = *(int32_t*)     0x00e295cc;
static uint8_t*      g_TracksInCircuits                =  (uint8_t*)     0x004bfee0;        // Length: 4
static uint32_t*     g_TrackLoadIndices                =  (uint32_t*)    0x004c0018;        // Length: 25 + 3 padding
static uint8_t*      g_BeatTracksGlobal                =  (uint8_t*)     0x00e364ac;        // Length: 4
static uint8_t&      g_bIsFreePlay                     = *(uint8_t*)     0x004d5e00;
static int32_t&      g_SelectedTrackIdx                = *(int32_t*)     0x00e295d0;
static int32_t&      g_bCircuitIdxInRange              = *(int32_t*)     0x00e295c4;
static UnknStruct0*  g_pUnknStruct0                    =  (UnknStruct0*) 0x0050c454;
static TrackInfo*  g_UnknStruct1Array                =  (TrackInfo*) 0x004bfee8;
static PlanetName*   g_PlanetNames                     =  (PlanetName*)  0x00e98f5c;

static const char*   g_TxtTimeAttack                   =  (const char*)  0x004c0dd0;        // "/SCREENTEXT_543/~c~sTime Attack"
static const char*   g_Txt2Player                      =  (const char*)  0x004c0db0;        // "/SCREENTEXT_544/~c~s2 Player"
static const char*   g_TxtFreePlay                     =  (const char*)  0x004c0d90;        // "/SCREENTEXT_542/~c~sFree Play"
static const char*   g_TxtTournament                   =  (const char*)  0x004c0df0;        // "/SCREENTEXT_541/~c~sTournament"

static const char*   g_TxtPlanetNotLoaded              =  (const char*)  0x004c0ee4;
static const char*   g_TxtCircuitAmateur               =  (const char*)  0x004c0eb0;        // "/SCREENTEXT_530/~f0~c~sAmateur Podracing Circuit"
static const char*   g_TxtCircuitSemiPro               =  (const char*)  0x004c0e7c;        // "/SCREENTEXT_531/~f0~c~sSemi-Pro Podracing Circuit"
static const char*   g_TxtCircuitGalactic              =  (const char*)  0x004c0e48;        // "/SCREENTEXT_532/~f0~c~sGalactic Podracing Circuit"
static const char*   g_TxtCircuitInvitational          =  (const char*)  0x004c0e10;        // "/SCREENTEXT_533/~f0~c~sInvitational Podracing Circuit"

static const char*   g_TxtTrackID_00                   =  (const char*)  0x004c1728;        // "/SCREENTEXT_497/~~The Boonta Training Course"
static const char*   g_TxtTrackID_01                   =  (const char*)  0x004c1700;        // "/SCREENTEXT_498/~~The Boonta Classic"
static const char*   g_TxtTrackID_02                   =  (const char*)  0x004c16dc;        // "/SCREENTEXT_499/~~Beedo's Wild Ride"
static const char*   g_TxtTrackID_03                   =  (const char*)  0x004c16bc;        // "/SCREENTEXT_500/~~Howler Gorge"
static const char*   g_TxtTrackID_04                   =  (const char*)  0x004c1694;        // "/SCREENTEXT_501/~~Andobi Mountain Run"
static const char*   g_TxtTrackID_05                   =  (const char*)  0x004c166c;        // "/SCREENTEXT_539/~~Ando Prime Centrum"
static const char*   g_TxtTrackID_06                   =  (const char*)  0x004c1648;        // "/SCREENTEXT_503/~~Aquilaris Classic"
static const char*   g_TxtTrackID_07                   =  (const char*)  0x004c1628;        // "/SCREENTEXT_504/~~Sunken City"
static const char*   g_TxtTrackID_08                   =  (const char*)  0x004c1604;        // "/SCREENTEXT_505/~~Bumpy's Breakers"
static const char*   g_TxtTrackID_09                   =  (const char*)  0x004c15e0;        // "/SCREENTEXT_506/~~Scrapper's Run"
static const char*   g_TxtTrackID_10                   =  (const char*)  0x004c15bc;        // "/SCREENTEXT_507/~~Dethro's Revenge"
static const char*   g_TxtTrackID_11                   =  (const char*)  0x004c15a4;        // "/SCREENTEXT_508/~~Abyss"
static const char*   g_TxtTrackID_12                   =  (const char*)  0x004c1584;        // "/SCREENTEXT_509/~~Baroo Coast"
static const char*   g_TxtTrackID_13                   =  (const char*)  0x004c1560;        // "/SCREENTEXT_510/~~Grabvine Gateway"
static const char*   g_TxtTrackID_14                   =  (const char*)  0x004c1538;        // "/SCREENTEXT_511/~~Fire Mountain Rally"
static const char*   g_TxtTrackID_15                   =  (const char*)  0x004c151c;        // "/SCREENTEXT_540/~~Inferno"
static const char*   g_TxtTrackID_16                   =  (const char*)  0x004c14f4;        // "/SCREENTEXT_513/~~Mon Gazza Speedway"
static const char*   g_TxtTrackID_17                   =  (const char*)  0x004c14d0;        // "/SCREENTEXT_514/~~Spice Mine Run"
static const char*   g_TxtTrackID_18                   =  (const char*)  0x004c14ac;        // "/SCREENTEXT_515/~~Zugga Challenge"
static const char*   g_TxtTrackID_19                   =  (const char*)  0x004c1490;        // "/SCREENTEXT_516/~~Vengeance"
static const char*   g_TxtTrackID_20                   =  (const char*)  0x004c1470;        // "/SCREENTEXT_517/~~Executioner"
static const char*   g_TxtTrackID_21                   =  (const char*)  0x004c1450;        // "/SCREENTEXT_518/~~The Gauntlet"
static const char*   g_TxtTrackID_22                   =  (const char*)  0x004c1430;        // "/SCREENTEXT_519/~~Malastare 100"
static const char*   g_TxtTrackID_23                   =  (const char*)  0x004c1414;        // "/SCREENTEXT_520/~~Dug Derby"
static const char*   g_TxtTrackID_24                   =  (const char*)  0x004c13f0;        // "/SCREENTEXT_521/~~Sebulba's Legacy"

 
static uint32_t&     DAT_00e295c0                      = *(uint32_t*)    0x00e295c0;
static int32_t&      DAT_004c4000                      = *(int32_t*)     0x004c4000;
static int32_t&      DAT_0050c54c                      = *(int32_t*)     0x0050c54c;
static float&        DAT_00e295a0                      = *(float*)       0x00e295a0;
static uint8_t&      DAT_0050c134                      = *(uint8_t*)     0x0050c134;
static uint8_t&      DAT_0050c17c                      = *(uint8_t*)     0x0050c17c;
static uint32_t&     DAT_00e295d4                      = *(uint32_t*)    0x00e295d4;
static float&        DAT_004ac86c                      = *(float*)       0x004ac86c;
static float&        DAT_004ac93c                      = *(float*)       0x004ac93c;
static uint32_t&     DAT_0050c918                      = *(uint32_t*)    0x0050c918;
static int32_t&      DAT_004eb39c                      = *(int32_t*)     0x004eb39c;
static int32_t&      DAT_004d6b48                      = *(int32_t*)     0x004d6b48;
static int32_t&      DAT_004eb1c8                      = *(int32_t*)     0x004eb1c8;
static int32_t&      DAT_00e2a698                      = *(int32_t*)     0x00e2a698;
static int32_t&      DAT_004d6b44                      = *(int32_t*)     0x004d6b44;
static int32_t&      DAT_00ea02b0                      = *(int32_t*)     0x00ea02b0;        // TrackIdx !?
static int32_t&      DAT_00ea05ac                      = *(int32_t*)     0x00ea05ac;