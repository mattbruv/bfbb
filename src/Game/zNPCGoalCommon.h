#ifndef ZNPCGOALCOMMON_H
#define ZNPCGOALCOMMON_H

#include "../Core/x/xBehaviour.h"

struct zNPCGoalCommon : xGoal
{
    int32 flg_npcgauto;
    int32 flg_npcgable;
    uint32 anid_played;
    struct
    {
        int32 flg_info : 16;
        int32 flg_user : 16;
    };
};

#endif