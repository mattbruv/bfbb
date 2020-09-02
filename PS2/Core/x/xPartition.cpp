typedef struct xBase;
typedef struct RxPipelineNodeParam;
typedef struct xQCData;
typedef struct RpPolygon;
typedef struct xBBox;
typedef struct RxHeap;
typedef struct _tagPartLink;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpMaterialList;
typedef struct RxPipelineNode;
typedef struct xJSPNodeInfo;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpMaterial;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct _tagPartSpace;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineRequiresCluster;
typedef struct RpClump;
typedef struct RpWorldSector;
typedef struct RxPipeline;
typedef struct xVec3;
typedef struct xJSPHeader;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RpVertexNormal;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct _tagPartition;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xLinkAsset;
typedef struct rxHeapFreeBlock;
typedef struct xVolume;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct iEnv;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xLightKit;
typedef struct RwTexDictionary;
typedef enum RpWorldRenderOrder;
typedef struct RxOutputSpec;
typedef struct xBound;
typedef struct RwTexture;
typedef struct xVolumeAsset;
typedef struct xMat3x3;
typedef struct RpSector;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RpLight;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RpWorld;
typedef struct xClumpCollBSPVertInfo;
typedef struct xLightKitLight;
typedef struct RxNodeDefinition;
typedef struct xClumpCollBSPTriangle;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef union _class;
typedef struct RwLinkList;

typedef int(*type_0)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_2)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_4)(RxNodeDefinition*);
typedef void(*type_5)(RxNodeDefinition*);
typedef int(*type_6)(RxPipelineNode*);
typedef void(*type_7)(RxPipelineNode*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef int(*type_14)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef void(*type_19)(RwResEntry*);
typedef RwObjectHasFrame*(*type_21)(RwObjectHasFrame*);

typedef unsigned short type_1[3];
typedef char type_9[4];
typedef RwTexCoords* type_10[8];
typedef unsigned char type_11[3];
typedef float type_12[4];
typedef unsigned int type_13[4];
typedef char type_16[32];
typedef float type_17[16];
typedef char type_18[32];
typedef RxCluster type_20[1];
typedef RpLight* type_22[2];
typedef RwFrame* type_23[2];

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_14 eventFunc;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_1 vertIndex;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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
	type_13 pad;
};

struct _tagPartSpace
{
	int total;
	_tagPartLink head;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_10 texCoords;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xJSPHeader
{
	type_9 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct rxReq
{
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct _tagPartition
{
	xVec3 min;
	xVec3 max;
	xVec3 space_dim;
	int total_x;
	int total_y;
	int total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_19 destroyNotify;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_12 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_22 light;
	type_23 light_frame;
	int memlvl;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_11 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_16 name;
	type_18 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xVolumeAsset
{
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

struct RpSector
{
	int type;
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

struct RxNodeMethods
{
	type_3 nodeBody;
	type_4 nodeInit;
	type_5 nodeTerm;
	type_6 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_2 configMsgHandler;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_15 renderCallBack;
	RxPipeline* pipeline;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_17 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct xClumpCollBSPTriangle
{
	_class v;
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
	type_20 clusters;
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
	type_21 sync;
};

union _class
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwLinkList
{
	RwLLLink link;
};

unsigned int gActiveHeap;

void xPartitionDump();
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, unsigned int data);
int xPartitionUpdate(_tagPartition* part, void* data, int old_idx, xVec3* current_pos);
int xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos);
void xPartitionWorld(_tagPartition* part, xEnv* env, int x_spaces, int y_spaces, int z_spaces);
void xPartitionVolume(_tagPartition* part, xVolume* volume, int x_spaces, int y_spaces, int z_spaces);
void xPartitionReset();

// xPartitionDump__FP13_tagPartitionPc
// Start address: 0x1f6880
void xPartitionDump()
{
}

// xPartitionSpaceMove__FP13_tagPartSpaceP13_tagPartSpaceUi
// Start address: 0x1f6890
void xPartitionSpaceMove(_tagPartSpace* src, _tagPartSpace* dest, unsigned int data)
{
	_tagPartLink* dest_lnk;
	_tagPartLink* src_lnk;
	_tagPartLink* src_pre;
}

// xPartitionUpdate__FP13_tagPartitionPviP5xVec3
// Start address: 0x1f6910
int xPartitionUpdate(_tagPartition* part, void* data, int old_idx, xVec3* current_pos)
{
	int cur_idx;
	_tagPartSpace* src;
}

// xPartitionInsert__FP13_tagPartitionPvP5xVec3
// Start address: 0x1f6a70
int xPartitionInsert(_tagPartition* part, void* insert_data, xVec3* insert_pos)
{
}

// xPartitionWorld__FP13_tagPartitionP4xEnviii
// Start address: 0x1f6c40
void xPartitionWorld(_tagPartition* part, xEnv* env, int x_spaces, int y_spaces, int z_spaces)
{
	xBox* bb;
	float dx;
	float dy;
	float dz;
	int z;
	int y;
	int x;
}

// xPartitionVolume__FP13_tagPartitionP7xVolumeiii
// Start address: 0x1f6e20
void xPartitionVolume(_tagPartition* part, xVolume* volume, int x_spaces, int y_spaces, int z_spaces)
{
	xBound* xb;
	xBox* bb;
	float dx;
	float dy;
	float dz;
	int z;
	int y;
	int x;
}

// xPartitionReset__Fv
// Start address: 0x1f7000
void xPartitionReset()
{
}

