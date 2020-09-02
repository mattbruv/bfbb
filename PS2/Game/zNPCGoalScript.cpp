typedef struct xModelAssetParam;
typedef struct xFFX;
typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct _anon0;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct _tagLightningLine;
typedef struct xEntShadow;
typedef struct RpClump;
typedef struct zParEmitter;
typedef struct xVec3;
typedef struct xBase;
typedef struct xEntNPCAsset;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpGeometry;
typedef struct xParGroup;
typedef struct anim_coll_data;
typedef enum en_NPC_MSG_ID;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpWorldSector;
typedef struct rxHeapFreeBlock;
typedef struct zFragLightning;
typedef struct xPEEntBone;
typedef struct RxPipelineNodeTopSortData;
typedef struct _anon1;
typedef struct zFragBone;
typedef struct xEnv;
typedef struct xClumpCollBSPTriangle;
typedef struct RxNodeDefinition;
typedef struct zFragLightningAsset;
typedef struct xGoal;
typedef struct _anon2;
typedef struct xAnimPlay;
typedef struct NPCTargetInfo;
typedef struct xParEmitterAsset;
typedef struct RpMorphTarget;
typedef struct xMat4x3;
typedef struct RpPolygon;
typedef struct _anon3;
typedef struct xModelInstance;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct NPCSndTrax;
typedef struct NPCSndQueue;
typedef struct xAnimEffect;
typedef struct zFrag;
typedef struct RwV3d;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct zFragAsset;
typedef struct RxPipelineNodeParam;
typedef struct xParEmitterPropsAsset;
typedef struct RpVertexNormal;
typedef struct xListItem_0;
typedef struct xSpline3;
typedef struct _tagLightningRot;
typedef struct zLightning;
typedef struct RxHeap;
typedef struct xAnimState;
typedef struct xFactoryInst;
typedef struct zNPCGoalScript;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwTexCoords;
typedef enum en_trantype;
typedef struct zShrapnelAsset;
typedef struct xQuat;
typedef struct xParSys;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xPECircle;
typedef union zFragLocInfo;
typedef struct rxHeapBlockHeader;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct NPCDamageInfo;
typedef struct RxPipelineRequiresCluster;
typedef enum en_NPC_SOUND;
typedef struct zFragSound;
typedef union _class_0;
typedef struct _class_1;
typedef struct xCollis;
typedef struct zFragProjectileAsset;
typedef struct zFragSoundAsset;
typedef struct RpTriangle;
typedef struct xPSYNote;
typedef struct RpAtomic;
typedef struct zNPCGoalCommon;
typedef struct NPCMsg;
typedef struct xModelPool;
typedef struct _tagLightningZeus;
typedef struct zNPCCommon;
typedef struct xCoef3;
typedef struct _anon4;
typedef struct zFragLocation;
typedef struct RwSurfaceProperties;
typedef struct _tagEmitSphere;
typedef struct xDynAsset;
typedef struct RwMatrixTag;
typedef struct xAnimFile;
typedef struct iEnv;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xLightKit;
typedef struct xQCData;
typedef struct NPCStunInfo;
typedef struct zNPCLassoInfo;
typedef enum RxClusterValidityReq;
typedef struct xAnimTransitionList;
typedef struct xAnimTransition;
typedef struct xJSPNodeInfo;
typedef struct zFragShockwave;
typedef struct xMovePointAsset;
typedef struct _anon5;
typedef struct xEntAsset;
typedef struct xModelTag;
typedef struct xLinkAsset;
typedef struct zFragShockwaveAsset;
typedef struct xPsyche;
typedef enum zFragType;
typedef struct zNPCSettings;
typedef enum RxNodeDefEditable;
typedef struct RyzMemGrow;
typedef struct _tagEmitRect;
typedef struct xParabola;
typedef enum RxClusterValid;
typedef enum RpWorldRenderOrder;
typedef struct xNPCBasic;
typedef struct xRot;
typedef struct xCurveAsset;
typedef struct _anon6;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xParEmitterCustomSettings;
typedef struct NPCSysEvent;
typedef struct xJSPHeader;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimMultiFile;
typedef struct xSphere;
typedef struct RwTexture;
typedef struct NPCConfig;
typedef struct NPCScriptInfo;
typedef struct xModelBucket;
typedef struct RpSector;
typedef struct xBound;
typedef enum en_NPC_DAMAGE_TYPE;
typedef enum RxClusterForcePresent;
typedef struct zMovePoint;
typedef struct xCylinder;
typedef struct xPEEntBound;
typedef struct xBBox;
typedef struct _tagEmitLine;
typedef struct xBox;
typedef struct xClumpCollBSPTree;
typedef struct RxClusterDefinition;
typedef struct zFragGroup;
typedef struct RpLight;
typedef struct xListItem_1;
typedef union zFragInfo;
typedef struct NPCMountInfo;
typedef struct xEntFrame;
typedef struct RpWorld;
typedef struct xEntDrive;
typedef struct RwSphere;
typedef enum en_pendtype;
typedef struct xScene;
typedef struct RwTexDictionary;
typedef struct _anon7;
typedef struct NPCBlastInfo;
typedef struct RxOutputSpec;
typedef struct xGridBound;
typedef enum en_npcbtyp;
typedef struct zFragParticle;
typedef struct xMat3x3;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct xShadowSimplePoly;
typedef struct RxClusterRef;
typedef struct zFragParticleAsset;
typedef struct NPCAreaInfo;
typedef struct RwLLLink;
typedef struct _anon8;
typedef struct RwObject;
typedef struct xCoef;
typedef struct xAnimMultiFileEntry;
typedef struct RxIoSpec;
typedef struct xAnimActiveEffect;
typedef struct tri_data_0;
typedef enum en_NPC_MSG_DATA;
typedef struct _class_2;
typedef struct RxNodeMethods;
typedef struct NPCChatInfo;
typedef enum en_LASSO_STATUS;
typedef struct RwFrame;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct zFragProjectile;
typedef struct _tagEmitOffsetPoint;
typedef struct xShadowSimpleCache;
typedef struct xMovePoint;
typedef struct tri_data_1;
typedef enum en_dupowavmod;
typedef struct RpInterpolator;
typedef struct RyzMemData;
typedef struct xAnimMultiFileBase;
typedef struct _class_3;
typedef struct RxCluster;
typedef enum zFragLocType;
typedef enum PSY_BRAIN_STATUS;
typedef struct xBaseAsset;
typedef struct _class_4;
typedef enum en_NPC_CARRY_STATE;
typedef struct RxPacket;
typedef struct NPCSpawnInfo;
typedef enum en_GOALSTATE;
typedef struct xPEVCyl;
typedef struct _anon9;
typedef struct RpMaterialList;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct xParInterp;
typedef struct RwLinkList;

typedef int(*type_3)(RxPipelineNode*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef void(*type_7)(xEnt*, xVec3*);
typedef void(*type_8)(RxPipelineNode*);
typedef RpClump*(*type_10)(RpClump*, void*);
typedef xBase*(*type_11)(unsigned int);
typedef int(*type_12)(RxPipelineNode*, RxPipeline*);
typedef void(*type_13)(zFrag*, zFragAsset*);
typedef char*(*type_14)(xBase*);
typedef char*(*type_16)(unsigned int);
typedef void(*type_18)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_23)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef unsigned int(*type_24)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_25)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_26)(zShrapnelAsset*, xModelInstance*, xVec3*, type_13);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_30)(int*, en_trantype*);
typedef int(*type_31)(RxNodeDefinition*);
typedef void(*type_32)(RxNodeDefinition*);
typedef RpAtomic*(*type_36)(RpAtomic*);
typedef void(*type_42)(xEnt*);
typedef unsigned int(*type_43)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_44)(xEnt*);
typedef int(*type_52)(xGoal*, void*, float, void*);
typedef RpWorldSector*(*type_57)(RpWorldSector*);
typedef int(*type_58)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_63)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_64)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_67)(xEnt*, xScene*, float);
typedef void(*type_68)(zFrag*, float);
typedef void(*type_71)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_73)(xMemPool*, void*);
typedef void(*type_74)(xEnt*);
typedef void(*type_83)(RwResEntry*);

typedef xVec3 type_0[4];
typedef xModelTag type_1[20];
typedef float type_2[4];
typedef xVec3 type_5[9];
typedef int type_9[5];
typedef xCollis type_15[18];
typedef unsigned char type_17[4];
typedef RwTexCoords* type_19[8];
typedef char type_21[3];
typedef float type_22[16];
typedef xVec3 type_33[2];
typedef unsigned short type_34[3];
typedef char type_35[16];
typedef xParInterp type_37[1];
typedef float type_38[2];
typedef float type_39[2];
typedef char type_40[16];
typedef float type_41[2];
typedef float type_45[2];
typedef xParInterp type_46[4];
typedef xParInterp type_47[4];
typedef float type_48[4];
typedef char type_49[4];
typedef RwTexCoords* type_50[8];
typedef float type_51[4];
typedef float type_53[4];
typedef float type_54[4];
typedef unsigned char type_55[3];
typedef float type_56[4];
typedef zFrag* type_59[21];
typedef unsigned int type_60[4];
typedef unsigned int type_61[2];
typedef unsigned char type_62[3];
typedef xVec3 type_65[3];
typedef float type_66[4];
typedef RpLight* type_69[2];
typedef RwFrame* type_70[2];
typedef float type_72[16];
typedef NPCSndQueue type_75[4];
typedef float type_76[2];
typedef char type_77[32];
typedef xModelInstance* type_78[2];
typedef unsigned char type_79[3];
typedef char type_80[32];
typedef xGoal* type_81[5];
typedef unsigned char type_82[3];
typedef xVec3 type_84[16];
typedef float type_85[1];
typedef type_85 type_86[5];
typedef xVec3 type_87[16];
typedef unsigned char type_88[3];
typedef unsigned char type_89[2];
typedef unsigned short type_90[3];
typedef float type_91[16];
typedef float type_92[4];
typedef float type_93[2];
typedef unsigned char type_94[2];
typedef RxCluster type_95[1];
typedef xAnimMultiFileEntry type_96[1];

struct xModelAssetParam
{
};

struct xFFX
{
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
	type_67 update;
	type_67 endUpdate;
	type_7 bupdate;
	type_71 move;
	type_74 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_27 transl;
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
	type_6 sync;
};

struct _anon0
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_76 BilinearLerp;
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

struct _tagLightningLine
{
	float unused;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_45 radius;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_10 callback;
};

struct zParEmitter : xParEmitter
{
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_64 eventFunc;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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
	type_50 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xParGroup
{
};

struct anim_coll_data
{
};

enum en_NPC_MSG_ID
{
	NPC_MID_NONE,
	NPC_MID_SYSEVENT,
	NPC_MID_RESPAWN,
	NPC_MID_DAMAGE,
	NPC_MID_EXPLOSION,
	NPC_MID_BUNNYHOP,
	NPC_MID_DTRON_NPCEMIT,
	NPC_MID_DTRON_NPCAVAIL,
	NPC_MID_DTRON_ISDEAD,
	NPC_MID_CHAT_REQUEST,
	NPC_MID_CHAT_DECLINE,
	NPC_MID_CHAT_ACCEPT,
	NPC_MID_CHAT_DONE,
	NPC_MID_CHAT_ABORT,
	NPC_MID_TALKSTART,
	NPC_MID_TALKON,
	NPC_MID_TALKOFF,
	NPC_MID_SAWPLYR,
	NPC_MID_NEEDMEDIC,
	NPC_MID_UNDERATTACK,
	NPC_MID_NPCDIED,
	NPC_MID_PLYRSPATULA,
	NPC_MID_BECOMESCARED,
	NPC_MID_NOLONGERSCARED,
	NPC_MID_CELEBRATE,
	NPC_MID_STUN,
	NPC_MID_SCRIPTBEGIN,
	NPC_MID_SCRIPTEND,
	NPC_MID_SCRIPTHALT,
	NPC_MID_DEV_ANIMSPIN,
	NPC_MID_DEV_ANIMCYCLE,
	NPC_MID_DEV_HEROMODE,
	NPC_MID_DEV_DONE,
	NPC_MID_NOMORE,
	NPC_MID_FORCE = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_19 texCoords;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct _anon1
{
};

struct zFragBone
{
	int index;
	xVec3 offset;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	unsigned int startParentID;
	unsigned int endParentID;
};

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int goalID;
	en_GOALSTATE stat;
	int flg_able;
	type_63 fun_process;
	type_52 fun_precalc;
	type_58 fun_chkRule;
	void* cbdata;
};

struct _anon2
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
	type_29 BeforeAnimMatrices;
};

struct NPCTargetInfo
{
	xBase* bas_tgt;
	xVec3 pos_tgt;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_90 vertIndex;
};

struct _anon3
{
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	char* nam_sound;
	unsigned int aid_sound;
};

struct NPCSndQueue
{
	unsigned int sndDirect;
	en_NPC_SOUND sndtype;
	int flg_snd;
	float tmr_delay;
	float radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_24 Callback;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float delay;
	float alivetime;
	float lifetime;
	type_68 update;
	type_78 parent;
	zFrag* prev;
	zFrag* next;
};

struct RwV3d
{
	float x;
	float y;
	float z;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_61 parentID;
	float lifetime;
	float delay;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_37 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_46 color_birth;
	type_47 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xListItem_0
{
	int flg_travFilter;
	xGoal* next;
	xGoal* prev;
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

struct _tagLightningRot
{
	type_22 deg;
	float degrees;
	float height;
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
	type_20 BeforeEnter;
	type_4 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

struct zNPCGoalScript : zNPCGoalCommon
{
	int flg_script;
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

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_26 initCB;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xParSys
{
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

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_60 pad;
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
	type_83 destroyNotify;
};

struct NPCDamageInfo
{
	en_NPC_DAMAGE_TYPE dmg_type;
	xBase* dmg_from;
	xVec3 vec_dmghit;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct _class_1
{
	type_33 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_38 endParam;
	type_39 endVel;
	type_41 paramSpan;
	float arc_height;
	xVec3 arc_normal;
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

struct RpTriangle
{
	type_34 vertIndex;
	short matIndex;
};

struct xPSYNote
{
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
	type_36 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct NPCMsg
{
	en_NPC_MSG_ID msgid;
	unsigned int sendto;
	unsigned int from;
	en_NPC_MSG_DATA infotype;
	union
	{
		NPCSysEvent sysevent;
		NPCBlastInfo blastarea;
		NPCChatInfo chatter;
		NPCSpawnInfo spawning;
		NPCTargetInfo target;
		NPCDamageInfo dmgdata;
		NPCStunInfo stundata;
		NPCScriptInfo scriptdata;
		NPCMountInfo mountdata;
		NPCAreaInfo areadata;
	};
	void* attached;
	NPCMsg* next;
	float tmr_delay;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_75 snd_queue;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct _anon4
{
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct _tagEmitSphere
{
	float radius;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_69 light;
	type_70 light_frame;
	int memlvl;
};

struct rxReq
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

struct NPCStunInfo
{
	float tym_stuntime;
	en_NPC_CARRY_STATE carrystate;
	int allowStun;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_43 Conditional;
	type_43 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float currSize;
	float currVelocity;
	float deltVelocity;
	float currSpin;
	float deltSpin;
	type_48 currColor;
	type_51 deltColor;
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

struct _anon5
{
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_53 wt;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_54 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_92 birthColor;
	type_2 deathColor;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int flg_psyche;
	xGoal* goallist;
	type_81 goalstak;
	type_86 tmr_stack;
	int staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int gid_safegoal;
	type_30 fun_remap;
	void* userContext;
	int cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
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

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	char allowDetect;
	char allowPatrol;
	char allowWander;
	char reduceCollide;
	char useNavSplines;
	type_21 pad;
	char allowChase;
	char allowAttack;
	char assumeLOS;
	char assumeFOV;
	en_dupowavmod duploWaveMode;
	float duploSpawnDelay;
	int duploSpawnLifeMax;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_42 f_setup;
	type_44 f_reset;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xCurveAsset
{
};

struct _anon6
{
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
	type_62 pad;
	void* moprops;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_55 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct NPCSysEvent
{
	int doLinkEvents;
	int handled;
	xBase* from;
	xBase* to;
	unsigned int toEvent;
	type_56 toParam;
	xBase* toParamWidget;
};

struct xJSPHeader
{
	type_49 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_96 Files;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_77 name;
	type_80 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_1 tag_vert;
	type_5 animFrameRange;
	type_9 cnt_esteem;
	float rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int test_count;
	type_17 talk_filter;
	unsigned char talk_filter_size;
};

struct NPCScriptInfo
{
	unsigned int aid_playanim;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RpSector
{
	int type;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_88 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum en_NPC_DAMAGE_TYPE
{
	DMGTYP_UNDECIDED,
	DMGTYP_ABOVE,
	DMGTYP_BELOW,
	DMGTYP_SIDE,
	DMGTYP_INSTAKILL,
	DMGTYP_KILLEVENT,
	DMGTYP_HITBYTOSS,
	DMGTYP_NPCATTACK,
	DMGTYP_ROPE,
	DMGTYP_CRUISEBUBBLE,
	DMGTYP_PROJECTILE,
	DMGTYP_BOULDER,
	DMGTYP_BUBBOWL,
	DMGTYP_THUNDER_TIKI_EXPLOSION,
	DMGTYP_DAMAGE_SURFACE,
	DMGTYP_BUNGEED,
	DMGTYP_SURFACE,
	DMGTYP_NOMORE,
	DMGTYP_FORCEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct zMovePoint : xMovePoint
{
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct zFragGroup
{
	type_59 list;
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

struct xListItem_1
{
	int flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
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

struct NPCMountInfo
{
	xEnt* ent_toMount;
	xCollis* col_forMount;
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
	type_57 renderCallBack;
	RxPipeline* pipeline;
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
	type_11 resolvID;
	type_14 base2Name;
	type_16 id2Name;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _anon7
{
};

struct NPCBlastInfo
{
	xVec3 pos_blast;
	float rad_blast;
	float spd_expand;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
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
	type_79 emit_pad;
	type_82 rot;
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
	type_65 vert;
	xVec3 norm;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	unsigned int parEmitterID;
	zParEmitter* parEmitter;
};

struct NPCAreaInfo
{
	zNPCCommon* npc_origin;
	xVec3 pos_origin;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _anon8
{
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xCoef
{
	type_66 a;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

enum en_NPC_MSG_DATA
{
	NPC_MDAT_BLANK,
	NPC_MDAT_SYSEVENT,
	NPC_MDAT_BLAST,
	NPC_MDAT_CHAT,
	NPC_MDAT_SPAWN,
	NPC_MDAT_TARGET,
	NPC_MDAT_DAMAGE,
	NPC_MDAT_STUN,
	NPC_MDAT_SCRIPT,
	NPC_MDAT_MOUNT,
	NPC_MDAT_AREANOTIFY,
	NPC_MDAT_NOMORE,
	NPC_MDAT_FORCE = 0x7fffffff
};

struct _class_2
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_28 nodeBody;
	type_31 nodeInit;
	type_32 nodeTerm;
	type_3 pipelineNodeInit;
	type_8 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct NPCChatInfo
{
	xVec3 pos_chat;
	float tym_chat;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_72 matrix;
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
	type_15 colls;
	type_18 post;
	type_23 depenq;
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
	type_0 corner;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_89 pad;
	float delay;
	xSpline3* spl;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
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

struct RyzMemData
{
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _class_3
{
	type_84 base_point;
	type_87 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_91 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
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

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct _class_4
{
	float t;
	float u;
	float v;
};

enum en_NPC_CARRY_STATE
{
	zNPCCARRY_NONE,
	zNPCCARRY_PICKUP,
	zNPCCARRY_THROW,
	zNPCCARRY_ATTEMPTPICKUP,
	zNPCCARRY_FORCEINT = 0x7fffffff
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

struct NPCSpawnInfo
{
	xVec3 pos_spawn;
	zMovePoint* nav_firstMovepoint;
	zMovePoint* nav_spawnReference;
	int spawnSuccess;
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

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct _anon9
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xParInterp
{
	type_93 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct RwLinkList
{
	RwLLLink link;
};

type_35 buffer;
type_40 buffer;
_anon3 __vt__14zNPCGoalScript;
_anon2 __vt__18zNPCGoalScriptWait;
_anon1 __vt__14zNPCGoalCommon;
_anon6 __vt__5xGoal;
_anon8 __vt__18zNPCGoalScriptLead;
_anon5 __vt__20zNPCGoalScriptFollow;
_anon7 __vt__18zNPCGoalScriptTalk;
_anon4 __vt__18zNPCGoalScriptMove;
_anon0 __vt__20zNPCGoalScriptAttack;
_anon9 __vt__18zNPCGoalScriptAnim;

int NPCMessage(zNPCGoalScript* this, NPCMsg* mail);
int SysEvent();
int Exit();
int Enter(zNPCGoalScript* this, float dt, void* updCtxt);
xFactoryInst* GOALCreate_Script(int who, RyzMemGrow* grow);

// NPCMessage__14zNPCGoalScriptFP6NPCMsg
// Start address: 0x30fdc0
int NPCMessage(zNPCGoalScript* this, NPCMsg* mail)
{
	int handled;
}

// SysEvent__14zNPCGoalScriptFP5xBaseP5xBaseUiPCfP5xBasePi
// Start address: 0x30fe50
int SysEvent()
{
}

// Exit__14zNPCGoalScriptFfPv
// Start address: 0x30fe60
int Exit()
{
}

// Enter__14zNPCGoalScriptFfPv
// Start address: 0x30fe70
int Enter(zNPCGoalScript* this, float dt, void* updCtxt)
{
	zNPCCommon* npc;
}

// GOALCreate_Script__FiP10RyzMemGrowPv
// Start address: 0x30fed0
xFactoryInst* GOALCreate_Script(int who, RyzMemGrow* grow)
{
	xGoal* goal;
}

