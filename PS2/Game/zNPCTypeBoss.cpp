typedef struct RwLLLink;
typedef struct xParGroup;
typedef enum RxClusterValidityReq;
typedef struct zMovePoint;
typedef struct RpWorld;
typedef struct NPCConfig;
typedef struct xEnt;
typedef struct NPCSndTrax;
typedef struct zFragGroup;
typedef struct xBase;
typedef struct xMemPool;
typedef struct xAnimMultiFileEntry;
typedef struct xParEmitterPropsAsset;
typedef struct xJSPHeader;
typedef struct xAnimActiveEffect;
typedef struct zLightning;
typedef struct xVec3;
typedef struct RwTexture;
typedef struct xGoal;
typedef struct xEntCollis;
typedef struct RxNodeMethods;
typedef struct xMat4x3;
typedef union zFragInfo;
typedef struct RpLight;
typedef struct _anon0;
typedef struct zFrag;
typedef struct xListItem_0;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct xSpline3;
typedef struct RpAtomic;
typedef struct RwRaster;
typedef enum en_trantype;
typedef struct xGridBound;
typedef struct xAnimFile;
typedef struct _class_0;
typedef struct xModelInstance;
typedef struct _tagEmitOffsetPoint;
typedef struct RwTexDictionary;
typedef struct xAnimSingle;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct RpVertexNormal;
typedef struct tri_data_0;
typedef struct xFactoryInst;
typedef struct xAnimState;
typedef struct RxPipelineNode;
typedef struct zNPCCommon;
typedef struct xMovePoint;
typedef struct RxPipeline;
typedef struct _class_1;
typedef struct xEntDrive;
typedef struct xEntShadow;
typedef struct xScene;
typedef struct tri_data_1;
typedef struct RxCluster;
typedef struct xPsyche;
typedef struct xMovePointAsset;
typedef struct zFragParticle;
typedef struct RxPipelineNodeParam;
typedef enum en_pendtype;
typedef struct zNPCBoss;
typedef struct zFragSoundAsset;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct xCollis;
typedef struct zFragParticleAsset;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct xCoef;
typedef struct xListItem_1;
typedef struct xSurface;
typedef struct xPEVCyl;
typedef struct RxPipelineRequiresCluster;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xParInterp;
typedef struct zShrapnelAsset;
typedef struct _class_2;
typedef struct xParSys;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef enum en_LASSO_STATUS;
typedef struct xModelAssetParam;
typedef struct _tagLightningLine;
typedef struct xClumpCollBSPTree;
typedef struct zFragProjectile;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct zFragProjectileAsset;
typedef struct RyzMemData;
typedef struct zNPCLassoInfo;
typedef struct xCoef3;
typedef struct xClumpCollBSPVertInfo;
typedef struct rxHeapFreeBlock;
typedef struct NPCSndQueue;
typedef struct xClumpCollBSPBranchNode;
typedef struct zFragShockwaveAsset;
typedef struct xCurveAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xPEEntBone;
typedef struct RyzMemGrow;
typedef struct xClumpCollBSPTriangle;
typedef struct RpClump;
typedef enum zFragLocType;
typedef struct xEntAsset;
typedef struct xPSYNote;
typedef struct RpGeometry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xParEmitterAsset;
typedef struct RpWorldSector;
typedef struct _tagLightningRot;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef enum PSY_BRAIN_STATUS;
typedef struct RwV3d;
typedef struct xQuat;
typedef enum en_NPC_SOUND;
typedef enum en_GOALSTATE;
typedef struct RwTexCoords;
typedef struct xEntFrame;
typedef struct rxHeapBlockHeader;
typedef struct xNPCBasic;
typedef struct zParEmitter;
typedef struct xPECircle;
typedef struct zNPCSettings;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct _class_3;
typedef struct RpMeshHeader;
typedef union _class_4;
typedef struct zFragLightning;
typedef struct xShadowSimplePoly;
typedef struct zFragBone;
typedef struct _tagLightningZeus;
typedef struct zFragLightningAsset;
typedef struct RpTriangle;
typedef enum en_npcbtyp;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct zFragAsset;
typedef struct _tagEmitSphere;
typedef struct iEnv;
typedef enum en_npctgt;
typedef struct rxReq;
typedef struct xLightKit;
typedef struct xBaseAsset;
typedef struct xLightKitLight;
typedef struct xJSPNodeInfo;
typedef struct xShadowSimpleCache;
typedef union zFragLocInfo;
typedef struct xAnimTransitionList;
typedef struct _anon1;
typedef enum RxNodeDefEditable;
typedef struct zFragSound;
typedef enum RxClusterValid;
typedef struct xModelTag;
typedef struct _tagEmitRect;
typedef struct xRot;
typedef enum en_dupowavmod;
typedef struct xParEmitterCustomSettings;
typedef struct xBound;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RpWorldRenderOrder;
typedef struct zFragLocation;
typedef struct xParabola;
typedef struct xDynAsset;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct _anon2;
typedef struct xPEEntBound;
typedef struct xQCData;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xBox;
typedef struct xBBox;
typedef struct RxClusterDefinition;
typedef struct zFragShockwave;
typedef struct _tagEmitLine;
typedef struct xEntNPCAsset;
typedef struct _anon3;
typedef enum zFragType;
typedef struct NPCTarget;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct _anon4;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct _tagEmitVolume;
typedef struct xParEmitter;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct _anon5;
typedef struct _anon6;

typedef int(*type_0)(xGoal*, void*, float, void*);
typedef char*(*type_2)(xBase*);
typedef void(*type_5)(xEnt*, xVec3*, xMat4x3*);
typedef char*(*type_6)(unsigned int);
typedef void(*type_7)(xMemPool*, void*);
typedef int(*type_10)(xGoal*, void*, en_trantype*, float, void*);
typedef RpWorldSector*(*type_12)(RpWorldSector*);
typedef unsigned int(*type_15)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_18)(RwResEntry*);
typedef int(*type_20)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_23)(xGoal*, void*, en_trantype*, float, void*);
typedef int(*type_25)(RxNodeDefinition*);
typedef unsigned int(*type_29)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_30)(RxNodeDefinition*);
typedef void(*type_31)(zFrag*, float);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef int(*type_38)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef void(*type_44)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_46)(RxPipelineNode*, RxPipeline*);
typedef void(*type_47)(xEnt*);
typedef RpClump*(*type_50)(RpClump*, void*);
typedef void(*type_51)(xEnt*);
typedef int(*type_54)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_55)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_58)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(int*, en_trantype*);
typedef xBase*(*type_65)(unsigned int);
typedef void(*type_66)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_72)(zFrag*, zFragAsset*);
typedef RpAtomic*(*type_74)(RpAtomic*);
typedef void(*type_78)(xEnt*, xScene*, float);
typedef void(*type_80)(zShrapnelAsset*, xModelInstance*, xVec3*, type_72);
typedef void(*type_81)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_82)(xEnt*, xVec3*);
typedef void(*type_83)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_84)(xEnt*);
typedef unsigned int(*type_87)(xEnt*, xEnt*, xScene*, float, xCollis*);

typedef int type_1[2];
typedef RpLight* type_3[2];
typedef zFrag* type_4[21];
typedef RwFrame* type_8[2];
typedef unsigned int type_9[2];
typedef unsigned char type_11[3];
typedef char type_13[32];
typedef char type_14[32];
typedef unsigned char type_16[3];
typedef xVec3 type_17[16];
typedef unsigned char type_19[3];
typedef float type_21[2];
typedef xVec3 type_22[16];
typedef unsigned char type_24[3];
typedef float type_26[4];
typedef float type_27[16];
typedef unsigned char type_28[2];
typedef float type_32[4];
typedef RxCluster type_33[1];
typedef float type_35[2];
typedef float type_36[2];
typedef unsigned short type_37[3];
typedef unsigned char type_40[2];
typedef xAnimMultiFileEntry type_41[1];
typedef NPCSndQueue type_43[4];
typedef xModelInstance* type_45[2];
typedef xGoal* type_48[5];
typedef float type_49[16];
typedef float type_52[1];
typedef type_52 type_53[5];
typedef float type_56[4];
typedef RwTexCoords* type_57[8];
typedef float type_59[4];
typedef xModelTag type_60[20];
typedef unsigned int type_61[78];
typedef xVec3 type_62[2];
typedef xVec3 type_63[9];
typedef int type_67[5];
typedef xVec3 type_68[3];
typedef xParInterp type_69[1];
typedef float type_70[2];
typedef unsigned short type_71[3];
typedef float type_73[2];
typedef float type_75[2];
typedef unsigned char type_76[4];
typedef char type_77[3];
typedef float type_79[16];
typedef xParInterp type_85[4];
typedef xParInterp type_86[4];
typedef char type_88[16];
typedef char type_89[4];
typedef RwTexCoords* type_90[8];
typedef unsigned char type_91[3];
typedef char type_92[16];
typedef xVec3 type_93[4];
typedef float type_94[4];
typedef char* type_95[78];
typedef unsigned int type_96[4];
typedef float type_97[4];
typedef float type_98[4];
typedef xCollis type_99[18];

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xParGroup
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zMovePoint : xMovePoint
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
	type_12 renderCallBack;
	RxPipeline* pipeline;
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
	type_67 cnt_esteem;
	float rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int test_count;
	type_76 talk_filter;
	unsigned char talk_filter_size;
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
	type_84 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_5 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	char* nam_sound;
	unsigned int aid_sound;
};

struct zFragGroup
{
	type_4 list;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_7 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_69 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_85 color_birth;
	type_86 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct xJSPHeader
{
	type_89 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_13 name;
	type_14 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xGoal : xListItem_1, xFactoryInst
{
	xPsyche* psyche;
	int goalID;
	en_GOALSTATE stat;
	int flg_able;
	type_23 fun_process;
	type_0 fun_precalc;
	type_10 fun_chkRule;
	void* cbdata;
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
	type_99 colls;
	type_81 post;
	type_87 depenq;
};

struct RxNodeMethods
{
	type_20 nodeBody;
	type_25 nodeInit;
	type_30 nodeTerm;
	type_38 pipelineNodeInit;
	type_42 pipelineNodeTerm;
	type_46 pipelineNodeConfig;
	type_55 configMsgHandler;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct _anon0
{
};

struct zFrag
{
	zFragType type;
	zFragInfo info;
	float delay;
	float alivetime;
	float lifetime;
	type_31 update;
	type_45 parent;
	zFrag* prev;
	zFrag* next;
};

struct xListItem_0
{
	int flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_74 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct _class_0
{
	xVec3* verts;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_18 destroyNotify;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_32 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	type_44 StateCallback;
	type_66 BeforeAnimMatrices;
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
	type_43 snd_queue;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_28 pad;
	float delay;
	xSpline3* spl;
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

struct _class_1
{
	type_17 base_point;
	type_22 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_27 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_36 radius;
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
	type_65 resolvID;
	type_2 base2Name;
	type_6 id2Name;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int flg_psyche;
	xGoal* goallist;
	type_48 goalstak;
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

struct zFragParticle
{
	zFragParticleAsset* fasset;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct zNPCBoss : zNPCCommon
{
	NPCTarget tgt_cur;
};

struct zFragSoundAsset : zFragAsset
{
	unsigned int assetID;
	zFragLocation source;
	float volume;
	float innerRadius;
	float outerRadius;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_33 clusters;
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
		tri_data_0 tri;
	};
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	unsigned int parEmitterID;
	zParEmitter* parEmitter;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_15 Callback;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_29 Conditional;
	type_29 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xCoef
{
	type_26 a;
};

struct xListItem_1
{
	int flg_travFilter;
	xGoal* next;
	xGoal* prev;
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
	type_11 pad;
	void* moprops;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_37 vertIndex;
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

struct xParInterp
{
	type_35 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_80 initCB;
};

struct _class_2
{
	float t;
	float u;
	float v;
};

struct xParSys
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_41 Files;
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

struct RyzMemData
{
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct NPCSndQueue
{
	unsigned int sndDirect;
	en_NPC_SOUND sndtype;
	int flg_snd;
	float tmr_delay;
	float radius;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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
	type_56 birthColor;
	type_59 deathColor;
};

struct xCurveAsset
{
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct xClumpCollBSPTriangle
{
	_class_4 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_50 callback;
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

struct xPSYNote
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
	type_90 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct _tagLightningRot
{
	type_49 deg;
	float degrees;
	float height;
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

enum PSY_BRAIN_STATUS
{
	PSY_STAT_BLANK,
	PSY_STAT_GROW,
	PSY_STAT_EXTEND,
	PSY_STAT_THINK,
	PSY_STAT_NOMORE,
	PSY_STAT_FORCE = 0x7fffffff
};

struct RwV3d
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

struct RwTexCoords
{
	float u;
	float v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_96 pad;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_47 f_setup;
	type_51 f_reset;
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

struct zParEmitter : xParEmitter
{
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct _class_3
{
	type_62 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_70 endParam;
	type_73 endVel;
	type_75 paramSpan;
	float arc_height;
	xVec3 arc_normal;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

union _class_4
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
};

struct xShadowSimplePoly
{
	type_68 vert;
	xVec3 norm;
};

struct zFragBone
{
	int index;
	xVec3 offset;
};

struct _tagLightningZeus
{
	float normal_offset;
	float back_offset;
	float side_offset;
};

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	unsigned int startParentID;
	unsigned int endParentID;
};

struct RpTriangle
{
	type_71 vertIndex;
	short matIndex;
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

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_9 parentID;
	float lifetime;
	float delay;
};

struct _tagEmitSphere
{
	float radius;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_3 light;
	type_8 light_frame;
	int memlvl;
};

enum en_npctgt
{
	NPC_TGT_NONE,
	NPC_TGT_PLYR,
	NPC_TGT_ENT,
	NPC_TGT_BASE,
	NPC_TGT_POS,
	NPC_TGT_MVPT,
	NPC_TGT_NOMORE,
	NPC_TGT_FORCEINT = 0x7fffffff
};

struct rxReq
{
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_79 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _anon1
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	unsigned int soundID;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_94 wt;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_91 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_24 pad;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zFragLocation
{
	zFragLocType type;
	zFragLocInfo info;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float gravity;
	float minTime;
	float maxTime;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
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

struct _anon2
{
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

struct zFragShockwave
{
	zFragShockwaveAsset* fasset;
	float currSize;
	float currVelocity;
	float deltVelocity;
	float currSpin;
	float deltSpin;
	type_97 currColor;
	type_98 deltColor;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
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

struct _anon3
{
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

struct NPCTarget
{
	en_npctgt typ_target;
	union
	{
		xEnt* ent_target;
		xBase* bas_target;
		xVec3 pos_target;
		zMovePoint* nav_target;
	};
	zNPCCommon* npc_owner;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct anim_coll_data
{
};

struct _anon4
{
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
	type_16 emit_pad;
	type_19 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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

struct _anon5
{
};

struct _anon6
{
};

type_88 buffer;
type_92 buffer;
type_61 g_hash_bossanim;
type_95 g_strz_bossanim;
int g_boss_is_in_the_house;
zParEmitter* g_pemit_holder;
xParEmitterCustomSettings g_parf_holder;
_anon5 __vt__8zNPCBoss;
type_34 xAnimDefaultBeforeEnter;
_anon4 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;
_anon3 __vt__9zNPCB_SB2;
_anon2 __vt__9zNPCB_SB1;
_anon0 __vt__12zNPCBPatrick;
_anon6 __vt__10zNPCBSandy;

void Setup(zNPCBoss* this);
xAnimTable* ZNPC_AnimTable_BossSBobbyArm();
void ZNPC_Destroy_Boss(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_Boss(int who, RyzMemGrow* grow);
void zNPCBoss_SceneFinish();
void zNPCBoss_ScenePrepare();
void ZNPC_Boss_Shutdown();
void ZNPC_Boss_Startup();

// Setup__8zNPCBossFv
// Start address: 0x324d60
void Setup(zNPCBoss* this)
{
}

// ZNPC_AnimTable_BossSBobbyArm__Fv
// Start address: 0x324db0
xAnimTable* ZNPC_AnimTable_BossSBobbyArm()
{
	xAnimTable* table;
	type_1 ourAnims;
}

// ZNPC_Destroy_Boss__FP12xFactoryInst
// Start address: 0x324e60
void ZNPC_Destroy_Boss(xFactoryInst* inst)
{
}

// ZNPC_Create_Boss__FiP10RyzMemGrowPv
// Start address: 0x324e90
xFactoryInst* ZNPC_Create_Boss(int who, RyzMemGrow* grow)
{
	zNPCBoss* boss;
}

// zNPCBoss_SceneFinish__Fv
// Start address: 0x3250f0
void zNPCBoss_SceneFinish()
{
}

// zNPCBoss_ScenePrepare__Fv
// Start address: 0x325100
void zNPCBoss_ScenePrepare()
{
}

// ZNPC_Boss_Shutdown__Fv
// Start address: 0x325110
void ZNPC_Boss_Shutdown()
{
}

// ZNPC_Boss_Startup__Fv
// Start address: 0x325120
void ZNPC_Boss_Startup()
{
	int i;
}

