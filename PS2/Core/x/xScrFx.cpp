typedef struct RpSector;
typedef struct xAnimPlay;
typedef struct _tagxPad;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef enum _zPlayerType;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct RxPipelineNode;
typedef struct xBound;
typedef struct RpAtomic;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct xLinkAsset;
typedef struct RwLLLink;
typedef struct xBase;
typedef struct tri_data_0;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xGridBound;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xScene;
typedef struct _tagxRumble;
typedef struct iEnv;
typedef struct xGlare;
typedef struct xVec3;
typedef struct xEnvAsset;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimTable;
typedef struct RpWorld;
typedef struct RxPipelineRequiresCluster;
typedef struct xMemPool;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct RpVertexNormal;
typedef union _class_0;
typedef struct xModelInstance;
typedef struct zCheckPoint;
typedef struct RxPipeline;
typedef struct zPlayerGlobals;
typedef struct xGroupAsset;
typedef struct xAnimEffect;
typedef struct xSurface;
typedef struct xEntAsset;
typedef struct xJSPHeader;
typedef struct zScene;
typedef struct RpLight;
typedef struct xVec4;
typedef struct RwRaster;
typedef struct zPlayerCarryInfo;
typedef struct RpInterpolator;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xAnimFile;
typedef struct RwFrame;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct _class_1;
typedef struct xModelBucket;
typedef struct zJumpParam;
typedef struct rxReq;
typedef struct zPlayerSettings;
typedef struct xEnt;
typedef struct _zPortal;
typedef struct zEnt;
typedef struct xAnimTransition;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xAnimTransitionList;
typedef struct zEntHangable;
typedef struct xEntFrame;
typedef enum RwVideoModeFlag;
typedef struct RpPolygon;
typedef struct xPortalAsset;
typedef struct xGlobals;
typedef struct RpMaterialList;
typedef struct zPlatform;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct xLightKit;
typedef struct xModelTag;
typedef enum RxNodeDefEditable;
typedef struct xJSPNodeInfo;
typedef struct RpMaterial;
typedef enum RxClusterValid;
typedef struct RwTexture;
typedef struct zCutsceneMgr;
typedef struct xShadowSimplePoly;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xClumpCollBSPBranchNode;
typedef struct analog_data;
typedef struct zAssetPickupTable;
typedef struct RpClump;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimMultiFile;
typedef struct xSphere;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef enum RwCameraProjection;
typedef struct xEntBoulder;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpMorphTarget;
typedef struct xEnv;
typedef struct xLightKitLight;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct xShadowSimpleCache;
typedef struct RxClusterDefinition;
typedef struct xUpdateCullMgr;
typedef struct xEntCollis;
typedef struct xCollis;
typedef struct _class_2;
typedef struct iFogParams;
typedef struct RwSphere;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct RwTexDictionary;
typedef struct RwVideoMode;
typedef struct RxOutputSpec;
typedef struct RxObjSpace3DVertex;
typedef struct DistortionParticle;
typedef struct xVec2;
typedef struct zLasso;
typedef struct xMat3x3;
typedef struct RpTriangle;
typedef struct RxClusterRef;
typedef struct xFFX;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct xAnimMultiFileEntry;
typedef struct xCamera;
typedef struct xAnimActiveEffect;
typedef struct _zEnv;
typedef struct RxIoSpec;
typedef struct xEntDrive;
typedef struct iColor_tag;
typedef struct xEntShadow;
typedef struct RxNodeMethods;
typedef struct xModelPool;
typedef struct RxPipelineCluster;
typedef struct anim_coll_data;
typedef struct RwSky2DVertexFields;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef enum _tagPadState;
typedef struct RwPlane;
typedef struct xAnimMultiFileBase;
typedef struct RxCluster;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineNodeParam;
typedef struct xQCData;
typedef struct RxPacket;
typedef struct xBBox;
typedef struct zGlobals;
typedef struct zGlobalSettings;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct _tagPadAnalog;
typedef struct RwObjectHasFrame;
typedef struct tri_data_1;
typedef struct zPlayerLassoInfo;
typedef struct RwLinkList;
typedef struct _tagiPad;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct zLedgeGrabParams;
typedef struct RwV2d;
typedef struct xClumpCollBSPVertInfo;
typedef enum _zPlayerWallJumpState;
typedef struct _xFadeData;

typedef void(*type_0)(xAnimPlay*, xAnimState*);
typedef void(*type_1)();
typedef unsigned int(*type_3)(void*, void*);
typedef unsigned int(*type_5)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_8)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_9)(void*);
typedef xBase*(*type_10)(unsigned int);
typedef int(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_15)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_18)(RxNodeDefinition*);
typedef RpWorldSector*(*type_19)(RpWorldSector*);
typedef char*(*type_20)(xBase*);
typedef void(*type_21)(RxNodeDefinition*);
typedef int(*type_24)(RxPipelineNode*);
typedef char*(*type_25)(unsigned int);
typedef void(*type_28)(RxPipelineNode*);
typedef int(*type_29)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_34)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_46)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_48)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_51)(xEnt*, xScene*, float);
typedef RpClump*(*type_52)(RpClump*, void*);
typedef void(*type_55)(xEnt*, xVec3*);
typedef void(*type_57)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_59)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_61)(xEnt*);
typedef unsigned int(*type_64)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_65)(xEnt*, xVec3*, xMat4x3*);
typedef RpAtomic*(*type_71)(RpAtomic*);
typedef RwCamera*(*type_74)(RwCamera*);
typedef RwCamera*(*type_76)(RwCamera*);
typedef void(*type_78)(xMemPool*, void*);
typedef void(*type_83)(RwResEntry*);
typedef RwObjectHasFrame*(*type_91)(RwObjectHasFrame*);

typedef xVec4 type_2[12];
typedef unsigned char type_4[22];
typedef RwFrustumPlane type_6[6];
typedef float type_7[2];
typedef unsigned int type_11[15];
typedef unsigned char type_12[22];
typedef DistortionParticle type_14[100];
typedef unsigned int type_16[15];
typedef RwV3d type_17[8];
typedef unsigned int type_22[15];
typedef char type_23[16];
typedef RpLight* type_26[2];
typedef unsigned char type_27[3];
typedef RwFrame* type_30[2];
typedef float type_31[4];
typedef char type_32[16];
typedef xGlare type_33[10];
typedef float type_35[22];
typedef unsigned short type_36[3];
typedef xVec3 type_37[5];
typedef float type_38[22];
typedef unsigned char type_39[5];
typedef unsigned char type_40[2];
typedef xVec3 type_41[3];
typedef unsigned int type_42[2];
typedef unsigned char type_43[2];
typedef float type_44[6];
typedef float type_45[3];
typedef float type_47[3];
typedef xModelTag type_49[2];
typedef float type_50[3];
typedef float type_53[4];
typedef char type_54[4];
typedef float type_56[16];
typedef analog_data type_58[2];
typedef RwTexCoords* type_60[8];
typedef unsigned int type_62[4];
typedef xEnt* type_63[111];
typedef unsigned int type_66[72];
typedef unsigned int type_67[4096];
typedef xBase* type_68[72];
typedef unsigned short type_69[3];
typedef xVec3 type_70[4];
typedef unsigned char type_72[14];
typedef xModelTag type_73[4];
typedef xModelInstance* type_75[14];
typedef RxObjSpace3DVertex type_77[4];
typedef unsigned char type_79[4];
typedef char type_80[32];
typedef char type_81[32];
typedef float type_82[2];
typedef xCollis type_84[18];
typedef RwTexCoords* type_85[8];
typedef char type_86[128];
typedef type_86 type_87[6];
typedef unsigned char type_88[2];
typedef RxCluster type_89[1];
typedef xAnimMultiFileEntry type_90[1];
typedef char type_92[32];
typedef <unknown type (0xa510)> type_93[4];
typedef RwSky2DVertex type_94[4];
typedef xVec3 type_95[60];
typedef unsigned short type_96[4];

struct RpSector
{
	int type;
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
	type_15 BeforeAnimMatrices;
};

struct _tagxPad
{
	type_4 value;
	type_12 last_value;
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
	type_35 up_tmr;
	type_38 down_tmr;
	type_58 analog;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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
	type_0 BeforeEnter;
	type_48 StateCallback;
	type_15 BeforeAnimMatrices;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_82 BilinearLerp;
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
	type_31 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_46 eventFunc;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
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
	type_62 pad;
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
	type_25 id2Name;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_26 light;
	type_30 light_frame;
	int memlvl;
};

struct xGlare
{
	int flags;
	xVec3 pos;
	float intensity;
	float intensityFadeRate;
	float lifetime;
	float size;
	RwRGBAReal col;
	RwRaster* raster;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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
	type_19 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_78 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_3 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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
	type_49 BubbleWandTag;
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
	type_73 HangPawTag;
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
	type_11 Inv_PatsSock;
	type_16 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_22 Inv_LevelPickups;
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
	type_42 TongueFlags;
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
	type_72 sb_model_indices;
	type_75 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_5 Callback;
};

struct xSurface
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

struct xJSPHeader
{
	type_54 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_66 baseCount;
	type_68 baseList;
	_zEnv* zen;
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

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_88 NumAnims;
	void** RawData;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct rxReq
{
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_44 MoveSpeed;
	type_45 AnimSneak;
	type_47 AnimWalk;
	type_50 AnimRun;
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
	type_79 talk_filter;
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
	type_51 update;
	type_51 endUpdate;
	type_55 bupdate;
	type_59 move;
	type_61 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_65 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_34 Conditional;
	type_34 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zEntHangable
{
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

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x100,
	rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x200,
	rwVIDEOMODE_XBOX_WIDESCREEN = 0x100,
	rwVIDEOMODE_XBOX_PROGRESSIVE = 0x200,
	rwVIDEOMODE_XBOX_FIELD = 0x400,
	rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x800,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	unsigned short matIndex;
	type_36 vertIndex;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_87 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_92 sceneStart;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct zPlatform
{
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_53 wt;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_80 name;
	type_81 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct zCutsceneMgr
{
};

struct xShadowSimplePoly
{
	type_41 vert;
	xVec3 norm;
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

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct zAssetPickupTable
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
	type_90 Files;
};

struct xSphere
{
	xVec3 center;
	float r;
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
	type_85 texCoords;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntBoulder
{
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_56 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_70 corner;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_9 activateCB;
	type_9 deactivateCB;
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
	type_84 colls;
	type_57 post;
	type_64 depenq;
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
		_class_1 tuv;
		tri_data_0 tri;
	};
};

struct _class_2
{
	xVec3* verts;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_83 destroyNotify;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwVideoMode
{
	int width;
	int height;
	int depth;
	RwVideoModeFlag flags;
	int refRate;
	int format;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
};

struct DistortionParticle
{
	xVec3 pos;
	unsigned int flags;
	xVec3 dir;
	float life;
	xVec3 vel;
	float death;
};

struct xVec2
{
	float x;
	float y;
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
	type_37 lastRefs;
	type_39 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct RpTriangle
{
	type_69 vertIndex;
	short matIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xFFX
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_74 beginUpdate;
	type_76 endUpdate;
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
	type_6 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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
	type_2 frustplane;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_7 radius;
};

struct RxNodeMethods
{
	type_13 nodeBody;
	type_18 nodeInit;
	type_21 nodeTerm;
	type_24 pipelineNodeInit;
	type_28 pipelineNodeTerm;
	type_29 pipelineNodeConfig;
	type_8 configMsgHandler;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct anim_coll_data
{
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float camVertex_z;
	float u;
	float v;
	float recipZ;
	float pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float pad2;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_89 clusters;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_40 PowerUp;
	type_43 InitialPowerUp;
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

struct _tagPadAnalog
{
	char x;
	char y;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_91 sync;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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

struct RwLinkList
{
	RwLLLink link;
};

struct _tagiPad
{
	int port;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_93 qWords;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_95 tranTable;
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

struct RwV2d
{
	float x;
	float y;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct _xFadeData
{
	int active;
	int hold;
	iColor_tag src;
	iColor_tag dest;
	float time_passed;
	float time_total;
	type_1 cb;
};

type_23 buffer;
type_32 buffer;
unsigned char g_debugRenderSafeArea;
_xFadeData mFade;
float mLetterboxO;
float mLetterboxTO;
float sLetterBoxSize;
unsigned char sLetterBoxAlpha;
type_14 gDistortionParticles;
int gNumDistortionParticles;
float sNoGlobalTime;
xVec3 ddir;
type_33 sGlare;
xVec3 sFullScreenGlareDir;
float sFullScreenGlareIntensity;
RwRGBA sFullScreenGlareColor;
int sFullScreenGlareEnabled;
unsigned int sFullScreenGlareTextureID;
RwTexture* sFullScreenGlareTexturePtr;
xGlobals* xglobals;
zGlobals globals;
unsigned int gFrameCount;
type_67 ourGlobals;

void xScrFxDrawBox(float x1, float y1, float x2, float y2, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float ushift, float vshift);
void xScrFXGlareRender(xCamera* cam);
void xScrFXFullScreenGlareRender();
int xScrFXGlareAdd(xVec3* pos, float life, float intensity, float size, float r, float g, float b, float a, RwRaster* raster);
void xScrFxDistortionUpdate(float dt);
void xScrFxDistortionAdd();
void xScrFxDrawSafeArea();
int xScrFxIsLetterbox();
void xScrFxUpdateLetterBox(float seconds);
void xScrFxLetterbox(int enable);
void xScrFxLetterBoxSetAlpha(unsigned char alpha);
void xScrFxLetterBoxSetSize(float size);
void xScrFxLetterboxReset();
void xScrFxUpdateFade(float seconds);
int xScrFxIsFading();
void xScrFxStopFade();
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float seconds, type_1 callback, int hold);
void xScrFxDrawScreenSizeRectangle();
void xScrFxRender();
void xScrFxUpdate(RwCamera* cam, float dt);
void xScrFxReset();
void xScrFxInit();

// xScrFxDrawBox__FffffUcUcUcUcff
// Start address: 0x2010c0
void xScrFxDrawBox(float x1, float y1, float x2, float y2, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float ushift, float vshift)
{
	float oocameraNearClipPlane;
	type_96 indices;
	type_94 v;
}

// xScrFXGlareRender__FP7xCamera
// Start address: 0x201570
void xScrFXGlareRender(xCamera* cam)
{
	int i;
	xVec3 w;
	xVec3 h;
	xVec3 v;
	xVec3 glareDir;
	float val;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_77 sStripVert;
}

// xScrFXFullScreenGlareRender__Fv
// Start address: 0x201eb0
void xScrFXFullScreenGlareRender()
{
	xMat4x3 mat;
	xVec3 v;
	xVec3 glareDir;
	float d;
	float alpha;
}

// xScrFXGlareAdd__FP5xVec3fffffffP8RwRaster
// Start address: 0x2020e0
int xScrFXGlareAdd(xVec3* pos, float life, float intensity, float size, float r, float g, float b, float a, RwRaster* raster)
{
	int i;
	RwTexture* texturePtr;
}

// xScrFxDistortionUpdate__Ff
// Start address: 0x2022a0
void xScrFxDistortionUpdate(float dt)
{
	DistortionParticle* dp;
	int i;
	xVec3 pos;
}

// xScrFxDistortionAdd__FP5xVec3P5xVec3i
// Start address: 0x202450
void xScrFxDistortionAdd()
{
}

// xScrFxDrawSafeArea__Fv
// Start address: 0x202460
void xScrFxDrawSafeArea()
{
	RwVideoMode videoMode;
	unsigned int screenWidth;
	unsigned int screenHeight;
	unsigned int xMargin;
	unsigned int yMargin;
	int top;
	int bottom;
	int left;
	int right;
}

// xScrFxIsLetterbox__Fv
// Start address: 0x2026b0
int xScrFxIsLetterbox()
{
}

// xScrFxUpdateLetterBox__FP8RwCameraf
// Start address: 0x2026e0
void xScrFxUpdateLetterBox(float seconds)
{
	RwVideoMode video_mode;
}

// xScrFxLetterbox__Fi
// Start address: 0x202800
void xScrFxLetterbox(int enable)
{
}

// xScrFxLetterBoxSetAlpha__FUc
// Start address: 0x202850
void xScrFxLetterBoxSetAlpha(unsigned char alpha)
{
}

// xScrFxLetterBoxSetSize__Ff
// Start address: 0x202860
void xScrFxLetterBoxSetSize(float size)
{
}

// xScrFxLetterboxReset__Fv
// Start address: 0x202870
void xScrFxLetterboxReset()
{
}

// xScrFxUpdateFade__FP8RwCameraf
// Start address: 0x202880
void xScrFxUpdateFade(float seconds)
{
	float t;
	RwVideoMode video_mode;
}

// xScrFxIsFading__Fv
// Start address: 0x202c50
int xScrFxIsFading()
{
}

// xScrFxStopFade__Fv
// Start address: 0x202c60
void xScrFxStopFade()
{
}

// xScrFxFade__FP10iColor_tagP10iColor_tagfPFv_vi
// Start address: 0x202c70
void xScrFxFade(iColor_tag* base, iColor_tag* dest, float seconds, type_1 callback, int hold)
{
}

// xScrFxDrawScreenSizeRectangle__Fv
// Start address: 0x202d20
void xScrFxDrawScreenSizeRectangle()
{
	RwVideoMode video_mode;
}

// xScrFxRender__FP8RwCamera
// Start address: 0x202d80
void xScrFxRender()
{
}

// xScrFxUpdate__FP8RwCameraf
// Start address: 0x202dd0
void xScrFxUpdate(RwCamera* cam, float dt)
{
}

// xScrFxReset__Fv
// Start address: 0x202e90
void xScrFxReset()
{
}

// xScrFxInit__Fv
// Start address: 0x202ed0
void xScrFxInit()
{
}

