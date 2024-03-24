#pragma once
#include "Globals.h"

#define DEF_TYPE(Addr, RetType, ...) \
    typedef RetType(FUN_##Addr##_t)(__VA_ARGS__);

#define DEF_FUN(Addr, RetType, ...) \
    DEF_TYPE(Addr, RetType, __VA_ARGS__); \
    static FUN_##Addr##_t* FUN_##Addr = (FUN_##Addr##_t*)0x##Addr

#define DEF_ALIAS(Addr, Alias, RetType, ...) \
    DEF_FUN(Addr, RetType, __VA_ARGS__); \
    static FUN_##Addr##_t* Alias = (FUN_##Addr##_t*)0x##Addr

//
// Original and patched functions
//
namespace FUN
{
    // FUN_0042d600
    FILE** FileGet(int32_t FileID);

    // FUN_0042d680
    void FileOpen(int32_t FileID);

    // FUN_0042d640
    void FileRead(int32_t FileID, int32_t OffsetAddr, char* pDstBuffer, int32_t NumRead);

    // FUN_0042d6f0
    void FileClose(int32_t FileID);

    // FUN_0043b0b0
    void HandleCircuit(MenuState* pStruct);

    // FUN_0043b240
    void MenuTrackSelection();

    // FUN_0043b880
    void MenuTrackInfo(MenuState* pState);

    // FUN_004368a0
    void MenuStartRace(MenuState *pState);

    // FUN_0041d6b0
    bool IsFreePlay();

    // FUN_00440620
    const char* GetTrackName(int32_t TrackID);

    // FUN_00440aa0
    bool IsTrackPlayable(MenuState* pStruct, uint8_t CircuitIdx, uint8_t TrackIdx);

    // FUN_004584a0
    void InitTracks(MenuState* pStruct, bool bDrawTracks);

    // FUN_004360e0
    void DrawTracks(MenuState* param_1, char param_2);

    // FUN_00440af0
    int32_t VerifySelectedTrack(MenuState* pStruct, int32_t SelectedTrackIdx);

    // FUN_00440a00
    uint8_t GetRequiredPlaceToProceed(uint8_t CircuitIdx, uint8_t TrackIdx);

    // FUN_00425500
    int32_t CheckCD();

    // FUN_004282f0
    void ImgReset(uint16_t ImgIdx, ImgDat* pImgDat);

    // FUN_00428370
    void ImgResetAll();

    // FUN_00440a20
    bool FUN_00440a20(int32_t CircuitIdx, int32_t TrackIdx);

    // FUN_0041d6c0
    int32_t FUN_0041d6c0();

    // FUN_0045b290
    void FUN_0045b290(MenuState *pState, int* param_2, int param_3);

    DEF_ALIAS(00456800, DrawHoloPlanet, void, MenuState* pState, int PlanetIdx, float Scale);
    DEF_ALIAS(00456c70, DrawTrackPreview, void, MenuState *pState, int TrackID, float param_3);
    DEF_ALIAS(00440150, MenuAxisHorizontal, void, void* pUnused, int PosY);

    DEF_ALIAS(0043b0b0, HandleCircuits, void, MenuState* pState);
    DEF_ALIAS(00440bc0, BeatEverything1stPlace, bool, MenuState* pState);

    // "/SCREENTEXT_508/~~Abyss" -> "Abyss"
    DEF_ALIAS(00421360, StrSanitise, const char* , const char* param_1);

    // sprintf, but idk yet whether it's custom or the LibC variant
    DEF_ALIAS(0049eb80, rcr_sprintf, int32_t, char* pDst, const char* pFormat, ...);

    // Position in pixels from
    //   X:  0 - 320
    //   Y:  0 - 240
    // Text formatters:
    //  ~f0  Large (default)
    //  ~f4  Small
    //  ~c   Centered
    //  ~s   Shadow
    DEF_ALIAS(00450530, UIText, void, int16_t PosX, int16_t PosY, uint8_t R, uint8_t G, uint8_t B, uint8_t A, const char* pText);
    DEF_ALIAS(0043fce0, UITextMenu, void, MenuState* pState, uint16_t PosX, uint16_t PosY, int param_4, float param_5, float param_6, const char* pText);
    DEF_ALIAS(004403e0, DrawRecord, void, MenuState *pState, int param_2, int param_3, int32_t param_4, char param_5);
    DEF_ALIAS(00454d40, SetMenuIdx, void, MenuState* pState, int param_2);
    DEF_ALIAS(004286f0, ImgScale, void, uint16_t ImgIdx, float ScaleX, float ScaleY);
    DEF_ALIAS(00428740, ImgColor, void, uint16_t ImgIdx, uint8_t R, uint8_t G, uint8_t B, uint8_t A);
    DEF_ALIAS(004287e0, ImgSetFlag, void, uint16_t ImgIdx, uint32_t Flag);
    DEF_ALIAS(00428800, ImgResetFlag, void, uint16_t ImgIdx, uint32_t Flag);
    DEF_ALIAS(004285d0, ImgVisible, void, uint16_t ImgIdx, int32_t bVisible);
    DEF_ALIAS(00428660, ImgPosition, void, uint16_t ImgIdx, uint16_t PosX, uint16_t PosY);
    DEF_ALIAS(0042f860, Vec3Sub, void, float *pDst,float *pLhs,float *pRhs); 
    DEF_ALIAS(0042f8c0, Vec3Mag, float10, float *pSrc);
}