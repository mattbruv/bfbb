typedef struct RpInterpolator;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct tag_xFile;
typedef struct xCutscene;
typedef struct rxHeapFreeBlock;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMaterialList;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct xCutsceneData;
typedef struct RpMaterial;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct xCutsceneInfo;
typedef struct RpGeometry;
typedef struct xCutsceneTime;
typedef struct RxPipelineRequiresCluster;
typedef struct RpAtomic;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct xCutsceneBreak;
typedef struct rxReq;
typedef struct RpMeshHeader;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct XCSNNosey;
typedef struct RpTriangle;
typedef struct st_PKR_ASSET_TOCINFO;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct st_PACKER_ASSETTYPE;
typedef struct RwResEntry;
typedef enum rxEmbeddedPacketState;
typedef enum RxClusterForcePresent;
typedef struct RxClusterDefinition;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RwTexture;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct tag_iFile;
typedef struct RwLinkList;
typedef enum XFILE_READSECTOR_STATUS;

typedef int(*type_0)(void*, unsigned int, void*, int);
typedef int(*type_1)(RxPipelineNode*);
typedef void*(*type_2)(void*, unsigned int, void*, int*, int*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef void(*type_5)(void*, unsigned int, void*);
typedef void(*type_6)(void*, unsigned int);
typedef void(*type_7)(void*, unsigned int, void*, char*);
typedef int(*type_8)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_10)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_12)(RxNodeDefinition*);
typedef RpAtomic*(*type_13)(RpAtomic*, void*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef void(*type_15)(RxNodeDefinition*);
typedef RpAtomic*(*type_19)(RpAtomic*);
typedef void*(*type_20)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef void(*type_21)(unsigned int, unsigned char);
typedef void*(*type_22)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef void(*type_32)(tag_xFile*);
typedef void(*type_34)(RwResEntry*);

typedef char type_9[32];
typedef char type_16[16];
typedef char type_17[16];
typedef unsigned short type_18[3];
typedef unsigned int type_23[4];
typedef RwTexCoords* type_24[8];
typedef unsigned int type_25[2];
typedef unsigned int type_26[4096];
typedef unsigned int type_27[2];
typedef char type_28[16];
typedef unsigned int type_29[2];
typedef char type_30[16];
typedef char type_31[32];
typedef char type_33[32];
typedef char type_35[128];
typedef RxCluster type_36[1];

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

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

struct tag_xFile
{
	type_9 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	unsigned int* TimeChunkOffs;
	unsigned int* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	unsigned int Waiting;
	unsigned int BadReadPause;
	float BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float Time;
	float CamTime;
	unsigned int PlayIndex;
	unsigned int Ready;
	int DataLoading;
	unsigned int GotData;
	unsigned int ShutDownWait;
	float PlaybackSpeed;
	unsigned int Opened;
	tag_xFile File;
	int AsyncID;
	void* MemBuf;
	void* MemCurr;
	unsigned int SndStarted;
	unsigned int SndNumChannel;
	type_25 SndChannelReq;
	type_27 SndAssetID;
	type_29 SndHandle;
	XCSNNosey* cb_nosey;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xCutsceneData
{
	unsigned int DataType;
	unsigned int AssetID;
	unsigned int ChunkSize;
	union
	{
		unsigned int FileOffset;
		void* DataPtr;
	};
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_14 callback;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_23 pad;
};

struct xCutsceneInfo
{
	unsigned int Magic;
	unsigned int AssetID;
	unsigned int NumData;
	unsigned int NumTime;
	unsigned int MaxModel;
	unsigned int MaxBufEven;
	unsigned int MaxBufOdd;
	unsigned int HeaderSize;
	unsigned int VisCount;
	unsigned int VisSize;
	unsigned int BreakCount;
	unsigned int pad;
	type_16 SoundLeft;
	type_17 SoundRight;
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
	type_24 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_19 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xCutsceneBreak
{
	float Time;
	int Index;
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

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct RpTriangle
{
	type_18 vertIndex;
	short matIndex;
};

struct st_PKR_ASSET_TOCINFO
{
	unsigned int aid;
	st_PACKER_ASSETTYPE* typeref;
	unsigned int sector;
	unsigned int plus_offset;
	unsigned int size;
	void* mempos;
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

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_20 readXForm;
	type_22 writeXForm;
	type_0 assetLoaded;
	type_2 makeData;
	type_5 cleanup;
	type_6 assetUnloaded;
	type_7 writePeek;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_34 destroyNotify;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_31 name;
	type_33 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_11 nodeBody;
	type_12 nodeInit;
	type_15 nodeTerm;
	type_1 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_10 configMsgHandler;
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
	type_36 clusters;
};

struct tag_iFile
{
	unsigned int flags;
	type_35 path;
	int fd;
	int offset;
	int length;
};

struct RwLinkList
{
	RwLLLink link;
};

enum XFILE_READSECTOR_STATUS
{
	XFILE_RDSTAT_NOOP,
	XFILE_RDSTAT_INPROG,
	XFILE_RDSTAT_DONE,
	XFILE_RDSTAT_FAIL,
	XFILE_RDSTAT_QUEUED,
	XFILE_RDSTAT_EXPIRED
};

type_28 buffer;
type_30 buffer;
type_32 iCSAsyncReadCB;
type_21 iCSSoundCutsceneCB;
type_13 FastPipeAtomicCB;
type_26 ourGlobals;
xCutscene sActiveCutscene;

int iCSLoadStep(xCutscene* csn);
RpAtomic* FastPipeAtomicCB(RpAtomic* atomic);
void iCSFileClose(xCutscene* csn);
void iCSFileAsyncRead(xCutscene* csn, void* dest, unsigned int size);
unsigned int iCSFileOpen(xCutscene* csn);
void iCSAsyncReadCB();
void iCSSoundCutsceneCB(unsigned int id, unsigned char first);
void* iCSSoundGetData(xCutscene* csn, unsigned int channel, unsigned int chunk);

// iCSLoadStep__FP9xCutscene
// Start address: 0x34b9a0
int iCSLoadStep(xCutscene* csn)
{
	int bytes;
	XFILE_READSECTOR_STATUS cdstat;
	unsigned int skipAccum;
	unsigned int tmpSize;
	void* foundModel;
	unsigned int i;
}

// FastPipeAtomicCB__FP8RpAtomicPv
// Start address: 0x34c0b0
RpAtomic* FastPipeAtomicCB(RpAtomic* atomic)
{
}

// iCSFileClose__FP9xCutscene
// Start address: 0x34c0c0
void iCSFileClose(xCutscene* csn)
{
}

// iCSFileAsyncRead__FP9xCutscenePvUi
// Start address: 0x34c100
void iCSFileAsyncRead(xCutscene* csn, void* dest, unsigned int size)
{
	unsigned int* tp;
	unsigned int i;
}

// iCSFileOpen__FP9xCutscene
// Start address: 0x34c1d0
unsigned int iCSFileOpen(xCutscene* csn)
{
	unsigned int headerskip;
	st_PKR_ASSET_TOCINFO ainfo;
	char* filename;
}

// iCSAsyncReadCB__FP9tag_xFile
// Start address: 0x34c290
void iCSAsyncReadCB()
{
}

// iCSSoundCutsceneCB__FUib
// Start address: 0x34c2b0
void iCSSoundCutsceneCB(unsigned int id, unsigned char first)
{
	void* data;
}

// iCSSoundGetData__FP9xCutsceneUiUi
// Start address: 0x34c360
void* iCSSoundGetData(xCutscene* csn, unsigned int channel, unsigned int chunk)
{
	void* retdata;
	xCutsceneData* data;
	unsigned int dataIndex;
	unsigned int numData;
	unsigned int channelIndex;
}

