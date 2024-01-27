#pragma once
#include <stdint.h>

typedef long double float10;

struct UnknStruct0
{
    uint8_t  Unkn0[0x0C];
    int32_t  Field12_0x0C;
    uint8_t  Unkn1[0x14];
    int32_t  Field_0x24;
    int32_t  Field_0x28;
    int32_t  Field_0x2C;
    int32_t  Field_0x30;
    int32_t  Field_0x34;
    int32_t  Field_0x38;
    uint8_t  Unkn2[0x21];
    int8_t   TrackID;
    uint8_t  CircuitIdx;
    uint8_t  Unkn3[0xD];
    uint8_t  bIsTournament;
    uint8_t  Field_0x6D;
    uint8_t  Unkn4[0x02];
    uint8_t  Field_0x70;
};
static_assert(offsetof(UnknStruct0, Field12_0x0C) == 0x0C);
static_assert(offsetof(UnknStruct0, Field_0x24) == 0x24);
static_assert(offsetof(UnknStruct0, Field_0x28) == 0x28);
static_assert(offsetof(UnknStruct0, Field_0x2C) == 0x2C);
static_assert(offsetof(UnknStruct0, Field_0x30) == 0x30);
static_assert(offsetof(UnknStruct0, Field_0x38) == 0x38);
static_assert(offsetof(UnknStruct0, TrackID) == 0x5D);
static_assert(offsetof(UnknStruct0, CircuitIdx) == 0x5E);
static_assert(offsetof(UnknStruct0, bIsTournament) == 0x6C);
static_assert(offsetof(UnknStruct0, Field_0x6D) == 0x6D);
static_assert(offsetof(UnknStruct0, Field_0x70) == 0x70);

struct TrackInfo
{
    int32_t  UnknInt0;
    int32_t  UnknInt1;
    uint8_t  UnknInt2;
    uint8_t  PlanetIdx;
};

struct PlanetName
{
    char  Name[92];
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

struct ImgParam
{
    uint16_t  PosX;
    uint16_t  PosY;
    int32_t   Unkn0;
    float     ScaleX;
    float     ScaleY;
    float     Unkn1;
    ImgFlags  Flags;
    uint8_t   R;
    uint8_t   G;
    uint8_t   B;
    uint8_t   A;
    int32_t   Unkn3;
};
static_assert(sizeof(ImgParam) == 0x20);
static_assert(sizeof(ImgFlags) == sizeof(int32_t));