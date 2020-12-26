#include <types.h>
#include <dolphin.h>

#include "iPad.h"
#include "../../Game/zGlobals.h"

extern zGlobals globals;
extern _tagTRCPadInfo gTrcPad[4];

extern float32 iPad_float_40;
extern float32 iPad_float_minus_40;
extern float32 iPad_float_3_2;
extern float32 iPad_float_127;
extern float32 iPad_float_minus_127; // maybe double?

int32 iPadInit()
{
    PADInit();
    return 1;
}

_tagxPad* iPadEnable(_tagxPad* pad, int16 port)
{
    pad->port = port;
    pad->slot = 0;
    pad->state = ePad_Enabled;
    gTrcPad[pad->port].state = TRC_PadInserted;
    pad->flags |= 3;
    pad->flags |= 4;
}

// func_800CA98C
#if 0
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadConvStick__Ff")
#else
int32 iPadConvStick(float32 param_1)
{
    float32 f0 = iPad_float_40;
    if (param_1 > f0)
    {
        f0 = param_1;
        //param_1 = f0;
    }
    else if (param_1 < iPad_float_minus_40)
    {
        f0 = iPad_float_minus_40;
    }
    f0 *= iPad_float_3_2;

    float32 f2 = iPad_float_127;
    if (f0 > f2)
    {
        f2 = f0;
    }
    else if (f0 < iPad_float_minus_127)
    {
        f2 = iPad_float_minus_127;
    }

    return (int32)f2;

    // Size=104
    /*
    f0 = iPad_float_40; // [float32]
    fcmpo cr0, f1, f0
    ble lbl_800CA9A4
    f1 = f0;
    b lbl_800CA9B4
lbl_800CA9A4:
    f0 = iPad_float_minus_40; // [float32]
    fcmpo cr0, f1, f0
    bge lbl_800CA9B4
    f1 = f0;
lbl_800CA9B4:
    f2 = iPad_float_3_2; // [float32]
    f0 = iPad_float_127; // [float32]
    fmuls f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_800CA9D0
    f1 = f0;
    b lbl_800CA9E0
lbl_800CA9D0:
    f0 = iPad_float_minus_127; // [float32]
    fcmpo cr0, f1, f0
    bge lbl_800CA9E0
    f1 = f0;
lbl_800CA9E0:
    fctiwz f0, f1
    */
}
#endif

// func_800CA9F4
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadUpdate__FP8_tagxPadPUi")

int32 iPadConvFromGCN(uint32 a, uint32 b, uint32 c)
{
    // TODO: this can probably be simplified,
    // basically a copy of ghidra's output
    return c & (int32)(-(a & b) | a & b) >> 0x1f;
}

void iPadRumbleFx(_tagxPad* p, _tagxRumble* r, float32 time_passed)
{
}

void iPadStopRumble(_tagxPad* pad)
{
    PADControlMotor(pad->port, 0);
}

// func_800CAE7C
#if 1
#pragma GLOBAL_ASM("asm/Core/p2/iPad.s", "iPadStopRumble__Fv")
#else
void iPadStopRumble()
{
    // appears to be correct, but the wrong registers are used
    PADControlMotor(mPad[globals.currentActivePad].port, 0);
}
#endif

void iPadStartRumble(_tagxPad* pad, _tagxRumble* rumble)
{
    PADControlMotor(pad->port, 1);
}

void iPadKill()
{
}
