typedef struct xClumpCollBSPBranchNode;
typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct zNPCGoalTikiCount;
typedef struct _tagLightningLine;
typedef struct xParGroup;
typedef struct RxPipelineNode;
typedef struct anim_coll_data;
typedef struct RpClump;
typedef struct zFrag;
typedef struct xPEEntBone;
typedef struct _anon0;
typedef struct RpGeometry;
typedef struct xClumpCollBSPTriangle;
typedef struct RpWorldSector;
typedef struct xBase;
typedef struct xParEmitterAsset;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct zFragParticleAsset;
typedef struct xGoal;
typedef struct _anon1;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xEnv;
typedef struct RxNodeDefinition;
typedef struct xMat4x3;
typedef struct RpPolygon;
typedef struct xAnimEffect;
typedef struct zNPCGoalTikiPatrol;
typedef struct xParEmitterPropsAsset;
typedef struct RwV3d;
typedef struct zNPCTiki;
typedef struct xSpline3;
typedef struct NPCConfig;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zNPCGoalTikiIdle;
typedef struct zNPCGoalTikiDead;
typedef struct zNPCSettings;
typedef struct RpVertexNormal;
typedef struct RxPipeline;
typedef struct xAnimSingle;
typedef struct RxPipelineCluster;
typedef struct xListItem_0;
typedef struct RxPipelineNodeParam;
typedef struct xAnimState;
typedef struct zParEmitter;
typedef struct _tagLightningRot;
typedef struct xParSys;
typedef struct RwTexCoords;
typedef enum en_trantype;
typedef struct RxHeap;
typedef struct xFactoryInst;
typedef struct xPECircle;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xVec3;
typedef struct xQuat;
typedef struct zFragLightning;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef union _class_0;
typedef struct zFragBone;
typedef struct rxHeapBlockHeader;
typedef struct xModelInstance;
typedef struct zFragLightningAsset;
typedef struct NPCSndTrax;
typedef struct RxPipelineRequiresCluster;
typedef struct NPCSndQueue;
typedef struct zNPCGoalCommon;
typedef struct _class_1;
typedef struct zFragAsset;
typedef struct RpTriangle;
typedef struct xPSYNote;
typedef struct xCollis;
typedef struct xEntShadow;
typedef struct RpAtomic;
typedef struct xModelPool;
typedef struct zLightning;
typedef struct _tagEmitSphere;
typedef struct zShrapnelAsset;
typedef struct iEnv;
typedef struct _tagLightningZeus;
typedef struct zNPCCommon;
typedef struct xAnimFile;
typedef union zFragLocInfo;
typedef struct xLightKit;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xJSPNodeInfo;
typedef struct rxReq;
typedef struct xMovePointAsset;
typedef enum en_NPC_SOUND;
typedef struct zFragSound;
typedef struct xAnimTransitionList;
typedef struct xAnimTransition;
typedef struct _anon2;
typedef struct RwRaster;
typedef struct xQCData;
typedef enum RxClusterValidityReq;
typedef struct zFragProjectileAsset;
typedef struct zFragSoundAsset;
typedef struct xModelTag;
typedef struct xLinkAsset;
typedef struct xPsyche;
typedef struct _tagEmitRect;
typedef struct xParabola;
typedef struct xCoef3;
typedef struct zFragLocation;
typedef enum RxNodeDefEditable;
typedef struct xDynAsset;
typedef enum RxClusterValid;
typedef struct xParEmitterCustomSettings;
typedef enum RpWorldRenderOrder;
typedef struct xSurface;
typedef struct _anon3;
typedef struct xJSPHeader;
typedef struct RpMaterial;
typedef struct xRot;
typedef struct _anon4;
typedef struct xModelBucket;
typedef struct zNPCLassoInfo;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xEntAsset;
typedef struct zNPCGoalTikiHide;
typedef struct zFragShockwave;
typedef struct zNPCGoalTikiDying;
typedef struct RpSector;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef struct xPEEntBound;
typedef struct zFragShockwaveAsset;
typedef struct RyzMemGrow;
typedef struct xEntNPCAsset;
typedef enum RxClusterForcePresent;
typedef struct _tagEmitLine;
typedef struct xClumpCollBSPTree;
typedef enum zFragType;
typedef struct xCylinder;
typedef struct xBBox;
typedef struct xBox;
typedef struct xCurveAsset;
typedef struct RxClusterDefinition;
typedef struct RpLight;
typedef struct xEntFrame;
typedef struct xEntDrive;
typedef struct RpWorld;
typedef struct xNPCBasic;
typedef struct RwSphere;
typedef enum en_pendtype;
typedef struct zMovePoint;
typedef struct xScene;
typedef struct RwTexDictionary;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct RxOutputSpec;
typedef struct xShadowSimplePoly;
typedef struct xGridBound;
typedef struct zFragGroup;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xListItem_1;
typedef struct RwLLLink;
typedef union zFragInfo;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_0;
typedef struct RwObject;
typedef struct xAnimActiveEffect;
typedef struct _class_2;
typedef struct _anon5;
typedef struct _anon6;
typedef struct RxIoSpec;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct _tagEmitOffsetPoint;
typedef struct xShadowSimpleCache;
typedef struct RxNodeMethods;
typedef struct xMovePoint;
typedef enum en_npcbtyp;
typedef struct zFragParticle;
typedef struct tri_data_1;
typedef struct RpInterpolator;
typedef struct xCoef;
typedef struct xAnimMultiFileBase;
typedef struct _anon7;
typedef struct RyzMemData;
typedef struct _class_3;
typedef struct _class_4;
typedef enum PSY_BRAIN_STATUS;
typedef struct RxCluster;
typedef struct xBaseAsset;
typedef struct xPEVCyl;
typedef struct xFFX;
typedef enum en_GOALSTATE;
typedef enum en_LASSO_STATUS;
typedef struct xModelAssetParam;
typedef struct RxPacket;
typedef struct zFragProjectile;
typedef struct RpMaterialList;
typedef struct xParInterp;
typedef struct iColor_tag;
typedef enum en_dupowavmod;
typedef struct RwRGBAReal;
typedef enum zFragLocType;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwLinkList;

typedef void(*type_0)(xEnt*, xVec3*);
typedef void(*type_1)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_2)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef xBase*(*type_7)(unsigned int);
typedef void(*type_9)(xEnt*, xScene*, float, xEntCollis*);
typedef int(*type_10)(RxPipelineNode*, RxPipeline*);
typedef char*(*type_11)(xBase*);
typedef unsigned int(*type_14)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef char*(*type_17)(unsigned int);
typedef unsigned int(*type_20)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_23)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_24)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_25)(int*, en_trantype*);
typedef int(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_27)(RxNodeDefinition*);
typedef void(*type_28)(zFrag*, zFragAsset*);
typedef void(*type_30)(RxNodeDefinition*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef void(*type_36)(zShrapnelAsset*, xModelInstance*, xVec3*, type_28);
typedef unsigned int(*type_40)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_49)(xGoal*, void*, float, void*);
typedef void(*type_52)(xEnt*);
typedef RpWorldSector*(*type_53)(RpWorldSector*);
typedef void(*type_54)(xEnt*);
typedef int(*type_55)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_59)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_60)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_63)(xEnt*, xScene*, float);
typedef void(*type_68)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_70)(xEnt*);
typedef void(*type_73)(xMemPool*, void*);
typedef void(*type_81)(RwResEntry*);
typedef void(*type_82)(zFrag*, float);

typedef xCollis type_6[18];
typedef float type_8[4];
typedef xModelTag type_12[20];
typedef float type_13[4];
typedef RwTexCoords* type_15[8];
typedef xVec3 type_18[9];
typedef float type_19[16];
typedef int type_21[5];
typedef xVec3 type_29[2];
typedef unsigned short type_31[3];
typedef xParInterp type_32[1];
typedef unsigned char type_33[4];
typedef char type_34[3];
typedef float type_37[2];
typedef float type_38[2];
typedef float type_39[2];
typedef float type_41[2];
typedef xParInterp type_42[4];
typedef char type_43[16];
typedef xParInterp type_44[4];
typedef char type_45[4];
typedef char type_46[16];
typedef RwTexCoords* type_47[8];
typedef float type_48[4];
typedef unsigned char type_50[3];
typedef float type_51[4];
typedef float type_56[4];
typedef unsigned int type_57[4];
typedef float type_58[4];
typedef xVec3 type_61[3];
typedef zFrag* type_62[21];
typedef unsigned int type_64[2];
typedef RpLight* type_65[2];
typedef unsigned char type_66[3];
typedef RwFrame* type_67[2];
typedef float type_69[16];
typedef unsigned char type_71[3];
typedef float type_72[2];
typedef unsigned char type_74[3];
typedef char type_75[32];
typedef xGoal* type_76[5];
typedef float type_77[4];
typedef char type_78[32];
typedef float type_79[1];
typedef xVec3 type_80[16];
typedef type_79 type_83[5];
typedef unsigned char type_84[2];
typedef unsigned char type_85[3];
typedef xVec3 type_86[16];
typedef zNPCTiki* type_87[4];
typedef unsigned short type_88[3];
typedef zNPCTiki* type_89[4];
typedef float type_90[2];
typedef NPCSndQueue type_91[4];
typedef float type_92[16];
typedef xVec3 type_93[4];
typedef unsigned char type_94[2];
typedef xModelInstance* type_95[2];
typedef xAnimMultiFileEntry type_96[1];
typedef RxCluster type_97[1];

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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
	type_63 update;
	type_63 endUpdate;
	type_0 bupdate;
	type_68 move;
	type_70 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_22 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
};

struct zNPCGoalTikiCount : zNPCGoalCommon
{
	float tmr_count;
	int beingCarried;
};

struct _tagLightningLine
{
	float unused;
};

struct xParGroup
{
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

struct anim_coll_data
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_5 callback;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float delay;
	float alivetime;
	float lifetime;
	type_82 update;
	type_95 parent;
	zFrag* prev;
	zFrag* next;
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

struct _anon0
{
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
	type_47 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_15 texCoords;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_60 eventFunc;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	unsigned int parEmitterID;
	zParEmitter* parEmitter;
};

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int goalID;
	en_GOALSTATE stat;
	int flg_able;
	type_59 fun_process;
	type_49 fun_precalc;
	type_55 fun_chkRule;
	void* cbdata;
};

struct _anon1
{
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
	type_24 BeforeAnimMatrices;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_88 vertIndex;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_20 Callback;
};

struct zNPCGoalTikiPatrol : zNPCGoalCommon
{
	xVec3 dest_pos;
	xVec3 vel;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_32 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_42 color_birth;
	type_44 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct zNPCTiki : zNPCCommon
{
	unsigned int tikiFlag;
	xVec3 lastAt;
	xBound origLocalBound;
	xVec3 deltaPos;
	float timeToLive;
	float t1;
	float t2;
	float t3;
	xVec3 v1;
	float vel;
	float landHt;
	xEnt* nonTikiParent;
	xVec3 nonTikiParentDisp;
	unsigned char numParents;
	type_87 parents;
	unsigned char numChildren;
	type_89 children;
	zNPCTiki* nextOrphan;
	unsigned int updatedParents;
	int contactParent;
	void* tikiAnim;
	float tikiAnimTime;
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
	type_12 tag_vert;
	type_18 animFrameRange;
	type_21 cnt_esteem;
	float rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int test_count;
	type_33 talk_filter;
	unsigned char talk_filter_size;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct zNPCGoalTikiIdle : zNPCGoalCommon
{
	float tmr_wait;
};

struct zNPCGoalTikiDead : zNPCGoalCommon
{
	float tmr_resurrect;
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	char allowDetect;
	char allowPatrol;
	char allowWander;
	char reduceCollide;
	char useNavSplines;
	type_34 pad;
	char allowChase;
	char allowAttack;
	char assumeLOS;
	char assumeFOV;
	en_dupowavmod duploWaveMode;
	float duploSpawnDelay;
	int duploSpawnLifeMax;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_72 BilinearLerp;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xListItem_0
{
	int flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_16 BeforeEnter;
	type_1 StateCallback;
	type_24 BeforeAnimMatrices;
};

struct zParEmitter : xParEmitter
{
};

struct _tagLightningRot
{
	type_19 deg;
	float degrees;
	float height;
};

struct xParSys
{
};

struct RwTexCoords
{
	float u;
	float v;
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

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_73 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_81 destroyNotify;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zFragBone
{
	int index;
	xVec3 offset;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_57 pad;
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

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	unsigned int startParentID;
	unsigned int endParentID;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	char* nam_sound;
	unsigned int aid_sound;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct NPCSndQueue
{
	unsigned int sndDirect;
	en_NPC_SOUND sndtype;
	int flg_snd;
	float tmr_delay;
	float radius;
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

struct _class_1
{
	type_29 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_37 endParam;
	type_38 endVel;
	type_39 paramSpan;
	float arc_height;
	xVec3 arc_normal;
};

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_64 parentID;
	float lifetime;
	float delay;
};

struct RpTriangle
{
	type_31 vertIndex;
	short matIndex;
};

struct xPSYNote
{
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_41 radius;
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
	type_35 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct _tagEmitSphere
{
	float radius;
};

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_36 initCB;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_67 light_frame;
	int memlvl;
};

struct _tagLightningZeus
{
	float normal_offset;
	float back_offset;
	float side_offset;
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
	type_91 snd_queue;
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
	type_94 NumAnims;
	void** RawData;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct rxReq
{
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

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	unsigned int soundID;
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
	type_40 Conditional;
	type_40 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct _anon2
{
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct zFragSoundAsset : zFragAsset
{
	unsigned int assetID;
	zFragLocation source;
	float volume;
	float innerRadius;
	float outerRadius;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_48 wt;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_51 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int flg_psyche;
	xGoal* goallist;
	type_76 goalstak;
	type_83 tmr_stack;
	int staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int gid_safegoal;
	type_25 fun_remap;
	void* userContext;
	int cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float gravity;
	float minTime;
	float maxTime;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_50 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
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

struct _anon3
{
};

struct xJSPHeader
{
	type_45 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct _anon4
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

struct zNPCLassoInfo
{
	en_LASSO_STATUS stage;
	xEnt* lassoee;
	xAnimState* holdGuideAnim;
	xModelInstance* holdGuideModel;
	xAnimState* grabGuideAnim;
	xModelInstance* grabGuideModel;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_96 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_75 name;
	type_78 mask;
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

struct zNPCGoalTikiHide : zNPCGoalCommon
{
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float currSize;
	float currVelocity;
	float deltVelocity;
	float currSpin;
	float deltSpin;
	type_56 currColor;
	type_58 deltColor;
};

struct zNPCGoalTikiDying : zNPCGoalCommon
{
	float tmr_dying;
};

struct RpSector
{
	int type;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_85 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct zFragShockwaveAsset : zFragAsset
{
	unsigned int modelInfoID;
	float birthRadius;
	float deathRadius;
	float birthVelocity;
	float deathVelocity;
	float birthSpin;
	float deathSpin;
	type_8 birthColor;
	type_13 deathColor;
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

struct xEntNPCAsset
{
	int npcFlags;
	int npcModel;
	int npcProps;
	unsigned int movepoint;
	unsigned int taskWidgetPrime;
	unsigned int taskWidgetSecond;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xCurveAsset
{
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_53 renderCallBack;
	RxPipeline* pipeline;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_52 f_setup;
	type_54 f_reset;
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

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct zMovePoint : xMovePoint
{
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
	type_7 resolvID;
	type_11 base2Name;
	type_17 id2Name;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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
	type_71 emit_pad;
	type_74 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xShadowSimplePoly
{
	type_61 vert;
	xVec3 norm;
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

struct zFragGroup
{
	type_62 list;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xListItem_1
{
	int flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct _class_2
{
	xVec3* verts;
};

struct _anon5
{
};

struct _anon6
{
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_69 matrix;
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
	type_6 colls;
	type_9 post;
	type_14 depenq;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_93 corner;
};

struct RxNodeMethods
{
	type_26 nodeBody;
	type_27 nodeInit;
	type_30 nodeTerm;
	type_2 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_23 configMsgHandler;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_84 pad;
	float delay;
	xSpline3* spl;
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

struct zFragParticle
{
	zFragParticleAsset* fasset;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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

struct xCoef
{
	type_77 a;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _anon7
{
};

struct RyzMemData
{
};

struct _class_3
{
	type_80 base_point;
	type_86 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_92 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
};

struct _class_4
{
	float t;
	float u;
	float v;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xFFX
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

enum en_LASSO_STATUS
{
	LASS_STAT_DONE,
	LASS_STAT_PENDING,
	LASS_STAT_GRABBING,
	LASS_STAT_TOSSING,
	LASS_STAT_NOMORE,
	LASS_STAT_FORCEINT = 0x7fffffff
};

struct xModelAssetParam
{
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_97 clusters;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xParInterp
{
	type_90 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwLinkList
{
	RwLLLink link;
};

type_43 buffer;
type_46 buffer;
_anon1 __vt__16zNPCGoalTikiDead;
_anon6 __vt__16zNPCGoalTikiIdle;
_anon0 __vt__14zNPCGoalCommon;
_anon3 __vt__5xGoal;
_anon4 __vt__17zNPCGoalTikiDying;
_anon7 __vt__17zNPCGoalTikiCount;
_anon2 __vt__16zNPCGoalTikiHide;
_anon5 __vt__18zNPCGoalTikiPatrol;

int Exit(zNPCGoalTikiDead* this);
int Enter(zNPCGoalTikiDead* this);
int Exit(zNPCGoalTikiDying* this);
int Enter(zNPCGoalTikiDying* this);
int Enter(zNPCGoalTikiCount* this);
int Exit(zNPCGoalTikiHide* this);
int Enter(zNPCGoalTikiHide* this);
int Enter(zNPCGoalTikiPatrol* this);
int Enter(zNPCGoalTikiIdle* this);
xFactoryInst* GOALCreate_Tiki(int who, RyzMemGrow* grow);

// Exit__16zNPCGoalTikiDeadFfPv
// Start address: 0x2ca4f0
int Exit(zNPCGoalTikiDead* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiDeadFfPv
// Start address: 0x2ca540
int Enter(zNPCGoalTikiDead* this)
{
	zNPCTiki* tiki;
}

// Exit__17zNPCGoalTikiDyingFfPv
// Start address: 0x2ca5b0
int Exit(zNPCGoalTikiDying* this)
{
	zNPCTiki* tiki;
}

// Enter__17zNPCGoalTikiDyingFfPv
// Start address: 0x2ca5f0
int Enter(zNPCGoalTikiDying* this)
{
	zNPCTiki* tiki;
}

// Enter__17zNPCGoalTikiCountFfPv
// Start address: 0x2ca630
int Enter(zNPCGoalTikiCount* this)
{
	zNPCTiki* tiki;
}

// Exit__16zNPCGoalTikiHideFfPv
// Start address: 0x2ca670
int Exit(zNPCGoalTikiHide* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiHideFfPv
// Start address: 0x2ca6a0
int Enter(zNPCGoalTikiHide* this)
{
	zNPCTiki* tiki;
}

// Enter__18zNPCGoalTikiPatrolFfPv
// Start address: 0x2ca6d0
int Enter(zNPCGoalTikiPatrol* this)
{
	zNPCTiki* tiki;
}

// Enter__16zNPCGoalTikiIdleFfPv
// Start address: 0x2ca790
int Enter(zNPCGoalTikiIdle* this)
{
	zNPCTiki* tiki;
}

// GOALCreate_Tiki__FiP10RyzMemGrowPv
// Start address: 0x2ca810
xFactoryInst* GOALCreate_Tiki(int who, RyzMemGrow* grow)
{
	xGoal* goal;
}

