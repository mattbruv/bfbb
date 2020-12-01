#include <types.h>
#include "xVec3.h"
#include "xClimate.h"
#include "xMath3.h"

extern "C" {
void memcpy(void* a, const void*b, int32 size);
}

// func_8000E96C
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateVecFromAngle__FfP5xVec3")

// func_8000E9F4
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateInit__FP11_tagClimate")

// func_8000EA70
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateInitAsset__FP11_tagClimateP9xEnvAsset")

// func_8000EB50
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateSetSnow__Ff")

// func_8000EB68
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "xClimateSetRain__Ff")

// func_8000EB80
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "GetPosBigDogWhattupFool__FP5xVec3")

// func_8000EBC4
#pragma GLOBAL_ASM("asm/Core/x/xClimate.s", "UpdateRain__FP11_tagClimatef")

void UpdateWind(_tagClimate* climate, float32 seconds)
{
    return;
}

void xClimateUpdate(_tagClimate* climate, float32 seconds)
{
    UpdateRain(climate, seconds);
    UpdateWind(climate, seconds);
}

void xVec3Init(xVec3* vec, float32 x, float32 y, float32 z)
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

void xMat3x3Identity(xMat3x3* matrix)
{
    // TODO: figure out what/where this global variable is
    xMat3x3Copy(matrix, (xMat3x3*)0x8038c2e0);
}

void xMat3x3Copy(xMat3x3* m1, const xMat3x3* m2)
{
    memcpy(m1, m2, sizeof(xMat3x3));
}
