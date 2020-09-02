typedef struct RpMaterial;
typedef struct xAnimTransition;
typedef struct xEnt;
typedef struct RpAtomic;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct RwLLLink;
typedef struct analog_data;
typedef struct RwMatrixTag;
typedef struct RpMaterialList;
typedef struct xScene;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct xShadowSimpleCache;
typedef struct xAnimState;
typedef struct xJSPNodeInfo;
typedef struct iEnv;
typedef struct RxPS2AllPipeData;
typedef struct xEntCollis;
typedef struct xBase;
typedef struct xQuat;
typedef struct rxNodePS2AllPvtData;
typedef struct xGroup;
typedef struct RwCamera;
typedef struct RxPipeline;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpWorld;
typedef struct xGridBound;
typedef struct zCheckPoint;
typedef struct RwStream;
typedef struct zPlayerGlobals;
typedef struct xEntFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct rxNodePS2AllMatPvtData;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RpCollisionTriangle;
typedef struct _class_0;
typedef struct RwResEntry;
typedef struct RpWorldSector;
typedef struct xCollis;
typedef struct RpMeshHeader;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct RwMeshCache;
typedef struct xAnimMultiFile;
typedef struct xSurface;
typedef struct xCamera;
typedef struct RpMorphTarget;
typedef struct xJSPHeader;
typedef struct zPlayerSettings;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct xVec4;
typedef struct xModelBucket;
typedef struct zEnt;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwFrame;
typedef struct xModelTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpVertexNormal;
typedef struct iFogParams;
typedef struct rxReq;
typedef struct xUpdateCullEnt;
typedef struct xModelInstance;
typedef struct RwRaster;
typedef struct RwTexture;
typedef enum RxClusterValidityReq;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct xEntShadow;
typedef struct xLightKit;
typedef struct xClumpCollBSPTree;
typedef struct xLinkAsset;
typedef struct xMat4x3;
typedef union RwStreamUnion;
typedef struct anim_coll_data;
typedef struct RpMesh;
typedef struct xAnimTable;
typedef enum RpMeshHeaderFlags;
typedef struct xBound;
typedef enum RxNodeDefEditable;
typedef struct _tagxRumble;
typedef struct xUpdateCullGroup;
typedef enum RxClusterValid;
typedef struct RpLightTie;
typedef enum RwStreamType;
typedef struct _zPortal;
typedef struct RpTriangle;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct RwChunkHeaderInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct rwPS2AllFieldRec;
typedef struct xVec2;
typedef enum RwCameraProjection;
typedef struct xAnimMultiFileEntry;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimActiveEffect;
typedef enum _tagPadState;
typedef struct RxNodeDefinition;
typedef struct xEntBoulder;
typedef struct _class_1;
typedef struct xEnv;
typedef struct xAnimFile;
typedef struct xBox;
typedef struct xGlobals;
typedef struct RxClusterDefinition;
typedef struct zEntHangable;
typedef enum RwStreamAccessType;
typedef struct RwSphere;
typedef struct xAnimSingle;
typedef struct _tagxPad;
typedef enum RpWorldRenderOrder;
typedef enum RxInstanceFlags;
typedef struct xAnimMultiFileBase;
typedef struct RwTexDictionary;
typedef struct xAnimEffect;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RxOutputSpec;
typedef struct xEntAsset;
typedef struct zScene;
typedef struct _tagiPad;
typedef struct xMat3x3;
typedef struct RpSector;
typedef struct xPortalAsset;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct rwPS2AllResEntryHeader;
typedef struct rwPS2AllResEntryFormat;
typedef struct zJumpParam;
typedef struct xAnimPlay;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct RwObject;
typedef struct xModelPool;
typedef struct RxIoSpec;
typedef struct rpAtomicPS2AllLightData;
typedef struct RpLight;
typedef struct xMemPool;
typedef struct xQCData;
typedef struct RxNodeMethods;
typedef struct zPlatform;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPipelineCluster;
typedef struct xLightKitLight;
typedef struct _zEnv;
typedef struct RwFrustumPlane;
typedef struct zCutsceneMgr;
typedef union RwStreamFile;
typedef struct xEntDrive;
typedef struct RwPlane;
typedef struct xClumpCollBSPTriangle;
typedef struct xEnvAsset;
typedef struct zAssetPickupTable;
typedef struct RxCluster;
typedef struct zGlobals;
typedef struct RxPipelineNodeParam;
typedef struct zGlobalSettings;
typedef struct RxPacket;
typedef struct zPlayerLassoInfo;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef enum RwCullMode;
typedef enum _zPlayerWallJumpState;
typedef struct xShadowSimplePoly;
typedef struct RpInterpolator;
typedef struct RwV2d;
typedef struct xBBox;
typedef struct tri_data_0;
typedef struct xBaseAsset;
typedef struct zLasso;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct tri_data_1;

typedef void(*type_0)(xEnt*, xScene*, float);
typedef int(*type_1)(void*, unsigned int);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_5)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_8)(xEnt*, xScene*, float, xEntFrame*);
typedef xBase*(*type_10)(unsigned int);
typedef unsigned int(*type_11)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_12)(xEnt*);
typedef int(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_14)(void*);
typedef int(*type_17)(RxPS2AllPipeData*);
typedef int(*type_18)(RxNodeDefinition*);
typedef unsigned int(*type_19)(void*, void*, unsigned int);
typedef char*(*type_20)(xBase*);
typedef void(*type_21)(RxNodeDefinition*);
typedef unsigned int(*type_22)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_23)(void*, void*, unsigned int);
typedef int(*type_26)(RxPipelineNode*);
typedef void(*type_27)(xEnt*, xVec3*, xMat4x3*);
typedef char*(*type_28)(unsigned int);
typedef void(*type_30)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_32)(RxPipelineNode*);
typedef void(*type_33)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_35)(RwResEntry*);
typedef int(*type_36)(RxPipelineNode*, RxPipeline*);
typedef RwResEntry*(*type_37)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_35);
typedef void(*type_38)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_41)(RxPS2AllPipeData*, void**, unsigned int);
typedef int(*type_47)(RxPS2AllPipeData*);
typedef void(*type_49)(void*);
typedef int(*type_50)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_55)(RpAtomic*);
typedef int(*type_56)(RxPS2AllPipeData*);
typedef int(*type_64)(RxPS2AllPipeData*, RwMatrixTag**);
typedef unsigned int(*type_66)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_70)(RpAtomic*, void*);
typedef RwResEntry*(*type_72)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_35);
typedef int(*type_76)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_82)(RxPS2AllPipeData*, void**, unsigned int);
typedef RwCamera*(*type_84)(RwCamera*);
typedef RpWorldSector*(*type_85)(RpWorldSector*);
typedef RwCamera*(*type_94)(RwCamera*);
typedef void(*type_95)(xMemPool*, void*);
typedef unsigned int(*type_97)(void*, void*);
typedef RpLight*(*type_103)(RpLight*, void*);
typedef RwObjectHasFrame*(*type_107)(RwObjectHasFrame*);

typedef unsigned int type_2[15];
typedef unsigned short type_3[3];
typedef unsigned int type_7[15];
typedef RwFrustumPlane type_9[6];
typedef unsigned int type_15[15];
typedef RwV3d type_16[8];
typedef analog_data type_24[2];
typedef rwPS2AllClusterQuickInfo type_25[12];
typedef rwPS2AllFieldRec type_29[12];
typedef char type_34[4];
typedef xVec3 type_39[4];
typedef RwTexCoords* type_40[8];
typedef unsigned char type_42[2];
typedef xVec4 type_43[12];
typedef unsigned int type_44[2];
typedef unsigned char type_45[2];
typedef float type_46[6];
typedef unsigned char type_48[3];
typedef float type_51[3];
typedef float type_52[4];
typedef unsigned short type_53[3];
typedef float type_54[3];
typedef xCollis type_57[18];
typedef xModelTag type_58[2];
typedef float type_59[3];
typedef xVec3 type_60[5];
typedef float type_61[4];
typedef unsigned char type_62[5];
typedef xEnt* type_63[111];
typedef unsigned int type_65[4];
typedef unsigned char type_67[1];
typedef float type_68[2];
typedef char type_69[128];
typedef type_69 type_71[6];
typedef RwTexCoords* type_73[8];
typedef unsigned char type_74[14];
typedef xModelTag type_75[4];
typedef unsigned int type_77[4096];
typedef rwPS2AllClusterInstanceInfo type_78[12];
typedef char type_79[32];
typedef xModelInstance* type_80[14];
typedef unsigned int type_81[12];
typedef RwV3d* type_83[3];
typedef unsigned int type_86[72];
typedef unsigned char type_87[2];
typedef char type_88[64];
typedef float type_89[2];
typedef unsigned char type_90[2];
typedef unsigned char type_91[4];
typedef xAnimMultiFileEntry type_92[1];
typedef xBase* type_93[72];
typedef float type_96[16];
typedef char type_98[32];
typedef unsigned char type_99[22];
typedef char type_100[32];
typedef unsigned char type_101[22];
typedef rwPS2AllFieldRec type_102[12];
typedef RxCluster type_104[1];
typedef RpLight* type_105[2];
typedef xVec3 type_106[60];
typedef xVec3 type_108[3];
typedef RwFrame* type_109[2];
typedef float type_110[22];
typedef void* type_111[8];
typedef RwResEntry* type_112[1];
typedef float type_113[22];

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_6 Conditional;
	type_6 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_0 update;
	type_0 endUpdate;
	type_4 bupdate;
	type_8 move;
	type_12 render;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_55 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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
	type_10 resolvID;
	type_20 base2Name;
	type_28 id2Name;
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
	type_39 corner;
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
	type_30 BeforeEnter;
	type_33 StateCallback;
	type_38 BeforeAnimMatrices;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_105 light;
	type_109 light_frame;
	int memlvl;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	unsigned int objIdentifier;
	float spExtra;
	int numMorphTargets;
	unsigned int fastMorphing;
	unsigned char transType;
	unsigned char primType;
	unsigned char matModulate;
	unsigned char vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	unsigned int meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
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
	type_57 colls;
	type_5 post;
	type_22 depenq;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_76 eventFunc;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct rxNodePS2AllPvtData
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_84 beginUpdate;
	type_94 endUpdate;
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
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_16 frustumCorners;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_65 pad;
};

struct RwStreamCustom
{
	type_14 sfnclose;
	type_19 sfnread;
	type_23 sfnwrite;
	type_1 sfnskip;
	void* data;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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
	type_85 renderCallBack;
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

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int position;
	RwStreamUnion Type;
	int rwOwned;
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
	type_58 BubbleWandTag;
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
	type_75 HangPawTag;
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
	type_2 Inv_PatsSock;
	type_7 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_15 Inv_LevelPickups;
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
	type_44 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_63 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_74 sb_model_indices;
	type_80 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct rxNodePS2AllMatPvtData
{
	type_17 meshInstanceTestCB;
	type_37 resEntryAllocCB;
	type_41 instanceCB;
	type_50 bridgeCB;
	type_56 postMeshCB;
	int vifOffset;
	void** vu1CodeArray;
	unsigned int codeArrayLength;
	type_78 clinfo;
	type_81 cliIndex;
	RpMeshHeaderFlags pipeType;
	unsigned char totallyOpaque;
	unsigned char numStripes;
	unsigned char sizeOnVU;
	unsigned char pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	unsigned int magicValue;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_31 callback;
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
	type_73 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int index;
	type_83 vertices;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_35 destroyNotify;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_40 texCoords;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_49 activateCB;
	type_49 deactivateCB;
};

struct RwMeshCache
{
	unsigned int lengthOfMeshesArray;
	type_112 meshes;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_92 Files;
};

struct xSurface
{
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
	type_43 frustplane;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xJSPHeader
{
	type_34 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_46 MoveSpeed;
	type_51 AnimSneak;
	type_54 AnimWalk;
	type_59 AnimRun;
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
	type_91 talk_filter;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_3 vertIndex;
};

struct xFFX
{
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_52 wt;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct rxReq
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_97 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	_class_1 anim_coll;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_98 name;
	type_100 mask;
	unsigned int filterAddressing;
	int refCount;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct rwPS2AllClusterInstanceInfo
{
	unsigned int attrib;
	unsigned int stride;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_89 radius;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_61 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

struct anim_coll_data
{
};

struct RpMesh
{
	unsigned short* indices;
	unsigned int numIndices;
	RpMaterial* material;
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

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_48 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpLightTie
{
	RwLLLink lightInWorldSector;
	RpLight* light;
	RwLLLink WorldSectorInLight;
	RpWorldSector* sect;
};

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RpTriangle
{
	type_53 vertIndex;
	short matIndex;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct RwChunkHeaderInfo
{
	unsigned int type;
	unsigned int length;
	unsigned int version;
	unsigned int buildNum;
	int isComplex;
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

struct rwPS2AllFieldRec
{
	int numVerts;
	int morphNumVerts;
	int dataoffset;
	int morphDataoffset;
	short skip;
	short morphSkip;
	short reverse;
	unsigned char vuoffset;
	type_67 pad;
};

struct xVec2
{
	float x;
	float y;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xEntBoulder
{
};

struct _class_1
{
	xVec3* verts;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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
	type_87 NumAnims;
	void** RawData;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_71 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_79 sceneStart;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct zEntHangable
{
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_68 BilinearLerp;
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

struct _tagxPad
{
	type_99 value;
	type_101 last_value;
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
	type_110 up_tmr;
	type_113 down_tmr;
	type_24 analog;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_66 Callback;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_86 baseCount;
	type_93 baseList;
	_zEnv* zen;
};

struct _tagiPad
{
	int port;
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

struct RpSector
{
	int type;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct RwStreamMemory
{
	unsigned int position;
	unsigned int nSize;
	unsigned char* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct rwPS2AllResEntryHeader
{
	int refCnt;
	int clrCnt;
	<unknown type (0xa510)>* data;
	unsigned int numVerts;
	unsigned int objIdentifier;
	unsigned int meshIdentifier;
	int batchSize;
	int numBatches;
	int batchesPerTag;
	int morphStart;
	int morphFinish;
	int morphNum;
	type_25 clquickinfo;
	type_29 fieldRec;
};

struct rwPS2AllResEntryFormat
{
	unsigned char batchRound;
	unsigned char stripReverse;
	type_90 pad;
	unsigned int maxInputSize;
	int batchSize;
	int batchesPerTag;
	int morphBatchSize;
	int morphBatchesPerTag;
	type_102 fieldRec;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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
	type_38 BeforeAnimMatrices;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	unsigned int stride;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	float invScale;
	float recipInvScale;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_95 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct RxNodeMethods
{
	type_13 nodeBody;
	type_18 nodeInit;
	type_21 nodeTerm;
	type_26 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_36 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct zPlatform
{
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_96 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct zCutsceneMgr
{
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct zAssetPickupTable
{
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_42 PowerUp;
	type_45 InitialPowerUp;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_104 clusters;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_106 tranTable;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_107 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xShadowSimplePoly
{
	type_108 vert;
	xVec3 norm;
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

struct RwV2d
{
	float x;
	float y;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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
	type_60 lastRefs;
	type_62 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

int sBeginDrawFX;
int ps2AllFirstAtomic;
unsigned char ps2AllClipType;
RxPipeline* ps2AllPipeOptimized;
RxPipeline* ps2AllMatPipeOptimized;
RpWorld* sPipeWorld;
RwCamera* sPipeCamera;
iEnv* lastEnv;
RwCamera* globalCamera;
zGlobals globals;
type_70 SetPipelineCB;
type_64 RPS2AllObjectSetupCB;
type_47 PS2AllBridgeCB;
type_82 RpMeshPS2AllInstanceCallBack;
type_72 RpMeshPS2AllResEntryAllocCallBack;
type_111 rwPDS_G3_Generic_VU1Transforms;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long skyTest_1;
long skyClamp_1;
long skyTex1_1;
unsigned int skyUserSwitch1;
unsigned int skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
int skyTLClipperMode;
int skyTSClipperMode;
long skyPrim_State;
<unknown type (0xa510)> gifTag128;
int skyAlphaTex;
int skyVertexAlpha;
RwRaster* skyTextureRaster;
type_103 _rpAtomicPS2AllDoApplyLight;
type_77 ourGlobals;
unsigned int _rwSkyLightQWordsWritten;
unsigned char skyTransType;
int rwPip2GeometryOffset;

void iEnvEndRenderFX();
void iEnvRender(iEnv* env);
void JspPS2_ClumpRender(RpClump* clump, xJSPNodeInfo* nodeInfo);
void iEnvLightingBasics();
void iEnvDefaultLighting();
void iEnvFree(iEnv* env);
void iEnvLoad(iEnv* env, void* data, int dataType);
void iEnvStartup();
void iEnvSetBSP(iEnv* env, int envDataType, RpWorld* bsp);
RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data);
int PS2AllOptimizedPipelinesCreate();
int PS2AllBridgeCB(RxPS2AllPipeData* ps2AllPipeData);
int RPS2AllObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);

// iEnvEndRenderFX__FP4iEnv
// Start address: 0x1a8000
void iEnvEndRenderFX()
{
}

// iEnvRender__FP4iEnv
// Start address: 0x1a8060
void iEnvRender(iEnv* env)
{
}

// JspPS2_ClumpRender__FP7RpClumpP12xJSPNodeInfo
// Start address: 0x1a80c0
void JspPS2_ClumpRender(RpClump* clump, xJSPNodeInfo* nodeInfo)
{
	int backcullon;
	int zbufferon;
	RwLLLink* cur;
	RwLLLink* end;
	RpAtomic* apAtom;
	RwFrame* frame;
	int insideFlag;
}

// iEnvLightingBasics__FP4iEnvP9xEnvAsset
// Start address: 0x1a8320
void iEnvLightingBasics()
{
}

// iEnvDefaultLighting__FP4iEnv
// Start address: 0x1a8330
void iEnvDefaultLighting()
{
}

// iEnvFree__FP4iEnv
// Start address: 0x1a8340
void iEnvFree(iEnv* env)
{
}

// iEnvLoad__FP4iEnvPCvUii
// Start address: 0x1a83a0
void iEnvLoad(iEnv* env, void* data, int dataType)
{
	RpWorld* bsp;
	xJSPHeader* jsp;
	RwBBox tmpbbox;
}

// iEnvStartup__Fv
// Start address: 0x1a84f0
void iEnvStartup()
{
}

// iEnvSetBSP__FP4iEnviP7RpWorld
// Start address: 0x1a8520
void iEnvSetBSP(iEnv* env, int envDataType, RpWorld* bsp)
{
}

// SetPipelineCB__FP8RpAtomicPv
// Start address: 0x1a8580
RpAtomic* SetPipelineCB(RpAtomic* atomic, void* data)
{
}

// PS2AllOptimizedPipelinesCreate__Fv
// Start address: 0x1a85e0
int PS2AllOptimizedPipelinesCreate()
{
	RxPipeline* allMatPipe;
	RxPipeline* allPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	RxPipeline* lPipe;
	RxPipeline* lPipe;
	RxNodeDefinition* ps2All;
	RxPipelineNode* plNode;
}

// PS2AllBridgeCB__FP16RxPS2AllPipeData
// Start address: 0x1a8840
int PS2AllBridgeCB(RxPS2AllPipeData* ps2AllPipeData)
{
	unsigned int numInitialQW;
	unsigned int numExtraQW;
	RwTexture* tex;
	RwRaster* ras;
	unsigned int _itQW;
	unsigned int _xaQW;
	unsigned long tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	unsigned int __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	unsigned long __tmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	unsigned int stat;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	unsigned int cFormat;
	int textureUploadSuccess;
	unsigned int _itQW;
	unsigned int _xaQW;
	unsigned long tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	unsigned int __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	float __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	unsigned int __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	unsigned long __tmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	unsigned long tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	unsigned long __tmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	unsigned int stat;
}

// RPS2AllObjectSetupCB__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x1a91f0
int RPS2AllObjectSetupCB(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	RpAtomic* atomic;
	RpGeometry* geom;
	RwMatrixTag* _viewMatrix;
	RwMatrixTag* _mpLocalToWorld;
	RpAtomic* _atmc;
	RpGeometry* _gmty;
	RwLLLink* cur;
	RwLLLink* end;
	RpMeshHeader* meshHeader;
	rpAtomicPS2AllLightData lightingData;
	RwMatrixTag* frameMat;
	float temp;
	RwLLLink* curLight;
	RwLLLink* endLight;
	RpLightTie* lightTie;
	RwMatrixTag* matrixLight;
	RwV3d* pos;
	RwSphere* sphere;
	float distanceCollision;
}

