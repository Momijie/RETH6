#include "DLL-Helper.hpp"
void WriteBytesToFile(std::string name,
                      bool append,
                      std::string description,
                      SIZE_T size,
                      char* buffer) {
    std::ofstream file;

    if (append)
        file.open(name, std::ios_base::app);
    else
        file.open(name);

    file << description << ": ";
    for (int i = 0; i < size; i++) {
        file << "" << std::setw(2) << std::setfill('0') << std::hex
             << (buffer[i] & 0xff) << ' ';
    }
    file << std::endl;

    file.close();
}
void WriteBytesToFile(std::string name,
                      bool append,
                      std::string description,
                      SIZE_T size,
                      UCHAR* buffer) {
    std::ofstream file;

    if (append)
        file.open(name, std::ios_base::app);
    else
        file.open(name);

    file << description << ": ";
    for (int i = 0; i < size; i++) {
        file << "" << std::setw(2) << std::setfill('0') << std::hex
             << (buffer[i] & 0xff) << ' ';
    }
    file << std::endl;

    file.close();
}

void WriteBytesToFile(std::string name,
                      bool append,
                      std::string description,
                      SIZE_T size,
                      char* buffer,
                      UINT_PTR address) {
    std::ofstream file;

    if (append)
        file.open(name, std::ios_base::app);
    else
        file.open(name);

    file << description << " AT ADDRESS " << std::hex << address << ": ";
    for (int i = 0; i < size; i++) {
        file << "" << std::setw(2) << std::setfill('0') << std::hex
             << (buffer[i] & 0xff) << ' ';
    }
    file << std::endl;

    file.close();
}

template <typename T>
void WriteToFile(std::string name,
                 bool append,
                 std::string description,
                 T contents) {
    std::ofstream file;

    if (append)
        file.open(name, std::ios_base::app);
    else
        file.open(name);

    file << description << ": ";
    file << std::hex << contents << std::endl;
    file.close();
}

UINT_PTR representBuffer(byte buffer[], bool flip) {
    const byte PTR_SIZE = sizeof(UINT_PTR);

    UINT_PTR rtrn = buffer[flip ? PTR_SIZE - 1 : 0];

    for (int i = 0; i < PTR_SIZE; i++) {
        rtrn = (rtrn ^ (rtrn & 0xff) | buffer[flip ? (PTR_SIZE - 1) - i : i]);
        if (i >= PTR_SIZE - 1) break;
        rtrn <<= PTR_SIZE;
    }
    return rtrn;
}

void ReadGameMemory(HANDLE handle, HMODULE base, SIZE_T size, char* buffer) {
    ReadProcessMemory(handle, base, (LPVOID)buffer, size, NULL);
    WriteBytesToFile(
        "log.txt", true, "READING GAME MEMORY", size, buffer, (UINT_PTR)base);
}

void ReadGameMemory(std::string description,
                    HANDLE handle,
                    HMODULE base,
                    SIZE_T size,
                    char* buffer) {
    ReadProcessMemory(handle, base, (LPVOID)buffer, size, NULL);
    WriteBytesToFile(
        "log.txt", true, description, size, buffer, (UINT_PTR)base);
}

void WriteGameMemory(HANDLE handle, HMODULE base, SIZE_T size, char* buffer) {
    DWORD oldProtect = 0;

    // Change page protection
    VirtualProtectEx(handle, base, size, PAGE_EXECUTE_READWRITE, &oldProtect);

    WriteProcessMemory(handle, base, (LPVOID)buffer, size, NULL);

    // Restore page protection
    VirtualProtectEx(handle, base, size, oldProtect, &oldProtect);
}

void WriteGameMemory(HANDLE handle, HMODULE base, SIZE_T size, UCHAR* buffer) {
    DWORD oldProtect = 0;

    // Change page protection
    VirtualProtectEx(handle, base, size, PAGE_EXECUTE_READWRITE, &oldProtect);

    WriteProcessMemory(handle, base, (LPVOID)buffer, size, NULL);

    // Restore page protection
    VirtualProtectEx(handle, base, size, oldProtect, &oldProtect);
}