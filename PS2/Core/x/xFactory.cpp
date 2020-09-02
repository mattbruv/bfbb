typedef struct xFactory;
typedef struct XGOFTypeInfo;
typedef struct st_XORDEREDARRAY;
typedef struct xFactoryInst;
typedef struct xBase;
typedef struct RyzMemData;
typedef struct RyzMemGrow;

typedef int(*type_1)(void*, void*);
typedef xFactoryInst*(*type_2)(int, RyzMemGrow*, void*);
typedef void(*type_3)(xFactoryInst*);
typedef int(*type_4)(void*, void*);

typedef XGOFTypeInfo type_0[2];

struct xFactory : RyzMemData
{
	XGOFTypeInfo* infopool;
	st_XORDEREDARRAY infolist;
	xFactoryInst* products;
	RyzMemGrow growContextData;
};

struct XGOFTypeInfo
{
	int tid;
	type_2 creator;
	type_3 destroyer;
};

struct st_XORDEREDARRAY
{
	void** list;
	int cnt;
	int max;
	int warnlvl;
};

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xBase
{
};

struct RyzMemData
{
};

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

type_1 OrdTest_infotype;
type_4 OrdComp_infotype;
unsigned int gActiveHeap;

int OrdComp_infotype(void* vkey, void* vitem);
int OrdTest_infotype(void* vkey, void* vitem);
void DestroyItem(xFactory* this, xFactoryInst* item);
void DestroyAll(xFactory* this);
xFactoryInst* CreateItem(xFactory* this, int typeID, void* userdata, RyzMemGrow* callerzgrow);
void GrowDataDisable(xFactory* this);
void GrowDataEnable(xFactory* this, xBase* user, int isResume);
int RegItemType(xFactory* this, int tid, type_2 create, type_3 destroy);
int RegItemType(xFactory* this, XGOFTypeInfo* info);
void* __dt(xFactory* this);
void* __ct(xFactory* this, int maxTypes);

// OrdComp_infotype__FPvPv
// Start address: 0x2f1db0
int OrdComp_infotype(void* vkey, void* vitem)
{
	int rc;
}

// OrdTest_infotype__FPCvPv
// Start address: 0x2f1e00
int OrdTest_infotype(void* vkey, void* vitem)
{
	int rc;
}

// DestroyItem__8xFactoryFP12xFactoryInst
// Start address: 0x2f1e50
void DestroyItem(xFactory* this, xFactoryInst* item)
{
	int idx;
	XGOFTypeInfo pattern;
}

// DestroyAll__8xFactoryFv
// Start address: 0x2f1f40
void DestroyAll(xFactory* this)
{
}

// CreateItem__8xFactoryFiPvP10RyzMemGrow
// Start address: 0x2f1f80
xFactoryInst* CreateItem(xFactory* this, int typeID, void* userdata, RyzMemGrow* callerzgrow)
{
	int idx;
	xFactoryInst* item;
	XGOFTypeInfo pattern;
	XGOFTypeInfo* darec;
	RyzMemGrow* grow;
}

// GrowDataDisable__8xFactoryFv
// Start address: 0x2f20d0
void GrowDataDisable(xFactory* this)
{
}

// GrowDataEnable__8xFactoryFP5xBasei
// Start address: 0x2f20e0
void GrowDataEnable(xFactory* this, xBase* user, int isResume)
{
}

// RegItemType__8xFactoryFiPFiP10RyzMemGrowPv_P12xFactoryInstPFP12xFactoryInst_v
// Start address: 0x2f2120
int RegItemType(xFactory* this, int tid, type_2 create, type_3 destroy)
{
	type_0 typerec;
}

// RegItemType__8xFactoryFP12XGOFTypeInfo
// Start address: 0x2f2170
int RegItemType(xFactory* this, XGOFTypeInfo* info)
{
	int rc;
	XGOFTypeInfo* tptr;
	XGOFTypeInfo* nextrec;
	int idx;
}

// __dt__8xFactoryFv
// Start address: 0x2f2280
void* __dt(xFactory* this)
{
}

// __ct__8xFactoryFi
// Start address: 0x2f22e0
void* __ct(xFactory* this, int maxTypes)
{
	unsigned int amt;
}

