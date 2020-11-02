#include <types.h>
#include <CodeWarrior/stdio.h>
#include "../Core/p2/iFMV.h"
#include "../Core/x/xSnd.h"
#include "zFMV.h"
#include "zGameState.h"

extern int8 zFMVStrings[0x10];
extern zFMVFile zFMVFileTable[9];
// align to 8 if problems

uint32 zFMVPlay(int8* filename, uint32 buttons, float32 time, bool skippable, bool lockController)
{
    int8 fullname[64];
    uint32 ret;

    if (filename == NULL)
    {
        return 1;
    }

    while (*filename == '/' || *filename == '\\')
    {
        filename++;
    }

    sprintf(fullname, zFMVStrings, filename, (zFMVStrings + 5));
    xSndSuspend();
    _GameOstrich old = zGameGetOstrich();
    zGameSetOstrich(eGameOstrich_PlayingMovie);
    ret = iFMVPlay(fullname, buttons, time, skippable, lockController);
    zGameSetOstrich(old);
    xSndResume();

    return ret;
}

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