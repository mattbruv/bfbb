typedef struct xBaseAsset;
typedef struct _zConditional;
typedef struct zVarEntry;
typedef struct xBase;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xLinkAsset;
typedef struct xSerial;
typedef struct zCondAsset;

typedef unsigned int(*type_0)(void*);
typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_4)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef zVarEntry type_2[0];
typedef float type_3[4];

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct _zConditional : xBase
{
	zCondAsset* asset;
};

struct zVarEntry
{
	unsigned int entry;
	unsigned int varNameID;
	char* varName;
	type_0 varCB;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct st_SERIAL_CLIENTINFO
{
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_3 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct zCondAsset : xBaseAsset
{
	unsigned int constNum;
	unsigned int expr1;
	unsigned int op;
	unsigned int value_asset;
};

type_2 zVarEntryTable;
type_1 zConditionalEventCB;

int zConditionalEventCB(xBase* to, unsigned int toEvent);
unsigned int zConditional_Evaluate(_zConditional* c);
void zConditionalLoad(_zConditional* ent, xSerial* s);
void zConditionalSave(_zConditional* ent, xSerial* s);
void zConditionalInit(void* b, void* asset);

// zConditionalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x12f910
int zConditionalEventCB(xBase* to, unsigned int toEvent)
{
	_zConditional* t;
}

// zConditional_Evaluate__FP13_zConditional
// Start address: 0x12f9c0
unsigned int zConditional_Evaluate(_zConditional* c)
{
	unsigned int temp;
	zVarEntry* v;
	void* context;
	int i;
	unsigned int id;
}

// zConditionalLoad__FP13_zConditionalP7xSerial
// Start address: 0x12fb20
void zConditionalLoad(_zConditional* ent, xSerial* s)
{
}

// zConditionalSave__FP13_zConditionalP7xSerial
// Start address: 0x12fb30
void zConditionalSave(_zConditional* ent, xSerial* s)
{
}

// zConditionalInit__FPvPv
// Start address: 0x12fb40
void zConditionalInit(void* b, void* asset)
{
}

