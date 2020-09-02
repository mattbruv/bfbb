typedef struct xBaseAsset;
typedef struct xGroup;
typedef struct xGroupAsset;
typedef struct xBase;
typedef struct xSerial;
typedef struct xLinkAsset;

typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_2)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[4];

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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

unsigned int gActiveHeap;
type_2 xGroupEventCB;

unsigned int get_any(xGroup* this);
unsigned int xGroupGetItem(xGroup* g, unsigned int index);
xBase* xGroupGetItemPtr(xGroup* g, unsigned int index);
unsigned int xGroupGetCount(xGroup* g);
int xGroupEventCB(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget);
void xGroupLoad(xGroup* ent, xSerial* s);
void xGroupSave(xGroup* ent, xSerial* s);
void xGroupSetup(xGroup* g);
void xGroupInit(void* b, void* asset);

// get_any__6xGroupFv
// Start address: 0x29faf0
unsigned int get_any(xGroup* this)
{
	unsigned int id;
}

// xGroupGetItem__FP6xGroupUi
// Start address: 0x29fb30
unsigned int xGroupGetItem(xGroup* g, unsigned int index)
{
}

// xGroupGetItemPtr__FP6xGroupUi
// Start address: 0x29fb50
xBase* xGroupGetItemPtr(xGroup* g, unsigned int index)
{
}

// xGroupGetCount__FP6xGroup
// Start address: 0x29fc20
unsigned int xGroupGetCount(xGroup* g)
{
}

// xGroupEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29fc30
int xGroupEventCB(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
	xGroup* g;
	int rand;
	int i;
	xBase* b;
	int i;
	xBase* b;
	int i;
	xBase* b;
}

// xGroupLoad__FP6xGroupP7xSerial
// Start address: 0x29ff00
void xGroupLoad(xGroup* ent, xSerial* s)
{
}

// xGroupSave__FP6xGroupP7xSerial
// Start address: 0x29ff10
void xGroupSave(xGroup* ent, xSerial* s)
{
}

// xGroupSetup__FP6xGroup
// Start address: 0x29ff20
void xGroupSetup(xGroup* g)
{
	unsigned int count;
	unsigned int i;
}

// xGroupInit__FPvPv
// Start address: 0x29ffc0
void xGroupInit(void* b, void* asset)
{
}

