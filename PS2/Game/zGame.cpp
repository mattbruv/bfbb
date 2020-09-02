typedef struct xJSPHeader;
typedef struct xAnimPlay;
typedef struct RwObjectHasFrame;
typedef struct xAnimState;
typedef struct xBase;
typedef enum _zPlayerWallJumpState;
typedef struct zCutsceneMgr;
typedef struct xCollis;
typedef struct RpLight;
typedef struct RxPipelineNode;
typedef struct zEnt;
typedef struct rxHeapFreeBlock;
typedef enum RpWorldRenderOrder;
typedef struct xEnt;
typedef struct RwRaster;
typedef struct xLinkAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xMarkerAsset;
typedef struct xAnimTable;
typedef struct RwV2d;
typedef struct RpMaterial;
typedef struct RwTexture;
typedef struct RwFrame;
typedef struct xGridBound;
typedef struct RxNodeDefinition;
typedef struct _tagxPad;
typedef struct xScene;
typedef struct zAssetPickupTable;
typedef struct xUpdateCullGroup;
typedef struct RpTriangle;
typedef struct xMemPool;
typedef enum _tagTRCState;
typedef struct xQuat;
typedef struct zJumpParam;
typedef struct RxPipeline;
typedef struct RwRGBA;
typedef struct xSurface;
typedef struct xVec3;
typedef struct xEntMotionOrbitData;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xModelInstance;
typedef struct RwTexCoords;
typedef struct RpSector;
typedef enum _tagRumbleType;
typedef struct _zEnv;
typedef enum _zPlayerType;
typedef struct _class_0;
typedef struct RxPipelineCluster;
typedef enum _CurrentPlayer;
typedef struct xMovePointAsset;
typedef struct xEntBoulder;
typedef struct xEntAsset;
typedef struct xModelBucket;
typedef struct RxPipelineNodeParam;
typedef struct RpMeshHeader;
typedef struct _tagxRumble;
typedef struct RwResEntry;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xPortalAsset;
typedef struct RwSky2DVertex;
typedef struct xGroup;
typedef struct xAnimEffect;
typedef struct RpWorldSector;
typedef struct analog_data;
typedef struct RpMorphTarget;
typedef struct xEnvAsset;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct xCamera;
typedef struct xClumpCollBSPTree;
typedef struct xLightKit;
typedef struct xEntFrame;
typedef struct xAnimFile;
typedef struct RxPipelineRequiresCluster;
typedef struct RpWorld;
typedef struct xEntMechData;
typedef struct xClumpCollBSPVertInfo;
typedef struct zPlayerGlobals;
typedef struct xCutscene;
typedef struct zCheckPoint;
typedef struct xCutsceneTime;
typedef struct xEntMotionSplineData;
typedef struct xUpdateCullMgr;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xCutsceneInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct xModelTag;
typedef struct xCutsceneData;
typedef struct zPlayerCarryInfo;
typedef struct xClumpCollBSPTriangle;
typedef struct xShadowSimplePoly;
typedef struct zPlayerSettings;
typedef struct xVec4;
typedef struct RwCamera;
typedef struct zLasso;
typedef struct _class_1;
typedef struct xUpdateCullEnt;
typedef struct xEnv;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xCutsceneBreak;
typedef struct RwLLLink;
typedef struct xCoef3;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct xMat4x3;
typedef struct iFogParams;
typedef enum RxClusterValidityReq;
typedef enum eGameMode;
typedef struct xAnimMultiFile;
typedef struct _zPortal;
typedef struct RpAtomic;
typedef struct xLightKitLight;
typedef struct _tagTRCPadInfo;
typedef struct XCSNNosey;
typedef struct RpVertexNormal;
typedef union _class_2;
typedef struct _class_3;
typedef enum pause_ability;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xVec2;
typedef struct xRot;
typedef struct tag_iFile;
typedef struct xEntMotionMechData;
typedef struct RpInterpolator;
typedef enum rxEmbeddedPacketState;
typedef struct xEntPenData;
typedef struct xSphere;
typedef struct xCutsceneZbuffer;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct jot;
typedef struct RpPolygon;
typedef struct xFFX;
typedef enum _tagPadState;
typedef struct RpMaterialList;
typedef struct xBox;
typedef struct xEntOrbitData;
typedef struct RxClusterDefinition;
typedef struct xBaseAsset;
typedef struct zEntHangable;
typedef struct xJSPNodeInfo;
typedef struct xMovePoint;
typedef struct xGlobals;
typedef struct basic_rect;
typedef struct zPlatFMRunTime;
typedef struct xModelPool;
typedef struct xEntMotion;
typedef struct xEntShadow;
typedef struct RwSphere;
typedef struct xAnimMultiFileEntry;
typedef struct xPlatformAsset;
typedef struct xAnimActiveEffect;
typedef struct xCutsceneZbufferHack;
typedef struct xEntMotionAsset;
typedef struct RpClump;
typedef struct split_tag;
typedef struct RwTexDictionary;
typedef struct anim_coll_data;
typedef struct RpGeometry;
typedef struct xGroupAsset;
typedef struct xtextbox;
typedef struct RxOutputSpec;
typedef struct callback;
typedef enum _tagPadInit;
typedef struct xAnimSingle;
typedef struct _tagPadAnalog;
typedef struct xMat3x3;
typedef struct tag_type;
typedef struct RxClusterRef;
typedef struct xSpline3;
typedef struct xEntSplineData;
typedef enum eGameWhereAmI;
typedef struct xBound;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileBase;
typedef struct xEntMotionPenData;
typedef struct xfont;
typedef struct xCutsceneMgr;
typedef struct xCoef;
typedef struct xEntDrive;
typedef struct zScene;
typedef struct RxNodeMethods;
typedef struct xQCData;
typedef struct tag_xFile;
typedef struct xCutsceneMgrAsset;
typedef struct xBBox;
typedef struct zPlatform;
typedef struct RwSky2DVertexFields;
typedef struct xEntMPData;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct _tagiTRCPadInfo;
typedef struct zGlobals;
typedef struct iEnv;
typedef struct substr;
typedef struct xEntMotionERData;
typedef struct RxPacket;
typedef struct zGlobalSettings;
typedef struct _tagiPad;
typedef enum RwFogType;
typedef struct zPlayerLassoInfo;
typedef struct iColor_tag;
typedef struct tri_data_0;
typedef struct RwRGBAReal;
typedef struct tri_data_1;
typedef struct zLedgeGrabParams;
typedef struct RwLinkList;
typedef enum en_SOAK_DIR;
typedef union RwSky2DVertexAlignmentOverlay;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef void(*type_6)(RxPipelineNode*);
typedef unsigned int(*type_11)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_17)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_19)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_24)(RpWorldSector*);
typedef unsigned int(*type_27)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_31)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_35)(RxNodeDefinition*);
typedef void(*type_36)(RxNodeDefinition*);
typedef int(*type_37)(RxPipelineNode*);
typedef unsigned int(*type_39)(xAnimTransition*, xAnimSingle*, void*);
typedef xBase*(*type_41)(unsigned int);
typedef char*(*type_43)(xBase*);
typedef char*(*type_44)(unsigned int);
typedef void(*type_46)(xEnt*, xScene*, float);
typedef int(*type_47)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_49)(void*);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_52)(xEnt*, xVec3*);
typedef void(*type_55)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_57)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_60)(xEnt*);
typedef unsigned int(*type_66)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_68)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_80)(jot&, xtextbox&, float, float);
typedef RpClump*(*type_90)(RpClump*, void*);
typedef void(*type_95)(jot&, xtextbox&, xtextbox&);
typedef RwCamera*(*type_102)(RwCamera*);
typedef void(*type_108)(xMemPool*, void*);
typedef void(*type_109)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef unsigned int(*type_110)(void*, void*);
typedef void(*type_117)(RwResEntry*);
typedef RpAtomic*(*type_119)(RpAtomic*);

typedef float type_1[2];
typedef RpLight* type_3[2];
typedef xVec3 type_5[60];
typedef <unknown type (0xa510)> type_7[4];
typedef unsigned int type_8[72];
typedef RwFrame* type_9[2];
typedef float type_10[15];
typedef char type_12[5];
typedef xBase* type_13[72];
typedef float type_14[15];
typedef float type_15[22];
typedef RwTexCoords* type_16[8];
typedef unsigned int type_18[15];
typedef float type_20[22];
typedef unsigned int type_21[15];
typedef unsigned char type_22[3];
typedef unsigned int type_23[15];
typedef RwFrustumPlane type_25[6];
typedef char type_26[16];
typedef float type_28[4];
typedef xVec3 type_29[5];
typedef char type_30[16];
typedef unsigned int type_32[15];
typedef RwV3d type_33[8];
typedef unsigned char type_34[5];
typedef analog_data type_38[2];
typedef xVec3 type_40[3];
typedef char type_42[16];
typedef char* type_45[85];
typedef float type_48[4];
typedef unsigned char type_51[2];
typedef char type_53[16];
typedef float type_54[16];
typedef unsigned int type_56[2];
typedef unsigned char type_58[2];
typedef float type_59[6];
typedef float type_61[3];
typedef char type_62[128];
typedef float type_63[3];
typedef xModelTag type_64[2];
typedef float type_65[3];
typedef char type_67[2048];
typedef unsigned short type_69[3];
typedef xEnt* type_70[111];
typedef xVec3 type_71[4];
typedef unsigned int type_72[4];
typedef float type_73[12];
typedef char type_74[32];
typedef _tagTRCPadInfo type_75[4];
typedef float type_76[12];
typedef float type_77[12];
typedef xCutsceneZbuffer type_78[4];
typedef char type_79[128];
typedef type_79 type_81[6];
typedef float type_82[12];
typedef unsigned char type_83[2];
typedef RwSky2DVertex type_84[4];
typedef unsigned int type_85[2];
typedef char* type_86[57];
typedef float type_87[12];
typedef unsigned char type_88[14];
typedef xModelTag type_89[4];
typedef unsigned int type_91[4096];
typedef unsigned int type_92[2];
typedef float type_93[12];
typedef char type_94[4];
typedef unsigned short type_96[6];
typedef xModelInstance* type_97[14];
typedef char type_98[32];
typedef xCollis type_99[18];
typedef unsigned int type_100[2];
typedef float type_101[2];
typedef RwTexCoords* type_103[8];
typedef RwSky2DVertex type_104[4];
typedef float type_105[4];
typedef unsigned char type_106[4];
typedef unsigned char type_107[2];
typedef char type_111[256];
typedef char type_112[32];
typedef char type_113[32];
typedef unsigned short type_114[3];
typedef unsigned char type_115[22];
typedef unsigned char type_116[2];
typedef xAnimMultiFileEntry type_118[1];
typedef unsigned char type_120[22];
typedef unsigned char type_121[3];
typedef char* type_122[50];
typedef xVec4 type_123[12];
typedef RwSky2DVertex type_124[4];
typedef RxCluster type_125[1];

struct xJSPHeader
{
	type_94 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_17 BeforeAnimMatrices;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
	type_4 BeforeEnter;
	type_50 StateCallback;
	type_17 BeforeAnimMatrices;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_47 eventFunc;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct zCutsceneMgr : xCutsceneMgr
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
		_class_0 tuv;
		tri_data_0 tri;
	};
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_46 update;
	type_46 endUpdate;
	type_52 bupdate;
	type_57 move;
	type_60 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_68 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_28 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xMarkerAsset
{
	xVec3 pos;
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

struct RwV2d
{
	float x;
	float y;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_112 name;
	type_113 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct _tagxPad
{
	type_115 value;
	type_120 last_value;
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
	type_15 up_tmr;
	type_20 down_tmr;
	type_38 analog;
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
	type_41 resolvID;
	type_43 base2Name;
	type_44 id2Name;
};

struct zAssetPickupTable
{
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct RpTriangle
{
	type_114 vertIndex;
	short matIndex;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_108 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
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
	type_121 pad;
	void* moprops;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	_class_3 anim_coll;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct RpSector
{
	int type;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
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

struct xEntBoulder
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_117 destroyNotify;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_11 Callback;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_103 texCoords;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_72 pad;
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
	type_123 frustplane;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_116 NumAnims;
	void** RawData;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_24 renderCallBack;
	RxPipeline* pipeline;
};

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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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
	type_64 BubbleWandTag;
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
	type_21 Inv_PatsSock;
	type_23 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_32 Inv_LevelPickups;
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
	type_56 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_70 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_88 sb_model_indices;
	type_97 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	unsigned int* TimeChunkOffs;
	unsigned int* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	unsigned int Waiting;
	unsigned int BadReadPause;
	float BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float Time;
	float CamTime;
	unsigned int PlayIndex;
	unsigned int Ready;
	int DataLoading;
	unsigned int GotData;
	unsigned int ShutDownWait;
	float PlaybackSpeed;
	unsigned int Opened;
	tag_xFile File;
	int AsyncID;
	void* MemBuf;
	void* MemCurr;
	unsigned int SndStarted;
	unsigned int SndNumChannel;
	type_85 SndChannelReq;
	type_92 SndAssetID;
	type_100 SndHandle;
	XCSNNosey* cb_nosey;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct xEntMotionSplineData
{
	int unknown;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_39 Conditional;
	type_39 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xCutsceneInfo
{
	unsigned int Magic;
	unsigned int AssetID;
	unsigned int NumData;
	unsigned int NumTime;
	unsigned int MaxModel;
	unsigned int MaxBufEven;
	unsigned int MaxBufOdd;
	unsigned int HeaderSize;
	unsigned int VisCount;
	unsigned int VisSize;
	unsigned int BreakCount;
	unsigned int pad;
	type_26 SoundLeft;
	type_30 SoundRight;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_48 wt;
};

struct xCutsceneData
{
	unsigned int DataType;
	unsigned int AssetID;
	unsigned int ChunkSize;
	union
	{
		unsigned int FileOffset;
		void* DataPtr;
	};
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xShadowSimplePoly
{
	type_40 vert;
	xVec3 norm;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_59 MoveSpeed;
	type_61 AnimSneak;
	type_63 AnimWalk;
	type_65 AnimRun;
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
	type_106 talk_filter;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_102 beginUpdate;
	type_0 endUpdate;
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
	type_25 frustumPlanes;
	RwBBox frustumBoundBox;
	type_33 frustumCorners;
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
	type_29 lastRefs;
	type_34 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _class_1
{
	union
	{
		unsigned char invisible;
		unsigned char ethereal;
		unsigned char merge;
		unsigned char word_break;
		unsigned char word_end;
		unsigned char line_break;
		unsigned char stop;
		unsigned char tab;
	};
	union
	{
		unsigned char insert;
		unsigned char dynamic;
		unsigned char page_break;
		unsigned char stateful;
	};
	unsigned short dummy;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_110 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct rxReq
{
};

struct xCutsceneBreak
{
	float Time;
	int Index;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_118 Files;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_119 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_54 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int id;
	_tagTRCState state;
};

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct _class_3
{
	xVec3* verts;
};

enum pause_ability
{
	PA_NONE,
	PA_MENU,
	PA_STALL
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
	type_71 corner;
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
	type_55 post;
	type_66 depenq;
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

struct xVec2
{
	float x;
	float y;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct tag_iFile
{
	unsigned int flags;
	type_62 path;
	int fd;
	int offset;
	int length;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
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

struct jot
{
	substr s;
	_class_1 flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_69 vertIndex;
};

struct xFFX
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct zEntHangable
{
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_83 pad;
	float delay;
	xSpline3* spl;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_81 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_98 sceneStart;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_73 tmrs;
	type_76 ttms;
	type_77 atms;
	type_82 dtms;
	type_87 vms;
	type_93 dss;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_1 radius;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xPlatformAsset
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xCutsceneZbufferHack
{
	char* name;
	type_78 times;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_90 callback;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct anim_coll_data
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
	type_16 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	unsigned int flags;
	float line_space;
	float tab_stop;
	float left_indent;
	float right_indent;
	callback* cb;
	void* context;
	char** texts;
	unsigned int* text_sizes;
	unsigned int texts_size;
	substr text;
	unsigned int text_hash;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct callback
{
	type_80 render;
	type_95 layout_update;
	type_95 render_update;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_101 BilinearLerp;
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

struct _tagPadAnalog
{
	char x;
	char y;
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

struct tag_type
{
	substr name;
	type_109 parse_tag;
	type_109 reset_tag;
	void* context;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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

struct xEntSplineData
{
	int unknown;
};

enum eGameWhereAmI
{
	eGameWhere_NA,
	eGameWhere_InitStart,
	eGameWhere_InitScene,
	eGameWhere_InitCamera,
	eGameWhere_InitMusic,
	eGameWhere_InitOther,
	eGameWhere_InitEnd,
	eGameWhere_ExitStart,
	eGameWhere_ExitRumble,
	eGameWhere_ExitHUD,
	eGameWhere_ExitSound,
	eGameWhere_ExitCamera,
	eGameWhere_ExitScene,
	eGameWhere_ExitEnd,
	eGameWhere_SetupScene,
	eGameWhere_SetupZFX,
	eGameWhere_SetupPlayer,
	eGameWhere_SetupCamera,
	eGameWhere_SetupScrFX,
	eGameWhere_SetupSceneLoad,
	eGameWhere_SetupMusicNotify,
	eGameWhere_SetupHudSetup,
	eGameWhere_SetupSkydome,
	eGameWhere_SetupSceneEvents,
	eGameWhere_SetupUpdateCull,
	eGameWhere_SetupLOD,
	eGameWhere_SetupExtras,
	eGameWhere_SetupEnd,
	eGameWhere_LoopStart,
	eGameWhere_CutsceneFinish,
	eGameWhere_LoopDo,
	eGameWhere_LoopCalcTime,
	eGameWhere_LoopPadUpdate,
	eGameWhere_LoopTRCCheck,
	eGameWhere_LoopCheats,
	eGameWhere_LoopSceneUpdate,
	eGameWhere_LoopPlayerUpdate,
	eGameWhere_LoopSoundUpdate,
	eGameWhere_LoopSFXWidgets,
	eGameWhere_LoopHUDUpdate,
	eGameWhere_LoopCameraUpdate,
	eGameWhere_LoopCameraFXUpdate,
	eGameWhere_LoopFlyToInterface,
	eGameWhere_LoopCameraBegin,
	eGameWhere_LoopSceneRender,
	eGameWhere_LoopCameraEnd,
	eGameWhere_LoopCameraShowRaster,
	eGameWhere_LoopCameraFXEnd,
	eGameWhere_LoopMusicUpdate,
	eGameWhere_LoopUpdateMode,
	eGameWhere_LoopContinue,
	eGameWhere_LoopEndGameLoop,
	eGameWhere_SaveLoop,
	eGameWhere_ModeSceneSwitch,
	eGameWhere_ModeCutsceneFinish,
	eGameWhere_ModeGameExit,
	eGameWhere_ModeGameInit,
	eGameWhere_ModeGameSetup,
	eGameWhere_ModeSwitchAutoSave,
	eGameWhere_ModeSwitchCutsceneFinish,
	eGameWhere_ModeStoreCheckpoint,
	eGameWhere_LoseChanceReset,
	eGameWhere_LoseChanceResetDone,
	eGameWhere_TransitionBubbles,
	eGameWhere_TransitionBegin,
	eGameWhere_TransitionSnapShot,
	eGameWhere_TransitionUpdate,
	eGameWhere_TransitionPadUpdate,
	eGameWhere_TransitionTRCCheck,
	eGameWhere_TransitionCameraClear,
	eGameWhere_TransitionCameraBegin,
	eGameWhere_TransitionRenderBackground,
	eGameWhere_TransitionSpawnBubbles,
	eGameWhere_TransitionDrawEnd,
	eGameWhere_TransitionUpdateBubbles,
	eGameWhere_TransitionCameraEnd,
	eGameWhere_TransitionCameraShowRaster,
	eGameWhere_TransitionUpdateEnd,
	eGameWhere_TransitionUIRender,
	eGameWhere_TransitionUIRenderEnd,
	eGameWhere_TransitionEnd,
	eGameWhere_TransitionEnded,
	eGameWhere_SetupPlayerInit,
	eGameWhere_SetupPlayerCamera,
	eGameWhere_SetupPlayerEnd
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_22 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_107 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct xfont
{
	unsigned int id;
	float width;
	float height;
	float space;
	iColor_tag color;
	basic_rect clip;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
};

struct xCoef
{
	type_105 a;
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
	type_8 baseCount;
	type_13 baseList;
	_zEnv* zen;
};

struct RxNodeMethods
{
	type_31 nodeBody;
	type_35 nodeInit;
	type_36 nodeTerm;
	type_37 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_27 configMsgHandler;
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

struct tag_xFile
{
	type_74 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_10 startTime;
	type_14 endTime;
	type_18 emitID;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_3 light;
	type_9 light_frame;
	int memlvl;
};

struct substr
{
	char* text;
	unsigned int size;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_125 clusters;
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
	type_58 InitialPowerUp;
};

struct _tagiPad
{
	int port;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_5 tranTable;
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

struct RwLinkList
{
	RwLLLink link;
};

enum en_SOAK_DIR
{
	SOAK_FOR,
	SOAK_BACK,
	SOAK_RAND,
	SOAK_NOMORE,
	SOAK_FORCE = 0x7fffffff
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_7 qWords;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_42 buffer;
type_53 buffer;
unsigned int gGameSfxReport;
_CurrentPlayer gPendingPlayer;
unsigned int sPlayerMarkerStartID;
unsigned int sPlayerMarkerStartCamID;
float sPlayerStartAngle;
int sPortalling;
float sGameOverTimer;
float sTimeElapsed;
long sTimeLast;
long sTimeCurrent;
unsigned int gLevelChanged;
int g_hiphopReloadHIP;
int g_hiphopForcePortal;
int g_hiphopResetOnly;
int g_hiphopEnabled;
unsigned int startPressed;
iColor_tag sFadeColor;
iColor_tag black;
iColor_tag clear;
unsigned int gSoak;
type_86 soaklevels_gameorder;
type_122 soaklevels_alphaorder;
char** soaklevels;
float soaktime;
xPortalAsset dummyPortalAsset;
_zPortal dummyPortal;
unsigned int loadMeter;
unsigned int loadCDMeter;
long t0;
long t1;
long w0;
long w1;
long gloop_time;
long gwait_time;
int gloop_ct;
float gloop_time_secs;
float gwait_time_secs;
float gloop_net_time_secs;
float snd_radius;
unsigned int gLastProfileDump;
RwCamera* sGameScreenTransCam;
RpWorld* World;
RpLight* DirectionalLight;
unsigned int bgID;
float bgu1;
float bgv1;
float bgu2;
float bgv2;
unsigned char bgr;
unsigned char bgg;
unsigned char bgb;
unsigned char bga;
eGameWhereAmI gGameWhereAmI;
type_45 gGameWhereAmI_str;
zGlobals globals;
_CurrentPlayer gCurrentPlayer;
int gWaitingToAutoSave;
eGameMode gGameMode;
type_75 gTrcPad;
int gGameState;
callback text_cb;
type_91 ourGlobals;
unsigned int gBusStopIsRunning;
unsigned int gFrameCount;
_zEnv* gCurEnv;

void zGameSetupPlayer();
void zGameScreenTransitionEnd();
void zGameScreenTransitionUpdate(float percentComplete, char* msg, unsigned char* rgba);
void zGameScreenTransitionUpdate(float percentComplete, char* msg);
void zGameScreenTransitionBegin();
void zGameUpdateMode();
void zGame_HackPostPortalAutoSaveDraw();
void zGame_HackDrawCard(float x, float y, float w, float h, RwRaster* rast);
void zGameStall();
void zGamePauseIfPossible();
int zGameIsPaused();
void zGameLoop();
void zGameSetup();
void zGameExit();
void zGameInit(unsigned int theSceneID);
unsigned int PickNextSoak();

// zGameSetupPlayer__Fv
// Start address: 0x17a4a0
void zGameSetupPlayer()
{
	xEntAsset* asset;
	int playerCount;
	unsigned int size;
	xMarkerAsset* m;
}

// zGameScreenTransitionEnd__Fv
// Start address: 0x17a630
void zGameScreenTransitionEnd()
{
	RwFrame* frame;
}

// zGameScreenTransitionUpdate__FfPcPUc
// Start address: 0x17a6d0
void zGameScreenTransitionUpdate(float percentComplete, char* msg, unsigned char* rgba)
{
	RwRGBA back_col;
	RwTexture* tex;
	RwRaster* ras;
	float recipCamZ;
	type_124 vx;
	float z;
	type_111 meter;
}

// zGameScreenTransitionUpdate__FfPc
// Start address: 0x17ade0
void zGameScreenTransitionUpdate(float percentComplete, char* msg)
{
}

// zGameScreenTransitionBegin__Fv
// Start address: 0x17ae30
void zGameScreenTransitionBegin()
{
	RwFrame* frame;
	RwRGBAReal col;
	RwBBox box;
}

// zGameUpdateMode__Fv
// Start address: 0x17af10
void zGameUpdateMode()
{
	xPortalAsset* passet;
	char* id;
	unsigned int nextSceneID;
	int result;
	xBase* sendTo;
	unsigned int size;
	xMarkerAsset* m;
	xCamera* cam;
}

// zGame_HackPostPortalAutoSaveDraw__Fv
// Start address: 0x17b720
void zGame_HackPostPortalAutoSaveDraw()
{
	RwCamera* cam;
	RwCamera* ccam;
	RwRGBA bg;
	type_67 str;
	xtextbox tb;
	float yextent;
	unsigned int i;
	RwTexture* tex;
	RwRaster* rast;
}

// zGame_HackDrawCard__FffffP8RwRaster
// Start address: 0x17bce0
void zGame_HackDrawCard(float x, float y, float w, float h, RwRaster* rast)
{
	type_104 quad;
	float screenZ;
}

// zGameStall__Fv
// Start address: 0x17be40
void zGameStall()
{
}

// zGamePauseIfPossible__Fv
// Start address: 0x17bee0
void zGamePauseIfPossible()
{
}

// zGameIsPaused__Fv
// Start address: 0x17c240
int zGameIsPaused()
{
}

// zGameLoop__Fv
// Start address: 0x17c280
void zGameLoop()
{
	int ostrich_delay;
	int cheats;
	xMat4x3 playerMat;
}

// zGameSetup__Fv
// Start address: 0x17c930
void zGameSetup()
{
	RpWorld* world;
}

// zGameExit__Fv
// Start address: 0x17caa0
void zGameExit()
{
}

// zGameInit__FUi
// Start address: 0x17cb50
void zGameInit(unsigned int theSceneID)
{
}

// PickNextSoak__Fv
// Start address: 0x17cc40
unsigned int PickNextSoak()
{
	unsigned int nextsoak;
	char* name;
	unsigned int tag;
	type_12 useme;
	unsigned int sumtotal;
	int soakcnt;
	en_SOAK_DIR soakdir;
	int soakidx;
	int justwrap;
}

