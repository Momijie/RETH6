cmake_minimum_required(VERSION 3.25.0)

# Change this to your windows sdk version.
# https://developer.microsoft.com/en-us/windows/downloads/windows-sdk/
set(WIN_SDK_VERSION "10.0.22621.0")
#Change this to the location of your windows sdk.
set(WIN_SDK_DIRECTORY_X64 "E:/Development/Windows Kits/10/bin/${WIN_SDK_VERSION}/x64")
set(WIN_SDK_INCLUDE_DIRECTORY "E:/Development/Windows Kits/10/Include/${WIN_SDK_VERSION}")
set(WIN_SDK_LIB_DIRECTORY "E:/Development/Windows Kits/10/Lib/${WIN_SDK_VERSION}")
# Change this to your MSVC include directory.
set(MSVC_INCLUDE_DIRECTORY "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.34.31933/include")

get_filename_component(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/.. ABSOLUTE)

set (DLL_PATH "${CMAKE_BINARY_DIR}/bin/RETH6.dll")

# Copy game files to this directory.
set (EXE_NAME "th06e.exe")
set (EXE_PATH "${PROJECT_ROOT}/game/")

# Change this to your debugger.
set (DEBUG_NAME "x32dbg.exe")
set (DEBUG_PATH "E:/Development/debug/release/x32")

set(CMAKE_MT "${WIN_SDK_DIRECTORY_X64}/mt.exe")
set(CMAKE_RC_COMPILER_INIT "${WIN_SDK_DIRECTORY_X64}/rc.exe")
set(MIDL_COMPILER "${WIN_SDK_DIRECTORY_X64}/midl.exe")
set(MDMERGE_TOOL "${WIN_SDK_DIRECTORY_X64}/mdmerge.exe")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++20")

FILE(WRITE ${CMAKE_BINARY_DIR}/bin/config.toml 
    "dll_path = \"" ${DLL_PATH} "\"\n"
    "exe_name = \"" ${EXE_NAME} "\"\n"
    "exe_path = \"" ${EXE_PATH} "\"\n"
    "debug_path = \"" ${DEBUG_PATH} "\"\n"
)

include_directories(SYSTEM "${WIN_SDK_INCLUDE_DIRECTORY}/ucrt")
include_directories(SYSTEM "${WIN_SDK_INCLUDE_DIRECTORY}/shared")
include_directories(SYSTEM "${WIN_SDK_INCLUDE_DIRECTORY}/um")
include_directories(SYSTEM "${WIN_SDK_INCLUDE_DIRECTORY}/winrt")
include_directories(SYSTEM "${WIN_SDK_INCLUDE_DIRECTORY}/cppwinrt")

link_directories("${WIN_SDK_LIB_DIRECTORY}/ucrt/x64")
link_directories("${WIN_SDK_LIB_DIRECTORY}/um/x64")

get_filename_component(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/.. ABSOLUTE)
file(GLOB RETH6-Injector_SRC
    "Config.cpp"
    "Reth6-Injector.cpp"
)

file(GLOB RETH6-DLL_SRC
    "Config.cpp"
    "DLL-Helper.cpp"
    "Reth6-DLL.cpp"
)
# Build the Dll.
project(RETH6-DLL VERSION 0.1.0)
add_library(RETH6-DLL SHARED ${RETH6-DLL_SRC})
target_include_directories(RETH6-DLL PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
set_target_properties(RETH6-DLL PROPERTIES OUTPUT_NAME "RETH6")
set_target_properties(RETH6-DLL PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

# Build the Injector.
project(RETH6-Injector VERSION 0.1.0)
add_executable(RETH6-Injector ${RETH6-Injector_SRC})
target_include_directories(RETH6-Injector PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
set_target_properties(RETH6-Injector PROPERTIES OUTPUT_NAME "RETH6")
set_target_properties(RETH6-Injector PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")
