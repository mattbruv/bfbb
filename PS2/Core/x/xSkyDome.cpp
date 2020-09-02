typedef struct RpMaterialList;
typedef struct RpAtomic;
typedef struct xAnimTransition;
typedef struct RwObjectHasFrame;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct RxPipelineNode;
typedef struct xModelPool;
typedef struct rxHeapFreeBlock;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimSingle;
typedef struct RxNodeDefinition;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpGeometry;
typedef struct xMat4x3;
typedef struct RxPipelineNodeParam;
typedef struct RxHeap;
typedef struct xBase;
typedef struct RwRGBA;
typedef struct SkyDomeInfo;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct xEntFrame;
typedef struct RxPipelineRequiresCluster;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xLinkAsset;
typedef struct xMemPool;
typedef struct xCollis;
typedef struct xVec3;
typedef struct xShadowSimplePoly;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef enum RxNodeDefEditable;
typedef struct xEntCollis;
typedef enum RxClusterValid;
typedef struct xAnimTransitionList;
typedef struct xRot;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct xFFX;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct anim_coll_data;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct _class_0;
typedef struct tri_data;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct _class_1;

typedef int(*type_0)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_6)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_7)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef unsigned int(*type_9)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_10)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_12)(xAnimPlay*, xAnimState*);
typedef int(*type_13)(RxNodeDefinition*);
typedef unsigned int(*type_14)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_15)(RxNodeDefinition*);
typedef void(*type_17)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_18)(unsigned int);
typedef char*(*type_20)(xBase*);
typedef char*(*type_21)(unsigned int);
typedef RpAtomic*(*type_23)(RpAtomic*);
typedef void(*type_24)(xEnt*, xScene*, float);
typedef void(*type_26)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_27)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_29)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_30)(xEnt*);
typedef unsigned int(*type_31)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_32)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_36)(xEnt*);
typedef void(*type_39)(xMemPool*, void*);
typedef void(*type_42)(RwResEntry*);

typedef float type_1[2];
typedef unsigned char type_4[2];
typedef xAnimMultiFileEntry type_5[1];
typedef SkyDomeInfo type_16[8];
typedef xVec3 type_19[3];
typedef unsigned short type_22[3];
typedef float type_25[16];
typedef RwTexCoords* type_33[8];
typedef xVec3 type_34[4];
typedef unsigned int type_35[4];
typedef unsigned int type_37[4096];
typedef xCollis type_38[18];
typedef char type_40[32];
typedef char type_41[32];
typedef float type_43[2];
typedef unsigned char type_44[3];
typedef RxCluster type_45[1];
typedef float type_46[4];

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
	type_23 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_29 Conditional;
	type_29 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
	type_12 BeforeEnter;
	type_6 StateCallback;
	type_17 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_5 Files;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_24 update;
	type_24 endUpdate;
	type_27 bupdate;
	type_28 move;
	type_30 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_32 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_43 BilinearLerp;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_8 callback;
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
	type_33 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_10 eventFunc;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct SkyDomeInfo
{
	xEnt* ent;
	int sortorder;
	int lockY;
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
	type_17 BeforeAnimMatrices;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_14 Callback;
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
	type_35 pad;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_46 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_39 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xShadowSimplePoly
{
	type_19 vert;
	xVec3 norm;
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

struct RpTriangle
{
	type_22 vertIndex;
	short matIndex;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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
	type_25 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_4 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_42 destroyNotify;
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
	type_18 resolvID;
	type_20 base2Name;
	type_21 id2Name;
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
	type_34 corner;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_38 colls;
	type_26 post;
	type_31 depenq;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xRot
{
	xVec3 axis;
	float angle;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_44 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xSurface
{
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

struct xFFX
{
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_1 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct anim_coll_data
{
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
	type_13 nodeInit;
	type_15 nodeTerm;
	type_0 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_7 pipelineNodeConfig;
	type_9 configMsgHandler;
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
	type_45 clusters;
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

type_16 sSkyList;
int sSkyCount;
type_36 xSkyDome_EmptyRender;
type_37 ourGlobals;

void xSkyDome_Render();
void xSkyDome_AddEntity(xEnt* ent, int sortorder, int lockY);
void xSkyDome_Setup();
void xSkyDome_EmptyRender();

// xSkyDome_Render__Fv
// Start address: 0x2ad7e0
void xSkyDome_Render()
{
	RwMatrixTag* cammat;
	int i;
	xEnt* ent;
}

// xSkyDome_AddEntity__FP4xEntii
// Start address: 0x2ad940
void xSkyDome_AddEntity(xEnt* ent, int sortorder, int lockY)
{
	int i;
	int j;
}

// xSkyDome_Setup__Fv
// Start address: 0x2adab0
void xSkyDome_Setup()
{
}

// xSkyDome_EmptyRender__FP4xEnt
// Start address: 0x2adac0
void xSkyDome_EmptyRender()
{
}

