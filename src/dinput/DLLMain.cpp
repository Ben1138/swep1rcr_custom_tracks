#include <windows.h>
#include "DynamicLoading.h"

#if !DYN_LOAD
#include "DBTracks.h"
#include "Patching.h"
#endif


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
        {
            // TODO: Check hash of EXE
#if DYN_LOAD
            MessageBoxA(nullptr, "dinput.dll loaded!", "DLL loaded", MB_ICONINFORMATION | MB_OK);
            DynamicLoading::Init();
#else
            DBTracks::Init();
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