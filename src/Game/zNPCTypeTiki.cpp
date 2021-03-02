#include "zNPCTypeTiki.h"

#include "zNPCTypes.h"

#include "../Core/x/xString.h"
#include "../Core/x/xutil.h"

#define ANIM_COUNT 2

extern const char* g_strz_tikianim[ANIM_COUNT];
extern uint32 g_hash_tikianim[ANIM_COUNT];
extern zParEmitter* cloudEmitter;
extern xParEmitterCustomSettings thunderEmitterInfo;
extern char zNPCTypeTiki_stringBase0[];

extern float32 _858; // 0.0   0
extern float32 _859; // -0.30000001192092896   be99999a
extern float32 _860; // 4.71238899230957   4096cbe4
extern float32 _861; // 100.0   42c80000
extern float32 _862; // 1.0   3f800000
extern float32 _863; // 2.0   40000000
extern float32 _864_2; // 0.800000011920929   3f4ccccd
extern float32 _865; // 75.0   42960000
extern float32 _866; // 255.0   437f0000
extern float32 _867; // -0.5   bf000000
extern float32 _868; // 1.5707963705062866   3fc90fdb
extern float32 _869; // 0.5   3f000000
extern float32 _870; // 0.30000001192092896   3e99999a
extern float32 _871; // 175.0   432f0000
extern float32 _923; // 0.699999988079071   3f333333
extern float32 _924; // 0.20000000298023224   3e4ccccd
extern float32 _925; // 5.0   40a00000
extern float32 _926; // 0.75   3f400000
extern float32 _927; // 0.3499999940395355   3eb33333
extern float32 _928; // -1.0   bf800000
extern float32 _929; // 25.0   41c80000
extern float32 _930; // 0.012000000104308128   3c449ba6
extern float32 _982; // 176.0   43300000
extern float32 _1084; // -0.25   be800000
extern float32 _1185; // -9.999999680285692e+37   fe967699
extern float32 _1350; // 10.0   41200000
extern float32 _1351; // -0.10000000149011612   bdcccccd
extern float32 _1352; // 400.0   43c80000
extern float32 _1353; // 90.0   42b40000
extern float32 _1354; // 0.25   3e800000
extern float32 _1355; // 9.999999747378752e-05   38d1b717
extern float32 _1356; // 4.999999873689376e-05   3851b717
extern float32 _1566; // 300.0   43960000
extern float32 _1567; // 9.999999747378752e-06   3727c5ac
extern float32 _1568; // 0.10000000149011612   3dcccccd
extern float32 _1617; // 4.0   40800000
extern float32 _1618; // 6.2831854820251465   40c90fdb
extern float32 _1619; // 0.2500999867916107   3e800d1b
extern float32 _1668; // 50.0   42480000
extern float32 _1695; // 0.9140000343322754   3f69fbe8
extern float32 _1724_2; // 3.0   40400000
extern float32 _1725_2; // 8.0   41000000
extern float32 _1726; // 0.8999999761581421   3f666666
extern float32 _1727; // 2.5999999046325684   40266666
extern float32 _1728; // 0.01666666753590107   3c888889
extern float32 _1729; // 0.5001000165939331   3f00068e
extern float32 _1771; // 1.5   3fc00000
extern float32 _1809; // 0.6669999957084656   3f2ac083

void ZNPC_Tiki_Startup()
{
    for (int32 i = 0; i < ANIM_COUNT; i++)
    {
        g_hash_tikianim[i] = xStrHash(g_strz_tikianim[i]);
    }
}

void ZNPC_Tiki_Shutdown()
{
}

// func_801095EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_InitStacking__FP6zScene")

// func_801096EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_InitFX__FP6zScene")

/* need to do more of this
void zNPCTiki_InitFX(zScene* scene)
{
    RwTexture* tex;

    cloudEmitter = zParEmitterFind("PAREMIT_THUNDER_CLOUD");
    if (cloudEmitter == 0)
    {
        cloudEmitter = zParEmitterFind("PAREMIT_CLOUD");
    }

    thunderEmitterInfo.custom_flags = 0xf5e;
    thunderEmitterInfo.vel.x = 0;
    thunderEmitterInfo.vel.y = 0xbe99999a;
    thunderEmitterInfo.vel.z = 0;
    thunderEmitterInfo.vel_angle_variation = 0x4096cbe4;
}
*/

// func_80109A7C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_ExplodeFX__FP8zNPCTiki")

// func_80109D3C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_PickTikisToAnimate__Fv")

// func_80109EC4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_Timestep__FP6xScenef")

// func_80109F28
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "zNPCTiki_ReparentOrphans__Fv")

xFactoryInst* ZNPC_Create_Tiki(int32 who, RyzMemGrow* grow, void*)
{
    zNPCTiki* tiki = NULL;

    switch (who)
    {
    case NPC_TYPE_TIKI_WOOD:
    case NPC_TYPE_TIKI_LOVEY:
    case NPC_TYPE_TIKI_QUIET:
    case NPC_TYPE_TIKI_THUNDER:
    case NPC_TYPE_TIKI_STONE:
    {
        tiki = new (who, grow) zNPCTiki(who);
        break;
    }
    default:
    {
        xUtil_idtag2string(who, 0);
        break;
    }
    }

    return tiki;
}

void ZNPC_Destroy_Tiki(xFactoryInst* inst)
{
    delete inst;
}

// func_8010A0AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ZNPC_AnimTable_Tiki__Fv")

/* close
xAnimTable* ZNPC_AnimTable_Tiki()
{
    xAnimTable* table;

    table = xAnimTableNew(zNPCTypeTiki_stringBase0 + 0x3a, NULL, 0);
    xAnimTableNewState(table, g_strz_tikianim[1], 0x110, 1, 1, NULL, NULL, 0, NULL, NULL,
                       xAnimDefaultBeforeEnter, NULL, NULL);
    return table;
}
*/

// func_8010A134
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Reset__8zNPCTikiFv")

// func_8010A2DC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Setup__8zNPCTikiFv")

// func_8010A31C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Init__8zNPCTikiFP9xEntAsset")

// func_8010A530
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s",                                                      \
                   "Damage__8zNPCTikiF18en_NPC_DAMAGE_TYPEP5xBasePC5xVec3")

// func_8010A5BC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SetCarryState__8zNPCTikiF18en_NPC_CARRY_STATE")

// func_8010A7F0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SelfSetup__8zNPCTikiFv")

// func_8010A9D0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ParseINI__8zNPCTikiFv")

// func_8010AA40
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Process__8zNPCTikiFP6xScenef")

// func_8010B38C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "SysEvent__8zNPCTikiFP5xBaseP5xBaseUiPCfP5xBasePi")

// func_8010B6AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "AddChild__8zNPCTikiFP8zNPCTiki")

// func_8010B6EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveChild__8zNPCTikiFP8zNPCTiki")

// func_8010B754
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveParent__8zNPCTikiFP8zNPCTiki")

// func_8010B7EC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "FindParents__8zNPCTikiFP6zScene")

// func_8010BD88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ParentUpdated__8zNPCTikiFP8zNPCTiki")

// func_8010BDCC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "RemoveFromFamily__8zNPCTikiFv")

// func_8010BEB0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyFloat__FP8zNPCTikif")

// func_8010BFC8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyIdleCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C0C8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyPatrolCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C190
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "quietIdleCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C318
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "quietHideCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C438
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "thunderIdleCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C5A8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "thunderCountCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C8F8
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "tikiDyingCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C988
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "tikiDeadCB__FP5xGoalPvP11en_trantypefPv")

// func_8010C9AC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "genericTikiRender__FP4xEnt")

// func_8010CAB4
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "loveyTikiRender__FP4xEnt")

// func_8010CD4C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "__ct__8zNPCTikiFi")

// func_8010CD88
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "CanRope__8zNPCTikiFv")

// func_8010CD90
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "AnimPick__8zNPCTikiFi16en_NPC_GOAL_SPOTP5xGoal")

// func_8010CDBC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "Move__8zNPCTikiFP6xScenefP9xEntFrame")

// func_8010CDC0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "BUpdate__8zNPCTikiFP5xVec3")

// func_8010CDE0
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "IsAlive__8zNPCTikiFv")

// func_8010CDFC
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColChkFlags__8zNPCTikiCFv")

// func_8010CE04
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColPenFlags__8zNPCTikiCFv")

// func_8010CE0C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColChkByFlags__8zNPCTikiCFv")

// func_8010CE14
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "ColPenByFlags__8zNPCTikiCFv")

// func_8010CE1C
#pragma GLOBAL_ASM("asm/Game/zNPCTypeTiki.s", "PhysicsFlags__8zNPCTikiCFv")
