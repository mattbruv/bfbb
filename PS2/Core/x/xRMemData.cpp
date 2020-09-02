typedef struct RyzMemGrow;
typedef struct xBase;
typedef struct xLinkAsset;

typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[4];

struct RyzMemGrow
{
	int flg_grow;
	int amt;
	char* ptr;
	xBase* user;
	int amt_last;
	char* ptr_last;
	xBase* user_last;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_0 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

unsigned int g_total_alloc;
unsigned int gActiveHeap;

void Done(RyzMemGrow* this);
RyzMemGrow* Resume(RyzMemGrow* this);
RyzMemGrow* Init(RyzMemGrow* this, xBase* growuser);
void __dl();
void* __nw(unsigned int amt, RyzMemGrow* growCtxt);

// Done__10RyzMemGrowFv
// Start address: 0x2f2e30
void Done(RyzMemGrow* this)
{
}

// Resume__10RyzMemGrowFP5xBase
// Start address: 0x2f2e60
RyzMemGrow* Resume(RyzMemGrow* this)
{
}

// Init__10RyzMemGrowFP5xBase
// Start address: 0x2f2e90
RyzMemGrow* Init(RyzMemGrow* this, xBase* growuser)
{
}

// __dl__10RyzMemDataFPv
// Start address: 0x2f2f10
void __dl()
{
}

// __nw__10RyzMemDataFUiiP10RyzMemGrow
// Start address: 0x2f2f20
void* __nw(unsigned int amt, RyzMemGrow* growCtxt)
{
	void* mem;
	int dogrow;
}

