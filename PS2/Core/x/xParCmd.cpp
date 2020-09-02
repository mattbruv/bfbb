typedef struct xParCmd;
typedef struct xPar;
typedef struct xParGroup;
typedef struct xCmdInfo;
typedef struct xParCmdMove;
typedef struct _tagEmitSphere;
typedef struct xParCmdSizeInOutData;
typedef struct xParCmdCollideFallSticky;
typedef struct xParCmdTex;
typedef struct xParCmdAsset;
typedef struct xParCmdFollow;
typedef struct _tagEmitRect;
typedef struct xParCmdKillSlow;
typedef struct xParCmdDampenData;
typedef struct xVec3;
typedef struct xParCmdRandomVelocityPar;
typedef struct xParCmdOrbitLine;
typedef struct xParEmitterAsset;
typedef struct xPEEntBound;
typedef struct xParCmdAlphaInOutData;
typedef struct _tagEmitLine;
typedef struct xParCmdAccelerate;
typedef struct _tagEmitVolume;
typedef struct xParCmdRotPar;
typedef struct xParCmdOrbitPoint;
typedef struct xParCmdCollideFall;
typedef struct xParCmdTexAnim;
typedef struct xParCmdShaperData;
typedef struct _tagEmitOffsetPoint;
typedef struct xMat3x3;
typedef struct xParCmdMoveRandomPar;
typedef struct xPEVCyl;
typedef struct xParCmdRotateAround;
typedef struct xPEEntBone;
typedef struct xPECircle;
typedef struct xBaseAsset;

typedef void(*type_0)(xParCmd*, xParGroup*, float);
typedef void(*type_1)(xParCmd*, xParGroup*, float);
typedef void(*type_2)(xParCmd*, xParGroup*, float);
typedef void(*type_4)(xParCmd*, xParGroup*, float);
typedef void(*type_6)(void*, xParGroup*);
typedef void(*type_7)(xParCmd*, xParGroup*, float);
typedef void(*type_12)(xParCmd*, xParGroup*, float);
typedef void(*type_13)(xParCmd*, xParGroup*, float);
typedef void(*type_15)(xParCmd*, xParGroup*, float);
typedef void(*type_20)(xParCmd*, xParGroup*, float);
typedef void(*type_21)(xParCmd*, xParGroup*, float);
typedef void(*type_22)(xParCmd*, xParGroup*, float);
typedef void(*type_23)(xParCmd*, xParGroup*, float);
typedef void(*type_25)(xParCmd*, xParGroup*, float);
typedef void(*type_26)(xParCmd*, xParGroup*, float);
typedef void(*type_27)(xParCmd*, xParGroup*, float);
typedef void(*type_28)(xParCmd*, xParGroup*, float);
typedef void(*type_31)(xParCmd*, xParGroup*, float);
typedef void(*type_32)(xParCmd*, xParGroup*, float);
typedef void(*type_33)(xParCmd*, xParGroup*, float);
typedef void(*type_34)(xParCmd*, xParGroup*, float);
typedef void(*type_35)(xParCmd*, xParGroup*, float);
typedef void(*type_36)(xParCmd*, xParGroup*, float);
typedef void(*type_37)(xParCmd*, xParGroup*, float);
typedef void(*type_38)(xParCmd*, xParGroup*, float);
typedef void(*type_40)(xParCmd*, xParGroup*, float);
typedef void(*type_42)(xParCmd*, xParGroup*, float);
typedef void(*type_43)(xParCmd*, xParGroup*, float);

typedef unsigned char type_3[4];
typedef xCmdInfo type_5[35];
typedef float type_8[3];
typedef float type_9[3];
typedef unsigned char type_10[2];
typedef unsigned char type_11[3];
typedef float type_14[3];
typedef float type_16[4];
typedef float type_17[4];
typedef unsigned char type_18[2];
typedef float type_19[4];
typedef float type_24[4];
typedef float type_29[4];
typedef float type_30[4];
typedef float type_39[0];
typedef float type_41[3];

struct xParCmd
{
	unsigned int flag;
	xParCmdAsset* tasset;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_3 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_10 m_texIdx;
	type_11 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_16 m_cvel;
	type_17 m_cfl;
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
	type_6 draw;
	xParCmdTex* m_cmdTex;
};

struct xCmdInfo
{
	unsigned int type;
	unsigned int size;
	type_2 func;
};

struct xParCmdMove : xParCmdAsset
{
	xVec3 dir;
};

struct _tagEmitSphere
{
	float radius;
};

struct xParCmdSizeInOutData : xParCmdAsset
{
	type_24 custSize;
};

struct xParCmdCollideFallSticky : xParCmdCollideFall
{
	float sticky;
};

struct xParCmdTex : xParCmdAsset
{
	float x1;
	float y1;
	float x2;
	float y2;
	unsigned char birthMode;
	unsigned char rows;
	unsigned char cols;
	unsigned char unit_count;
	float unit_width;
	float unit_height;
};

struct xParCmdAsset
{
	unsigned int type;
	unsigned char enabled;
	unsigned char mode;
	type_18 pad;
};

struct xParCmdFollow : xParCmdAsset
{
	float gravity;
	float epsilon;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xParCmdKillSlow : xParCmdAsset
{
	float speedLimitSqr;
	unsigned int kill_less_than;
};

struct xParCmdDampenData : xParCmdAsset
{
	float dampSpeed;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xParCmdRandomVelocityPar : xParCmdAsset
{
	float x;
	float y;
	float z;
};

struct xParCmdOrbitLine : xParCmdAsset
{
	xVec3 p;
	xVec3 axis;
	float gravity;
	float epsilon;
	float maxRadiusSqr;
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct xParCmdAlphaInOutData : xParCmdAsset
{
	type_19 custAlpha;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xParCmdAccelerate : xParCmdAsset
{
	xVec3 acc;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct xParCmdRotPar : xParCmdAsset
{
	xVec3 min;
	xVec3 max;
};

struct xParCmdOrbitPoint : xParCmdAsset
{
	xVec3 center;
	float gravity;
	float epsilon;
	float maxRadiusSqr;
};

struct xParCmdCollideFall : xParCmdAsset
{
	float y;
	float bounce;
};

struct xParCmdTexAnim : xParCmdAsset
{
	unsigned char anim_mode;
	unsigned char anim_wrap_mode;
	unsigned char pad_anim;
	unsigned char throttle_spd_less_than;
	float throttle_spd_sqr;
	float throttle_time;
	float throttle_time_elapsed;
};

struct xParCmdShaperData : xParCmdAsset
{
	type_29 custAlpha;
	type_30 custSize;
	float dampSpeed;
	float gravity;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
};

struct xParCmdMoveRandomPar : xParCmdAsset
{
	xVec3 dim;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xParCmdRotateAround : xParCmdAsset
{
	xVec3 pos;
	float unused1;
	float radius_growth;
	float yaw;
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

type_5 sCmdInfo;
type_39 cosSinPolynomial;
type_34 xParCmd_DampenSpeed_Update;
type_38 xParCmd_SizeInOut_Update;
type_36 xParCmd_AlphaInOut_Update;
type_42 xParCmd_Shaper_Update;
type_33 xParCmdCollideFallSticky_Update;
type_31 xParCmdCollideFall_Update;
type_25 xParCmdScale_Update;
type_22 xParCmdSmokeAlpha_Update;
type_20 xParCmdRotateAround_Update;
type_12 xParCmdRotPar_Update;
type_7 xParCmdApplyWind_Update;
type_27 xParCmdAlpha3rdPolyReg_Update;
type_4 xParCmdAge_Update;
type_1 xParCmdRandomVelocityPar_Update;
type_0 xParCmdTexAnim_Update;
type_43 xParCmdTex_Update;
type_40 xParCmdScale3rdPolyReg_Update;
type_26 xParCmdMoveRandomPar_Update;
type_37 xParCmdOrbitLine_Update;
type_35 xParCmdOrbitPoint_Update;
type_32 xParCmdFollow_Update;
type_28 xParCmdKillSlow_Update;
type_15 xParCmdVelocityApply_Update;
type_13 xParCmdAccelerate_Update;
type_23 xParCmdMoveRandom_Update;
type_21 xParCmdMove_Update;

void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps);
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps);
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps);
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdTex_Update();
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdVelocityApply_Update(xParGroup* ps);
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdAlpha3rdPolyReg_Update();
void xParCmdScale_Update();
void xParCmdSmokeAlpha_Update();
void xParCmdScale3rdPolyReg_Update();
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float dt);
type_2 xParCmdGetUpdateFunc(unsigned int parType);
unsigned int xParCmdGetSize(unsigned int parType);
void xParCmdRegister(unsigned int parType, unsigned int size, type_2 func);
void xParCmdInit();

// xParCmd_Shaper_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4370
void xParCmd_Shaper_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdShaperData* cmd;
	float damp;
	float grav;
	int doalpha;
	int dosize;
	int i;
	int seg;
	type_8 slope_alfa;
	type_9 slope_size;
	float frac;
	float alfa;
}

// xParCmd_AlphaInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4670
void xParCmd_AlphaInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdAlphaInOutData* cmd;
	int i;
	int seg;
	type_41 slope_alfa;
	float frac;
	float alfa;
}

// xParCmd_SizeInOut_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4850
void xParCmd_SizeInOut_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdSizeInOutData* cmd;
	int i;
	int seg;
	type_14 slope_size;
	float frac;
}

// xParCmd_DampenSpeed_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f49b0
void xParCmd_DampenSpeed_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdDampenData* cmd;
	float damp;
}

// xParCmdCollideFallSticky_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4a20
void xParCmdCollideFallSticky_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFallSticky& cmd;
	float xzdamp;
	xPar* p;
	float& loc;
	float& vel;
	float dloc;
}

// xParCmdCollideFall_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4ac0
void xParCmdCollideFall_Update(xParCmd* c, xParGroup* ps)
{
	xParCmdCollideFall& cmd;
	xPar* p;
	float& loc;
	float& vel;
	float dloc;
}

// xParCmdTexAnim_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4b40
void xParCmdTexAnim_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdTexAnim* cmd;
	xParCmdTex* tex;
}

// xParCmdTex_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4f80
void xParCmdTex_Update()
{
}

// xParCmdRotateAround_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f4f90
void xParCmdRotateAround_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdRotateAround* cmd;
	float yaw;
	float radius_growth;
	xVec3 at;
	xMat3x3 lookmat;
	float radius;
	xVec3 angles;
	xMat3x3 rotmat;
}

// xParCmdVelocityApply_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5150
void xParCmdVelocityApply_Update(xParGroup* ps)
{
	xPar* p;
}

// xParCmdRotPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f51b0
void xParCmdRotPar_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdRotPar* cmd;
}

// xParCmdApplyWind_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f53b0
void xParCmdApplyWind_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
}

// xParCmdRandomVelocityPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5410
void xParCmdRandomVelocityPar_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdRandomVelocityPar* cmd;
	xVec3 rot;
	xVec3* velvec;
	unsigned int uvelx;
	unsigned int uvely;
	unsigned int uvelz;
}

// xParCmdAlpha3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5660
void xParCmdAlpha3rdPolyReg_Update()
{
}

// xParCmdScale_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5670
void xParCmdScale_Update()
{
}

// xParCmdSmokeAlpha_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5680
void xParCmdSmokeAlpha_Update()
{
}

// xParCmdScale3rdPolyReg_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5690
void xParCmdScale3rdPolyReg_Update()
{
}

// xParCmdMoveRandomPar_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f56a0
void xParCmdMoveRandomPar_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdMoveRandomPar* cmd;
}

// xParCmdMoveRandom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5750
void xParCmdMoveRandom_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdMove* cmd;
}

// xParCmdMove_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5850
void xParCmdMove_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdMove* cmd;
}

// xParCmdAccelerate_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f58b0
void xParCmdAccelerate_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdAccelerate* cmd;
}

// xParCmdOrbitLine_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5910
void xParCmdOrbitLine_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdOrbitLine* cmd;
	float mdt;
	float force;
}

// xParCmdOrbitPoint_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5a20
void xParCmdOrbitPoint_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdOrbitPoint* cmd;
	float mdt;
	float force;
}

// xParCmdFollow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5af0
void xParCmdFollow_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdFollow* cmd;
	float mdt;
	float force;
}

// xParCmdAge_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bb0
void xParCmdAge_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	float age_rate;
}

// xParCmdKillSlow_Update__FP7xParCmdP9xParGroupf
// Start address: 0x1f5bf0
void xParCmdKillSlow_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdKillSlow* cmd;
	float speedLimit;
}

// xParCmdGetUpdateFunc__FUi
// Start address: 0x1f5ca0
type_2 xParCmdGetUpdateFunc(unsigned int parType)
{
	int i;
}

// xParCmdGetSize__FUi
// Start address: 0x1f5d00
unsigned int xParCmdGetSize(unsigned int parType)
{
	int i;
}

// xParCmdRegister__FUiUiPFP7xParCmdP9xParGroupf_v
// Start address: 0x1f5d60
void xParCmdRegister(unsigned int parType, unsigned int size, type_2 func)
{
}

// xParCmdInit__Fv
// Start address: 0x1f5da0
void xParCmdInit()
{
}

