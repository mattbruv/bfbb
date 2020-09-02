typedef struct xAnimPlay;
typedef struct RpCollisionTriangle;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct RpIntersection;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct RpWorldSector;
typedef struct xQuat;
typedef struct _class_0;
typedef struct xMat4x3;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xCollis;
typedef struct RpAtomic;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xVec3;
typedef struct xAnimEffect;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct xLightKitLight;
typedef enum Dimension;
typedef struct xClumpCollBSPTree;
typedef struct RpGeometry;
typedef struct xRay3;
typedef struct xEnv;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMorphTarget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct xClumpCollBSPTriangle;
typedef struct RwRaster;
typedef struct xSphere;
typedef struct RpLight;
typedef enum RxClusterValidityReq;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xMemPool;
typedef struct iEnv;
typedef struct RpMeshHeader;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef struct RwResEntry;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef struct xJSPHeader;
typedef enum rxEmbeddedPacketState;
typedef union _class_1;
typedef struct xAnimTransitionList;
typedef enum RxClusterForcePresent;
typedef struct RwFrame;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef enum RpIntersectType;
typedef struct RwSphere;
typedef struct xJSPNodeInfo;
typedef struct xAnimMultiFile;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RwLine;
typedef union RpIntersectData;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct xLightKit;
typedef struct RxCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct tri_data;
typedef struct _class_2;
typedef struct RpInterpolator;

typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_3)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef unsigned int(*type_4)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_7)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef int(*type_9)(RxPipelineNode*);
typedef void(*type_10)(RxPipelineNode*);
typedef void(*type_11)(xAnimPlay*, xAnimState*);
typedef int(*type_13)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef unsigned int(*type_15)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_16)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpCollisionTriangle*(*type_18)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef RpAtomic*(*type_22)(RpAtomic*);
typedef unsigned int(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_24)(RpIntersection*, RpCollisionTriangle*, float, void*);
typedef RpCollisionTriangle*(*type_26)(RpIntersection*, RpCollisionTriangle*, float, void*);
typedef RpWorldSector*(*type_29)(RpWorldSector*);
typedef void(*type_30)(xMemPool*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RpCollisionTriangle*(*type_34)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef RpCollisionTriangle*(*type_36)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef RwObjectHasFrame*(*type_37)(RwObjectHasFrame*);
typedef RpCollisionTriangle*(*type_38)(RpIntersection*, RpCollisionTriangle*, float, void*);
typedef RpCollisionTriangle*(*type_40)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);

typedef unsigned char type_0[2];
typedef xAnimMultiFileEntry type_1[1];
typedef unsigned short type_5[3];
typedef float type_12[16];
typedef RwTexCoords* type_17[8];
typedef RpLight* type_19[2];
typedef unsigned short type_20[3];
typedef RwFrame* type_21[2];
typedef unsigned int type_25[4];
typedef RwTexCoords* type_27[8];
typedef char type_28[4];
typedef char type_31[32];
typedef char type_32[32];
typedef RxCluster type_35[1];
typedef float type_39[2];
typedef RwV3d* type_41[3];

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
	type_16 BeforeAnimMatrices;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int index;
	type_41 vertices;
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
	type_11 BeforeEnter;
	type_2 StateCallback;
	type_16 BeforeAnimMatrices;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_23 Conditional;
	type_23 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_39 BilinearLerp;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_5 vertIndex;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_17 texCoords;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_25 pad;
};

struct xCollis
{
	unsigned int flags;
	unsigned int oid;
	void* optr;
	xModelInstance* mptr;
	float dist;
	xVec3 norm;
	xVec3 tohit;
	xVec3 depen;
	xVec3 hdng;
	union
	{
		_class_0 tuv;
		tri_data tri;
	};
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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
	_class_2 anim_coll;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_15 Callback;
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
	type_14 callback;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_12 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

enum Dimension
{
	XDIM,
	YDIM,
	ZDIM
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_27 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct xSphere
{
	xVec3 center;
	float r;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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
	type_30 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_19 light;
	type_21 light_frame;
	int memlvl;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_29 renderCallBack;
	RxPipeline* pipeline;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_33 destroyNotify;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_0 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_20 vertIndex;
	short matIndex;
};

struct xJSPHeader
{
	type_28 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_1 Files;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_31 name;
	type_32 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpSector
{
	int type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct RxNodeMethods
{
	type_6 nodeBody;
	type_7 nodeInit;
	type_8 nodeTerm;
	type_9 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_4 configMsgHandler;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_35 clusters;
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
	type_37 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct _class_2
{
	xVec3* verts;
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

int sCollidingJSP;
float cbath;
xRay3 cbray;
xMat3x3* cbmat;
RpIntersection cbisx_local;
unsigned char cbnumcs;
unsigned char cbmaxcs;
unsigned char FLOOR;
unsigned char NEXT2;
unsigned char OTHER;
long build_mytime;
long build_rwtime;
long collide_mytime;
long collide_rwtime;
int build_myct;
int build_rwct;
int collide_myct;
int collide_rwct;
float build_mytime_secs;
float build_rwtime_secs;
float collide_mytime_secs;
float collide_rwtime_secs;
RpMorphTarget anim_coll_old_mt;
type_24 rayHitsModelBackwardCB;
type_38 rayHitsModelCB;
type_34 rayHitsEnvBackwardCB;
type_40 rayHitsEnvCB;
type_26 sphereHitsModel3CB;
type_3 sphereHitsEnv4CB;
type_36 sphereHitsEnv3CB;
type_18 sphereHitsEnvCB;

void iBoxForModelLocal(xBox* o, xModelInstance* m);
void iBoxForModel(xBox* o, xModelInstance* m);
void iSphereForModel(xSphere* o, xModelInstance* m);
unsigned int iRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll);
unsigned int iRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll);
int iSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, unsigned char ncolls, float sth);
int iSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls);
int iSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, unsigned char ncolls, float sth);
unsigned int iSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll);
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, float dist, void* data);
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float dist, void* data);
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data);
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data);
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float dist, void* data);
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data);
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data);
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpCollisionTriangle* tri, float dist, void* data);
void properSphereIsectTri(xVec3* center, float radius, xVec3* tohit, float* dist_ptr, RpCollisionTriangle* tri);
void FindNearestPointOnLine(xVec3* _result, xVec3* _point, xVec3* _start, xVec3* _end);
int PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal);
void iCollideInit();

// iBoxForModelLocal__FP4xBoxPC14xModelInstance
// Start address: 0x1a54a0
void iBoxForModelLocal(xBox* o, xModelInstance* m)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	unsigned short idx;
}

// iBoxForModel__FP4xBoxPC14xModelInstance
// Start address: 0x1a55d0
void iBoxForModel(xBox* o, xModelInstance* m)
{
}

// iSphereForModel__FP7xSpherePC14xModelInstance
// Start address: 0x1a5670
void iSphereForModel(xSphere* o, xModelInstance* m)
{
	RpAtomic* imodel;
	RpGeometry* geom;
	RpMorphTarget* mtgt;
	unsigned short idx;
}

// iRayHitsModel__FPC5xRay3PC14xModelInstanceP7xCollis
// Start address: 0x1a5760
unsigned int iRayHitsModel(xRay3* r, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	float len;
	xMat4x3* mat;
	RwV3d temp;
	xVec3 center;
	xVec3 heading;
}

// iRayHitsEnv__FPC5xRay3PC4xEnvP7xCollis
// Start address: 0x1a5be0
unsigned int iRayHitsEnv(xRay3* r, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
	float len;
}

// iSphereHitsModel3__FPC7xSpherePC14xModelInstanceP7xCollisUcf
// Start address: 0x1a5eb0
int iSphereHitsModel3(xSphere* b, xModelInstance* m, xCollis* colls, unsigned char ncolls, float sth)
{
	RpIntersection isx;
	unsigned char idx;
	unsigned char i;
	xMat4x3* mat;
	float mscale;
	xMat3x3 mnormal;
	long t0;
	long t1;
}

// iSphereHitsEnv4__FPC7xSpherePC4xEnvPC7xMat3x3P7xCollis
// Start address: 0x1a64f0
int iSphereHitsEnv4(xSphere* b, xEnv* env, xMat3x3* mat, xCollis* colls)
{
	RpIntersection isx;
	xCollis* c;
	xCollis* cend;
	int numcs;
	float s;
}

// iSphereHitsEnv3__FPC7xSpherePC4xEnvP7xCollisUcf
// Start address: 0x1a6770
int iSphereHitsEnv3(xSphere* b, xEnv* env, xCollis* colls, unsigned char ncolls, float sth)
{
	RpIntersection isx;
	unsigned char idx;
}

// iSphereHitsEnv__FPC7xSpherePC4xEnvP7xCollis
// Start address: 0x1a6980
unsigned int iSphereHitsEnv(xSphere* b, xEnv* env, xCollis* coll)
{
	RpIntersection isx;
}

// rayHitsModelBackwardCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a60
RpCollisionTriangle* rayHitsModelBackwardCB(RpIntersection* isx, RpCollisionTriangle* tri, float dist, void* data)
{
}

// rayHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6a80
RpCollisionTriangle* rayHitsModelCB(RpIntersection* isx, RpCollisionTriangle* tri, float dist, void* data)
{
}

// rayHitsEnvBackwardCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6aa0
RpCollisionTriangle* rayHitsEnvBackwardCB(RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data)
{
	xCollis* coll;
}

// rayHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6b50
RpCollisionTriangle* rayHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data)
{
	xCollis* coll;
}

// sphereHitsModel3CB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1a6c50
RpCollisionTriangle* sphereHitsModel3CB(RpCollisionTriangle* tri, float dist, void* data)
{
}

// sphereHitsEnv4CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6c70
RpCollisionTriangle* sphereHitsEnv4CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data)
{
	xCollis* colls;
	float radius;
	xVec3 tohit;
	xCollis temp;
	unsigned char idx;
	xCollis* c;
	float ddist;
}

// sphereHitsEnv3CB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a6ea0
RpCollisionTriangle* sphereHitsEnv3CB(RpIntersection* isx, RpWorldSector* sector, RpCollisionTriangle* tri, float dist, void* data)
{
	xCollis* colls;
	float radius;
	xVec3* center;
	xVec3 tohit;
	xVec3 hdng;
	unsigned char idx;
	float dot;
	float odot;
	float ndot;
	float scale;
}

// sphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1a75b0
RpCollisionTriangle* sphereHitsEnvCB(RpIntersection* isx, RpCollisionTriangle* tri, float dist, void* data)
{
	xCollis* coll;
	float radius;
	xVec3* center;
	xVec3 tohit;
	float scale;
}

// properSphereIsectTri__FPC5xVec3fP5xVec3PfP19RpCollisionTriangle
// Start address: 0x1a7790
void properSphereIsectTri(xVec3* center, float radius, xVec3* tohit, float* dist_ptr, RpCollisionTriangle* tri)
{
	xVec3 projPoint;
	float dist2plane;
	float dist;
	float dist2;
	float radius2;
	unsigned int i;
	xVec3 vertClosestPoint;
	float vertDist2;
	xVec3 temp;
}

// FindNearestPointOnLine__FP5xVec3P5xVec3P5xVec3P5xVec3
// Start address: 0x1a79c0
void FindNearestPointOnLine(xVec3* _result, xVec3* _point, xVec3* _start, xVec3* _end)
{
	RwV3d* result;
	RwV3d* point;
	RwV3d* start;
	RwV3d* end;
	float mu;
	float lineLength2;
}

// PointWithinTriangle__FP5xVec3PP5xVec3P5xVec3
// Start address: 0x1a7aa0
int PointWithinTriangle(xVec3* _pt, xVec3** _tri, xVec3* _normal)
{
	RwV3d* pt;
	RwV3d** tri;
	RwV3d* normal;
	Dimension dimension;
	float absX;
	float absY;
	float absZ;
	int inside;
	int i;
	int j;
}

// iCollideInit__FP6xScene
// Start address: 0x1a7e30
void iCollideInit()
{
}

