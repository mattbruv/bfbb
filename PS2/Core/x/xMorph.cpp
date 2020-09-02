typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RpGeometry;
typedef struct RxPipelineNode;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RpMeshHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct xMorphTargetFile;
typedef struct RpTriangle;
typedef struct RpAtomic;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct xMorphSeqFile;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct RpClump;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef enum rxEmbeddedPacketState;
typedef struct RwTexture;
typedef enum RxClusterForcePresent;
typedef struct RxClusterDefinition;
typedef struct RpMorphTarget;
typedef struct xMorphFrame;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;

typedef unsigned int(*type_3)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef int(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef void*(*type_8)(unsigned int, char*);
typedef int(*type_9)(RxPipelineNode*);
typedef void(*type_10)(RxPipelineNode*);
typedef int(*type_12)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_13)(RpAtomic*);
typedef void*(*type_17)(unsigned int, char*);
typedef void(*type_20)(RwResEntry*);
typedef RwObjectHasFrame*(*type_22)(RwObjectHasFrame*);

typedef short* type_0[4];
typedef short type_1[4];
typedef short type_2[4];
typedef unsigned short type_11[3];
typedef RwTexCoords* type_14[8];
typedef unsigned int type_15[4];
typedef short type_16[4];
typedef char type_18[32];
typedef char type_19[32];
typedef RxCluster type_21[1];

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
	type_15 pad;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xMorphTargetFile
{
	unsigned int Magic;
	unsigned short NumTargets;
	unsigned short NumVerts;
	unsigned int Flags;
	float Scale;
	xVec3 Center;
	float Radius;
};

struct RpTriangle
{
	type_11 vertIndex;
	short matIndex;
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
	type_13 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xMorphSeqFile
{
	unsigned int Magic;
	unsigned int Flags;
	unsigned int TimeCount;
	unsigned int ModelCount;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_20 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_5 callback;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_18 name;
	type_19 mask;
	unsigned int filterAddressing;
	int refCount;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMorphFrame
{
	RpAtomic* Model;
	float RecipTime;
	float Scale;
	unsigned short Flags;
	unsigned short NumVerts;
	type_0 Targets;
	type_1 WeightStart;
	type_2 WeightEnd;
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
	type_4 nodeBody;
	type_6 nodeInit;
	type_7 nodeTerm;
	type_9 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_3 configMsgHandler;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_21 clusters;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_22 sync;
};

struct RwLinkList
{
	RwLLLink link;
};


float xMorphSeqDuration(xMorphSeqFile* seq);
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float time);
xMorphSeqFile* xMorphSeqSetup(void* data, type_8 FindAssetCB);

// xMorphSeqDuration__FP13xMorphSeqFile
// Start address: 0x1f2400
float xMorphSeqDuration(xMorphSeqFile* seq)
{
}

// xMorphRender__FP13xMorphSeqFileP11RwMatrixTagf
// Start address: 0x1f2420
void xMorphRender(xMorphSeqFile* seq, RwMatrixTag* mat, float time)
{
	float lerp;
	unsigned int tidx;
	type_16 weight;
	short* wptr;
	float* times;
	xMorphFrame* frame;
}

// xMorphSeqSetup__FPvPFUiPc_Pv
// Start address: 0x1f2620
xMorphSeqFile* xMorphSeqSetup(void* data, type_8 FindAssetCB)
{
	int i;
	int j;
	xMorphTargetFile* mphtgt;
	xMorphSeqFile* header;
	xMorphFrame* framelist;
	unsigned int* assetlist;
	char* namelist;
	void* assetPtr;
	unsigned int skipsize;
}

