typedef struct xQuat;
typedef struct ANMHeader;
typedef struct xVec3;
typedef struct iAnimSKBHeader;
typedef struct iAnimSKBKey;
typedef struct SKAKey;
typedef struct ANMKey;
typedef struct SKAHeader;

typedef int(*type_11)(void*, void*);
typedef int(*type_16)(void*, void*);

typedef short type_0[4];
typedef float type_1[3];
typedef short type_2[3];
typedef float type_3[3];
typedef float type_4[4];
typedef float type_5[3];
typedef float type_6[3];
typedef SKAKey* type_7[64];
typedef float type_8[4];
typedef float type_9[3];
typedef float type_10[3];
typedef float type_12[4];
typedef float type_13[3];
typedef short type_14[4];
typedef short type_15[3];
typedef float type_17[24];
typedef float type_18[3];
typedef float type_19[3];

struct xQuat
{
	xVec3 v;
	float s;
};

struct ANMHeader
{
	unsigned int chunkType;
	unsigned int chunkLength;
	unsigned int chunkVersion;
	int hanimVersion;
	int hanimTypeID;
	unsigned int numFrames;
	int flags;
	float duration;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct iAnimSKBHeader
{
	unsigned int Magic;
	unsigned int Flags;
	unsigned short BoneCount;
	unsigned short TimeCount;
	unsigned int KeyCount;
	type_18 Scale;
};

struct iAnimSKBKey
{
	unsigned short TimeIndex;
	type_0 Quat;
	type_2 Tran;
};

struct SKAKey
{
	type_12 quat;
	type_13 tran;
	float time;
	unsigned int prevFrame;
};

struct ANMKey
{
	float time;
	type_8 quat;
	type_10 tran;
	unsigned int prevFrame;
};

struct SKAHeader
{
	unsigned int numFrames;
	unsigned int flags;
	float duration;
};

type_17 slerpPolynomial;
type_11 CmpBoneTime;
unsigned int gActiveHeap;
type_16 CmpTime;
unsigned char* giAnimScratch;

int _iAnimSKBExtractTranslate(iAnimSKBHeader* data, unsigned int bone, xVec3* tranArray);
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, unsigned int bone, float* starttran, float* endtran);
float iAnimDurationSKB(iAnimSKBHeader* data);
void iAnimEvalSKB(iAnimSKBHeader* data, float time, unsigned int flags, xVec3* tran, xQuat* quat);

// _iAnimSKBExtractTranslate__FP14iAnimSKBHeaderUiP5xVec3i
// Start address: 0x1a4410
int _iAnimSKBExtractTranslate(iAnimSKBHeader* data, unsigned int bone, xVec3* tranArray)
{
	unsigned int i;
	unsigned int j;
	unsigned int keylast;
	unsigned int tcount;
	iAnimSKBKey* keys;
	float* times;
	unsigned short* offsets;
	xVec3* lastTran;
	int tranFound;
	int lastTime;
	int currTime;
	float lerp;
}

// _iAnimSKBAdjustTranslate__FP14iAnimSKBHeaderUiPfPf
// Start address: 0x1a49d0
void _iAnimSKBAdjustTranslate(iAnimSKBHeader* data, unsigned int bone, float* starttran, float* endtran)
{
	int ipos;
	unsigned int i;
	unsigned int idx;
	unsigned int keyfirst;
	unsigned int keylast;
	unsigned int kcount;
	unsigned int bcount;
	unsigned int tcount;
	type_3 outScale;
	float pos;
	type_5 factor;
	type_6 oldmax;
	type_9 newmax;
	float timefirst;
	float timelast;
	iAnimSKBKey* keys;
	float* times;
	unsigned short* offsets;
}

// iAnimDurationSKB__FP14iAnimSKBHeader
// Start address: 0x1a4eb0
float iAnimDurationSKB(iAnimSKBHeader* data)
{
}

// iAnimEvalSKB__FP14iAnimSKBHeaderfUiP5xVec3P5xQuat
// Start address: 0x1a4ed0
void iAnimEvalSKB(iAnimSKBHeader* data, float time, unsigned int flags, xVec3* tran, xQuat* quat)
{
	unsigned int i;
	unsigned int tidx;
	unsigned int bcount;
	unsigned int tcount;
	iAnimSKBKey* keys;
	float* times;
	unsigned short* offsets;
	int asdf;
	float scalex;
	float scaley;
	float scalez;
	iAnimSKBKey* k;
	float time1;
	float time2;
	float lerp;
	iAnimSKBKey* k;
	unsigned int costheta;
	unsigned int theta;
}

