typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct RpAtomic;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpInterpolator;
typedef struct ptank_context;
typedef struct RxNodeDefinition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxHeap;
typedef struct group_data;
typedef struct RwRGBA;
typedef struct RpMaterialList;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterial;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RwFrame;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpTriangle;
typedef struct ptank_pool;
typedef struct _class;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RwResEntry;
typedef struct RxClusterDefinition;
typedef struct RwSphere;
typedef struct RwTexture;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum ptank_group_type;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct render_state;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RwLinkList;

typedef int(*type_0)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef int(*type_3)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_4)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_5)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef int(*type_9)(void*, void*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef void(*type_17)(RwResEntry*);

typedef group_data type_10[2];
typedef unsigned short type_11[3];
typedef unsigned int type_13[4];
typedef RwTexCoords* type_14[8];
typedef char type_15[32];
typedef char type_16[32];
typedef RxCluster type_18[1];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_12 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct ptank_context
{
	ptank_context* next;
	RpAtomic* ptank;
	unsigned int flags;
	unsigned int src_blend;
	unsigned int dst_blend;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct group_data
{
	unsigned int max_size;
	unsigned int create_flags;
	ptank_context* ptanks;
	ptank_context** buckets;
	unsigned int size;
	unsigned int used;
	unsigned int buckets_used;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_13 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_8 callback;
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
	type_14 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct RpTriangle
{
	type_11 vertIndex;
	short matIndex;
};

struct ptank_pool
{
	render_state rs;
	unsigned int used;
	RpAtomic* ptank;
	_class hide;
};

struct _class
{
	unsigned char* data;
	int stride;
	unsigned int size;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_17 destroyNotify;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_15 name;
	type_16 mask;
	unsigned int filterAddressing;
	int refCount;
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

enum ptank_group_type
{
	PGT_COLOR_MAT_UV2,
	PGT_POS_COLOR_SIZE_UV2,
	MAX_PGT
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RxNodeMethods
{
	type_5 nodeBody;
	type_6 nodeInit;
	type_7 nodeTerm;
	type_0 pipelineNodeInit;
	type_2 pipelineNodeTerm;
	type_3 pipelineNodeConfig;
	type_4 configMsgHandler;
};

struct render_state
{
	RwTexture* texture;
	unsigned int src_blend;
	unsigned int dst_blend;
	unsigned int flags;
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
	type_18 clusters;
};

struct RwLinkList
{
	RwLLLink link;
};

unsigned char inited;
type_10 groups;
int _rpPTankAtomicDataOffset;
type_9 compare_ptanks;
unsigned int gActiveHeap;

void flush(ptank_pool* this);
void grab_block(ptank_pool* this, ptank_group_type type);
void xPTankPoolRender();
void xPTankPoolSceneExit();
void xPTankPoolSceneEnter();
int compare_ptanks(void* e1, void* e2);
RpAtomic* create_ptank(unsigned int flags);
void init_groups();
void sort_buckets(group_data& group);

// flush__10ptank_poolFv
// Start address: 0x3afc10
void flush(ptank_pool* this)
{
	int oldused;
	int expand;
	int total;
	unsigned char* it;
	unsigned char* end;
}

// grab_block__10ptank_poolF16ptank_group_type
// Start address: 0x3afd20
void grab_block(ptank_pool* this, ptank_group_type type)
{
	group_data& group;
	ptank_context** end;
	ptank_context** it;
	ptank_context** it;
}

// xPTankPoolRender__Fv
// Start address: 0x3b0100
void xPTankPoolRender()
{
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
}

// xPTankPoolSceneExit__Fv
// Start address: 0x3b0270
void xPTankPoolSceneExit()
{
	group_data* g;
	group_data* endg;
	ptank_context* p;
	ptank_context* endp;
}

// xPTankPoolSceneEnter__Fv
// Start address: 0x3b0350
void xPTankPoolSceneEnter()
{
	group_data* it;
	group_data* end;
}

// compare_ptanks__24@unnamed@xPtankPool_cpp@FPCvPCv
// Start address: 0x3b04e0
int compare_ptanks(void* e1, void* e2)
{
	ptank_context* p1;
	ptank_context* p2;
	RwTexture* tex1;
	RwTexture* tex2;
}

// create_ptank__24@unnamed@xPtankPool_cpp@FUi
// Start address: 0x3b05a0
RpAtomic* create_ptank(unsigned int flags)
{
	RpAtomic* ptank;
	RwFrame* frame;
}

// init_groups__24@unnamed@xPtankPool_cpp@Fv
// Start address: 0x3b0680
void init_groups()
{
	unsigned int total;
	group_data* it;
	group_data* end;
	unsigned char* mem;
	group_data* it;
	group_data* end;
}

// sort_buckets__24@unnamed@xPtankPool_cpp@FRQ224@unnamed@xPtankPool_cpp@10group_data
// Start address: 0x3b0780
void sort_buckets(group_data& group)
{
	ptank_context* it;
	ptank_context* endp;
	RwTexture* texture;
	ptank_context** bucket;
	ptank_context** end;
	ptank_context* front;
}

