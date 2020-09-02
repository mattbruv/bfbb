typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct xMemPool;
typedef struct xBase;
typedef struct xDynAsset;
typedef struct xQuat;
typedef struct xVec3;
typedef struct unit_meter_widget;
typedef struct xModelInstance;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpTriangle;
typedef struct xAnimState;
typedef struct RxNodeDefinition;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct _anon0;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct asset;
typedef struct RxPipelineNodeParam;
typedef enum _enum;
typedef struct xLinkAsset;
typedef struct RxHeap;
typedef struct RwResEntry;
typedef struct xModelPool;
typedef struct xAnimFile;
typedef struct RwRGBA;
typedef struct RpGeometry;
typedef struct xAnimTable;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct rxHeapBlockHeader;
typedef struct RpClump;
typedef struct RxPipelineRequiresCluster;
typedef struct motive_node;
typedef struct xSurface;
typedef struct RpMaterial;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct rxReq;
typedef struct RpMeshHeader;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xModelBucket;
typedef struct RpMorphTarget;
typedef struct RpLight;
typedef enum RxNodeDefEditable;
typedef struct render_context;
typedef enum RxClusterValid;
typedef struct xLightKit;
typedef struct meter_asset;
typedef struct widget;
typedef struct xBaseAsset;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct basic_rect;
typedef struct xAnimMultiFileEntry;
typedef struct RxClusterDefinition;
typedef struct xAnimActiveEffect;
typedef struct xAnimSingle;
typedef struct RwSphere;
typedef struct _class_0;
typedef struct _anon1;
typedef struct RwTexDictionary;
typedef struct xLightKitLight;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct RpInterpolator;
typedef struct meter_widget;
typedef struct xAnimMultiFileBase;
typedef struct motive;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct model_info;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RpMaterialList;
typedef struct RxNodeMethods;
typedef struct unit_meter_asset;
typedef struct RxCluster;
typedef struct sound_queue;
typedef struct RxPacket;
typedef struct _anon2;
typedef struct _class_2;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef RpClump*(*type_0)(RpClump*, void*);
typedef unsigned int(*type_1)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_2)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_5)(RxPipelineNode*);
typedef int(*type_7)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpAtomic*(*type_9)(RpAtomic*);
typedef int(*type_10)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_11)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_13)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef void(*type_18)(xAnimState*, xAnimSingle*, void*);
typedef unsigned char(*type_23)(widget&, motive&, float);
typedef void(*type_26)(xMemPool*, void*);
typedef void(*type_30)(RwResEntry*);

typedef char type_6[16];
typedef unsigned short type_8[3];
typedef RwTexCoords* type_16[8];
typedef unsigned int type_19[5];
typedef unsigned int type_20[4];
typedef float type_21[2];
typedef float type_22[16];
typedef unsigned char type_24[2];
typedef xAnimMultiFileEntry type_25[1];
typedef char type_27[32];
typedef char type_28[32];
typedef float type_29[4];
typedef xModelInstance* type_31[2];
typedef type_31 type_32[6];
typedef char type_33[16];
typedef RxCluster type_34[1];
typedef model_info type_35[2];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
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
	type_4 BeforeAnimMatrices;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct unit_meter_widget : meter_widget
{
	unit_meter_asset res;
	type_32 model;
	float anim_time;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RpTriangle
{
	type_8 vertIndex;
	short matIndex;
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
	type_17 BeforeEnter;
	type_18 StateCallback;
	type_4 BeforeAnimMatrices;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_9 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_1 Callback;
};

struct _anon0
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_29 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_30 destroyNotify;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_24 NumAnims;
	void** RawData;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_13 Conditional;
	type_13 Callback;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_20 pad;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_0 callback;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct xSurface
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_25 Files;
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

struct rxReq
{
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct meter_asset : asset
{
	float start_value;
	float min_value;
	float max_value;
	float increment_time;
	float decrement_time;
	_class_1 sound;
};

struct widget
{
	_class_2 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_21 BilinearLerp;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct _class_0
{
	xVec3* verts;
};

struct _anon1
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_22 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct _class_1
{
	unsigned int start_increment;
	unsigned int increment;
	unsigned int start_decrement;
	unsigned int decrement;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct meter_widget : widget
{
	meter_asset& res;
	float value;
	float min_value;
	float max_value;
	float end_value;
	float value_vel;
	float value_accel;
	float ping_delay;
	float pitch;
	sound_queue pings;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_23 fp_update;
	void* context;
	unsigned char inverse;
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

struct model_info
{
	unsigned int id;
	xVec3 loc;
	xVec3 size;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RxNodeMethods
{
	type_12 nodeBody;
	type_14 nodeInit;
	type_15 nodeTerm;
	type_2 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct unit_meter_asset : meter_asset
{
	type_35 model;
	xVec3 offset;
	unsigned int fill_forward;
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

struct sound_queue
{
	type_19 _playing;
	int head;
	int tail;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_34 clusters;
};

struct _anon2
{
};

struct _class_2
{
	unsigned char visible;
	unsigned char enabled;
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

basic_rect screen_bounds;
basic_rect default_adjust;
type_33 buffer;
type_6 buffer;
float tweak_anim_time_delta;
_anon2 __vt__Q24xhud17unit_meter_widget;
_anon0 __vt__Q24xhud6widget;
_anon1 __vt__Q24xhud12meter_widget;

void render(unit_meter_widget* this);
void update(unit_meter_widget* this, float dt);
void setup(unit_meter_widget* this);
unsigned char is(unit_meter_widget* this, unsigned int id);
unsigned int type();
void destroy(unit_meter_widget* this);
void* __ct(unit_meter_widget* this, unit_meter_asset& a);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17unit_meter_widgetFv
// Start address: 0x29a660
void render(unit_meter_widget* this)
{
	render_context unitrc;
	int units;
	int i;
	int which;
}

// update__Q24xhud17unit_meter_widgetFf
// Start address: 0x29a860
void update(unit_meter_widget* this, float dt)
{
	int units;
	int i;
	int which;
	xModelInstance* m;
	float duration;
	float time;
}

// setup__Q24xhud17unit_meter_widgetFv
// Start address: 0x29aa40
void setup(unit_meter_widget* this)
{
}

// is__Q24xhud17unit_meter_widgetCFUi
// Start address: 0x29aa50
unsigned char is(unit_meter_widget* this, unsigned int id)
{
	unsigned int myid;
	char @3861;
}

// type__Q24xhud17unit_meter_widgetCFv
// Start address: 0x29aac0
unsigned int type()
{
}

// destroy__Q24xhud17unit_meter_widgetFv
// Start address: 0x29ab00
void destroy(unit_meter_widget* this)
{
}

// __ct__Q24xhud17unit_meter_widgetFRCQ24xhud16unit_meter_asset
// Start address: 0x29ab10
void* __ct(unit_meter_widget* this, unit_meter_asset& a)
{
	int i;
	int j;
	unsigned char registered;
}

// load__Q24xhud17unit_meter_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x29ac00
void load(xBase& data, xDynAsset& asset)
{
}

