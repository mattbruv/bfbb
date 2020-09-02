typedef struct xMemHeap_tag;
typedef struct _tagxPad;
typedef struct xMemBlkInfo_tag;
typedef struct xMemPool;
typedef enum _tagRumbleType;
typedef struct analog_data;
typedef struct _tagiPad;
typedef struct xVec2;
typedef struct xMemBlock_tag;
typedef struct xHeapState_tag;
typedef struct _tagxRumble;
typedef struct xMemArea_tag;
typedef enum _tagPadState;
typedef struct xMemInfo_tag;
typedef struct _tagPadAnalog;

typedef void(*type_3)();
typedef void(*type_7)(xMemPool*, void*);

typedef xMemHeap_tag type_0[3];
typedef float type_1[22];
typedef float type_2[22];
typedef short type_4[2];
typedef xHeapState_tag type_5[12];
typedef analog_data type_6[2];
typedef unsigned int type_8[4096];
typedef unsigned char type_9[22];
typedef unsigned char type_10[22];

struct xMemHeap_tag
{
	unsigned int flags;
	unsigned int hard_base;
	unsigned int size;
	type_4 opp_heap;
	type_5 state;
	unsigned short state_idx;
	unsigned short max_blks;
	xMemBlock_tag* blk;
	xMemBlock_tag* lastblk;
};

struct _tagxPad
{
	type_9 value;
	type_10 last_value;
	unsigned int on;
	unsigned int pressed;
	unsigned int released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	unsigned int flags;
	_tagxRumble rumble_head;
	short port;
	short slot;
	_tagiPad context;
	float al2d_timer;
	float ar2d_timer;
	float d_timer;
	type_1 up_tmr;
	type_2 down_tmr;
	type_6 analog;
};

struct xMemBlkInfo_tag
{
	xMemBlock_tag* header;
	unsigned int pre;
	unsigned int block;
	unsigned int post;
	unsigned int curr;
	unsigned int waste;
	unsigned int total;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_7 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct _tagiPad
{
	int port;
};

struct xVec2
{
	float x;
	float y;
};

struct xMemBlock_tag
{
	unsigned int addr;
	unsigned int size;
	int align;
};

struct xHeapState_tag
{
	unsigned int curr;
	unsigned short blk_ct;
	unsigned short pad;
	unsigned int used;
	unsigned int wasted;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xMemArea_tag
{
	unsigned int addr;
	unsigned int size;
	unsigned int flags;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xMemInfo_tag
{
	xMemArea_tag system;
	xMemArea_tag stack;
	xMemArea_tag DRAM;
	xMemArea_tag SRAM;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

xMemInfo_tag gMemInfo;
unsigned int gActiveHeap;
type_0 gxHeap;
type_3 sMemBaseNotifyFunc;
int gMemReporting;
unsigned int gMemReportingThreshold;
int gDumpTempLeaks;
type_8 ourGlobals;
_tagxPad* gDebugPad;
char _stack_size;
char _end;

void xMemPoolFree(xMemPool* pool, void* data);
void* xMemPoolAlloc(xMemPool* pool);
void xMemPoolSetup(xMemPool* pool, void* buffer, unsigned int nextOffset, unsigned int flags, type_7 initCB, unsigned int size, unsigned int count, unsigned int numRealloc);
void xMemPoolAddElements(xMemPool* pool, void* buffer, unsigned int count);
int xMemGetBase();
void xMemRegisterBaseNotifyFunc(type_3 func);
int xMemPopBase(int depth);
int xMemPushBase();
void xMemPopTemp(void* addr);
void* xMemPushTemp(unsigned int size);
void* xMemAlloc(unsigned int heapID, unsigned int size, int align);
void* xMemGrowAlloc(unsigned int heapID, unsigned int size);
unsigned int xMemGetBlockInfo(xMemHeap_tag* heap, unsigned int size, int align, xMemBlkInfo_tag* info);
void xMemInitHeap(xMemHeap_tag* heap, unsigned int base, unsigned int size, unsigned int flags);
void xMemExit();
void xMemInit();
void xMemDebug_SoakLog();

// xMemPoolFree__FP8xMemPoolPv
// Start address: 0x1f0300
void xMemPoolFree(xMemPool* pool, void* data)
{
	void* freeList;
	unsigned int next;
	void** prev;
	void* curr;
}

// xMemPoolAlloc__FP8xMemPool
// Start address: 0x1f0370
void* xMemPoolAlloc(xMemPool* pool)
{
	void* retval;
	unsigned int next;
	unsigned int flags;
}

// xMemPoolSetup__FP8xMemPoolPvUiUiPFP8xMemPoolPv_vUiUiUi
// Start address: 0x1f0410
void xMemPoolSetup(xMemPool* pool, void* buffer, unsigned int nextOffset, unsigned int flags, type_7 initCB, unsigned int size, unsigned int count, unsigned int numRealloc)
{
}

// xMemPoolAddElements__FP8xMemPoolPvUi
// Start address: 0x1f0440
void xMemPoolAddElements(xMemPool* pool, void* buffer, unsigned int count)
{
	int i;
	void* curr;
	type_7 initCB;
	unsigned int next;
	unsigned int size;
}

// xMemGetBase__Fv
// Start address: 0x1f0520
int xMemGetBase()
{
}

// xMemRegisterBaseNotifyFunc__FPFv_v
// Start address: 0x1f0550
void xMemRegisterBaseNotifyFunc(type_3 func)
{
}

// xMemPopBase__Fi
// Start address: 0x1f0560
int xMemPopBase(int depth)
{
}

// xMemPushBase__Fv
// Start address: 0x1f05d0
int xMemPushBase()
{
}

// xMemPopTemp__FPv
// Start address: 0x1f0670
void xMemPopTemp(void* addr)
{
}

// xMemPushTemp__FUi
// Start address: 0x1f0680
void* xMemPushTemp(unsigned int size)
{
	void* addr;
}

// xMemAlloc__FUiUii
// Start address: 0x1f0690
void* xMemAlloc(unsigned int heapID, unsigned int size, int align)
{
	xMemHeap_tag* heap;
	xMemBlock_tag* hdr;
	xHeapState_tag* sp;
	xMemBlkInfo_tag info;
	unsigned int total;
}

// xMemGrowAlloc__FUiUi
// Start address: 0x1f07e0
void* xMemGrowAlloc(unsigned int heapID, unsigned int size)
{
	xMemHeap_tag* heap;
	xMemBlock_tag* hdr;
	xHeapState_tag* sp;
	void* memptr;
}

// xMemGetBlockInfo__FP12xMemHeap_tagUiiP15xMemBlkInfo_tag
// Start address: 0x1f08d0
unsigned int xMemGetBlockInfo(xMemHeap_tag* heap, unsigned int size, int align, xMemBlkInfo_tag* info)
{
	int total;
	int hdr;
	int pre;
	int block;
	int post;
	xHeapState_tag* sp;
	int remainder;
}

// xMemInitHeap__FP12xMemHeap_tagUiUiUi
// Start address: 0x1f09f0
void xMemInitHeap(xMemHeap_tag* heap, unsigned int base, unsigned int size, unsigned int flags)
{
	unsigned int old_base;
	int align;
	xHeapState_tag* sp;
}

// xMemExit__Fv
// Start address: 0x1f0b00
void xMemExit()
{
}

// xMemInit__Fv
// Start address: 0x1f0b10
void xMemInit()
{
}

// xMemDebug_SoakLog__FPCc
// Start address: 0x1f0bd0
void xMemDebug_SoakLog()
{
}

