#pragma once
#include <stdint.h>
#include <stddef.h>

typedef long double float10;

struct ImgDat;
struct UnknStruct2;

struct MenuState
{
    uint8_t  Unkn0[0x08];
    int32_t  MenuIdx;
    int32_t  Field_0x0C;
    uint8_t  Unkn1[0x4D];
    int8_t   TrackID;
    uint8_t  CircuitIdx;
    uint8_t  Unkn2[0xD];
    uint8_t  bIsTournament;
    uint8_t  Field_0x6D;
    uint8_t  Field_0x6E;
    uint8_t  Field_0x6F;
    uint8_t  Field_0x70;
    uint8_t  Unkn3[0x1A];
    int16_t  Field_0x8A[3];
    uint8_t  Field_0x90;
    uint8_t  WinningsID;
    uint8_t  Unkn4[0x22];
    ImgDat*  aImages[6];
};
static_assert(offsetof(MenuState, Field_0x0C)     == 0x0C);
static_assert(offsetof(MenuState, TrackID)        == 0x5D);
static_assert(offsetof(MenuState, CircuitIdx)     == 0x5E);
static_assert(offsetof(MenuState, bIsTournament)  == 0x6C);
static_assert(offsetof(MenuState, Field_0x6D)     == 0x6D);
static_assert(offsetof(MenuState, Field_0x6E)     == 0x6E);
static_assert(offsetof(MenuState, Field_0x6F)     == 0x6F);
static_assert(offsetof(MenuState, Field_0x70)     == 0x70);
static_assert(offsetof(MenuState, Field_0x8A)     == 0x8A);
static_assert(offsetof(MenuState, Field_0x90)     == 0x90);
static_assert(offsetof(MenuState, WinningsID)     == 0x91);
static_assert(offsetof(MenuState, aImages)        == 0xB4);


struct ImgDat
{
    int16_t       Unkn0[8];
    UnknStruct2*  pUnknStruct2;
};

struct UnknStruct2
{
    int16_t  Unkn0[2];
    int32_t  Unkn1;
};

// Get's referenced in:
// - MenuBeforeRace
// - HandleProgress
// - MenuTrackSelection
// - MenuTrackInfo
// - FUN_0043ca30
// - FUN_0044e320
// - FUN_00457410
// - FUN_004586e0
// - FUN_0045b290
// - FUN_0045b7d0
// - FUN_0045bab0
struct TrackInfo
{
    int32_t  LoadModel;             // Get's referenced in: MenuTrackSelection, MenuTrackInfo, FUN_0045b290
    int32_t  LoadSpline;
    uint8_t  Unkn0;
    uint8_t  PlanetIdx;             // Determines preview image, planet holo, planet name and intro movie
    int8_t   FavoritePilot;
};

struct PlanetName
{
    char Name[92];
};

enum ImgFlags
{
    IMG_NONE     = 0,
    IMG_UNKN_0   = 1 << 0,
    IMG_UNKN_2   = 1 << 2,
    IMG_UNKN_3   = 1 << 3,
    IMG_VISIBLE  = 1 << 5,
    IMG_UNKN_8   = 1 << 8,      // Stretch? Repeat?
    IMG_UNKN_9   = 1 << 9,
    IMG_UNKN_10  = 1 << 10,
    IMG_UNKN_11  = 1 << 11,     // Additive blending?
    IMG_UNKN_13  = 1 << 13,     // Z ?
    IMG_UNKN_14  = 1 << 14,     // Makes invisible (Z) ?
    IMG_UNKN_15  = 1 << 15,
    IMG_UNKN_16  = 1 << 16,     // Changes ImgIdx !?!?
};
static_assert(sizeof(ImgFlags) == sizeof(int32_t));

struct ImgParam
{
    uint16_t  PosX;
    uint16_t  PosY;
    int16_t   Unkn0;            // SizeX ?
    int16_t   Unkn1;            // SizeY ?
    float     ScaleX;
    float     ScaleY;
    float     Unkn2;
    ImgFlags  Flags;
    uint8_t   R;
    uint8_t   G;
    uint8_t   B;
    uint8_t   A;
    ImgDat*   pImage;
};
static_assert(sizeof(ImgParam) == 0x20);