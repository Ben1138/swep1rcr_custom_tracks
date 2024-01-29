#include <windows.h>
#include <stdio.h>
#include "ReverseEngineering/Patching.h"
#include "CustomTracks.h"

typedef void* LPDIRECTINPUT; // I don't want to include old DirectInput headers.
typedef HRESULT(WINAPI DirectInputCreateA_t)(HINSTANCE, DWORD, LPDIRECTINPUT*, LPUNKNOWN);

extern "C"
{
    HRESULT WINAPI DirectInputCreateA(HINSTANCE hinst, DWORD dwVersion, LPDIRECTINPUT* lplpDirectInput, LPUNKNOWN punkOuter)
    {
        static HRESULT(WINAPI *s_pDirectInputCreateA)(HINSTANCE, DWORD, LPDIRECTINPUT*, LPUNKNOWN) = nullptr;
        if (s_pDirectInputCreateA == nullptr)
        {
            const HMODULE hDLL = LoadLibrary("C:/Windows/System32/dinput.dll");
            if (!hDLL)
            {
                MessageBoxA(nullptr, "Failed to load 'C:/Windows/System32/dinput.dll'! Remove dinput.dll.", "Hook failed", MB_ICONERROR | MB_OK);
                return E_POINTER;
            }

            s_pDirectInputCreateA = (DirectInputCreateA_t*)GetProcAddress(hDLL, "DirectInputCreateA");
            if (!s_pDirectInputCreateA)
            {
                MessageBoxA(nullptr, "Failed to hook 'DirectInputCreateA'! Remove dinput.dll.", "Hook failed", MB_ICONERROR | MB_OK);
                return E_POINTER;
            }

            // TODO: Check MD5 of EXE

            CustomTracks::ScanFolder();
            Patching::PatchAllFunctions();
        }

        return s_pDirectInputCreateA(hinst, dwVersion, lplpDirectInput, punkOuter);
    }
}