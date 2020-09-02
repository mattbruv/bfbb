typedef struct xRay3;
typedef struct RwResEntry;
typedef struct xAnimPlay;
typedef struct xShadowSimpleCache;
typedef struct RxPipelineNodeParam;
typedef struct xEnv;
typedef struct xEntCollis;
typedef struct xAnimEffect;
typedef struct RpGeometry;
typedef struct RpAtomic;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xScene;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xAnimTransitionList;
typedef struct xEnt;
typedef struct xQuat;
typedef struct xAnimState;
typedef struct RpLight;
typedef struct RpClump;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xEntFrame;
typedef struct xSurface;
typedef struct RxPipelineRequiresCluster;
typedef struct xCollis;
typedef struct xFFX;
typedef struct RpMaterial;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct xModelBucket;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xEntShadow;
typedef struct xModelInstance;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct xMat4x3;
typedef struct xBase;
typedef struct xLightKit;
typedef struct anim_coll_data;
typedef enum RxNodeDefEditable;
typedef struct xAnimTable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xIsect;
typedef struct xRot;
typedef struct xBox;
typedef struct xLinkAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxClusterDefinition;
typedef struct xAnimFile;
typedef struct _class_0;
typedef struct tri_data;
typedef struct xAnimSingle;
typedef struct xBaseAsset;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct _class_1;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMaterialList;
typedef struct RxIoSpec;
typedef struct xBound;
typedef struct xModelPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xMemPool;
typedef struct xQCData;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xGridBound;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xShadowSimplePoly;
typedef struct RwLinkList;

typedef int(*type_0)(RxPipelineNode*, RxPipeline*);
typedef void(*type_1)(xEnt*, xScene*, float);
typedef void(*type_3)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_5)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_6)(xEnt*);
typedef unsigned int(*type_7)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_9)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef int(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_12)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_13)(RxNodeDefinition*);
typedef void(*type_15)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_16)(RxNodeDefinition*);
typedef int(*type_17)(RxPipelineNode*);
typedef void(*type_18)(RxPipelineNode*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef void(*type_22)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_24)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef xBase*(*type_26)(unsigned int);
typedef char*(*type_27)(xBase*);
typedef char*(*type_28)(unsigned int);
typedef unsigned int(*type_30)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_35)(xMemPool*, void*);
typedef void(*type_38)(RwResEntry*);
typedef RpClump*(*type_39)(RpClump*, void*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef float type_2[16];
typedef unsigned char type_8[3];
typedef float type_14[4];
typedef RwTexCoords* type_19[8];
typedef xVec3 type_21[4];
typedef xCollis type_25[18];
typedef unsigned int type_29[4];
typedef float type_31[2];
typedef float type_32[2];
typedef unsigned char type_33[2];
typedef xAnimMultiFileEntry type_34[1];
typedef char type_36[32];
typedef char type_37[32];
typedef RxCluster type_40[1];
typedef xVec3 type_41[3];
typedef unsigned short type_43[3];

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_38 destroyNotify;
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
	type_23 BeforeAnimMatrices;
};

struct xShadowSimpleCache
{
	unsigned short flags;
	unsigned char alpha;
	unsigned char pad;
	unsigned int collPriority;
	xVec3 pos;
	xVec3 at;
	xEnt* castOnEnt;
	xShadowSimplePoly poly;
	float envHeight;
	float shadowHeight;
	unsigned int raster;
	float dydx;
	float dydz;
	type_21 corner;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xEnv
{
};

struct xEntCollis
{
	unsigned char chk;
	unsigned char pen;
	unsigned char env_sidx;
	unsigned char env_eidx;
	unsigned char npc_sidx;
	unsigned char npc_eidx;
	unsigned char dyn_sidx;
	unsigned char dyn_eidx;
	unsigned char stat_sidx;
	unsigned char stat_eidx;
	unsigned char idx;
	type_25 colls;
	type_3 post;
	type_12 depenq;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_30 Callback;
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
	type_19 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_10 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xScene
{
	unsigned int sceneID;
	unsigned short flags;
	unsigned short num_ents;
	unsigned short num_trigs;
	unsigned short num_stats;
	unsigned short num_dyns;
	unsigned short num_npcs;
	unsigned short num_act_ents;
	unsigned short num_nact_ents;
	float gravity;
	float drag;
	float friction;
	unsigned short num_ents_allocd;
	unsigned short num_trigs_allocd;
	unsigned short num_stats_allocd;
	unsigned short num_dyns_allocd;
	unsigned short num_npcs_allocd;
	xEnt** trigs;
	xEnt** stats;
	xEnt** dyns;
	xEnt** npcs;
	xEnt** act_ents;
	xEnt** nact_ents;
	xEnv* env;
	xMemPool mempool;
	type_26 resolvID;
	type_27 base2Name;
	type_28 id2Name;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_7 Conditional;
	type_7 Callback;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xEnt : xBase
{
	xEntAsset* asset;
	unsigned short idx;
	unsigned short num_updates;
	unsigned char flags;
	unsigned char miscflags;
	unsigned char subType;
	unsigned char pflags;
	unsigned char moreFlags;
	unsigned char isCulled;
	unsigned char driving_count;
	unsigned char num_ffx;
	unsigned char collType;
	unsigned char collLev;
	unsigned char chkby;
	unsigned char penby;
	xModelInstance* model;
	xModelInstance* collModel;
	xModelInstance* camcollModel;
	xLightKit* lightKit;
	type_1 update;
	type_1 endUpdate;
	type_4 bupdate;
	type_5 move;
	type_6 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_15 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xQuat
{
	xVec3 v;
	float s;
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
	type_20 BeforeEnter;
	type_22 StateCallback;
	type_23 BeforeAnimMatrices;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_39 callback;
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
	type_29 pad;
};

struct xEntFrame
{
	xMat4x3 mat;
	xMat4x3 oldmat;
	xVec3 oldvel;
	xRot oldrot;
	xRot drot;
	xRot rot;
	xVec3 dpos;
	xVec3 dvel;
	xVec3 vel;
	unsigned int mode;
};

struct xSurface
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xFFX
{
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
	type_43 vertIndex;
	short matIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_34 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_36 name;
	type_37 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_2 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_32 radius;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct anim_coll_data
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_14 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_33 NumAnims;
	void** RawData;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_31 BilinearLerp;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct _class_1
{
	float t;
	float u;
	float v;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_8 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_13 nodeInit;
	type_16 nodeTerm;
	type_17 pipelineNodeInit;
	type_18 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_35 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xEntAsset : xBaseAsset
{
	unsigned char flags;
	unsigned char subtype;
	unsigned char pflags;
	unsigned char moreFlags;
	unsigned char pad;
	unsigned int surfaceID;
	xVec3 ang;
	xVec3 pos;
	xVec3 scale;
	float redMult;
	float greenMult;
	float blueMult;
	float seeThru;
	float seeThruSpeed;
	unsigned int modelInfoID;
	unsigned int animListID;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_40 clusters;
};

struct xGridBound
{
	void* data;
	unsigned short gx;
	unsigned short gz;
	unsigned char ingrid;
	unsigned char oversize;
	unsigned char deleted;
	unsigned char gpad;
	xGridBound** head;
	xGridBound* next;
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
	type_42 sync;
};

struct xShadowSimplePoly
{
	type_41 vert;
	xVec3 norm;
};

struct RwLinkList
{
	RwLLLink link;
};


unsigned int xRayHitsBoxFast(xRay3* r, xBox* b);
unsigned int xRayHitsSphereFast(xRay3* r, xSphere* s);
void xCollideFastInit(xScene* sc);

// xRayHitsBoxFast__FPC5xRay3PC4xBox
// Start address: 0x1ce800
unsigned int xRayHitsBoxFast(xRay3* r, xBox* b)
{
	xIsect isx;
}

// xRayHitsSphereFast__FPC5xRay3PC7xSphere
// Start address: 0x1ce870
unsigned int xRayHitsSphereFast(xRay3* r, xSphere* s)
{
	float c;
}

// xCollideFastInit__FP6xScene
// Start address: 0x1ce960
void xCollideFastInit(xScene* sc)
{
}

