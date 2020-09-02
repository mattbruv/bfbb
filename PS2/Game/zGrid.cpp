typedef struct xBaseAsset;
typedef struct RwObjectHasFrame;
typedef struct xModelPool;
typedef struct xScene;
typedef struct xAnimFile;
typedef struct xPortalAsset;
typedef struct RwResEntry;
typedef struct xShadowSimpleCache;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct xEntCollis;
typedef struct rxHeapFreeBlock;
typedef struct RpGeometry;
typedef struct xAnimEffect;
typedef struct xEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpAtomic;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct zScene;
typedef struct xAnimTransitionList;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct RpWorld;
typedef struct RpLight;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntFrame;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RxPipelineNodeParam;
typedef struct xCollis;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xBound;
typedef struct xJSPHeader;
typedef struct xQuat;
typedef enum RpWorldRenderOrder;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterial;
typedef struct rxHeapBlockHeader;
typedef struct RpTriangle;
typedef struct xFFX;
typedef struct RwFrame;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct RxPipelineRequiresCluster;
typedef struct RpSector;
typedef struct xGrid;
typedef struct xModelBucket;
typedef struct xQCData;
typedef struct RpMeshHeader;
typedef struct xBBox;
typedef struct xEntShadow;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xModelInstance;
typedef struct xVec3;
typedef struct anim_coll_data;
typedef struct xLightKit;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xAnimTable;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xGridBound;
typedef struct xClumpCollBSPTree;
typedef struct zEnt;
typedef struct xMat4x3;
typedef struct xClumpCollBSPVertInfo;
typedef enum RxNodeDefEditable;
typedef struct xClumpCollBSPBranchNode;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct RwLLLink;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEnvAsset;
typedef struct _class_0;
typedef struct xBox;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct tri_data;
typedef enum RxClusterForcePresent;
typedef struct xLinkAsset;
typedef struct xCylinder;
typedef struct _zPortal;
typedef struct RxClusterDefinition;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef union _class_1;
typedef struct RwSphere;
typedef struct RpPolygon;
typedef struct RwTexDictionary;
typedef struct _class_2;
typedef struct RxOutputSpec;
typedef struct RpMaterialList;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xJSPNodeInfo;
typedef struct RwObject;
typedef struct xEntAsset;
typedef struct RxIoSpec;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxCluster;
typedef struct xEnv;
typedef struct _zEnv;
typedef struct xShadowSimplePoly;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef void(*type_0)(xEnt*, xScene*, float);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_4)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_5)(xEnt*, xVec3*);
typedef void(*type_6)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_7)(xEnt*);
typedef unsigned int(*type_8)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_9)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef unsigned int(*type_11)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_13)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_14)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_19)(xAnimPlay*, xAnimState*);
typedef int(*type_20)(RxNodeDefinition*);
typedef void(*type_21)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_22)(RxNodeDefinition*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_24)(RxPipelineNode*);
typedef RpWorldSector*(*type_25)(RpWorldSector*);
typedef xBase*(*type_28)(unsigned int);
typedef char*(*type_30)(xBase*);
typedef char*(*type_31)(unsigned int);
typedef unsigned int(*type_32)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_41)(RpClump*, void*);
typedef void(*type_42)(xMemPool*, void*);
typedef int(*type_43)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_50)(RwResEntry*);

typedef float type_2[16];
typedef RpLight* type_12[2];
typedef RwFrame* type_15[2];
typedef RwTexCoords* type_17[8];
typedef xVec3 type_18[4];
typedef unsigned char type_26[3];
typedef xCollis type_27[18];
typedef unsigned int type_29[25];
typedef float type_33[2];
typedef unsigned char type_34[3];
typedef unsigned int type_35[4];
typedef float type_36[4];
typedef float type_37[2];
typedef unsigned short type_38[3];
typedef unsigned char type_39[2];
typedef xAnimMultiFileEntry type_40[1];
typedef char type_44[32];
typedef unsigned int type_45[72];
typedef RwTexCoords* type_46[8];
typedef char type_47[4];
typedef char type_48[32];
typedef xBase* type_49[72];
typedef xVec3 type_51[3];
typedef unsigned short type_52[3];
typedef RxCluster type_53[1];

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_28 resolvID;
	type_30 base2Name;
	type_31 id2Name;
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
	type_39 NumAnims;
	void** RawData;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_50 destroyNotify;
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
	type_18 corner;
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
	type_27 colls;
	type_4 post;
	type_11 depenq;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_17 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_32 Callback;
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
	type_0 update;
	type_0 endUpdate;
	type_5 bupdate;
	type_6 move;
	type_7 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_13 transl;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_12 light;
	type_15 light_frame;
	int memlvl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_8 Conditional;
	type_8 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		unsigned int num_ents;
		unsigned int num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	unsigned int num_update_base;
	xBase** update_base;
	type_45 baseCount;
	type_49 baseList;
	_zEnv* zen;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_19 BeforeEnter;
	type_21 StateCallback;
	type_23 BeforeAnimMatrices;
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
	type_25 renderCallBack;
	RxPipeline* pipeline;
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
	type_41 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
		_class_2 tuv;
		tri_data tri;
	};
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_43 eventFunc;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_34 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xJSPHeader
{
	type_47 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xQuat
{
	xVec3 v;
	float s;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_35 pad;
};

struct RpTriangle
{
	type_52 vertIndex;
	short matIndex;
};

struct xFFX
{
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

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_40 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_44 name;
	type_48 mask;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpSector
{
	int type;
};

struct xGrid
{
	unsigned char ingrid_id;
	type_26 pad;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_37 radius;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_46 texCoords;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct anim_coll_data
{
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

struct rxReq
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct xEnvAsset : xBaseAsset
{
	unsigned int bspAssetID;
	unsigned int startCameraAssetID;
	unsigned int climateFlags;
	float climateStrengthMin;
	float climateStrengthMax;
	unsigned int bspLightKit;
	unsigned int objectLightKit;
	float padF1;
	unsigned int bspCollisionAssetID;
	unsigned int bspFXAssetID;
	unsigned int bspCameraAssetID;
	unsigned int bspMapperID;
	unsigned int bspMapperCollisionID;
	unsigned int bspMapperFXID;
	float loldHeight;
};

struct _class_0
{
	xVec3* verts;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_33 BilinearLerp;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_36 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_38 vertIndex;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_2
{
	float t;
	float u;
	float v;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
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
	type_42 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxNodeMethods
{
	type_16 nodeBody;
	type_20 nodeInit;
	type_22 nodeTerm;
	type_24 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_9 pipelineNodeConfig;
	type_14 configMsgHandler;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xShadowSimplePoly
{
	type_51 vert;
	xVec3 norm;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_53 clusters;
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

xGrid colls_grid;
xGrid colls_oso_grid;
xGrid npcs_grid;
int zGridInitted;
int gGridIterActive;

void zGridUpdateEnt(xEnt* ent);
void zGridExit();
void zGridInit(zScene* s);
void zGridReset(zScene* s);
void hack_flag_shadows(zScene* s);

// zGridUpdateEnt__FP4xEnt
// Start address: 0x306050
void zGridUpdateEnt(xEnt* ent)
{
	int oversize;
	xGrid* grid;
}

// zGridExit__FP6zScene
// Start address: 0x306200
void zGridExit()
{
}

// zGridInit__FP6zScene
// Start address: 0x306240
void zGridInit(zScene* s)
{
	xBox* ebox;
	float min_csize;
	xBox osobox;
}

// zGridReset__FP6zScene
// Start address: 0x306950
void zGridReset(zScene* s)
{
	unsigned int i;
	xBase* base;
	xEnt* ent;
}

// hack_flag_shadows__FP6zScene
// Start address: 0x306a60
void hack_flag_shadows(zScene* s)
{
	unsigned int* end_special_models;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	unsigned int* id;
	type_29 special_models;
	char @3381;
}

