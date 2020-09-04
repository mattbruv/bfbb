struct zPlayerGlobals {
    int unk0[0x6c0];
    unsigned int Inv_Shiny;
};

struct zGlobals {
    zPlayerGlobals player;
};

void zEntPlayer_GiveShinyObject(int quantity);

extern zGlobals globals;

void zEntPlayer_GiveShinyObject(int quantity) {

    if (quantity < 0 && -quantity > globals.player.Inv_Shiny) {
        globals.player.Inv_Shiny = 0;
        return;
    }

    unsigned int sum = globals.player.Inv_Shiny + quantity;
    unsigned int maxShinies = 99999;

    globals.player.Inv_Shiny = sum;

    if (sum > maxShinies) {
        globals.player.Inv_Shiny = maxShinies;
    }
}

/*
.global zEntPlayer_GiveShinyObject__Fi
zEntPlayer_GiveShinyObject__Fi:
* 00073884  2C 03 00 00 /	cmpwi r3, 0
* 00073888  40 80 00 28 /	bge lbl_80076AB0
* 0007388C  3C 80 80 3C /	lis r4, lbl_globals@ha
* 00073890  7C A3 00 D0 /	neg r5, r3
* 00073894  38 84 05 58 /	addi r4, r4, lbl_globals@l
* 00073898  80 04 1B 00 /	lwz r0, 0x1b00(r4)
* 0007389C  7C 05 00 00 /	cmpw r5, r0
* 000738A0  40 81 00 10 /	ble lbl_80076AB0
* 000738A4  38 00 00 00 /	li r0, 0
* 000738A8  90 04 1B 00 /	stw r0, 0x1b00(r4)
* 000738AC  4E 80 00 20 /	blr 
lbl_80076AB0:
* 000738B0  3C A0 80 3C /	lis r5, lbl_globals@ha
* 000738B4  3C 80 00 02 /	lis r4, 0x0001869F@ha
* 000738B8  38 C5 05 58 /	addi r6, r5, lbl_globals@l
* 000738BC  80 A6 1B 00 /	lwz r5, 0x1b00(r6)
* 000738C0  38 04 86 9F /	addi r0, r4, 0x0001869F@l
* 000738C4  7C 65 1A 14 /	add r3, r5, r3
* 000738C8  7C 03 00 40 /	cmplw r3, r0
* 000738CC  90 66 1B 00 /	stw r3, 0x1b00(r6)
* 000738D0  4C 81 00 20 /	blelr 
* 000738D4  90 06 1B 00 /	stw r0, 0x1b00(r6)
* 000738D8  4E 80 00 20 /	blr 

*/