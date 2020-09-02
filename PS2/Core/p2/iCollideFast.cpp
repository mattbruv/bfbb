typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineNodeParam;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xRay3;
typedef struct RxPipelineNode;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xEnv;
typedef enum RpIntersectType;
typedef struct xQuat;
typedef struct RpClump;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimFile;
typedef struct RpAtomic;
typedef struct xJSPHeader;
typedef struct xAnimSingle;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef enum RpWorldRenderOrder;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct xAnimMultiFileBase;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xClumpCollBSPTree;
typedef struct xAnimTransition;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct xJSPNodeInfo;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwResEntry;
typedef struct rxReq;
typedef union RpIntersectData;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct RpLight;
typedef struct xAnimMultiFile;
typedef struct xAnimPlay;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpCollisionTriangle;
typedef struct rxHeapFreeBlock;
typedef struct RpIntersection;
typedef enum rxEmbeddedPacketState;
typedef struct iEnv;
typedef enum RxClusterForcePresent;
typedef struct RwLLLink;
typedef struct xLightKit;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef struct RwSphere;
typedef struct xAnimTable;
typedef struct xMemPool;
typedef struct RwTexDictionary;
typedef struct RpInterpolator;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RpPolygon;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwObject;
typedef struct xLightKitLight;
typedef struct xSurface;
typedef struct RpMaterialList;
typedef struct RxIoSpec;
typedef struct xAnimTransitionList;
typedef struct RwLine;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef union _class_0;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_1;

typedef int(*type_0)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_1)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpAtomic*(*type_2)(RpAtomic*);
typedef int(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_4)(RxNodeDefinition*);
typedef void(*type_6)(RxNodeDefinition*);
typedef unsigned int(*type_7)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_8)(RxPipelineNode*);
typedef void(*type_10)(RxPipelineNode*);
typedef unsigned int(*type_12)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_13)(RpWorldSector*);
typedef void(*type_16)(xAnimState*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_17)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef void(*type_18)(xAnimPlay*, xAnimState*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_24)(xMemPool*, void*);
typedef void(*type_27)(RwResEntry*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_33)(RwObjectHasFrame*);
typedef RpCollisionTriangle*(*type_35)(RpIntersection*, RpCollisionTriangle*, float, void*);

typedef char type_5[4];
typedef RwTexCoords* type_9[8];
typedef float type_11[2];
typedef unsigned char type_14[2];
typedef xAnimMultiFileEntry type_15[1];
typedef unsigned int type_19[4];
typedef RwV3d* type_21[3];
typedef unsigned short type_22[3];
typedef float type_23[16];
typedef char type_25[32];
typedef char type_26[32];
typedef RwTexCoords* type_29[8];
typedef RpLight* type_30[2];
typedef RwFrame* type_31[2];
typedef RxCluster type_32[1];
typedef unsigned short type_34[3];

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_9 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimState
{
	xAnimState* Next;
	char* Name;
	unsigned int ID;
	unsigned int Flags;
	unsigned int UserFlags;
	float Speed;
	xAnimFile* Data;
	xAnimEffect* Effects;
	xAnimTransitionList* Default;
	xAnimTransitionList* List;
	float* BoneBlend;
	float* TimeSnap;
	float FadeRecip;
	unsigned short* FadeOffset;
	void* CallbackData;
	xAnimMultiFile* MultiFile;
	type_18 BeforeEnter;
	type_16 StateCallback;
	type_20 BeforeAnimMatrices;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_28 callback;
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
	type_19 pad;
};

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_14 NumAnims;
	void** RawData;
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
	type_2 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xJSPHeader
{
	type_5 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_11 BilinearLerp;
	xAnimEffect* Effect;
	unsigned int ActiveCount;
	float LastTime;
	xAnimActiveEffect* ActiveList;
	xAnimPlay* Play;
	xAnimTransition* Sync;
	xAnimTransition* Tran;
	xAnimSingle* Blend;
	float BlendFactor;
	unsigned int pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xModelInstance
{
	xModelInstance* Next;
	xModelInstance* Parent;
	xModelPool* Pool;
	xAnimPlay* Anim;
	RpAtomic* Data;
	unsigned int PipeFlags;
	float RedMultiplier;
	float GreenMultiplier;
	float BlueMultiplier;
	float Alpha;
	float FadeStart;
	float FadeEnd;
	xSurface* Surf;
	xModelBucket** Bucket;
	xModelInstance* BucketNext;
	xLightKit* LightKit;
	void* Object;
	unsigned short Flags;
	unsigned char BoneCount;
	unsigned char BoneIndex;
	unsigned char* BoneRemap;
	RwMatrixTag* Mat;
	xVec3 Scale;
	unsigned int modelID;
	unsigned int shadowID;
	RpAtomic* shadowmapAtomic;
	_class_1 anim_coll;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RpTriangle
{
	type_34 vertIndex;
	short matIndex;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_25 name;
	type_26 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpSector
{
	int type;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_12 Conditional;
	type_12 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_27 destroyNotify;
};

struct rxReq
{
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_7 Callback;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_29 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_15 Files;
};

struct xAnimPlay
{
	xAnimPlay* Next;
	unsigned short NumSingle;
	unsigned short BoneCount;
	xAnimSingle* Single;
	void* Object;
	xAnimTable* Table;
	xMemPool* Pool;
	xModelInstance* ModelInst;
	type_20 BeforeAnimMatrices;
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
	type_13 renderCallBack;
	RxPipeline* pipeline;
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int index;
	type_21 vertices;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_30 light;
	type_31 light_frame;
	int memlvl;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xAnimTable
{
	xAnimTable* Next;
	char* Name;
	xAnimTransition* TransitionList;
	xAnimState* StateList;
	unsigned int AnimIndex;
	unsigned int MorphIndex;
	unsigned int UserFlags;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_24 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_22 vertIndex;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_23 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xSurface
{
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RxNodeMethods
{
	type_3 nodeBody;
	type_4 nodeInit;
	type_6 nodeTerm;
	type_8 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_1 configMsgHandler;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_32 clusters;
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
	type_33 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_1
{
	xVec3* verts;
};

unsigned int hitzhit;
type_17 rayHitsEnvFastCB;
type_35 rayHitsModelFastCB;

void iCollideFastInit();

// iCollideFastInit__FP6xScene
// Start address: 0x1a7e40
void iCollideFastInit()
{
}

