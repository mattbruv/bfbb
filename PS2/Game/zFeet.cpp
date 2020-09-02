typedef struct RpLight;
typedef struct xEnt;
typedef struct zAssetPickupTable;
typedef struct xAnimTable;
typedef struct RxHeap;
typedef struct xCollis;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpInterpolator;
typedef struct _tagFeetSkidMark;
typedef struct RxPipelineNode;
typedef struct zPlatform;
typedef struct xLightKitLight;
typedef struct _tagxRumble;
typedef struct RwFrame;
typedef struct zGlobals;
typedef struct xQuat;
typedef struct xLinkAsset;
typedef struct RpAtomic;
typedef struct xBase;
typedef struct xEntBoulder;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeTopSortData;
typedef struct zGlobalSettings;
typedef struct rxHeapBlockHeader;
typedef struct xShadowSimplePoly;
typedef struct _tagSkidEdge;
typedef struct _class_0;
typedef struct xBaseAsset;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct xEntCollis;
typedef struct xVec3;
typedef struct RxPipelineRequiresCluster;
typedef struct RpPolygon;
typedef struct xModelInstance;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xGroupAsset;
typedef struct RpMaterialList;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef struct RxPipeline;
typedef struct xJSPNodeInfo;
typedef struct RpMaterial;
typedef struct xLightKit;
typedef struct xSurface;
typedef struct xPortalAsset;
typedef struct xVec4;
typedef struct xClumpCollBSPBranchNode;
typedef enum _zPlayerWallJumpState;
typedef struct xScene;
typedef struct RwSurfaceProperties;
typedef struct xAnimTransitionList;
typedef struct xShadowSimpleCache;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xFFX;
typedef struct RpClump;
typedef struct rxReq;
typedef struct RpGeometry;
typedef struct xAnimTransition;
typedef struct RwRaster;
typedef struct RpWorldSector;
typedef struct zLasso;
typedef enum RxClusterValidityReq;
typedef enum _tagRumbleType;
typedef struct xAnimState;
typedef struct xEntFrame;
typedef struct tagzFeet;
typedef enum _zPlayerType;
typedef struct xVec2;
typedef struct xEntDrive;
typedef struct xUpdateCullGroup;
typedef struct RpMorphTarget;
typedef struct xModelPool;
typedef struct xJSPHeader;
typedef struct xQCData;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct xBBox;
typedef struct RpVertexNormal;
typedef struct analog_data;
typedef enum RxClusterValid;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwTexture;
typedef struct _zPortal;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct RpMeshHeader;
typedef struct xAnimFile;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimSingle;
typedef struct xSphere;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct _tagFoot;
typedef struct xEntShadow;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct RpTriangle;
typedef union RxColorUnion;
typedef struct xGridBound;
typedef struct xAnimMultiFileBase;
typedef struct anim_coll_data;
typedef struct xBox;
typedef struct xCamera;
typedef struct zPlayerSettings;
typedef struct RxClusterDefinition;
typedef struct xAnimEffect;
typedef struct zEnt;
typedef struct RwCamera;
typedef struct tri_data_0;
typedef struct RwSphere;
typedef struct xAnimPlay;
typedef struct RwTexDictionary;
typedef struct xEnv;
typedef struct RxOutputSpec;
typedef struct RxObjSpace3DVertex;
typedef struct iEnv;
typedef struct iFogParams;
typedef struct xMat3x3;
typedef struct xBound;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef enum RpWorldRenderOrder;
typedef struct RxIoSpec;
typedef struct tri_data_1;
typedef struct xMemPool;
typedef struct RpSector;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef enum _tagPadState;
typedef struct _zEnv;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct RwPlane;
typedef struct xEnvAsset;
typedef struct _tagxPad;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpWorld;
typedef struct xClumpCollBSPVertInfo;
typedef struct _class_1;
typedef struct RxPacket;
typedef struct _tagPadAnalog;
typedef enum RwFogType;
typedef struct xModelBucket;
typedef struct xEntAsset;
typedef struct xClumpCollBSPTriangle;
typedef struct _tagiPad;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct zJumpParam;
typedef struct RwLinkList;
typedef struct RwV2d;
typedef struct xModelTag;
typedef union _class_2;

typedef unsigned int(*type_1)(void*, void*);
typedef xBase*(*type_2)(unsigned int);
typedef char*(*type_5)(xBase*);
typedef void(*type_7)(void*);
typedef char*(*type_8)(unsigned int);
typedef int(*type_9)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_11)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_13)(xAnimPlay*, xAnimState*);
typedef int(*type_15)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_17)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_19)(RxNodeDefinition*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_21)(RxNodeDefinition*);
typedef int(*type_24)(RxPipelineNode*);
typedef void(*type_26)(xEnt*, xScene*, float);
typedef void(*type_27)(RxPipelineNode*);
typedef int(*type_29)(RxPipelineNode*, RxPipeline*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef void(*type_31)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_32)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_33)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_34)(xEnt*);
typedef RpClump*(*type_39)(RpClump*, void*);
typedef unsigned int(*type_41)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_42)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_49)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpAtomic*(*type_54)(RpAtomic*);
typedef unsigned int(*type_57)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_68)(RwCamera*);
typedef RwCamera*(*type_75)(RwCamera*);
typedef void(*type_76)(xMemPool*, void*);
typedef RpWorldSector*(*type_80)(RpWorldSector*);
typedef void(*type_82)(RwResEntry*);
typedef RwObjectHasFrame*(*type_93)(RwObjectHasFrame*);

typedef RpLight* type_0[2];
typedef unsigned char type_3[22];
typedef RwFrame* type_4[2];
typedef unsigned char type_6[22];
typedef RwFrustumPlane type_10[6];
typedef _tagSkidEdge* type_12[4];
typedef xVec3 type_14[3];
typedef float type_16[4];
typedef RwV3d type_18[8];
typedef unsigned short type_22[3];
typedef xVec3 type_23[5];
typedef unsigned char type_25[5];
typedef xVec3 type_28[60];
typedef float type_35[22];
typedef unsigned int type_36[23];
typedef RxObjSpace3DVertex type_37[256];
typedef float type_38[22];
typedef char type_40[4];
typedef unsigned int type_43[15];
typedef RwTexCoords* type_44[8];
typedef unsigned int type_45[15];
typedef xVec3 type_46[4];
typedef unsigned int type_47[15];
typedef char type_48[16];
typedef analog_data type_50[2];
typedef float type_51[2];
typedef unsigned short type_52[3];
typedef float type_53[4];
typedef char type_55[16];
typedef unsigned int type_56[4];
typedef xCollis type_58[18];
typedef unsigned char type_59[2];
typedef unsigned char type_60[2];
typedef xVec4 type_61[12];
typedef xAnimMultiFileEntry type_62[1];
typedef unsigned int type_63[2];
typedef unsigned char type_64[2];
typedef float type_65[6];
typedef float type_66[3];
typedef float type_67[3];
typedef unsigned int type_69[72];
typedef xModelTag type_70[2];
typedef float type_71[3];
typedef unsigned char type_72[3];
typedef xBase* type_73[72];
typedef RwTexCoords* type_74[8];
typedef unsigned char type_77[3];
typedef xEnt* type_78[111];
typedef char type_79[32];
typedef char type_81[32];
typedef float type_83[4];
typedef char type_84[128];
typedef float type_85[2];
typedef type_84 type_86[6];
typedef float type_87[16];
typedef unsigned char type_88[14];
typedef xModelTag type_89[4];
typedef char type_90[32];
typedef RxCluster type_91[1];
typedef xModelInstance* type_92[14];
typedef unsigned char type_94[4];
typedef char type_95[128];
typedef char type_96[128];

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
	type_26 update;
	type_26 endUpdate;
	type_30 bupdate;
	type_32 move;
	type_34 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_42 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zAssetPickupTable
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
		tri_data_1 tri;
	};
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct _tagFeetSkidMark
{
	int total_feet;
	type_12 edge;
	int first_idx;
	int total_edges;
	float sample_timer;
	float remove_timer;
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

struct zPlatform
{
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_87 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_83 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_54 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_9 eventFunc;
};

struct xEntBoulder
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_62 Files;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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
	type_59 PowerUp;
	type_64 InitialPowerUp;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_56 pad;
};

struct xShadowSimplePoly
{
	type_14 vert;
	xVec3 norm;
};

struct _tagSkidEdge
{
	xVec3 centre;
	xVec3 local_x;
	float width;
};

struct _class_0
{
	xVec3* verts;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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
	type_1 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_58 colls;
	type_31 post;
	type_41 depenq;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_22 vertIndex;
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

struct zCutsceneMgr
{
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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
	type_69 baseCount;
	type_73 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_28 tranTable;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_77 pad;
	void* moprops;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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
	type_2 resolvID;
	type_5 base2Name;
	type_8 id2Name;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_46 corner;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xFFX
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_39 callback;
};

struct rxReq
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
	type_74 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_57 Conditional;
	type_57 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_44 texCoords;
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
	type_23 lastRefs;
	type_25 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_13 BeforeEnter;
	type_17 StateCallback;
	type_20 BeforeAnimMatrices;
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

struct tagzFeet
{
	int total;
	xEnt* owner;
	short entity_type;
	short pitch;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xVec2
{
	float x;
	float y;
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

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xJSPHeader
{
	type_40 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_79 name;
	type_81 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_60 NumAnims;
	void** RawData;
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
	type_82 destroyNotify;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_51 BilinearLerp;
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

struct xSphere
{
	xVec3 center;
	float r;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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
	type_70 BubbleWandTag;
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
	type_89 HangPawTag;
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
	type_43 Inv_PatsSock;
	type_45 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_47 Inv_LevelPickups;
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
	type_63 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_78 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_88 sb_model_indices;
	type_92 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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

struct _tagFoot
{
	tagzFeet* feet;
	int idx;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_85 radius;
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
	type_7 activateCB;
	type_7 deactivateCB;
};

struct RpTriangle
{
	type_52 vertIndex;
	short matIndex;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct anim_coll_data
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_61 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_65 MoveSpeed;
	type_66 AnimSneak;
	type_67 AnimWalk;
	type_71 AnimRun;
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
	type_94 talk_filter;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_49 Callback;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_68 beginUpdate;
	type_75 endUpdate;
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
	type_10 frustumPlanes;
	RwBBox frustumBoundBox;
	type_18 frustumCorners;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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
	type_20 BeforeAnimMatrices;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_0 light;
	type_4 light_frame;
	int memlvl;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_72 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_76 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RpSector
{
	int type;
};

struct RxNodeMethods
{
	type_15 nodeBody;
	type_19 nodeInit;
	type_21 nodeTerm;
	type_24 pipelineNodeInit;
	type_27 pipelineNodeTerm;
	type_29 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_86 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_90 sceneStart;
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

struct zEntHangable
{
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct _tagxPad
{
	type_3 value;
	type_6 last_value;
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
	type_50 analog;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_80 renderCallBack;
	RxPipeline* pipeline;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_91 clusters;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct _tagiPad
{
	int port;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_93 sync;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwV2d
{
	float x;
	float y;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_16 wt;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

type_48 buffer;
type_55 buffer;
type_36 sSurfaceSoundIDStep;
xBase* paremit_sd_pawprint;
xBase* paremit_vil_footprint;
RwRaster* sSkidMarkRaster;
type_53 cPlayerSkidWidth;
zGlobals globals;
unsigned int gActiveHeap;
type_33 zFeetStepVillainCB;

void zFeetGetIDs();

// zFeetGetIDs__Fv
// Start address: 0x175640
void zFeetGetIDs()
{
	type_95 type_name;
	type_96 name;
	int i;
	RwTexture* tex;
}

