typedef struct xBase;
typedef struct xLinkAsset;
typedef struct zCameraTweak;
typedef struct CameraTweak_asset;
typedef struct xDynAsset;
typedef struct zCamTweak;
typedef struct zCamTweakLook;
typedef struct xSerial;
typedef struct xBaseAsset;

typedef int(*type_4)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_6)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[2];
typedef float type_1[4];
typedef char type_2[16];
typedef char type_3[16];
typedef float type_5[2];
typedef zCamTweak type_7[8];

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_1 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct zCameraTweak : xBase
{
	CameraTweak_asset* casset;
};

struct CameraTweak_asset : xDynAsset
{
	int priority;
	float time;
	float pitch_adjust;
	float dist_adjust;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct zCamTweak
{
	unsigned int owner;
	float priority;
	float time;
	float pitch;
	float distMult;
};

struct zCamTweakLook
{
	float h;
	float dist;
	float pitch;
};

struct xSerial
{
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

type_2 buffer;
type_3 buffer;
int sCamTweakCount;
type_7 sCamTweakList;
float sCamTweakLerp;
float sCamTweakTime;
type_0 sCamTweakPitch;
type_5 sCamTweakDistMult;
float sCamTweakPitchCur;
float sCamTweakDistMultCur;
float sCamD;
float sCamH;
float sCamPitch;
zCamTweakLook zcam_neartweak;
zCamTweakLook zcam_fartweak;
type_6 zCameraTweak_EventCB;
int zcam_near;
float zcam_far_d;
float zcam_far_h;
float zcam_far_pitch;
float zcam_near_d;
float zcam_near_h;
float zcam_near_pitch;

int zCameraTweak_EventCB(xBase* to, unsigned int toEvent);
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s);
void zCameraTweak_Init(xBase& data, xDynAsset& asset);
float zCameraTweakGlobal_GetPitch();
float zCameraTweakGlobal_GetH();
float zCameraTweakGlobal_GetD();
void zCameraTweakGlobal_Update(float dt);
void zCameraTweakGlobal_Reset();
void zCameraTweakGlobal_Remove(unsigned int owner);
void zCameraTweakGlobal_Add(unsigned int owner, float priority, float time, float pitch, float distMult);
void zCameraTweakGlobal_Init();

// zCameraTweak_EventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x3b33b0
int zCameraTweak_EventCB(xBase* to, unsigned int toEvent)
{
	zCameraTweak* tweak;
}

// zCameraTweak_Load__FP12zCameraTweakP7xSerial
// Start address: 0x3b3470
void zCameraTweak_Load(zCameraTweak* tweak, xSerial* s)
{
}

// zCameraTweak_Save__FP12zCameraTweakP7xSerial
// Start address: 0x3b3480
void zCameraTweak_Save(zCameraTweak* tweak, xSerial* s)
{
}

// zCameraTweak_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x3b3490
void zCameraTweak_Init(xBase& data, xDynAsset& asset)
{
}

// zCameraTweakGlobal_GetPitch__Fv
// Start address: 0x3b34f0
float zCameraTweakGlobal_GetPitch()
{
}

// zCameraTweakGlobal_GetH__Fv
// Start address: 0x3b3500
float zCameraTweakGlobal_GetH()
{
}

// zCameraTweakGlobal_GetD__Fv
// Start address: 0x3b3510
float zCameraTweakGlobal_GetD()
{
}

// zCameraTweakGlobal_Update__Ff
// Start address: 0x3b3520
void zCameraTweakGlobal_Update(float dt)
{
	zCamTweakLook* tlook;
}

// zCameraTweakGlobal_Reset__Fv
// Start address: 0x3b3620
void zCameraTweakGlobal_Reset()
{
}

// zCameraTweakGlobal_Remove__FUi
// Start address: 0x3b3660
void zCameraTweakGlobal_Remove(unsigned int owner)
{
	int i;
	int j;
}

// zCameraTweakGlobal_Add__FUiffff
// Start address: 0x3b3790
void zCameraTweakGlobal_Add(unsigned int owner, float priority, float time, float pitch, float distMult)
{
	int i;
	int j;
}

// zCameraTweakGlobal_Init__Fv
// Start address: 0x3b39b0
void zCameraTweakGlobal_Init()
{
}

