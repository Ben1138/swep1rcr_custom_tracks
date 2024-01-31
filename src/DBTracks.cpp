#include "DBTracks.h"
#include "ReverseEngineering/Globals.h"
#include "ReverseEngineering/FUN.h"
#include <stdio.h>
#include <assert.h>


namespace DBTracks
{
    static uint16_t TrackCount = 0;
    TrackInfo g_aNewTrackInfos[TRACKS_COUNT_MAX]{};
    static char CustomTrackNames[TRACKS_COUNT_MAX][32]{};

    void Init()
    {
        // Copy stock Infos
        for (uint8_t i = 0; i < 25; i++)
        {
            g_aNewTrackInfos[i] = g_aTrackInfos[i];
        }

        // TODO
        constexpr uint16_t NumCustomTracks = 10;

        TrackCount = 28 + NumCustomTracks;
        for (uint16_t i = 28; i < TrackCount; i++)
        {
            g_aNewTrackInfos[i] = g_aTrackInfos[16];
            //Infos[i].LoadModel = 142;
            //Infos[i].LoadSpline = 52;
            //Infos[i].PlanetIdx = 1;
            //Infos[i].FavoritePilot = 2;

            const uint8_t CustomID = i - 28;
            snprintf(CustomTrackNames[CustomID], sizeof(CustomTrackNames[CustomID]), "Custom Track %u", CustomID + 1);
        }
    }

    uint16_t GetTotalTrackCount()
    {
        return TrackCount;
    }

    uint16_t GetCircuitCount(bool bIncludeCustom)
    {
        assert(TrackCount > 0);
        if (!bIncludeCustom)
        {
            return 4;
        }
        const uint16_t NumCustomTracks = TrackCount - 28;
        return 4 + (NumCustomTracks / 7 + 1);
    }

    uint16_t GetTrackCount(uint16_t CircuitIdx)
    {
        if (CircuitIdx < 4)
        {
            return g_aTracksInCircuits[CircuitIdx];
        }
        if (CircuitIdx >= GetCircuitCount(true))
        {
            return 0;
        }

        const uint16_t CustomCircuitIdx = CircuitIdx - 4;
        const uint16_t NumCustomTracks = TrackCount - 28;
        uint16_t NumTracks = NumCustomTracks - (CustomCircuitIdx * 7);
        if (NumTracks > 7)
        {
            NumTracks = 7;
        }
        return NumTracks;
    }

    TrackInfo GetTrackInfo(uint16_t TrackID)
    {
        if (TrackID >= TrackCount)
        {
            return TrackInfo();
        }
        return g_aNewTrackInfos[TrackID];
    }

    const char* GetTrackName(uint16_t TrackID)
    {
        if (TrackID >= TrackCount)
        {
            return "Invalid Track!";
        }

        switch (TrackID)
        {
            case 0:
                return FUN::StrSanitise(g_pTxtTrackID_00);
            case 1:
                return FUN::StrSanitise(g_pTxtTrackID_01);
            case 2:
                return FUN::StrSanitise(g_pTxtTrackID_02);
            case 3:
                return FUN::StrSanitise(g_pTxtTrackID_03);
            case 4:
                return FUN::StrSanitise(g_pTxtTrackID_04);
            case 5:
                return FUN::StrSanitise(g_pTxtTrackID_05);
            case 6:
                return FUN::StrSanitise(g_pTxtTrackID_06);
            case 7:
                return FUN::StrSanitise(g_pTxtTrackID_07);
            case 8:
                return FUN::StrSanitise(g_pTxtTrackID_08);
            case 9:
                return FUN::StrSanitise(g_pTxtTrackID_09);
            case 10:
                return FUN::StrSanitise(g_pTxtTrackID_10);
            case 11:
                return FUN::StrSanitise(g_pTxtTrackID_11);
            case 12:
                return FUN::StrSanitise(g_pTxtTrackID_12);
            case 13:
                return FUN::StrSanitise(g_pTxtTrackID_13);
            case 14:
                return FUN::StrSanitise(g_pTxtTrackID_14);
            case 15:
                return FUN::StrSanitise(g_pTxtTrackID_15);
            case 16:
                return FUN::StrSanitise(g_pTxtTrackID_16);
            case 17:
                return FUN::StrSanitise(g_pTxtTrackID_17);
            case 18:
                return FUN::StrSanitise(g_pTxtTrackID_18);
            case 19:
                return FUN::StrSanitise(g_pTxtTrackID_19);
            case 20:
                return FUN::StrSanitise(g_pTxtTrackID_20);
            case 21:
                return FUN::StrSanitise(g_pTxtTrackID_21);
            case 22:
                return FUN::StrSanitise(g_pTxtTrackID_22);
            case 23:
                return FUN::StrSanitise(g_pTxtTrackID_23);
            case 24:
                return FUN::StrSanitise(g_pTxtTrackID_24);
        }

        return CustomTrackNames[TrackID - 28];
    }
}
