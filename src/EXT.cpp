#include "EXT.h"
#include "ReverseEngineering/Globals.h"
#include "CustomTracks.h"
#include <assert.h>
#include <stdio.h>

namespace EXT
{
    TrackInfo GetTrackInfo(int8_t TrackID)
    {
        if (TrackID < STOCK_TRACK_SLOTS_COUNT)
        {
            return g_aTrackInfos[TrackID];
        }
        assert((TrackID - STOCK_TRACK_SLOTS_COUNT) < CustomTracks::MAX);
        return CustomTracks::GetTrackInfo(TrackID - STOCK_TRACK_SLOTS_COUNT);
    }

    uint16_t GetImgStartBackground(uint16_t TrackIdx)
    {
        if (TrackIdx < STOCK_TRACK_SLOTS_COUNT)
        {
            return 99 + TrackIdx;
        }
        TrackIdx -= STOCK_TRACK_SLOTS_COUNT;

        // Slots 256 - 399 seem to be free...
        // 144 slots / 2 = 72 custom tracks
        assert(TrackIdx < CustomTracks::MAX);
        return 256 + TrackIdx;
    }

    uint16_t GetImgStartBorder(uint16_t TrackIdx)
    {
        if (TrackIdx < STOCK_TRACK_SLOTS_COUNT)
        {
            return 99 + STOCK_TRACK_SLOTS_COUNT + TrackIdx;
        }
        TrackIdx -= STOCK_TRACK_SLOTS_COUNT;

        // Slots 256 - 399 seem to be free...
        // 144 slots / 2 = 72 custom tracks
        assert(TrackIdx < CustomTracks::MAX);
        return 256 + CustomTracks::MAX + TrackIdx;
    }
}