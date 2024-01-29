#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
    switch(fdwReason) 
    { 
        case DLL_PROCESS_ATTACH:
        {
#if _DEBUG
            MessageBoxA(nullptr, "DLL loaded!", "DLL loaded", MB_ICONINFORMATION | MB_OK);
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