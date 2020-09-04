#include "zEntPlayer.h"

extern zGlobals lbl_globals;



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