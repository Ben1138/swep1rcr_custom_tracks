#pragma once
#include "Types.h"
#include <stdio.h>    // Required for FILE*


static int32_t&       g_CircuitIdxMax                   = *(int32_t*)      0x00e295c8;        // Max: 255
static uint8_t*       g_aTracksSelectableTournament     =  (uint8_t*)      0x00e35a85;        // Length: 4
static int32_t&       g_TracksInCurrentCircuit          = *(int32_t*)      0x00e295cc;
static uint8_t*       g_aTracksInCircuits               =  (uint8_t*)      0x004bfee0;        // Length: 4
static uint32_t*      g_aTrackIDs                       =  (uint32_t*)     0x004c0018;        // Length: 25 + 3 padding
static uint8_t*       g_aBeatTracksGlobal               =  (uint8_t*)      0x00e364ac;        // Length: 4
static uint8_t&       g_bIsFreePlay                     = *(uint8_t*)      0x004d5e00;        // Might actually be Time Attack?
static int32_t&       g_SelectedTrackIdx                = *(int32_t*)      0x00e295d0;
static int32_t&       g_bCircuitIdxInRange              = *(int32_t*)      0x00e295c4;
static MenuState*&    g_pMenuState                      = *(MenuState**)   0x0050c454;
static TrackInfo*     g_aTrackInfos                     =  (TrackInfo*)    0x004bfee8;        // Length: 25
static PlanetName*    g_aPlanetNames                    =  (PlanetName*)   0x00e98f5c;        // Length: 8
static ImgParam*      g_aImageParams                    =  (ImgParam*)     0x00e9ba60;        // Length: 400
static int32_t&       g_ImgCount                        = *(int32_t*)      0x004b91b8;
static int32_t&       g_LoadTrackModel                  = *(int32_t*)      0x00ea05ac;        // Apparently only used when g_bIsFreePlay == true ?
static PilotInfo*     g_aPilotInfos                     =  (PilotInfo*)    0x004c2714;        // Length: 23
static int8_t&        g_uNumRacers                      = *(int8_t*)       0x0050c558;

// Array of 2 bits representing the place of each track
//  11 - 1st place
//  10 - 2nd place
//  01 - 3rd place
//  00 - not beat
static uint16_t*      g_aBeatTrackPlace                 =  (uint16_t*)     0x00e35a8a;        // Length: 4
static FILE*          g_pModelblock                     =  (FILE*)         0x0050c098;        // Unused, using custom s_pModelblock instead
static FILE*          g_pSpriteblock                    =  (FILE*)         0x0050c08c;        // Unused, using custom s_pSpriteblock instead
static FILE*          g_pSplineblock                    =  (FILE*)         0x0050c090;        // Unused, using custom s_pSplineblock instead
static FILE*          g_pTextureblock                   =  (FILE*)         0x0050c094;        // Unused, using custom s_pTextureblock instead
                                                                           
static const char*    g_pPathModelblock                 =  (const char*)   0x004b959c;        // "data/lev01/out_modelblock.bin"
static const char*    g_pPathSpriteblock                =  (const char*)   0x004b95fc;        // "data/lev01/out_spriteblock.bin"
static const char*    g_pPathSplineblock                =  (const char*)   0x004b95dc;        // "data/lev01/out_splineblock.bin"
static const char*    g_pPathTextureblock               =  (const char*)   0x004b95bc;        // "data/lev01/out_textureblock.bin"

static const char*    g_pTxtTimeAttack                  =  (const char*)   0x004c0dd0;        // "/SCREENTEXT_543/~c~sTime Attack"
static const char*    g_pTxt2Player                     =  (const char*)   0x004c0db0;        // "/SCREENTEXT_544/~c~s2 Player"
static const char*    g_pTxtFreePlay                    =  (const char*)   0x004c0d90;        // "/SCREENTEXT_542/~c~sFree Play"
static const char*    g_pTxtTournament                  =  (const char*)   0x004c0df0;        // "/SCREENTEXT_541/~c~sTournament"
                                                                           
static const char*    g_pTxtPlanetNotLoaded             =  (const char*)   0x004c0ee4;        // "~c~s---Planet not loaded!!!---"
static const char*    g_pTxtCircuitAmateur              =  (const char*)   0x004c0eb0;        // "/SCREENTEXT_530/~f0~c~sAmateur Podracing Circuit"
static const char*    g_pTxtCircuitSemiPro              =  (const char*)   0x004c0e7c;        // "/SCREENTEXT_531/~f0~c~sSemi-Pro Podracing Circuit"
static const char*    g_pTxtCircuitGalactic             =  (const char*)   0x004c0e48;        // "/SCREENTEXT_532/~f0~c~sGalactic Podracing Circuit"
static const char*    g_pTxtCircuitInvitational         =  (const char*)   0x004c0e10;        // "/SCREENTEXT_533/~f0~c~sInvitational Podracing Circuit"
static const char*    g_pTxtWinnings                    =  (const char*)   0x004c111c;        // "/SCREENTEXT_222/~f4~sWinnings:"
static const char*    g_pTxtWinnerTakesAll              =  (const char*)   0x004c113c;        // "/SCREENTEXT_225/~f4~sWinner Takes All"
static const char*    g_pTxtSkilled                     =  (const char*)   0x004c1164;        // "/SCREENTEXT_224/~f4~sSkilled"
static const char*    g_pTxtFair                        =  (const char*)   0x004c1184;        // "/SCREENTEXT_223/~f4~sFair"
static const char*    g_pTxtOff                         =  (const char*)   0x004c11a0;        // "/SCREENTEXT_233/~f4~sOFF"
static const char*    g_pTxtOn                          =  (const char*)   0x004c11bc;        // "/SCREENTEXT_232/~f4~sON"
static const char*    g_pTxtOff2                        =  (const char*)   0x004c0fc4;        // "/SCREENTEXT_234/~f4~sOFF
static const char*    g_pTxtMirror                      =  (const char*)   0x004c11d4;        // "/SCREENTEXT_655/~f4~sMirror:"
static const char*    g_pTxtRace                        =  (const char*)   0x004c0924;        // "/SCREENTEXT_585/~f4~c~sRace"
static const char*    g_pTxt1st                         =  (const char*)   0x004c1100;        // "/SCREENTEXT_226/~f4~s1st"
static const char*    g_pTxt2nd                         =  (const char*)   0x004c10e4;        // "/SCREENTEXT_227/~f4~s2nd"
static const char*    g_pTxt3rd                         =  (const char*)   0x004c10c8;        // "/SCREENTEXT_228/~f4~s3rd"
static const char*    g_pTxt4th                         =  (const char*)   0x004c0908;        // "/SCREENTEXT_229/~f4~s4th"
static const char*    g_pTxtLaps                        =  (const char*)   0x004c1098;        // "/SCREENTEXT_214/~f4~sLaps:"
static const char*    g_pTxtRacers                      =  (const char*)   0x004c1078;        // "/SCREENTEXT_216/~f4~sRacers:"
static const char*    g_pTxtSlow                        =  (const char*)   0x004c105c;        // "/SCREENTEXT_219/~f4~sSlow"
static const char*    g_pTxtAverage                     =  (const char*)   0x004c103c;        // "/SCREENTEXT_220/~f4~sAverage"
static const char*    g_pTxtFast                        =  (const char*)   0x004c1020;        // "/SCREENTEXT_221/~f4~sFast"
static const char*    g_pTxtAISpeed                     =  (const char*)   0x004c1000;        // "/SCREENTEXT_218/~f4~sAI Speed:"
static const char*    g_pTxtDemoMode                    =  (const char*)   0x004c0fe0;        // "/SCREENTEXT_231/~f4~sDemo mode:"
static const char*    g_pTxtTrackFavorite               =  (const char*)   0x004c0f7c;        // "/SCREENTEXT_529/~f4~c~sTrack Favorite:"
static const char*    g_pTxtMinPlace3rd                 =  (const char*)   0x004c0f40;        // "/SCREENTEXT_527/~f4~c~sMust place 3rd or better to progress"
static const char*    g_pTxtMinPlace4th                 =  (const char*)   0x004c0f04;        // "/SCREENTEXT_528/~f4~c~sMust place 4th or better to progress"
static const char*    g_pTxtMainMenu                    =  (const char*)   0x004c0a60;        // "/SCREENTEXT_474/~c~sMain Menu"
static const char*    g_pTxtStartRace                   =  (const char*)   0x004c0a40;        // "/SCREENTEXT_69/~f4~sStart Race"
static const char*    g_pTxtInspectVehicle              =  (const char*)   0x004c0a18;        // "/SCREENTEXT_523/~f4~sInspect Vehicle"
static const char*    g_pTxtVehicleUpgrades             =  (const char*)   0x004c09f0;        // "/SCREENTEXT_524/~f4~sVehicle Upgrades"
static const char*    g_pTxtBuyParts                    =  (const char*)   0x004c09d0;        // "/SCREENTEXT_102/~f4~sBuy Parts"
static const char*    g_pTxtJunkyard                    =  (const char*)   0x004c09b0;        // "/SCREENTEXT_103/~f4~sJunkyard"
static const char*    g_pTxtBuyPitDroids                =  (const char*)   0x004c098c;        // "/SCREENTEXT_587/~f4~sBuy Pit Droids"
static const char*    g_pTxtChangeVehicle               =  (const char*)   0x004c0968;        // "/SCREENTEXT_473/~f4~sChange Vehicle"
static const char*    g_pTxtOptions                     =  (const char*)   0x004c094c;        // "/SCREENTEXT_73/~f4~sOptions"
static const char*    g_pTxtCutscene                    =  (const char*)   0x004c0fb4;        // "~f4~sCutscene:"

static const char*    g_pTxtTrackID_00                  =  (const char*)   0x004c1728;        // "/SCREENTEXT_497/~~The Boonta Training Course"
static const char*    g_pTxtTrackID_01                  =  (const char*)   0x004c1700;        // "/SCREENTEXT_498/~~The Boonta Classic"
static const char*    g_pTxtTrackID_02                  =  (const char*)   0x004c16dc;        // "/SCREENTEXT_499/~~Beedo's Wild Ride"
static const char*    g_pTxtTrackID_03                  =  (const char*)   0x004c16bc;        // "/SCREENTEXT_500/~~Howler Gorge"
static const char*    g_pTxtTrackID_04                  =  (const char*)   0x004c1694;        // "/SCREENTEXT_501/~~Andobi Mountain Run"
static const char*    g_pTxtTrackID_05                  =  (const char*)   0x004c166c;        // "/SCREENTEXT_539/~~Ando Prime Centrum"
static const char*    g_pTxtTrackID_06                  =  (const char*)   0x004c1648;        // "/SCREENTEXT_503/~~Aquilaris Classic"
static const char*    g_pTxtTrackID_07                  =  (const char*)   0x004c1628;        // "/SCREENTEXT_504/~~Sunken City"
static const char*    g_pTxtTrackID_08                  =  (const char*)   0x004c1604;        // "/SCREENTEXT_505/~~Bumpy's Breakers"
static const char*    g_pTxtTrackID_09                  =  (const char*)   0x004c15e0;        // "/SCREENTEXT_506/~~Scrapper's Run"
static const char*    g_pTxtTrackID_10                  =  (const char*)   0x004c15bc;        // "/SCREENTEXT_507/~~Dethro's Revenge"
static const char*    g_pTxtTrackID_11                  =  (const char*)   0x004c15a4;        // "/SCREENTEXT_508/~~Abyss"
static const char*    g_pTxtTrackID_12                  =  (const char*)   0x004c1584;        // "/SCREENTEXT_509/~~Baroo Coast"
static const char*    g_pTxtTrackID_13                  =  (const char*)   0x004c1560;        // "/SCREENTEXT_510/~~Grabvine Gateway"
static const char*    g_pTxtTrackID_14                  =  (const char*)   0x004c1538;        // "/SCREENTEXT_511/~~Fire Mountain Rally"
static const char*    g_pTxtTrackID_15                  =  (const char*)   0x004c151c;        // "/SCREENTEXT_540/~~Inferno"
static const char*    g_pTxtTrackID_16                  =  (const char*)   0x004c14f4;        // "/SCREENTEXT_513/~~Mon Gazza Speedway"
static const char*    g_pTxtTrackID_17                  =  (const char*)   0x004c14d0;        // "/SCREENTEXT_514/~~Spice Mine Run"
static const char*    g_pTxtTrackID_18                  =  (const char*)   0x004c14ac;        // "/SCREENTEXT_515/~~Zugga Challenge"
static const char*    g_pTxtTrackID_19                  =  (const char*)   0x004c1490;        // "/SCREENTEXT_516/~~Vengeance"
static const char*    g_pTxtTrackID_20                  =  (const char*)   0x004c1470;        // "/SCREENTEXT_517/~~Executioner"
static const char*    g_pTxtTrackID_21                  =  (const char*)   0x004c1450;        // "/SCREENTEXT_518/~~The Gauntlet"
static const char*    g_pTxtTrackID_22                  =  (const char*)   0x004c1430;        // "/SCREENTEXT_519/~~Malastare 100"
static const char*    g_pTxtTrackID_23                  =  (const char*)   0x004c1414;        // "/SCREENTEXT_520/~~Dug Derby"
static const char*    g_pTxtTrackID_24                  =  (const char*)   0x004c13f0;        // "/SCREENTEXT_521/~~Sebulba's Legacy"
                      
                      
static uint32_t&      DAT_00e295c0                      = *(uint32_t*)     0x00e295c0;
static int32_t&       DAT_004c4000                      = *(int32_t*)      0x004c4000;
static int32_t&       DAT_0050c54c                      = *(int32_t*)      0x0050c54c;
static float&         DAT_00e295a0                      = *(float*)        0x00e295a0;
static uint8_t&       DAT_0050c134                      = *(uint8_t*)      0x0050c134;
static uint8_t&       DAT_0050c17c                      = *(uint8_t*)      0x0050c17c;
static uint32_t&      DAT_00e295d4                      = *(uint32_t*)     0x00e295d4;
static float&         DAT_004ac86c                      = *(float*)        0x004ac86c;
static float&         DAT_004ac93c                      = *(float*)        0x004ac93c;
static uint32_t&      DAT_0050c918                      = *(uint32_t*)     0x0050c918;
static int32_t&       DAT_004eb39c                      = *(int32_t*)      0x004eb39c;
static int32_t&       DAT_004d6b48                      = *(int32_t*)      0x004d6b48;
static int32_t&       DAT_004eb1c8                      = *(int32_t*)      0x004eb1c8;
static int32_t&       DAT_00e2a698                      = *(int32_t*)      0x00e2a698;
static int32_t&       DAT_004d6b44                      = *(int32_t*)      0x004d6b44;
static int32_t&       DAT_00ea02b0                      = *(int32_t*)      0x00ea02b0;        // TrackIdx !?
static float&         DAT_004ac7a4                      = *(float*)        0x004ac7a4;
static int8_t&        DAT_0050c55c                      = *(int8_t*)       0x0050c55c;
static int8_t&        DAT_0050c560                      = *(int8_t*)       0x0050c560;
static int32_t&       DAT_0050c550                      = *(int32_t*)      0x0050c550;
static int32_t&       DAT_0050c554                      = *(int32_t*)      0x0050c554;
static uint8_t*       DAT_0050c430                      =  (uint8_t*)      0x0050c430;        // Length: 4
//static double&        DAT_004ac910                      = *(double*)       0x004ac910;        // Initial value: -0.5    May be just a constant?
//static double&        DAT_004ac918                      = *(double*)       0x004ac918;        // Initial value: 1.0     May be just a constant?

static int32_t*       DAT_00e29160                      =  (int32_t*)      0x00e29160;        // Length: 151 ?
static int32_t*       DAT_00e29600                      =  (int32_t*)      0x00e29600;        // Length: 151 ?
static int32_t*       DAT_00e29900                      =  (int32_t*)      0x00e29900;        // Length: 151 ?
static int32_t*       DAT_00e2afa0                      =  (int32_t*)      0x00e2afa0;        // Length: 151 ?

static int32_t*       DAT_00e29a88                      =  (int32_t*)      0x00e29a88;        // a.k.a. &DAT_00e29900[98]
static float*         DAT_00e365f4                      =  (float*)        0x00e365f4;        // Length: 50 (2 * 25 Track Times?)
static float*         DAT_00e366bc                      =  (float*)        0x00e366bc;        // Length: 50 (2 * 25 Track Times?)
static uint8_t*       DAT_00e37404                      =  (uint8_t*)      0x00e37404;        // Length: ??? (50?)
static uint8_t*       DAT_00e37436                      =  (uint8_t*)      0x00e37436;        // Length: ??? (50?)
static int32_t&       DAT_0050c480                      = *(int32_t*)      0x0050c480;
static float*         DAT_00e298f0                      =  (float*)        0x00e298f0;        // Length: 3 (Vec3)
static float*         DAT_00e2af90                      =  (float*)        0x00e2af90;        // Length: 3 (Vec3)
static float&         DAT_0050c11c                      = *(float*)        0x0050c11c;
static float*         DAT_0050c2e8                      =  (float*)        0x0050c2e8;        // Length: 3 (Vec3)
static uint8_t*       DAT_0050c308                      =  (uint8_t*)      0x0050c308;        // Length: 12
static int32_t&       DAT_00e35aa0                      = *(int32_t*)      0x00e35aa0;
static uint8_t&       DAT_0050c524                      = *(uint8_t*)      0x0050c524;
static uint16_t&      DAT_0050c930                      = *(uint16_t*)     0x0050c930;
static float*         DAT_00e98ea0                      =  (float*)        0x00e98ea0;        // Length: ???
static float&         DAT_00e22a50                      = *(float*)        0x00e22a50;
static float*         DAT_00e98e80                      =  (float*)        0x00e98e80;        // Length: ???
static int32_t*       DAT_00e2ae80                      =  (int32_t*)      0x00e2ae80;        // Length: 10? 11? Struct?
static int32_t&       DAT_004bfedc                      = *(int32_t*)      0x004bfedc;
static uint8_t&       DAT_00e35a84                      = *(uint8_t*)      0x00e35a84;
static float&         DAT_00ec8854                      = *(float*)        0x00ec8854;
static int32_t&       DAT_0050c458                      = *(int32_t*)      0x0050c458;
static int32_t&       DAT_0050c944                      = *(int32_t*)      0x0050c944;
static char*          DAT_00e35a60                      =  (char*)         0x00e35a60;        // Length: 3
static char*          DAT_004c0948                      =  (char*)         0x004c0948;        // Length: 3
static int32_t&       DAT_0050c908                      = *(int32_t*)      0x0050c908;
static float&         DAT_004acfa8                      = *(float*)        0x004acfa8;        // Read only?
static float&         DAT_004ad1cc                      = *(float*)        0x004ad1cc;        // Read only?
static int32_t&       DAT_0050ca3c                      = *(int32_t*)      0x0050ca3c;
static uint8_t*       DAT_00e29890                      =  (uint8_t*)      0x00e29890;        // Length: 16? TrackID's?
static uint8_t&       DAT_0050c960                      = *(uint8_t*)      0x0050c960;
static int32_t&       DAT_00e364a8                      = *(int32_t*)      0x00e364a8;
static int32_t&       DAT_00ea02b4                      = *(int32_t*)      0x00ea02b4;
static int32_t&       DAT_00ea02b8                      = *(int32_t*)      0x00ea02b8;
