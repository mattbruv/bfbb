typedef struct RxPipelineNode;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xEnt;
typedef struct xEntFrame;
typedef struct RwObjectHasFrame;
typedef struct xAnimState;
typedef struct iEnv;
typedef struct RpClump;
typedef struct xScene;
typedef struct xEntCollis;
typedef struct rxHeapFreeBlock;
typedef struct xCollis;
typedef struct zEntTrigger;
typedef struct RpWorld;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct xAnimTable;
typedef struct xBound;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RpWorldRenderOrder;
typedef struct xFFX;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpMaterial;
typedef struct RxPipelineNodeParam;
typedef struct xEntAsset;
typedef struct xJSPHeader;
typedef struct xLightKitLight;
typedef struct RpTriangle;
typedef struct RpLight;
typedef struct RxHeap;
typedef struct xSurface;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xQuat;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xShadowSimpleCache;
typedef struct xModelInstance;
typedef struct xQCData;
typedef struct RwFrame;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct RwV3d;
typedef struct RpMeshHeader;
typedef struct xEntShadow;
typedef struct rxHeapBlockHeader;
typedef struct RwResEntry;
typedef struct xVec3;
typedef struct xSerial;
typedef struct RpWorldSector;
typedef struct anim_coll_data;
typedef struct RpMorphTarget;
typedef struct RxPipelineRequiresCluster;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct RwSurfaceProperties;
typedef struct xGridBound;
typedef struct RwMatrixTag;
typedef struct xBase;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xClumpCollBSPTree;
typedef enum RxClusterValidityReq;
typedef struct xMat4x3;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwLLLink;
typedef struct xClumpCollBSPBranchNode;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xClumpCollBSPTriangle;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct xRot;
typedef struct xTriggerAsset;
typedef struct xIsect;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct xLinkAsset;
typedef struct tri_data;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpInterpolator;
typedef enum RxClusterForcePresent;
typedef struct xAnimMultiFileBase;
typedef struct xCylinder;
typedef struct xAnimEffect;
typedef struct xBox;
typedef union _class_1;
typedef struct RxClusterDefinition;
typedef struct RpPolygon;
typedef struct _class_2;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct RwSphere;
typedef struct xModelPool;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xJSPNodeInfo;
typedef struct RpGeometry;
typedef struct RxClusterRef;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xEnv;
typedef struct xShadowSimplePoly;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xBaseAsset;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef int(*type_0)(RxPipelineNode*);
typedef void(*type_1)(xEnt*, xScene*, float, xEntFrame*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef unsigned int(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_4)(RxPipelineNode*);
typedef unsigned int(*type_5)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef RpAtomic*(*type_6)(RpAtomic*);
typedef void(*type_7)(xEnt*, xScene*, float);
typedef void(*type_8)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_9)(zEntTrigger*, xScene*, float);
typedef int(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(xEnt*);
typedef void(*type_16)(xAnimPlay*, xAnimState*);
typedef void(*type_17)(xAnimState*, xAnimSingle*, void*);
typedef unsigned int(*type_18)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_19)(xEnt*, xVec3*);
typedef void(*type_20)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_21)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_22)(RxNodeDefinition*);
typedef RpWorldSector*(*type_23)(RpWorldSector*);
typedef void(*type_25)(RxNodeDefinition*);
typedef void(*type_28)(xEnt*, xScene*, float, xEntCollis*);
typedef xBase*(*type_29)(unsigned int);
typedef int(*type_30)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef char*(*type_31)(xBase*);
typedef char*(*type_32)(unsigned int);
typedef unsigned int(*type_33)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_42)(RpClump*, void*);
typedef int(*type_43)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_46)(xMemPool*, void*);
typedef void(*type_51)(RwResEntry*);

typedef xVec3 type_12[4];
typedef RpLight* type_13[2];
typedef RwTexCoords* type_14[8];
typedef RwFrame* type_15[2];
typedef char type_24[16];
typedef xCollis type_26[18];
typedef char type_27[16];
typedef float type_34[2];
typedef unsigned char type_35[3];
typedef float type_36[2];
typedef float type_37[4];
typedef unsigned int type_38[4];
typedef unsigned short type_39[3];
typedef unsigned char type_40[2];
typedef xAnimMultiFileEntry type_41[1];
typedef xVec3 type_44[4];
typedef RwTexCoords* type_45[8];
typedef char type_47[4];
typedef xVec3 type_48[3];
typedef char type_49[32];
typedef char type_50[32];
typedef unsigned short type_52[3];
typedef float type_53[16];
typedef RxCluster type_54[1];

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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_7 update;
	type_7 endUpdate;
	type_19 bupdate;
	type_1 move;
	type_11 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_8 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_16 BeforeEnter;
	type_17 StateCallback;
	type_20 BeforeAnimMatrices;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_13 light;
	type_15 light_frame;
	int memlvl;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_42 callback;
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
	type_29 resolvID;
	type_31 base2Name;
	type_32 id2Name;
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
	type_26 colls;
	type_28 post;
	type_5 depenq;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct zEntTrigger : zEnt
{
	xMat4x3 triggerMatrix;
	xBox triggerBox;
	unsigned int entered;
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
	type_23 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_35 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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

struct xJSPHeader
{
	type_47 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_53 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RpTriangle
{
	type_52 vertIndex;
	short matIndex;
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

struct xSurface
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_41 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_49 name;
	type_50 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpSector
{
	int type;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_12 corner;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_36 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_38 pad;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_51 destroyNotify;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xSerial
{
	unsigned int idtag;
	int baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int warned;
	int curele;
	int bitidx;
	int bittally;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_45 texCoords;
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

struct anim_coll_data
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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
	type_43 eventFunc;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_6 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_40 NumAnims;
	void** RawData;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xTriggerAsset
{
	type_44 p;
	xVec3 direction;
	unsigned int flags;
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

struct _class_0
{
	xVec3* verts;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_34 BilinearLerp;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_37 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_33 Callback;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_39 vertIndex;
};

struct _class_2
{
	float t;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_14 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct st_SERIAL_CLIENTINFO
{
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

struct RxNodeMethods
{
	type_21 nodeBody;
	type_22 nodeInit;
	type_25 nodeTerm;
	type_0 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_18 configMsgHandler;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xShadowSimplePoly
{
	type_48 vert;
	xVec3 norm;
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
	type_54 clusters;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

type_24 buffer;
type_27 buffer;
type_30 zEntTriggerEventCB;
type_9 zEntTriggerUpdate;

unsigned char zEntTriggerHitsSphere(zEntTrigger& trig, xSphere& o, xVec3& dir);
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s);
void zEntTriggerSave(zEntTrigger* ent, xSerial* s);
int zEntTriggerEventCB(xBase* to, unsigned int toEvent);
void zEntTriggerUpdate(zEntTrigger* trig);
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset);
void zEntTriggerInit(void* ent, void* asset);

// zEntTriggerHitsSphere__FRC11zEntTriggerRC7xSphereRC5xVec3
// Start address: 0x174970
unsigned char zEntTriggerHitsSphere(zEntTrigger& trig, xSphere& o, xVec3& dir)
{
}

// zEntTriggerLoad__FP11zEntTriggerP7xSerial
// Start address: 0x174c60
void zEntTriggerLoad(zEntTrigger* ent, xSerial* s)
{
}

// zEntTriggerSave__FP11zEntTriggerP7xSerial
// Start address: 0x174c70
void zEntTriggerSave(zEntTrigger* ent, xSerial* s)
{
}

// zEntTriggerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x174c80
int zEntTriggerEventCB(xBase* to, unsigned int toEvent)
{
	zEntTrigger* trig;
}

// zEntTriggerUpdate__FP11zEntTriggerP6xScenef
// Start address: 0x174cc0
void zEntTriggerUpdate(zEntTrigger* trig)
{
	unsigned int i;
	xLinkAsset* link;
	xTriggerAsset* tasset;
	xIsect isect;
	int collide;
	xEnt* chkEnt;
	xVec3* chkPos;
	xVec3 xformVec;
	xSphere sphere;
	xIsect isect;
	xCylinder cylinder;
	xIsect isect;
	xSphere sphere;
	xIsect isect;
}

// zEntTriggerInit__FP11zEntTriggerP9xEntAsset
// Start address: 0x175080
void zEntTriggerInit(zEntTrigger* ent, xEntAsset* asset)
{
	xTriggerAsset* tasset;
}

// zEntTriggerInit__FPvPv
// Start address: 0x175230
void zEntTriggerInit(void* ent, void* asset)
{
}

