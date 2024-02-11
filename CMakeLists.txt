cmake_minimum_required(VERSION 3.6)
project(SWEP1RCR_ADVANCE CXX)

set(CMAKE_CXX_STANDARD           17)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)
set(CMAKE_CXX_EXTENSIONS         OFF)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GR-")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions -fno-rtti -m32 -static-libgcc -static-libstdc++ -Wl,--kill-at")
endif()

add_compile_definitions(WIN32_LEAN_AND_MEAN)                # Lightweight windows.h include
add_compile_definitions(_HAS_EXCEPTIONS=0)                  # STL without Exceptions
add_compile_definitions(NOMINMAX)                           # No std::min() and std::max()

set(DIR_PRJ ${PROJECT_SOURCE_DIR})
set(DIR_SRC "${DIR_PRJ}/src")

add_library(dinput SHARED)
target_include_directories(dinput PRIVATE ${DIR_SRC})

# Binary output
set_target_properties(dinput
    PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
    RUNTIME_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
    PREFIX ""
    SUFFIX ".dll"
)


# Input source files
target_sources(dinput PRIVATE 
    "${DIR_PRJ}/dinput.def"                             # Exports DirectInputCreateA

    "${DIR_SRC}/DLL/DLLMain.cpp"
    "${DIR_SRC}/DLL/DLLWrap.cpp"                        # Wrapping of DirectInputCreateA
    "${DIR_SRC}/ReverseEngineering/FUN.cpp"
    "${DIR_SRC}/ReverseEngineering/Patching.cpp"
    "${DIR_SRC}/DBTracks.cpp"
    "${DIR_SRC}/EXT.cpp"
)