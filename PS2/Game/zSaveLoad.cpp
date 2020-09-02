typedef struct xScene;
typedef struct _tagxRumble;
typedef struct xVec3;
typedef struct zPlatform;
typedef struct RpAtomic;
typedef struct zSaveLoadGame;
typedef enum sound_category;
typedef struct xShadowSimpleCache;
typedef struct xGridBound;
typedef struct RxPipeline;
typedef struct xEnt;
typedef struct xEntBoulder;
typedef struct xAnimState;
typedef struct zGlobals;
typedef struct xEntCollis;
typedef struct RwObjectHasFrame;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef struct xAnimSingle;
typedef struct RwFrame;
typedef struct xEntSplineData;
typedef struct RxPipelineNode;
typedef struct zGlobalSettings;
typedef struct rxHeapFreeBlock;
typedef struct xEnv;
typedef struct RwRaster;
typedef struct xGroup;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RpInterpolator;
typedef struct zEnt;
typedef struct xUpdateCullEnt;
typedef struct zAssetPickupTable;
typedef struct RxNodeDefinition;
typedef struct xAnimMultiFileBase;
typedef struct RpLight;
typedef struct xAnimFile;
typedef struct xEntMotionPenData;
typedef struct XSGAutoData;
typedef struct xEntFrame;
typedef struct zPlayerLassoInfo;
typedef struct xGroupAsset;
typedef struct zCutsceneMgr;
typedef struct st_XSAVEGAME_DATA;
typedef struct xAnimEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTransition;
typedef struct xBase;
typedef struct zScene;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct RxPipelineCluster;
typedef struct xCollis;
typedef struct zLedgeGrabParams;
typedef struct RxPipelineNodeParam;
typedef struct _class_0;
typedef struct xPlatformAsset;
typedef struct RpPolygon;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct xLinkAsset;
typedef struct xEntMPData;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xQuat;
typedef struct RpMaterialList;
typedef struct xAnimPlay;
typedef enum _zPlayerWallJumpState;
typedef struct xFFX;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xEntMotionAsset;
typedef struct xModelInstance;
typedef struct rxHeapBlockHeader;
typedef struct xMovePoint;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct xAnimMultiFile;
typedef struct xLightKitLight;
typedef struct zUIAsset;
typedef struct zLasso;
typedef struct RxPipelineRequiresCluster;
typedef struct xSpline3;
typedef struct xClumpCollBSPTree;
typedef struct xEntMotionERData;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RpClump;
typedef struct xUpdateCullGroup;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct anim_coll_data;
typedef struct zPlatFMRunTime;
typedef struct analog_data;
typedef struct xSurface;
typedef struct xMat4x3;
typedef struct xVec4;
typedef struct xClumpCollBSPTriangle;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct _tagiTRCPadInfo;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xQCData;
typedef struct xEnvAsset;
typedef struct RpVertexNormal;
typedef struct xCoef3;
typedef struct zCheckPoint;
typedef enum eGameMode;
typedef enum RxClusterValidityReq;
typedef struct zPlayerGlobals;
typedef struct xAnimTable;
typedef struct _zUI;
typedef struct _zPortal;
typedef struct iSndInfo;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct xMemPool;
typedef struct xEntMotionOrbitData;
typedef enum RxNodeDefEditable;
typedef struct xCamera;
typedef enum en_SAVEGAME_MODE;
typedef enum RxClusterValid;
typedef struct zPlayerSettings;
typedef enum sound_listener_game_mode;
typedef struct xRot;
typedef union _class_1;
typedef struct xMovePointAsset;
typedef struct RwCamera;
typedef struct RpTriangle;
typedef struct xSndVoiceInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum en_XSGASYNC_STATUS;
typedef enum _tagTRCState;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct iEnv;
typedef struct xEntMechData;
typedef struct xEntMotionSplineData;
typedef struct iFogParams;
typedef struct st_ISGSESSION;
typedef struct xBox;
typedef struct xBound;
typedef enum _tagPadInit;
typedef struct xLightKit;
typedef struct RxClusterDefinition;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct xPortalAsset;
typedef struct xModelTag;
typedef struct st_XSAVEGAME_CLIENT;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef enum RpWorldRenderOrder;
typedef struct xEntMotionMPData;
typedef struct xBaseAsset;
typedef struct xEntERData;
typedef struct RxOutputSpec;
typedef struct zSaveLoadUI;
typedef enum _tagPadState;
typedef struct xMat3x3;
typedef struct xJSPHeader;
typedef struct RwTexture;
typedef struct xGlobals;
typedef struct xVec2;
typedef struct RxClusterRef;
typedef struct RpSector;
typedef struct zEntHangable;
typedef struct xModelBucket;
typedef struct RwObject;
typedef struct xEntAsset;
typedef struct _tagxPad;
typedef struct RwLLLink;
typedef struct xEntDrive;
typedef enum en_XSG_WHYFAIL;
typedef struct RxIoSpec;
typedef struct xBBox;
typedef struct _zEnv;
typedef struct xCoef;
typedef struct xEntMotionMechData;
typedef struct iSndVol;
typedef struct RxNodeMethods;
typedef struct _tagPadAnalog;
typedef struct xEntPenData;
typedef struct RpWorld;
typedef struct _tagTRCPadInfo;
typedef struct xSndGlobals;
typedef struct _tagiPad;
typedef struct RwFrustumPlane;
typedef struct zJumpParam;
typedef struct basic_rect;
typedef struct RwPlane;
typedef struct xEntOrbitData;
typedef struct RxCluster;
typedef struct xShadowSimplePoly;
typedef struct RxPacket;
typedef struct xEntMotion;
typedef enum RwFogType;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_0;
typedef struct RwRGBAReal;
typedef struct tri_data_1;
typedef struct _class_2;
typedef struct RwLinkList;

typedef int(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xEnt*, xScene*, float);
typedef RwCamera*(*type_6)(RwCamera*);
typedef void(*type_8)(void*);
typedef void(*type_10)(xEnt*, xScene*, float, xEntCollis*);
typedef RwObjectHasFrame*(*type_11)(RwObjectHasFrame*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef unsigned int(*type_16)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_17)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_18)(RxPipelineNode*);
typedef void(*type_21)(xEnt*);
typedef xBase*(*type_24)(unsigned int);
typedef char*(*type_26)(xBase*);
typedef unsigned int(*type_29)(void*, void*);
typedef int(*type_30)(RxPipelineNode*, RxPipeline*);
typedef char*(*type_32)(unsigned int);
typedef unsigned int(*type_33)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_35)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef unsigned int(*type_36)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_46)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_48)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int(*type_50)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_54)(RxNodeDefinition*);
typedef void(*type_55)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_58)(RxNodeDefinition*);
typedef int(*type_59)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef RpClump*(*type_62)(RpClump*, void*);
typedef void(*type_69)(xAnimPlay*, xAnimState*);
typedef int(*type_71)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef void(*type_73)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_74)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int(*type_75)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpAtomic*(*type_77)(RpAtomic*);
typedef int(*type_80)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef int(*type_91)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef int(*type_95)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef RwCamera*(*type_105)(RwCamera*);
typedef int(*type_107)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef RpWorldSector*(*type_108)(RpWorldSector*);
typedef void(*type_112)(xMemPool*, void*);
typedef void(*type_121)(RwResEntry*);

typedef RpLight* type_0[2];
typedef float type_1[2];
typedef unsigned char type_4[22];
typedef float type_5[12];
typedef float type_7[16];
typedef RwFrame* type_9[2];
typedef char type_13[64];
typedef char type_14[64];
typedef float type_15[12];
typedef char type_19[32];
typedef _tagTRCPadInfo type_20[4];
typedef float type_22[2];
typedef char* type_23[15];
typedef char type_25[32];
typedef unsigned char type_27[3];
typedef xVec3 type_28[5];
typedef unsigned char type_31[2];
typedef unsigned char type_34[5];
typedef char type_38[64];
typedef char type_39[32];
typedef zSaveLoadUI type_40[62];
typedef unsigned short type_41[3];
typedef xVec3 type_42[60];
typedef char type_43[256];
typedef RwFrustumPlane type_44[6];
typedef unsigned int type_45[4];
typedef xVec3 type_47[4];
typedef unsigned char type_49[2];
typedef xAnimMultiFileEntry type_51[1];
typedef float type_52[22];
typedef RwV3d type_53[8];
typedef char type_56[32];
typedef float type_57[22];
typedef float type_60[4];
typedef unsigned int type_61[15];
typedef char type_63[64];
typedef unsigned int type_64[15];
typedef char type_65[16];
typedef RwTexCoords* type_66[8];
typedef xCollis type_67[18];
typedef unsigned int type_68[15];
typedef analog_data type_70[2];
typedef char type_72[16];
typedef unsigned short type_76[3];
typedef char type_78[32];
typedef unsigned char type_79[2];
typedef unsigned char type_81[2];
typedef xVec4 type_82[12];
typedef char type_83[32];
typedef unsigned int type_84[2];
typedef unsigned char type_85[2];
typedef st_XSAVEGAME_CLIENT type_86[128];
typedef float type_87[6];
typedef float type_88[3];
typedef unsigned int type_89[4];
typedef float type_90[3];
typedef xModelTag type_92[2];
typedef float type_93[3];
typedef float type_94[2];
typedef unsigned char type_96[3];
typedef char type_97[32];
typedef RwTexCoords* type_98[8];
typedef unsigned int type_99[72];
typedef xEnt* type_100[111];
typedef char type_101[4];
typedef char type_102[128];
typedef float type_103[4];
typedef xBase* type_104[72];
typedef char type_106[128];
typedef char type_109[128];
typedef type_109 type_110[6];
typedef float type_111[4];
typedef unsigned char type_113[14];
typedef xModelTag type_114[4];
typedef char type_115[32];
typedef char type_116[32];
typedef xModelInstance* type_117[14];
typedef float type_118[5];
typedef char type_119[32];
typedef xSndVoiceInfo type_120[48];
typedef xMat4x3 type_122[2];
typedef xVec3 type_123[3];
typedef unsigned short type_124[2];
typedef unsigned char type_125[4];
typedef char type_126[32];
typedef float type_127[12];
typedef float type_128[2];
typedef float type_129[12];
typedef float type_130[2];
typedef float type_131[12];
typedef float type_132[2];
typedef zSaveLoadGame type_133[3];
typedef RxCluster type_134[1];
typedef unsigned char type_135[22];
typedef float type_136[12];

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
	type_24 resolvID;
	type_26 base2Name;
	type_32 id2Name;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	unsigned short state;
	unsigned short plat_flags;
	float tmr;
	int ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float pauseMult;
	float pauseDelta;
};

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_77 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct zSaveLoadGame
{
	type_13 label;
	type_19 date;
	int progress;
	unsigned int size;
	char thumbIconIndex;
};

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
};

struct xShadowSimpleCache
{
	unsigned short flags;
	unsigned char alpha;
	unsigned char pad;
	unsigned int collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	float envHeight;
	float shadowHeight;
	unsigned int raster;
	float dydx;
	float dydz;
	type_47 corner;
};

struct xGridBound
{
	void* data;
	unsigned short gx;
	unsigned short gz;
	unsigned char ingrid;
	unsigned char oversize;
	unsigned char deleted;
	unsigned char gpad;
	xGridBound** head;
	xGridBound* next;
};

struct RxPipeline
{
	int locked;
	unsigned int numNodes;
	RxPipelineNode* nodes;
	unsigned int packetNumClusterSlots;
	rxEmbeddedPacketState embeddedPacketState;
	RxPacket* embeddedPacket;
	unsigned int numInputRequirements;
	RxPipelineRequiresCluster* inputRequirements;
	void* superBlock;
	unsigned int superBlockSize;
	unsigned int entryPoint;
	unsigned int pluginId;
	unsigned int pluginData;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	unsigned short idx;
	unsigned short num_updates;
	unsigned char flags;
	unsigned char miscflags;
	unsigned char subType;
	unsigned char pflags;
	unsigned char moreFlags;
	unsigned char isCulled;
	unsigned char driving_count;
	unsigned char num_ffx;
	unsigned char collType;
	unsigned char collLev;
	unsigned char chkby;
	unsigned char penby;
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	xLightKit* lightKit;
	type_3 update;
	type_3 endUpdate;
	type_12 bupdate;
	type_17 move;
	type_21 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_37 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xEntBoulder
{
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
	type_69 BeforeEnter;
	type_55 StateCallback;
	type_73 BeforeAnimMatrices;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xEntCollis
{
	unsigned char chk;
	unsigned char pen;
	unsigned char env_sidx;
	unsigned char env_eidx;
	unsigned char npc_sidx;
	unsigned char npc_eidx;
	unsigned char dyn_sidx;
	unsigned char dyn_eidx;
	unsigned char stat_sidx;
	unsigned char stat_eidx;
	unsigned char idx;
	type_67 colls;
	type_10 post;
	type_33 depenq;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_11 sync;
};

struct st_XSAVEGAME_READCONTEXT
{
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_22 BilinearLerp;
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

struct RwFrame
{
	RwObject object;
	RwLLLink inDirtyListLink;
	RwMatrixTag modelling;
	RwMatrixTag ltm;
	RwLinkList objectList;
	RwFrame* child;
	RwFrame* next;
	RwFrame* root;
};

struct xEntSplineData
{
	int unknown;
};

struct RxPipelineNode
{
	RxNodeDefinition* nodeDef;
	unsigned int numOutputs;
	unsigned int* outputs;
	RxPipelineCluster** slotClusterRefs;
	unsigned int* slotsContinue;
	void* privateData;
	unsigned int* inputToClusterSlot;
	RxPipelineNodeTopSortData* topSortData;
	void* initializationData;
	unsigned int initializationDataSize;
};

struct zGlobalSettings
{
	unsigned short AnalogMin;
	unsigned short AnalogMax;
	float SundaeTime;
	float SundaeMult;
	unsigned int InitialShinyCount;
	unsigned int InitialSpatulaCount;
	int ShinyValuePurple;
	int ShinyValueBlue;
	int ShinyValueGreen;
	int ShinyValueYellow;
	int ShinyValueRed;
	int ShinyValueCombo0;
	int ShinyValueCombo1;
	int ShinyValueCombo2;
	int ShinyValueCombo3;
	int ShinyValueCombo4;
	int ShinyValueCombo5;
	int ShinyValueCombo6;
	int ShinyValueCombo7;
	int ShinyValueCombo8;
	int ShinyValueCombo9;
	int ShinyValueCombo10;
	int ShinyValueCombo11;
	int ShinyValueCombo12;
	int ShinyValueCombo13;
	int ShinyValueCombo14;
	int ShinyValueCombo15;
	float ComboTimer;
	unsigned int Initial_Specials;
	unsigned int TakeDamage;
	float DamageTimeHit;
	float DamageTimeSurface;
	float DamageTimeEGen;
	float DamageSurfKnock;
	float DamageGiveHealthKnock;
	unsigned int CheatSpongeball;
	unsigned int CheatPlayerSwitch;
	unsigned int CheatAlwaysPortal;
	unsigned int CheatFlyToggle;
	unsigned int DisableForceConversation;
	float StartSlideAngle;
	float StopSlideAngle;
	float RotMatchMaxAngle;
	float RotMatchMatchTime;
	float RotMatchRelaxTime;
	float Gravity;
	float BBashTime;
	float BBashHeight;
	float BBashDelay;
	float BBashCVTime;
	float BBounceSpeed;
	float BSpinMinFrame;
	float BSpinMaxFrame;
	float BSpinRadius;
	float SandyMeleeMinFrame;
	float SandyMeleeMaxFrame;
	float SandyMeleeRadius;
	float BubbleBowlTimeDelay;
	float BubbleBowlLaunchPosLeft;
	float BubbleBowlLaunchPosUp;
	float BubbleBowlLaunchPosAt;
	float BubbleBowlLaunchVelLeft;
	float BubbleBowlLaunchVelUp;
	float BubbleBowlLaunchVelAt;
	float BubbleBowlPercentIncrease;
	float BubbleBowlMinSpeed;
	float BubbleBowlMinRecoverTime;
	float SlideAccelVelMin;
	float SlideAccelVelMax;
	float SlideAccelStart;
	float SlideAccelEnd;
	float SlideAccelPlayerFwd;
	float SlideAccelPlayerBack;
	float SlideAccelPlayerSide;
	float SlideVelMaxStart;
	float SlideVelMaxEnd;
	float SlideVelMaxIncTime;
	float SlideVelMaxIncAccel;
	float SlideAirHoldTime;
	float SlideAirSlowTime;
	float SlideAirDblHoldTime;
	float SlideAirDblSlowTime;
	float SlideVelDblBoost;
	unsigned char SlideApplyPhysics;
	type_81 PowerUp;
	type_85 InitialPowerUp;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwRaster
{
	RwRaster* parent;
	unsigned char* cpPixels;
	unsigned char* palette;
	int width;
	int height;
	int depth;
	int stride;
	short nOffsetX;
	short nOffsetY;
	unsigned char cType;
	unsigned char cFlags;
	unsigned char privateFlags;
	unsigned char cFormat;
	unsigned char* originalPixels;
	int originalWidth;
	int originalHeight;
	int originalStride;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float x;
	float y;
};

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_29 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
};

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RpLight
{
	RwObjectHasFrame object;
	float radius;
	RwRGBAReal color;
	float minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	unsigned short lightFrame;
	unsigned short pad;
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
	type_49 NumAnims;
	void** RawData;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_31 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct XSGAutoData
{
	int flg_autodata;
	int lastTarg;
	int lastGame;
	int lastPhysicalSlot;
	st_ISGSESSION* isg_monitor;
};

struct xEntFrame
{
	xMat4x3 mat;
	xMat4x3 oldmat;
	xVec3 oldvel;
	xRot oldrot;
	xRot drot;
	xRot rot;
	xVec3 dpos;
	xVec3 dvel;
	xVec3 vel;
	unsigned int mode;
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float dist;
	unsigned char destroy;
	unsigned char targetGuide;
	float lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float copterTime;
	int canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct zCutsceneMgr
{
};

struct st_XSAVEGAME_DATA
{
	int gfile_idx;
	en_SAVEGAME_MODE mode;
	unsigned int stage;
	int gslot;
	type_63 label;
	int progress;
	int thumbIconIdx;
	long playtime;
	char* membuf;
	int memsize;
	char* buf_curpos;
	char* buf_sizespot;
	char* buf_cksmspot;
	int totamt;
	unsigned int chksum;
	unsigned int upd_tally;
	int cltneed;
	int cltmax;
	int chdrneed;
	int stkcnt;
	type_86 cltstk;
	st_XSAVEGAME_CLIENT dfltloadclt;
	unsigned int file_chksum;
	unsigned int read_chksum;
	int readsize;
	char* loadbuf;
	int loadsize;
	char* walkpos;
	int walkremain;
	st_ISGSESSION* isgsess;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_16 Callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_36 Conditional;
	type_36 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_75 eventFunc;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		unsigned int num_ents;
		unsigned int num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	unsigned int num_update_base;
	xBase** update_base;
	type_99 baseCount;
	type_104 baseList;
	_zEnv* zen;
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xCollis
{
	unsigned int flags;
	unsigned int oid;
	void* optr;
	xModelInstance* mptr;
	float dist;
	xVec3 norm;
	xVec3 tohit;
	xVec3 depen;
	xVec3 hdng;
	union
	{
		_class_0 tuv;
		tri_data_1 tri;
	};
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_42 tranTable;
	int tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float y0det;
	float dydet;
	float r0det;
	float drdet;
	float thdet;
	float rtime;
	float ttime;
	float tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int nrays;
	int rrand;
	float startrot;
	float endrot;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct xPlatformAsset
{
};

struct RpPolygon
{
	unsigned short matIndex;
	type_41 vertIndex;
};

struct RxHeap
{
	unsigned int superBlockSize;
	rxHeapSuperBlockDescriptor* head;
	rxHeapBlockHeader* headBlock;
	rxHeapFreeBlock* freeBlocks;
	unsigned int entriesAlloced;
	unsigned int entriesUsed;
	int dirty;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_60 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xEntMPData
{
	float curdist;
	float speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float dist;
	unsigned int padalign;
	xQuat aquat;
	xQuat bquat;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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
	type_73 BeforeAnimMatrices;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xFFX
{
};

struct RwTexCoords
{
	float u;
	float v;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xEntMotionAsset
{
	unsigned char type;
	unsigned char use_banking;
	unsigned short flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	unsigned int PipeFlags;
	float RedMultiplier;
	float GreenMultiplier;
	float BlueMultiplier;
	float Alpha;
	float FadeStart;
	float FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	unsigned short Flags;
	unsigned char BoneCount;
	unsigned char BoneIndex;
	unsigned char* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	unsigned int modelID;
	unsigned int shadowID;
	RpAtomic* shadowmapAtomic;
	_class_2 anim_coll;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_89 pad;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_79 pad;
	float delay;
	xSpline3* spl;
};

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_51 Files;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_7 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct zUIAsset : xEntAsset
{
	unsigned int uiFlags;
	type_124 dim;
	unsigned int textureID;
	type_128 uva;
	type_130 uvb;
	type_132 uvc;
	type_1 uvd;
};

struct zLasso
{
	unsigned int flags;
	float secsTotal;
	float secsLeft;
	float stRadius;
	float tgRadius;
	float crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float stSlack;
	float stSlackDist;
	float tgSlack;
	float tgSlackDist;
	float crSlack;
	float currDist;
	float lastDist;
	type_28 lastRefs;
	type_34 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float ext_tm;
	float ext_wait_tm;
	float ret_tm;
	float ret_wait_tm;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_62 callback;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_94 radius;
};

struct RpGeometry
{
	RwObject object;
	unsigned int flags;
	unsigned short lockedSinceLastInst;
	short refCount;
	int numTriangles;
	int numVertices;
	int numMorphTargets;
	int numTexCoordSets;
	RpMaterialList matList;
	RpTriangle* triangles;
	RwRGBA* preLitLum;
	type_98 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_66 texCoords;
	RwRGBA* preLitLum;
	RwResEntry* repEntry;
	RwLinkList collAtomicsInWorldSector;
	RwLinkList noCollAtomicsInWorldSector;
	RwLinkList lightsInWorldSector;
	RwBBox boundingBox;
	RwBBox tightBoundingBox;
	RpMeshHeader* mesh;
	RxPipeline* pipeline;
	unsigned short matListWindowBase;
	unsigned short numVertices;
	unsigned short numPolygons;
	unsigned short pad;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct anim_coll_data
{
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_127 tmrs;
	type_129 ttms;
	type_131 atms;
	type_136 dtms;
	type_5 vms;
	type_15 dss;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xSurface : xBase
{
	unsigned int idx;
	unsigned int type;
	union
	{
		unsigned int mat_idx;
		xEnt* ent;
		void* obj;
	};
	float friction;
	unsigned char state;
	type_96 pad;
	void* moprops;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct RwMatrixTag
{
	RwV3d right;
	unsigned int flags;
	RwV3d up;
	unsigned int pad1;
	RwV3d at;
	unsigned int pad2;
	RwV3d pos;
	unsigned int pad3;
};

struct rxReq
{
};

struct xQCData
{
	char xmin;
	char ymin;
	char zmin;
	char zmin_dup;
	char xmax;
	char ymax;
	char zmax;
	char zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct xEnvAsset : xBaseAsset
{
	unsigned int bspAssetID;
	unsigned int startCameraAssetID;
	unsigned int climateFlags;
	float climateStrengthMin;
	float climateStrengthMax;
	unsigned int bspLightKit;
	unsigned int objectLightKit;
	float padF1;
	unsigned int bspCollisionAssetID;
	unsigned int bspFXAssetID;
	unsigned int bspCameraAssetID;
	unsigned int bspMapperID;
	unsigned int bspMapperCollisionID;
	unsigned int bspMapperFXID;
	float loldHeight;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	unsigned int Visible;
	unsigned int Health;
	int Speed;
	float SpeedMult;
	int Sneak;
	int Teeter;
	float SlipFadeTimer;
	int Slide;
	float SlideTimer;
	int Stepping;
	int JumpState;
	int LastJumpState;
	float JumpTimer;
	float LookAroundTimer;
	unsigned int LookAroundRand;
	unsigned int LastProjectile;
	float DecelRun;
	float DecelRunSpeed;
	float HotsauceTimer;
	float LeanLerp;
	float ScareTimer;
	xBase* ScareSource;
	float CowerTimer;
	float DamageTimer;
	float SundaeTimer;
	float ControlOffTimer;
	float HelmetTimer;
	unsigned int WorldDisguise;
	unsigned int Bounced;
	float FallDeathTimer;
	float HeadbuttVel;
	float HeadbuttTimer;
	unsigned int SpecialReceived;
	xEnt* MountChimney;
	float MountChimOldY;
	unsigned int MaxHealth;
	unsigned int DoMeleeCheck;
	float VictoryTimer;
	float BadGuyNearTimer;
	float ForceSlipperyTimer;
	float ForceSlipperyFriction;
	float ShockRadius;
	float ShockRadiusOld;
	float Face_ScareTimer;
	unsigned int Face_ScareRandom;
	unsigned int Face_Event;
	float Face_EventTimer;
	float Face_PantTimer;
	unsigned int Face_AnimSpecific;
	unsigned int IdleRand;
	float IdleMinorTimer;
	float IdleMajorTimer;
	float IdleSitTimer;
	int Transparent;
	zEnt* FireTarget;
	unsigned int ControlOff;
	unsigned int ControlOnEvent;
	unsigned int AutoMoveSpeed;
	float AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_92 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float HangLength;
	xVec3 HangStartPos;
	float HangStartLerp;
	type_114 HangPawTag;
	float HangPawOffset;
	float HangElapsed;
	float Jump_CurrGravity;
	float Jump_HoldTimer;
	float Jump_ChangeTimer;
	int Jump_CanDouble;
	int Jump_CanFloat;
	int Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int CanJump;
	int CanBubbleSpin;
	int CanBubbleBounce;
	int CanBubbleBash;
	int IsJumping;
	int IsDJumping;
	int IsBubbleSpinning;
	int IsBubbleBouncing;
	int IsBubbleBashing;
	int IsBubbleBowling;
	int WasDJumping;
	int IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int cheat_mode;
	unsigned int Inv_Shiny;
	unsigned int Inv_Spatula;
	type_61 Inv_PatsSock;
	type_64 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_68 Inv_LevelPickups;
	unsigned int Inv_LevelPickups_CurrentLevel;
	unsigned int Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_84 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_100 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_113 sb_model_indices;
	type_117 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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

struct _zUI : zEnt
{
	zUIAsset* sasset;
	unsigned int uiFlags;
	unsigned int uiButton;
	unsigned short preUpdateIndex;
	unsigned short updateIndex;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct iSndInfo
{
	unsigned int flags;
	iSndVol vol;
	unsigned int pitch;
	int lastStreamBuffer;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_121 destroyNotify;
};

struct xUpdateCullMgr
{
	unsigned int entCount;
	unsigned int entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	unsigned int mgrCount;
	unsigned int mgrCurr;
	xUpdateCullEnt* mgrList;
	unsigned int grpCount;
	xUpdateCullGroup* grpList;
	type_8 activateCB;
	type_8 deactivateCB;
};

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	unsigned int grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float minDist;
	float maxDist;
	float minHeight;
	float maxHeight;
	float maxCosAngle;
	float throwMinDist;
	float throwMaxDist;
	float throwMinHeight;
	float throwMaxHeight;
	float throwMaxStack;
	float throwMaxCosAngle;
	float throwTargetRotRate;
	float targetRot;
	unsigned int grabTarget;
	xVec3 grabOffset;
	float grabLerpMin;
	float grabLerpMax;
	float grabLerpLast;
	unsigned int grabYclear;
	float throwGravity;
	float throwHeight;
	float throwDistance;
	float fruitFloorDecayMin;
	float fruitFloorDecayMax;
	float fruitFloorBounce;
	float fruitFloorFriction;
	float fruitCeilingBounce;
	float fruitWallBounce;
	float fruitLifetime;
	xEnt* patLauncher;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_112 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float fov;
	unsigned int flags;
	float tmr;
	float tm_acc;
	float tm_dec;
	float ltmr;
	float ltm_acc;
	float ltm_dec;
	float dmin;
	float dmax;
	float dcur;
	float dgoal;
	float hmin;
	float hmax;
	float hcur;
	float hgoal;
	float pmin;
	float pmax;
	float pcur;
	float pgoal;
	float depv;
	float hepv;
	float pepv;
	float orn_epv;
	float yaw_epv;
	float pitch_epv;
	float roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float yaw_cur;
	float yaw_goal;
	float pitch_cur;
	float pitch_goal;
	float roll_cur;
	float roll_goal;
	float dct;
	float dcd;
	float dccv;
	float dcsv;
	float hct;
	float hcd;
	float hccv;
	float hcsv;
	float pct;
	float pcd;
	float pccv;
	float pcsv;
	float orn_ct;
	float orn_cd;
	float orn_ccv;
	float orn_csv;
	float yaw_ct;
	float yaw_cd;
	float yaw_ccv;
	float yaw_csv;
	float pitch_ct;
	float pitch_cd;
	float pitch_ccv;
	float pitch_csv;
	float roll_ct;
	float roll_cd;
	float roll_ccv;
	float roll_csv;
	type_82 frustplane;
};

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_87 MoveSpeed;
	type_88 AnimSneak;
	type_90 AnimWalk;
	type_93 AnimRun;
	float JumpGravity;
	float GravSmooth;
	float FloatSpeed;
	float ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float WallJumpVelocity;
	zLedgeGrabParams ledge;
	float spin_damp_xz;
	float spin_damp_y;
	unsigned char talk_anims;
	unsigned char talk_filter_size;
	type_125 talk_filter;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xRot
{
	xVec3 axis;
	float angle;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_105 beginUpdate;
	type_6 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float nearPlane;
	float farPlane;
	float fogPlane;
	float zScale;
	float zShift;
	type_44 frustumPlanes;
	RwBBox frustumBoundBox;
	type_53 frustumCorners;
};

struct RpTriangle
{
	type_76 vertIndex;
	short matIndex;
};

struct xSndVoiceInfo
{
	unsigned int assetID;
	unsigned int sndID;
	unsigned int parentID;
	xVec3* parentPos;
	int internalID;
	unsigned int flags;
	unsigned short pad;
	unsigned short priority;
	float vol;
	float pitch;
	unsigned int sample_rate;
	unsigned int deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float innerRadius2;
	float outerRadius2;
	unsigned int lock_owner;
	iSndInfo ps;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xSphere
{
	xVec3 center;
	float r;
};

enum en_XSGASYNC_STATUS
{
	XSG_ASTAT_NOOP,
	XSG_ASTAT_INPROG,
	XSG_ASTAT_SUCCESS,
	XSG_ASTAT_FAILED
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_0 light;
	type_9 light_frame;
	int memlvl;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float arot;
	float brot;
	float ss;
	float sr;
	int state;
	float tsfd;
	float trfd;
	float tsbd;
	float trbd;
	float* rotptr;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct iFogParams
{
	RwFogType type;
	float start;
	float stop;
	float density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	unsigned char* table;
};

struct st_ISGSESSION
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_27 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_103 wt;
};

struct st_XSAVEGAME_CLIENT
{
	unsigned int idtag;
	type_35 cltinfo;
	type_48 cltproc;
	type_59 cltload;
	void* cltdata;
	int needamt;
	int maxamt;
	int realamt;
	char* buf_sizepos;
	char* buf_maxpos;
	int blokact;
	int blokmax;
	char* blokpos;
	char* readpos;
	int readamt;
	int readremain;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float et;
	float wet;
	float rt;
	float wrt;
	float p;
	float brt;
	float ert;
	int state;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zSaveLoadUI
{
	unsigned int entry;
	unsigned int nameID;
	char* name;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xJSPHeader
{
	type_101 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_116 name;
	type_119 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_110 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_115 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long fog_t0;
	long fog_t1;
	int option_vibration;
	unsigned int QuarterSpeed;
	float update_dt;
	int useHIPHOP;
	unsigned char NoMusic;
	char currentActivePad;
	unsigned char firstStartPressed;
	unsigned int minVSyncCnt;
	unsigned char dontShowPadMessageDuringLoadingOrCutScene;
	unsigned char autoSaveFeature;
};

struct xVec2
{
	float x;
	float y;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct RpSector
{
	int type;
};

struct zEntHangable
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xEntAsset : xBaseAsset
{
	unsigned char flags;
	unsigned char subtype;
	unsigned char pflags;
	unsigned char moreFlags;
	unsigned char pad;
	unsigned int surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	float redMult;
	float greenMult;
	float blueMult;
	float seeThru;
	float seeThruSpeed;
	unsigned int modelInfoID;
	unsigned int animListID;
};

struct _tagxPad
{
	type_135 value;
	type_4 last_value;
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
	type_52 up_tmr;
	type_57 down_tmr;
	type_70 analog;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xEntDrive
{
	unsigned int flags;
	float otm;
	float otmr;
	float os;
	float tm;
	float tmr;
	float s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float yaw;
	xVec3 dloc;
	tri_data_0 tri;
};

enum en_XSG_WHYFAIL
{
	XSG_WHYERR_NONE,
	XSG_WHYERR_NOCARD,
	XSG_WHYERR_NOROOM,
	XSG_WHYERR_DAMAGE,
	XSG_WHYERR_CARDYANKED,
	XSG_WHYERR_OTHER,
	XSG_WHYERR_NOMORE
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCoef
{
	type_111 a;
};

struct xEntMotionMechData
{
	unsigned char type;
	unsigned char flags;
	unsigned char sld_axis;
	unsigned char rot_axis;
	float sld_dist;
	float sld_tm;
	float sld_acc_tm;
	float sld_dec_tm;
	float rot_dist;
	float rot_tm;
	float rot_acc_tm;
	float rot_dec_tm;
	float ret_delay;
	float post_ret_delay;
};

struct iSndVol
{
	short volL;
	short volR;
};

struct RxNodeMethods
{
	type_50 nodeBody;
	type_54 nodeInit;
	type_58 nodeTerm;
	type_2 pipelineNodeInit;
	type_18 pipelineNodeTerm;
	type_30 pipelineNodeConfig;
	type_46 configMsgHandler;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct RpWorld
{
	RwObject object;
	unsigned int flags;
	RpWorldRenderOrder renderOrder;
	RpMaterialList matList;
	RpSector* rootSector;
	int numTexCoordSets;
	int numClumpsInWorld;
	RwLLLink* currentClumpLink;
	RwLinkList clumpList;
	RwLinkList lightList;
	RwLinkList directionalLightList;
	RwV3d worldOrigin;
	RwBBox boundingBox;
	type_108 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int id;
	_tagTRCState state;
};

struct xSndGlobals
{
	unsigned int stereo;
	unsigned int SndCount;
	type_118 categoryVolFader;
	type_120 voice;
	type_122 listenerMat;
	sound_listener_game_mode listenerMode;
	unsigned int suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

struct _tagiPad
{
	int port;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
};

struct RxCluster
{
	unsigned short flags;
	unsigned short stride;
	void* data;
	void* currentData;
	unsigned int numAlloced;
	unsigned int numUsed;
	RxPipelineCluster* clusterRef;
	unsigned int attributes;
};

struct xShadowSimplePoly
{
	type_123 vert;
	xVec3 norm;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_134 clusters;
};

struct xEntMotion
{
	xEntMotionAsset* asset;
	unsigned char type;
	unsigned char pad;
	unsigned short flags;
	float t;
	float tmr;
	float d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct _class_2
{
	xVec3* verts;
};

struct RwLinkList
{
	RwLLLink link;
};

type_65 buffer;
type_72 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
unsigned int saveSuccess;
float time_elapsed;
float time_last;
float time_current;
long t0;
long t1;
int currentCard;
int currentGame;
int promptSel;
int badCard;
int sAvailable;
int sNeeded;
int sAccessType;
float dontPoll;
int sLastCard;
int sLastGame;
int autoSaveCard;
type_83 currSceneStr;
type_126 sceneRead;
type_40 zSaveLoadUITable;
type_23 thumbIconMap;
type_133 zSaveLoadGameTable;
unsigned char preAutoSaving;
int ps2Result;
int ps2Formatted;
int ps2CardType;
int ps2FreeSpace;
zGlobals globals;
xSndGlobals gSnd;
eGameMode gGameMode;
type_20 gTrcPad;
int gGameState;
type_107 xSGT_LoadPrefsCB;
type_80 xSGT_LoadLoadCB;
type_95 xSGT_SaveProcPrefsCB;
type_91 xSGT_SaveInfoPrefsCB;
type_74 xSGT_SaveProcCB;
type_71 xSGT_SaveInfoCB;
unsigned int gFrameCount;
float sTimeElapsed;
long sTimeLast;
long sTimeCurrent;

unsigned int zSaveLoad_slotIsEmpty(unsigned int i);
int xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int xSGT_SaveInfoPrefsCB(int* need, int* most);
int xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int xSGT_SaveInfoCB(int* need, int* most);
void zSaveLoad_DispatchCB(unsigned int dispatchEvent, float* toParam);
unsigned int zSaveLoad_SaveLoop();
unsigned int zSaveLoad_LoadLoop();
int zSaveLoad_LoadGame();
int zSaveLoad_SaveGame();
int zSaveLoad_DoAutoSave();
void zSaveLoadAutoSaveUpdate();
void zSaveLoadPreAutoSave(unsigned char onOff);
unsigned char zSaveLoadGetPreAutoSave();
int zSaveLoad_GameSelect(int mode);
void zSaveLoad_BuildName(char* name_txt, int idx);
void BuildIt(char* build_txt, int i);
int zSaveLoad_CardPick(int mode);
int zSaveLoad_CardCheckSlotOverwrite(int cardNumber, int gameNumber);
int zSaveLoad_CardCheckGames(int cardNumber, int mode);
int zSaveLoad_CardCheckSpace(int cardNumber, int mode);
int zSaveLoad_CardCheckValid(int cardNumber, int mode);
int zSaveLoad_CardCheckFormatted(int cardNumber, int mode);
int zSaveLoad_CardCheck(int cardNumber, int mode);
int zSaveLoad_CardCheckSlotEmpty_hasGame(int num, int game);
int zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int num, int game);
int zSaveLoad_CardCheckGamesSingle(int num);
int zSaveLoad_CardCheckSpaceSingle(int num);
int zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int num);
int zSaveLoad_CardCheckFormattedSingle(int num);
int zSaveLoad_CardCheckSingle(int num);
int zSaveLoad_CardPrompt(int mode);
int CardtoTgt(int card);
int format(int num, int mode);
int zSaveLoadGetAutoSaveCard();
int zSaveLoad_getMCAccessType();
int zSaveLoad_getMCneeded();
int zSaveLoad_getMCavailable();
int zSaveLoad_getcard();
int zSaveLoad_getgame();
void zSaveLoad_Tick();
void zUpdateThumbIcon();

// zSaveLoad_slotIsEmpty__FUi
// Start address: 0x192190
unsigned int zSaveLoad_slotIsEmpty(unsigned int i)
{
}

// xSGT_LoadPrefsCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1921e0
int xSGT_LoadPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_78 bigbuf;
}

// xSGT_LoadLoadCB__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1922d0
int xSGT_LoadLoadCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_97 bigbuf;
	int compdiff;
}

// xSGT_SaveProcPrefsCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1923a0
int xSGT_SaveProcPrefsCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int amy;
	int sum;
}

// xSGT_SaveInfoPrefsCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192450
int xSGT_SaveInfoPrefsCB(int* need, int* most)
{
}

// xSGT_SaveProcCB__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x192470
int xSGT_SaveProcCB(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int amy;
	int sum;
}

// xSGT_SaveInfoCB__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x192530
int xSGT_SaveInfoCB(int* need, int* most)
{
	int slen;
}

// zSaveLoad_DispatchCB__FUiPCf
// Start address: 0x192580
void zSaveLoad_DispatchCB(unsigned int dispatchEvent, float* toParam)
{
	st_XSAVEGAME_DATA* inst;
}

// zSaveLoad_SaveLoop__Fv
// Start address: 0x192660
unsigned int zSaveLoad_SaveLoop()
{
	int result;
	int state;
	int tmp;
	xBase* sendTo;
	xBase* sendTo;
	int tmp;
	xBase* sendTo;
}

// zSaveLoad_LoadLoop__Fv
// Start address: 0x192c90
unsigned int zSaveLoad_LoadLoop()
{
	int state;
	int tmp;
	int tmp;
	int result;
}

// zSaveLoad_LoadGame__Fv
// Start address: 0x193060
int zSaveLoad_LoadGame()
{
	int success;
	int teststat;
	int rc;
	en_XSGASYNC_STATUS asstat;
	int use_tgt;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
	int use_game;
}

// zSaveLoad_SaveGame__Fv
// Start address: 0x193340
int zSaveLoad_SaveGame()
{
	int success;
	int teststat;
	int rc;
	en_XSGASYNC_STATUS asstat;
	int use_tgt;
	int use_game;
	unsigned int progress;
	type_38 label;
	char* area;
	en_XSG_WHYFAIL whyFail;
	XSGAutoData* asg;
}

// zSaveLoad_DoAutoSave__Fv
// Start address: 0x193790
int zSaveLoad_DoAutoSave()
{
	int success;
	int teststat;
	int rc;
	en_XSGASYNC_STATUS asstat;
	st_XSAVEGAME_DATA* svinst;
	XSGAutoData* autodata;
	int use_tgt;
	unsigned int progress;
	type_14 label;
	char* area;
}

// zSaveLoadAutoSaveUpdate__Fv
// Start address: 0x193af0
void zSaveLoadAutoSaveUpdate()
{
	xBase* sendTo;
	XSGAutoData* autodata;
	int result;
}

// zSaveLoadPreAutoSave__Fb
// Start address: 0x193d30
void zSaveLoadPreAutoSave(unsigned char onOff)
{
}

// zSaveLoadGetPreAutoSave__Fv
// Start address: 0x193d40
unsigned char zSaveLoadGetPreAutoSave()
{
}

// zSaveLoad_GameSelect__Fi
// Start address: 0x193d50
int zSaveLoad_GameSelect(int mode)
{
	int done;
	int i;
	st_XSAVEGAME_DATA* svinst;
	int use_tgt;
	int emptyCount;
}

// zSaveLoad_BuildName__FPci
// Start address: 0x194640
void zSaveLoad_BuildName(char* name_txt, int idx)
{
	type_102 desired;
	type_106 current_name;
	int counter;
	int i;
}

// BuildIt__FPci
// Start address: 0x194750
void BuildIt(char* build_txt, int i)
{
	type_25 date1;
	type_39 date2;
	type_43 biggerbuf;
	type_56 displaySizeUnit;
}

// zSaveLoad_CardPick__Fi
// Start address: 0x194970
int zSaveLoad_CardPick(int mode)
{
	int done;
	unsigned char formatDone;
}

// zSaveLoad_CardCheckSlotOverwrite__Fii
// Start address: 0x194f30
int zSaveLoad_CardCheckSlotOverwrite(int cardNumber, int gameNumber)
{
}

// zSaveLoad_CardCheckGames__Fii
// Start address: 0x195190
int zSaveLoad_CardCheckGames(int cardNumber, int mode)
{
	int result;
	int tmp;
}

// zSaveLoad_CardCheckSpace__Fii
// Start address: 0x195330
int zSaveLoad_CardCheckSpace(int cardNumber, int mode)
{
	int result;
	int tmp;
}

// zSaveLoad_CardCheckValid__Fii
// Start address: 0x1954d0
int zSaveLoad_CardCheckValid(int cardNumber, int mode)
{
}

// zSaveLoad_CardCheckFormatted__Fii
// Start address: 0x195510
int zSaveLoad_CardCheckFormatted(int cardNumber, int mode)
{
	int result;
}

// zSaveLoad_CardCheck__Fii
// Start address: 0x195700
int zSaveLoad_CardCheck(int cardNumber, int mode)
{
	int result;
	int cardResult;
}

// zSaveLoad_CardCheckSlotEmpty_hasGame__Fii
// Start address: 0x1957a0
int zSaveLoad_CardCheckSlotEmpty_hasGame(int num, int game)
{
	st_XSAVEGAME_DATA* ldinst;
	int tgtcnt;
	int tgtmax;
	int rc;
	int tgtslot;
}

// zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck__FP17st_XSAVEGAME_DATAii
// Start address: 0x1958a0
int zSaveLoad_CardCheckSlotEmpty_hasGame_doCheck(st_XSAVEGAME_DATA* xsgdata, int num, int game)
{
	int rc;
}

// zSaveLoad_CardCheckGamesSingle__Fi
// Start address: 0x1959e0
int zSaveLoad_CardCheckGamesSingle(int num)
{
	st_XSAVEGAME_DATA* ldinst;
	int tgtcnt;
	int tgtmax;
	int rc;
	int tgtslot;
}

// zSaveLoad_CardCheckSpaceSingle__Fi
// Start address: 0x195b40
int zSaveLoad_CardCheckSpaceSingle(int num)
{
	st_XSAVEGAME_DATA* ldinst;
	int tgtcnt;
	int tgtmax;
	int rc;
	int tgtslot;
}

// zSaveLoad_CardCheckSpaceSingle_doCheck__FP17st_XSAVEGAME_DATAi
// Start address: 0x195c20
int zSaveLoad_CardCheckSpaceSingle_doCheck(st_XSAVEGAME_DATA* xsgdata, int num)
{
	int rc;
}

// zSaveLoad_CardCheckFormattedSingle__Fi
// Start address: 0x195cb0
int zSaveLoad_CardCheckFormattedSingle(int num)
{
	st_XSAVEGAME_DATA* ldinst;
	int tgtcnt;
	int tgtmax;
	int rc;
	int tgtslot;
}

// zSaveLoad_CardCheckSingle__Fi
// Start address: 0x195df0
int zSaveLoad_CardCheckSingle(int num)
{
	st_XSAVEGAME_DATA* ldinst;
	int tgtcnt;
	int tgtmax;
	int tgtslot;
}

// zSaveLoad_CardPrompt__Fi
// Start address: 0x195eb0
int zSaveLoad_CardPrompt(int mode)
{
}

// CardtoTgt__Fi
// Start address: 0x196060
int CardtoTgt(int card)
{
	st_XSAVEGAME_DATA* ldinst;
	int tgtcnt;
	int tgtmax;
}

// format__Fii
// Start address: 0x196100
int format(int num, int mode)
{
	int tgtcnt;
	int tgtmax;
	int rc;
	int tgtslot;
}

// zSaveLoadGetAutoSaveCard__Fv
// Start address: 0x1965e0
int zSaveLoadGetAutoSaveCard()
{
}

// zSaveLoad_getMCAccessType__Fv
// Start address: 0x1965f0
int zSaveLoad_getMCAccessType()
{
}

// zSaveLoad_getMCneeded__Fv
// Start address: 0x196600
int zSaveLoad_getMCneeded()
{
}

// zSaveLoad_getMCavailable__Fv
// Start address: 0x196610
int zSaveLoad_getMCavailable()
{
}

// zSaveLoad_getcard__Fv
// Start address: 0x196620
int zSaveLoad_getcard()
{
}

// zSaveLoad_getgame__Fv
// Start address: 0x196630
int zSaveLoad_getgame()
{
}

// zSaveLoad_Tick__Fv
// Start address: 0x196640
void zSaveLoad_Tick()
{
	xMat4x3 playerMat;
}

// zUpdateThumbIcon__Fv
// Start address: 0x196830
void zUpdateThumbIcon()
{
	int i;
	_zUI* gameSlot;
	int start;
	int end;
	unsigned int id;
	_zUI* thumbIcon;
	int index;
}

