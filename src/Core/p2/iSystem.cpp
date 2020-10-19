#include <types.h>

#include <dolphin.h>
#include <rwcore.h>

#include "../x/xDebug.h"
#include "../x/xMath.h"
#include "../x/xSnd.h"
#include "../x/xPad.h"
#include "../x/xMemMgr.h"

#include "iSystem.h"
#include "iFile.h"
#include "iTime.h"

extern uint32 mem_base_alloc;
extern uint32 add;
extern uint32 size;
extern int32 gEmergencyMemLevel;
extern void* the_heap;
extern void* bad_val;

// psGetMemoryFunctions()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "psGetMemoryFunctions__Fv")

// iVSync()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iVSync__Fv")

// TRCInit()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "TRCInit__Fv")

// iSystemInit(unsigned int)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iSystemInit__FUi")

/*
void iSystemExit()
{
    xDebugExit();
    xMathExit();
    RenderWareExit();
    xSndExit();
    xPadKill();
    iFileExit();
    iTimeExit();
    xMemExit();
}
*/
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "iSystemExit__Fv")

// RWAttachPlugins()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RWAttachPlugins__Fv")

// RenderWareInit()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "RenderWareInit__Fv")

int32 RenderWareExit()
{
    RwEngineStop();
    RwEngineClose();
    RwEngineTerm();
}

#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "TextureRead__FPCcPCc")

void null_func()
{
    mem_base_alloc += 4;
}

extern "C" {
void mem_null(uint32 param_1, uint32 param_2)
{
    add = param_1;
    size = param_2;
}

void* malloc(uint32 __size)
{
    if ((int)__size <= 0)
    {
        return NULL;
    }

    void* result = OSAllocFromHeap(the_heap, __size);

    if (result == NULL)
    {
        null_func();
    }

    return result;
}

void free(void* __ptr)
{
    if (__ptr != NULL)
    {
        OSFreeToHeap(the_heap, __ptr);
    }
}
}

void _rwDolphinHeapFree(void* __ptr)
{
    if (__ptr == bad_val)
    {
        mem_null(0, 0);
    }
    if (__ptr != NULL)
    {
        // TODO: clear this up
        // some number is compared against 0xbeef in the assembly.
        // 0xbeef was probably a hardcoded constant Heavy iron used.
        // if (*(uint32*)((int32)__ptr + -4) + 0x2153 == 0xbeef)
        if (*(int32*)((int32)__ptr + -4) == -0x21524111)
        {
            free((void*)((int32)__ptr - 32));
        }
        else
        {
            null_func();
            if (gEmergencyMemLevel != 0)
            {
                xMemPopBase(gEmergencyMemLevel);
                gEmergencyMemLevel = 0;
            }
        }
    }
}

// _rwDolphinHeapAlloc(unsigned long)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "_rwDolphinHeapAlloc__FUl")

// DolphinInitMemorySystem(RwMemoryFunctions*)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "DolphinInitMemorySystem__FP17RwMemoryFunctions")

// dlAccessToMode(const char*)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlAccessToMode__FPCc")

// dlFread(void*,unsigned long,unsigned long,void*)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFread__FPvUlUlPv")

// dlFseek(void*,long,int)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "dlFseek__FPvli")

// RwFileFunctions::operator =(const RwFileFunctions&)
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "__as__15RwFileFunctionsFRC15RwFileFunctions")

// DolphinInstallFileSystem()
#pragma GLOBAL_ASM("asm/Core/p2/iSystem.s", "DolphinInstallFileSystem__Fv")
