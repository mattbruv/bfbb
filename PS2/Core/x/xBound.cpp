typedef struct RxHeap;
typedef struct RpAtomic;
typedef struct RwRGBA;
typedef struct xVec3;
typedef struct RxPipelineNode;
typedef struct xBound;
typedef struct xQuat;
typedef struct xCollis;
typedef struct RpClump;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct xSphere;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQCControl;
typedef struct RwResEntry;
typedef struct rxReq;
typedef struct xModelBucket;
typedef struct RwRaster;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct xAnimTransitionList;
typedef struct xRay3;
typedef struct xBox;
typedef struct xAnimTable;
typedef struct xModelInstance;
typedef struct xMat4x3;
typedef struct xAnimTransition;
typedef enum RxNodeDefEditable;
typedef struct xLightKit;
typedef enum RxClusterValid;
typedef struct xQCData;
typedef struct rxHeapFreeBlock;
typedef struct xIsect;
typedef struct xAnimState;
typedef enum rxEmbeddedPacketState;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimFile;
typedef struct xAnimSingle;
typedef struct RxClusterDefinition;
typedef struct xAnimMultiFileBase;
typedef struct _class_0;
typedef struct RwSphere;
typedef struct tri_data;
typedef struct RpInterpolator;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct RxIoSpec;
typedef struct _class_1;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xModelPool;
typedef struct RxNodeDefinition;
typedef struct RpGeometry;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xBBox;

typedef unsigned int(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_1)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpAtomic*(*type_2)(RpAtomic*);
typedef int(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_4)(RxNodeDefinition*);
typedef void(*type_5)(RxNodeDefinition*);
typedef void(*type_6)(xAnimPlay*, xAnimState*);
typedef int(*type_7)(RxPipelineNode*);
typedef void(*type_8)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_10)(RxPipelineNode*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_12)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_14)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_19)(xMemPool*, void*);
typedef RpClump*(*type_22)(RpClump*, void*);
typedef void(*type_23)(RwResEntry*);
typedef RwObjectHasFrame*(*type_25)(RwObjectHasFrame*);

typedef RwTexCoords* type_9[8];
typedef unsigned char type_13[3];
typedef unsigned int type_15[4];
typedef float type_16[2];
typedef unsigned char type_17[2];
typedef xAnimMultiFileEntry type_18[1];
typedef char type_20[32];
typedef char type_21[32];
typedef RxCluster type_24[1];
typedef unsigned short type_26[3];

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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_13 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xQuat
{
	xVec3 v;
	float s;
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
		_class_1 tuv;
		tri_data tri;
	};
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_22 callback;
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
	type_15 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_18 Files;
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
	type_26 vertIndex;
	short matIndex;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_20 name;
	type_21 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xSurface
{
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xQCControl
{
	float world_xmin;
	float world_ymin;
	float world_zmin;
	float world_xmax;
	float world_ymax;
	float world_zmax;
	float world_xsz;
	float world_ysz;
	float world_zsz;
	float scale_x;
	float scale_y;
	float scale_z;
	float center_x;
	float center_y;
	float center_z;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_23 destroyNotify;
};

struct rxReq
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	_class_0 anim_coll;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_0 Conditional;
	type_0 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKit
{
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xIsect
{
	unsigned int flags;
	float penned;
	float contained;
	float lapped;
	xVec3 point;
	xVec3 norm;
	float dist;
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
	type_6 BeforeEnter;
	type_8 StateCallback;
	type_11 BeforeAnimMatrices;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_17 NumAnims;
	void** RawData;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_16 BilinearLerp;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _class_0
{
	xVec3* verts;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_14 Callback;
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
	type_11 BeforeAnimMatrices;
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

struct _class_1
{
	float t;
	float u;
	float v;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_19 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxNodeMethods
{
	type_3 nodeBody;
	type_4 nodeInit;
	type_5 nodeTerm;
	type_7 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_1 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_24 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_25 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

xQCControl xqc_def_ctrl;

void xBoundDraw();
void xVecHitsBound(xVec3* v, xBound* b, xCollis* c);
void xSphereHitsBound(xSphere* o, xBound* b, xCollis* c);
void xRayHitsBound(xRay3* r, xBound* b, xCollis* c);
void xBoundOBBIsectRay(xBox* b, xMat4x3* m, xRay3* r, xIsect* isect);
void xBoundHitsBound(xBound* a, xBound* b, xCollis* c);
void xBoundGetSphere(xSphere& o, xBound& bound);
void xBoundGetBox(xBox& box, xBound& bound);
void xBoundUpdate(xBound* b);

// xBoundDraw__FPC6xBound
// Start address: 0x1c0530
void xBoundDraw()
{
}

// xVecHitsBound__FPC5xVec3PC6xBoundP7xCollis
// Start address: 0x1c0540
void xVecHitsBound(xVec3* v, xBound* b, xCollis* c)
{
	xIsect isect;
	xVec3 lv;
}

// xSphereHitsBound__FPC7xSpherePC6xBoundP7xCollis
// Start address: 0x1c0660
void xSphereHitsBound(xSphere* o, xBound* b, xCollis* c)
{
}

// xRayHitsBound__FPC5xRay3PC6xBoundP7xCollis
// Start address: 0x1c06f0
void xRayHitsBound(xRay3* r, xBound* b, xCollis* c)
{
	xIsect isect;
}

// xBoundOBBIsectRay__FPC4xBoxPC7xMat4x3PC5xRay3P6xIsect
// Start address: 0x1c07c0
void xBoundOBBIsectRay(xBox* b, xMat4x3* m, xRay3* r, xIsect* isect)
{
	xRay3 xfr;
	xBox sbox;
	xVec3 scale;
	xMat4x3 mnormal;
	float len2;
	float len_inv;
	float len2;
	float len_inv;
	float len2;
	float len_inv;
}

// xBoundHitsBound__FPC6xBoundPC6xBoundP7xCollis
// Start address: 0x1c0b80
void xBoundHitsBound(xBound* a, xBound* b, xCollis* c)
{
}

// xBoundGetSphere__FR7xSphereRC6xBound
// Start address: 0x1c0d10
void xBoundGetSphere(xSphere& o, xBound& bound)
{
	xMat4x3& mat;
	xVec3 v;
}

// xBoundGetBox__FR4xBoxRC6xBound
// Start address: 0x1c0f70
void xBoundGetBox(xBox& box, xBound& bound)
{
	xSphere& o;
}

// xBoundUpdate__FP6xBound
// Start address: 0x1c1060
void xBoundUpdate(xBound* b)
{
}

