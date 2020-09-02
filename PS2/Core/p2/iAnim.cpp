typedef struct xQuat;
typedef struct RwV3d;
typedef struct RtQuat;
typedef struct RtQuatSlerpCache;
typedef struct xVec3;


typedef unsigned char type[9120];

struct xQuat
{
	xVec3 v;
	float s;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RtQuat
{
	RwV3d imag;
	float real;
};

struct RtQuatSlerpCache
{
	RtQuat raFrom;
	RtQuat raTo;
	float omega;
	int nearlyZeroOm;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

type scratchBuffer;
unsigned char* giAnimScratch;

void iAnimBlend(float BlendFactor, float BlendRecip, unsigned short* BlendTimeOffset, float* BoneTable, unsigned int BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest);
unsigned int iAnimBoneCount(void* RawData);
float iAnimDuration(void* RawData);
void iAnimEval(void* RawData, float time, unsigned int flags, xVec3* tran, xQuat* quat);
void iAnimInit();

// iAnimBlend__FffPUsPfUiP5xVec3P5xQuatP5xVec3P5xQuatP5xVec3P5xQuat
// Start address: 0x1bb110
void iAnimBlend(float BlendFactor, float BlendRecip, unsigned short* BlendTimeOffset, float* BoneTable, unsigned int BoneCount, xVec3* Tran1, xQuat* Quat1, xVec3* Tran2, xQuat* Quat2, xVec3* TranDest, xQuat* QuatDest)
{
	unsigned int i;
	unsigned int invert;
	RtQuat* q2;
	RtQuat ident;
	xVec3* t2;
	float lerp;
	RtQuatSlerpCache qcache;
	float rSclFrom;
	float rSclTo;
	float z;
	float z;
	float baselerp;
	float lerp;
	RtQuatSlerpCache qcache;
	float rSclFrom;
	float rSclTo;
	float z;
	float z;
}

// iAnimBoneCount__FPv
// Start address: 0x1bb990
unsigned int iAnimBoneCount(void* RawData)
{
}

// iAnimDuration__FPv
// Start address: 0x1bb9b0
float iAnimDuration(void* RawData)
{
}

// iAnimEval__FPvfUiP5xVec3P5xQuat
// Start address: 0x1bb9c0
void iAnimEval(void* RawData, float time, unsigned int flags, xVec3* tran, xQuat* quat)
{
}

// iAnimInit__Fv
// Start address: 0x1bb9d0
void iAnimInit()
{
}

