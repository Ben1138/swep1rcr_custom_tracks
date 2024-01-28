#pragma once
#include "Globals.h"

void __cdecl HandleCircuit(UnknStruct0* pStruct);                                   // FUN_0043b0b0
void MenuTrackSelection();                                                          // FUN_0043b240
bool IsFreePlay();                                                                  // FUN_0041d6b0
const char* GetTrackName(int32_t TrackID);                                          // FUN_00440620
bool IsTrackPlayable(UnknStruct0* pStruct, uint8_t CircuitIdx, uint8_t TrackIdx);   // FUN_00440aa0
void __cdecl InitTracks(UnknStruct0* pStruct, bool bDrawTracks);                    // FUN_004584a0
void DrawTracks(UnknStruct0* param_1, char param_2);                                // FUN_004360e0
int32_t VerifySelectedTrack(UnknStruct0* pStruct, int32_t SelectedTrackIdx);        // FUN_00440af0

int32_t FUN_0041d6c0();