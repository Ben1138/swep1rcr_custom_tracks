#include <windows.h>
#include "Functions.h"

// FUN_0043b0b0
void __cdecl HandleCircuits(UnknStruct0* pStruct)
{
    int CircuitIdx;
    int NumTracks;

    //MessageBoxA(NULL, "Entered HandleCircuits!", "HandleCircuits", MB_ICONINFORMATION | MB_OK);

    NumTracks = 0;
    g_TournamentNumCircuitsAvailable = 3;
    g_TracksInCurrentCurcuit = 0;
    if (!pStruct->bIsTournament)
    {
        if (g_BeatTracks[3] == 0)
        {
            g_TournamentNumCircuitsAvailable = 2;
        }
        CircuitIdx = (int)pStruct->CircuitIdx;
        for (int i = 0; i < g_TracksInCircuits[CircuitIdx]; i++)
        {
            if ((g_BeatTracks[CircuitIdx] & (1 << i)) != 0)
            {
                NumTracks = NumTracks + 1;
                g_TracksInCurrentCurcuit = NumTracks;
            }
            CircuitIdx = (int)pStruct->CircuitIdx;
        }
    }
    else
    {
        if (g_TracksSelectableTournament[3] == 0)
        {
            g_TournamentNumCircuitsAvailable = 2;
        }
        CircuitIdx = (int)pStruct->CircuitIdx;
        for (uint8_t i = 0; i < g_TracksInCircuits[CircuitIdx]; i++)
        {
            if ((g_TracksSelectableTournament[CircuitIdx] & (1 << i)) != 0)
            {
                NumTracks = NumTracks + 1;
                g_TracksInCurrentCurcuit = NumTracks;
            }
            CircuitIdx = (int)pStruct->CircuitIdx;
        }
    }
    if ((g_bIsFreePlay != 0) && (pStruct->CircuitIdx < 3))
    {
        NumTracks = (int)g_TracksInCircuits[pStruct->CircuitIdx];
        g_TracksInCurrentCurcuit = NumTracks;
    }
    if (NumTracks + -1 < g_NumTracks)
    {
        g_NumTracks = NumTracks + -1;
    }

    DAT_00e295c0 = (uint32_t)(0 < pStruct->CircuitIdx);
    g_bCircuitIdxInRange = (uint32_t)(pStruct->CircuitIdx < g_TournamentNumCircuitsAvailable);
}