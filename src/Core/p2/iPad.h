#ifndef IPAD_H
#define IPAD_H

#include <types.h>

#include "../x/xVec3.h"

enum _tagTRCState
{
    TRC_Unknown,
    TRC_PadMissing,
    TRC_PadInserted,
    TRC_PadInvalidNoAnalog,
    TRC_PadInvalidType,
    TRC_DiskNotIdentified,
    TRC_DiskIdentified,
    TRC_DiskTrayOpen,
    TRC_DiskTrayClosed,
    TRC_DiskNoDisk,
    TRC_DiskInvalid,
    TRC_DiskRetry,
    TRC_DiskFatal,
    TRC_Total
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct _tagiTRCPadInfo
{
    _tagPadInit pad_init;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
    int32 id;
    _tagTRCState state;
};

enum _tagPadState
{
    ePad_Disabled,
    ePad_DisabledError,
    ePad_Enabled,
    ePad_Missing,
    ePad_Total
};

enum _tagRumbleType
{
    eRumble_Off,
    eRumble_Hi,
    eRumble_VeryLightHi,
    eRumble_VeryLight,
    eRumble_LightHi,
    eRumble_Light,
    eRumble_MediumHi,
    eRumble_Medium,
    eRumble_HeavyHi,
    eRumble_Heavy,
    eRumble_VeryHeavyHi,
    eRumble_VeryHeavy,
    eRumble_Total,
    eRumbleForceU32 = 0x7fffffff
};

struct _tagiPad
{
    int32 port;
};

struct _tagxRumble
{
    _tagRumbleType type;
    float32 seconds;
    _tagxRumble* next;
    int16 active;
    uint16 fxflags;
};

struct _tagPadAnalog
{
    int8 x;
    int8 y;
};

struct analog_data
{
    xVec2 offset;
    xVec2 dir;
    float32 mag;
    float32 ang;
};

struct _tagxPad
{
    uint8 value[22];
    uint8 last_value[22];
    uint32 on;
    uint32 pressed;
    uint32 released;
    _tagPadAnalog analog1;
    _tagPadAnalog analog2;
    _tagPadState state;
    uint32 flags;
    _tagxRumble rumble_head;
    int16 port;
    int16 slot;
    _tagiPad context;
    float32 al2d_timer;
    float32 ar2d_timer;
    float32 d_timer;
    float32 up_tmr[22];
    float32 down_tmr[22];
    analog_data analog[2];
};

#endif