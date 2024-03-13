#include "EXT.h"
#include "Globals.h"
#include "FUN.h"
#include "DBTracks.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

namespace EXT
{
    const char* Version::ToString()
    {
        // This is not thread safe!
        // But since SWEP1RCR is single threaded, I guess it's fine.
        static char cBuffer[64];
        snprintf(cBuffer, sizeof(cBuffer), "%d.%d.%d", m_uMajor, m_uMinor, m_uPatch);
        return cBuffer;
    }

    // Used to be part of FileOpen (FUN_0042d680)
    const char* GetFilePath(int32_t FileID)
    {
        switch (FileID)
        {
            case 0:
                return g_pPathModelblock;
            case 1:
                return g_pPathSpriteblock;
            case 2:
                return g_pPathSplineblock;
            case 3:
                return g_pPathTextureblock;
        }
        return nullptr;
    }

    uint16_t GetImgStartBackground(uint16_t TrackID)
    {
        if (TrackID < 25)
        {
            return 99 + TrackID;
        }
        TrackID -= 25;

        // Slots 256 - 399 seem to be free...
        // 144 slots / 2 = 72 possible custom tracks
        assert(TrackID < DBTracks::CUSTOM_TRACKS_MAX);
        return 256 + TrackID;
    }

    uint16_t GetImgStartBorder(uint16_t TrackID)
    {
        if (TrackID < 25)
        {
            return 99 + 25 + TrackID;
        }
        TrackID -= 25;

        // Slots 256 - 399 seem to be free...
        // 144 slots / 2 = 72 possible custom tracks
        assert(TrackID < DBTracks::CUSTOM_TRACKS_MAX);
        return 256 + DBTracks::CUSTOM_TRACKS_MAX + TrackID;
    }

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
        uint16_t LineSpacing)
    {
        // Since 'UIText' expects a null terminated string
        // I have to make a copy for each line, unfortunately...
        constexpr uint16_t LINES_MAX = 64;
        constexpr uint16_t LINE_LENGTH_MAX = 128;

        const uint16_t FormattingLen = (uint16_t)strnlen(pFormatting, LINE_LENGTH_MAX);
        
        if (LinesMax > LINES_MAX)
        {
            LinesMax = LINES_MAX;
        }
        if (LineLengthMax > LINE_LENGTH_MAX - FormattingLen - 1)
        {
            LineLengthMax = LINE_LENGTH_MAX - FormattingLen - 1;
        }

        char Lines[LINES_MAX][LINE_LENGTH_MAX];

        uint16_t LineCount = 0;
        const char* pLastSpace = pText;
        const char* pLastNewLine = pText;
        for (;LineCount < LinesMax; pText++)
        {
            if (*pText == ' ')
            {
                pLastSpace = pText + 1;
            }
            
            uint16_t LineLen = pText - pLastNewLine;
            if (LineLen >= LineLengthMax)
            {
                LineLen = LineLengthMax;
            }

            if (*pText == 0)
            {
                strncpy(Lines[LineCount], pFormatting, FormattingLen);
                strncpy(Lines[LineCount] + FormattingLen, pLastNewLine, LineLen);
                Lines[LineCount++][FormattingLen + LineLen] = 0;
                break;
            }

            if (*pText == '\n' || (LineLen >= LineLengthMax && pLastSpace != pLastNewLine))
            {
                strncpy(Lines[LineCount], pFormatting, FormattingLen);
                strncpy(Lines[LineCount] + FormattingLen, pLastNewLine, LineLen);
                Lines[LineCount++][FormattingLen + LineLen] = 0;

                for (; *pText == ' '; pText++);
                pLastSpace = pText;
                pLastNewLine = pText;
            }
        }

        for (uint16_t i = 0; i < LineCount; i++)
        {
            FUN::UIText(PosX, PosY + (LineSpacing * i), R, G, B, A, Lines[i]);
        }
    }
}