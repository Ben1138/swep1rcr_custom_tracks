#include <windows.h>
#include "ReverseEngineering/Patching.h"
#include "DBTracks.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
        {
            // TODO: Check hash of EXE

            DBTracks::Init();
            Patching::PatchAllFunctions();
#if DEBUG
            MessageBoxA(nullptr, "DLL loaded, all patched!", "DLL loaded", MB_ICONINFORMATION | MB_OK);
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