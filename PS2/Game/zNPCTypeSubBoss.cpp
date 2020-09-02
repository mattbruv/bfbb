typedef struct xGoal;
typedef struct xEnt;
typedef struct RwLLLink;
typedef struct _tagEmitVolume;
typedef struct zFragLightning;
typedef enum RxClusterValidityReq;
typedef struct iEnv;
typedef struct RwMatrixTag;
typedef struct zNPCCommon;
typedef struct xParEmitter;
typedef struct zFragBone;
typedef struct xModelInstance;
typedef struct xBase;
typedef struct RwTexture;
typedef struct xNPCBasic;
typedef struct zFragLightningAsset;
typedef struct RpWorld;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct zNPCSubBoss;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xVec3;
typedef struct xEntCollis;
typedef struct xParEmitterAsset;
typedef struct RwRaster;
typedef struct zMovePoint;
typedef struct zFrag;
typedef struct NPCSndTrax;
typedef struct xMat4x3;
typedef struct xEntDrive;
typedef struct zFragAsset;
typedef struct RpAtomic;
typedef struct RwTexDictionary;
typedef struct xParGroup;
typedef struct xGridBound;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct xAnimFile;
typedef struct zLightning;
typedef struct xParEmitterPropsAsset;
typedef struct _class_0;
typedef struct xJSPHeader;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct xLinkAsset;
typedef enum en_trantype;
typedef struct RpVertexNormal;
typedef struct tri_data_0;
typedef struct RpLight;
typedef struct zShrapnelAsset;
typedef struct RxCluster;
typedef struct xAnimState;
typedef struct xFactoryInst;
typedef struct RxPipeline;
typedef struct _tagEmitOffsetPoint;
typedef struct xScene;
typedef struct xEntShadow;
typedef union zFragLocInfo;
typedef struct RxPipelineNodeParam;
typedef struct xMovePoint;
typedef struct RxPacket;
typedef struct tri_data_1;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct zFragSound;
typedef struct zNPCLassoInfo;
typedef enum en_pendtype;
typedef struct xMovePointAsset;
typedef struct xAnimEffect;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTransition;
typedef struct xPsyche;
typedef struct _class_1;
typedef struct zFragProjectileAsset;
typedef struct zFragSoundAsset;
typedef struct iColor_tag;
typedef struct xSurface;
typedef struct xCollis;
typedef struct RwRGBAReal;
typedef struct xListItem_0;
typedef struct RwObjectHasFrame;
typedef struct xFFX;
typedef struct RpPolygon;
typedef struct RwLinkList;
typedef struct xPEVCyl;
typedef struct xCoef3;
typedef struct zFragLocation;
typedef struct _class_2;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct xDynAsset;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct rxHeapFreeBlock;
typedef struct xParInterp;
typedef struct xSpline3;
typedef struct xParSys;
typedef struct RxPipelineNodeTopSortData;
typedef struct RyzMemData;
typedef struct zFragShockwave;
typedef struct xClumpCollBSPTree;
typedef struct xModelAssetParam;
typedef struct xEntAsset;
typedef struct _tagLightningLine;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RyzMemGrow;
typedef struct zFragShockwaveAsset;
typedef struct NPCSndQueue;
typedef struct RpClump;
typedef struct xEntNPCAsset;
typedef struct RpGeometry;
typedef struct xClumpCollBSPVertInfo;
typedef enum zFragType;
typedef struct xPEEntBone;
typedef struct RpWorldSector;
typedef struct xClumpCollBSPBranchNode;
typedef struct xPSYNote;
typedef struct zNPCSettings;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xClumpCollBSPTriangle;
typedef struct xCurveAsset;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct zParEmitter;
typedef struct rxHeapBlockHeader;
typedef enum PSY_BRAIN_STATUS;
typedef struct _anon0;
typedef struct NPCConfig;
typedef struct _tagLightningRot;
typedef enum en_GOALSTATE;
typedef struct xEntFrame;
typedef enum en_NPC_SOUND;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct xPECircle;
typedef struct RpMeshHeader;
typedef struct zFragGroup;
typedef struct xShadowSimplePoly;
typedef union _class_3;
typedef struct RwSurfaceProperties;
typedef union zFragInfo;
typedef struct _class_4;
typedef struct xListItem_1;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct _tagLightningZeus;
typedef enum en_npcbtyp;
typedef struct xBaseAsset;
typedef struct _tagEmitSphere;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef enum en_npctgt;
typedef struct zFragParticle;
typedef struct xShadowSimpleCache;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimTransitionList;
typedef struct zFragParticleAsset;
typedef struct xJSPNodeInfo;
typedef struct xCoef;
typedef struct xRot;
typedef struct xModelTag;
typedef struct _anon1;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagEmitRect;
typedef struct xBound;
typedef enum RpWorldRenderOrder;
typedef enum en_LASSO_STATUS;
typedef enum RxClusterForcePresent;
typedef struct zFragProjectile;
typedef struct xCylinder;
typedef enum en_dupowavmod;
typedef struct xParabola;
typedef struct _anon2;
typedef struct xParEmitterCustomSettings;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xQCData;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xBBox;
typedef enum zFragLocType;
typedef struct xPEEntBound;
typedef struct RwSphere;
typedef struct _tagEmitLine;
typedef struct anim_coll_data;
typedef struct NPCTarget;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RxIoSpec;

typedef xBase*(*type_1)(unsigned int);
typedef void(*type_2)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_4)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_5)(xGoal*, void*, float, void*);
typedef char*(*type_6)(xBase*);
typedef void(*type_7)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_8)(zFrag*, zFragAsset*);
typedef void(*type_9)(xMemPool*, void*);
typedef char*(*type_10)(unsigned int);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef int(*type_17)(xGoal*, void*, en_trantype*, float, void*);
typedef void(*type_19)(RwResEntry*);
typedef int(*type_20)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_21)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(zShrapnelAsset*, xModelInstance*, xVec3*, type_8);
typedef int(*type_24)(RxNodeDefinition*);
typedef int(*type_26)(xGoal*, void*, en_trantype*, float, void*);
typedef void(*type_29)(RxNodeDefinition*);
typedef unsigned int(*type_33)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_36)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef void(*type_48)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_49)(RxPipelineNode*, RxPipeline*);
typedef void(*type_50)(xEnt*);
typedef RpClump*(*type_51)(RpClump*, void*);
typedef unsigned int(*type_53)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_55)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_56)(xEnt*);
typedef void(*type_61)(xAnimPlay*, xAnimState*);
typedef void(*type_63)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_64)(int*, en_trantype*);
typedef RpAtomic*(*type_71)(RpAtomic*);
typedef void(*type_73)(xEnt*, xScene*, float);
typedef void(*type_77)(xEnt*, xVec3*);
typedef void(*type_79)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_81)(xEnt*);
typedef void(*type_83)(zFrag*, float);

typedef xVec3 type_0[9];
typedef int type_3[5];
typedef char type_11[32];
typedef unsigned char type_12[4];
typedef char type_13[3];
typedef RpLight* type_14[2];
typedef char type_16[32];
typedef RwFrame* type_18[2];
typedef float type_23[2];
typedef unsigned char type_25[3];
typedef unsigned char type_27[3];
typedef unsigned char type_28[3];
typedef xVec3 type_30[16];
typedef xVec3 type_31[16];
typedef RxCluster type_32[1];
typedef char type_34[16];
typedef float type_35[4];
typedef unsigned char type_37[2];
typedef unsigned short type_38[3];
typedef float type_40[2];
typedef float type_41[16];
typedef unsigned char type_43[2];
typedef char type_44[16];
typedef float type_45[2];
typedef xAnimMultiFileEntry type_46[1];
typedef unsigned int type_47[23];
typedef xGoal* type_52[5];
typedef float type_54[4];
typedef float type_57[1];
typedef type_57 type_58[5];
typedef float type_59[4];
typedef RwTexCoords* type_60[8];
typedef float type_62[16];
typedef zFrag* type_65[21];
typedef xVec3 type_66[3];
typedef xVec3 type_67[2];
typedef unsigned int type_68[2];
typedef unsigned short type_69[3];
typedef unsigned char type_70[3];
typedef xParInterp type_72[1];
typedef float type_74[2];
typedef float type_75[16];
typedef float type_76[2];
typedef char* type_78[23];
typedef float type_80[2];
typedef float type_82[4];
typedef xParInterp type_84[4];
typedef xParInterp type_85[4];
typedef NPCSndQueue type_86[4];
typedef RwTexCoords* type_87[8];
typedef char type_88[4];
typedef xModelInstance* type_89[2];
typedef xVec3 type_90[4];
typedef float type_91[4];
typedef unsigned int type_92[4];
typedef unsigned char type_93[3];
typedef float type_94[4];
typedef float type_95[4];
typedef xModelTag type_96[20];
typedef xCollis type_97[18];

struct xGoal : xListItem_0, xFactoryInst
{
	xPsyche* psyche;
	int goalID;
	en_GOALSTATE stat;
	int flg_able;
	type_26 fun_process;
	type_5 fun_precalc;
	type_17 fun_chkRule;
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
	type_73 update;
	type_73 endUpdate;
	type_77 bupdate;
	type_79 move;
	type_81 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_7 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct zFragLightning
{
	zFragLightningAsset* fasset;
	xModelInstance* startParent;
	xModelInstance* endParent;
	zLightning* lightning;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_14 light;
	type_18 light_frame;
	int memlvl;
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
	type_86 snd_queue;
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
	type_27 emit_pad;
	type_28 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct zFragBone
{
	int index;
	xVec3 offset;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_55 eventFunc;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_11 name;
	type_16 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_50 f_setup;
	type_56 f_reset;
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

struct zFragLightningAsset : zFragAsset
{
	zFragLocation start;
	zFragLocation end;
	unsigned int startParentID;
	unsigned int endParentID;
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
	type_15 renderCallBack;
	RxPipeline* pipeline;
};

struct RxNodeMethods
{
	type_20 nodeBody;
	type_24 nodeInit;
	type_29 nodeTerm;
	type_36 pipelineNodeInit;
	type_42 pipelineNodeTerm;
	type_49 pipelineNodeConfig;
	type_53 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_9 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct zNPCSubBoss : zNPCCommon
{
	NPCTarget tgt_cur;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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
	type_97 colls;
	type_2 post;
	type_4 depenq;
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

struct zMovePoint : xMovePoint
{
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

struct NPCSndTrax
{
	en_NPC_SOUND typ_sound;
	char* nam_sound;
	unsigned int aid_sound;
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

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_68 parentID;
	float lifetime;
	float delay;
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
	type_71 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xParGroup
{
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
	type_19 destroyNotify;
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
	type_43 NumAnims;
	void** RawData;
};

struct zLightning
{
	unsigned int type;
	unsigned int flags;
	union
	{
		_class_1 legacy;
		_class_4 func;
	};
	iColor_tag color;
	float time_left;
	float time_total;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_72 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_84 color_birth;
	type_85 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct _class_0
{
	xVec3* verts;
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
	type_23 BilinearLerp;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_35 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_22 initCB;
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
	type_61 BeforeEnter;
	type_48 StateCallback;
	type_63 BeforeAnimMatrices;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_1 resolvID;
	type_6 base2Name;
	type_10 id2Name;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_40 radius;
};

union zFragLocInfo
{
	zFragBone bone;
	xModelTag tag;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_37 pad;
	float delay;
	xSpline3* spl;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_32 clusters;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct zFragSound
{
	zFragSoundAsset* fasset;
	xVec3 location;
	unsigned int soundID;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_21 Callback;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_33 Conditional;
	type_33 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xPsyche : RyzMemData
{
	xBase* clt_owner;
	xPSYNote* cb_notice;
	int flg_psyche;
	xGoal* goallist;
	type_52 goalstak;
	type_58 tmr_stack;
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

struct _class_1
{
	type_30 base_point;
	type_31 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_41 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
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

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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
	type_70 pad;
	void* moprops;
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct xListItem_0
{
	int flg_travFilter;
	xGoal* next;
	xGoal* prev;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_39 sync;
};

struct xFFX
{
};

struct RpPolygon
{
	unsigned short matIndex;
	type_38 vertIndex;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
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

struct _class_2
{
	float t;
	float u;
	float v;
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
	type_63 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_46 Files;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xParInterp
{
	type_45 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct xParSys
{
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RyzMemData
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
	type_54 currColor;
	type_59 deltColor;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelAssetParam
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

struct _tagLightningLine
{
	float unused;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct zFragShockwaveAsset : zFragAsset
{
	unsigned int modelInfoID;
	float birthRadius;
	float deathRadius;
	float birthVelocity;
	float deathVelocity;
	float birthSpin;
	float deathSpin;
	type_94 birthColor;
	type_95 deathColor;
};

struct NPCSndQueue
{
	unsigned int sndDirect;
	en_NPC_SOUND sndtype;
	int flg_snd;
	float tmr_delay;
	float radius;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_51 callback;
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
	type_87 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_60 texCoords;
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

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xPSYNote
{
};

struct zNPCSettings : xDynAsset
{
	en_npcbtyp basisType;
	char allowDetect;
	char allowPatrol;
	char allowWander;
	char reduceCollide;
	char useNavSplines;
	type_13 pad;
	char allowChase;
	char allowAttack;
	char assumeLOS;
	char assumeFOV;
	en_dupowavmod duploWaveMode;
	float duploSpawnDelay;
	int duploSpawnLifeMax;
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

struct xClumpCollBSPTriangle
{
	_class_3 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xCurveAsset
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct zParEmitter : xParEmitter
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_92 pad;
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

struct _anon0
{
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
	type_96 tag_vert;
	type_0 animFrameRange;
	type_3 cnt_esteem;
	float rad_sound;
	NPCSndTrax* snd_trax;
	NPCSndTrax* snd_traxShare;
	int test_count;
	type_12 talk_filter;
	unsigned char talk_filter_size;
};

struct _tagLightningRot
{
	type_62 deg;
	float degrees;
	float height;
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

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct zFragGroup
{
	type_65 list;
};

struct xShadowSimplePoly
{
	type_66 vert;
	xVec3 norm;
};

union _class_3
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct _class_4
{
	type_67 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_74 endParam;
	type_76 endVel;
	type_80 paramSpan;
	float arc_height;
	xVec3 arc_normal;
};

struct xListItem_1
{
	int flg_travFilter;
	NPCConfig* next;
	NPCConfig* prev;
};

struct RpTriangle
{
	type_69 vertIndex;
	short matIndex;
};

struct rxReq
{
};

struct _tagLightningZeus
{
	float normal_offset;
	float back_offset;
	float side_offset;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_75 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct zFragParticle
{
	zFragParticleAsset* fasset;
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
	type_90 corner;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zFragParticleAsset : zFragAsset
{
	zFragLocation source;
	zFragLocation vel;
	xParEmitterCustomSettings emit;
	unsigned int parEmitterID;
	zParEmitter* parEmitter;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xCoef
{
	type_82 a;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_91 wt;
};

struct _anon1
{
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

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_25 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

enum en_dupowavmod
{
	NPCP_DUPOWAVE_CONTINUOUS,
	NPCP_DUPOWAVE_DISCREET,
	NPCP_DUPOWAVE_NOMORE,
	NPCP_DUPOWAVE_FORCE = 0x7fffffff
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float gravity;
	float minTime;
	float maxTime;
};

struct _anon2
{
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_93 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct anim_coll_data
{
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

type_34 buffer;
type_44 buffer;
type_47 g_hash_subbanim;
type_78 g_strz_subbanim;
int g_contract_for_hire;
zParEmitter* g_pemit_holder;
xParEmitterCustomSettings g_parf_holder;
_anon2 __vt__11zNPCSubBoss;
_anon0 __vt__10zNPCCommon;
_anon1 __vt__9xNPCBasic;

void Setup(zNPCSubBoss* this);
void ZNPC_Destroy_SubBoss(xFactoryInst* inst);
xFactoryInst* ZNPC_Create_SubBoss(int who, RyzMemGrow* grow);
void zNPCSubBoss_SceneFinish();
void zNPCSubBoss_ScenePrepare();
void ZNPC_SubBoss_Shutdown();
void ZNPC_SubBoss_Startup();

// Setup__11zNPCSubBossFv
// Start address: 0x325fd0
void Setup(zNPCSubBoss* this)
{
}

// ZNPC_Destroy_SubBoss__FP12xFactoryInst
// Start address: 0x326020
void ZNPC_Destroy_SubBoss(xFactoryInst* inst)
{
}

// ZNPC_Create_SubBoss__FiP10RyzMemGrowPv
// Start address: 0x326050
xFactoryInst* ZNPC_Create_SubBoss(int who, RyzMemGrow* grow)
{
	zNPCSubBoss* boss;
}

// zNPCSubBoss_SceneFinish__Fv
// Start address: 0x326170
void zNPCSubBoss_SceneFinish()
{
}

// zNPCSubBoss_ScenePrepare__Fv
// Start address: 0x326180
void zNPCSubBoss_ScenePrepare()
{
}

// ZNPC_SubBoss_Shutdown__Fv
// Start address: 0x326190
void ZNPC_SubBoss_Shutdown()
{
}

// ZNPC_SubBoss_Startup__Fv
// Start address: 0x3261a0
void ZNPC_SubBoss_Startup()
{
	int i;
}

