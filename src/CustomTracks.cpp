#include "CustomTracks.h"
#include "Globals.h"
#include <stdio.h>

static uint8_t TrackCount = 0;
static TrackInfo Infos[CustomTracks::MAX];
static char Names[CustomTracks::MAX][32];


namespace CustomTracks
{
    void ScanFolder()
    {
        TrackCount = 10;
        for (uint8_t i = 0; i < TrackCount; i++)
        {
            Infos[i] = g_aTrackInfos[16];
            //Infos[i].LoadModel = 142;
            //Infos[i].LoadSpline = 52;
            //Infos[i].PlanetIdx = 1;
            //Infos[i].FavoritePilot = 2;

            snprintf(Names[i], sizeof(Names[i]), "Custom Track %u", i + 1);
        }
    }

    uint8_t GetTotalTrackCount()
    {
        return TrackCount;
    }

    uint8_t GetCircuitCount()
    {
        if (TrackCount == 0)
        {
            return 0;
        }
        return TrackCount / 7 + 1;
    }

    uint8_t GetTrackCount(uint8_t CircuitIdx)
    {
        if (CircuitIdx >= GetCircuitCount())
        {
            return 0;
        }

        uint8_t NumTracks = TrackCount - (CircuitIdx * 7);
        if (NumTracks > 7)
        {
            NumTracks = 7;
        }
        return NumTracks;
    }

    TrackInfo GetTrackInfo(uint8_t TotalTrackIdx)
    {
        if (TotalTrackIdx >= TrackCount)
        {
            return TrackInfo();
        }
        return Infos[TotalTrackIdx];
    }

    const char* GetTrackName(uint8_t TotalTrackIdx)
    {
        if (TotalTrackIdx >= TrackCount)
        {
            return nullptr;
        }
        return Names[TotalTrackIdx];
    }
}
