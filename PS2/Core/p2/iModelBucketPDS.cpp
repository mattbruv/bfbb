typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct RxPipeline;
typedef struct rxHeapFreeBlock;
typedef struct RpAtomic;
typedef struct RpTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterial;
typedef struct RxNodeDefinition;
typedef enum RpPDSPipeID;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct RwResEntry;
typedef struct RxHeap;
typedef enum RpMatFXMaterialFlags;
typedef struct RwRGBA;
typedef struct RpGeometry;
typedef struct RpMaterialList;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct RpClump;
typedef struct RxPipelineRequiresCluster;
typedef struct FastPipeTrans;
typedef struct RwTexture;
typedef struct RwSurfaceProperties;
typedef struct rxReq;
typedef struct RpMeshHeader;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RxClusterDefinition;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RpInterpolator;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct PipeTranslation;
typedef struct RwLinkList;

typedef int(*type_0)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef RxPipeline*(*type_2)(RpAtomic*, RpMaterial*);
typedef void(*type_3)(RxPipelineNode*);
typedef RxPipeline*(*type_6)(RpAtomic*, RpMaterial*);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef int(*type_8)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_9)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_11)(RxNodeDefinition*);
typedef void(*type_12)(RxNodeDefinition*);
typedef void(*type_18)(RwResEntry*);
typedef RpClump*(*type_19)(RpClump*, void*);

typedef FastPipeTrans type_4[2];
typedef unsigned short type_5[3];
typedef RwTexCoords* type_13[8];
typedef unsigned int type_14[4];
typedef PipeTranslation type_15[6];
typedef char type_16[32];
typedef char type_17[32];
typedef RxCluster type_20[1];

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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_7 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RpTriangle
{
	type_5 vertIndex;
	short matIndex;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
};

enum RpPDSPipeID
{
	rpNAPDSPIPEID,
	rwPDS_G3_Generic_MatPipeID,
	rwPDS_G3_Generic_AtmPipeID,
	rwPDS_G3_Generic_SctPipeID,
	rwPDS_G3_Im3D_TriPipeID,
	rwPDS_G3_Im3D_SegPipeID,
	rwPDS_G3_Im3D_TriObjPipeID,
	rwPDS_G3_Im3D_SegObjPipeID,
	rwPDS_G3_Generic_GrpMatPipeID = 0x1001,
	rwPDS_G3_Generic_GrpAtmPipeID,
	rwPDS_G3_Generic_GrpSctPipeID,
	rwPDS_G3_Skin_MatPipeID = 0x10001,
	rwPDS_G3_Skin_AtmPipeID,
	rwPDS_G3_Emb_MatPipeID,
	rwPDS_G3_Gem_MatPipeID,
	rwPDS_G3_Bem_MatPipeID,
	rwPDS_G3_Dup_MatPipeID,
	rwPDS_G3_Toon_MatPipeID,
	rwPDS_G3_SkinEmb_MatPipeID,
	rwPDS_G3_SkinGem_MatPipeID,
	rwPDS_G3_SkinBem_MatPipeID,
	rwPDS_G3_SkinDup_MatPipeID,
	rwPDS_G3_SkinToon_MatPipeID,
	rwPDS_G2_BPatch_AtmPipeID,
	rwPDS_G2_BPatch_MatPipeID,
	rwPDS_G2_SkinBPatch_AtmPipeID,
	rwPDS_G2_SkinBPatch_MatPipeID,
	rwPDS_G2_EmbBPatch_MatPipeID,
	rwPDS_G2_GemBPatch_MatPipeID,
	rwPDS_G2_BemBPatch_MatPipeID,
	rwPDS_G2_DupBPatch_MatPipeID,
	rwPDS_G2_SkinEmbBPatch_MatPipeID,
	rwPDS_G2_SkinGemBPatch_MatPipeID,
	rwPDS_G2_SkinBemBPatch_MatPipeID,
	rwPDS_G2_SkinDupBPatch_MatPipeID,
	rwPDS_G3_2DStroke_MatPipeID,
	rwPDS_G3_2DStroke_ObjPipeID,
	rwPDS_G3_2DFont_MatPipeID,
	rwPDS_G3_2DFont_ObjPipeID,
	rwPDS_G3_2DFill_MatPipeID,
	rwPDS_G3_2DFill_ObjPipeID,
	rwPDS_G3_SkSpt_AtmPipeID,
	rwPDS_G3_SkSpt_MatPipeID,
	rwPDS_G3_SkSptEmb_MatPipeID,
	rwPDS_G3_SkSptGem_MatPipeID,
	rwPDS_G3_SkSptBem_MatPipeID,
	rwPDS_G3_SkSptDup_MatPipeID,
	rwPDS_G3_SkSptToon_MatPipeID,
	rwPDS_G3_Uva_MatPipeID,
	rwPDS_G3_DupUva_MatPipeID,
	rwPDS_G3_SkinUva_MatPipeID,
	rwPDS_G3_SkinDupUva_MatPipeID,
	rwPDS_G3_SkSptUva_MatPipeID,
	rwPDS_G3_SkSptDupUva_MatPipeID,
	rwPDS_G3_Skin_GrpMatPipeID = 0x11001,
	rwPDS_G3_Skin_GrpAtmPipeID,
	rwPDS_G2_DarkMaps_GrpMatPipeID,
	rwPDS_G2_DarkMaps_GrpAtmPipeID,
	rwPDS_G2_DarkMaps_GrpSctPipeID,
	rwPDS_G3_Toon_GrpMatPipeID,
	rwPDS_G3_Toon_GrpAtmPipeID,
	rwPDS_G3_Toon_GrpSctPipeID,
	rwPDS_G3_SkinToon_GrpMatPipeID,
	rwPDS_G3_SkinToon_GrpAtmPipeID,
	rwPDS_G3_MatfxUV1_GrpMatPipeID,
	rwPDS_G3_MatfxUV2_GrpMatPipeID,
	rwPDS_G3_MatfxUV1_GrpAtmPipeID,
	rwPDS_G3_MatfxUV2_GrpAtmPipeID,
	rwPDS_G3_MatfxUV1_GrpSctPipeID,
	rwPDS_G3_MatfxUV2_GrpSctPipeID,
	rwPDS_G3_SkinfxUV1_GrpMatPipeID,
	rwPDS_G3_SkinfxUV2_GrpMatPipeID,
	rwPDS_G3_SkinfxUV1_GrpAtmPipeID,
	rwPDS_G3_SkinfxUV2_GrpAtmPipeID,
	rwPDS_G2_BPatch_GrpAtmPipeID,
	rwPDS_G2_BPatch_GrpMatPipeID,
	rwPDS_G2_SkinBPatch_GrpAtmPipeID,
	rwPDS_G2_SkinBPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV1BPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV2BPatch_GrpMatPipeID,
	rwPDS_G2_MatfxUV1BPatch_GrpAtmPipeID,
	rwPDS_G2_MatfxUV2BPatch_GrpAtmPipeID,
	rwPDS_G2_SkinfxUV1BPatch_GrpMatPipeID,
	rwPDS_G2_SkinfxUV2BPatch_GrpMatPipeID,
	rwPDS_G2_SkinfxUV1BPatch_GrpAtmPipeID,
	rwPDS_G2_SkinfxUV2BPatch_GrpAtmPipeID,
	rwPDS_VCL_Uva_MatPipeID = 0x12000,
	rwPDS_VCL_DupUva_MatPipeID,
	rwPDS_VCL_SkinUva_MatPipeID,
	rwPDS_VCL_SkinDupUva_MatPipeID,
	rwPDS_G3x_Generic_AtmPipeID = 0x50001,
	rwPDS_G3x_APL_MatPipeID,
	rwPDS_G3x_ADL_MatPipeID,
	rwPDS_G3x_A4D_MatPipeID,
	rwPDS_G3x_APLDup_MatPipeID,
	rwPDS_G3x_ADLDup_MatPipeID,
	rwPDS_G3x_A4DDup_MatPipeID,
	rwPDS_G3x_APLGem_MatPipeID,
	rwPDS_G3x_ADLGem_MatPipeID,
	rwPDS_G3x_A4DGem_MatPipeID,
	rwPDS_G3x_Skin_AtmPipeID,
	rwPDS_G3x_APLSkin_MatPipeID,
	rwPDS_G3x_ADLSkin_MatPipeID,
	rwPDS_G3x_A4DSkin_MatPipeID,
	rwPDS_G3x_APLSkinDup_MatPipeID,
	rwPDS_G3x_ADLSkinDup_MatPipeID,
	rwPDS_G3x_A4DSkinDup_MatPipeID,
	rwPDS_G3x_APLSkinGem_MatPipeID,
	rwPDS_G3x_ADLSkinGem_MatPipeID,
	rwPDS_G3x_A4DSkinGem_MatPipeID,
	rwPDS_G3x_ADLClone_MatPipeID,
	rwPDS_G3x_ADLClone_AtmPipeID,
	rwPDS_G3x_OPLClone_MatPipeID,
	rwPDS_G3x_OPLClone_AtmPipeID,
	rwPDS_G3x_Team_MatPipeID,
	rwPDS_G3x_DupTeam_MatPipeID,
	rwPDS_G3x_GemTeam_MatPipeID,
	rwPDS_G3x_SkinTeam_MatPipeID,
	rwPDS_G3x_SkinDupTeam_MatPipeID,
	rwPDS_G3x_SkinGemTeam_MatPipeID,
	rwPDS_G3x_Team_AtmPipeID,
	rwPDS_G3x_SkinTeam_AtmPipeID,
	rwPDS_G3x_APLUva_MatPipeID,
	rwPDS_G3x_ADLUva_MatPipeID,
	rwPDS_G3x_A4DUva_MatPipeID,
	rwPDS_G3x_APLDupUva_MatPipeID,
	rwPDS_G3x_ADLDupUva_MatPipeID,
	rwPDS_G3x_A4DDupUva_MatPipeID,
	rwPDS_G3x_APLSkinUva_MatPipeID,
	rwPDS_G3x_ADLSkinUva_MatPipeID,
	rwPDS_G3x_A4DSkinUva_MatPipeID,
	rwPDS_G3x_APLSkDupUva_MatPipeID,
	rwPDS_G3x_ADLSkDupUva_MatPipeID,
	rwPDS_G3x_A4DSkDupUva_MatPipeID,
	rwPDS_G3xd_APL_MatPipeID,
	rwPDS_G3xd_ADL_MatPipeID,
	rwPDS_G3xd_A4D_MatPipeID,
	rwPDS_G3xd_APLDup_MatPipeID,
	rwPDS_G3xd_ADLDup_MatPipeID,
	rwPDS_G3xd_A4DDup_MatPipeID,
	rwPDS_G3xd_APLGem_MatPipeID,
	rwPDS_G3xd_ADLGem_MatPipeID,
	rwPDS_G3xd_A4DGem_MatPipeID,
	rwPDS_G3xd_APLUva_MatPipeID,
	rwPDS_G3xd_ADLUva_MatPipeID,
	rwPDS_G3xd_A4DUva_MatPipeID,
	rwPDS_G3xd_APLDupUva_MatPipeID,
	rwPDS_G3xd_ADLDupUva_MatPipeID,
	rwPDS_G3xd_A4DDupUva_MatPipeID,
	rwPDS_G3xd_APLSkin_MatPipeID,
	rwPDS_G3xd_ADLSkin_MatPipeID,
	rwPDS_G3xd_A4DSkin_MatPipeID,
	rwPDS_G3xd_APLSkinDup_MatPipeID,
	rwPDS_G3xd_ADLSkinDup_MatPipeID,
	rwPDS_G3xd_A4DSkinDup_MatPipeID,
	rwPDS_G3xd_APLSkinGem_MatPipeID,
	rwPDS_G3xd_ADLSkinGem_MatPipeID,
	rwPDS_G3xd_A4DSkinGem_MatPipeID,
	rwPDS_G3xd_APLSkinUva_MatPipeID,
	rwPDS_G3xd_ADLSkinUva_MatPipeID,
	rwPDS_G3xd_A4DSkinUva_MatPipeID,
	rwPDS_G3xd_APLSkDupUva_MatPipeID,
	rwPDS_G3xd_ADLSkDupUva_MatPipeID,
	rwPDS_G3xd_A4DSkDupUva_MatPipeID,
	rwPDS_VCL_Generic_AtmPipeID = 0x51000,
	rwPDS_VCL_ADLDot3_MatPipeID,
	rwPDS_VCL_APLDot3_MatPipeID,
	rwPDS_VCL_ADLSpec_MatPipeID,
	rwPDS_VCL_APLSpec_MatPipeID,
	rwPDS_VCL_Skin_AtmPipeID,
	rwPDS_VCL_ADLSkinDot3_MatPipeID,
	rwPDS_VCL_APLSkinDot3_MatPipeID,
	rwPDS_VCL_ADLSkinSpec_MatPipeID,
	rwPDS_VCL_APLSkinSpec_MatPipeID,
	rpPDSMAXPIPEID,
	rpPDSPIPEIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_18 destroyNotify;
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

enum RpMatFXMaterialFlags
{
	rpMATFXEFFECTNULL,
	rpMATFXEFFECTBUMPMAP,
	rpMATFXEFFECTENVMAP,
	rpMATFXEFFECTBUMPENVMAP,
	rpMATFXEFFECTDUAL,
	rpMATFXEFFECTUVTRANSFORM,
	rpMATFXEFFECTDUALUVTRANSFORM,
	rpMATFXEFFECTMAX,
	rpMATFXNUMEFFECTS = 0x6,
	rpMATFXFORCEENUMSIZEINT = 0x7fffffff
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
	type_13 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_14 pad;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_19 callback;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct FastPipeTrans
{
	RpPDSPipeID fast;
	RxPipeline* fastPipe;
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

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
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
	type_10 nodeBody;
	type_11 nodeInit;
	type_12 nodeTerm;
	type_0 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_9 configMsgHandler;
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

struct PipeTranslation
{
	RpPDSPipeID atm;
	RpPDSPipeID mat;
	type_2 atmpipeTranslateCB;
	type_6 matpipeTranslateCB;
	RxPipeline* atmPipe;
	RxPipeline* matPipe;
};

struct RwLinkList
{
	RwLLLink link;
};

type_15 sPipeTrans;
type_4 sFastPipeList;

unsigned char iModelCanUseFastPipes(RpAtomic* dataTemp);
void iModelUseFastPipes(RpAtomic* dataTemp);
void iModelInitFastPipes();
RxPipeline* GenericMatCB();
RxPipeline* GenericAtmCB();
RxPipeline* SkinMatCB();
RxPipeline* SkinAtmCB();

// iModelCanUseFastPipes__FP8RpAtomic
// Start address: 0x3ae020
unsigned char iModelCanUseFastPipes(RpAtomic* dataTemp)
{
	RxPipeline* curAtmPipe;
	int i;
	RpMaterialList* matList;
	int i;
}

// iModelUseFastPipes__FP8RpAtomic
// Start address: 0x3ae250
void iModelUseFastPipes(RpAtomic* dataTemp)
{
	RxPipeline* curAtmPipe;
	int i;
	RpMaterialList* matList;
	int i;
}

// iModelInitFastPipes__Fv
// Start address: 0x3ae470
void iModelInitFastPipes()
{
	int i;
	int i;
}

// GenericMatCB__FP8RpAtomicP10RpMaterial
// Start address: 0x3ae510
RxPipeline* GenericMatCB()
{
	RxPipeline* p;
}

// GenericAtmCB__FP8RpAtomicP10RpMaterial
// Start address: 0x3ae540
RxPipeline* GenericAtmCB()
{
	RxPipeline* p;
}

// SkinMatCB__FP8RpAtomicP10RpMaterial
// Start address: 0x3ae570
RxPipeline* SkinMatCB()
{
	RxPipeline* p;
}

// SkinAtmCB__FP8RpAtomicP10RpMaterial
// Start address: 0x3ae5a0
RxPipeline* SkinAtmCB()
{
	RxPipeline* p;
}

