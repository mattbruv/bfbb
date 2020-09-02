typedef struct RxPipelineNode;
typedef struct xEnt;
typedef struct RwV3d;
typedef struct xBase;
typedef struct zScene;
typedef struct xAnimTable;
typedef struct xShadowSimplePoly;
typedef struct RwRGBA;
typedef struct RpMeshHeader;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct RwResEntry;
typedef struct xEnv;
typedef struct xMemPool;
typedef struct zLedgeGrabParams;
typedef struct xQuat;
typedef struct rxHeapFreeBlock;
typedef struct xVec3;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef struct xLinkAsset;
typedef struct zEntHangable;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct zParEmitter;
typedef struct xUpdateCullEnt;
typedef struct RxNodeDefinition;
typedef struct xScene;
typedef struct xEntCollis;
typedef enum _zPlayerWallJumpState;
typedef struct xGridBound;
typedef struct xAnimState;
typedef struct xEntHangableAsset;
typedef struct _tagEmitRect;
typedef struct RpTriangle;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct iEnv;
typedef struct RpAtomic;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct zEnt;
typedef struct xPortalAsset;
typedef struct RxHeap;
typedef struct xJSPNodeInfo;
typedef struct xModelPool;
typedef struct xShadowSimpleCache;
typedef struct RwBBox;
typedef enum _tagRumbleType;
typedef struct xVec2;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xSurface;
typedef struct xEntAsset;
typedef struct xAnimFile;
typedef struct zPlatform;
typedef struct RwTexCoords;
typedef struct RpGeometry;
typedef struct rxHeapBlockHeader;
typedef struct xFFX;
typedef struct RpLight;
typedef struct analog_data;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct zCutsceneMgr;
typedef struct xEntFrame;
typedef struct xPEEntBound;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpClump;
typedef struct xGroup;
typedef struct _tagEmitLine;
typedef struct xModelTag;
typedef struct xCollis;
typedef struct zAssetPickupTable;
typedef struct xParEmitterCustomSettings;
typedef struct xJSPHeader;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xEntBoulder;
typedef struct xVec4;
typedef enum RpWorldRenderOrder;
typedef struct xEntDrive;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct rxReq;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct RpSector;
typedef enum RxClusterValidityReq;
typedef struct xModelBucket;
typedef struct xSerial;
typedef struct RwCamera;
typedef struct xMat4x3;
typedef struct xEntShadow;
typedef struct xBound;
typedef struct _tagEmitVolume;
typedef struct _zPortal;
typedef struct xEnvAsset;
typedef struct RpWorldSector;
typedef struct anim_coll_data;
typedef struct RpMorphTarget;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xQCData;
typedef struct RpWorld;
typedef struct zLasso;
typedef struct iFogParams;
typedef struct _tagxRumble;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xParEmitter;
typedef struct _tagEmitOffsetPoint;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct tri_data_0;
typedef struct xCylinder;
typedef struct xParEmitterAsset;
typedef struct xParGroup;
typedef struct xBox;
typedef struct xParEmitterPropsAsset;
typedef struct RxClusterDefinition;
typedef struct xBaseAsset;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef enum _tagPadState;
typedef struct xAnimActiveEffect;
typedef struct RwFrame;
typedef union FloatAndVoid;
typedef struct xPEVCyl;
typedef struct xGlobals;
typedef struct RwSphere;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct tri_data_1;
typedef struct _tagxPad;
typedef struct xParInterp;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RpInterpolator;
typedef struct RxClusterRef;
typedef struct xAnimMultiFileBase;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xPEEntBone;
typedef struct RwObject;
typedef struct _tagiPad;
typedef struct RxIoSpec;
typedef struct xParSys;
typedef struct RpPolygon;
typedef struct RxNodeMethods;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwFrustumPlane;
typedef struct xBBox;
typedef struct RwPlane;
typedef struct xPECircle;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct zGlobals;
typedef enum RwFogType;
typedef struct zGlobalSettings;
typedef struct RwRGBAReal;
typedef struct _tagEmitSphere;
typedef struct RwLinkList;
typedef struct zPlayerLassoInfo;
typedef union _class_2;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int(*type_1)(RxPipelineNode*);
typedef RwCamera*(*type_3)(RwCamera*);
typedef unsigned int(*type_4)(void*, void*);
typedef unsigned int(*type_5)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_6)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_10)(RxPipelineNode*);
typedef unsigned int(*type_11)(void*, void*);
typedef void(*type_12)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_13)(unsigned int);
typedef char*(*type_14)(xBase*);
typedef char*(*type_16)(unsigned int);
typedef int(*type_17)(RxPipelineNode*, RxPipeline*);
typedef void(*type_20)(xEnt*, xScene*, float);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef void(*type_25)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_26)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_30)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_32)(xEnt*);
typedef int(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_37)(RxNodeDefinition*);
typedef unsigned int(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_40)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_41)(RxNodeDefinition*);
typedef void(*type_42)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_52)(xAnimPlay*, xAnimState*);
typedef void(*type_54)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_55)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpWorldSector*(*type_56)(RpWorldSector*);
typedef void(*type_62)(zEntHangable*, xScene*, float);
typedef void(*type_64)(void*);
typedef void(*type_86)(xMemPool*, void*);
typedef int(*type_92)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_94)(RwResEntry*);
typedef unsigned int(*type_100)(void*, void*);

typedef xVec3 type_2[5];
typedef xVec3 type_8[3];
typedef unsigned char type_9[5];
typedef xVec3 type_15[60];
typedef xParInterp type_18[4];
typedef unsigned short type_19[3];
typedef xParInterp type_21[4];
typedef float type_23[22];
typedef float type_24[16];
typedef float type_27[22];
typedef RwFrustumPlane type_29[6];
typedef unsigned char type_31[3];
typedef float type_33[4];
typedef unsigned int type_35[15];
typedef RwV3d type_36[8];
typedef unsigned int type_39[15];
typedef unsigned int type_43[72];
typedef unsigned int type_44[15];
typedef char type_45[4];
typedef xBase* type_46[72];
typedef analog_data type_47[2];
typedef xVec3 type_48[4];
typedef unsigned char type_49[3];
typedef xVec3 type_50[8];
typedef RwTexCoords* type_51[8];
typedef float type_53[4];
typedef xVec4 type_57[12];
typedef unsigned char type_58[2];
typedef unsigned int type_59[2];
typedef xCollis type_60[18];
typedef unsigned char type_61[2];
typedef float type_63[6];
typedef float type_65[3];
typedef float type_66[3];
typedef xModelTag type_67[2];
typedef float type_68[3];
typedef RpLight* type_69[2];
typedef RwFrame* type_70[2];
typedef unsigned int type_71[4];
typedef xEnt* type_72[111];
typedef unsigned char type_73[3];
typedef float type_74[2];
typedef unsigned char type_75[3];
typedef float type_76[2];
typedef char type_77[128];
typedef type_77 type_78[6];
typedef unsigned char type_79[14];
typedef xModelTag type_80[4];
typedef float type_81[2];
typedef char type_82[32];
typedef xModelInstance* type_83[14];
typedef char type_84[16];
typedef unsigned short type_85[3];
typedef unsigned char type_87[2];
typedef unsigned char type_88[4];
typedef xAnimMultiFileEntry type_89[1];
typedef char type_90[32];
typedef char type_91[16];
typedef char type_93[32];
typedef unsigned char type_95[22];
typedef unsigned char type_96[22];
typedef xParInterp type_97[1];
typedef RwTexCoords* type_98[8];
typedef RxCluster type_99[1];

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
	type_20 update;
	type_20 endUpdate;
	type_26 bupdate;
	type_28 move;
	type_32 render;
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

struct RwV3d
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
	type_55 eventFunc;
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
	type_43 baseCount;
	type_46 baseList;
	_zEnv* zen;
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

struct xShadowSimplePoly
{
	type_8 vert;
	xVec3 norm;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_7 sync;
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
	type_12 BeforeAnimMatrices;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_94 destroyNotify;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_86 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_15 tranTable;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_33 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct zEntHangable : zEnt
{
	xEntHangableAsset* hangInfo;
	xVec3 pivot;
	xVec3 endpos;
	xVec3 vel;
	xVec3 swingplane;
	float grabTimer;
	float spin;
	unsigned int state;
	zEnt* shaggy;
	int enabled;
	zEnt* follow;
	int moving;
	float candle_timer;
	int candle_state;
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

struct zParEmitter : xParEmitter
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_4 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_13 resolvID;
	type_14 base2Name;
	type_16 id2Name;
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
	type_60 colls;
	type_25 post;
	type_40 depenq;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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
	type_52 BeforeEnter;
	type_54 StateCallback;
	type_12 BeforeAnimMatrices;
};

struct xEntHangableAsset
{
	unsigned int flags;
	float pivotOffset;
	float leverArm;
	float gravity;
	float accel;
	float decay;
	float grabDelay;
	float stopDecel;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct RpTriangle
{
	type_19 vertIndex;
	short matIndex;
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
	type_69 light;
	type_70 light_frame;
	int memlvl;
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
	type_22 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_24 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_5 Callback;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_48 corner;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xVec2
{
	float x;
	float y;
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

struct zPlatform
{
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_51 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_71 pad;
};

struct xFFX
{
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
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

struct zCutsceneMgr
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_6 callback;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_53 wt;
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_49 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct xJSPHeader
{
	type_45 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_67 BubbleWandTag;
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
	type_80 HangPawTag;
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
	type_35 Inv_PatsSock;
	type_39 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_44 Inv_LevelPickups;
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
	type_59 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_72 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_79 sb_model_indices;
	type_83 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xEntBoulder
{
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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
	type_64 activateCB;
	type_64 deactivateCB;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_57 frustplane;
};

struct rxReq
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_89 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_90 name;
	type_93 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_63 MoveSpeed;
	type_65 AnimSneak;
	type_66 AnimWalk;
	type_68 AnimRun;
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
	type_88 talk_filter;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpSector
{
	int type;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xSerial
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_3 endUpdate;
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
	type_29 frustumPlanes;
	RwBBox frustumBoundBox;
	type_36 frustumCorners;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_81 radius;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_31 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_98 texCoords;
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

struct anim_coll_data
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xRot
{
	xVec3 axis;
	float angle;
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
	type_56 renderCallBack;
	RxPipeline* pipeline;
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
	type_2 lastRefs;
	type_9 reindex;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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
	type_73 emit_pad;
	type_75 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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

struct xParGroup
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_97 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_18 color_birth;
	type_21 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

union FloatAndVoid
{
	float f;
	void* v;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_78 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_82 sceneStart;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct _class_0
{
	xVec3* verts;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct _tagxPad
{
	type_95 value;
	type_96 last_value;
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
	type_23 up_tmr;
	type_27 down_tmr;
	type_47 analog;
};

struct xParInterp
{
	type_74 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct _tagiPad
{
	int port;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xParSys
{
};

struct RpPolygon
{
	unsigned short matIndex;
	type_85 vertIndex;
};

struct RxNodeMethods
{
	type_34 nodeBody;
	type_37 nodeInit;
	type_41 nodeTerm;
	type_1 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_30 configMsgHandler;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_99 clusters;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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
	type_58 PowerUp;
	type_61 InitialPowerUp;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct _tagEmitSphere
{
	float radius;
};

struct RwLinkList
{
	RwLLLink link;
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

type_84 buffer;
type_91 buffer;
zParEmitter* sCandleEmitter;
zParEmitter* sCandleSmokeEmitter;
unsigned int sChandelierHash;
zParEmitter* sMountEmitter;
zGlobals globals;
type_11 xUpdateCull_DistanceSquaredCB;
type_100 xUpdateCull_AlwaysTrueCB;
type_92 zEntHangableEventCB;
type_62 zEntHangable_Update;

void zEntHangable_FollowUpdate(zEntHangable* ent);
void zEntHangable_Reset(zEntHangable* ent);
void zEntHangable_Load(zEntHangable* ent, xSerial* s);
void zEntHangable_Save(zEntHangable* ent, xSerial* s);
void zEntHangable_SetMatrix(zEntHangable* ent, float dt);
int zEntHangableEventCB(xBase* from, xBase* to, unsigned int toEvent, float* toParam);
void zEntHangable_Update(zEntHangable* ent, float dt);
void zEntHangable_UpdateFX(zEntHangable* ent);
void zEntHangable_Init(void* ent, void* asset);
void HangableSetup(zEntHangable* ent, xEntAsset* asset);
void zEntHangable_SetupFX();

// zEntHangable_FollowUpdate__FP12zEntHangable
// Start address: 0x136ee0
void zEntHangable_FollowUpdate(zEntHangable* ent)
{
	xVec3* center;
}

// zEntHangable_Reset__FP12zEntHangable
// Start address: 0x137060
void zEntHangable_Reset(zEntHangable* ent)
{
}

// zEntHangable_Load__FP12zEntHangableP7xSerial
// Start address: 0x1370c0
void zEntHangable_Load(zEntHangable* ent, xSerial* s)
{
}

// zEntHangable_Save__FP12zEntHangableP7xSerial
// Start address: 0x1370d0
void zEntHangable_Save(zEntHangable* ent, xSerial* s)
{
}

// zEntHangable_SetMatrix__FP12zEntHangablef
// Start address: 0x1370e0
void zEntHangable_SetMatrix(zEntHangable* ent, float dt)
{
	xMat4x3 tmpMat;
	xMat3x3 spinMat;
	int moving;
	xVec3* opos;
	xVec3* pos;
	xVec3* orot;
	xVec3 rot;
}

// zEntHangableEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x137730
int zEntHangableEventCB(xBase* from, xBase* to, unsigned int toEvent, float* toParam)
{
	zEntHangable* ent;
	zEnt* follow;
	FloatAndVoid dist;
}

// zEntHangable_Update__FP12zEntHangableP6xScenef
// Start address: 0x137a60
void zEntHangable_Update(zEntHangable* ent, float dt)
{
	xVec3 unitHang;
}

// zEntHangable_UpdateFX__FP12zEntHangable
// Start address: 0x137ea0
void zEntHangable_UpdateFX(zEntHangable* ent)
{
	type_50 offset_rlii0006;
	xVec3* local_offset;
	xParEmitterCustomSettings info;
	zParEmitter* emitter;
	int i;
}

// zEntHangable_Init__FPvPv
// Start address: 0x138060
void zEntHangable_Init(void* ent, void* asset)
{
}

// HangableSetup__FP12zEntHangableP9xEntAsset
// Start address: 0x1380d0
void HangableSetup(zEntHangable* ent, xEntAsset* asset)
{
	xEntHangableAsset* hangAsset;
	xVec3* center;
	xMat3x3 hackMat;
}

// zEntHangable_SetupFX__Fv
// Start address: 0x1381d0
void zEntHangable_SetupFX()
{
}

