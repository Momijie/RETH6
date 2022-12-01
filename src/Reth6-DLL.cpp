#include <Windows.h>

#include "DLL-Helper.hpp"

#define dllexport __declspec(dllexport)
#define dllimport __declspec(dllimport)

HINSTANCE hModule;
FILE* freopen_file;

void CloseDll() { FreeLibraryAndExitThread(hModule, 0); }

// Attaches a console to the executable, very useful.
void CreateConsole(FILE* file, bool dev) {
    if (!dev) return;
    if (!AllocConsole()) return;
    freopen_s(&file, "CONOUT$", "w", stdout);
}

// Closes the console to the attached executable.
void ClearConsole(FILE* file) {
    if (!FreeConsole()) return;
    if (file) fclose(file);
}

DWORD WINAPI Main_Thread(LPVOID lpParam) {
    CreateConsole(freopen_file, true);
    HMODULE base = GetModuleHandle(0);
    HANDLE game_handle = GetCurrentProcess();
    std::cout << "EXE STARTS AT: 0x" << std::setw(2) << std::setfill('0')
              << std::hex << base << std::endl;
    std::cout << "EXE ENDS AT: 0x" << std::setw(2) << std::setfill('0')
              << std::hex << game_handle << std::endl;
    std::cout << "DLL INJECTED AT ADDRESS: 0x" << std::setw(2)
              << std::setfill('0') << std::hex << hModule << std::endl;

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
