typedef struct xPar;
typedef struct xParGroup;
typedef struct xParCmdTex;
typedef struct xVec3;
typedef struct xParEmitterAsset;
typedef struct _tagEmitRect;
typedef struct xPEEntBound;
typedef struct _tagEmitLine;
typedef struct _tagEmitVolume;
typedef struct _tagEmitOffsetPoint;
typedef struct xPEVCyl;
typedef struct xPEEntBone;
typedef struct xPECircle;
typedef struct xBaseAsset;
typedef struct _tagEmitSphere;

typedef void(*type_0)(void*, xParGroup*);

typedef unsigned char type_1[4];
typedef unsigned char type_2[2];
typedef unsigned char type_3[3];
typedef float type_4[4];
typedef xParGroup* type_5[255];
typedef float type_6[4];

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_1 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_2 m_texIdx;
	type_3 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_4 m_cvel;
	type_6 m_cfl;
};

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int m_num_of_particles;
	unsigned char m_alive;
	unsigned char m_killWhenDead;
	unsigned char m_active;
	unsigned char m_visible;
	unsigned char m_culled;
	unsigned char m_priority;
	unsigned char m_flags;
	unsigned char m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	type_0 draw;
	xParCmdTex* m_cmdTex;
};

struct xParCmdTex
{
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xParEmitterAsset : xBaseAsset
{
	unsigned char emit_flags;
	unsigned char emit_type;
	unsigned short pad;
	unsigned int propID;
	union
	{
		xPECircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
		xPEVCyl e_vcyl;
		xPEEntBone e_entbone;
		xPEEntBound e_entbound;
	};
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	unsigned int cull_mode;
	float cull_dist_sqr;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xPEEntBone
{
	unsigned char flags;
	unsigned char type;
	unsigned char bone;
	unsigned char pad1;
	xVec3 offset;
	float radius;
	float deflection;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct _tagEmitSphere
{
	float radius;
};

int sParGroupRegTableInit;
int sParGroupRegTableCount;
type_5 sParGroupRegTable;

void xParGroupKillPar(xParGroup* ps, xPar* p);
xPar* xParGroupAddPar(xParGroup* ps);
void xParGroupAnimate(xParGroup* ps, float dt);
void xParGroupKillAllParticles(xParGroup* ps);
void xParGroupSetActive(xParGroup* ps, unsigned int isActive);
void xParGroupUnregister(xParGroup* ps);
void xParGroupRegister(xParGroup* ps);
void xParGroupSetPriority(xParGroup* ps, unsigned char val);
void xParGroupSetVisibility(xParGroup* ps, int vis);
void xParGroupSetBack2Life(xParGroup* ps, int b2l);
void xParGroupSetAging(xParGroup* ps, int age);
void xParGroupInit(xParGroup* ps);

// xParGroupKillPar__FP9xParGroupP4xPar
// Start address: 0x1f6180
void xParGroupKillPar(xParGroup* ps, xPar* p)
{
}

// xParGroupAddPar__FP9xParGroup
// Start address: 0x1f6260
xPar* xParGroupAddPar(xParGroup* ps)
{
	xPar* p;
	int myPriority;
	unsigned char i;
}

// xParGroupAnimate__FP9xParGroupf
// Start address: 0x1f63e0
void xParGroupAnimate(xParGroup* ps, float dt)
{
	xPar* i;
	xPar* tmp;
	float age;
}

// xParGroupKillAllParticles__FP9xParGroup
// Start address: 0x1f6500
void xParGroupKillAllParticles(xParGroup* ps)
{
	xPar* i;
	xPar* tmp;
}

// xParGroupSetActive__FP9xParGroupUi
// Start address: 0x1f6550
void xParGroupSetActive(xParGroup* ps, unsigned int isActive)
{
}

// xParGroupUnregister__FP9xParGroup
// Start address: 0x1f6560
void xParGroupUnregister(xParGroup* ps)
{
	unsigned char i;
}

// xParGroupRegister__FP9xParGroup
// Start address: 0x1f65c0
void xParGroupRegister(xParGroup* ps)
{
	unsigned char i;
}

// xParGroupSetPriority__FP9xParGroupUc
// Start address: 0x1f66a0
void xParGroupSetPriority(xParGroup* ps, unsigned char val)
{
}

// xParGroupSetVisibility__FP9xParGroupi
// Start address: 0x1f66b0
void xParGroupSetVisibility(xParGroup* ps, int vis)
{
}

// xParGroupSetBack2Life__FP9xParGroupi
// Start address: 0x1f66c0
void xParGroupSetBack2Life(xParGroup* ps, int b2l)
{
}

// xParGroupSetAging__FP9xParGroupi
// Start address: 0x1f6700
void xParGroupSetAging(xParGroup* ps, int age)
{
}

// xParGroupInit__FP9xParGroup
// Start address: 0x1f6740
void xParGroupInit(xParGroup* ps)
{
}

