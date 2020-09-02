typedef struct xModelInstance;
typedef struct RwObjectHasFrame;
typedef struct xEntMotionOrbitData;
typedef struct xUpdateCullEnt;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct xMovePoint;
typedef struct RpAtomic;
typedef enum _zPlayerWallJumpState;
typedef struct _tagp2CamStaticFollowAsset;
typedef struct RpMeshHeader;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xCutsceneZbuffer;
typedef struct xModelPool;
typedef struct zScene;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxPipeline;
typedef struct RwV2d;
typedef struct xEntShadow;
typedef struct xEnt;
typedef struct xMovePointAsset;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xVec3;
typedef struct xAnimFile;
typedef struct zJumpParam;
typedef struct RpGeometry;
typedef struct xAnimPlay;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct iEnv;
typedef enum _tagRumbleType;
typedef struct RxPipelineCluster;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xCamera;
typedef struct zEntHangable;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct RxHeap;
typedef struct xAnimState;
typedef struct zEnt;
typedef struct xJSPNodeInfo;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct xEntMechData;
typedef struct xQuat;
typedef struct analog_data;
typedef struct zPlatform;
typedef struct xEntMotionSplineData;
typedef enum _tagTransType;
typedef struct RwTexCoords;
typedef struct xCamAsset;
typedef struct rxHeapBlockHeader;
typedef struct xSpline3;
typedef struct _tagxCamPathAsset;
typedef struct xCutsceneZbufferHack;
typedef struct xGroup;
typedef enum RpWorldRenderOrder;
typedef struct zFlyKey;
typedef struct zCutsceneMgr;
typedef struct RxPipelineRequiresCluster;
typedef struct xBaseAsset;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpTriangle;
typedef struct RpMaterial;
typedef struct xScene;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xSurface;
typedef struct zAssetPickupTable;
typedef struct xBound;
typedef struct xVec2;
typedef struct RpSector;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct xEntBoulder;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct xVec4;
typedef struct xCutsceneBreak;
typedef struct xEntAsset;
typedef struct xBBox;
typedef struct RwSurfaceProperties;
typedef struct xEntDrive;
typedef struct RpWorldSector;
typedef struct zPlayerSettings;
typedef struct RpMorphTarget;
typedef struct RwMatrixTag;
typedef struct XCSNNosey;
typedef struct rxReq;
typedef struct RwCamera;
typedef struct xCutsceneMgr;
typedef struct _zEnv;
typedef struct RpLight;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPTree;
typedef struct xCutsceneMgrAsset;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct RpWorld;
typedef struct xCutscene;
typedef struct xEnvAsset;
typedef struct _zPortal;
typedef struct xEntFrame;
typedef struct basic_rect;
typedef struct xAnimTable;
typedef struct xMat4x3;
typedef struct xEntMotionMechData;
typedef struct st_PACKER_ASSETTYPE;
typedef struct xCoef3;
typedef enum RxNodeDefEditable;
typedef struct xEntPenData;
typedef enum RxClusterValid;
typedef struct xGridBound;
typedef struct xRot;
typedef struct _tagxRumble;
typedef struct zLasso;
typedef struct iFogParams;
typedef struct xShadowSimplePoly;
typedef struct tag_iFile;
typedef struct RwLLLink;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntOrbitData;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RwCameraProjection;
typedef struct _tagxCamFollowAsset;
typedef enum RxClusterForcePresent;
typedef struct tag_xFile;
typedef struct zPlatFMRunTime;
typedef struct xCylinder;
typedef struct tri_data_0;
typedef struct tri_data_1;
typedef struct xEntMotion;
typedef struct _class_0;
typedef struct RpVertexNormal;
typedef enum _tagPadState;
typedef struct xLightKitLight;
typedef struct xBox;
typedef struct xAnimSingle;
typedef struct xPlatformAsset;
typedef struct RxClusterDefinition;
typedef struct xEntMotionAsset;
typedef struct xCollis;
typedef struct xGlobals;
typedef struct xShadowSimpleCache;
typedef enum camera_owner_enum;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct RpInterpolator;
typedef struct _tagxPad;
typedef struct RwSphere;
typedef struct xAnimMultiFileBase;
typedef struct RwTexDictionary;
typedef struct xEntSplineData;
typedef struct xEnv;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RpPolygon;
typedef struct _class_1;
typedef struct xEntMotionPenData;
typedef struct RxClusterRef;
typedef struct xCutsceneInfo;
typedef struct _tagiPad;
typedef struct RpMaterialList;
typedef struct _tagxCamShoulderAsset;
typedef struct RwObject;
typedef struct xFFX;
typedef struct RxIoSpec;
typedef struct xEntMPData;
typedef struct xCutsceneTime;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xCutsceneData;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwFrustumPlane;
typedef struct anim_coll_data;
typedef struct xEntMotionERData;
typedef struct RwPlane;
typedef struct xCoef;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef struct zGlobals;
typedef struct _tagp2CamStaticAsset;
typedef struct RxPacket;
typedef struct xQCData;
typedef struct zGlobalSettings;
typedef enum WallJumpViewState;
typedef enum RwFogType;
typedef struct zPlayerLassoInfo;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct zLedgeGrabParams;
typedef union _class_2;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef void(*type_4)(void*, unsigned int);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef RpAtomic*(*type_6)(RpAtomic*);
typedef void(*type_7)(void*, unsigned int, void*, char*);
typedef void(*type_9)(RxPipelineNode*);
typedef xBase*(*type_11)(unsigned int);
typedef int(*type_13)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_17)(xBase*);
typedef unsigned int(*type_20)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef char*(*type_21)(unsigned int);
typedef int(*type_24)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_27)(RxNodeDefinition*);
typedef void(*type_30)(RxNodeDefinition*);
typedef int(*type_34)(RxPipelineNode*);
typedef void(*type_35)(xAnimPlay*, xAnimState*);
typedef void(*type_42)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_45)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpWorldSector*(*type_46)(RpWorldSector*);
typedef void*(*type_50)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef void(*type_53)(void*);
typedef void*(*type_60)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef void(*type_62)(xEnt*, xScene*, float);
typedef void(*type_68)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_69)(xEnt*, xVec3*);
typedef unsigned int(*type_70)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_74)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_77)(xEnt*);
typedef int(*type_80)(void*, unsigned int, void*, int);
typedef unsigned int(*type_84)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_86)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void*(*type_98)(void*, unsigned int, void*, int*, int*);
typedef void(*type_104)(void*, unsigned int, void*);
typedef void(*type_106)(xMemPool*, void*);
typedef RpClump*(*type_108)(RpClump*, void*);
typedef unsigned int(*type_112)(void*, void*);
typedef void(*type_114)(RwResEntry*);

typedef unsigned short type_2[3];
typedef xVec3 type_3[5];
typedef unsigned char type_8[5];
typedef xVec3 type_10[60];
typedef float type_12[22];
typedef float type_14[22];
typedef unsigned char type_15[2];
typedef unsigned int type_18[15];
typedef RwFrustumPlane type_19[6];
typedef unsigned int type_22[15];
typedef float type_23[2];
typedef RwV3d type_25[8];
typedef xCutsceneZbuffer type_26[4];
typedef float type_28[12];
typedef unsigned int type_29[15];
typedef float type_31[2];
typedef unsigned int type_32[2];
typedef RwTexCoords* type_33[8];
typedef unsigned int type_36[2];
typedef zFlyKey type_37[4];
typedef analog_data type_38[2];
typedef unsigned int type_39[72];
typedef char type_40[4];
typedef float type_41[4];
typedef unsigned int type_43[2];
typedef xBase* type_44[72];
typedef xVec4 type_47[12];
typedef unsigned char type_48[2];
typedef unsigned int type_49[2];
typedef float type_51[6];
typedef unsigned char type_52[2];
typedef float type_54[3];
typedef xVec3 type_55[3];
typedef float type_56[3];
typedef char type_57[128];
typedef xModelTag type_58[2];
typedef float type_59[3];
typedef float type_61[12];
typedef float type_63[12];
typedef RpLight* type_64[2];
typedef float type_65[12];
typedef float type_66[16];
typedef xEnt* type_67[111];
typedef RwFrame* type_71[2];
typedef unsigned int type_72[4];
typedef float type_73[12];
typedef float type_75[2];
typedef float type_76[12];
typedef char type_78[32];
typedef float type_79[12];
typedef unsigned char type_81[3];
typedef char type_82[128];
typedef type_82 type_83[6];
typedef char type_85[16];
typedef unsigned short type_87[3];
typedef unsigned char type_88[14];
typedef xModelTag type_89[4];
typedef unsigned char type_90[2];
typedef char type_91[32];
typedef xModelInstance* type_93[14];
typedef unsigned char type_94[2];
typedef char type_95[16];
typedef unsigned int type_96[2];
typedef xVec3 type_97[4];
typedef xAnimMultiFileEntry type_99[1];
typedef float type_100[15];
typedef unsigned char type_101[3];
typedef unsigned char type_102[4];
typedef float type_103[15];
typedef unsigned int type_105[15];
typedef float type_107[4];
typedef char type_109[32];
typedef char type_110[32];
typedef float type_111[4];
typedef unsigned char type_113[22];
typedef xQuat type_115[2];
typedef RwTexCoords* type_116[8];
typedef char type_117[16];
typedef unsigned char type_118[22];
typedef xCollis type_119[18];
typedef char type_120[16];
typedef unsigned char type_121[3];
typedef RxCluster type_122[1];

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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_112 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_70 Callback;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_15 pad;
	float delay;
	xSpline3* spl;
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
	type_6 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct _tagp2CamStaticFollowAsset
{
	float rubber_band;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_39 baseCount;
	type_44 baseList;
	_zEnv* zen;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct RwV2d
{
	float x;
	float y;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_23 radius;
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
	type_62 update;
	type_62 endUpdate;
	type_69 bupdate;
	type_74 move;
	type_77 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_86 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_114 destroyNotify;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_107 param;
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
	type_0 eventFunc;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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
	type_45 BeforeAnimMatrices;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_64 light;
	type_71 light_frame;
	int memlvl;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_16 Conditional;
	type_16 Callback;
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
	type_47 frustplane;
};

struct zEntHangable
{
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_108 callback;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_35 BeforeEnter;
	type_42 StateCallback;
	type_45 BeforeAnimMatrices;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_41 wt;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct xEntMotionSplineData
{
	int unknown;
};

enum _tagTransType
{
	eTransType_None,
	eTransType_Interp1,
	eTransType_Interp2,
	eTransType_Interp3,
	eTransType_Interp4,
	eTransType_Linear,
	eTransType_Interp1Rev,
	eTransType_Interp2Rev,
	eTransType_Interp3Rev,
	eTransType_Interp4Rev,
	eTransType_Total
};

struct RwTexCoords
{
	float u;
	float v;
};

struct xCamAsset : xBaseAsset
{
	xVec3 pos;
	xVec3 at;
	xVec3 up;
	xVec3 right;
	xVec3 view_offset;
	short offset_start_frames;
	short offset_end_frames;
	float fov;
	float trans_time;
	_tagTransType trans_type;
	unsigned int flags;
	float fade_up;
	float fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	unsigned int valid_flags;
	type_96 markerid;
	unsigned char cam_type;
	type_101 pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_72 pad;
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

struct _tagxCamPathAsset
{
	unsigned int assetID;
	float time_end;
	float time_delay;
};

struct xCutsceneZbufferHack
{
	char* name;
	type_26 times;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct zFlyKey
{
	int frame;
	type_28 matrix;
	type_31 aperture;
	float focal;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RpTriangle
{
	type_2 vertIndex;
	short matIndex;
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
	type_17 base2Name;
	type_21 id2Name;
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
	type_18 Inv_PatsSock;
	type_22 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_29 Inv_LevelPickups;
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
	type_49 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_67 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_88 sb_model_indices;
	type_93 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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

struct zAssetPickupTable
{
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_81 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xVec2
{
	float x;
	float y;
};

struct RpSector
{
	int type;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_99 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_109 name;
	type_110 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
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

struct xEntBoulder
{
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
	type_53 activateCB;
	type_53 deactivateCB;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xCutsceneBreak
{
	float Time;
	int Index;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_116 texCoords;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_51 MoveSpeed;
	type_54 AnimSneak;
	type_56 AnimWalk;
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
	type_102 talk_filter;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct rxReq
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_92 beginUpdate;
	type_1 endUpdate;
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
	type_19 frustumPlanes;
	RwBBox frustumBoundBox;
	type_25 frustumCorners;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_100 startTime;
	type_103 endTime;
	type_105 emitID;
};

struct st_PKR_ASSET_TOCINFO
{
	unsigned int aid;
	st_PACKER_ASSETTYPE* typeref;
	unsigned int sector;
	unsigned int plus_offset;
	unsigned int size;
	void* mempos;
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
	type_46 renderCallBack;
	RxPipeline* pipeline;
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
	type_32 SndChannelReq;
	type_36 SndAssetID;
	type_43 SndHandle;
	XCSNNosey* cb_nosey;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_50 readXForm;
	type_60 writeXForm;
	type_80 assetLoaded;
	type_98 makeData;
	type_104 cleanup;
	type_4 assetUnloaded;
	type_7 writePeek;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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
	type_3 lastRefs;
	type_8 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct xShadowSimplePoly
{
	type_55 vert;
	xVec3 norm;
};

struct tag_iFile
{
	unsigned int flags;
	type_57 path;
	int fd;
	int offset;
	int length;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxCamFollowAsset
{
	float rotation;
	float distance;
	float height;
	float rubber_band;
	float start_speed;
	float end_speed;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_xFile
{
	type_78 relname;
	tag_iFile ps;
	void* user_data;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_61 tmrs;
	type_63 ttms;
	type_65 atms;
	type_73 dtms;
	type_76 vms;
	type_79 dss;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
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

struct _class_0
{
	xVec3* verts;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_66 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_75 BilinearLerp;
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

struct xPlatformAsset
{
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_83 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_91 sceneStart;
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
	type_97 corner;
};

enum camera_owner_enum
{
	CO_BOULDER = 0x1,
	CO_CRUISE_BUBBLE,
	CO_BUNGEE = 0x4,
	CO_BOSS = 0x8,
	CO_OOB = 0x10,
	CO_ZIPLINE = 0x20,
	CO_TURRET = 0x40,
	CO_REWARDANIM = 0x80
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
	type_119 colls;
	type_68 post;
	type_84 depenq;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct _tagxPad
{
	type_113 value;
	type_118 last_value;
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
	type_12 up_tmr;
	type_14 down_tmr;
	type_38 analog;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct xEntSplineData
{
	int unknown;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_87 vertIndex;
};

struct _class_1
{
	float t;
	float u;
	float v;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_117 SoundLeft;
	type_120 SoundRight;
};

struct _tagiPad
{
	int port;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _tagxCamShoulderAsset
{
	float distance;
	float height;
	float realign_speed;
	float realign_delay;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xFFX
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

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct RxNodeMethods
{
	type_24 nodeBody;
	type_27 nodeInit;
	type_30 nodeTerm;
	type_34 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_20 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_106 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct anim_coll_data
{
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

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct xCoef
{
	type_111 a;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct _tagp2CamStaticAsset
{
	unsigned int unused;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
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
	type_48 PowerUp;
	type_52 InitialPowerUp;
};

enum WallJumpViewState
{
	WJVS_DISABLED,
	WJVS_DISABLING,
	WJVS_ENABLED,
	WJVS_ENABLING
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_10 tranTable;
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

type_85 buffer;
type_95 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
float zcam_pad_pyaw_scale;
float zcam_pad_pitch_scale;
float zcam_near_d;
float zcam_near_h;
float zcam_near_pitch;
float zcam_far_d;
float zcam_far_h;
float zcam_far_pitch;
float zcam_wall_d;
float zcam_wall_h;
float zcam_wall_pitch;
float zcam_above_d;
float zcam_above_h;
float zcam_above_pitch;
float zcam_below_d;
float zcam_below_h;
float zcam_below_pitch;
float zcam_highbounce_d;
float zcam_highbounce_h;
float zcam_highbounce_pitch;
float zcam_overrot_min;
float zcam_overrot_mid;
float zcam_overrot_max;
float zcam_overrot_rate;
float zcam_overrot_tstart;
float zcam_overrot_tend;
float zcam_overrot_velmin;
float zcam_overrot_velmax;
float zcam_overrot_tmanual;
float zcam_overrot_tmr;
xCamera zcam_backupcam;
xCamera zcam_backupconvers;
int zcam_near;
int zcam_mode;
int zcam_bbounce;
int zcam_lbbounce;
int zcam_convers;
int zcam_lconvers;
int zcam_longbounce;
int zcam_highbounce;
int zcam_cutscene;
int zcam_reward;
xVec3* zcam_playervel;
float zcam_mintgtheight;
int zcam_fly;
int zcam_flypaused;
void* zcam_flydata;
unsigned int zcam_flysize;
float zcam_flytime;
unsigned int zcam_flyasset_current;
xCamAsset* zcam_dest;
xQuat zcam_quat;
float zcam_tmr;
float zcam_ttm;
float zcam_fovcurr;
float zcam_fovdest;
unsigned int stop_track;
unsigned char input_enabled;
unsigned char lassocam_enabled;
float lassocam_factor;
WallJumpViewState wall_jump_enabled;
xVec3 wall_jump_view;
float dMultiplier;
float dOffset;
float hMultiplier;
float hOffset;
float rewardMove;
float rewardMoveSpeed;
float rewardZoomSpeed;
float rewardZoomAmount;
float rewardTiltTime;
float rewardTiltAmount;
zGlobals globals;
xVec3 g_O3;
float gSkipTimeFlythrough;

unsigned int zCamera_FlyOnly();
void zCameraMinTargetHeightClear();
void zCameraMinTargetHeightSet(float height);
void zCameraSetReward(int on);
void zCameraDisableWallJump();
void zCameraEnableWallJump(xVec3& collNormal);
void zCameraTranslate(xCamera* cam, float dposx, float dposy, float dposz);
void zCameraDoTrans(xCamAsset* asset, float ttime);
void zCameraSetConvers(int on);
int zCameraGetConvers();
float zCameraGetLassoCamFactor();
void zCameraSetLassoCamFactor(float factor);
void zCameraEnableLassoCam();
void zCameraDisableLassoCam();
void zCameraEnableInput();
void zCameraDisableInput();
unsigned int zCameraIsTrackingDisabled();
void zCameraEnableTracking(camera_owner_enum owner);
void zCameraDisableTracking(camera_owner_enum owner);
void zCameraSetPlayerVel(xVec3* vel);
void zCameraSetHighbounce(int hbounce);
void zCameraSetLongbounce(int lbounce);
void zCameraSetBbounce(int bbouncing);
void zCameraUpdate(xCamera* cam, float dt);
void zCameraFreeLookSetGoals(xCamera* cam, float pitch_s, float& dgoal, float& hgoal, float& pitch_goal, float& lktm, float dt);
int zCameraRewardUpdate(xCamera* cam, float dt);
void zCameraFlyRestoreBackup(xCamera* backup);
void zCameraFlyStart(unsigned int assetID);
int zCameraFlyUpdate(xCamera* cam, float dt);
float MatrixSpeed(zFlyKey* keys);
void zCameraConversUpdate(xCamera* cam, float dt);
void zCameraReset(xCamera* cam);

// zCamera_FlyOnly__Fv
// Start address: 0x12b310
unsigned int zCamera_FlyOnly()
{
}

// zCameraMinTargetHeightClear__Fv
// Start address: 0x12b390
void zCameraMinTargetHeightClear()
{
}

// zCameraMinTargetHeightSet__Ff
// Start address: 0x12b3a0
void zCameraMinTargetHeightSet(float height)
{
}

// zCameraSetReward__Fi
// Start address: 0x12b3b0
void zCameraSetReward(int on)
{
}

// zCameraDisableWallJump__FP7xCamera
// Start address: 0x12b3e0
void zCameraDisableWallJump()
{
}

// zCameraEnableWallJump__FP7xCameraRC5xVec3
// Start address: 0x12b400
void zCameraEnableWallJump(xVec3& collNormal)
{
	xVec3 up;
}

// zCameraTranslate__FP7xCamerafff
// Start address: 0x12b540
void zCameraTranslate(xCamera* cam, float dposx, float dposy, float dposz)
{
}

// zCameraDoTrans__FP9xCamAssetf
// Start address: 0x12b590
void zCameraDoTrans(xCamAsset* asset, float ttime)
{
	xMat3x3 m;
}

// zCameraSetConvers__Fi
// Start address: 0x12b6f0
void zCameraSetConvers(int on)
{
	xCamera& cam;
	unsigned char saved;
}

// zCameraGetConvers__Fv
// Start address: 0x12bce0
int zCameraGetConvers()
{
}

// zCameraGetLassoCamFactor__Fv
// Start address: 0x12bcf0
float zCameraGetLassoCamFactor()
{
}

// zCameraSetLassoCamFactor__Ff
// Start address: 0x12bd00
void zCameraSetLassoCamFactor(float factor)
{
}

// zCameraEnableLassoCam__Fv
// Start address: 0x12bd10
void zCameraEnableLassoCam()
{
}

// zCameraDisableLassoCam__Fv
// Start address: 0x12bd20
void zCameraDisableLassoCam()
{
}

// zCameraEnableInput__Fv
// Start address: 0x12bd30
void zCameraEnableInput()
{
}

// zCameraDisableInput__Fv
// Start address: 0x12bd40
void zCameraDisableInput()
{
}

// zCameraIsTrackingDisabled__Fv
// Start address: 0x12bd50
unsigned int zCameraIsTrackingDisabled()
{
}

// zCameraEnableTracking__F17camera_owner_enum
// Start address: 0x12bd60
void zCameraEnableTracking(camera_owner_enum owner)
{
}

// zCameraDisableTracking__F17camera_owner_enum
// Start address: 0x12bd80
void zCameraDisableTracking(camera_owner_enum owner)
{
}

// zCameraSetPlayerVel__FP5xVec3
// Start address: 0x12bd90
void zCameraSetPlayerVel(xVec3* vel)
{
}

// zCameraSetHighbounce__Fi
// Start address: 0x12bda0
void zCameraSetHighbounce(int hbounce)
{
}

// zCameraSetLongbounce__Fi
// Start address: 0x12bdd0
void zCameraSetLongbounce(int lbounce)
{
}

// zCameraSetBbounce__Fi
// Start address: 0x12be00
void zCameraSetBbounce(int bbouncing)
{
}

// zCameraUpdate__FP7xCameraf
// Start address: 0x12be10
void zCameraUpdate(xCamera* cam, float dt)
{
	xVec3 tran_accum;
	float minDist;
	float dist;
	float tgtHeight;
	float oldTgtHeight;
	float plerp;
	float dlerp;
	float vertical_lerp;
	xVec3 delta;
	float mvtm_acc;
	float mvtm_dec;
	float lktm_acc;
	float lktm_dec;
	unsigned int button;
	float dgoal;
	float hgoal;
	float pgoal;
	float yaw_goal;
	float pitch_goal;
	float roll_goal;
	int x;
	float dp;
	int x;
	float dp;
	int y;
	int y;
	float velx;
	float velz;
	float camx;
	float camz;
	float cammag;
	float velmag;
	float velcos;
	float velsin;
	float velang;
	float angle_factor;
	float vel_factor;
	float time_factor;
	float dp;
	float dist;
	float dirx;
	float diry;
	float dirz;
	float dx__;
	float dy__;
	float dz__;
	float dist2;
	float dist_inv;
	xVec3 destPosition;
	float lktm;
	float mvtm;
	float pitch_s;
}

// zCameraFreeLookSetGoals__FP7xCamerafRfRfRfRff
// Start address: 0x12d780
void zCameraFreeLookSetGoals(xCamera* cam, float pitch_s, float& dgoal, float& hgoal, float& pitch_goal, float& lktm, float dt)
{
	float s;
}

// zCameraRewardUpdate__FP7xCameraf
// Start address: 0x12dcc0
int zCameraRewardUpdate(xCamera* cam, float dt)
{
	xVec3 v;
}

// zCameraFlyRestoreBackup__FP7xCamera
// Start address: 0x12dff0
void zCameraFlyRestoreBackup(xCamera* backup)
{
}

// zCameraFlyStart__FUi
// Start address: 0x12e640
void zCameraFlyStart(unsigned int assetID)
{
	st_PKR_ASSET_TOCINFO ainfo;
}

// zCameraFlyUpdate__FP7xCameraf
// Start address: 0x12eda0
int zCameraFlyUpdate(xCamera* cam, float dt)
{
	int i;
	int flyIdx;
	int numKeys;
	float flyLerp;
	float flyFrame;
	type_37 keys;
	float matdiff1;
	float matdiff2;
	float matdiff3;
	xMat3x3 tmpMat;
	type_115 quats;
	xQuat qresult;
}

// MatrixSpeed__FP7zFlyKey
// Start address: 0x12f410
float MatrixSpeed(zFlyKey* keys)
{
	float dot;
}

// zCameraConversUpdate__FP7xCameraf
// Start address: 0x12f580
void zCameraConversUpdate(xCamera* cam, float dt)
{
	float s;
	xQuat a;
	xQuat c;
}

// zCameraReset__FP7xCamera
// Start address: 0x12f7a0
void zCameraReset(xCamera* cam)
{
}

