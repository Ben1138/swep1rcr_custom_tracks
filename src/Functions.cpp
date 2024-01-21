#include <windows.h>
#include "Functions.h"

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