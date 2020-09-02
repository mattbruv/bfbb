typedef struct _anon0;
typedef struct xBase;
typedef struct xGoal;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct xListItem;
typedef struct _anon4;
typedef enum en_trantype;
typedef struct RyzMemGrow;
typedef struct xFactoryInst;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct zNPCGoalCommon;
typedef struct _anon8;
typedef struct xPSYNote;
typedef struct _anon9;
typedef struct _anon10;
typedef struct xLinkAsset;
typedef struct _anon11;
typedef struct xPsyche;
typedef struct _anon12;
typedef struct _anon13;
typedef struct _anon14;
typedef struct _anon15;
typedef struct _anon16;
typedef struct _anon17;
typedef struct _anon18;
typedef enum en_pendtype;
typedef struct _anon19;
typedef struct _anon20;
typedef struct _anon21;
typedef struct _anon22;
typedef struct _anon23;
typedef struct _anon24;
typedef struct _anon25;
typedef struct RyzMemData;
typedef enum PSY_BRAIN_STATUS;
typedef struct _anon26;
typedef enum en_GOALSTATE;
typedef struct _anon27;
typedef struct _anon28;

typedef void(*type_2)(int*, en_trantype*);
typedef int(*type_3)(xGoal*, void*, float, void*);
typedef int(*type_5)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_6)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_7)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef char type_0[16];
typedef char type_1[16];
typedef float type_4[4];
typedef xGoal* type_8[5];
typedef float type_9[1];
typedef type_9 type_10[5];

struct _anon0
{
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
};

struct xGoal : xListItem, xFactoryInst
{
	xPsyche* psyche;
	int goalID;
	en_GOALSTATE stat;
	int flg_able;
	type_6 fun_process;
	type_3 fun_precalc;
	type_5 fun_chkRule;
	void* cbdata;
};

struct _anon1
{
};

struct _anon2
{
};

struct _anon3
{
};

struct xListItem
{
	int flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct _anon4
{
};

enum en_trantype
{
	GOAL_TRAN_NONE,
	GOAL_TRAN_SET,
	GOAL_TRAN_PUSH,
	GOAL_TRAN_POP,
	GOAL_TRAN_POPTO,
	GOAL_TRAN_POPALL,
	GOAL_TRAN_POPBASE,
	GOAL_TRAN_POPSAFE,
	GOAL_TRAN_SWAP,
	GOAL_TRAN_NOMORE,
	GOAL_TRAN_FORCE = 0x7fffffff
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

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct _anon5
{
};

struct _anon6
{
};

struct _anon7
{
};

struct zNPCGoalCommon : xGoal
{
	int flg_npcgauto;
	int flg_npcgable;
	unsigned int anid_played;
	union
	{
		int flg_info;
		int flg_user;
	};
};

struct _anon8
{
};

struct xPSYNote
{
};

struct _anon9
{
};

struct _anon10
{
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_4 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct _anon11
{
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int flg_psyche;
	xGoal* goallist;
	type_8 goalstak;
	type_10 tmr_stack;
	int staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int gid_safegoal;
	type_2 fun_remap;
	void* userContext;
	int cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct _anon12
{
};

struct _anon13
{
};

struct _anon14
{
};

struct _anon15
{
};

struct _anon16
{
};

struct _anon17
{
};

struct _anon18
{
};

enum en_pendtype
{
	PEND_TRAN_NONE,
	PEND_TRAN_SET,
	PEND_TRAN_PUSH,
	PEND_TRAN_POP,
	PEND_TRAN_POPTO,
	PEND_TRAN_POPALL,
	PEND_TRAN_SWAP,
	PEND_TRAN_INPROG,
	PEND_TRAN_NOMORE
};

struct _anon19
{
};

struct _anon20
{
};

struct _anon21
{
};

struct _anon22
{
};

struct _anon23
{
};

struct _anon24
{
};

struct _anon25
{
};

struct RyzMemData
{
};

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
};

struct _anon26
{
};

enum en_GOALSTATE
{
	GOAL_STAT_UNKNOWN,
	GOAL_STAT_PROCESS,
	GOAL_STAT_ENTER,
	GOAL_STAT_EXIT,
	GOAL_STAT_SUSPEND,
	GOAL_STAT_RESUME,
	GOAL_STAT_PAUSED,
	GOAL_STAT_DONE,
	GOAL_STAT_NOMORE,
	GOAL_STAT_FORCE = 0x7fffffff
};

struct _anon27
{
};

struct _anon28
{
};

type_0 buffer;
type_1 buffer;
_anon28 __vt__20zNPCGoalBossPatFudge;
_anon0 __vt__14zNPCGoalCommon;
_anon12 __vt__5xGoal;
_anon17 __vt__19zNPCGoalBossPatSpin;
_anon1 __vt__20zNPCGoalBossPatSpawn;
_anon21 __vt__21zNPCGoalBossPatFreeze;
_anon15 __vt__20zNPCGoalBossPatSmack;
_anon6 __vt__18zNPCGoalBossPatRun;
_anon24 __vt__19zNPCGoalBossPatSpit;
_anon16 __vt__18zNPCGoalBossPatHit;
_anon7 __vt__20zNPCGoalBossPatTaunt;
_anon27 __vt__19zNPCGoalBossPatIdle;
_anon4 __vt__22zNPCGoalBossSB1Deflate;
_anon20 __vt__20zNPCGoalBossSB1Smash;
_anon11 __vt__20zNPCGoalBossSB1Stomp;
_anon3 __vt__20zNPCGoalBossSB1Taunt;
_anon25 __vt__19zNPCGoalBossSB1Idle;
_anon18 __vt__28zNPCGoalBossSandyClothesline;
_anon8 __vt__26zNPCGoalBossSandyRunToRope;
_anon26 __vt__22zNPCGoalBossSandyGetUp;
_anon19 __vt__20zNPCGoalBossSandySit;
_anon9 __vt__21zNPCGoalBossSandyLeap;
_anon23 __vt__26zNPCGoalBossSandyElbowDrop;
_anon14 __vt__23zNPCGoalBossSandyNoHead;
_anon2 __vt__22zNPCGoalBossSandyMelee;
_anon22 __vt__22zNPCGoalBossSandyChase;
_anon13 __vt__22zNPCGoalBossSandyTaunt;
_anon5 __vt__21zNPCGoalBossSandyIdle;
_anon10 __vt__13zNPCGoalExist;

xFactoryInst* GOALCreate_Boss(int who, RyzMemGrow* grow);

// GOALCreate_Boss__FiP10RyzMemGrowPv
// Start address: 0x325180
xFactoryInst* GOALCreate_Boss(int who, RyzMemGrow* grow)
{
	xGoal* goal;
}

