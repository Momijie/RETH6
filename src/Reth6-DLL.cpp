#include <Windows.h>
#include <inttypes.h>

#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <sstream>
#include <vector>

#define dllexport __declspec(dllexport)
#define dllimport __declspec(dllimport)

HINSTANCE hModule;

DWORD WINAPI Main_Thread(LPVOID lpParam) {

    Beep(100, 100);
    return S_OK;
}

BOOL WINAPI DllMain(HINSTANCE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH) {
        ::hModule = hModule;
        CreateThread(0, 0, Main_Thread, hModule, 0, 0);
    }
    return true;
}
