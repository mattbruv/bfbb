typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct _xCounter;
typedef struct xCounterAsset;
typedef struct xBaseAsset;
typedef struct st_SERIAL_CLIENTINFO;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_2)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_1[4];
typedef char type_3[16];
typedef char type_4[16];

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_1 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
};

struct xSerial
{
	unsigned int idtag;
	int baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int warned;
	int curele;
	int bitidx;
	int bittally;
};

struct _xCounter : xBase
{
	xCounterAsset* asset;
	short count;
	unsigned char state;
	unsigned char counterFlags;
};

struct xCounterAsset : xBaseAsset
{
	short count;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct st_SERIAL_CLIENTINFO
{
};

type_3 buffer;
type_4 buffer;
type_0 xCounterEventCB;

int xCounterEventCB(xBase* to, unsigned int toEvent);
void xCounterLoad(_xCounter* ent, xSerial* s);
void xCounterSave(_xCounter* ent, xSerial* s);
void xCounterReset(xBase* b);
void xCounterInit(void* b, void* asset);
void xCounterInit();

// xCounterEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29e5e0
int xCounterEventCB(xBase* to, unsigned int toEvent)
{
	_xCounter* t;
	short newCount;
}

// xCounterLoad__FP9_xCounterP7xSerial
// Start address: 0x29e7a0
void xCounterLoad(_xCounter* ent, xSerial* s)
{
}

// xCounterSave__FP9_xCounterP7xSerial
// Start address: 0x29e7f0
void xCounterSave(_xCounter* ent, xSerial* s)
{
}

// xCounterReset__FP5xBase
// Start address: 0x29e840
void xCounterReset(xBase* b)
{
	_xCounter* t;
}

// xCounterInit__FPvPv
// Start address: 0x29e8a0
void xCounterInit(void* b, void* asset)
{
}

// xCounterInit__Fv
// Start address: 0x29e920
void xCounterInit()
{
}

