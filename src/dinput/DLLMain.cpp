#include <windows.h>
#include "md5.h"

#if DYN_LOAD
#include "DynamicLoading.h"
#else
#include "Tracks.h"
#include "Patching.h"
#endif


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
        {
            uint8_t aMd5[16];
            FILE* hEXE = fopen("SWEP1RCR.EXE", "rb");
            if (!hEXE)
            {
                MessageBoxA(nullptr, "Failed to open 'SWEP1RCR.EXE' for verification!", "File open fail", MB_ICONERROR | MB_OK);
                return true;
            }

            MD5::md5File(hEXE, aMd5);
            fclose(hEXE);

            uint8_t GOG_MD5[16] = { 0xE1, 0xFC, 0xF5, 0x0C, 0x8D, 0xE2, 0xDB, 0xEF, 0x70, 0xE6, 0xAD, 0x8E, 0x09, 0x37, 0x13, 0x22 };
            if (memcmp(aMd5, GOG_MD5, 16) != 0)
            {
                MessageBoxA(nullptr, "This Mod is only compatible with the GOG version of the game!", "Wrong Version", MB_ICONERROR | MB_OK);
                return true;
            }

#if DYN_LOAD
            MessageBoxA(nullptr, "dinput.dll loaded!", "DLL loaded", MB_ICONINFORMATION | MB_OK);
            DynamicLoading::Init();
#else
            Tracks::Init();
            Patching::PatchAll();
#endif
            break;
        }

        case DLL_THREAD_ATTACH:
        {
            break;
        }

        case DLL_THREAD_DETACH:
        {
            break;
        }

        case DLL_PROCESS_DETACH:
        {
            break;
        }
    }

    return true;
}