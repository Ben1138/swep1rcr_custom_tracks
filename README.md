# Star Wars Episode I Racer - Custom Tracks Support

This project adds support for custom tracks to the game.   
This mod is currently **only** compatible with the [GOG version](https://www.gog.com/de/game/star_wars_episode_i_racer) of the game!  
  
**This is still a work in progress!**

## Installation
Just put `dinput.dll` into your **Star Wars Episode I Racer** installation directory, after building it from source (see instructions below). No binaries are available yet. The mod should take effect immediately.

## Build from source
Execute all `cmake` commands within the root directory of this repository.  
The output will be a 32-Bit Windows DLL: `./bin/Release/dinput.dll`.  
When compiling with MinGW for i686, the resulting DLL will be compatible down to Windows 95, with MSVC down to Windows Vista.

### Compile on Windows using MSVC (Visual Studio)
- Install [Visual Studio 2022](https://visualstudio.microsoft.com/vs/community/)
- Install [CMake](https://cmake.org/download/)
- `cmake -S . -B .\build -G "Visual Studio 17 2022" -A Win32`
- `cmake --build .\build --config Release`

### Compile on Windows using MinGW
- [Download and extract MinGW i686 for Windows MSVCRT](https://www.mingw-w64.org/downloads/#mingw-builds)
- Add the contained `bin\` directory to your PATH
- Install [CMake](https://cmake.org/download/)
- `cmake -S . -B .\build -DCMAKE_BUILD_TYPE=Release -G "MinGW Makefiles"`
- `cmake --build .\build`

### Compile on Debian using MinGW
- Install MinGW for i686 `sudo apt install g++-mingw-w64-i686`
- Install CMake `sudo apt install cmake`
- `cmake -DCMAKE_CXX_COMPILER=i686-w64-mingw32-g++ -DCMAKE_BUILD_TYPE=Release -S . -B ./build`
- `cmake --build ./build`

### Compile on Fedora using MinGW
- Install MinGW for i686 `sudo dnf install mingw32-gcc-c++`
- Install CMake `sudo dnf install cmake`
- `cmake -DCMAKE_CXX_COMPILER=i686-w64-mingw32-g++ -DCMAKE_BUILD_TYPE=Release -S . -B ./build`
- `cmake --build ./build`

## Development
### Hot Loading
When generating with cmake, use the `-DDYN_LOAD=1` flag to enable hot loading of changed code.