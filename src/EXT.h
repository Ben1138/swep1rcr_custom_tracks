#pragma once
#include <stdint.h>
#include <stdio.h>
#include "ReverseEngineering/Types.h"

namespace EXT
{
    const char* GetFilePath(int32_t FileID);
    uint16_t GetImgStartBackground(uint16_t TrackIdx);
    uint16_t GetImgStartBorder(uint16_t TrackIdx);

    void DrawTextBox(
        uint16_t PosX,
        uint16_t PosY,
        uint8_t R,
        uint8_t G,
        uint8_t B,
        uint8_t A,
        const char* pFormatting,
        const char* pText,
        uint16_t LineLengthMax,
        uint16_t LinesMax,
        uint16_t LineSpacing
    );
};