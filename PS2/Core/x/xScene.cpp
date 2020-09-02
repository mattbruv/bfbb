typedef struct xScene;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct xModelInstance;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNode;
typedef struct RwV3d;
typedef struct xAnimPlay;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xQuat;
typedef struct xEnt;
typedef struct xAnimTransition;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xShadowSimpleCache;
typedef struct _class_0;
typedef struct RpMaterialList;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPTriangle;
typedef struct RpMaterial;
typedef struct RpCollisionTriangle;
typedef struct xRay3;
typedef struct RpAtomic;
typedef struct RpLight;
typedef struct xQCData;
typedef struct RxPipeline;
typedef struct xEntFrame;
typedef union _class_1;
typedef struct xModelPool;
typedef struct xAnimEffect;
typedef struct xCollis;
typedef struct RpClump;
typedef struct xBound;
typedef struct RpGeometry;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RpWorldSector;
typedef struct RwMatrixTag;
typedef struct xEnv;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RpIntersection;
typedef struct RwRaster;
typedef struct RpMorphTarget;
typedef struct xFFX;
typedef enum RxClusterValidityReq;
typedef struct xGrid;
typedef struct iEnv;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xJSPNodeInfo;
typedef struct xMemPool;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct xEntShadow;
typedef enum RxClusterValid;
typedef struct xBox;
typedef struct xNearFloorPoly;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct rxHeapFreeBlock;
typedef struct anim_coll_data;
typedef struct xRot;
typedef struct cb_ray_hits_ent;
typedef struct xClumpCollBSPBranchNode;
typedef enum rxEmbeddedPacketState;
typedef struct xLinkAsset;
typedef struct xSphere;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef struct xBase;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xJSPHeader;
typedef struct xAnimTransitionList;
typedef struct RxClusterDefinition;
typedef struct xQCControl;
typedef struct xClumpCollBSPTree;
typedef struct RwSphere;
typedef struct xLine3;
typedef struct RwTexDictionary;
typedef enum RpIntersectType;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef enum RpWorldRenderOrder;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwTexture;
typedef struct xSurface;
typedef struct RxIoSpec;
typedef struct RpSector;
typedef struct RpWorld;
typedef struct RwLine;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct xModelBucket;
typedef struct RxPipelineCluster;
typedef union RpIntersectData;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct xEntAsset;
typedef struct xAnimMultiFileEntry;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xBaseAsset;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct xGridIterator;
typedef struct tri_data;
typedef struct xShadowSimplePoly;
typedef struct _class_2;
typedef struct xClumpCollBSPVertInfo;
typedef struct xBBox;
typedef struct RpInterpolator;

typedef void(*type_4)(xEnt*, xScene*, float);
typedef unsigned int(*type_6)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_9)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_10)(xEnt*, xVec3*);
typedef int(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_13)(xEnt*, xScene*, float, xEntFrame*);
typedef int(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(xEnt*);
typedef void(*type_16)(xEnt*);
typedef void(*type_17)(RxNodeDefinition*);
typedef xEnt*(*type_18)(xEnt*, xScene*, void*);
typedef int(*type_19)(RxPipelineNode*);
typedef void(*type_20)(RxPipelineNode*);
typedef unsigned int(*type_21)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_22)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef RpClump*(*type_25)(RpClump*, void*);
typedef unsigned int(*type_26)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpCollisionTriangle*(*type_27)(RpIntersection*, RpCollisionTriangle*, float, void*);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_31)(xEnt*, void*);
typedef xBase*(*type_36)(unsigned int);
typedef RpAtomic*(*type_37)(RpAtomic*);
typedef unsigned int(*type_39)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_41)(xBase*);
typedef void(*type_43)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef char*(*type_45)(unsigned int);
typedef int(*type_48)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_50)(xMemPool*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef void(*type_56)(RwResEntry*);
typedef void(*type_57)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RpCollisionTriangle*(*type_58)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef void(*type_61)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RwObjectHasFrame*(*type_62)(RwObjectHasFrame*);

typedef float type_0[3];
typedef RwV3d* type_1[3];
typedef unsigned char type_2[2];
typedef float type_3[3];
typedef xAnimMultiFileEntry type_5[1];
typedef float type_8[16];
typedef unsigned short type_12[3];
typedef xVec3 type_28[4];
typedef RwTexCoords* type_30[8];
typedef unsigned char type_32[3];
typedef xVec3 type_33[3];
typedef unsigned short type_34[3];
typedef xCollis type_35[18];
typedef char type_38[4];
typedef xVec3 type_40[3];
typedef xVec3 type_42[4];
typedef unsigned int type_44[4];
typedef float type_46[4];
typedef RwTexCoords* type_47[8];
typedef float type_49[2];
typedef RpLight* type_52[2];
typedef char type_53[32];
typedef RwFrame* type_54[2];
typedef char type_55[32];
typedef RxCluster type_59[1];
typedef xVec3 type_60[3];
typedef float type_63[2];
typedef xVec3 type_64[3];
typedef unsigned char type_65[3];

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
	type_36 resolvID;
	type_41 base2Name;
	type_45 id2Name;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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
	type_24 BeforeEnter;
	type_7 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_5 Files;
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
	type_29 BeforeAnimMatrices;
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
	type_8 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xQuat
{
	xVec3 v;
	float s;
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
	type_4 update;
	type_4 endUpdate;
	type_10 bupdate;
	type_13 move;
	type_16 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_23 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_39 Conditional;
	type_39 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_63 BilinearLerp;
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
	type_12 vertIndex;
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
	type_44 pad;
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
	type_28 corner;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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
	type_35 colls;
	type_9 post;
	type_21 depenq;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int index;
	type_1 vertices;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
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
	type_37 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
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

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_26 Callback;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_25 callback;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_32 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_47 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_30 texCoords;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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

struct xFFX
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xGrid
{
	unsigned char ingrid_id;
	type_65 pad;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_52 light;
	type_54 light_frame;
	int memlvl;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_50 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_49 radius;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xNearFloorPoly
{
	xBox box;
	xVec3 center;
	xVec3 facingVec;
	float facingDot;
	float floorDot;
	type_33 vert;
	float neardist;
	xVec3 nearpt;
	int nearvert;
	int nearedge;
	unsigned int oid;
	void* optr;
	xModelInstance* mptr;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_56 destroyNotify;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct anim_coll_data
{
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct cb_ray_hits_ent
{
	xRay3& ray;
	xCollis& coll;
	unsigned char chkby;
	unsigned char collType;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xSphere
{
	xVec3 center;
	float r;
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
	type_2 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_34 vertIndex;
	short matIndex;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_48 eventFunc;
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

struct xJSPHeader
{
	type_38 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xLine3
{
	xVec3 p1;
	xVec3 p2;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_53 name;
	type_55 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xSurface
{
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RpSector
{
	int type;
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
	type_51 renderCallBack;
	RxPipeline* pipeline;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_14 nodeInit;
	type_17 nodeTerm;
	type_19 pipelineNodeInit;
	type_20 pipelineNodeTerm;
	type_22 pipelineNodeConfig;
	type_6 configMsgHandler;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_59 clusters;
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
	type_62 sync;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	unsigned int delfound;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct xShadowSimplePoly
{
	type_64 vert;
	xVec3 norm;
};

struct _class_2
{
	xVec3* verts;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

char* g_xScene_FMT;
xScene* g_xSceneCur;
type_15 cb_seethru_func;
unsigned char cb_collType;
xMat4x3* sBoxTestMat;
unsigned char sUseJSP;
void* sTestOPtr;
xModelInstance* sTestMPtr;
xBound sNearestBound;
unsigned char sNearestChk;
unsigned char sNearestCollType;
RpIntersection sSphereIsx;
type_58 sectorNearestFloorCB;
type_31 gridNearestFloorCB;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
type_27 boxNearestFloorCB;
xGrid npcs_grid;
type_61 xRayHitsEnt;
type_57 xRayHitsTikiLandableEnt;
int gGridIterActive;
unsigned int gActiveHeap;

unsigned int xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, unsigned char collType, unsigned char chk);
int gridNearestFloorCB(xEnt* ent, void* cbdata);
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float distance, void* data);
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float distance, void* data);
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data);
unsigned int Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox);
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, unsigned char collType, unsigned char chk);
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll);
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata);
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, type_43 rentcb, xQCData* qcr, void* data);
void xSceneForAllNPCs(xScene* sc, type_18 func, void* data);
void xSceneForAllDynamics(xScene* sc, type_18 func, void* data);
void xSceneForAllStatics(xScene* sc, type_18 func, void* data);
void xSceneForAllEnts(xScene* sc, type_18 func, void* data);
char* xSceneID2Name(xScene* sc, unsigned int id);
xBase* xSceneResolvID(xScene* sc, unsigned int id);
void xSceneAddEnt(xScene* sc, xEnt* ent);
void xSceneSetup(xScene* sc);
void xSceneLoad();
void xSceneSave();
void xSceneExit();
void xSceneInit(xScene* sc, unsigned short num_trigs, unsigned short num_stats, unsigned short num_dyns, unsigned short num_npcs);

// xSceneNearestFloorPoly__FP6xSceneP14xNearFloorPolyUcUc
// Start address: 0x1fd4a0
unsigned int xSceneNearestFloorPoly(xScene* sc, xNearFloorPoly* nfpoly, unsigned char collType, unsigned char chk)
{
	RpIntersection isx;
}

// gridNearestFloorCB__FP4xEntPv
// Start address: 0x1fd810
int gridNearestFloorCB(xEnt* ent, void* cbdata)
{
	xNearFloorPoly* nfpoly;
	xCollis tempC;
}

// sectorNearestFloorCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1fd940
RpCollisionTriangle* sectorNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float distance, void* data)
{
}

// boxNearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fd950
RpCollisionTriangle* boxNearestFloorCB(RpIntersection* intersection, RpCollisionTriangle* collTriangle, float distance, void* data)
{
	xNearFloorPoly* nfpoly;
	type_40 xformVert;
}

// nearestFloorCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1fdc40
RpCollisionTriangle* nearestFloorCB(RpCollisionTriangle* collTriangle, void* data)
{
	xNearFloorPoly* nfpoly;
	float currnear;
	int currvert;
	int curredge;
	type_42 xformVert;
	xVec3 xformNorm;
	unsigned int potentialOID;
	int i;
	type_0 pdx;
	type_3 pdz;
	float numer;
	float denom;
	float t;
	float testdist2;
	float neardx;
	float neardz;
}

// Mgc_TriBoxTest__FP5xVec3P4xBox
// Start address: 0x1fe420
unsigned int Mgc_TriBoxTest(xVec3* apkTri, xBox* rkBox)
{
	float fMin0;
	float fMax0;
	float fMin1;
	float fMax1;
	xVec3 kD;
	type_60 akE;
	xVec3 baxis;
	unsigned int andflag;
	unsigned int curflag;
	int i;
	int i0;
	int i1;
}

// xRayHitsSceneFlags__FP6xSceneP5xRay3P7xCollisUcUc
// Start address: 0x1fe910
void xRayHitsSceneFlags(xScene* sc, xRay3* r, xCollis* coll, unsigned char collType, unsigned char chk)
{
	cb_ray_hits_ent cb;
	xBound bound;
	xCollis temp_coll;
}

// xRayHitsScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fecf0
void xRayHitsScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
}

// xRayHitsTikiLandableScene__FP6xSceneP5xRay3P7xCollis
// Start address: 0x1fee30
void xRayHitsTikiLandableScene(xScene* sc, xRay3* r, xCollis* coll)
{
	xQCData q;
	xCollis c;
}

// xRayHitsEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1fef70
void xRayHitsEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
}

// xRayHitsTikiLandableEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1ff020
void xRayHitsTikiLandableEnt(xRay3* r, xQCData* qcr, xEnt* ent, void* colldata)
{
	xCollis* coll;
	xCollis c;
}

// xRayHitsGrid__FP5xGridP6xSceneP5xRay3PFP6xSceneP5xRay3P7xQCDataP4xEntPv_vP7xQCDataPv
// Start address: 0x1ff120
void xRayHitsGrid(xGrid* grid, xScene* sc, xRay3* r, type_43 rentcb, xQCData* qcr, void* data)
{
	xLine3 ln;
	xGridIterator it;
	xVec3 delta;
	float len;
	int sclgx;
	int sclgz;
	int eclgx;
	int eclgz;
	float sclcx;
	float sclcz;
	float eclcx;
	float eclcz;
	float halfclx;
	float halfclz;
	float quatrclx;
	float quatrclz;
	int sz;
	int ez;
	int x;
	int z;
	float dxdz;
	float cz;
	float lz;
	float rz;
	float lx;
	float rx;
	float ly;
	float ry;
	int aclgx;
	int aclgz;
	int bclgx;
	int bclgz;
	float aclcx;
	float aclcz;
	float bclcx;
	float bclcz;
	int ax;
	int bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	float cz;
	float lz;
	float rz;
	float lx;
	float rx;
	float ly;
	float ry;
	int aclgx;
	int aclgz;
	int bclgx;
	int bclgz;
	float aclcx;
	float aclcz;
	float bclcx;
	float bclcz;
	int ax;
	int bx;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
	xGridBound* cell;
	xBound* cellbound;
}

// xSceneForAllNPCs__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2000d0
void xSceneForAllNPCs(xScene* sc, type_18 func, void* data)
{
	unsigned short i;
}

// xSceneForAllDynamics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200170
void xSceneForAllDynamics(xScene* sc, type_18 func, void* data)
{
	unsigned short i;
}

// xSceneForAllStatics__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x200210
void xSceneForAllStatics(xScene* sc, type_18 func, void* data)
{
	unsigned short i;
}

// xSceneForAllEnts__FP6xScenePFP4xEntP6xScenePv_P4xEntPv
// Start address: 0x2002b0
void xSceneForAllEnts(xScene* sc, type_18 func, void* data)
{
	unsigned short i;
}

// xSceneID2Name__FP6xSceneUi
// Start address: 0x200350
char* xSceneID2Name(xScene* sc, unsigned int id)
{
}

// xSceneResolvID__FP6xSceneUi
// Start address: 0x200390
xBase* xSceneResolvID(xScene* sc, unsigned int id)
{
}

// xSceneAddEnt__FP6xSceneP4xEnt
// Start address: 0x2003d0
void xSceneAddEnt(xScene* sc, xEnt* ent)
{
}

// xSceneSetup__FP6xScene
// Start address: 0x2004b0
void xSceneSetup(xScene* sc)
{
}

// xSceneLoad__FP6xSceneP7xSerial
// Start address: 0x2004c0
void xSceneLoad()
{
}

// xSceneSave__FP6xSceneP7xSerial
// Start address: 0x2004d0
void xSceneSave()
{
}

// xSceneExit__FP6xScene
// Start address: 0x2004e0
void xSceneExit()
{
}

// xSceneInit__FP6xSceneUsUsUsUs
// Start address: 0x2004f0
void xSceneInit(xScene* sc, unsigned short num_trigs, unsigned short num_stats, unsigned short num_dyns, unsigned short num_npcs)
{
}

