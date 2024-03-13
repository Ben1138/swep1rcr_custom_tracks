#pragma once
#include <stdint.h>
#include <stdio.h>
#include "Types.h"

namespace EXT
{
    class Version
    {
    public:
        uint16_t m_uMajor = 0;
        uint16_t m_uMinor = 0;
        uint16_t m_uPatch = 0;

    public:
        inline bool operator==(const Version& rOther)
        {
            return 
                m_uMajor == rOther.m_uMajor &&
                m_uMinor == rOther.m_uMinor &&
                m_uPatch == rOther.m_uPatch;
        }

        inline bool operator<(const Version& rOther)
        {
            return 
                m_uMajor  < rOther.m_uMajor ||
               (m_uMajor == rOther.m_uMajor && m_uMinor  < rOther.m_uMinor) ||
               (m_uMajor == rOther.m_uMajor && m_uMinor == rOther.m_uMinor && m_uPatch < rOther.m_uPatch);
        }

        inline bool operator>(const Version& rOther)
        {
            return 
                m_uMajor  > rOther.m_uMajor ||
               (m_uMajor == rOther.m_uMajor && m_uMinor  > rOther.m_uMinor) ||
               (m_uMajor == rOther.m_uMajor && m_uMinor == rOther.m_uMinor && m_uPatch > rOther.m_uPatch);
        }

        inline bool operator<=(const Version& rOther)
        {
            return *this < rOther || *this == rOther;
        }

        inline bool operator>=(const Version& rOther)
        {
            return *this > rOther || *this == rOther;
        }

    public:
        const char* ToString();
    };

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