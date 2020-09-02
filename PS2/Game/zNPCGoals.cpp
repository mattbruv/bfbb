typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct xBase;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xLinkAsset;
typedef struct RyzMemData;
typedef struct xFactory;

typedef xFactoryInst*(*type_0)(int, RyzMemGrow*, void*);
typedef void(*type_1)(xFactoryInst*);
typedef int(*type_2)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef char type_3[16];
typedef char type_4[16];
typedef float type_5[4];
typedef XGOFTypeInfo type_6[179];

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

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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

struct XGOFTypeInfo
{
	int tid;
	type_0 creator;
	type_1 destroyer;
};

struct st_XORDEREDARRAY
{
	void** list;
	int cnt;
	int max;
	int warnlvl;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_5 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RyzMemData
{
};

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;
};

type_3 buffer;
type_4 buffer;

void zNPCGoals_RegisterTypes(xFactory* fac);

// zNPCGoals_RegisterTypes__FP8xFactory
// Start address: 0x2c5ce0
void zNPCGoals_RegisterTypes(xFactory* fac)
{
	type_6 typelist;
}

