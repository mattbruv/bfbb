typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct iLight;
typedef struct _xFColor;
typedef struct RxPipelineNode;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct xVec3;
typedef enum RpWorldRenderOrder;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct RwTexture;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwFrame;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpWorldSector;
typedef struct RpLight;
typedef enum RxNodeDefEditable;
typedef struct RpWorld;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct RwLLLink;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RpPolygon;
typedef struct RxIoSpec;
typedef struct RpMaterialList;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RpMeshHeader;
typedef struct RwLinkList;

typedef unsigned int(*type_0)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_1)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_2)(RxNodeDefinition*);
typedef void(*type_3)(RxNodeDefinition*);
typedef int(*type_4)(RxPipelineNode*);
typedef void(*type_5)(RxPipelineNode*);
typedef int(*type_6)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_7)(RpWorldSector*);
typedef void(*type_12)(RwResEntry*);
typedef RwObjectHasFrame*(*type_15)(RwObjectHasFrame*);

typedef unsigned int type_8[4];
typedef unsigned short type_9[3];
typedef char type_10[32];
typedef char type_11[32];
typedef RwTexCoords* type_13[8];
typedef RxCluster type_14[1];

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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct iLight
{
	unsigned int type;
	RpLight* hw;
	xSphere sph;
	float radius_sq;
	_xFColor color;
	xVec3 dir;
	float coneangle;
};

struct _xFColor
{
	float r;
	float g;
	float b;
	float a;
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
	type_8 pad;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_10 name;
	type_11 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct RpSector
{
	int type;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_13 texCoords;
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
	type_7 renderCallBack;
	RxPipeline* pipeline;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_9 vertIndex;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_12 destroyNotify;
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
	type_14 clusters;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_15 sync;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwLinkList
{
	RwLLLink link;
};

RpWorld* gLightWorld;
xVec3 g_O3;

void iLightEnv(iLight* light, int env);
void iLightDestroy(iLight* light);
void iLightSetPos(iLight* light, xVec3* pos);
void iLightSetColor(iLight* light, _xFColor* col);
void iLightModify(iLight* light, unsigned int flags);
iLight* iLightCreate(iLight* light, unsigned int type);
void iLightInit(RpWorld* world);

// iLightEnv__FP6iLighti
// Start address: 0x1aaf40
void iLightEnv(iLight* light, int env)
{
	unsigned int flags;
}

// iLightDestroy__FP6iLight
// Start address: 0x1aafa0
void iLightDestroy(iLight* light)
{
	RwFrame* frame;
}

// iLightSetPos__FP6iLightP5xVec3
// Start address: 0x1aaff0
void iLightSetPos(iLight* light, xVec3* pos)
{
	RwFrame* f;
	RwMatrixTag* m;
}

// iLightSetColor__FP6iLightP8_xFColor
// Start address: 0x1ab040
void iLightSetColor(iLight* light, _xFColor* col)
{
}

// iLightModify__FP6iLightUi
// Start address: 0x1ab050
void iLightModify(iLight* light, unsigned int flags)
{
	RwFrame* frame;
	RwMatrixTag temp;
}

// iLightCreate__FP6iLightUi
// Start address: 0x1ab180
iLight* iLightCreate(iLight* light, unsigned int type)
{
	RwFrame* frame;
}

// iLightInit__FP7RpWorld
// Start address: 0x1ab2b0
void iLightInit(RpWorld* world)
{
}

