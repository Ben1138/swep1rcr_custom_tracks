#include <windows.h>
#include "Tracks.h"
#include "Patching.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
        {
            // TODO: Check hash of EXE
// #if DEBUG
//             MessageBoxA(nullptr, "custom_tracks.dll loaded!", "DLL loaded", MB_ICONINFORMATION | MB_OK);
// #endif
            Tracks::Init();
            Patching::PatchAll();
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
            Patching::UnPatchAll();
            break;
        }
    }

    return true;
}