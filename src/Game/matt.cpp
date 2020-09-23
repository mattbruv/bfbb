

#include "zEntPlayer.h"

extern zGlobals lbl_globals;

#pragma section RX ".romsymbols" data_mode=far_abs
__declspec(section ".romsymbols") void mattFunc(int quantity); //Function Prototype
extern void foo(int quantity);

void mattFunc(int quantity) {
    lbl_globals.player.Inv_Shiny = 69420;
    //return;
}