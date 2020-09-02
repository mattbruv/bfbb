typedef struct xAnimEffect;
typedef struct xAnimPlay;
typedef struct xAnimState;
typedef struct xAnimSingle;
typedef struct xQuat;
typedef struct xVec3;
typedef struct xAnimTable;
typedef struct xMemPool;
typedef struct xModelInstance;
typedef struct xAnimTransition;
typedef struct zAnimListAsset;
typedef struct xAnimFile;
typedef struct xAnimTransitionList;
typedef struct st_PACKER_ASSETTYPE;
typedef struct xAnimMultiFile;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xAnimMultiFileBase;
typedef struct st_PKR_ASSET_TOCINFO;

typedef void(*type_0)(xAnimPlay*, xAnimState*);
typedef int(*type_1)(void*, unsigned int, void*, int);
typedef unsigned int(*type_2)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_3)(void*, unsigned int);
typedef unsigned int(*type_4)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void*(*type_7)(void*, unsigned int, void*, int*, int*);
typedef void(*type_9)(void*, unsigned int, void*);
typedef unsigned int(*type_10)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_12)(xMemPool*, void*);
typedef void*(*type_13)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef void*(*type_14)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef void(*type_15)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_16)(void*, unsigned int, void*, char*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);

typedef char type_5[16];
typedef char type_8[16];
typedef unsigned int type_11[10];
typedef float type_17[2];
typedef unsigned char type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef char* type_21[20];

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_2 Callback;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	unsigned short NumSingle;
	unsigned short BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_6 BeforeAnimMatrices;
};

struct xAnimState
{
	xAnimState* Next;
	char* Name;
	unsigned int ID;
	unsigned int Flags;
	unsigned int UserFlags;
	float Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float* BoneBlend;
	float* TimeSnap;
	float FadeRecip;
	unsigned short* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_0 BeforeEnter;
	type_15 StateCallback;
	type_6 BeforeAnimMatrices;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_17 BilinearLerp;
	xAnimEffect* Effect;
	unsigned int ActiveCount;
	float LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float BlendFactor;
	unsigned int pad;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xAnimTable
{
	xAnimTable* Next;
	char* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	unsigned int AnimIndex;
	unsigned int MorphIndex;
	unsigned int UserFlags;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_12 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xModelInstance
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_10 Conditional;
	type_10 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct zAnimListAsset
{
	type_11 ids;
};

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_18 NumAnims;
	void** RawData;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_13 readXForm;
	type_14 writeXForm;
	type_1 assetLoaded;
	type_7 makeData;
	type_9 cleanup;
	type_3 assetUnloaded;
	type_16 writePeek;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_19 Files;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct st_PKR_ASSET_TOCINFO
{
	unsigned int aid;
	st_PACKER_ASSETTYPE* typeref;
	unsigned int sector;
	unsigned int plus_offset;
	unsigned int size;
	void* mempos;
};

type_5 buffer;
type_8 buffer;
int nals;
unsigned int* aids;
xAnimTable** atbls;
int* anused;
type_21 astnames;
type_20 xAnimDefaultBeforeEnter;
type_4 AlwaysConditional;
unsigned int gActiveHeap;

int zAnimListGetNumUsed(unsigned int id);
xAnimTable* zAnimListGetTable(unsigned int id);
void zAnimListExit();
void zAnimListInit();
unsigned int AlwaysConditional();

// zAnimListGetNumUsed__FUi
// Start address: 0x129e50
int zAnimListGetNumUsed(unsigned int id)
{
	int i;
}

// zAnimListGetTable__FUi
// Start address: 0x129eb0
xAnimTable* zAnimListGetTable(unsigned int id)
{
	int i;
}

// zAnimListExit__Fv
// Start address: 0x129f10
void zAnimListExit()
{
}

// zAnimListInit__Fv
// Start address: 0x129f30
void zAnimListInit()
{
	int i;
	unsigned int size;
	zAnimListAsset* zala;
	st_PKR_ASSET_TOCINFO ainfo;
	xAnimTable* atbl;
	void* buf;
	xAnimFile* afile;
	int idle_exists;
	int j;
	xAnimFile* afile;
}

// AlwaysConditional__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x12a2f0
unsigned int AlwaysConditional()
{
}

