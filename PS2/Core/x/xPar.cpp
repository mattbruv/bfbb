typedef struct xPar;
typedef struct xVec3;
typedef struct xParEmitterAsset;


typedef unsigned char type_0[4];
typedef unsigned char type_1[2];
typedef unsigned char type_2[3];
typedef float type_3[4];
typedef float type_4[4];
typedef xPar type_5[2000];

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_0 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_1 m_texIdx;
	type_2 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_3 m_cvel;
	type_4 m_cfl;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xParEmitterAsset
{
};

type_5 gParPool;
xPar* gParDead;

void xParInit(xPar* p);
void xParFree(xPar* par);
xPar* xParAlloc();
void xParMemInit();

// xParInit__FP4xPar
// Start address: 0x1f4200
void xParInit(xPar* p)
{
}

// xParFree__FP4xPar
// Start address: 0x1f4280
void xParFree(xPar* par)
{
}

// xParAlloc__Fv
// Start address: 0x1f42e0
xPar* xParAlloc()
{
}

// xParMemInit__Fv
// Start address: 0x1f4320
void xParMemInit()
{
	int i;
}

