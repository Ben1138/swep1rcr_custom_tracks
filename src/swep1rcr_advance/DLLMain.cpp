#include <windows.h>
#include "DBTracks.h"
#include "Patching.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
        {
            // TODO: Check hash of EXE
// #if DEBUG
//             MessageBoxA(nullptr, "swep1rcr_advance.dll loaded!", "DLL loaded", MB_ICONINFORMATION | MB_OK);
// #endif
            DBTracks::Init();
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