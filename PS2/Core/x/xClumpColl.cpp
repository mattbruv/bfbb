typedef struct RwLine;
typedef struct RwObjectHasFrame;
typedef struct RpIntersection;
typedef struct xClumpCollV3dGradient;
typedef struct RpClump;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPTree;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct xClumpCollBSPTriangle;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpMaterial;
typedef struct RxPipelineNodeParam;
typedef union IntersectionCallBack;
typedef struct RxHeap;
typedef struct RpTriangle;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct RwTexture;
typedef struct RpCollisionTriangle;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct RpMeshHeader;
typedef struct TempAtomicList;
typedef struct RwResEntry;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct RwStream;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMorphTarget;
typedef struct PolyLineTestParam;
typedef struct TestSphere;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwSurfaceProperties;
typedef struct RwSphere;
typedef struct CallBackParam;
typedef struct xClumpCollBSPBranchNode;
typedef struct PolyTestParam;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef union RwStreamUnion;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum RwStreamType;
typedef struct RpWorldSector;
typedef struct RpVertexNormal;
typedef union _class;
typedef struct RpAtomic;
typedef enum rxEmbeddedPacketState;
typedef struct RwMeshCache;
typedef enum RxClusterForcePresent;
typedef struct RpInterpolator;
typedef struct RpMesh;
typedef struct rwPS2AllResEntryHeader;
typedef struct RxClusterDefinition;
typedef enum RwStreamAccessType;
typedef struct RpPolygon;
typedef struct RpMaterialList;
typedef union RwSplitBits;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct RpGeometry;
typedef enum RpIntersectType;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef union RwStreamFile;
typedef struct RxCluster;
typedef union RpIntersectData;
typedef struct RxPacket;
typedef struct rwPS2AllFieldRec;
typedef struct RwLinkList;
typedef struct nodeInfo;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef unsigned int(*type_1)(void*, void*, unsigned int);
typedef int(*type_2)(xClumpCollBSPTriangle*, void*);
typedef void(*type_3)(RxPipelineNode*);
typedef RpAtomic*(*type_4)(RpAtomic*);
typedef int(*type_6)(xClumpCollBSPTriangle*, void*);
typedef int(*type_7)(void*, void*, unsigned int);
typedef int(*type_8)(RxPipelineNode*, RxPipeline*);
typedef int(*type_9)(void*, unsigned int);
typedef int(*type_10)(xClumpCollBSPTriangle*, void*);
typedef RpWorldSector*(*type_11)(RpIntersection*, RpWorldSector*, void*);
typedef RpCollisionTriangle*(*type_13)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef unsigned int(*type_14)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpAtomic*(*type_15)(RpIntersection*, RpWorldSector*, RpAtomic*, float, void*);
typedef int(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_18)(void*);
typedef int(*type_19)(RxNodeDefinition*);
typedef void(*type_21)(RxNodeDefinition*);
typedef int(*type_22)(RxPipelineNode*);
typedef int(*type_25)(xClumpCollBSPTriangle*, void*);
typedef RpClump*(*type_37)(RpClump*, void*);
typedef void(*type_41)(RwResEntry*);
typedef RpAtomic*(*type_44)(RpAtomic*, void*);

typedef unsigned char type_5[1];
typedef RwTexCoords* type_12[8];
typedef RwV3d* type_17[3];
typedef nodeInfo type_20[33];
typedef RwLine type_23[33];
typedef unsigned int type_24[3];
typedef nodeInfo type_26[33];
typedef RwLine type_27[33];
typedef RwResEntry* type_28[1];
typedef nodeInfo type_29[33];
typedef unsigned int type_30[4];
typedef unsigned short type_31[3];
typedef RwV3d type_32[3];
typedef nodeInfo type_33[33];
typedef unsigned int type_34[4096];
typedef rwPS2AllClusterQuickInfo type_35[12];
typedef rwPS2AllFieldRec type_36[12];
typedef RwTexCoords* type_38[8];
typedef char type_39[32];
typedef char type_40[32];
typedef unsigned short type_42[3];
typedef RxCluster type_43[1];

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

struct xClumpCollV3dGradient
{
	float dydx;
	float dzdx;
	float dxdy;
	float dzdy;
	float dxdz;
	float dydz;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_37 callback;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

union IntersectionCallBack
{
	type_11 sectorCB;
	type_13 worldCB;
	type_15 atomicCB;
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

struct RpTriangle
{
	type_42 vertIndex;
	short matIndex;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_39 name;
	type_40 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int index;
	type_17 vertices;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_30 pad;
};

struct RwStreamCustom
{
	type_18 sfnclose;
	type_1 sfnread;
	type_7 sfnwrite;
	type_9 sfnskip;
	void* data;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct TempAtomicList
{
	RpAtomic* atomic;
	RpGeometry* geom;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_41 destroyNotify;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	unsigned int stride;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int position;
	RwStreamUnion Type;
	int rwOwned;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct PolyLineTestParam
{
	RwV3d start;
	RpWorldSector* worldSector;
	RwV3d delta;
	xClumpCollV3dGradient grad;
	RwLine line;
	CallBackParam* cbParam;
};

struct TestSphere
{
	RwSphere* sphere;
	float recipRadius;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct CallBackParam
{
	RpIntersection* intersection;
	IntersectionCallBack u;
	void* data;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct PolyTestParam
{
	RwBBox bbox;
	RpWorldSector* worldSector;
	void* leafTestData;
	CallBackParam* cbParam;
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

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
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

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_38 texCoords;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

union _class
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_4 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwMeshCache
{
	unsigned int lengthOfMeshesArray;
	type_28 meshes;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMesh
{
	unsigned short* indices;
	unsigned int numIndices;
	RpMaterial* material;
};

struct rwPS2AllResEntryHeader
{
	int refCnt;
	int clrCnt;
	<unknown type (0xa510)>* data;
	unsigned int numVerts;
	unsigned int objIdentifier;
	unsigned int meshIdentifier;
	int batchSize;
	int numBatches;
	int batchesPerTag;
	int morphStart;
	int morphFinish;
	int morphNum;
	type_35 clquickinfo;
	type_36 fieldRec;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	unsigned short matIndex;
	type_31 vertIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

union RwSplitBits
{
	float nReal;
	int nInt;
	unsigned int nUInt;
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

struct RwStreamMemory
{
	unsigned int position;
	unsigned int nSize;
	unsigned char* memBlock;
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
	type_12 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
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
	type_16 nodeBody;
	type_19 nodeInit;
	type_21 nodeTerm;
	type_22 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_14 configMsgHandler;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
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

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_43 clusters;
};

struct rwPS2AllFieldRec
{
	int numVerts;
	int morphNumVerts;
	int dataoffset;
	int morphDataoffset;
	short skip;
	short morphSkip;
	short reverse;
	unsigned char vuoffset;
	type_5 pad;
};

struct RwLinkList
{
	RwLLLink link;
};

struct nodeInfo
{
	unsigned int type;
	unsigned int index;
};

unsigned char xClumpColl_FilterFlags;
type_25 LeafNodeBoxPolyIntersect;
type_10 LeafNodeSpherePolyIntersect;
type_6 LeafNodeLinePolyIntersect;
type_44 AddAtomicCB;
int rwPip2GeometryOffset;
int rwPip2AtomicOffset;
type_34 ourGlobals;

int FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float* distance, RwV3d* vc);
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, type_13 callBack, void* data);
int LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
int LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data);
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float radius, xClumpCollV3dGradient* grad, type_2 callBack, void* data);
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, type_2 callBack, void* data);
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, type_2 callBack, void* data);
void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump);
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data);
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data);

// FastIntersectSphereTriangle__FP8RwSphereP5RwV3dP5RwV3dP5RwV3dP5RwV3dPfP5RwV3d
// Start address: 0x301c40
int FastIntersectSphereTriangle(RwSphere* sphere, RwV3d* v0, RwV3d* v1, RwV3d* v2, RwV3d* normal, float* distance, RwV3d* vc)
{
	float nDotN;
	float distToPlane;
	float sphereRadiusSquared;
	float length2;
	float factor;
}

// xClumpColl_ForAllIntersections__FP17xClumpCollBSPTreeP14RpIntersectionPFP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv_P19RpCollisionTrianglePv
// Start address: 0x3020f0
xClumpCollBSPTree* xClumpColl_ForAllIntersections(xClumpCollBSPTree* tree, RpIntersection* intersection, type_13 callBack, void* data)
{
	CallBackParam cbParam;
	PolyLineTestParam isData;
	PolyTestParam isData;
	TestSphere testSphere;
	PolyTestParam isData;
}

// LeafNodeBoxPolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302430
int LeafNodeBoxPolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v1;
	RwV3d* v2;
	RpCollisionTriangle collisionTri;
	float lengthSq;
}

// LeafNodeSpherePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302660
int LeafNodeSpherePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyTestParam* isData;
	CallBackParam* cbParam;
	TestSphere* testSphere;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	float distance;
	RpCollisionTriangle collisionTri;
	type_32 vc;
}

// LeafNodeLinePolyIntersect__FP21xClumpCollBSPTrianglePv
// Start address: 0x302860
int LeafNodeLinePolyIntersect(xClumpCollBSPTriangle* triangles, void* data)
{
	PolyLineTestParam* isData;
	CallBackParam* cbParam;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	float distance;
	int result;
	RpCollisionTriangle collisionTri;
	RwV3d vTmp;
	RwV3d vTmp2;
	float recipLength;
	float lengthSq;
	float _result;
}

// xClumpColl_ForAllCapsuleLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLinefP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x302c00
xClumpCollBSPTree* xClumpColl_ForAllCapsuleLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, float radius, xClumpCollV3dGradient* grad, type_2 callBack, void* data)
{
	int nStack;
	type_20 nodeStack;
	type_23 lineStack;
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	float delta;
	float delta;
	float delta;
	float delta;
}

// xClumpColl_ForAllLineLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwLineP21xClumpCollV3dGradientPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x303610
xClumpCollBSPTree* xClumpColl_ForAllLineLeafNodeIntersections(xClumpCollBSPTree* tree, RwLine* line, xClumpCollV3dGradient* grad, type_2 callBack, void* data)
{
	int nStack;
	type_26 nodeStack;
	type_27 lineStack;
	RwLine currLine;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	xClumpCollBSPBranchNode* branch;
	float delta;
	float delta;
	float delta;
	float delta;
}

// xClumpColl_ForAllBoxLeafNodeIntersections__FP17xClumpCollBSPTreeP6RwBBoxPFP21xClumpCollBSPTrianglePv_iPv
// Start address: 0x304010
xClumpCollBSPTree* xClumpColl_ForAllBoxLeafNodeIntersections(xClumpCollBSPTree* tree, RwBBox* box, type_2 callBack, void* data)
{
	int nStack;
	type_33 nodeStack;
	xClumpCollBSPBranchNode* branch;
}

// xClumpColl_InstancePointers__FP17xClumpCollBSPTreeP7RpClump
// Start address: 0x304150
void xClumpColl_InstancePointers(xClumpCollBSPTree* tree, RpClump* clump)
{
	int i;
	int numAtom;
	TempAtomicList* atomicList;
	TempAtomicList* iterList;
	TempAtomicList* alist;
	int vertIndex;
	int numMeshes;
	int meshIndex;
	RpMesh* mesh;
}

// AddAtomicCB__FP8RpAtomicPv
// Start address: 0x3042c0
RpAtomic* AddAtomicCB(RpAtomic* atomic, void* data)
{
	TempAtomicList** tmpList;
}

// xClumpColl_StaticBufferInit__FPvUi
// Start address: 0x304400
xClumpCollBSPTree* xClumpColl_StaticBufferInit(void* data)
{
	unsigned int* header;
	unsigned int numBranchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTree* tree;
}

