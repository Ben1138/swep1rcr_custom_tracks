#pragma once
#include <stdint.h>
#include "Types.h"


namespace CustomTracks
{
    // This is mainly limited by the amount of available image slots. See Functions.cpp
    // Actually, 72 would be available
    constexpr uint8_t MAX = 70;

    void ScanFolder();

    uint8_t GetTotalTrackCount();
    uint8_t GetCircuitCount();
    uint8_t GetTrackCount(uint8_t CircuitIdx);
    TrackInfo GetTrackInfo(uint8_t TotalTrackIdx);
    const char* GetTrackName(uint8_t TotalTrackIdx);

    inline TrackInfo GetTrackInfo(uint8_t CircuitIdx, uint8_t CircuitTrackIdx)
    {
        return GetTrackInfo(CircuitIdx * 7 + CircuitTrackIdx);
    }
    inline const char* GetTrackName(uint8_t CircuitIdx, uint8_t CircuitTrackIdx)
    {
        return GetTrackName(CircuitIdx * 7 + CircuitTrackIdx);
    }
};