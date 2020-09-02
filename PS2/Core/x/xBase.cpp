typedef struct xBaseAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xLinkAsset;

typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[4];

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct st_SERIAL_CLIENTINFO
{
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


void xBaseReset(xBase* xb, xBaseAsset* asset);
void xBaseLoad(xBase* ent, xSerial* s);
void xBaseSave(xBase* ent, xSerial* s);
void xBaseSetup();
void xBaseInit(xBase* xb, xBaseAsset* asset);

// xBaseReset__FP5xBaseP10xBaseAsset
// Start address: 0x1bf690
void xBaseReset(xBase* xb, xBaseAsset* asset)
{
}

// xBaseLoad__FP5xBaseP7xSerial
// Start address: 0x1bf6c0
void xBaseLoad(xBase* ent, xSerial* s)
{
	int b;
}

// xBaseSave__FP5xBaseP7xSerial
// Start address: 0x1bf720
void xBaseSave(xBase* ent, xSerial* s)
{
}

// xBaseSetup__FP5xBase
// Start address: 0x1bf770
void xBaseSetup()
{
}

// xBaseInit__FP5xBaseP10xBaseAsset
// Start address: 0x1bf780
void xBaseInit(xBase* xb, xBaseAsset* asset)
{
}

