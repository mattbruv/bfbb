

#include "zEntPlayer.h"

typedef struct xBase;
typedef struct xLinkAsset;

typedef int(*type_3)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[4];
typedef float type_1[4];
typedef float type_2[4];
typedef char type_4[16];
typedef char type_5[256];
typedef char type_6[16];
typedef type_5 type_7[20];

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_3 eventFunc;
};
extern zGlobals lbl_globals;
extern void zMusicSetVolume(float vol, float delay);
extern void zEntPlayer_GiveHealth(int quantity);

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
};

extern _CurrentPlayer lbl_gCurrentPlayer;
void zEntEvent(xBase* to, unsigned int toEvent);

#pragma section RX ".romsymbols" data_mode=far_abs
__declspec(section ".romsymbols") void mattFunc(int quantity); //Function Prototype





// Replaces zEntPlayer_GiveShinyObject
// Runs when game sets player's shinies

void mattFunc(int quantity) {
    lbl_globals.player.Inv_Shiny = 69;
    lbl_globals.player.Inv_Spatula = 420;
    lbl_globals.player.SpeedMult = 7.0;
    zEntPlayer_GiveHealth(-1);
    zMusicSetVolume(0.0, 0.5);
}