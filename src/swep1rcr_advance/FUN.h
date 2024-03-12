#pragma once
#include "Globals.h"

namespace FUN
{
    FILE** FileGet(int32_t FileID);                                                         // FUN_0042d600
    void FileOpen(int32_t FileID);                                                          // FUN_0042d680
    void FileRead(int32_t FileID, int32_t OffsetAddr, char* pDstBuffer, int32_t NumRead);   // FUN_0042d640
    void FileClose(int32_t FileID);                                                         // FUN_0042d6f0

    void __cdecl HandleCircuit(MenuState* pStruct);                                         // FUN_0043b0b0
    void MenuTrackSelection();                                                              // FUN_0043b240
    void MenuTrackInfo(MenuState* pState);                                                  // FUN_0043b880
    bool IsFreePlay();                                                                      // FUN_0041d6b0
    const char* GetTrackName(int32_t TrackID);                                              // FUN_00440620
    bool IsTrackPlayable(MenuState* pStruct, uint8_t CircuitIdx, uint8_t TrackIdx);         // FUN_00440aa0
    void __cdecl InitTracks(MenuState* pStruct, bool bDrawTracks);                          // FUN_004584a0
    void DrawTracks(MenuState* param_1, char param_2);                                      // FUN_004360e0
    int32_t VerifySelectedTrack(MenuState* pStruct, int32_t SelectedTrackIdx);              // FUN_00440af0
    uint8_t GetRequiredPlaceToProceed(uint8_t CircuitIdx, uint8_t TrackIdx);                // FUN_00440a00
    int32_t CheckCD();                                                                      // FUN_00425500

    void ImgReset(uint16_t ImgIdx, ImgDat* pImgDat);                                        // FUN_004282f0
    void ImgResetAll();                                                                     // FUN_00428370

    bool FUN_00440a20(int32_t CircuitIdx, int32_t TrackIdx);
    int32_t FUN_0041d6c0();


    typedef void(FUN_00456800_t)(MenuState* pState, int PlanetIdx, float Scale);
    static  FUN_00456800_t* DrawHoloPlanet = (FUN_00456800_t*)0x00456800;

    typedef void(FUN_00456c70_t)(MenuState *pState, int TrackID, float param_3);
    static  FUN_00456c70_t* DrawTrackPreview = (FUN_00456c70_t*)0x00456c70;

    typedef void(FUN_00440150_t)(void* pUnused, int PosY);
    static  FUN_00440150_t* MenuAxisHorizontal = (FUN_00440150_t*)0x00440150;

    typedef void(__cdecl FUN_0043b0b0_t)(MenuState* pState);
    static  FUN_0043b0b0_t* HandleCircuits = (FUN_0043b0b0_t*)0x0043b0b0;

    typedef bool(__cdecl FUN_00440bc0_t)(MenuState* pState);
    static  FUN_00440bc0_t* BeatEverything1stPlace = (FUN_00440bc0_t*)0x00440bc0;

    // "/SCREENTEXT_508/~~Abyss" -> "Abyss"
    typedef const char* (FUN_00421360_t)(const char* param_1);
    static  FUN_00421360_t* StrSanitise = (FUN_00421360_t*)0x00421360;

    // sprintf, but idk yet whether it's custom or the LibC variant
    typedef int32_t(FUN_0049eb80_t)(char* pDst, const char* pFormat, ...);
    static  FUN_0049eb80_t* rcr_sprintf = (FUN_0049eb80_t*)0x0049eb80;

    // Position in pixels from
    //   X:  0 - 320
    //   Y:  0 - 240
    // Text formatters:
    //  ~f0  Large (default)
    //  ~f4  Small
    //  ~c   Centered
    //  ~s   Shadow
    typedef void(FUN_00450530_t)(int16_t PosX, int16_t PosY, uint8_t R, uint8_t G, uint8_t B, uint8_t A, const char* pText);
    static  FUN_00450530_t* UIText = (FUN_00450530_t*)0x00450530;

    typedef void(FUN_0043fce0_t)(MenuState* pState, uint16_t PosX, uint16_t PosY, int param_4, float param_5, float param_6, const char* pText);
    static  FUN_0043fce0_t* UITextMenu = (FUN_0043fce0_t*)0x0043fce0;

    typedef void(FUN_00454d40_t)(MenuState* pState, int param_2);
    static  FUN_00454d40_t* SetMenuIdx = (FUN_00454d40_t*)0x00454d40;

    typedef void(FUN_004286f0_t)(uint16_t ImgIdx, float ScaleX, float ScaleY);
    static  FUN_004286f0_t* ImgScale = (FUN_004286f0_t*)0x004286f0;

    typedef void(FUN_00428740_t)(uint16_t ImgIdx, uint8_t R, uint8_t G, uint8_t B, uint8_t A);
    static  FUN_00428740_t* ImgColor = (FUN_00428740_t*)0x00428740;

    typedef void(FUN_004287e0_t)(uint16_t ImgIdx, uint32_t Flag);
    static  FUN_004287e0_t* ImgSetFlag = (FUN_004287e0_t*)0x004287e0;

    typedef void(FUN_00428800_t)(uint16_t ImgIdx, uint32_t Flag);
    static  FUN_00428800_t* ImgResetFlag = (FUN_00428800_t*)0x00428800;

    typedef void(FUN_004285d0_t)(uint16_t ImgIdx, int32_t bVisible);
    static  FUN_004285d0_t* ImgVisible = (FUN_004285d0_t*)0x004285d0;

    typedef void(FUN_00428660_t)(uint16_t ImgIdx, uint16_t PosX, uint16_t PosY);
    static  FUN_00428660_t* ImgPosition = (FUN_00428660_t*)0x00428660;
}