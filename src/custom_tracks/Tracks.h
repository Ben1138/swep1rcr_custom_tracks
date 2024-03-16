#pragma once
#include <stdint.h>
#include "Types.h"
#include "Version.h"
#include "EXT.h"


namespace Tracks
{
    // This is mainly limited by the amount of available image slots. See Functions.cpp
    // Actually, 72 would be available
    constexpr uint8_t CUSTOM_TRACKS_MAX = 70;

    constexpr uint8_t COLOR_R  = 150;
    constexpr uint8_t COLOR_G  = 80;
    constexpr uint8_t COLOR_B  = 240;

    constexpr uint16_t TRACKS_COUNT_MAX = 28 + Tracks::CUSTOM_TRACKS_MAX;
    extern TrackInfo g_aNewTrackInfos[TRACKS_COUNT_MAX];


    void Init();
    uint16_t GetTotalTrackCount();
    uint16_t GetCircuitCount(bool bIncludeCustom);
    uint16_t GetTrackCount(uint16_t CircuitIdx);
    TrackInfo GetTrackInfo(uint16_t TrackID);
    TrackInfo GetTrackInfo(uint16_t TrackID);
    Version GetTrackBuildVersion(uint16_t TrackID);
    const char* GetTrackName(uint16_t TrackID);

    inline TrackInfo GetTrackInfo(uint16_t CircuitIdx, uint16_t CircuitTrackIdx)
    {
        return GetTrackInfo(CircuitIdx * 7 + CircuitTrackIdx);
    }
    inline const char* GetTrackName(uint16_t CircuitIdx, uint16_t CircuitTrackIdx)
    {
        return GetTrackName(CircuitIdx * 7 + CircuitTrackIdx);
    }
};