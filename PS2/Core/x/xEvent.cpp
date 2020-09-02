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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_2 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

type_4 buffer;
type_6 buffer;
type_7 zEventLogBuf;
int zEventLogBufInit;

void zEntEvent(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget, int forceEvent);
void zEntEvent(xBase* from, xBase* to, unsigned int toEvent, float* toParam);
void zEntEvent(xBase* from, xBase* to, unsigned int toEvent);
void zEntEvent(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget);
void zEntEvent(xBase* to, unsigned int toEvent, float* toParam);
void zEntEvent(xBase* to, unsigned int toEvent, float toParam0, float toParam1, float toParam2, float toParam3);
void zEntEvent(xBase* to, unsigned int toEvent);
void zEntEvent(unsigned int toID, unsigned int toEvent, float toParam0, float toParam1, float toParam2, float toParam3);
void zEntEvent(unsigned int toID, unsigned int toEvent);
void zEntEvent(char* to, unsigned int toEvent);

// zEntEvent__FP5xBaseUiP5xBaseUiPCfP5xBasei
// Start address: 0x2832c0
void zEntEvent(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget, int forceEvent)
{
	xLinkAsset* idx;
	int i;
	xBase* sendTo;
	xBase* b;
}

// zEntEvent__FP5xBaseP5xBaseUiPCf
// Start address: 0x283460
void zEntEvent(xBase* from, xBase* to, unsigned int toEvent, float* toParam)
{
}

// zEntEvent__FP5xBaseP5xBaseUi
// Start address: 0x283480
void zEntEvent(xBase* from, xBase* to, unsigned int toEvent)
{
}

// zEntEvent__FP5xBaseUiPCfP5xBase
// Start address: 0x2834a0
void zEntEvent(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
}

// zEntEvent__FP5xBaseUiPCf
// Start address: 0x2834c0
void zEntEvent(xBase* to, unsigned int toEvent, float* toParam)
{
}

// zEntEvent__FP5xBaseUiffff
// Start address: 0x2834e0
void zEntEvent(xBase* to, unsigned int toEvent, float toParam0, float toParam1, float toParam2, float toParam3)
{
	type_0 toParam;
}

// zEntEvent__FP5xBaseUi
// Start address: 0x283530
void zEntEvent(xBase* to, unsigned int toEvent)
{
}

// zEntEvent__FUiUiffff
// Start address: 0x283550
void zEntEvent(unsigned int toID, unsigned int toEvent, float toParam0, float toParam1, float toParam2, float toParam3)
{
	xBase* sendTo;
	type_1 toParam;
}

// zEntEvent__FUiUi
// Start address: 0x2835b0
void zEntEvent(unsigned int toID, unsigned int toEvent)
{
	xBase* sendTo;
}

// zEntEvent__FPcUi
// Start address: 0x283600
void zEntEvent(char* to, unsigned int toEvent)
{
	unsigned int id;
	xBase* sendTo;
}

