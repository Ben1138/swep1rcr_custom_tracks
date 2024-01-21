#pragma once
#include <stdint.h>

typedef long double float10;

struct UnknStruct0
{
    uint8_t Unkn0[0x0C];
    int32_t Field12_0x0C;
    uint8_t Unkn1[0x4D];
    int8_t  TrackID;
    uint8_t CircuitIdx;
    uint8_t Unkn2[0xD];
    uint8_t bIsTournament;
    uint8_t Field_0x6D;
    uint8_t Unkn3[0x02];
    uint8_t Field_0x70;
};

struct TrackInfo
{
    int32_t UnknInt0;
    int32_t UnknInt1;
    uint8_t UnknInt2;
    uint8_t PlanetIdx;
};

struct PlanetName
{
    char Name[92];
};

static_assert(offsetof(UnknStruct0, Field12_0x0C)    == 0x0C);
static_assert(offsetof(UnknStruct0, TrackID)         == 0x5D);
static_assert(offsetof(UnknStruct0, CircuitIdx)      == 0x5E);
static_assert(offsetof(UnknStruct0, bIsTournament)   == 0x6C);
static_assert(offsetof(UnknStruct0, Field_0x6D)      == 0x6D);
static_assert(offsetof(UnknStruct0, Field_0x70)      == 0x70);