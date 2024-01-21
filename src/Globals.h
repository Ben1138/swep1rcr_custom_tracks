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
 
static uint32_t&  DAT_00e295c0                      = *(uint32_t*) 0x00e295c0;