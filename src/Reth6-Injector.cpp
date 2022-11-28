#include "Config.hpp"
#include "Reth6-Injetor.hpp"
using namespace std;

DWORD GetProccessId(const char* procName) {
    PROCESSENTRY32 procEntry;
    procEntry.dwSize = sizeof(procEntry);

    HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
    if (hSnap == INVALID_HANDLE_VALUE) return 0;
    Process32First(hSnap, &procEntry);
    if (!strcmp(procEntry.szExeFile, procName)) {
        CloseHandle(hSnap);
        return procEntry.th32ProcessID;
    }
    while (Process32Next(hSnap, &procEntry)) {
        if (!strcmp(procEntry.szExeFile, procName)) {
            CloseHandle(hSnap);
            return procEntry.th32ProcessID;
        }
    }
    CloseHandle(hSnap);
    return 0;
}

void OpenProcess(const char* exe_path, const char* exe_wd) {
    int size = strlen(exe_path) + strlen(exe_wd) + 1;
    char* file = new char[size];
    strcpy_s(file, size, exe_path);
    strcat_s(file, size, exe_wd);
    ShellExecute(NULL, "open", file, NULL, exe_path, SW_SHOW);
    free(file);
}

bool InjectDll(DWORD processID, LPCSTR dllPath) {
    // injects the dll into the desired process.

    std::cout << "Attempting to inject dll..." << endl;
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processID);
    LPVOID pDllPath = VirtualAllocEx(
        hProcess, 0, strlen(dllPath) + 1, MEM_COMMIT, PAGE_READWRITE);
    bool wpm = WriteProcessMemory(
        hProcess, pDllPath, (LPVOID)dllPath, strlen(dllPath) + 1, 0);
    HANDLE hLoadThread = CreateRemoteThread(
        hProcess,
        0,
        0,
        (LPTHREAD_START_ROUTINE)GetProcAddress(GetModuleHandleA("Kernel32.dll"),
                                               "LoadLibraryA"),
        pDllPath,
        0,
        0);
    WaitForSingleObject(hLoadThread, INFINITE);
    if (wpm) {
        std::cout << "Dll path allocated at: " << std::hex << "0x" << pDllPath
                  << std::endl;
    }
    VirtualFreeEx(hProcess, pDllPath, strlen(dllPath) + 1, MEM_RELEASE);

    return wpm;
}

int main() {
    Config config("config.toml");

    std::cout << "Please make sure Touhou6 is open." << endl << endl;
    std::cout << "Searching for " << config.ExeName() << "..." << endl;

    OpenProcess(config.ExePath(), config.ExeName());

    DWORD processID = 0;
    while (processID == 0) {
        processID = GetProccessId(config.ExeName());
        Sleep(1000);
    }
    InjectDll(processID, config.DllPath());
    system("pause");
}