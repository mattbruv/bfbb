#include "dolphin.h"
#include "zEntPlayer.h"
#include "zNPCTypeCommon.h"

extern zGlobals lbl_globals;
extern unsigned int lbl_sSpatulaGrabbed;
extern float lbl__1467;
extern float lbl__6489;
extern float lbl__874_2;
extern float lbl__2135;

extern void zNPCMsg_AreaNotify(zNPCCommon* sender, en_NPC_MSG_ID msgid, float rad, int filter, en_NPCTYPES toNPCType);
extern void zMusicSetVolume(float vol, float delay);


void zEntPlayer_GiveHealth(int quantity) {

	if (quantity < 0 && -quantity > (int) lbl_globals.player.Health) {
		lbl_globals.player.Health = 0;
		return;
	}

	unsigned int maxHealth = lbl_globals.player.MaxHealth;
	lbl_globals.player.Health += quantity;

	if (lbl_globals.player.Health > maxHealth) {
		lbl_globals.player.Health = maxHealth;
	}
}

#define MATCH

#ifdef MATCH
asm void zEntPlayer_GiveSpatula(int quantity) {
	nofralloc
	stwu r1, -0x10(r1)
	mflr r0
	lis r3, lbl_globals@ha
	stw r0, 0x14(r1)
	li r0, 1
	addi r3, r3, lbl_globals@l
	stw r0, lbl_sSpatulaGrabbed
	lfs f1, 0x1710(r3)
	lfs f0, lbl__1467
	fcmpo cr0, f1, f0
	bge lbl_80076A50
	stfs f0, 0x1710(r3)
lbl_80076A50:
	lfs f1, lbl__6489
	li r3, 0
	li r4, 0x15
	li r5, 0x104
	li r6, 0
	bl zNPCMsg_AreaNotify
	lfs f1, lbl__874_2
	lfs f2, lbl__2135
	bl zMusicSetVolume
	lwz r0, 0x14(r1)
	mtlr r0
	addi r1, r1, 0x10
	blr 
}

#else

void zEntPlayer_GiveSpatula(int quantity) {

	lbl_sSpatulaGrabbed = 1;

	float f = lbl__1467;

	if (f < lbl_globals.player.ControlOffTimer) {
		lbl_globals.player.ControlOffTimer = f;
	}

	zNPCMsg_AreaNotify(NULL, NPC_MID_PLYRSPATULA, lbl__6489, 0x104, NPC_TYPE_UNKNOWN);
	zMusicSetVolume(lbl__874_2, lbl__2135);
}

#endif

void zEntPlayer_GiveShinyObject(int quantity) {

    if (quantity < 0 && -quantity > (int) lbl_globals.player.Inv_Shiny) {
        lbl_globals.player.Inv_Shiny = 0;
        return;
    }

    lbl_globals.player.Inv_Shiny += quantity;

    if (lbl_globals.player.Inv_Shiny > 99999) {
        lbl_globals.player.Inv_Shiny = 99999;
    }
}