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
void WriteBytesToFile(std::string name,
                      bool append,
                      std::string description,
                      SIZE_T size,
                      char* buffer);

void WriteBytesToFile(std::string name,
                      bool append,
                      std::string description,
                      SIZE_T size,
                      UCHAR* buffer);

void WriteBytesToFile(std::string name,
                      bool append,
                      std::string description,
                      SIZE_T size,
                      char* buffer,
                      UINT_PTR address);

template <typename T>
void WriteToFile(std::string name,
                 bool append,
                 std::string description,
                 T contents);

UINT_PTR representBuffer(byte buffer[], bool flip);
void ReadGameMemory(HANDLE handle, HMODULE base, SIZE_T size, char* buffer);
void ReadGameMemory(std::string description,
                    HANDLE handle,
                    HMODULE base,
                    SIZE_T size,
                    char* buffer);
void WriteGameMemory(HANDLE handle, HMODULE base, SIZE_T size, char* buffer);
void WriteGameMemory(HANDLE handle, HMODULE base, SIZE_T size, UCHAR* buffer);