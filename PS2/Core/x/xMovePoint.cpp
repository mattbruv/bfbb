typedef struct xLinkAsset;
typedef struct xMovePoint;
typedef struct xMovePointAsset;
typedef struct xEnt;
typedef struct xBaseAsset;
typedef struct xVec3;
typedef struct xEnv;
typedef struct xSerial;
typedef struct xCoef;
typedef struct xSpline3;
typedef struct xCoef3;
typedef struct xScene;
typedef struct xMemPool;
typedef struct xBase;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef xBase*(*type_1)(unsigned int);
typedef char*(*type_2)(xBase*);
typedef char*(*type_3)(unsigned int);
typedef void(*type_6)(xMemPool*, void*);

typedef float type_4[4];
typedef unsigned char type_5[2];
typedef float type_7[4];
typedef xVec3 type_8[2];

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_7 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_5 pad;
	float delay;
	xSpline3* spl;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	unsigned short wt;
	unsigned char on;
	unsigned char bezIndex;
	unsigned char flg_props;
	unsigned char pad;
	unsigned short numPoints;
	float delay;
	float zoneRadius;
	float arenaRadius;
};

struct xEnt
{
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xEnv
{
};

struct xSerial
{
};

struct xCoef
{
	type_4 a;
};

struct xSpline3
{
	unsigned short type;
	unsigned short flags;
	unsigned int N;
	unsigned int allocN;
	xVec3* points;
	float* time;
	xVec3* p12;
	xVec3* bctrl;
	float* knot;
	xCoef3* coef;
	unsigned int arcSample;
	float* arcLength;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xScene
{
	unsigned int sceneID;
	unsigned short flags;
	unsigned short num_ents;
	unsigned short num_trigs;
	unsigned short num_stats;
	unsigned short num_dyns;
	unsigned short num_npcs;
	unsigned short num_act_ents;
	unsigned short num_nact_ents;
	float gravity;
	float drag;
	float friction;
	unsigned short num_ents_allocd;
	unsigned short num_trigs_allocd;
	unsigned short num_stats_allocd;
	unsigned short num_dyns_allocd;
	unsigned short num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	type_1 resolvID;
	type_2 base2Name;
	type_3 id2Name;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_6 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

unsigned int gActiveHeap;

xVec3* xMovePointGetPos(xMovePoint* m);
float xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng);
void xMovePointSplineDestroy(xMovePoint* m);
void xMovePointSplineSetup(xMovePoint* m);
void xMovePointSetup(xMovePoint* m, xScene* sc);
void xMovePointReset(xMovePoint* m);
void xMovePointLoad(xMovePoint* ent, xSerial* s);
void xMovePointSave(xMovePoint* ent, xSerial* s);
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset);

// xMovePointGetPos__FPC10xMovePoint
// Start address: 0x1f2870
xVec3* xMovePointGetPos(xMovePoint* m)
{
}

// xMovePointGetNext__FPC10xMovePointPC10xMovePointPP10xMovePointP5xVec3
// Start address: 0x1f2880
float xMovePointGetNext(xMovePoint* m, xMovePoint* prev, xMovePoint** next, xVec3* hdng)
{
	int rnd;
	unsigned short idx;
	xMovePoint* previousOption;
}

// xMovePointSplineDestroy__FP10xMovePoint
// Start address: 0x1f2ab0
void xMovePointSplineDestroy(xMovePoint* m)
{
}

// xMovePointSplineSetup__FP10xMovePoint
// Start address: 0x1f2ad0
void xMovePointSplineSetup(xMovePoint* m)
{
	xMovePoint* w0;
	xMovePoint* w2;
	xMovePoint* w3;
	type_8 points;
	xVec3 p1;
	xVec3 p2;
}

// xMovePointSetup__FP10xMovePointP6xScene
// Start address: 0x1f2cc0
void xMovePointSetup(xMovePoint* m, xScene* sc)
{
	unsigned int* id;
	unsigned short idx;
}

// xMovePointReset__FP10xMovePoint
// Start address: 0x1f2d90
void xMovePointReset(xMovePoint* m)
{
}

// xMovePointLoad__FP10xMovePointP7xSerial
// Start address: 0x1f2dd0
void xMovePointLoad(xMovePoint* ent, xSerial* s)
{
}

// xMovePointSave__FP10xMovePointP7xSerial
// Start address: 0x1f2de0
void xMovePointSave(xMovePoint* ent, xSerial* s)
{
}

// xMovePointInit__FP10xMovePointP15xMovePointAsset
// Start address: 0x1f2df0
void xMovePointInit(xMovePoint* m, xMovePointAsset* asset)
{
}

