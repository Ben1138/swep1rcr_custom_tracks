# Star Wars Episode I Racer - Advanced

This project patches hand picked functions at runtime to increase functionality.  
This is currently **only** compatible with the [GOG version](https://www.gog.com/de/game/star_wars_episode_i_racer) of the game!

## Enhancements
- Support for custom Tracks in **Free Play** Mode

## Installation
Just download and put [dinput.dll](TODO) into your **Star Wars Episode I Racer** installation directory, or build it from source (see instructions below). The mod should take effect immediately.

## Building from source
Execute all `cmake` commands within the root directory of this repository.  
The output will be a 32-Bit Windows DLL: `./bin/<BUILD-TYPE>/dinput.dll`.

### Compile on Windows using MSVC (Visual Studio)
- Install [Visual Studio 2022](https://visualstudio.microsoft.com/vs/community/)
- Install [CMake](https://cmake.org/download/)
- `cmake -S . -B .\build -G "Visual Studio 17 2022" -A Win32`
- `cmake --build .\build --config Release`

### Compile on Fedora using MinGW
- Install MinGW32 `sudo dnf install mingw32-gcc-c++`
- Install CMake `sudo dnf install cmake`
- `cmake -DCMAKE_CXX_COMPILER=i686-w64-mingw32-g++ -DCMAKE_BUILD_TYPE=Release -S . -B ./build`
- `cmake --build ./build`
