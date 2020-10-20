#include <types.h>
#include "zGlobals.h"

#include "zEntTeleportBox.h"

#pragma section RX ".romsymbols" data_mode = far_abs
__declspec(section ".romsymbols") uint32 MattCallback();

enum state_enum
{
    STATE_INVALID = 3259,
    BEGIN_STATE,
    STATE_IN = 0,
    STATE_OUT,
    STATE_GRAB,
    STATE_DROP,
    END_STATE,
    MAX_STATE = 0x4
};

struct state_type
{
    state_enum type;
};

struct _class_9
{
    int32 flags;
    state_type* state;
    uint8 control;
    state_type* states[4];
    float32 out_time;
    float32 max_out_time;
    float32 reset_time;
    xModelInstance* model;
    xVec2 loc;
    xVec2 dir;
    float32 fade_alpha;
    uint8 render_hand;
    uint8 vertical;
    float32 vel;
    float32 accel;
};

extern zGlobals globals;
extern uint8 oob_player_teleported;
extern _class_9 oob_shared;

#define BUTTON_A (1 << 16)
#define BUTTON_B (1 << 17)
#define LEFT_ANALOG (1 << 8)

extern int32 zEntPlayer_Damage(xBase* src, uint32 damage);

uint32 MattCallback()
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
    /*
    struct _class_9
    */
    // if flags are 3, then hand grabs spongebob.
    // if flags are 7, he is ignored by the hand.

    // determine left analog button, and if pressed return false
    // globals.player.Inv_Spatula = oob_shared.flags;
    // globals.player.Inv_Shiny = oob_shared.flags;

    if (!globals.player.ControlOff && oob_shared.flags & 0b100)
    {
        zEntPlayer_Damage(NULL, 100);
        oob_shared.flags ^= 1 << 2;
    }

    uint32 pad = globals.pad0->pressed;

    /*
    for (uint32 i = 0; i < 32; i++)
    {
        if (pad & (1 << i))
        {
            globals.player.Inv_Spatula = i;
        }
    }
    */

    if (!globals.player.ControlOff && (globals.pad0->pressed & 0x20000) &&
        globals.player.g.PowerUp[0])
    {
        if (globals.pad0->pressed & LEFT_ANALOG)
        {
            zEntPlayer_Damage(NULL, 1);
            return false;
        }

        canBowl = true;
    }

    return canBowl;
}