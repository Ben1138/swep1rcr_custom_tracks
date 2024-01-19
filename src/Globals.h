#pragma once
#include "Types.h"

static int32_t&   g_TournamentNumCircuitsAvailable  = *(int32_t*)  0x00e295c8;
static uint8_t*   g_TracksSelectableTournament      =  (uint8_t*)  0x00e35a85;       // Length: 4
static int32_t&   g_TracksInCurrentCurcuit          = *(int32_t*)  0x00e295cc;
static uint8_t*   g_TracksInCircuits                =  (uint8_t*)  0x004bfee0;       // Length: 4
static uint8_t*   g_BeatTracks                      =  (uint8_t*)  0x00e364ac;       // Length: 4
static uint8_t&   g_bIsFreePlay                     = *(uint8_t*)  0x004d5e00;
static int32_t&   g_NumTracks                       = *(int32_t*)  0x00e295d0;
static int32_t&   g_bCircuitIdxInRange              = *(int32_t*)  0x00e295c4;
 
static uint32_t&  DAT_00e295c0                      = *(uint32_t*) 0x00e295c0;