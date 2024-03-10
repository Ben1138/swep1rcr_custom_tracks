#include <windows.h>
#include <stdio.h>

#if defined(_MSC_VER)
    #define EXPORT extern "C" __declspec(dllexport)
#else
    #define EXPORT extern "C" __attribute__((visibility("default")))
#endif

// I don't want to include old DirectInput headers.
typedef void* LPDIRECTINPUT;
typedef void* LPUNKNOWN;

typedef HRESULT(WINAPI DirectInputCreateA_t)(HINSTANCE, DWORD, LPDIRECTINPUT*, LPUNKNOWN);

EXPORT HRESULT WINAPI DirectInputCreateA(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUT* lplpDirectInput, LPUNKNOWN punkOuter)
{
    static DirectInputCreateA_t* s_pDirectInputCreateA = nullptr;
    if (s_pDirectInputCreateA == nullptr)
    {
        HMODULE hDLL = LoadLibrary("C:\\Windows\\System32\\dinput.dll");
        if (!hDLL)
        {
            // Windows 9x fallback
            hDLL = LoadLibrary("C:\\Windows\\System\\dinput.dll");
        }

        if (!hDLL)
        {
            MessageBoxA(nullptr, "Failed to load Windows native 'dinput.dll'!", "Hook failed", MB_ICONERROR | MB_OK);
            return E_POINTER;
        }

        s_pDirectInputCreateA = (DirectInputCreateA_t*)GetProcAddress(hDLL, "DirectInputCreateA");
        if (!s_pDirectInputCreateA)
        {
            MessageBoxA(nullptr, "Failed to hook 'DirectInputCreateA'!", "Hook failed", MB_ICONERROR | MB_OK);
            return E_POINTER;
        }
    }

    return s_pDirectInputCreateA(hinst, dwVersion, lplpDirectInput, punkOuter);
}