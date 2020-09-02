typedef struct RxPS2AllPipeData;
typedef struct RwMeshCache;
typedef struct RxHeap;
typedef struct RpClump;
typedef struct RpMorphTarget;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RwResEntry;
typedef struct rwPS2AllResEntryHeader;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpGeometry;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef enum RpMeshHeaderFlags;
typedef struct RpMesh;
typedef struct xVec3;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct rwPS2AllFieldRec;
typedef enum RxClusterValidityReq;
typedef struct RwTexture;
typedef struct rxNodePS2AllMatPvtData;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef enum rxEmbeddedPacketState;
typedef enum RxInstanceFlags;
typedef enum RwCameraProjection;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct RxClusterDefinition;
typedef struct rwPS2AllResEntryFormat;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct iFXgooParams;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpInterpolator;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct RpMaterialList;
typedef enum RwCullMode;
typedef struct rxNodePS2AllPvtData;
typedef struct RwV2d;

typedef RpClump*(*type_3)(RpClump*, void*);
typedef void(*type_6)(RwResEntry*);
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_6);
typedef unsigned int(*type_9)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_13)(RxNodeDefinition*);
typedef int(*type_14)(RxPS2AllPipeData*, void**, unsigned int);
typedef void(*type_15)(RxNodeDefinition*);
typedef int(*type_16)(RxPipelineNode*);
typedef void(*type_17)(RxPipelineNode*);
typedef int(*type_18)(RxPS2AllPipeData*);
typedef int(*type_19)(RxPipelineNode*, RxPipeline*);
typedef int(*type_21)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef int(*type_23)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int(*type_25)(RxPS2AllPipeData*);
typedef int(*type_26)(RxPS2AllPipeData*);
typedef RwResEntry*(*type_31)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_6);
typedef int(*type_35)(RxPS2AllPipeData*, void**, unsigned int);
typedef RwCamera*(*type_41)(RwCamera*);
typedef RwCamera*(*type_42)(RwCamera*);
typedef RwObjectHasFrame*(*type_48)(RwObjectHasFrame*);
typedef int(*type_49)(RxPS2AllPipeData*);

typedef rwPS2AllClusterQuickInfo type_0[12];
typedef rwPS2AllFieldRec type_1[12];
typedef char type_2[16];
typedef float type_4[2];
typedef float type_5[8];
typedef RwFrustumPlane type_8[6];
typedef char type_11[16];
typedef RwV3d type_12[8];
typedef unsigned short type_20[3];
typedef float type_24[2];
typedef float type_27[2];
typedef float type_28[2];
typedef unsigned char type_29[1];
typedef float type_30[2];
typedef RwTexCoords* type_32[8];
typedef rwPS2AllClusterInstanceInfo type_33[12];
typedef unsigned int type_34[12];
typedef unsigned int type_36[4];
typedef unsigned char type_37[2];
typedef float type_38[8];
typedef unsigned int type_39[4096];
typedef rwPS2AllFieldRec type_40[12];
typedef char type_43[32];
typedef char type_44[32];
typedef void* type_45[32];
typedef RwResEntry* type_46[1];
typedef RxCluster type_47[1];
typedef float type_50[2];
typedef float type_51[2];
typedef float type_52[2];

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	unsigned int objIdentifier;
	float spExtra;
	int numMorphTargets;
	unsigned int fastMorphing;
	unsigned char transType;
	unsigned char primType;
	unsigned char matModulate;
	unsigned char vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	unsigned int meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
};

struct RwMeshCache
{
	unsigned int lengthOfMeshesArray;
	type_46 meshes;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_3 callback;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_6 destroyNotify;
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
	type_0 clquickinfo;
	type_1 fieldRec;
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
	type_32 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_36 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct rwPS2AllClusterInstanceInfo
{
	unsigned int attrib;
	unsigned int stride;
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

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMesh
{
	unsigned short* indices;
	unsigned int numIndices;
	RpMaterial* material;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RpTriangle
{
	type_20 vertIndex;
	short matIndex;
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
	type_29 pad;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_43 name;
	type_44 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct rxNodePS2AllMatPvtData
{
	type_25 meshInstanceTestCB;
	type_7 resEntryAllocCB;
	type_14 instanceCB;
	type_18 bridgeCB;
	type_21 postMeshCB;
	int vifOffset;
	void** vu1CodeArray;
	unsigned int codeArrayLength;
	type_33 clinfo;
	type_34 cliIndex;
	RpMeshHeaderFlags pipeType;
	unsigned char totallyOpaque;
	unsigned char numStripes;
	unsigned char sizeOnVU;
	unsigned char pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	unsigned int magicValue;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct rwPS2AllResEntryFormat
{
	unsigned char batchRound;
	unsigned char stripReverse;
	type_37 pad;
	unsigned int maxInputSize;
	int batchSize;
	int batchesPerTag;
	int morphBatchSize;
	int morphBatchesPerTag;
	type_40 fieldRec;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	unsigned int stride;
};

struct iFXgooParams
{
	xVec3 center;
	unsigned int state;
	float warb_time;
	float alpha;
	float min;
	float max;
	float* warbc;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_41 beginUpdate;
	type_42 endUpdate;
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
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_12 frustumCorners;
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
	type_10 nodeBody;
	type_13 nodeInit;
	type_15 nodeTerm;
	type_16 pipelineNodeInit;
	type_17 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_9 configMsgHandler;
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

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_47 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_48 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct rxNodePS2AllPvtData
{
};

struct RwV2d
{
	float x;
	float y;
};

type_2 buffer;
type_11 buffer;
type_5 sinRangePoint5;
type_38 xFXWarbleParam;
iFXgooParams gooParams;
unsigned long gs_alpha_2;
RwTexture* g_txtrGoo;
type_23 RpAtomicPS2AllObjectSetupCallBack;
type_49 iFXgooBridgeCallBack;
type_35 RpMeshPS2AllInstanceCallBack;
type_31 RpMeshPS2AllResEntryAllocCallBack;
type_26 RpMeshPS2AllMeshInstanceTestCallBack;
long FXgooPRS;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long skyTest_1;
long skyClamp_1;
long skyTex1_1;
unsigned int skyUserSwitch1;
unsigned int skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
int skyTLClipperMode;
int skyTSClipperMode;
long skyPrim_State;
<unknown type (0xa510)> gifTag128;
int skyAlphaTex;
int skyVertexAlpha;
type_30 xFXanimUV2PScale;
type_28 xFXanimUV2PTrans;
type_27 xFXanimUV2PRotMat1;
type_24 xFXanimUV2PRotMat0;
type_4 xFXanimUVScale;
type_52 xFXanimUVTrans;
type_51 xFXanimUVRotMat1;
type_50 xFXanimUVRotMat0;
RwTexture* xFXanimUV2PTexture;
RwRaster* skyTextureRaster;
type_39 ourGlobals;

RxPipeline* iFXgooCreatePipe();
RxPipeline* iFXgooCreateMaterialPipe();
int iFXgooBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
void iFXGooSceneExit();
void iFXGooSceneSetup();
void iFXgooSetParams(xVec3* center, unsigned int state, float warb_time, float alpha, float min, float max, float* warbc);

// iFXgooCreatePipe__Fv
// Start address: 0x3299e0
RxPipeline* iFXgooCreatePipe()
{
	RxPipeline* newPipe;
	RxPipeline* matPipe;
	RxPipelineNode* plNode;
	RxPipeline* lPipe;
	RxNodeDefinition* ps2All;
}

// iFXgooCreateMaterialPipe__Fv
// Start address: 0x329ab0
RxPipeline* iFXgooCreateMaterialPipe()
{
	RxPipeline* newPipe;
	RxPipeline* lockedPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	type_45 VUCodeArray;
}

// iFXgooBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x329c90
int iFXgooBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	unsigned int numInitialQW;
	unsigned int numUserInitialQW;
	unsigned int numExtraQW;
	unsigned int prim;
	unsigned int primSwitch;
	unsigned int fogSwitch;
	RwRaster* customRaster;
	unsigned long tmp;
	unsigned long tmp1;
	<unknown type (0xa510)> ltmp;
	RwTexture* tex;
	int rc;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	unsigned int cFormat;
	int textureUploadSuccess;
	unsigned int _itQW;
	unsigned int _xaQW;
	unsigned long tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown type (0xa510)> ___ltmp;
	iFXgooParams* goo;
	float A;
	float B;
	float saved_min;
	float saved_max;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	unsigned int __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	float __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	unsigned int __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	unsigned long __tmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	unsigned long tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	unsigned long __tmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	unsigned int stat;
}

// iFXGooSceneExit__Fv
// Start address: 0x32a650
void iFXGooSceneExit()
{
}

// iFXGooSceneSetup__Fv
// Start address: 0x32a660
void iFXGooSceneSetup()
{
}

// iFXgooSetParams__FP5xVec3UiffffPf
// Start address: 0x32a690
void iFXgooSetParams(xVec3* center, unsigned int state, float warb_time, float alpha, float min, float max, float* warbc)
{
}

