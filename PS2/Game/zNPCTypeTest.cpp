typedef struct xGoal;
typedef struct xEnt;
typedef struct xBase;
typedef struct xAnimMultiFileEntry;
typedef union zFragInfo;
typedef struct RwLLLink;
typedef struct xAnimActiveEffect;
typedef struct zFrag;
typedef struct xListItem_0;
typedef struct RwTexture;
typedef struct xVec3;
typedef struct xEntCollis;
typedef struct RxNodeMethods;
typedef struct xSpline3;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct xMemPool;
typedef enum en_trantype;
typedef struct _tagEmitOffsetPoint;
typedef struct RpAtomic;
typedef struct xGridBound;
typedef struct RwRaster;
typedef struct xAnimFile;
typedef struct xModelInstance;
typedef struct RwTexDictionary;
typedef struct xAnimSingle;
typedef struct xMovePoint;
typedef struct _class_0;
typedef struct RxNodeDefinition;
typedef struct xLinkAsset;
typedef struct _class_1;
typedef struct RpVertexNormal;
typedef struct RwResEntry;
typedef struct tri_data_0;
typedef struct xEntDrive;
typedef struct tri_data_1;
typedef struct xAnimState;
typedef struct zNPCTest;
typedef struct RxPipelineNode;
typedef struct xFactoryInst;
typedef struct RxPipeline;
typedef struct xMovePointAsset;
typedef struct xScene;
typedef struct xPsyche;
typedef struct xEntShadow;
typedef struct zFragParticle;
typedef struct RxCluster;
typedef struct zNPCCommon;
typedef enum en_pendtype;
typedef struct zFragSoundAsset;
typedef struct xCollis;
typedef struct RxPipelineNodeParam;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct zFragParticleAsset;
typedef struct xCoef;
typedef struct RxPacket;
typedef struct xListItem_1;
typedef struct xAnimEffect;
typedef struct xPEVCyl;
typedef struct xAnimTransition;
typedef struct xSurface;
typedef struct RxPipelineRequiresCluster;
typedef struct xParInterp;
typedef struct iColor_tag;
typedef struct xParSys;
typedef struct zShrapnelAsset;
typedef struct RwRGBAReal;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct RwObjectHasFrame;
typedef struct _anon0;
typedef struct xAnimPlay;
typedef struct _tagLightningLine;
typedef struct xClumpCollBSPTree;
typedef enum en_LASSO_STATUS;
typedef struct xModelAssetParam;
typedef struct _class_2;
typedef struct zFragProjectile;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef struct zFragProjectileAsset;
typedef struct xAnimMultiFile;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpMaterial;
typedef struct NPCSndQueue;
typedef struct zNPCLassoInfo;
typedef struct xCoef3;
typedef struct xClumpCollBSPBranchNode;
typedef struct xModelPool;
typedef struct xParGroup;
typedef struct RyzMemData;
typedef struct zFragShockwaveAsset;
typedef struct xCurveAsset;
typedef struct xPEEntBone;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RyzMemGrow;
typedef enum zFragLocType;
typedef struct xParEmitterAsset;
typedef struct xPSYNote;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct RpWorldSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _tagLightningRot;
typedef struct xParEmitterPropsAsset;
typedef enum PSY_BRAIN_STATUS;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef enum en_NPC_SOUND;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef enum en_GOALSTATE;
typedef struct RwV3d;
typedef struct zParEmitter;
typedef struct xPECircle;
typedef struct xNPCBasic;
typedef struct xAnimTable;
typedef struct NPCConfig;
typedef struct xQuat;
typedef struct RwTexCoords;
typedef struct zNPCSettings;
typedef struct rxHeapBlockHeader;
typedef struct xEntFrame;
typedef struct _class_3;
typedef union _class_4;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct zFragLightning;
typedef struct _tagLightningZeus;
typedef struct zFragBone;
typedef struct zFragLightningAsset;
typedef struct xShadowSimplePoly;
typedef struct NPCSndTrax;
typedef struct _tagEmitSphere;
typedef struct RpTriangle;
typedef struct iEnv;
typedef struct zFragAsset;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef enum en_npcbtyp;
typedef struct zLightning;
typedef struct xLightKit;
typedef struct rxReq;
typedef struct xJSPNodeInfo;
typedef struct xBaseAsset;
typedef enum RxClusterValidityReq;
typedef struct xLightKitLight;
typedef union zFragLocInfo;
typedef struct xShadowSimpleCache;
typedef struct _anon1;
typedef struct xAnimTransitionList;
typedef struct _tagEmitRect;
typedef struct zFragSound;
typedef enum RxNodeDefEditable;
typedef struct xModelTag;
typedef enum RxClusterValid;
typedef struct RpLight;
typedef struct xParEmitterCustomSettings;
typedef struct xRot;
typedef struct xJSPHeader;
typedef enum en_dupowavmod;
typedef struct xBound;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zFragLocation;
typedef enum RpWorldRenderOrder;
typedef struct xDynAsset;
typedef struct xParabola;
typedef enum RxClusterForcePresent;
typedef struct xPEEntBound;
typedef struct xCylinder;
typedef struct _tagEmitLine;
typedef struct xQCData;
typedef struct RpSector;
typedef struct zFragShockwave;
typedef struct xModelBucket;
typedef struct xBox;
typedef struct xBBox;
typedef struct RxClusterDefinition;
typedef struct xEntNPCAsset;
typedef enum zFragType;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct RpWorld;
typedef struct _anon2;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct zMovePoint;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct zFragGroup;

typedef char*(*type_2)(xBase*);
typedef void(*type_4)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_5)(xMemPool*, void*);
typedef char*(*type_7)(unsigned int);
typedef int(*type_8)(xGoal*, void*, en_trantype*, float, void*);
typedef RpWorldSector*(*type_10)(RpWorldSector*);
typedef unsigned int(*type_17)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_19)(xGoal*, void*, en_trantype*, float, void*);
typedef void(*type_20)(RwResEntry*);
typedef int(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_25)(RxNodeDefinition*);
typedef void(*type_28)(zFrag*, float);
typedef int(*type_29)(xGoal*, void*, float, void*);
typedef unsigned int(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_31)(RxNodeDefinition*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef int(*type_38)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_43)(RxPipelineNode*);
typedef void(*type_45)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_46)(xEnt*);
typedef int(*type_47)(RxPipelineNode*, RxPipeline*);
typedef void(*type_50)(xEnt*);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef int(*type_54)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_56)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_58)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(int*, en_trantype*);
typedef void(*type_66)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_67)(unsigned int);
typedef void(*type_72)(zFrag*, zFragAsset*);
typedef RpAtomic*(*type_76)(RpAtomic*);
typedef void(*type_78)(xEnt*, xScene*, float);
typedef void(*type_79)(zShrapnelAsset*, xModelInstance*, xVec3*, type_72);
typedef void(*type_81)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_82)(xEnt*, xVec3*);
typedef void(*type_83)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_85)(xEnt*);
typedef unsigned int(*type_89)(xEnt*, xEnt*, xScene*, float, xCollis*);

typedef RpLight* type_0[2];
typedef zFrag* type_1[21];
typedef RwFrame* type_3[2];
typedef unsigned int type_6[2];
typedef unsigned char type_9[3];
typedef unsigned int type_11[11];
typedef unsigned char type_12[3];
typedef char type_13[32];
typedef xVec3 type_14[16];
typedef unsigned char type_15[3];
typedef char type_16[32];
typedef xVec3 type_18[16];
typedef float type_21[2];
typedef unsigned char type_23[3];
typedef float type_24[16];
typedef float type_26[4];
typedef unsigned char type_27[2];
typedef float type_32[2];
typedef float type_33[4];
typedef RxCluster type_35[1];
typedef unsigned short type_36[3];
typedef float type_37[2];
typedef unsigned char type_40[2];
typedef NPCSndQueue type_41[4];
typedef xAnimMultiFileEntry type_42[1];
typedef xModelInstance* type_44[2];
typedef float type_48[16];
typedef xGoal* type_49[5];
typedef float type_51[1];
typedef type_51 type_53[5];
typedef float type_55[4];
typedef RwTexCoords* type_57[8];
typedef float type_59[4];
typedef xModelTag type_60[20];
typedef xVec3 type_61[2];
typedef char* type_62[11];
typedef xVec3 type_63[9];
typedef int type_65[5];
typedef xParInterp type_68[1];
typedef float type_69[2];
typedef xVec3 type_70[3];
typedef float type_71[2];
typedef unsigned short type_73[3];
typedef float type_74[2];
typedef unsigned char type_75[4];
typedef char type_77[3];
typedef float type_80[16];
typedef xParInterp type_84[4];
typedef xParInterp type_86[4];
typedef char type_87[16];
typedef char type_88[4];
typedef unsigned char type_90[3];
typedef char type_91[16];
typedef RwTexCoords* type_92[8];
typedef float type_93[4];
typedef xVec3 type_94[4];
typedef unsigned int type_95[4];
typedef float type_96[4];
typedef float type_97[4];
typedef xCollis type_98[18];

struct xGoal : xListItem_1, xFactoryInst
{
	xPsyche* psyche;
	int goalID;
	en_GOALSTATE stat;
	int flg_able;
	type_19 fun_process;
	type_29 fun_precalc;
	type_8 fun_chkRule;
	void* cbdata;
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
	type_78 update;
	type_78 endUpdate;
	type_82 bupdate;
	type_83 move;
	type_85 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_4 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float delay;
	float alivetime;
	float lifetime;
	type_28 update;
	type_44 parent;
	zFrag* prev;
	zFrag* next;
};

struct xListItem_0
{
	int flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_13 name;
	type_16 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_98 colls;
	type_81 post;
	type_89 depenq;
};

struct RxNodeMethods
{
	type_22 nodeBody;
	type_25 nodeInit;
	type_31 nodeTerm;
	type_38 pipelineNodeInit;
	type_43 pipelineNodeTerm;
	type_47 pipelineNodeConfig;
	type_56 configMsgHandler;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_5 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_76 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_40 NumAnims;
	void** RawData;
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
	_class_0 anim_coll;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_21 BilinearLerp;
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

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_27 pad;
	float delay;
	xSpline3* spl;
};

struct _class_0
{
	xVec3* verts;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_33 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct _class_1
{
	type_14 base_point;
	type_18 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_24 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_20 destroyNotify;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
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
	type_58 BeforeEnter;
	type_45 StateCallback;
	type_66 BeforeAnimMatrices;
};

struct zNPCTest : zNPCCommon
{
	int numAnimations;
	int currentState;
	float transitionTimer;
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

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	type_67 resolvID;
	type_2 base2Name;
	type_7 id2Name;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int flg_psyche;
	xGoal* goallist;
	type_49 goalstak;
	type_53 tmr_stack;
	int staktop;
	xGoal* pendgoal;
	en_pendtype pendtype;
	int gid_safegoal;
	type_64 fun_remap;
	void* userContext;
	int cnt_transLastTimestep;
	PSY_BRAIN_STATUS psystat;
	xBase fakebase;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_37 radius;
};

struct zFragParticle
{
	zFragParticleAsset* fasset;
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
	type_41 snd_queue;
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

struct zFragSoundAsset : zFragAsset
{
	unsigned int assetID;
	zFragLocation source;
	float volume;
	float innerRadius;
	float outerRadius;
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
		_class_2 tuv;
		tri_data_1 tri;
	};
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	unsigned int parEmitterID;
	zParEmitter* parEmitter;
};

struct xCoef
{
	type_26 a;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_35 clusters;
};

struct xListItem_1
{
	int flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_17 Callback;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_30 Conditional;
	type_30 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_9 pad;
	void* moprops;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xParInterp
{
	type_32 val;
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

struct xParSys
{
};

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_79 initCB;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_36 vertIndex;
};

struct xFFX
{
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_39 sync;
};

struct _anon0
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
	type_66 BeforeAnimMatrices;
};

struct _tagLightningLine
{
	float unused;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct _class_2
{
	float t;
	float u;
	float v;
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

struct RwLinkList
{
	RwLLLink link;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_42 Files;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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

struct NPCSndQueue
{
	unsigned int sndDirect;
	en_NPC_SOUND sndtype;
	int flg_snd;
	float tmr_delay;
	float radius;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xParGroup
{
};

struct RyzMemData
{
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
	type_55 birthColor;
	type_59 deathColor;
};

struct xCurveAsset
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTriangle
{
	_class_4 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct xPSYNote
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_52 callback;
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
	type_92 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_57 texCoords;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct _tagLightningRot
{
	type_48 deg;
	float degrees;
	float height;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_68 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_84 color_birth;
	type_86 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct zParEmitter : xParEmitter
{
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_46 f_setup;
	type_50 f_reset;
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

struct NPCConfig : xListItem_0
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
	type_60 tag_vert;
	type_63 animFrameRange;
	type_65 cnt_esteem;
	float rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int test_count;
	type_75 talk_filter;
	unsigned char talk_filter_size;
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

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	char allowDetect;
	char allowPatrol;
	char allowWander;
	char reduceCollide;
	char useNavSplines;
	type_77 pad;
	char allowChase;
	char allowAttack;
	char assumeLOS;
	char assumeFOV;
	en_dupowavmod duploWaveMode;
	float duploSpawnDelay;
	int duploSpawnLifeMax;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_95 pad;
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

struct _class_3
{
	type_61 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_69 endParam;
	type_71 endVel;
	type_74 paramSpan;
	float arc_height;
	xVec3 arc_normal;
};

union _class_4
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
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

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	unsigned int startParentID;
	unsigned int endParentID;
};

struct xShadowSimplePoly
{
	type_70 vert;
	xVec3 norm;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	char* nam_sound;
	unsigned int aid_sound;
};

struct _tagEmitSphere
{
	float radius;
};

struct RpTriangle
{
	type_73 vertIndex;
	short matIndex;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_0 light;
	type_3 light_frame;
	int memlvl;
};

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_6 parentID;
	float lifetime;
	float delay;
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

struct zLightning
{
	unsigned int type;
	unsigned int flags;
	union
	{
		_class_1 legacy;
		_class_3 func;
	};
	iColor_tag color;
	float time_left;
	float time_total;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct rxReq
{
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_80 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
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
	type_94 corner;
};

struct _anon1
{
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	unsigned int soundID;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_93 wt;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_90 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xJSPHeader
{
	type_88 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_23 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float gravity;
	float minTime;
	float maxTime;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
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

struct RpSector
{
	int type;
};

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float currSize;
	float currVelocity;
	float deltVelocity;
	float currSpin;
	float deltSpin;
	type_96 currColor;
	type_97 deltColor;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct anim_coll_data
{
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
	type_10 renderCallBack;
	RxPipeline* pipeline;
};

struct _anon2
{
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
	type_12 emit_pad;
	type_15 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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

struct zMovePoint : xMovePoint
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct zFragGroup
{
	type_1 list;
};

type_87 buffer;
type_91 buffer;
type_11 g_hash_testanim;
type_62 g_strz_testanim;
_anon0 __vt__8zNPCTest;
_anon2 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;
type_34 xAnimDefaultBeforeEnter;

unsigned int AnimPick(zNPCTest* this);
void SelfSetup(zNPCTest* this);
void Process(zNPCTest* this, xScene* xscn, float dt);
void Reset(zNPCTest* this);
xAnimTable* ZNPC_AnimTable_Test();
void ZNPC_Destroy_Test(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_Test(int who, RyzMemGrow* grow);
void ZNPC_Test_Shutdown();
void ZNPC_Test_Startup();

// AnimPick__8zNPCTestFi16en_NPC_GOAL_SPOTP5xGoal
// Start address: 0x324250
unsigned int AnimPick(zNPCTest* this)
{
}

// SelfSetup__8zNPCTestFv
// Start address: 0x324270
void SelfSetup(zNPCTest* this)
{
}

// Process__8zNPCTestFP6xScenef
// Start address: 0x324290
void Process(zNPCTest* this, xScene* xscn, float dt)
{
}

// Reset__8zNPCTestFv
// Start address: 0x324370
void Reset(zNPCTest* this)
{
}

// ZNPC_AnimTable_Test__Fv
// Start address: 0x3243a0
xAnimTable* ZNPC_AnimTable_Test()
{
	xAnimTable* table;
	char** names;
	int i;
	int i;
}

// ZNPC_Destroy_Test__FP12xFactoryInst
// Start address: 0x324510
void ZNPC_Destroy_Test(xFactoryInst* inst)
{
}

// ZNPC_Create_Test__FiP10RyzMemGrowPv
// Start address: 0x324540
xFactoryInst* ZNPC_Create_Test(int who, RyzMemGrow* grow)
{
	zNPCTest* inst;
}

// ZNPC_Test_Shutdown__Fv
// Start address: 0x3245e0
void ZNPC_Test_Shutdown()
{
}

// ZNPC_Test_Startup__Fv
// Start address: 0x3245f0
void ZNPC_Test_Startup()
{
	int i;
}

