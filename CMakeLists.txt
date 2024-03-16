cmake_minimum_required(VERSION 3.6)
project(swep1rcr_advance_project CXX)

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
    )

    add_library(swep1rcr_advance SHARED)
    target_include_directories(swep1rcr_advance PRIVATE "${DIR_SRC}/swep1rcr_advance")
    target_compile_definitions(swep1rcr_advance PUBLIC "$<$<CONFIG:DEBUG>:DEBUG>")
    target_compile_definitions(swep1rcr_advance PUBLIC "DYN_LOAD")

    # Binary output
    set_target_properties(swep1rcr_advance
        PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
        RUNTIME_OUTPUT_DIRECTORY "${DIR_PRJ}/bin/${CMAKE_BUILD_TYPE}"
        PREFIX ""
        SUFFIX ".dll"
    )

    # Input source files
    target_sources(swep1rcr_advance PRIVATE 
        "${DIR_SRC}/swep1rcr_advance/DLLMain.cpp"
        "${DIR_SRC}/swep1rcr_advance/Patching.cpp"
        "${DIR_SRC}/swep1rcr_advance/FUN.cpp"
        "${DIR_SRC}/swep1rcr_advance/Tracks.cpp"
        "${DIR_SRC}/swep1rcr_advance/EXT.cpp"
        "${DIR_SRC}/swep1rcr_advance/Version.cpp"
    )
else()
    target_include_directories(dinput PRIVATE "${DIR_SRC}/swep1rcr_advance")

    # Input source files
    target_sources(dinput PRIVATE 
        "${DIR_SRC}/dinput/exports.def"                                     # Exports DirectInputCreateA
        "${DIR_SRC}/dinput/DLLMain.cpp"
        "${DIR_SRC}/dinput/DLLWrap.cpp"                                     # Wrapping of DirectInputCreateA

        "${DIR_SRC}/swep1rcr_advance/Patching.cpp"
        "${DIR_SRC}/swep1rcr_advance/FUN.cpp"
        "${DIR_SRC}/swep1rcr_advance/Tracks.cpp"
        "${DIR_SRC}/swep1rcr_advance/EXT.cpp"
        "${DIR_SRC}/swep1rcr_advance/Version.cpp"
    )
endif()
