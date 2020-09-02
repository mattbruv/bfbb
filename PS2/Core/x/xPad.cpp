typedef struct _tagxPad;
typedef struct _tagxRumble;
typedef struct xVec2;
typedef enum _tagPadState;
typedef struct _tagPadAnalog;
typedef struct _tagiPad;
typedef enum _tagRumbleType;
typedef struct analog_data;


typedef analog_data type_0[2];
typedef _tagxPad type_1[4];
typedef unsigned char type_2[22];
typedef unsigned char type_3[22];
typedef float type_4[22];
typedef float type_5[22];
typedef _tagxRumble type_6[32];

struct _tagxPad
{
	type_2 value;
	type_3 last_value;
	unsigned int on;
	unsigned int pressed;
	unsigned int released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	unsigned int flags;
	_tagxRumble rumble_head;
	short port;
	short slot;
	_tagiPad context;
	float al2d_timer;
	float ar2d_timer;
	float d_timer;
	type_4 up_tmr;
	type_5 down_tmr;
	type_0 analog;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xVec2
{
	float x;
	float y;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct _tagiPad
{
	int port;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

type_6 mRumbleList;
type_1 mPad;
_tagxPad* gDebugPad;
_tagxPad* gPlayerPad;

int xPadAddRumble(int idx, _tagRumbleType type, float time, int replace, unsigned int fxflags);
void xPadDestroyRumbleChain(int idx);
void xPadKill();
void xPadNormalizeAnalog(_tagxPad& pad, int inner_zone, int outer_zone);
int xPadUpdate(int idx, float time_passed);
void xPadRumbleEnable(int idx, int enable);
_tagxPad* xPadEnable(int idx);
int xPadInit();

// xPadAddRumble__Fi14_tagRumbleTypefiUi
// Start address: 0x1f3400
int xPadAddRumble(int idx, _tagRumbleType type, float time, int replace, unsigned int fxflags)
{
	int appended;
	_tagxPad* pad;
	_tagxRumble* r;
	_tagxRumble* last_r;
}

// xPadDestroyRumbleChain__Fi
// Start address: 0x1f35c0
void xPadDestroyRumbleChain(int idx)
{
}

// xPadKill__Fv
// Start address: 0x1f3650
void xPadKill()
{
}

// xPadNormalizeAnalog__FR8_tagxPadii
// Start address: 0x1f3660
void xPadNormalizeAnalog(_tagxPad& pad, int inner_zone, int outer_zone)
{
	_tagPadAnalog* src;
	int i;
}

// xPadUpdate__Fif
// Start address: 0x1f3910
int xPadUpdate(int idx, float time_passed)
{
	unsigned int new_on;
	_tagxPad* p;
	_tagxRumble* r;
	int ret;
	unsigned int fake_dpad;
	int i;
}

// xPadRumbleEnable__Fii
// Start address: 0x1f3fa0
void xPadRumbleEnable(int idx, int enable)
{
	_tagxPad* p;
}

// xPadEnable__Fi
// Start address: 0x1f4080
_tagxPad* xPadEnable(int idx)
{
	_tagxPad* p;
}

// xPadInit__Fv
// Start address: 0x1f4190
int xPadInit()
{
}

