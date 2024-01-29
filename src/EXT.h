#pragma once
#include <stdint.h>
#include "ReverseEngineering/Types.h"

namespace EXT
{
    TrackInfo GetTrackInfo(int8_t TrackID);
    uint16_t GetImgStartBackground(uint16_t TrackIdx);
    uint16_t GetImgStartBorder(uint16_t TrackIdx);
};