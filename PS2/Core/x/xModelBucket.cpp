typedef struct RwCamera;
typedef struct RxPipeline;
typedef struct xAnimFile;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct xGridBound;
typedef struct xFFX;
typedef struct RwRaster;
typedef struct xShadowSimpleCache;
typedef struct xModelInstance;
typedef struct RpSector;
typedef struct xAnimTransition;
typedef struct RwTexCoords;
typedef struct xAnimEffect;
typedef struct xAnimSingle;
typedef struct _tagxPad;
typedef struct xEntShadow;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMeshHeader;
typedef struct RpAtomic;
typedef struct RwBBox;
typedef struct xEnt;
typedef struct RwResEntry;
typedef struct xVec3;
typedef struct RpMaterial;
typedef struct anim_coll_data;
typedef struct RwSurfaceProperties;
typedef struct RxPipelineRequiresCluster;
typedef struct RpWorldSector;
typedef struct xMat4x3;
typedef struct RpMorphTarget;
typedef struct xAnimActiveEffect;
typedef struct _tagxRumble;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct xMat3x3;
typedef struct xBase;
typedef struct xAnimPlay;
typedef struct xModelBucket;
typedef struct xModelAlphaBucket;
typedef struct RpLight;
typedef struct xBound;
typedef struct xGroup;
typedef struct RwMatrixTag;
typedef struct xUpdateCullEnt;
typedef struct RpWorld;
typedef struct xScene;
typedef struct xGroupAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef union RwStreamUnion;
typedef enum RxClusterValidityReq;
typedef struct xMemPool;
typedef enum RwStreamType;
typedef struct RwLLLink;
typedef struct xLightKitLight;
typedef struct xModelPool;
typedef struct RxHeap;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xGlobals;
typedef struct RwFrame;
typedef struct tri_data;
typedef struct rxHeapFreeBlock;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct xQuat;
typedef struct RpVertexNormal;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RwStream;
typedef enum rxEmbeddedPacketState;
typedef struct xLinkAsset;
typedef struct analog_data;
typedef struct xCollis;
typedef struct xQCData;
typedef enum RxClusterForcePresent;
typedef struct RwSphere;
typedef struct RpInterpolator;
typedef enum RwStreamAccessType;
typedef struct RxClusterDefinition;
typedef enum RwCameraProjection;
typedef struct _class_0;
typedef struct RpPolygon;
typedef struct RpMaterialList;
typedef struct xSurface;
typedef struct xUpdateCullMgr;
typedef struct xBaseAsset;
typedef struct xEntAsset;
typedef struct xAnimTransitionList;
typedef struct RwMemory;
typedef struct RwObject;
typedef struct RxOutputSpec;
typedef struct RwStreamMemory;
typedef struct xLightKit;
typedef struct RwTexDictionary;
typedef struct RpClump;
typedef struct RxClusterRef;
typedef struct RpGeometry;
typedef struct RxIoSpec;
typedef struct xVec2;
typedef struct xEntFrame;
typedef struct RwV3d;
typedef struct RwPlane;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef union RwStreamFile;
typedef struct RwTexture;
typedef struct RxNodeDefinition;
typedef struct xShadowSimplePoly;
typedef struct xVec4;
typedef struct RxCluster;
typedef struct xBBox;
typedef enum _tagPadState;
typedef struct RxPipelineNodeParam;
typedef struct RwLinkList;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct RwFrustumPlane;
typedef struct _class_1;
typedef struct RwRGBAReal;
typedef enum RwFogType;
typedef struct RwV2d;
typedef struct xEntCollis;
typedef struct xSphere;
typedef struct xRot;
typedef struct xAnimMultiFileEntry;
typedef struct xCylinder;
typedef struct _tagPadAnalog;
typedef struct RwObjectHasFrame;
typedef struct _tagiPad;
typedef struct xBox;
typedef enum RpWorldRenderOrder;
typedef struct xCamera;
typedef struct iFogParams;
typedef struct xAnimMultiFileBase;
typedef struct RwStreamCustom;

typedef int(*type_2)(void*);
typedef unsigned int(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_4)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_5)(void*, void*, unsigned int);
typedef unsigned int(*type_6)(void*, void*);
typedef void(*type_7)(xEnt*, xVec3*);
typedef int(*type_8)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_9)(void*, void*, unsigned int);
typedef int(*type_11)(RxNodeDefinition*);
typedef int(*type_12)(void*, unsigned int);
typedef void(*type_13)(void*);
typedef RpWorldSector*(*type_16)(RpWorldSector*);
typedef void(*type_19)(RxNodeDefinition*);
typedef xBase*(*type_21)(unsigned int);
typedef int(*type_24)(RxPipelineNode*);
typedef void(*type_25)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_26)(RxPipelineNode*);
typedef void(*type_28)(xEnt*, xScene*, float, xEntCollis*);
typedef char*(*type_30)(xBase*);
typedef int(*type_31)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_32)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef char*(*type_33)(unsigned int);
typedef void(*type_34)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_36)(xMemPool*, void*);
typedef void(*type_37)(xAnimPlay*, xAnimState*);
typedef int(*type_38)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_40)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_43)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpClump*(*type_49)(RpClump*, void*);
typedef RwCamera*(*type_51)(RwCamera*);
typedef RwCamera*(*type_53)(RwCamera*);
typedef void(*type_54)(RwResEntry*);
typedef void(*type_57)(xEnt*, xScene*, float);
typedef RpAtomic*(*type_59)(RpAtomic*);
typedef void(*type_60)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);
typedef int(*type_67)(void*, void*);

typedef float type_0[2];
typedef RwTexCoords* type_1[8];
typedef unsigned char type_10[22];
typedef unsigned char type_14[22];
typedef unsigned char type_15[3];
typedef float type_17[4];
typedef xVec4 type_18[12];
typedef unsigned char type_20[2];
typedef xAnimMultiFileEntry type_22[1];
typedef RwFrustumPlane type_23[6];
typedef xCollis type_27[18];
typedef RwV3d type_29[8];
typedef int type_35[2];
typedef float type_39[16];
typedef float type_41[22];
typedef float type_42[22];
typedef float type_44[2];
typedef unsigned int type_45[4];
typedef analog_data type_46[2];
typedef unsigned short type_47[3];
typedef unsigned int type_48[4096];
typedef RwTexCoords* type_50[8];
typedef xVec3 type_52[3];
typedef char type_55[32];
typedef char type_56[32];
typedef unsigned short type_58[3];
typedef RxCluster type_61[1];
typedef char type_63[128];
typedef type_63 type_64[6];
typedef char type_65[32];
typedef xVec3 type_68[4];

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_51 beginUpdate;
	type_53 endUpdate;
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
	type_23 frustumPlanes;
	RwBBox frustumBoundBox;
	type_29 frustumCorners;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_20 NumAnims;
	void** RawData;
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

struct xFFX
{
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
	type_68 corner;
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

struct RpSector
{
	int type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_40 Callback;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_0 BilinearLerp;
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
	type_10 value;
	type_14 last_value;
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
	type_41 up_tmr;
	type_42 down_tmr;
	type_46 analog;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_44 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_45 pad;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_59 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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
	type_57 update;
	type_57 endUpdate;
	type_7 bupdate;
	type_60 move;
	type_62 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_34 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_54 destroyNotify;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct anim_coll_data
{
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_50 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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
	type_37 BeforeEnter;
	type_25 StateCallback;
	type_43 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_22 Files;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_38 eventFunc;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xModelAlphaBucket
{
	RpAtomic* Data;
	xModelInstance* MInst;
	float AlphaFade;
	float SortValue;
	unsigned int Layer;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_15 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_6 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_16 renderCallBack;
	RxPipeline* pipeline;
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
	type_21 resolvID;
	type_30 base2Name;
	type_33 id2Name;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_36 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_39 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_64 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_65 sceneStart;
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

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xEnv
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

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int position;
	RwStreamUnion Type;
	int rwOwned;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_17 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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
		tri_data tri;
	};
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_47 vertIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xSurface
{
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
	type_13 activateCB;
	type_13 deactivateCB;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwMemory
{
	unsigned char* start;
	unsigned int length;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwStreamMemory
{
	unsigned int position;
	unsigned int nSize;
	unsigned char* memBlock;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_49 callback;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_1 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xVec2
{
	float x;
	float y;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct RxNodeMethods
{
	type_8 nodeBody;
	type_11 nodeInit;
	type_19 nodeTerm;
	type_24 pipelineNodeInit;
	type_26 pipelineNodeTerm;
	type_31 pipelineNodeConfig;
	type_4 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_55 name;
	type_56 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct xShadowSimplePoly
{
	type_52 vert;
	xVec3 norm;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpTriangle
{
	type_58 vertIndex;
	short matIndex;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_61 clusters;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct _class_1
{
	xVec3* verts;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwV2d
{
	float x;
	float y;
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
	type_27 colls;
	type_28 post;
	type_32 depenq;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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
	type_66 sync;
};

struct _tagiPad
{
	int port;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_18 frustplane;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RwStreamCustom
{
	type_2 sfnclose;
	type_5 sfnread;
	type_9 sfnwrite;
	type_12 sfnskip;
	void* data;
};

RpWorld* sBucketDummyWorld;
RwCamera* sBucketDummyCamera;
int sBucketCurr;
int sBucketCount;
xModelBucket* sBucketList;
int sBucketClipCullCurr;
int sBucketClipCullCount;
xModelBucket** sBucketClipCullList;
int sAlphaCurr;
int sAlphaStart;
int sAlphaCount;
xModelAlphaBucket* sAlphaList;
RpMaterial* s_pMaterial;
xGlobals* xglobals;
int iModelHack_DisablePrelight;
long skyTest_1;
type_67 CmpAlphaBucket;
int xModelBucketEnabled;
<unknown type (0xa510)>* _rwDMAPktPtr;
long skyFrame_1;
xLightKit* gLastLightKit;
type_48 ourGlobals;
unsigned int gActiveHeap;

void xModelBucket_PreAllocModelPipe(RpAtomic* m);
void xModelBucket_Deinit();
void xModelBucket_RenderAlphaEnd();
void xModelBucket_RenderAlphaLayer(int maxLayer);
void xModelBucket_RenderAlphaBegin();
unsigned char PS2_MaskFrameBuffer_AlphaCompare(unsigned int mask, unsigned char alphaCompare);
void xModelBucket_RenderOpaque();
void xModelBucket_Add(xModelInstance* minst);
void xModelBucket_Begin();
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data);
void xModelBucket_Init();
void xModelBucket_InsertBucket(RpAtomic* data, unsigned int pipeFlags, unsigned int subObjects);
void FullAtomicDupe(RpAtomic* atomic, int count, RpAtomic** output);
void xModelBucket_PreCountAlloc(int maxAlphaModels);
void xModelBucket_PreCountBucket(RpAtomic* data, unsigned int pipeFlags, unsigned int subObjects);
void xModelBucket_PreCountReset();
int CmpAlphaBucket(void* _a, void* _b);

// xModelBucket_PreAllocModelPipe__FP8RpAtomic
// Start address: 0x310a10
void xModelBucket_PreAllocModelPipe(RpAtomic* m)
{
}

// xModelBucket_Deinit__Fv
// Start address: 0x310a70
void xModelBucket_Deinit()
{
	int i;
	RwFrame* tframe;
}

// xModelBucket_RenderAlphaEnd__Fv
// Start address: 0x310b50
void xModelBucket_RenderAlphaEnd()
{
}

// xModelBucket_RenderAlphaLayer__Fi
// Start address: 0x310b60
void xModelBucket_RenderAlphaLayer(int maxLayer)
{
	unsigned int pipeMask;
	unsigned int curPipeFlags;
	unsigned int lastPipeFlags;
	RwFogType oldfogtype;
	xModelInstance* minst;
	RpAtomic* oldmodel;
	int oldHack;
	float oldAlpha;
	float fade;
	unsigned char skyOldFade;
	unsigned int xorPipeFlags;
	unsigned char oldcmp;
}

// xModelBucket_RenderAlphaBegin__Fv
// Start address: 0x311040
void xModelBucket_RenderAlphaBegin()
{
}

// PS2_MaskFrameBuffer_AlphaCompare__FUiUc
// Start address: 0x311080
unsigned char PS2_MaskFrameBuffer_AlphaCompare(unsigned int mask, unsigned char alphaCompare)
{
	unsigned char retval;
	long tmpframe;
}

// xModelBucket_RenderOpaque__Fv
// Start address: 0x311150
void xModelBucket_RenderOpaque()
{
	int i;
	xModelBucket* bucket;
	RpAtomic* data;
	xModelInstance* minst;
	int oldHack;
	RpAtomic* oldmodel;
	RwFogType oldfogtype;
}

// xModelBucket_Add__FP14xModelInstance
// Start address: 0x311310
void xModelBucket_Add(xModelInstance* minst)
{
	RpAtomic* model;
	xMat4x3* cammat;
	float camdist2;
	xModelBucket* bucket;
	float camdot;
	float alphaFade;
}

// xModelBucket_Begin__Fv
// Start address: 0x3115e0
void xModelBucket_Begin()
{
	int i;
}

// xModelBucket_GetBuckets__FP8RpAtomic
// Start address: 0x311630
xModelBucket** xModelBucket_GetBuckets(RpAtomic* data)
{
	int i;
}

// xModelBucket_Init__Fv
// Start address: 0x311680
void xModelBucket_Init()
{
}

// xModelBucket_InsertBucket__FP8RpAtomicUiUi
// Start address: 0x3116d0
void xModelBucket_InsertBucket(RpAtomic* data, unsigned int pipeFlags, unsigned int subObjects)
{
	int numbuckets;
	type_35 pipeSetting;
	int i;
	unsigned int subObjTemp;
	RpAtomic* dataTemp;
	RpAtomic* extraData;
}

// FullAtomicDupe__FP8RpAtomiciPP8RpAtomic
// Start address: 0x311a70
void FullAtomicDupe(RpAtomic* atomic, int count, RpAtomic** output)
{
	int i;
	RwStream* stream;
	RwMemory rwmemA;
	RpAtomic* tempAtom;
	RwMemory rwmemB;
	RwFrame* temp_frame;
}

// xModelBucket_PreCountAlloc__Fi
// Start address: 0x311d30
void xModelBucket_PreCountAlloc(int maxAlphaModels)
{
	RwBBox bbox;
}

// xModelBucket_PreCountBucket__FP8RpAtomicUiUi
// Start address: 0x311e00
void xModelBucket_PreCountBucket(RpAtomic* data, unsigned int pipeFlags, unsigned int subObjects)
{
	int numbuckets;
	int modelcount;
}

// xModelBucket_PreCountReset__Fv
// Start address: 0x311f00
void xModelBucket_PreCountReset()
{
}

// CmpAlphaBucket__FPCvPCv
// Start address: 0x311f30
int CmpAlphaBucket(void* _a, void* _b)
{
	xModelAlphaBucket* a;
	xModelAlphaBucket* b;
}

