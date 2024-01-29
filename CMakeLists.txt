cmake_minimum_required(VERSION 3.0)
project(SWEP1RCR_ADVANCE CXX)

add_library(dinput SHARED)
set(CMAKE_CXX_STANDARD           17)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)
set(CMAKE_CXX_EXTENSIONS         OFF)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /EHsc /GR-")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions -fno-rtti")
endif()

add_compile_definitions(_HAS_EXCEPTIONS=0)                  # STL without Exceptions
add_compile_definitions(NOMINMAX)                           # No std::min() and std::max()

set(DIR_PRJ ${PROJECT_SOURCE_DIR})
set(DIR_SRC "${DIR_PRJ}/src")

target_include_directories(dinput PRIVATE ${DIR_SRC})

# Binary output
set_target_properties(dinput
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
)

# Input source files
target_sources(dinput PRIVATE 
    "${DIR_PRJ}/dinput.def"                             # Exports DirectInputCreateA

    "${DIR_SRC}/DLL/dllmain.cpp"
    "${DIR_SRC}/DLL/DLLWrap.cpp"                        # Contains DirectInputCreateA
    "${DIR_SRC}/ReverseEngineering/FUN.cpp"
    "${DIR_SRC}/ReverseEngineering/Patching.cpp"
    "${DIR_SRC}/CustomTracks.cpp"
    "${DIR_SRC}/EXT.cpp"
)