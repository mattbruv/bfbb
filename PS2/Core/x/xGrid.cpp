typedef struct xGridBound;
typedef struct xSurface;
typedef struct xAnimTransition;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimSingle;
typedef struct RxPipelineNode;
typedef struct xAnimActiveEffect;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimPlay;
typedef struct RxPipelineNodeTopSortData;
typedef struct xBound;
typedef struct rxHeapBlockHeader;
typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct _class_0;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMaterial;
typedef struct xVec3;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xBBox;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct xMat4x3;
typedef struct xEnt;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xBase;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xMemPool;
typedef struct xLinkAsset;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xShadowSimplePoly;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpTriangle;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBox;
typedef struct RwResEntry;
typedef struct RxClusterDefinition;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct xAnimTransitionList;
typedef struct xEntCollis;
typedef struct xGrid;
typedef struct RwSphere;
typedef struct RpLight;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwTexture;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xQCData;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEntShadow;
typedef struct xGridIterator;
typedef struct RxNodeDefinition;
typedef struct anim_coll_data;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xAnimMultiFileEntry;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_1;
typedef struct tri_data;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;

typedef unsigned int(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_2)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_6)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_10)(RxPipelineNode*);
typedef void(*type_11)(RxPipelineNode*);
typedef int(*type_12)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef int(*type_14)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_19)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_21)(unsigned int);
typedef char*(*type_23)(xBase*);
typedef char*(*type_24)(unsigned int);
typedef RpAtomic*(*type_26)(RpAtomic*);
typedef void(*type_27)(xEnt*, xScene*, float);
typedef void(*type_29)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef void(*type_32)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_33)(xEnt*);
typedef unsigned int(*type_34)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_35)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_38)(xMemPool*, void*);
typedef int(*type_39)(xEnt*, void*);
typedef void(*type_42)(RwResEntry*);
typedef RwObjectHasFrame*(*type_46)(RwObjectHasFrame*);

typedef float type_1[4];
typedef float type_3[2];
typedef unsigned char type_5[2];
typedef xAnimMultiFileEntry type_7[1];
typedef int type_15[2];
typedef type_15 type_17[3];
typedef type_17 type_18[4];
typedef xVec3 type_22[3];
typedef unsigned short type_25[3];
typedef float type_28[16];
typedef unsigned int type_31[4];
typedef RwTexCoords* type_36[8];
typedef xVec3 type_37[4];
typedef char type_40[32];
typedef char type_41[32];
typedef unsigned char type_43[3];
typedef xCollis type_44[18];
typedef RxCluster type_45[1];
typedef float type_47[2];
typedef unsigned char type_48[3];

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

struct xSurface
{
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_47 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xFFX
{
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_48 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_31 pad;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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
	type_26 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_0
{
	float t;
	float u;
	float v;
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
	type_16 BeforeEnter;
	type_9 StateCallback;
	type_20 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_7 Files;
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

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_13 callback;
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
	type_36 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_27 update;
	type_27 endUpdate;
	type_30 bupdate;
	type_32 move;
	type_33 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_35 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_14 eventFunc;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct rxReq
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_19 Callback;
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

struct xEnv
{
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_38 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_1 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xShadowSimplePoly
{
	type_22 vert;
	xVec3 norm;
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

struct RpTriangle
{
	type_25 vertIndex;
	short matIndex;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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
	type_5 NumAnims;
	void** RawData;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_28 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_42 destroyNotify;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_21 resolvID;
	type_23 base2Name;
	type_24 id2Name;
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
	type_37 corner;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_44 colls;
	type_29 post;
	type_34 depenq;
};

struct xGrid
{
	unsigned char ingrid_id;
	type_43 pad;
	unsigned short nx;
	unsigned short nz;
	float minx;
	float minz;
	float maxx;
	float maxz;
	float csizex;
	float csizez;
	float inv_csizex;
	float inv_csizez;
	float maxr;
	xGridBound** cells;
	xGridBound* other;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_40 name;
	type_41 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_8 nodeTerm;
	type_10 pipelineNodeInit;
	type_11 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_3 radius;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	unsigned int delfound;
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

struct anim_coll_data
{
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
	type_45 clusters;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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
	type_46 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_1
{
	xVec3* verts;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

int gGridIterActive;
unsigned int gActiveHeap;

void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, type_39 hitCB, void* cbdata);
int xGridEntIsTooBig(xGrid* grid, xEnt* ent);
xGridBound* xGridIterFirstCell(xGrid* grid, float posx, float posz, int& grx, int& grz, xGridIterator& it);
void xGridGetCell(xGrid* grid, float posx, float posz, int& grx, int& grz);
xGridBound** xGridGetCell(xGrid* grid, xEnt* ent, int& grx, int& grz);
void xGridUpdate(xGrid* grid, xEnt* ent);
int xGridRemove(xGridBound* gridb);
int xGridAdd(xGrid* grid, xEnt* ent);
void xGridEmpty(xGrid* grid);
void xGridKill(xGrid* grid);
void xGridInit(xGrid* grid, xBox* bounds, unsigned short nx, unsigned short nz, unsigned char ingrid_id);
void xGridBoundInit(xGridBound* gridb, void* data);

// xGridCheckPosition__FP5xGridP5xVec3P7xQCDataPFP4xEntPv_iPv
// Start address: 0x304480
void xGridCheckPosition(xGrid* grid, xVec3* pos, xQCData* qcd, type_39 hitCB, void* cbdata)
{
	xGridIterator it;
	int px;
	int pz;
	xGridBound* cell;
	float clcenterx;
	float clcenterz;
	int i;
	int _x;
	int _z;
	type_18 offs;
	int k;
}

// xGridEntIsTooBig__FP5xGridPC4xEnt
// Start address: 0x304c40
int xGridEntIsTooBig(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	float maxr;
	xBBox* bbox;
	float rx;
	float ry;
	float rz;
	xBBox* bbox;
	float rx;
	float rz;
}

// xGridIterFirstCell__FP5xGridfffRiRiR13xGridIterator
// Start address: 0x304da0
xGridBound* xGridIterFirstCell(xGrid* grid, float posx, float posz, int& grx, int& grz, xGridIterator& it)
{
}

// xGridGetCell__FP5xGridfffRiRi
// Start address: 0x304f30
void xGridGetCell(xGrid* grid, float posx, float posz, int& grx, int& grz)
{
	float pgridx;
	float pgridz;
}

// xGridGetCell__FP5xGridPC4xEntRiRi
// Start address: 0x305030
xGridBound** xGridGetCell(xGrid* grid, xEnt* ent, int& grx, int& grz)
{
	xBound* bound;
	xVec3* center;
}

// xGridUpdate__FP5xGridP4xEnt
// Start address: 0x3051b0
void xGridUpdate(xGrid* grid, xEnt* ent)
{
	int dx;
	int dz;
}

// xGridRemove__FP10xGridBound
// Start address: 0x305280
int xGridRemove(xGridBound* gridb)
{
	xGridBound* cur;
	xGridBound** prev;
}

// xGridAdd__FP5xGridP4xEnt
// Start address: 0x305310
int xGridAdd(xGrid* grid, xEnt* ent)
{
	xBound* bound;
	xVec3* center;
	float maxr;
	xSphere* sph;
	xBBox* bbox;
	float rx;
	float ry;
	float rz;
	xBBox* bbox;
	float rx;
	float rz;
	float cgridx;
	float cgridz;
	int x;
	int z;
}

// xGridEmpty__FP5xGrid
// Start address: 0x305760
void xGridEmpty(xGrid* grid)
{
	xGridBound** head;
	xGridBound* curr;
	int x;
	int z;
	xGridBound* currnext;
	xGridBound* currnext;
}

// xGridKill__FP5xGrid
// Start address: 0x305860
void xGridKill(xGrid* grid)
{
}

// xGridInit__FP5xGridPC4xBoxUsUsUc
// Start address: 0x305890
void xGridInit(xGrid* grid, xBox* bounds, unsigned short nx, unsigned short nz, unsigned char ingrid_id)
{
	float gsizex;
	float gsizez;
}

// xGridBoundInit__FP10xGridBoundPv
// Start address: 0x305ae0
void xGridBoundInit(xGridBound* gridb, void* data)
{
}

