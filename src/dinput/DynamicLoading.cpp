#include <windows.h>
#include <tlhelp32.h>
#include <stdint.h>
#include <stdio.h>
#include <assert.h>
#include "DynamicLoading.h"

namespace DynamicLoading
{
#if DEBUG
    static HINSTANCE g_hDllCurrent = nullptr;
    static FILETIME g_LastModifiedTime{};
    static uint32_t g_uDllCounter = 0;

    HANDLE GetMainThreadHandle()
    {
        HANDLE hThreadSnap = INVALID_HANDLE_VALUE; 
        THREADENTRY32 te32; 
        
        // Take a snapshot of all running threads  
        hThreadSnap = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0); 
        if(hThreadSnap == INVALID_HANDLE_VALUE) 
        {
            return INVALID_HANDLE_VALUE; 
        }
        
        // Fill in the size of the structure before using it. 
        te32.dwSize = sizeof(THREADENTRY32); 
        
        // Retrieve information about the first thread,
        // and exit if unsuccessful
        if(!Thread32First(hThreadSnap, &te32)) 
        {
            MessageBoxA(nullptr, "'Thread32First()' failed!", "Error", MB_ICONERROR | MB_OK);
            CloseHandle(hThreadSnap);     // Must clean up the snapshot object!
            return INVALID_HANDLE_VALUE;
        }

        HANDLE hMainThread = OpenThread(READ_CONTROL | SYNCHRONIZE | WRITE_DAC | WRITE_OWNER, false, te32.th32ThreadID);
        if (!hMainThread)
        {
            MessageBoxA(nullptr, "'Failed to open main thread!", "Error", MB_ICONERROR | MB_OK);
            CloseHandle(hThreadSnap);
            return INVALID_HANDLE_VALUE;
        }

        //  Don't forget to clean up the snapshot object.
        CloseHandle(hThreadSnap);
        return hMainThread;
    }

    DWORD WINAPI LoadThread(LPVOID lpParam)
    {
        while (true)
        {
            const HANDLE hDllFile = CreateFileA(
                "swep1rcr_advance.dll",
                GENERIC_READ,
                FILE_SHARE_READ,
                nullptr,
                OPEN_EXISTING,
                FILE_ATTRIBUTE_READONLY,
                NULL
            );

            if (!hDllFile)
            {
                MessageBoxA(nullptr, "Cannot find 'swep1rcr_advance.dll'!", "DLL fail", MB_ICONERROR | MB_OK);
                return 1;
            }

            FILETIME ModTime{};
            const BOOL bGotTime = GetFileTime(
                hDllFile,
                nullptr, //[out, optional] LPFILETIME lpCreationTime,
                nullptr, //[out, optional] LPFILETIME lpLastAccessTime,
                &ModTime
            );

            if (!bGotTime)
            {
                MessageBoxA(nullptr, "Failed to get file time for 'swep1rcr_advance.dll'!", "File fail", MB_ICONERROR | MB_OK);
                return 1;
            }

            // Always sleep to avoid trying to load DLL, while it is written
            Sleep(100); // ms
            if (CompareFileTime(&ModTime, &g_LastModifiedTime) <= 0)
            {
                continue;
            }

            // Doesn't work...
            // const HANDLE hMainThread = GetMainThreadHandle();
            // if (!hMainThread)
            // {
            //     return 1;
            // }
            
            // if (SuspendThread(hMainThread) == -1)
            // {
            //     MessageBoxA(nullptr, "Failed to suspend main thread!", "Suspend failed", MB_ICONERROR | MB_OK);
            //     return 1;
            // }

            g_LastModifiedTime = ModTime;

            char cMsg[256];
            char cCurrName[128];
            char cNextName[128];
            snprintf(cCurrName, sizeof(cCurrName), "swep1rcr_advance_%d.dll", g_uDllCounter);
            snprintf(cNextName, sizeof(cNextName), "swep1rcr_advance_%d.dll", g_uDllCounter + 1);

            if (!CopyFile("swep1rcr_advance.dll", cNextName, false))
            {
                snprintf(cMsg, sizeof(cMsg), "Failed to copy 'swep1rcr_advance.dll' to '%s'!", cNextName);
                MessageBoxA(nullptr, cMsg, "Copy failed", MB_ICONERROR | MB_OK);
                return 1;
            }

            if (g_hDllCurrent)
            {
                if (!FreeLibrary(g_hDllCurrent))
                {
                    snprintf(cMsg, sizeof(cMsg), "Failed to free '%s'!", cCurrName);
                    MessageBoxA(nullptr, cMsg, "DLL fail", MB_ICONERROR | MB_OK);
                    return 1;
                }
                if (!DeleteFile(cCurrName))
                {
                    snprintf(cMsg, sizeof(cMsg), "Failed to delete '%s'!", cCurrName);
                    MessageBoxA(nullptr, cMsg, "Delete failed", MB_ICONERROR | MB_OK);
                    return 1;
                }
            }

            HINSTANCE hDllNext = LoadLibrary(cNextName);
            if (!hDllNext)
            {
                snprintf(cMsg, sizeof(cMsg), "Failed to load '%s'!", cNextName);
                MessageBoxA(nullptr, cMsg, "DLL fail", MB_ICONERROR | MB_OK);
                return 1;
            }

            g_hDllCurrent = hDllNext;
            g_uDllCounter++;

            // if (ResumeThread(hMainThread) == -1)
            // {
            //     MessageBoxA(nullptr, "Failed to resume main thread!", "Resume failed", MB_ICONERROR | MB_OK);
            //     return 1;
            // }
        }

        return 0;
    }
#endif   

    void Init()
    {
#if DEBUG
        DWORD dwThreadID = 0;

        HANDLE hThread = CreateThread( 
            nullptr,                // default security attributes
            0,                      // use default stack size  
            LoadThread,             // thread function name
            nullptr,                // argument to thread function 
            0,                      // use default creation flags 
            &dwThreadID);           // returns the thread identifier 

        if (!hThread)
        {
            MessageBoxA(nullptr, "Failed to create new thread!", "Thread fail", MB_ICONERROR | MB_OK);
            return;
        }
#else
        HINSTANCE hDll = LoadLibrary("swep1rcr_advance.dll");
        if (!hDll)
        {
            MessageBoxA(nullptr, "Failed to load 'swep1rcr_advance.dll'!", "DLL fail", MB_ICONERROR | MB_OK);
            return;
        }
#endif        
    }
}