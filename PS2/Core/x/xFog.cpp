typedef struct xSerial;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xFogAsset;
typedef struct _xFog;
typedef struct xLinkAsset;
typedef struct xBaseAsset;
typedef struct iFogParams;
typedef enum RwFogType;

typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_5)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[4];
typedef unsigned char type_2[4];
typedef unsigned char type_3[4];
typedef unsigned char type_4[3];

struct xSerial
{
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
};

struct xFogAsset : xBaseAsset
{
	type_2 bkgndColor;
	type_3 fogColor;
	float fogDensity;
	float fogStart;
	float fogStop;
	float transitionTime;
	unsigned char fogType;
	type_4 padFog;
};

struct _xFog : xBase
{
	xFogAsset* tasset;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_0 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct iFogParams
{
	RwFogType type;
	float start;
	float stop;
	float density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	unsigned char* table;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

type_5 xFogEventCB;

void xFogUpdate();
int xFogEventCB(xBase* to, unsigned int toEvent);
void xFogLoad(_xFog* ent, xSerial* s);
void xFogSave(_xFog* ent, xSerial* s);
void xFogInit(void* b, void* tasset);
void xFogClearFog();

// xFogUpdate__FP5xBaseP6xScenef
// Start address: 0x29ee00
void xFogUpdate()
{
}

// xFogEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29ee10
int xFogEventCB(xBase* to, unsigned int toEvent)
{
	_xFog* t;
	iFogParams fog;
}

// xFogLoad__FP5_xFogP7xSerial
// Start address: 0x29ef20
void xFogLoad(_xFog* ent, xSerial* s)
{
}

// xFogSave__FP5_xFogP7xSerial
// Start address: 0x29ef30
void xFogSave(_xFog* ent, xSerial* s)
{
}

// xFogInit__FPvPv
// Start address: 0x29ef40
void xFogInit(void* b, void* tasset)
{
}

// xFogClearFog__Fv
// Start address: 0x29efb0
void xFogClearFog()
{
}

