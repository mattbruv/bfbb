#include "xJSP.h"

#include <types.h>

extern int32 sAtomicStartCount; // not exactly sure of the type

// No dwarf info
// ghidra said return type and type of param_2 was void
// but changing it to return atomic matches.
RpAtomic* CountAtomicCB(RpAtomic* atomic, uint32* param_2)
{
    sAtomicStartCount++;
    *param_2 += atomic->geometry->mesh->totalIndicesInMesh;
    return atomic;
}

// func_80122C2C
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddMeshCB__FP6RpMeshP12RpMeshHeaderPv")

// func_80122CBC
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddAtomicCB__FP8RpAtomicPv")

// func_80122D2C
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddAtomicPrecalcedVertCB__FP8RpAtomicPv")

// func_80122D68
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "ListAtomicCB__FP8RpAtomicPv")

// func_80122D80
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "xJSP_MultiStreamRead__FPvUiPP10xJSPHeader")

// func_80123148
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "xJSP_Destroy__FP10xJSPHeader")
