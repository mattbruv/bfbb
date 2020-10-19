#include <types.h>
#include "zGlobals.h"

#include "zEntTeleportBox.h"

#pragma section RX ".romsymbols" data_mode = far_abs
__declspec(section ".romsymbols") uint32 MattCallback();

extern zGlobals globals;

uint32 MattCallback()
{
    if (globals.player.cheat_mode)
    {
        return false;
    }

    if (zEntTeleportBox_playerIn())
    {
        // return false;
    }

    bool canBowl = false;

    if (!globals.player.ControlOff && (globals.pad0->pressed & 0x20000) &&
        globals.player.g.PowerUp[0])
    {
        canBowl = true;
    }

    globals.player.Inv_Shiny++;
    if (globals.player.Inv_Shiny > 20)
    {
        globals.player.Inv_Shiny = 0;
    }

    return canBowl;
}