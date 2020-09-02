typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct DirtyMorph;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RpAtomic;
typedef struct RpGeometry;
typedef struct RwMatrixTag;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterialList;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RwSurfaceProperties;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct RpUserDataArray;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpMeshHeader;
typedef struct rxHeapFreeBlock;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RpTriangle;
typedef struct RxClusterDefinition;
typedef struct RwResEntry;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpUserDataFormat;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct RpInterpolator;

typedef unsigned int(*type_0)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_1)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_2)(RxNodeDefinition*);
typedef void(*type_3)(RxNodeDefinition*);
typedef int(*type_4)(RxPipelineNode*);
typedef void(*type_5)(RxPipelineNode*);
typedef int(*type_6)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef RpAtomic*(*type_11)(RpAtomic*);
typedef void(*type_18)(RwResEntry*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);

typedef short type_7[4];
typedef short* type_9[4];
typedef unsigned short type_10[3];
typedef unsigned int type_12[4];
typedef short type_13[4];
typedef short* type_14[4];
typedef RwTexCoords* type_15[8];
typedef char type_16[32];
typedef char type_17[32];
typedef RxCluster type_19[1];

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

struct DirtyMorph
{
	unsigned int count;
	float scale;
	type_7 weight;
	type_9 v_array;
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
	type_12 pad;
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
	type_11 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_15 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_8 callback;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct RpUserDataArray
{
	char* name;
	RpUserDataFormat format;
	int numElements;
	void* data;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct RpTriangle
{
	type_10 vertIndex;
	short matIndex;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_18 destroyNotify;
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

enum RpUserDataFormat
{
	rpNAUSERDATAFORMAT,
	rpINTUSERDATA,
	rpREALUSERDATA,
	rpSTRINGUSERDATA,
	rpUSERDATAFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_16 name;
	type_17 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RxNodeMethods
{
	type_1 nodeBody;
	type_2 nodeInit;
	type_3 nodeTerm;
	type_4 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_0 configMsgHandler;
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
	type_19 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_20 sync;
};

struct RwLinkList
{
	RwLLLink link;
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

RpGeometry* s_geom;
RpMorphTarget* s_tgt;
float* s_alloc;
float* s_vTemp;
float* s_nTemp;
int s_numV;

void FastS16weight4(float* dest, short** v_array, short* weight, int count, float scale);
void FastS16weight2(float* dest, short** v_array, short* weight, int count, float scale);
void FastS16unpack(float* dest, short* v, int count, float scale);
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, short** v_array, short* weight, unsigned int normals, float scale);
void iMorphOptimize(RpAtomic* model, int normals);
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, short** v_array, short* weight, unsigned int normals, float scale, int dorender);

// FastS16weight4__FPfPPsPsif
// Start address: 0x1af420
void FastS16weight4(float* dest, short** v_array, short* weight, int count, float scale)
{
}

// FastS16weight2__FPfPPsPsif
// Start address: 0x1af570
void FastS16weight2(float* dest, short** v_array, short* weight, int count, float scale)
{
}

// FastS16unpack__FPfPsif
// Start address: 0x1af680
void FastS16unpack(float* dest, short* v, int count, float scale)
{
}

// iMorphRender__FP8RpAtomicP11RwMatrixTagPPsPsUif
// Start address: 0x1af770
void iMorphRender(RpAtomic* model, RwMatrixTag* mat, short** v_array, short* weight, unsigned int normals, float scale)
{
}

// iMorphOptimize__FP8RpAtomici
// Start address: 0x1af7b0
void iMorphOptimize(RpAtomic* model, int normals)
{
	RpGeometry* geom;
	int usridx;
	RpUserDataArray* usr;
}

// MorphCommon__FP8RpAtomicP11RwMatrixTagPPsPsUifi
// Start address: 0x1af840
void MorphCommon(RpAtomic* model, RwMatrixTag* mat, short** v_array, short* weight, unsigned int normals, float scale, int dorender)
{
	unsigned int i;
	unsigned int a;
	type_13 wa;
	type_14 va;
	int wsum;
	RwV3d* vold;
	RwV3d* nold;
	int lockMode;
	RpUserDataArray* usr;
	DirtyMorph* dm;
}

