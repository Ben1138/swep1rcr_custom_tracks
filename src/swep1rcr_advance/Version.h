#pragma once
#include "EXT.h"

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

static Version VERSION = { 1, 0, 0 };