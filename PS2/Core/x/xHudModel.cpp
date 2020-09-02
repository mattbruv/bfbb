typedef struct RwObjectHasFrame;
typedef struct xLinkAsset;
typedef struct xAnimTable;
typedef struct RxPipelineNode;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RwTexCoords;
typedef struct xModelBucket;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct RwResEntry;
typedef struct rxHeapFreeBlock;
typedef struct xBase;
typedef struct xModelInstance;
typedef struct RxPipelineNodeTopSortData;
typedef struct xDynAsset;
typedef struct RpMorphTarget;
typedef struct model_asset;
typedef struct RxNodeDefinition;
typedef struct xLightKit;
typedef struct model_widget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpLight;
typedef struct RxPipelineCluster;
typedef struct motive_node;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xQuat;
typedef struct xAnimTransition;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct RwMatrixTag;
typedef struct xAnimState;
typedef struct widget;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RpAtomic;
typedef struct _class_0;
typedef struct xAnimFile;
typedef struct xLightKitLight;
typedef struct xVec3;
typedef struct render_context;
typedef struct RwSurfaceProperties;
typedef struct xAnimSingle;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xBaseAsset;
typedef enum RxClusterValidityReq;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xAnimEffect;
typedef struct asset;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct basic_rect;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct xModelPool;
typedef enum rxEmbeddedPacketState;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RxClusterDefinition;
typedef struct motive;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct xMemPool;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RpTriangle;
typedef struct RxNodeMethods;
typedef struct _class_1;
typedef struct RxCluster;
typedef struct _anon0;
typedef struct RxPacket;
typedef struct xSurface;
typedef struct RwRGBAReal;
typedef struct _anon1;
typedef struct RwLinkList;
typedef enum _enum;

typedef int(*type_1)(RxPipelineNode*);
typedef int(*type_2)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_7)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_8)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_9)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_11)(RxNodeDefinition*);
typedef void(*type_12)(RxNodeDefinition*);
typedef unsigned int(*type_14)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_16)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_21)(RpClump*, void*);
typedef unsigned char(*type_22)(widget&, motive&, float);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef void(*type_26)(xMemPool*, void*);
typedef void(*type_30)(RwResEntry*);

typedef RwTexCoords* type_0[8];
typedef float type_13[16];
typedef float type_15[2];
typedef unsigned char type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef unsigned int type_20[4];
typedef float type_23[4];
typedef unsigned short type_24[3];
typedef char type_27[32];
typedef char type_28[32];
typedef char type_29[16];
typedef char type_31[16];
typedef RxCluster type_32[1];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_4 sync;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_23 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_19 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_27 name;
	type_28 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RwTexCoords
{
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_30 destroyNotify;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct model_asset : asset
{
	unsigned int model;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct model_widget : widget
{
	unsigned int mid;
	xModelInstance* model;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xQuat
{
	xVec3 v;
	float s;
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
	type_20 pad;
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
	type_3 BeforeEnter;
	type_5 StateCallback;
	type_7 BeforeAnimMatrices;
};

struct widget
{
	_class_1 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_25 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_0
{
	xVec3* verts;
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
	type_18 NumAnims;
	void** RawData;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_13 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float r;
	float g;
	float b;
	float a;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_15 BilinearLerp;
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

struct rxReq
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_14 Callback;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
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
	type_7 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_21 callback;
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
	type_0 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_22 fp_update;
	void* context;
	unsigned char inverse;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_26 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RpTriangle
{
	type_24 vertIndex;
	short matIndex;
};

struct RxNodeMethods
{
	type_10 nodeBody;
	type_11 nodeInit;
	type_12 nodeTerm;
	type_1 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct _class_1
{
	unsigned char visible;
	unsigned char enabled;
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

struct _anon0
{
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

struct xSurface
{
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct _anon1
{
};

struct RwLinkList
{
	RwLLLink link;
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_29 buffer;
type_31 buffer;
_anon0 __vt__Q24xhud12model_widget;
_anon1 __vt__Q24xhud6widget;
type_17 xAnimDefaultBeforeEnter;

void render(model_widget* this);
void update(model_widget* this, float dt);
unsigned char is(model_widget* this, unsigned int id);
unsigned int type();
void destroy(model_widget* this);
void load(xBase& data, xDynAsset& asset);
xAnimTable* XHUD_AnimTable_Idle();

// render__Q24xhud12model_widgetFv
// Start address: 0x29a3d0
void render(model_widget* this)
{
}

// update__Q24xhud12model_widgetFf
// Start address: 0x29a410
void update(model_widget* this, float dt)
{
}

// is__Q24xhud12model_widgetCFUi
// Start address: 0x29a4b0
unsigned char is(model_widget* this, unsigned int id)
{
	unsigned int myid;
	char @3734;
}

// type__Q24xhud12model_widgetCFv
// Start address: 0x29a520
unsigned int type()
{
}

// destroy__Q24xhud12model_widgetFv
// Start address: 0x29a560
void destroy(model_widget* this)
{
}

// load__Q24xhud12model_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x29a570
void load(xBase& data, xDynAsset& asset)
{
}

// XHUD_AnimTable_Idle__Fv
// Start address: 0x29a5e0
xAnimTable* XHUD_AnimTable_Idle()
{
	xAnimTable* table;
}

