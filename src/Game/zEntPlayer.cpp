#include "zEntPlayer.h"

#include <types.h>

#include "../Core/p2/iSnd.h"

#include "../Core/x/xSnd.h"
#include "../Core/x/xEnt.h"
#include "../Core/x/xVec3.h"

#include "zGame.h"
#include "zGlobals.h"
#include "zEntTeleportBox.h"

extern zGlobals globals;
extern int32 gCurrentPlayer;
extern uint32 sCurrentStreamSndID;

extern uint32 sShouldBubbleBowl;
extern float32 sBubbleBowlTimer;
extern float32 sBubbleBowlLastWindupTime;
extern float32 sBubbleBowlMultiplier;

// Multidimensional sound arrays for each player type
extern uint32 sPlayerSnd[ePlayer_MAXTYPES][ePlayerSnd_Total];
extern uint32 sPlayerSndID[ePlayer_MAXTYPES][ePlayerSnd_Total];

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayer_SpawnWandBubbles__FP5xVec3Ui")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerKillCarry__Fv")

// void zEntPlayerControlOn(zControlOwner owner)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerControlOn__F13zControlOwner")

// void zEntPlayerControlOff(zControlOwner owner)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "zEntPlayerControlOff__F13zControlOwner")

// void TellPlayerVillainIsNear(float visnear)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TellPlayerVillainIsNear__Ff")

// void SetPlayerKillsVillainTimer(float time)
#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "SetPlayerKillsVillainTimer__Ff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "DampenControls__FPfPfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "CalcAnimSpeed__FP4xEntfPf")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "LeanUpdate__Fff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "TurnToFace__FP4xEntPC5xVec3ff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerArrive__FP4xEntP5xBase")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "PlayerAbsControl__FP4xEntfff")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "InvReset__Fv")

void HealthReset()
{
    globals.player.Health = globals.player.MaxHealth;
}

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunAnyCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunScaredCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunVictoryCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "RunSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s",                                                        \
                   "RunOutOfWorldCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "WalkCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleCheck__FP15xAnimTransitionP11xAnimSinglePv")

#pragma GLOBAL_ASM("asm/Game/zEntPlayer.s", "IdleSlipCheck__FP15xAnimTransitionP11xAnimSinglePv")

// A bunch of unlabeled functions go here...

/*
uint32 BbowlCheck(xAnimTransition* tranny, xAnimSingle* anim, void* param_3)
{
    if (globals.player.cheat_mode)
    {
        return false;
    }

    if (zEntTeleportBox_playerIn())
    {
        return false;
    }

    bool canBowl = false;

    if (!globals.player.ControlOff && (globals.pad0->pressed & 0x20000) &&
        globals.player.g.PowerUp[0])
    {
        canBowl = true;
    }

    return canBowl;
}
*/
