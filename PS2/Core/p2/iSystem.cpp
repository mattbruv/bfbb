typedef struct RxPipelineNodeParam;
typedef enum RwPrimitiveType;
typedef struct RwSurfaceProperties;
typedef struct RxHeap;
typedef struct RxPS2AllPipeData;
typedef struct RwTexture;
typedef struct RwRGBA;
typedef struct rwPS2AllFieldRec;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxNodePS2AllMatPvtData;
typedef struct rxHeapBlockHeader;
typedef struct DBWATCHData;
typedef struct sceCdCLOCK;
typedef struct RpPDSSkyMatTemplate;
typedef struct RxPipelineRequiresCluster;
typedef struct RxPipeline;
typedef struct RpPDSSkyVU1CodeTemplate;
typedef enum RxInstanceFlags;
typedef struct RwMatrixTag;
typedef struct RpMaterial;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef enum RwVideoModeFlag;
typedef struct rwPS2AllResEntryFormat;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct RpPDSSkyObjTemplate;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef enum RpPDSPipeType;
typedef struct RxClusterDefinition;
typedef struct RwTexDictionary;
typedef struct RwVideoMode;
typedef struct RxOutputSpec;
typedef union RpPDSPipeDefinition;
typedef struct RxClusterRef;
typedef struct RwMeshCache;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMesh;
typedef struct RxIoSpec;
typedef struct RwResEntry;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RpPDSRegister;
typedef enum RpPDSPipeID;
typedef struct rxNodePS2AllPvtData;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RpPDSSkyMatCluster;
typedef struct RpMeshHeader;
typedef struct RxPacket;
typedef struct RwEngineOpenParams;
typedef struct RwLinkList;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RpPDSSkyMatPrimitive;
typedef enum RpMeshHeaderFlags;

typedef int(*type_0)(RxPipelineNode*, RxPipeline*);
typedef int(*type_1)(RxPS2AllPipeData*);
typedef unsigned int(*type_2)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_5)(RxPS2AllPipeData*);
typedef int(*type_6)(RxNodeDefinition*);
typedef RwResEntry*(*type_7)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_31);
typedef void(*type_9)(RxNodeDefinition*);
typedef int(*type_10)(RxPS2AllPipeData*, void**, unsigned int);
typedef int(*type_11)(RxPipelineNode*);
typedef int(*type_12)(RxPS2AllPipeData*);
typedef RwTexture*(*type_14)(char*, char*);
typedef void(*type_15)(RxPipelineNode*);
typedef int(*type_23)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int(*type_25)(RxPS2AllPipeData*);
typedef void(*type_31)(RwResEntry*);
typedef int(*type_34)(int);

typedef char type_3[512];
typedef RpPDSSkyMatCluster type_8[10];
typedef unsigned char type_13[1];
typedef char type_16[16];
typedef char type_17[256];
typedef char type_18[16];
typedef rwPS2AllClusterInstanceInfo type_19[12];
typedef unsigned int type_20[12];
typedef unsigned char type_21[2];
typedef char* type_22[3];
typedef rwPS2AllFieldRec type_24[12];
typedef unsigned int type_26[4];
typedef char* type_27[3];
typedef RwResEntry* type_28[1];
typedef char type_29[32];
typedef char type_30[32];
typedef char type_32[256];
typedef RxCluster type_33[1];

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum RwPrimitiveType
{
	rwPRIMTYPENAPRIMTYPE,
	rwPRIMTYPELINELIST,
	rwPRIMTYPEPOLYLINE,
	rwPRIMTYPETRILIST,
	rwPRIMTYPETRISTRIP,
	rwPRIMTYPETRIFAN,
	rwPRIMTYPEPOINTLIST,
	rwPRIMITIVETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_29 name;
	type_30 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
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
	type_13 pad;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct rxNodePS2AllMatPvtData
{
	type_5 meshInstanceTestCB;
	type_7 resEntryAllocCB;
	type_10 instanceCB;
	type_12 bridgeCB;
	type_1 postMeshCB;
	int vifOffset;
	void** vu1CodeArray;
	unsigned int codeArrayLength;
	type_19 clinfo;
	type_20 cliIndex;
	RpMeshHeaderFlags pipeType;
	unsigned char totallyOpaque;
	unsigned char numStripes;
	unsigned char sizeOnVU;
	unsigned char pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	unsigned int magicValue;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_26 pad;
};

struct DBWATCHData
{
	type_3 putWatchOnMe;
};

struct sceCdCLOCK
{
	unsigned char stat;
	unsigned char second;
	unsigned char minute;
	unsigned char hour;
	unsigned char pad;
	unsigned char day;
	unsigned char month;
	unsigned char year;
};

struct RpPDSSkyMatTemplate
{
	unsigned int pluginId;
	unsigned int pluginData;
	type_8 clusters;
	RpPDSSkyMatPrimitive primitive;
	RpPDSSkyVU1CodeTemplate* vu1code;
	type_5 meshInstanceTestCallBack;
	type_7 resEntryAllocCallBack;
	type_10 instanceCallBack;
	type_12 bridgeCallBack;
	type_1 postMeshCallBack;
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

struct RpPDSSkyVU1CodeTemplate
{
	void** array;
	unsigned int slots;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum RwVideoModeFlag
{
	rwVIDEOMODEEXCLUSIVE = 0x1,
	rwVIDEOMODEINTERLACE,
	rwVIDEOMODEFFINTERLACE = 0x4,
	rwVIDEOMODE_PS2_FSAASHRINKBLIT = 0x100,
	rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 0x200,
	rwVIDEOMODE_XBOX_WIDESCREEN = 0x100,
	rwVIDEOMODE_XBOX_PROGRESSIVE = 0x200,
	rwVIDEOMODE_XBOX_FIELD = 0x400,
	rwVIDEOMODE_XBOX_10X11PIXELASPECT = 0x800,
	rwVIDEOMODEFLAGFORCEENUMSIZEINT = 0x7fffffff
};

struct rwPS2AllResEntryFormat
{
	unsigned char batchRound;
	unsigned char stripReverse;
	type_21 pad;
	unsigned int maxInputSize;
	int batchSize;
	int batchesPerTag;
	int morphBatchSize;
	int morphBatchesPerTag;
	type_24 fieldRec;
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

struct RpPDSSkyObjTemplate
{
	unsigned int pluginId;
	unsigned int pluginData;
	type_23 objectSetupCallBack;
	type_25 objectFinalizeCallBack;
	RxPipeline* matGroup;
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

enum RpPDSPipeType
{
	rpNAPDSPIPETYPE,
	rpPDSMATPIPE,
	rpPDSOBJPIPE,
	rpPDSPIPETYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwVideoMode
{
	int width;
	int height;
	int depth;
	RwVideoModeFlag flags;
	int refRate;
	int format;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

union RpPDSPipeDefinition
{
	void* ptr;
	RpPDSSkyMatTemplate* mat;
	RpPDSSkyObjTemplate* obj;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct RwMeshCache
{
	unsigned int lengthOfMeshesArray;
	type_28 meshes;
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

struct RpMesh
{
	unsigned short* indices;
	unsigned int numIndices;
	RpMaterial* material;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_31 destroyNotify;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_9 nodeTerm;
	type_11 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RpPDSRegister
{
	RpPDSPipeDefinition def;
	RpPDSPipeID attachId;
	RpPDSPipeID id;
	RpPDSPipeType type;
	RxPipeline* pipe;
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

struct rxNodePS2AllPvtData
{
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

struct RpPDSSkyMatCluster
{
	RxClusterDefinition* definition;
	unsigned int type;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_33 clusters;
};

struct RwEngineOpenParams
{
	void* displayID;
};

struct RwLinkList
{
	RwLLLink link;
};

struct rwPS2AllClusterInstanceInfo
{
	unsigned int attrib;
	unsigned int stride;
};

struct RpPDSSkyMatPrimitive
{
	RwPrimitiveType type;
	int clusterStride;
	int vertexCount;
	int primCount;
	int vifOffset;
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

type_16 buffer;
type_18 buffer;
void* hackResourceArenaPointer;
int DVD;
int g_dumpEachAllocOp;
RwVideoMode sVideoMode;
int gFB_Flags;
DBWATCHData* g_watchthisblock;
unsigned int gVsyncCount;
unsigned int gTransitionSceneID;
type_34 vsyncCounterHandler;
type_14 TextureRead;
RpPDSSkyObjTemplate rwPDS_G3_SkinfxUV2_AtmPipe;
RpPDSSkyObjTemplate rwPDS_G3_SkinfxUV1_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_SkinfxUV2_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3_SkinfxUV1_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_Skin_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_Skin_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV2_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV1_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV2_AtmPipe;
RpPDSSkyObjTemplate rwPDS_G3_MatfxUV1_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_MatfxUV2_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3_MatfxUV1_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3_Im3D_SegObjPipe;
RpPDSSkyObjTemplate rwPDS_G3_Im3D_TriObjPipe;
RpPDSSkyMatTemplate rwPDS_G3_Im3D_SegPipe;
RpPDSSkyMatTemplate rwPDS_G3_Im3D_TriPipe;
RpPDSSkyObjTemplate rwPDS_G3_Generic_SctPipe;
RpPDSSkyObjTemplate rwPDS_G3_Generic_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3_Generic_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_OPLClone_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3x_OPLClone_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DSkinGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLSkinGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DGem_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4DSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADLSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_A4D_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3xd_ADL_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_A4DSkin_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_ADLSkin_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_Skin_AtmPipe;
RpPDSSkyMatTemplate rwPDS_G3x_A4D_MatPipe;
RpPDSSkyMatTemplate rwPDS_G3x_ADL_MatPipe;
RpPDSSkyObjTemplate rwPDS_G3x_Generic_AtmPipe;

void iSystem_GapTrackReport();
void iLoadModule(char* moduleName, char* arguments);
unsigned int iGetCurrFormattedTime(char* str);
unsigned int iGetCurrFormattedDate(char* str);
unsigned char iGetMonth();
unsigned char iGetDay();
unsigned char iGetHour();
unsigned char iGetMinute();
void iVSync();
RwTexture* TextureRead(char* name, char* maskName);
unsigned int iRenderWareInit();
int vsyncCounterHandler();
unsigned int RWAttachPlugins();
void iSystemExit();
void iSystemInit(unsigned int options);
unsigned int psSelectDevice();

// iSystem_GapTrackReport__Fv
// Start address: 0x1b9c50
void iSystem_GapTrackReport()
{
}

// iLoadModule__FPCcPCc
// Start address: 0x1b9c60
void iLoadModule(char* moduleName, char* arguments)
{
	type_32 workingName;
	int j;
	int errorCode;
	type_22 PATHS_CDROM;
	type_27 PATHS_HOST;
}

// iGetCurrFormattedTime__FPc
// Start address: 0x1b9db0
unsigned int iGetCurrFormattedTime(char* str)
{
	sceCdCLOCK clock;
}

// iGetCurrFormattedDate__FPc
// Start address: 0x1b9f10
unsigned int iGetCurrFormattedDate(char* str)
{
	sceCdCLOCK clock;
}

// iGetMonth__Fv
// Start address: 0x1ba010
unsigned char iGetMonth()
{
	sceCdCLOCK clock;
}

// iGetDay__Fv
// Start address: 0x1ba040
unsigned char iGetDay()
{
	sceCdCLOCK clock;
}

// iGetHour__Fv
// Start address: 0x1ba070
unsigned char iGetHour()
{
	sceCdCLOCK clock;
}

// iGetMinute__Fv
// Start address: 0x1ba0a0
unsigned char iGetMinute()
{
	sceCdCLOCK clock;
}

// iVSync__Fv
// Start address: 0x1ba0d0
void iVSync()
{
}

// TextureRead__FPCcPCc
// Start address: 0x1ba0e0
RwTexture* TextureRead(char* name, char* maskName)
{
	type_17 tmpname;
	RwTexture* result;
	unsigned int assetid;
	unsigned int tmpsize;
}

// iRenderWareInit__Fv
// Start address: 0x1ba1e0
unsigned int iRenderWareInit()
{
	RwEngineOpenParams openParams;
}

// vsyncCounterHandler__Fi
// Start address: 0x1ba2e0
int vsyncCounterHandler()
{
}

// RWAttachPlugins__Fv
// Start address: 0x1ba300
unsigned int RWAttachPlugins()
{
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _matPipe;
	RpPDSRegister _objPipe;
	RpPDSRegister _objPipe;
}

// iSystemExit__Fv
// Start address: 0x1bab10
void iSystemExit()
{
}

// iSystemInit__FUi
// Start address: 0x1bab70
void iSystemInit(unsigned int options)
{
	char* CDROM_IMAGE_FILE;
	char* HOSTIO_IMAGE_FILE;
	char* iopImageFile;
	int disk_type;
}

// psSelectDevice__Fv
// Start address: 0x1bad40
unsigned int psSelectDevice()
{
	RwVideoMode videoMode;
	int i;
	int num;
}

