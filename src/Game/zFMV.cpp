#include "zFMV.h"

#include <types.h>

extern zFMVFile zFMVFileTable[9];

// func_80092BEC
#pragma GLOBAL_ASM("asm/Game/zFMV.s", "zFMVPlay__FPcUifbb")

int8* zFMVFileGetName(eFMVFile fileEnum)
{
    for (int32 i = 0; i < 9; i++)
    {
        if (fileEnum == zFMVFileTable[i].type)
        {
            return zFMVFileTable[i].fileName;
        }
    }
    return NULL;
}