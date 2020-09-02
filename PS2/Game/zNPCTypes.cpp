typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xFactory;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct RyzMemData;

typedef xFactoryInst*(*type_0)(int, RyzMemGrow*, void*);
typedef void(*type_1)(xFactoryInst*);
typedef int(*type_5)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef XGOFTypeInfo type_2[71];
typedef float type_3[4];
typedef char type_4[16];
typedef char type_6[16];

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

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
};

struct RyzMemData
{
};

type_4 buffer;
type_6 buffer;

void zNPCTypes_RegisterTypes(xFactory* fac);
void zNPCTypes_ShutdownTypes();
void zNPCTypes_StartupTypes();

// zNPCTypes_RegisterTypes__FP8xFactory
// Start address: 0x2e6800
void zNPCTypes_RegisterTypes(xFactory* fac)
{
	type_2 typelist;
}

// zNPCTypes_ShutdownTypes__Fv
// Start address: 0x2e6850
void zNPCTypes_ShutdownTypes()
{
}

// zNPCTypes_StartupTypes__Fv
// Start address: 0x2e68b0
void zNPCTypes_StartupTypes()
{
}

