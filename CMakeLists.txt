cmake_minimum_required(VERSION 3.6)
project(swep1rcr_advance_project CXX)

set(CMAKE_CXX_STANDARD           17)
set(CMAKE_CXX_STANDARD_REQUIRED  ON)
set(CMAKE_CXX_EXTENSIONS         OFF)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /GR-")
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-exceptions -fno-rtti -m32 -static-libgcc -static-libstdc++ -Wl,--kill-at")
endif()

add_compile_definitions(WIN32_LEAN_AND_MEAN)                # Lightweight windows.h include
add_compile_definitions(_HAS_EXCEPTIONS=0)                  # STL without Exceptions
add_compile_definitions(NOMINMAX)                           # No std::min() and std::max()


set(DIR_PRJ ${PROJECT_SOURCE_DIR})
set(DIR_SRC "${DIR_PRJ}/src")

add_library(dinput SHARED)
target_include_directories(dinput PRIVATE "${DIR_SRC}/dinput")
target_compile_definitions(dinput PUBLIC "$<$<CONFIG:DEBUG>:DEBUG>")

# Binary output
set_target_properties(dinput
    PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
    RUNTIME_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
    PREFIX ""
    SUFFIX ".dll"
)

if(DYN_LOAD)
    target_compile_definitions(dinput PUBLIC "DYN_LOAD")

    target_sources(dinput PRIVATE 
        "${DIR_SRC}/dinput/exports.def"                                     # Exports DirectInputCreateA
        "${DIR_SRC}/dinput/DLLMain.cpp"
        "${DIR_SRC}/dinput/DLLWrap.cpp"                                     # Wrapping of DirectInputCreateA
        "${DIR_SRC}/dinput/DynamicLoading.cpp"
        "${DIR_SRC}/dinput/md5.cpp"
    )

    add_library(custom_tracks SHARED)
    target_include_directories(custom_tracks PRIVATE "${DIR_SRC}/custom_tracks")
    target_compile_definitions(custom_tracks PUBLIC "$<$<CONFIG:DEBUG>:DEBUG>")
    target_compile_definitions(custom_tracks PUBLIC "DYN_LOAD")

    # Binary output
    set_target_properties(custom_tracks
        PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
        RUNTIME_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
        PREFIX ""
        SUFFIX ".dll"
    )

    # Input source files
    target_sources(custom_tracks PRIVATE 
        "${DIR_SRC}/custom_tracks/DLLMain.cpp"
        "${DIR_SRC}/custom_tracks/Patching.cpp"
        "${DIR_SRC}/custom_tracks/FUN.cpp"
        "${DIR_SRC}/custom_tracks/Tracks.cpp"
        "${DIR_SRC}/custom_tracks/EXT.cpp"
        "${DIR_SRC}/custom_tracks/Version.cpp"
    )
else()
    target_include_directories(dinput PRIVATE "${DIR_SRC}/custom_tracks")

    # Input source files
    target_sources(dinput PRIVATE 
        "${DIR_SRC}/dinput/exports.def"                                     # Exports DirectInputCreateA
        "${DIR_SRC}/dinput/DLLMain.cpp"
        "${DIR_SRC}/dinput/DLLWrap.cpp"                                     # Wrapping of DirectInputCreateA
        "${DIR_SRC}/dinput/md5.cpp"

        "${DIR_SRC}/custom_tracks/Patching.cpp"
        "${DIR_SRC}/custom_tracks/FUN.cpp"
        "${DIR_SRC}/custom_tracks/Tracks.cpp"
        "${DIR_SRC}/custom_tracks/EXT.cpp"
        "${DIR_SRC}/custom_tracks/Version.cpp"
    )
endif()
