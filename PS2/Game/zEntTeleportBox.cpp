typedef struct xEntMechData;
typedef struct RpMeshHeader;
typedef struct RxPipelineNode;
typedef struct xGridBound;
typedef struct iEnv;
typedef struct xEntMotionSplineData;
typedef struct RxPipeline;
typedef struct xEnt;
typedef struct xModelPool;
typedef struct RxCluster;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xSpline3;
typedef enum _tagRumbleType;
typedef struct _zEntTeleportBox;
typedef struct xLightKit;
typedef struct xAnimTransition;
typedef enum _zPlayerType;
typedef struct RxPipelineNodeParam;
typedef struct xAnimPlay;
typedef struct RwFrame;
typedef struct RpGeometry;
typedef struct xUpdateCullGroup;
typedef struct xScene;
typedef struct xAnimFile;
typedef struct zEnt;
typedef struct xJSPNodeInfo;
typedef struct xAnimSingle;
typedef struct teleport_asset;
typedef struct RpAtomic;
typedef struct RxPacket;
typedef struct xAnimActiveEffect;
typedef struct xAnimEffect;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct analog_data;
typedef struct RpClump;
typedef struct xAnimTransitionList;
typedef struct xPortalAsset;
typedef struct xModelTag;
typedef struct RxPipelineRequiresCluster;
typedef struct xVec3;
typedef enum RwFogType;
typedef struct xGroup;
typedef struct xEntMotionMPData;
typedef struct RwRGBAReal;
typedef struct xEntERData;
typedef struct RwObjectHasFrame;
typedef struct xClumpCollBSPBranchNode;
typedef struct RwLinkList;
typedef enum RpWorldRenderOrder;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xJSPHeader;
typedef struct RpMaterial;
typedef struct xCoef3;
typedef struct RpTriangle;
typedef struct xSurface;
typedef struct RwRGBA;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct xUpdateCullMgr;
typedef struct RwTexture;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RwTexCoords;
typedef struct xEntAsset;
typedef struct zPlayerCarryInfo;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xAnimMultiFile;
typedef struct xCamera;
typedef struct _zEnv;
typedef struct zPlayerSettings;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntDrive;
typedef struct xEntMotionMechData;
typedef struct RwCamera;
typedef struct xClumpCollBSPTree;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xMat4x3;
typedef struct xModelInstance;
typedef struct xEntPenData;
typedef struct xUpdateCullEnt;
typedef struct xEnvAsset;
typedef struct RxHeap;
typedef struct xAnimTable;
typedef struct RwBBox;
typedef struct RpLight;
typedef struct xQuat;
typedef struct RpWorld;
typedef struct xEntFrame;
typedef struct _zPortal;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct zScene;
typedef struct xEntOrbitData;
typedef struct iFogParams;
typedef struct xVec2;
typedef struct xDynAsset;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct zJumpParam;
typedef struct xEnv;
typedef struct zPlatFMRunTime;
typedef struct xEntMotion;
typedef struct xShadowSimplePoly;
typedef struct xMarkerAsset;
typedef struct zEntHangable;
typedef struct xPlatformAsset;
typedef struct RwMatrixTag;
typedef struct xEntMotionAsset;
typedef struct xMovePointAsset;
typedef struct RwLLLink;
typedef struct zPlatform;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_0;
typedef struct rxReq;
typedef enum _tagPadState;
typedef struct zCutsceneMgr;
typedef struct basic_rect;
typedef struct tri_data_1;
typedef struct xEntBoulder;
typedef struct _class_0;
typedef struct xLightKitLight;
typedef enum RxClusterValidityReq;
typedef struct xEntSplineData;
typedef struct xGlobals;
typedef struct RpVertexNormal;
typedef struct xCollis;
typedef struct zAssetPickupTable;
typedef struct xShadowSimpleCache;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xEntCollis;
typedef struct _tagxPad;
typedef struct xEntMotionPenData;
typedef enum RxNodeDefEditable;
typedef struct RpInterpolator;
typedef enum RxClusterValid;
typedef struct xAnimMultiFileBase;
typedef struct xRot;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xEntMPData;
typedef struct xFFX;
typedef struct xCoef;
typedef struct xQCData;
typedef enum rxEmbeddedPacketState;
typedef struct zUIAsset;
typedef struct xSphere;
typedef struct _class_1;
typedef struct xBaseAsset;
typedef struct _tagiPad;
typedef struct RpPolygon;
typedef struct xMovePoint;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct zUIFontAsset;
typedef struct xCylinder;
typedef struct xEntMotionERData;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct zUIFont;
typedef struct xSerial;
typedef struct zLasso;
typedef struct xBBox;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntShadow;
typedef struct xClumpCollBSPTriangle;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct zGlobals;
typedef struct RxClusterRef;
typedef struct zGlobalSettings;
typedef struct RwObject;
typedef struct xEntMotionOrbitData;
typedef struct RxIoSpec;
typedef struct zPlayerLassoInfo;
typedef union _class_2;
typedef struct xMemPool;
typedef struct zLedgeGrabParams;
typedef struct RxNodeMethods;
typedef struct _zUI;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrustumPlane;
typedef struct RwPlane;

typedef RpAtomic*(*type_1)(RpAtomic*);
typedef void(*type_5)(RwResEntry*);
typedef int(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_9)(xMemPool*, void*);
typedef int(*type_10)(RxNodeDefinition*);
typedef unsigned int(*type_11)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_13)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_15)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_16)(RxNodeDefinition*);
typedef void(*type_18)(xEnt*, xScene*, float);
typedef unsigned int(*type_20)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_22)(RwCamera*);
typedef int(*type_23)(RxPipelineNode*);
typedef RwCamera*(*type_24)(RwCamera*);
typedef RwObjectHasFrame*(*type_27)(RwObjectHasFrame*);
typedef void(*type_31)(RxPipelineNode*);
typedef unsigned int(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_36)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_38)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_39)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_42)(RxPipelineNode*, RxPipeline*);
typedef void(*type_43)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpWorldSector*(*type_44)(RpWorldSector*);
typedef unsigned int(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_48)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_52)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_53)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_59)(void*);
typedef xBase*(*type_63)(unsigned int);
typedef char*(*type_67)(xBase*);
typedef char*(*type_72)(unsigned int);
typedef unsigned int(*type_76)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_78)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_79)(xEnt*, xScene*, float);
typedef void(*type_84)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_85)(xEnt*, xVec3*);
typedef void(*type_86)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_87)(xEnt*);
typedef unsigned int(*type_89)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_96)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_100)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_104)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_106)(xAnimPlay*, xAnimState*);
typedef int(*type_109)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_111)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_116)(void*, void*);
typedef unsigned int(*type_117)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_118)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_120)(RpClump*, void*);
typedef unsigned int(*type_125)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_127)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_130)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);

typedef unsigned char type_0[2];
typedef char type_2[32];
typedef char type_3[32];
typedef float type_4[22];
typedef float type_7[22];
typedef unsigned char type_12[3];
typedef unsigned int type_14[15];
typedef unsigned int type_17[15];
typedef RxCluster type_19[1];
typedef float type_21[2];
typedef float type_25[4];
typedef unsigned int type_26[15];
typedef unsigned char type_28[3];
typedef unsigned int type_29[72];
typedef char type_30[4];
typedef analog_data type_32[2];
typedef RwTexCoords* type_33[8];
typedef xBase* type_34[72];
typedef char type_37[16];
typedef float type_40[4];
typedef char type_46[16];
typedef RwFrustumPlane type_47[6];
typedef xVec4 type_49[12];
typedef unsigned short type_50[2];
typedef unsigned char type_51[2];
typedef RwV3d type_54[8];
typedef unsigned int type_55[2];
typedef unsigned char type_56[2];
typedef float type_57[2];
typedef float type_58[6];
typedef float type_60[2];
typedef float type_61[3];
typedef xVec3 type_62[3];
typedef float type_64[12];
typedef float type_65[2];
typedef float type_66[3];
typedef float type_68[12];
typedef float type_69[2];
typedef xModelTag type_70[2];
typedef float type_71[3];
typedef float type_73[12];
typedef float type_74[12];
typedef RpLight* type_75[2];
typedef float type_77[12];
typedef RwFrame* type_80[2];
typedef float type_81[12];
typedef xEnt* type_82[111];
typedef float type_83[16];
typedef unsigned char type_88[4];
typedef unsigned char type_90[2];
typedef float type_91[2];
typedef unsigned char type_92[4];
typedef char type_93[128];
typedef type_93 type_94[6];
typedef unsigned short type_95[4];
typedef unsigned short type_97[2];
typedef float type_98[4];
typedef unsigned short type_99[2];
typedef unsigned char type_101[14];
typedef xModelTag type_102[4];
typedef char type_103[32];
typedef unsigned short type_105[3];
typedef xModelInstance* type_107[14];
typedef xVec3 type_108[4];
typedef unsigned char type_110[2];
typedef xAnimMultiFileEntry type_112[1];
typedef unsigned char type_113[4];
typedef xBox type_114[2];
typedef unsigned int type_115[4];
typedef unsigned char type_119[22];
typedef unsigned char type_121[22];
typedef xCollis type_122[18];
typedef RwTexCoords* type_123[8];
typedef xVec3 type_124[5];
typedef unsigned char type_126[5];
typedef unsigned short type_128[3];
typedef xVec3 type_129[60];

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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_75 light;
	type_80 light_frame;
	int memlvl;
};

struct xEntMotionSplineData
{
	int unknown;
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
	type_79 update;
	type_79 endUpdate;
	type_85 bupdate;
	type_86 move;
	type_87 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_100 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_5 destroyNotify;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_25 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_53 eventFunc;
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

struct _zEntTeleportBox : zEnt
{
	unsigned int status;
	teleport_asset* tasset;
	zEnt* target;
	unsigned int currPlrState;
	unsigned int prevPlrState;
	unsigned int jumpInAnim;
	unsigned int jumpOutAnim;
	unsigned int JOtoOpenAnim;
	unsigned int JItoOpenAnim;
	type_114 trig;
	unsigned int currPlayerIn;
	unsigned int prevPlayerIn;
	unsigned int currPlayerNear;
	unsigned int prevPlayerNear;
	float lastdt;
	float plrCtrlTimer;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_15 Conditional;
	type_15 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_43 BeforeAnimMatrices;
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
	type_33 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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
	type_63 resolvID;
	type_67 base2Name;
	type_72 id2Name;
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
	type_110 NumAnims;
	void** RawData;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_91 BilinearLerp;
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

struct teleport_asset : xDynAsset
{
	unsigned int marker;
	unsigned int opened;
	unsigned int launchAngle;
	unsigned int camAngle;
	unsigned int targetID;
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
	type_1 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_19 clusters;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_89 Callback;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_36 BeforeEnter;
	type_41 StateCallback;
	type_43 BeforeAnimMatrices;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_120 callback;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_40 wt;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_27 sync;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_102 HangPawTag;
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
	type_14 Inv_PatsSock;
	type_17 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_26 Inv_LevelPickups;
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
	type_55 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_82 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_101 sb_model_indices;
	type_107 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xJSPHeader
{
	type_30 idtag;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpTriangle
{
	type_128 vertIndex;
	short matIndex;
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
	type_28 pad;
	void* moprops;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_59 activateCB;
	type_59 deactivateCB;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_2 name;
	type_3 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct RwTexCoords
{
	float u;
	float v;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_112 Files;
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
	type_49 frustplane;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_58 MoveSpeed;
	type_61 AnimSneak;
	type_66 AnimWalk;
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
	type_113 talk_filter;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_22 beginUpdate;
	type_24 endUpdate;
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
	type_47 frustumPlanes;
	RwBBox frustumBoundBox;
	type_54 frustumCorners;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_123 texCoords;
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

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_116 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xQuat
{
	xVec3 v;
	float s;
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
	type_44 renderCallBack;
	RxPipeline* pipeline;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_115 pad;
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
	type_29 baseCount;
	type_34 baseList;
	_zEnv* zen;
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

struct xVec2
{
	float x;
	float y;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_12 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_64 tmrs;
	type_68 ttms;
	type_73 atms;
	type_74 dtms;
	type_77 vms;
	type_81 dss;
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

struct xShadowSimplePoly
{
	type_62 vert;
	xVec3 norm;
};

struct xMarkerAsset
{
	xVec3 pos;
};

struct zEntHangable
{
};

struct xPlatformAsset
{
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct rxReq
{
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct zCutsceneMgr
{
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct xEntBoulder
{
};

struct _class_0
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_83 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntSplineData
{
	int unknown;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_94 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_103 sceneStart;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct zAssetPickupTable
{
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
	type_108 corner;
};

struct st_SERIAL_CLIENTINFO
{
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
	type_122 colls;
	type_84 post;
	type_96 depenq;
};

struct _tagxPad
{
	type_119 value;
	type_121 last_value;
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
	type_4 up_tmr;
	type_7 down_tmr;
	type_32 analog;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_90 pad;
	float len;
	float range;
	float period;
	float phase;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xRot
{
	xVec3 axis;
	float angle;
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

struct xFFX
{
};

struct xCoef
{
	type_98 a;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct zUIAsset : xEntAsset
{
	unsigned int uiFlags;
	type_50 dim;
	unsigned int textureID;
	type_57 uva;
	type_60 uvb;
	type_65 uvc;
	type_69 uvd;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct _tagiPad
{
	int port;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_105 vertIndex;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_0 pad;
	float delay;
	xSpline3* spl;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct zUIFontAsset : zUIAsset
{
	unsigned short uiFontFlags;
	unsigned char mode;
	unsigned char fontID;
	unsigned int textAssetID;
	type_88 bcolor;
	type_92 color;
	type_95 inset;
	type_97 space;
	type_99 cdim;
	unsigned int max_height;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	unsigned short uiFontFlags;
	unsigned short uiFontHackFlags;
	unsigned int text_id;
	float yscroll;
	unsigned int text_index;
	char* text;
};

struct xSerial
{
	unsigned int idtag;
	int baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int warned;
	int curele;
	int bitidx;
	int bittally;
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
	type_124 lastRefs;
	type_126 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_21 radius;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct anim_coll_data
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_51 PowerUp;
	type_56 InitialPowerUp;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_129 tranTable;
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

struct RxNodeMethods
{
	type_6 nodeBody;
	type_10 nodeInit;
	type_16 nodeTerm;
	type_23 pipelineNodeInit;
	type_31 pipelineNodeTerm;
	type_42 pipelineNodeConfig;
	type_48 configMsgHandler;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	unsigned int uiFlags;
	unsigned int uiButton;
	unsigned short preUpdateIndex;
	unsigned short updateIndex;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

type_37 buffer;
type_46 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
int sPlayerIn;
unsigned int sPlayerNear;
zUIFont* sTeleportUI;
float sTeleportCamPitch;
float fudgex;
float fudgez;
zGlobals globals;
xMat4x3 g_I3;
type_118 CtoOEffectTboxEnableCB;
type_11 JumpOutEffectJOAnimCB;
type_130 JumpOutEffectPlrEjectCB;
type_78 JumpOutEffectPlrVisibleCB;
type_39 JumpInEffectJIAnimCB;
type_104 JumpInEffectPlrTeleportCB;
type_38 JumpInEffectPlrInvisibleCB;
type_13 CtoOCB;
type_20 CtoOCheck;
type_45 JOtoOCB;
type_111 JOtoOCheck;
type_8 JItoOCB;
type_76 JItoOCheck;
type_117 JumpInCB;
type_35 JumpInCheck;
type_125 JumpOutCB;
type_52 JumpOutCheck;
type_127 OpenCheck;
type_106 xAnimDefaultBeforeEnter;
type_109 zEntTeleportBoxEventCB;
type_18 zEntTeleportBox_Update;
unsigned int gActiveHeap;

int zEntTeleportBoxEventCB(xBase* to, unsigned int toEvent);
int zEntTeleportBox_playerIn();
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s);
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, float dt);
void zEntTeleportBox_Setup(_zEntTeleportBox* ent);
void zEntTeleportBox_InitAll();
void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset);
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset);
unsigned int JumpOutEffectJOAnimCB(void* object);
unsigned int JumpOutEffectPlrEjectCB(void* object);
unsigned int JumpOutEffectPlrVisibleCB();
unsigned int CtoOEffectTboxEnableCB(void* object);
unsigned int JumpInEffectJIAnimCB(void* object);
unsigned int JumpInEffectPlrTeleportCB(void* object);
unsigned int JumpInEffectPlrInvisibleCB();
unsigned int CtoOCB(void* object);
unsigned int CtoOCheck(void* object);
unsigned int JOtoOCB(void* object);
unsigned int JOtoOCheck(void* object);
unsigned int JItoOCB(void* object);
unsigned int JItoOCheck(void* object);
unsigned int JumpOutCB(void* object);
unsigned int JumpOutCheck(void* object);
unsigned int JumpInCB(void* object);
unsigned int JumpInCheck(void* object);
unsigned int OpenCheck(void* object);

// zEntTeleportBoxEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x317f00
int zEntTeleportBoxEventCB(xBase* to, unsigned int toEvent)
{
	_zEntTeleportBox* s;
}

// zEntTeleportBox_playerIn__Fv
// Start address: 0x318020
int zEntTeleportBox_playerIn()
{
}

// zEntTeleportBox_Load__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x318030
void zEntTeleportBox_Load(_zEntTeleportBox* ent, xSerial* s)
{
	int open;
}

// zEntTeleportBox_Save__FP16_zEntTeleportBoxP7xSerial
// Start address: 0x3180b0
void zEntTeleportBox_Save(_zEntTeleportBox* ent, xSerial* s)
{
}

// zEntTeleportBox_Update__FP4xEntP6xScenef
// Start address: 0x318120
void zEntTeleportBox_Update(xEnt* rawent, xScene* sc, float dt)
{
	_zEntTeleportBox* ent;
	_zEntTeleportBox* target;
	float dx__;
	float dy__;
	float dz__;
	xVec3 playerMid;
	xMat4x3& mat;
	xVec3 ypr;
	xVec3 dir;
}

// zEntTeleportBox_Setup__FP16_zEntTeleportBox
// Start address: 0x3188f0
void zEntTeleportBox_Setup(_zEntTeleportBox* ent)
{
	_zEntTeleportBox* target;
	xBox wbox;
}

// zEntTeleportBox_InitAll__Fv
// Start address: 0x318b50
void zEntTeleportBox_InitAll()
{
}

// zEntTeleportBox_Init__FP16_zEntTeleportBoxP14teleport_asset
// Start address: 0x318b60
void zEntTeleportBox_Init(_zEntTeleportBox* ent, teleport_asset* asset)
{
	xEntAsset* easset;
	unsigned int size;
	xMarkerAsset* marker;
	xAnimTable* table;
	xAnimState* state;
	void* buf;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
	xAnimFile* afile;
}

// zEntTeleportBox_Init__FR5xBaseR9xDynAssetUi
// Start address: 0x319530
void zEntTeleportBox_Init(xBase& data, xDynAsset& asset)
{
}

// JumpOutEffectJOAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319540
unsigned int JumpOutEffectJOAnimCB(void* object)
{
}

// JumpOutEffectPlrEjectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319550
unsigned int JumpOutEffectPlrEjectCB(void* object)
{
	_zEntTeleportBox* tbox;
	xVec3 tmp;
}

// JumpOutEffectPlrVisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195c0
unsigned int JumpOutEffectPlrVisibleCB()
{
}

// CtoOEffectTboxEnableCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x3195f0
unsigned int CtoOEffectTboxEnableCB(void* object)
{
	_zEntTeleportBox* tbox;
}

// JumpInEffectJIAnimCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319610
unsigned int JumpInEffectJIAnimCB(void* object)
{
}

// JumpInEffectPlrTeleportCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319620
unsigned int JumpInEffectPlrTeleportCB(void* object)
{
}

// JumpInEffectPlrInvisibleCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x319630
unsigned int JumpInEffectPlrInvisibleCB()
{
}

// CtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319660
unsigned int CtoOCB(void* object)
{
	xVec3 tmp;
}

// CtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319700
unsigned int CtoOCheck(void* object)
{
	zEnt* player;
	float dx__;
	float dy__;
	float dz__;
}

// JOtoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319770
unsigned int JOtoOCB(void* object)
{
}

// JOtoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319780
unsigned int JOtoOCheck(void* object)
{
}

// JItoOCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x319790
unsigned int JItoOCB(void* object)
{
	_zEntTeleportBox* tbox;
}

// JItoOCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197a0
unsigned int JItoOCheck(void* object)
{
}

// JumpOutCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197b0
unsigned int JumpOutCB(void* object)
{
}

// JumpOutCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197c0
unsigned int JumpOutCheck(void* object)
{
}

// JumpInCB__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197d0
unsigned int JumpInCB(void* object)
{
}

// JumpInCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197e0
unsigned int JumpInCheck(void* object)
{
}

// OpenCheck__FP15xAnimTransitionP11xAnimSinglePv
// Start address: 0x3197f0
unsigned int OpenCheck(void* object)
{
}

