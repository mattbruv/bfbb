typedef struct xModelInstance;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpClump;
typedef struct RxPipelineNode;
typedef struct xQuat;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwCamera;
typedef enum RpWorldRenderOrder;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct RwMatrixTag;
typedef struct RpTriangle;
typedef struct RxPipeline;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RpSector;
typedef struct RpMeshHeader;
typedef struct xVec3;
typedef struct xAnimTransitionList;
typedef struct RwResEntry;
typedef struct RwSurfaceProperties;
typedef struct basic_rect;
typedef struct RpWorld;
typedef struct xModelBucket;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct rxReq;
typedef struct xAnimTransition;
typedef struct xModelPipeLookup;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpLight;
typedef struct xModelPool;
typedef struct RwV2d;
typedef enum RwVideoModeFlag;
typedef enum eHudID;
typedef struct RpAtomic;
typedef struct xMat4x3;
typedef struct xLightKit;
typedef struct xAnimState;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct xAnimSingle;
typedef enum rxEmbeddedPacketState;
typedef struct RwLLLink;
typedef struct xLightKitLight;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xAnimMultiFileBase;
typedef struct RpVertexNormal;
typedef struct RxClusterDefinition;
typedef struct _class;
typedef struct xAnimEffect;
typedef struct RwSphere;
typedef struct RpInterpolator;
typedef struct RwTexDictionary;
typedef struct xModelPipeInfo;
typedef struct RwVideoMode;
typedef struct RxOutputSpec;
typedef struct xAnimPlay;
typedef struct xMat3x3;
typedef struct RpPolygon;
typedef struct RxClusterRef;
typedef struct RpMaterialList;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RpGeometry;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;

typedef RpAtomic*(*type_0)(RpAtomic*);
typedef unsigned int(*type_2)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef int(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_7)(RxNodeDefinition*);
typedef void(*type_8)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_9)(RxNodeDefinition*);
typedef int(*type_11)(RxPipelineNode*);
typedef void(*type_12)(RxPipelineNode*);
typedef int(*type_14)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_15)(RpWorldSector*);
typedef unsigned int(*type_17)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_21)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_27)(RwCamera*);
typedef RwCamera*(*type_28)(RwCamera*);
typedef void(*type_29)(xMemPool*, void*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RwObjectHasFrame*(*type_36)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef RwV3d type_6[8];
typedef RwTexCoords* type_10[8];
typedef int type_13[16];
typedef RwV2d type_16[2];
typedef float type_18[16];
typedef float type_19[2];
typedef unsigned int type_20[4];
typedef xModelPipeInfo* type_22[16];
typedef unsigned char type_23[2];
typedef xAnimMultiFileEntry type_24[1];
typedef unsigned int type_25[4096];
typedef unsigned short type_26[3];
typedef char type_30[32];
typedef char type_32[32];
typedef RwTexCoords* type_34[8];
typedef RxCluster type_35[1];
typedef unsigned short type_37[3];

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
	_class anim_coll;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_31 callback;
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

struct xQuat
{
	xVec3 v;
	float s;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_24 Files;
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
	type_20 pad;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_27 beginUpdate;
	type_28 endUpdate;
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
	type_1 frustumPlanes;
	RwBBox frustumBoundBox;
	type_6 frustumCorners;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct RpTriangle
{
	type_37 vertIndex;
	short matIndex;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_30 name;
	type_32 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xSurface
{
};

struct RpSector
{
	int type;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_33 destroyNotify;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_34 texCoords;
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

struct rxReq
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_21 Conditional;
	type_21 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xModelPipeLookup
{
	RpAtomic* model;
	unsigned int PipeFlags;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RwV2d
{
	float x;
	float y;
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

enum eHudID
{
	eHudIDUnknown,
	eHudIDScoobyHead0,
	eHudIDScoobyHead1,
	eHudIDScoobyHead2,
	eHudIDScoobyHead3,
	eHudIDScoobyHead4,
	eHudIDScoobyHead5,
	eHudIDGumPack,
	eHudIDGumPiece,
	eHudIDSnack,
	eHudIDSnackPiece,
	eHudIDBarSoap,
	eHudIDSoapPiece,
	eHudIDBoxSoap,
	eHudIDHealthBar,
	eHudIDClue,
	eHudIDTotal
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
	type_0 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_3 BeforeEnter;
	type_5 StateCallback;
	type_8 BeforeAnimMatrices;
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
	type_23 NumAnims;
	void** RawData;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_19 BilinearLerp;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_18 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct _class
{
	xVec3* verts;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_17 Callback;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xModelPipeInfo
{
	unsigned int ModelHashID;
	unsigned int SubObjectBits;
	unsigned int PipeFlags;
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
	type_8 BeforeAnimMatrices;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_26 vertIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_29 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_7 nodeInit;
	type_9 nodeTerm;
	type_11 pipelineNodeInit;
	type_12 pipelineNodeTerm;
	type_14 pipelineNodeConfig;
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
	type_10 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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
	type_36 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

RpMorphTarget anim_coll_old_mt;
xModelPool* sxModelPoolList;
RwCamera* subcamera;
int xModelPipeNumTables;
type_13 xModelPipeCount;
type_22 xModelPipeData;
int xModelLookupCount;
xModelPipeLookup* xModelLookupList;
int xModelInstStaticAlloc;
int xModelBucketEnabled;
eHudID sHudItem;
int sHudItemVisible;
xMat4x3 g_I3;
unsigned int gActiveHeap;
RwRaster* ShadowRenderRaster;
type_25 ourGlobals;

void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, unsigned int index);
xVec3 xModelGetBoneLocation(xModelInstance& model, unsigned int index);
void xModelAnimCollRefresh(xModelInstance& cm);
void xModelAnimCollStart(xModelInstance& m);
void xModel_SceneExit(RpWorld* world);
void xModel_SceneEnter(RpWorld* world);
void xModelSetMaterialAlpha(xModelInstance* modelInst, unsigned char alpha);
void CameraDestroy(RwCamera* camera);
void xModelRender2D(xModelInstance& model, basic_rect& r, xVec3& from, xVec3& to);
void xModelRender(xModelInstance* modelInst);
void xModelRenderSingle(xModelInstance* modelInst);
void xModelEval(xModelInstance* modelInst);
void xModelEvalSingle(xModelInstance* modelInst);
void xModelUpdate(xModelInstance* modelInst, float timeDelta);
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, unsigned int flags);
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent);
void xModelInstanceFree(xModelInstance* modelInst);
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, unsigned short flags, unsigned char boneIndex, unsigned char* boneRemap);
void xModelPoolInit(unsigned int count, unsigned int numMatrices);
void xModelInit();
unsigned int xModelGetPipeFlags(RpAtomic* model);

// xModelGetBoneMat__FR7xMat4x3RC14xModelInstanceUi
// Start address: 0x1f0be0
void xModelGetBoneMat(xMat4x3& mat, xModelInstance& model, unsigned int index)
{
	xMat4x3& root_mat;
}

// xModelGetBoneLocation__FRC14xModelInstanceUi
// Start address: 0x1f0ca0
xVec3 xModelGetBoneLocation(xModelInstance& model, unsigned int index)
{
	xMat4x3& root_mat;
	xMat4x3& anim_mat;
	xVec3 ret;
}

// xModelAnimCollRefresh__FRC14xModelInstance
// Start address: 0x1f0da0
void xModelAnimCollRefresh(xModelInstance& cm)
{
	unsigned int size;
	xMat4x3& mat;
	xMat4x3 old_mat;
}

// xModelAnimCollStart__FR14xModelInstance
// Start address: 0x1f0f70
void xModelAnimCollStart(xModelInstance& m)
{
	unsigned int size;
}

// xModel_SceneExit__FP7RpWorld
// Start address: 0x1f0fe0
void xModel_SceneExit(RpWorld* world)
{
}

// xModel_SceneEnter__FP7RpWorld
// Start address: 0x1f0ff0
void xModel_SceneEnter(RpWorld* world)
{
}

// xModelSetMaterialAlpha__FP14xModelInstanceUc
// Start address: 0x1f1000
void xModelSetMaterialAlpha(xModelInstance* modelInst, unsigned char alpha)
{
}

// CameraDestroy__FP8RwCamera
// Start address: 0x1f1010
void CameraDestroy(RwCamera* camera)
{
	RwRaster* raster;
	RwFrame* frame;
}

// xModelRender2D__FRC14xModelInstanceRC13basic_rect<f>RC5xVec3RC5xVec3
// Start address: 0x1f10a0
void xModelRender2D(xModelInstance& model, basic_rect& r, xVec3& from, xVec3& to)
{
	RwCamera* camera;
	RwMatrixTag* cammat;
	xMat4x3 objmat;
	xMat4x3 shearmat;
	xMat4x3 temp1;
	xMat4x3 temp2;
	RwV2d* camvw;
	float viewscale;
	float shearX;
	float shearY;
}

// xModelRender__FP14xModelInstance
// Start address: 0x1f14a0
void xModelRender(xModelInstance* modelInst)
{
}

// xModelRenderSingle__FP14xModelInstance
// Start address: 0x1f1500
void xModelRenderSingle(xModelInstance* modelInst)
{
	unsigned char reset;
	xMat3x3 tmpmat;
	xAnimPlay* a;
	unsigned short i;
}

// xModelEval__FP14xModelInstance
// Start address: 0x1f18d0
void xModelEval(xModelInstance* modelInst)
{
}

// xModelEvalSingle__FP14xModelInstance
// Start address: 0x1f1910
void xModelEvalSingle(xModelInstance* modelInst)
{
	int i;
	xModelInstance* dad;
	unsigned char* remap;
}

// xModelUpdate__FP14xModelInstancef
// Start address: 0x1f1ab0
void xModelUpdate(xModelInstance* modelInst, float timeDelta)
{
}

// xModelInstanceUpgradeBrotherShared__FP14xModelInstanceUi
// Start address: 0x1f1b40
void xModelInstanceUpgradeBrotherShared(xModelInstance* inst, unsigned int flags)
{
	unsigned int boneCount;
	RwMatrixTag* allocmats;
}

// xModelInstanceAttach__FP14xModelInstanceP14xModelInstance
// Start address: 0x1f1bc0
void xModelInstanceAttach(xModelInstance* inst, xModelInstance* parent)
{
	xModelInstance* curr;
}

// xModelInstanceFree__FP14xModelInstance
// Start address: 0x1f1c10
void xModelInstanceFree(xModelInstance* modelInst)
{
	xModelInstance* curr;
	xModelInstance** prev;
}

// xModelInstanceAlloc__FP8RpAtomicPvUsUcPUc
// Start address: 0x1f1d00
xModelInstance* xModelInstanceAlloc(RpAtomic* data, void* object, unsigned short flags, unsigned char boneIndex, unsigned char* boneRemap)
{
	int i;
	unsigned int boneCount;
	unsigned int matCount;
	xModelPool* curr;
	xModelPool* found;
	xModelInstance* dude;
	RwMatrixTag* allocmats;
}

// xModelPoolInit__FUiUi
// Start address: 0x1f2020
void xModelPoolInit(unsigned int count, unsigned int numMatrices)
{
	int i;
	unsigned char* buffer;
	RwMatrixTag* mat;
	xModelPool* pool;
	xModelPool* curr;
	xModelPool** prev;
	xModelInstance* inst;
}

// xModelInit__Fv
// Start address: 0x1f22e0
void xModelInit()
{
}

// xModelGetPipeFlags__FP8RpAtomic
// Start address: 0x1f23b0
unsigned int xModelGetPipeFlags(RpAtomic* model)
{
	int i;
}

