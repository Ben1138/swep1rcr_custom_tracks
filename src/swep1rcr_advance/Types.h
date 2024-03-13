#pragma once
#include <stdint.h>
#include <stddef.h>

typedef long double float10;

struct ImgDat;
struct UnknStruct2;

union Winnings
{
    struct
    {
        int16_t Truguts1st;
        int16_t Truguts2nd;
        int16_t Truguts3rd;
        int16_t Truguts4th;
    };
    int16_t Truguts[4];
};

static_assert(sizeof(bool) == sizeof(uint8_t));
struct MenuState
{
    int32_t  Field_0x00;
    uint8_t  Unkn0[0x04];
    int32_t  MenuIdx;
    int32_t  Field_0x0C;
    int32_t  Field_0x10;
    int32_t  Field_0x14;
    uint8_t  Unkn1[0x20];
    int32_t  Field_0x38;
    uint8_t  Unkn2[0x21];
    int8_t   TrackID;
    uint8_t  CircuitIdx;
    uint8_t  Field_0x5F;
    uint8_t  Unkn3[0x04];
    int32_t  Field_0x64;
    int32_t  Field_0x68;
    bool     bIsTournament;
    uint8_t  Field_0x6D;
    uint8_t  Field_0x6E;
    uint8_t  Field_0x6F;
    uint8_t  Field_0x70;
    uint8_t  Field_0x71;
    uint8_t  Field_0x72;
    uint8_t  Unkn4[0x1C];
    uint8_t  NumLaps;
    uint8_t  AISpeed;
    uint8_t  WinningsID;
    Winnings Truguts[3];
    uint8_t  Unkn5[0x0A];
    ImgDat*  aImages[6];
};
static_assert(offsetof(MenuState, Field_0x00)     == 0x00);
static_assert(offsetof(MenuState, MenuIdx)        == 0x08);
static_assert(offsetof(MenuState, Field_0x0C)     == 0x0C);
static_assert(offsetof(MenuState, Field_0x10)     == 0x10);
static_assert(offsetof(MenuState, Field_0x14)     == 0x14);
static_assert(offsetof(MenuState, Field_0x38)     == 0x38);
static_assert(offsetof(MenuState, TrackID)        == 0x5D);
static_assert(offsetof(MenuState, CircuitIdx)     == 0x5E);
static_assert(offsetof(MenuState, Field_0x5F)     == 0x5F);
static_assert(offsetof(MenuState, Field_0x64)     == 0x64);
static_assert(offsetof(MenuState, Field_0x68)     == 0x68);
static_assert(offsetof(MenuState, bIsTournament)  == 0x6C);
static_assert(offsetof(MenuState, Field_0x6D)     == 0x6D);
static_assert(offsetof(MenuState, Field_0x6E)     == 0x6E);
static_assert(offsetof(MenuState, Field_0x6F)     == 0x6F);
static_assert(offsetof(MenuState, Field_0x70)     == 0x70);
static_assert(offsetof(MenuState, Field_0x71)     == 0x71);
static_assert(offsetof(MenuState, Field_0x72)     == 0x72);
static_assert(offsetof(MenuState, NumLaps)        == 0x8F);
static_assert(offsetof(MenuState, AISpeed)        == 0x90);
static_assert(offsetof(MenuState, WinningsID)     == 0x91);
static_assert(offsetof(MenuState, Truguts)        == 0x92);
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

struct UnknStruct3
{
    int32_t Field_0x00;
    int*    Field_0x04;
    int32_t Field_0x08;
    int32_t PlanetIdx;
    int32_t LoadModel;
    int32_t LoadSpline;
    int32_t Field_0x18;
    int32_t Unkn0;
    int32_t Field_0x20;
    int32_t Field_0x24;
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
    uint8_t  FavoritePilot;
};

struct PlanetName
{
    char Name[92];
};

struct PilotInfo
{
    const char* NameFirst;
    const char* NameLast;
    uint8_t Unkn[0x2C];
};
static_assert(sizeof(PilotInfo) == 0x34);

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