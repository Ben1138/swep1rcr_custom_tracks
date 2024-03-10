#include <windows.h>
#include "DynamicLoading.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
        {
            // TODO: Check hash of EXE
#if DEBUG
            MessageBoxA(nullptr, "dinput.dll loaded!", "DLL loaded", MB_ICONINFORMATION | MB_OK);
#endif
            DynamicLoading::Init();
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