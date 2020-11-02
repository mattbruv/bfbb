#ifndef ZFMV_H
#define ZFMV_H

#include <types.h>

enum eFMVFile
{
    eFMVFile_PromoFOP,
    eFMVFile_PromoTak,
    eFMVFile_PromoJN,
    eFMVFile_PromoSB,
    eFMVFile_LogoHeavyIron,
    eFMVFile_LogoNick,
    eFMVFile_LogoRW,
    eFMVFile_LogoTHQ,
    eFMVFile_Demo1,
    eFMVFile_Demo2,
    eFMVFile_Demo3,
    eFMVFile_LogoPixar,
    eFMVFileCount
};

struct zFMVFile
{
    eFMVFile type;
    int8 fileName[32];
};

uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time, bool skippable, bool lockController);
int8* zFMVFileGetName(eFMVFile fileEnum);

#endif