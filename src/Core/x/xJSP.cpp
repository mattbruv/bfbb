#include "xJSP.h"

#include <types.h>

extern int32 sAtomicStartCount; // not exactly sure of the type
extern RwV3d sCurrVert[]; // likely not correct. not sure what this is.

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
#if 1
#pragma GLOBAL_ASM("asm/Core/x/xJSP.s", "AddMeshCB__FP6RpMeshP12RpMeshHeaderPv")
#else
RpMesh* AddMeshCB(RpMesh* mesh, RpMeshHeader* header, RwV3d** param_3)
{
    uint32 i = 0;
    int32 counter = 0;

    // the loop looks accurate, but it seems like
    // the original function uses much more of the stack?
    while (i < mesh->numIndices)
    {
        **param_3 = sCurrVert[*mesh->indices + counter];

        counter = counter + 2;
        i = i + 1;
        *param_3 = *param_3 + 1;
    }

    return mesh;
}
#endif

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
