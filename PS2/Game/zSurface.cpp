typedef struct zSurfaceProps;
typedef struct xAnimPlay;
typedef struct RwFrame;
typedef struct RxHeap;
typedef struct xLightKit;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xLightKitLight;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct xSurface;
typedef struct xEnt;
typedef struct xQuat;
typedef struct _class_0;
typedef struct xScene;
typedef struct xLinkAsset;
typedef struct xShadowSimpleCache;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct RxPipelineNodeTopSortData;
typedef struct xEntCollis;
typedef struct rxHeapBlockHeader;
typedef struct zSurfacePropUVFX;
typedef struct RpAtomic;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct xCollis;
typedef struct RpLight;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xEntFrame;
typedef struct xBound;
typedef struct xAnimEffect;
typedef struct xGroupAsset;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xBaseAsset;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpMorphTarget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPTree;
typedef struct xBase;
typedef struct xQCData;
typedef struct xFFX;
typedef struct zMaterialMapAsset;
typedef struct rxReq;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xClumpCollBSPVertInfo;
typedef struct zMaterialMapEntry;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMemPool;
typedef struct xClumpCollBSPTriangle;
typedef struct xEntShadow;
typedef struct RpMeshHeader;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct RwResEntry;
typedef enum RxClusterValid;
typedef struct anim_coll_data;
typedef struct zSurfTextureAnim;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xAnimFile;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xAnimTransitionList;
typedef struct xGroup;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xSerial;
typedef union _class_1;
typedef struct xBox;
typedef struct zSurfacePropTexAnim;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xAnimMultiFile;
typedef struct iEnv;
typedef struct RwTexDictionary;
typedef struct zSurfAssetBase;
typedef struct RxOutputSpec;
typedef struct xJSPNodeInfo;
typedef enum RpWorldRenderOrder;
typedef struct xEntAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwTexture;
typedef struct zSurfColorFX;
typedef struct RpSector;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RxNodeMethods;
typedef struct xJSPHeader;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct RpWorld;
typedef struct xEnv;
typedef struct zSurfUVFX;
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
typedef struct zSurfMatFX;
typedef struct _class_2;
typedef struct xShadowSimplePoly;
typedef struct RpInterpolator;

typedef void(*type_4)(xEnt*, xScene*, float);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_7)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_8)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_9)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_10)(xEnt*, xVec3*);
typedef void(*type_12)(xEnt*, xScene*, float, xEntFrame*);
typedef int(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_14)(xEnt*);
typedef int(*type_15)(RxNodeDefinition*);
typedef void(*type_16)(RxNodeDefinition*);
typedef int(*type_17)(RxPipelineNode*);
typedef unsigned int(*type_18)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_19)(RxPipelineNode*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_23)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_24)(RpClump*, void*);
typedef unsigned int(*type_25)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_27)(unsigned int);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int);
typedef char*(*type_32)(xBase*);
typedef char*(*type_34)(unsigned int);
typedef RpAtomic*(*type_37)(RpAtomic*);
typedef unsigned int(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_40)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpWorldSector*(*type_44)(RpWorldSector*);
typedef void(*type_46)(xMemPool*, void*);
typedef void(*type_49)(RwResEntry*);
typedef RwObjectHasFrame*(*type_55)(RwObjectHasFrame*);

typedef RwFrame* type_0[2];
typedef unsigned char type_1[2];
typedef xAnimMultiFileEntry type_2[1];
typedef char type_3[16];
typedef float type_6[16];
typedef unsigned short type_11[3];
typedef zSurfTextureAnim type_22[2];
typedef zSurfUVFX type_26[2];
typedef xVec3 type_28[4];
typedef unsigned char type_30[3];
typedef RwTexCoords* type_31[8];
typedef unsigned char type_33[3];
typedef unsigned short type_35[3];
typedef xCollis type_36[18];
typedef unsigned int type_39[4];
typedef RwTexCoords* type_41[8];
typedef float type_42[2];
typedef float type_43[2];
typedef char type_45[4];
typedef char type_47[32];
typedef char type_48[32];
typedef float type_50[4];
typedef unsigned char type_51[3];
typedef zSurfacePropTexAnim type_52[2];
typedef RxCluster type_53[1];
typedef zSurfacePropUVFX type_54[2];
typedef float type_56[2];
typedef xVec3 type_57[3];
typedef char type_58[16];
typedef RpLight* type_59[2];
typedef zMaterialMapAsset* type_60[1];

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	unsigned int texanim_flags;
	type_52 texanim;
	unsigned int uvfx_flags;
	type_54 uvfx;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_20 BeforeEnter;
	type_5 StateCallback;
	type_29 BeforeAnimMatrices;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_6 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
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
	type_56 BilinearLerp;
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
	type_11 vertIndex;
};

struct xSurface : xBase
{
	unsigned int idx;
	unsigned int type;
	union
	{
		unsigned int mat_idx;
		xEnt* ent;
		void* obj;
	};
	float friction;
	unsigned char state;
	type_33 pad;
	void* moprops;
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
	type_12 move;
	type_14 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_21 transl;
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

struct _class_0
{
	float t;
	float u;
	float v;
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
	type_27 resolvID;
	type_32 base2Name;
	type_34 id2Name;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_50 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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
	type_36 colls;
	type_8 post;
	type_18 depenq;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_39 pad;
};

struct zSurfacePropUVFX
{
	int mode;
	float rot;
	float rot_spd;
	type_42 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_51 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_25 Callback;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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
	type_24 callback;
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
	type_41 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_31 texCoords;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
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

struct xFFX
{
};

struct zMaterialMapAsset
{
	unsigned int id;
	unsigned int count;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct zMaterialMapEntry
{
	unsigned int surfaceAssetID;
	unsigned int materialIndex;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_46 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_43 radius;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_49 destroyNotify;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct anim_coll_data
{
};

struct zSurfTextureAnim
{
	unsigned short pad;
	unsigned short mode;
	unsigned int group;
	float speed;
};

struct xRot
{
	xVec3 axis;
	float angle;
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
	type_1 NumAnims;
	void** RawData;
};

struct RpTriangle
{
	type_35 vertIndex;
	short matIndex;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct xSerial
{
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct zSurfacePropTexAnim
{
	unsigned short mode;
	float speed;
	float frame;
	unsigned int group;
	int group_idx;
	xBase* group_ptr;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_2 Files;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_59 light;
	type_0 light_frame;
	int memlvl;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zSurfAssetBase : xBaseAsset
{
	unsigned char game_damage_type;
	unsigned char game_sticky;
	unsigned char game_damage_flags;
	unsigned char surf_type;
	unsigned char phys_pad;
	unsigned char sld_start;
	unsigned char sld_stop;
	unsigned char phys_flags;
	float friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	unsigned int texture_anim_flags;
	type_22 texture_anim;
	unsigned int uvfx_flags;
	type_26 uvfx;
	unsigned char on;
	type_30 surf_pad;
	float oob_delay;
	float walljump_scale_xz;
	float walljump_scale_y;
	float damage_timer;
	float damage_bounce;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_47 name;
	type_48 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct zSurfColorFX
{
	unsigned short flags;
	unsigned short mode;
	float speed;
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

struct RxNodeMethods
{
	type_13 nodeBody;
	type_15 nodeInit;
	type_16 nodeTerm;
	type_17 pipelineNodeInit;
	type_19 pipelineNodeTerm;
	type_23 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct xJSPHeader
{
	type_45 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_44 renderCallBack;
	RxPipeline* pipeline;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zSurfUVFX
{
	int mode;
	float rot;
	float rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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
	type_53 clusters;
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
	type_55 sync;
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

struct zSurfMatFX
{
	unsigned int flags;
	unsigned int bumpmapID;
	unsigned int envmapID;
	float shininess;
	float bumpiness;
	unsigned int dualmapID;
};

struct _class_2
{
	xVec3* verts;
};

struct xShadowSimplePoly
{
	type_57 vert;
	xVec3 norm;
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

type_58 buffer;
type_3 buffer;
zSurfaceProps* zsps;
int sMapperCount;
type_60 sMapper;
xSurface sDef_surf;
zSurfaceProps sDef_surf_props;
zSurfAssetBase sDef_surf_asset;
unsigned int gFrameCount;
type_40 zSurfaceEventCB;
unsigned int gActiveHeap;

xSurface& zSurfaceGetDefault();
void zSurfaceGetName(int type, char* buffer);
int zSurfaceEventCB(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget);
void zSurfaceUpdate(xBase* to, float dt);
void zSurfaceSetup(xSurface* s);
void zSurfaceLoad(xSurface* ent, xSerial* s);
void zSurfaceSave(xSurface* ent, xSerial* s);
float zSurfaceGetDamping(xSurface* surf, float min_vel);
int zSurfaceGetSlickness(xSurface* surf);
float zSurfaceGetOutOfBoundsDelay(xSurface& s);
float zSurfaceGetFriction(xSurface* surf);
unsigned int zSurfaceGetStandOn(xSurface* surf);
unsigned int zSurfaceGetSticky(xSurface* surf);
unsigned int zSurfaceGetDamagePassthrough(xSurface* surf);
int zSurfaceGetDamageType(xSurface* surf);
unsigned int zSurfaceGetMatchOrient(xSurface* surf);
float zSurfaceGetSlideStopAngle(xSurface* surf);
float zSurfaceGetSlideStartAngle(xSurface* surf);
unsigned char zSurfaceOutOfBounds(xSurface& s);
unsigned int zSurfaceGetStep(xSurface* surf);
unsigned int zSurfaceGetSlide(xSurface* surf);
xSurface* zSurfaceGetSurface(xCollis* coll);
xSurface* zSurfaceGetSurface(unsigned int mat_id);
void zSurfaceExit();
void zSurfaceRegisterMapper(unsigned int assetId);
void zSurfaceInit();

// zSurfaceGetDefault__Fv
// Start address: 0x19c9a0
xSurface& zSurfaceGetDefault()
{
}

// zSurfaceGetName__FiPc
// Start address: 0x19c9b0
void zSurfaceGetName(int type, char* buffer)
{
}

// zSurfaceEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19cc10
int zSurfaceEventCB(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
	xSurface* t;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
	zSurfaceProps* p;
}

// zSurfaceUpdate__FP5xBaseP6xScenef
// Start address: 0x19cf70
void zSurfaceUpdate(xBase* to, float dt)
{
	int j;
	zSurfaceProps* moprops;
	zSurfacePropUVFX& sfx;
	float uTime;
	int uTimeInt;
	float vTime;
	int vTimeInt;
	xGroup* g;
	int max;
}

// zSurfaceSetup__FP8xSurface
// Start address: 0x19d760
void zSurfaceSetup(xSurface* s)
{
	zSurfaceProps* pp;
	int i;
}

// zSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x19d7d0
void zSurfaceLoad(xSurface* ent, xSerial* s)
{
}

// zSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x19d7e0
void zSurfaceSave(xSurface* ent, xSerial* s)
{
}

// zSurfaceGetDamping__FPC8xSurfacef
// Start address: 0x19d7f0
float zSurfaceGetDamping(xSurface* surf, float min_vel)
{
}

// zSurfaceGetSlickness__FPC8xSurface
// Start address: 0x19d800
int zSurfaceGetSlickness(xSurface* surf)
{
}

// zSurfaceGetOutOfBoundsDelay__FRC8xSurface
// Start address: 0x19d830
float zSurfaceGetOutOfBoundsDelay(xSurface& s)
{
}

// zSurfaceGetFriction__FPC8xSurface
// Start address: 0x19d860
float zSurfaceGetFriction(xSurface* surf)
{
}

// zSurfaceGetStandOn__FPC8xSurface
// Start address: 0x19d870
unsigned int zSurfaceGetStandOn(xSurface* surf)
{
}

// zSurfaceGetSticky__FPC8xSurface
// Start address: 0x19d8b0
unsigned int zSurfaceGetSticky(xSurface* surf)
{
}

// zSurfaceGetDamagePassthrough__FPC8xSurface
// Start address: 0x19d8e0
unsigned int zSurfaceGetDamagePassthrough(xSurface* surf)
{
}

// zSurfaceGetDamageType__FPC8xSurface
// Start address: 0x19d910
int zSurfaceGetDamageType(xSurface* surf)
{
}

// zSurfaceGetMatchOrient__FPC8xSurface
// Start address: 0x19d940
unsigned int zSurfaceGetMatchOrient(xSurface* surf)
{
}

// zSurfaceGetSlideStopAngle__FPC8xSurface
// Start address: 0x19d970
float zSurfaceGetSlideStopAngle(xSurface* surf)
{
}

// zSurfaceGetSlideStartAngle__FPC8xSurface
// Start address: 0x19da00
float zSurfaceGetSlideStartAngle(xSurface* surf)
{
}

// zSurfaceOutOfBounds__FRC8xSurface
// Start address: 0x19da90
unsigned char zSurfaceOutOfBounds(xSurface& s)
{
}

// zSurfaceGetStep__FPC8xSurface
// Start address: 0x19dac0
unsigned int zSurfaceGetStep(xSurface* surf)
{
}

// zSurfaceGetSlide__FPC8xSurface
// Start address: 0x19daf0
unsigned int zSurfaceGetSlide(xSurface* surf)
{
}

// zSurfaceGetSurface__FPC7xCollis
// Start address: 0x19db20
xSurface* zSurfaceGetSurface(xCollis* coll)
{
	xSurface* surf;
}

// zSurfaceGetSurface__FUi
// Start address: 0x19db80
xSurface* zSurfaceGetSurface(unsigned int mat_id)
{
	int map;
	zMaterialMapAsset* mapper;
	unsigned short i;
	zMaterialMapEntry* entry;
	unsigned short nsurfs;
	unsigned short j;
	xSurface* surf;
}

// zSurfaceExit__Fv
// Start address: 0x19dcb0
void zSurfaceExit()
{
}

// zSurfaceRegisterMapper__FUi
// Start address: 0x19dcd0
void zSurfaceRegisterMapper(unsigned int assetId)
{
}

// zSurfaceInit__Fv
// Start address: 0x19dd30
void zSurfaceInit()
{
	unsigned int size;
	unsigned short nsurfs;
	unsigned short i;
	zSurfAssetBase* asset;
	xSurface* surf;
	zSurfaceProps* moprops;
	int j;
}

