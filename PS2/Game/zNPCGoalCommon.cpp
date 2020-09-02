typedef struct NPCConfig;
typedef struct xEnv;
typedef struct RwObjectHasFrame;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct zNPCSettings;
typedef union _class_0;
typedef enum en_trantype;
typedef struct _class_1;
typedef struct xAnimState;
typedef struct xCollis;
typedef struct RwV3d;
typedef struct rxHeapFreeBlock;
typedef struct zParEmitter;
typedef struct RpTriangle;
typedef struct xPSYNote;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct xEntShadow;
typedef struct xModelPool;
typedef struct xAnimEffect;
typedef struct zFragLightning;
typedef struct RxNodeDefinition;
typedef struct _tagLightningZeus;
typedef struct zFragBone;
typedef struct zNPCCommon;
typedef struct RpMeshHeader;
typedef struct zFragLightningAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zNPCGoalCommon;
typedef struct _tagEmitSphere;
typedef struct RxPipeline;
typedef struct iEnv;
typedef struct xAnimPlay;
typedef struct RxPipelineCluster;
typedef struct NPCSndTrax;
typedef struct xAnimFile;
typedef struct NPCSndQueue;
typedef struct RxPipelineNodeParam;
typedef struct zFrag;
typedef struct RwResEntry;
typedef struct zFragAsset;
typedef struct xLightKit;
typedef struct RxHeap;
typedef struct RpGeometry;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xJSPNodeInfo;
typedef struct zLightning;
typedef struct xQCData;
typedef struct xMovePointAsset;
typedef struct xAnimTransitionList;
typedef struct xAnimTransition;
typedef struct xQuat;
typedef struct RwTexCoords;
typedef struct zShrapnelAsset;
typedef struct xModelTag;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct xLinkAsset;
typedef struct xVec3;
typedef struct xPsyche;
typedef union zFragLocInfo;
typedef struct _tagEmitRect;
typedef struct RxPipelineRequiresCluster;
typedef struct xParabola;
typedef struct xClumpCollBSPBranchNode;
typedef enum en_NPC_SOUND;
typedef struct xGoal;
typedef struct zFragSound;
typedef enum RpWorldRenderOrder;
typedef struct xSurface;
typedef struct xParEmitterCustomSettings;
typedef struct zFragProjectileAsset;
typedef struct RpMaterial;
typedef struct zFragSoundAsset;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct xAnimMultiFile;
typedef struct xFactoryInst;
typedef struct RwTexture;
typedef struct xEntAsset;
typedef struct RpSector;
typedef struct RwSurfaceProperties;
typedef struct xBase;
typedef struct xBound;
typedef struct RwMatrixTag;
typedef struct xCoef3;
typedef struct zFragLocation;
typedef struct xPEEntBound;
typedef struct rxReq;
typedef struct xDynAsset;
typedef struct RwRaster;
typedef struct _tagEmitLine;
typedef struct RpWorldSector;
typedef enum RxClusterValidityReq;
typedef struct xBBox;
typedef struct xClumpCollBSPTree;
typedef struct RpMorphTarget;
typedef struct zNPCLassoInfo;
typedef struct zFragShockwave;
typedef struct RpLight;
typedef struct xEntFrame;
typedef struct xEnt;
typedef struct zFragShockwaveAsset;
typedef struct xEntNPCAsset;
typedef struct xMat4x3;
typedef struct xEntDrive;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimTable;
typedef enum zFragType;
typedef struct xRot;
typedef enum en_pendtype;
typedef struct xScene;
typedef struct xCurveAsset;
typedef struct xNPCBasic;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGridBound;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct xShadowSimplePoly;
typedef struct xListItem_0;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwLLLink;
typedef struct xParEmitterAsset;
typedef struct zMovePoint;
typedef struct xAnimMultiFileEntry;
typedef struct xParGroup;
typedef struct tri_data_0;
typedef struct xAnimActiveEffect;
typedef struct xBox;
typedef struct _class_2;
typedef struct RxClusterDefinition;
typedef struct xParEmitterPropsAsset;
typedef struct zFragGroup;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct RwFrame;
typedef struct xListItem_1;
typedef struct _tagEmitOffsetPoint;
typedef union zFragInfo;
typedef struct xShadowSimpleCache;
typedef struct RwSphere;
typedef struct xSpline3;
typedef struct xMovePoint;
typedef struct tri_data_1;
typedef struct RwTexDictionary;
typedef struct RpInterpolator;
typedef struct RxOutputSpec;
typedef struct xAnimMultiFileBase;
typedef struct RyzMemData;
typedef struct _class_3;
typedef struct xMat3x3;
typedef struct _class_4;
typedef enum en_NPC_GOAL_SPOT;
typedef enum PSY_BRAIN_STATUS;
typedef enum en_npcbtyp;
typedef struct RxClusterRef;
typedef struct xBaseAsset;
typedef struct zFragParticle;
typedef struct xPEVCyl;
typedef struct RwObject;
typedef struct RpPolygon;
typedef enum en_GOALSTATE;
typedef struct xFFX;
typedef struct zFragParticleAsset;
typedef struct RxIoSpec;
typedef struct xCoef;
typedef struct RpMaterialList;
typedef struct xParInterp;
typedef struct xParSys;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xModelAssetParam;
typedef enum en_LASSO_STATUS;
typedef struct _tagLightningLine;
typedef struct zFragProjectile;
typedef struct xClumpCollBSPVertInfo;
typedef struct anim_coll_data;
typedef struct xPEEntBone;
typedef enum en_dupowavmod;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef enum zFragLocType;
typedef struct RxPacket;
typedef struct _tagLightningRot;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct _anon0;
typedef struct xPECircle;
typedef struct RwLinkList;

typedef void(*type_0)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_4)(int*, en_trantype*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpAtomic*(*type_14)(RpAtomic*);
typedef int(*type_15)(RxPipelineNode*, RxPipeline*);
typedef void(*type_17)(zFrag*, zFragAsset*);
typedef unsigned int(*type_22)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_25)(zShrapnelAsset*, xModelInstance*, xVec3*, type_17);
typedef int(*type_27)(RxNodeDefinition*);
typedef void(*type_29)(RxNodeDefinition*);
typedef void(*type_33)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_37)(xGoal*, void*, float, void*);
typedef xBase*(*type_38)(unsigned int);
typedef RpWorldSector*(*type_42)(RpWorldSector*);
typedef char*(*type_43)(xBase*);
typedef int(*type_44)(xGoal*, void*, en_trantype*, float, void*);
typedef void(*type_45)(xEnt*);
typedef char*(*type_46)(unsigned int);
typedef void(*type_47)(xEnt*);
typedef int(*type_48)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_50)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_53)(xEnt*, xScene*, float);
typedef void(*type_55)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_56)(xEnt*, xVec3*);
typedef void(*type_60)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef unsigned int(*type_63)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_69)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_83)(zFrag*, float);
typedef void(*type_85)(xMemPool*, void*);
typedef void(*type_90)(RwResEntry*);
typedef RpClump*(*type_91)(RpClump*, void*);

typedef float type_1[4];
typedef xModelTag type_5[20];
typedef float type_6[4];
typedef xVec3 type_9[9];
typedef xVec3 type_10[2];
typedef int type_11[5];
typedef unsigned short type_12[3];
typedef xParInterp type_13[1];
typedef float type_16[2];
typedef float type_18[2];
typedef unsigned char type_19[4];
typedef char type_20[3];
typedef float type_21[2];
typedef float type_26[2];
typedef xParInterp type_28[4];
typedef xParInterp type_30[4];
typedef char type_31[4];
typedef RwTexCoords* type_32[8];
typedef char type_34[16];
typedef float type_35[4];
typedef unsigned char type_39[3];
typedef float type_40[4];
typedef char type_41[16];
typedef float type_49[4];
typedef xVec3 type_51[3];
typedef float type_52[4];
typedef RpLight* type_54[2];
typedef RwFrame* type_57[2];
typedef unsigned int type_58[4];
typedef zFrag* type_59[21];
typedef float type_61[16];
typedef unsigned int type_64[2];
typedef float type_65[2];
typedef unsigned char type_66[3];
typedef unsigned char type_67[3];
typedef unsigned char type_68[3];
typedef xGoal* type_70[5];
typedef xVec3 type_71[16];
typedef float type_72[1];
typedef xVec3 type_73[16];
typedef type_72 type_74[5];
typedef unsigned char type_75[3];
typedef unsigned char type_76[2];
typedef unsigned short type_77[3];
typedef float type_78[4];
typedef float type_79[16];
typedef float type_80[2];
typedef xVec3 type_81[4];
typedef unsigned char type_82[2];
typedef xAnimMultiFileEntry type_84[1];
typedef char type_86[32];
typedef NPCSndQueue type_87[4];
typedef char type_88[32];
typedef xModelInstance* type_89[2];
typedef xCollis type_92[18];
typedef RwTexCoords* type_93[8];
typedef float type_94[16];
typedef RxCluster type_95[1];

struct NPCConfig : xListItem_1
{
	unsigned int modelID;
	int flg_config;
	float spd_turnMax;
	float spd_moveMax;
	float fac_accelMax;
	float fac_driftMax;
	float fac_gravKnock;
	float fac_elastic;
	int pts_damage;
	int useBoxBound;
	xVec3 off_bound;
	xVec3 dim_bound;
	float npcMass;
	float npcMassInv;
	float rad_detect;
	float hyt_detect;
	float off_detect;
	float rad_attack;
	float fov_attack;
	xVec3 scl_model;
	float tym_attack;
	float tym_fidget;
	float tym_stun;
	float tym_alert;
	float dst_castShadow;
	float rad_shadowCache;
	float rad_shadowRaster;
	float rad_dmgSize;
	int flg_vert;
	type_5 tag_vert;
	type_9 animFrameRange;
	type_11 cnt_esteem;
	float rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int test_count;
	type_19 talk_filter;
	unsigned char talk_filter_size;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_7 sync;
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

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	char allowDetect;
	char allowPatrol;
	char allowWander;
	char reduceCollide;
	char useNavSplines;
	type_20 pad;
	char allowChase;
	char allowAttack;
	char assumeLOS;
	char assumeFOV;
	en_dupowavmod duploWaveMode;
	float duploSpawnDelay;
	int duploSpawnLifeMax;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct _class_1
{
	type_10 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_16 endParam;
	type_18 endVel;
	type_21 paramSpan;
	float arc_height;
	xVec3 arc_normal;
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
	type_33 BeforeEnter;
	type_36 StateCallback;
	type_3 BeforeAnimMatrices;
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
		_class_4 tuv;
		tri_data_0 tri;
	};
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct zParEmitter : xParEmitter
{
};

struct RpTriangle
{
	type_12 vertIndex;
	short matIndex;
};

struct xPSYNote
{
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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
	type_14 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_26 radius;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_63 Callback;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
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

struct _tagLightningZeus
{
	float normal_offset;
	float back_offset;
	float side_offset;
};

struct zFragBone
{
	int index;
	xVec3 offset;
};

struct zNPCCommon : xNPCBasic
{
	xEntAsset* entass;
	xEntNPCAsset* npcass;
	zNPCSettings* npcsetass;
	int flg_vuln;
	int flg_move;
	int flg_misc;
	int flg_able;
	NPCConfig* cfg_npc;
	zNPCSettings npcset;
	zMovePoint* nav_past;
	zMovePoint* nav_curr;
	zMovePoint* nav_dest;
	zMovePoint* nav_lead;
	xSpline3* spl_mvptspline;
	float len_mvptspline;
	float dst_curspline;
	xEntDrive* drv_data;
	xPsyche* psy_instinct;
	zNPCCommon* npc_duplodude;
	float spd_throttle;
	int flg_xtrarend;
	float tmr_fidget;
	float tmr_invuln;
	zShrapnelAsset* explosion;
	xModelAssetParam* parmdata;
	unsigned int pdatsize;
	zNPCLassoInfo* lassdata;
	type_87 snd_queue;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	unsigned int startParentID;
	unsigned int endParentID;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct _tagEmitSphere
{
	float radius;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_54 light;
	type_57 light_frame;
	int memlvl;
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
	type_3 BeforeAnimMatrices;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	char* nam_sound;
	unsigned int aid_sound;
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
	type_82 NumAnims;
	void** RawData;
};

struct NPCSndQueue
{
	unsigned int sndDirect;
	en_NPC_SOUND sndtype;
	int flg_snd;
	float tmr_delay;
	float radius;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float delay;
	float alivetime;
	float lifetime;
	type_83 update;
	type_89 parent;
	zFrag* prev;
	zFrag* next;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_90 destroyNotify;
};

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_64 parentID;
	float lifetime;
	float delay;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_32 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct zLightning
{
	unsigned int type;
	unsigned int flags;
	union
	{
		_class_3 legacy;
		_class_1 func;
	};
	iColor_tag color;
	float time_left;
	float time_total;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_23 Conditional;
	type_23 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_25 initCB;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_35 wt;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_91 callback;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_58 pad;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_40 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int flg_psyche;
	xGoal* goallist;
	type_70 goalstak;
	type_74 tmr_stack;
	int staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int gid_safegoal;
	type_4 fun_remap;
	void* userContext;
	int cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float gravity;
	float minTime;
	float maxTime;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

enum en_NPC_SOUND
{
	NPC_STYP_BOGUS = 0xfffffffe,
	NPC_STYP_LISTEND = 0,
	NPC_STYP_ENCOUNTER,
	NPC_STYP_CLANKING,
	NPC_STYP_EXCLAIM,
	NPC_STYP_OUCH,
	NPC_STYP_CHEERING,
	NPC_STYP_RESPAWN,
	NPC_STYP_ALERT,
	NPC_STYP_DIZZY,
	NPC_STYP_DANCE,
	NPC_STYP_LAUGH,
	NPC_STYP_ATTACK,
	NPC_STYP_PUNCH,
	NPC_STYP_WEPLAUNCH,
	NPC_STYP_LIGHTNING,
	NPC_STYP_WARNBANG,
	NPC_STYP_DEATH,
	NPC_STYP_DEATHJELLY,
	NPC_STYP_BONKED,
	NPC_STYP_UNBONKED,
	NPC_STYP_TIKISTACK,
	NPC_STYP_TIKIEXPLODE,
	NPC_STYP_TIKITHUNDER,
	NPC_STYP_XSFXTALK,
	NPC_STYP_ONELINER,
	NPC_STYP_ONELINERTOO,
	NPC_STYP_NOMORE,
	NPC_STYP_FORCE = 0x7fffffff
};

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int goalID;
	en_GOALSTATE stat;
	int flg_able;
	type_48 fun_process;
	type_37 fun_precalc;
	type_44 fun_chkRule;
	void* cbdata;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	unsigned int soundID;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_66 pad;
	void* moprops;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_39 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct zFragProjectileAsset : zFragAsset
{
	unsigned int modelInfoID;
	RpAtomic* modelFile;
	zFragLocation launch;
	zFragLocation vel;
	float bounce;
	int maxBounces;
	unsigned int flags;
	unsigned int childID;
	zShrapnelAsset* child;
	float minScale;
	float maxScale;
	unsigned int scaleCurveID;
	xCurveAsset* scaleCurve;
	float gravity;
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

struct zFragSoundAsset : zFragAsset
{
	unsigned int assetID;
	zFragLocation source;
	float volume;
	float innerRadius;
	float outerRadius;
};

struct xJSPHeader
{
	type_31 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_84 Files;
};

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_88 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct RpSector
{
	int type;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_50 eventFunc;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_75 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
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

struct rxReq
{
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_93 texCoords;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zNPCLassoInfo
{
	en_LASSO_STATUS stage;
	xEnt* lassoee;
	xAnimState* holdGuideAnim;
	xModelInstance* holdGuideModel;
	xAnimState* grabGuideAnim;
	xModelInstance* grabGuideModel;
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float currSize;
	float currVelocity;
	float deltVelocity;
	float currSpin;
	float deltSpin;
	type_49 currColor;
	type_52 deltColor;
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
	type_53 update;
	type_53 endUpdate;
	type_56 bupdate;
	type_60 move;
	type_62 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_0 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zFragShockwaveAsset : zFragAsset
{
	unsigned int modelInfoID;
	float birthRadius;
	float deathRadius;
	float birthVelocity;
	float deathVelocity;
	float birthSpin;
	float deathSpin;
	type_1 birthColor;
	type_6 deathColor;
};

struct xEntNPCAsset
{
	int npcFlags;
	int npcModel;
	int npcProps;
	unsigned int movepoint;
	unsigned int taskWidgetPrime;
	unsigned int taskWidgetSecond;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	tri_data_1 tri;
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
	type_42 renderCallBack;
	RxPipeline* pipeline;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct xRot
{
	xVec3 axis;
	float angle;
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
	type_38 resolvID;
	type_43 base2Name;
	type_46 id2Name;
};

struct xCurveAsset
{
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_45 f_setup;
	type_47 f_reset;
	union
	{
		int flg_basenpc;
		int inUpdate;
		int flg_upward;
	};
	int colFreq;
	int colFreqReset;
	union
	{
		unsigned int flg_colCheck;
		unsigned int flg_penCheck;
		unsigned int flg_unused;
	};
	int myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
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

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	unsigned char rate_mode;
	float rate;
	float rate_time;
	float rate_fraction;
	float rate_fraction_cull;
	unsigned char emit_flags;
	type_67 emit_pad;
	type_68 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct xShadowSimplePoly
{
	type_51 vert;
	xVec3 norm;
};

struct xListItem_0
{
	int flg_travFilter;
	xGoal* next;
	xGoal* prev;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct zMovePoint : xMovePoint
{
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xParGroup
{
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _class_2
{
	xVec3* verts;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_13 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_28 color_birth;
	type_30 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct zFragGroup
{
	type_59 list;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_61 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_92 colls;
	type_55 post;
	type_69 depenq;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_65 BilinearLerp;
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

struct xListItem_1
{
	int flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

union zFragInfo
{
	zFragGroup group;
	zFragParticle particle;
	zFragProjectile projectile;
	zFragLightning lightning;
	zFragSound sound;
	zFragShockwave shockwave;
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
	type_81 corner;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_76 pad;
	float delay;
	xSpline3* spl;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RyzMemData
{
};

struct _class_3
{
	type_71 base_point;
	type_73 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_79 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
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

struct _class_4
{
	float t;
	float u;
	float v;
};

enum en_NPC_GOAL_SPOT
{
	NPC_GSPOT_START = 0x20,
	NPC_GSPOT_RESUME,
	NPC_GSPOT_FINISH,
	NPC_GSPOT_STARTALT,
	NPC_GSPOT_ALTA,
	NPC_GSPOT_ALTB,
	NPC_GSPOT_PATROLPAUSE,
	NPC_GSPOT_NOMORE,
	NPC_GSPOT_FORCEINT = 0x7fffffff
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

enum en_npcbtyp
{
	NPCP_BASIS_NONE,
	NPCP_BASIS_EVILROBOT,
	NPCP_BASIS_FRIENDLYROBOT,
	NPCP_BASIS_LOVINGCITIZEN,
	NPCP_BASIS_GRUMPYCITIZEN,
	NPCP_BASIS_NOMORE,
	NPCP_BASIS_FORCE = 0x7fffffff
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_77 vertIndex;
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

struct xFFX
{
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	unsigned int parEmitterID;
	zParEmitter* parEmitter;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xCoef
{
	type_78 a;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xParInterp
{
	type_80 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct xParSys
{
};

struct RxNodeMethods
{
	type_24 nodeBody;
	type_27 nodeInit;
	type_29 nodeTerm;
	type_2 pipelineNodeInit;
	type_8 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_22 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_85 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xModelAssetParam
{
};

enum en_LASSO_STATUS
{
	LASS_STAT_DONE,
	LASS_STAT_PENDING,
	LASS_STAT_GRABBING,
	LASS_STAT_TOSSING,
	LASS_STAT_NOMORE,
	LASS_STAT_FORCEINT = 0x7fffffff
};

struct _tagLightningLine
{
	float unused;
};

struct zFragProjectile
{
	zFragProjectileAsset* fasset;
	xModelInstance* model;
	xParabola path;
	float angVel;
	float t;
	float tColl;
	int numBounces;
	float scale;
	float parentScale;
	float alpha;
	xVec3 N;
	xVec3 axis;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct anim_coll_data
{
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

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

enum zFragLocType
{
	eFragLocBone,
	eFragLocBoneUpdated,
	eFragLocBoneLocal,
	eFragLocBoneLocalUpdated,
	eFragLocTag,
	eFragLocTagUpdated,
	eFragLocCount,
	eFragLocForceSize = 0x7fffffff
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_95 clusters;
};

struct _tagLightningRot
{
	type_94 deg;
	float degrees;
	float height;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct _anon0
{
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct RwLinkList
{
	RwLLLink link;
};

type_34 buffer;
type_41 buffer;
_anon0 __vt__14zNPCGoalCommon;

unsigned int DoExplicitAnim(zNPCGoalCommon* this, unsigned int anid, int forceRestart);
unsigned int DoAutoAnim(zNPCGoalCommon* this, en_NPC_GOAL_SPOT gspot, int forceRestart);
int PreCalc(zNPCGoalCommon* this, float dt, void* updCtxt);
int Resume(zNPCGoalCommon* this);
int Enter(zNPCGoalCommon* this);

// DoExplicitAnim__14zNPCGoalCommonFUii
// Start address: 0x2cac10
unsigned int DoExplicitAnim(zNPCGoalCommon* this, unsigned int anid, int forceRestart)
{
	int rc;
}

// DoAutoAnim__14zNPCGoalCommonF16en_NPC_GOAL_SPOTi
// Start address: 0x2cac90
unsigned int DoAutoAnim(zNPCGoalCommon* this, en_NPC_GOAL_SPOT gspot, int forceRestart)
{
	unsigned int anid;
}

// PreCalc__14zNPCGoalCommonFfPv
// Start address: 0x2cad50
int PreCalc(zNPCGoalCommon* this, float dt, void* updCtxt)
{
	zNPCCommon* npc;
	unsigned int curid;
}

// Resume__14zNPCGoalCommonFfPv
// Start address: 0x2cae30
int Resume(zNPCGoalCommon* this)
{
	int gid;
}

// Enter__14zNPCGoalCommonFfPv
// Start address: 0x2caf10
int Enter(zNPCGoalCommon* this)
{
	int gid;
}

