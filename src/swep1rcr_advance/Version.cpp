#include "Version.h"

const char* Version::ToString()
{
    // This is not thread safe!
    // But since SWEP1RCR is single threaded, I guess it's fine.
    static char cBuffer[64];
    snprintf(cBuffer, sizeof(cBuffer), "%d.%d.%d", m_uMajor, m_uMinor, m_uPatch);
    return cBuffer;
}