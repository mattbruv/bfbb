typedef struct xBase;
typedef struct xAnimPlay;
typedef struct RpClump;
typedef struct xEnt;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RpGeometry;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct xEntFrame;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct xFFXShakeState;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct xMemPool;
typedef struct xLinkAsset;
typedef struct xVec3;
typedef struct xModelInstance;
typedef struct xShadowSimplePoly;
typedef struct RxPipeline;
typedef struct xCollis;
typedef struct xFFXRotMatchState;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xLightKit;
typedef struct xModelPool;
typedef struct xLightKitLight;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct RpLight;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xBox;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct xEntShadow;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xGridBound;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct _class_0;
typedef struct RxNodeDefinition;
typedef struct tri_data;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct RwLinkList;
typedef struct xEntAsset;

typedef RpClump*(*type_0)(RpClump*, void*);
typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_2)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef int(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_5)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(RxNodeDefinition*);
typedef xBase*(*type_8)(unsigned int);
typedef void(*type_9)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_10)(RxPipelineNode*);
typedef char*(*type_12)(xBase*);
typedef void(*type_13)(RxPipelineNode*);
typedef char*(*type_14)(unsigned int);
typedef int(*type_15)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_17)(RpAtomic*);
typedef void(*type_18)(xEnt*, xScene*, float);
typedef void(*type_20)(xEnt*, xVec3*);
typedef void(*type_21)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_22)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_23)(xEnt*);
typedef unsigned int(*type_24)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_25)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_26)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_29)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_32)(xMemPool*, void*);
typedef void(*type_35)(RwResEntry*);
typedef void(*type_37)(xEnt*, xScene*, float, void*);
typedef RwObjectHasFrame*(*type_42)(RwObjectHasFrame*);

typedef xVec3 type_11[3];
typedef unsigned short type_16[3];
typedef float type_19[16];
typedef RwTexCoords* type_27[8];
typedef xVec3 type_28[4];
typedef unsigned int type_30[4];
typedef xCollis type_31[18];
typedef char type_33[32];
typedef char type_34[32];
typedef float type_36[2];
typedef unsigned char type_38[3];
typedef RxCluster type_39[1];
typedef float type_40[4];
typedef float type_41[2];
typedef unsigned char type_43[2];
typedef xAnimMultiFileEntry type_44[1];

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
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
	type_9 BeforeAnimMatrices;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_0 callback;
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
	type_18 update;
	type_18 endUpdate;
	type_20 bupdate;
	type_22 move;
	type_23 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_26 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_5 Callback;
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

struct xFFX
{
	unsigned int flags;
	type_37 doEffect;
	void* fdata;
	xFFX* next;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_36 BilinearLerp;
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
	type_30 pad;
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
	type_29 StateCallback;
	type_9 BeforeAnimMatrices;
};

struct xFFXShakeState
{
	xVec3 disp;
	float dur;
	float freq;
	float tmr;
	float alpha;
	float lval;
	xFFXShakeState* next;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xEnv
{
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_32 InitCB;
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
	type_40 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xShadowSimplePoly
{
	type_11 vert;
	xVec3 norm;
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

struct xFFXRotMatchState
{
	int lgrounded;
	xVec3 lfup;
	xVec3 lfat;
	xVec3 plfat;
	float tmr;
	float mrate;
	float tmatch;
	float rrate;
	float trelax;
	float max_decl;
	xFFXRotMatchState* next;
};

struct RpTriangle
{
	type_16 vertIndex;
	short matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_17 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_19 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_43 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_35 destroyNotify;
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
	type_8 resolvID;
	type_12 base2Name;
	type_14 id2Name;
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
	type_31 colls;
	type_21 post;
	type_25 depenq;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_24 Conditional;
	type_24 Callback;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_38 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_44 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_33 name;
	type_34 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_41 radius;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct anim_coll_data
{
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_7 nodeTerm;
	type_10 pipelineNodeInit;
	type_13 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct _class_0
{
	xVec3* verts;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_39 clusters;
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

struct _class_1
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

struct RwLinkList
{
	RwLLLink link;
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

unsigned int psize;
xFFX* pool;
xFFX* alist;
unsigned int shake_psize;
xFFXShakeState* shake_pool;
xFFXShakeState* shake_alist;
unsigned int rot_match_psize;
xFFXRotMatchState* rot_match_pool;
xFFXRotMatchState* rot_match_alist;
unsigned int gActiveHeap;

xFFXRotMatchState* xFFXRotMatchAlloc();
void xFFXRotMatchPoolInit(unsigned int num);
void xFFXShakeFree(xFFXShakeState* s);
xFFXShakeState* xFFXShakeAlloc();
void xFFXShakePoolInit(unsigned int num);
void xFFXShakeUpdateEnt(xEnt* ent, float dt, void* fdata);
void xFFXApply(xEnt* ent, xScene* sc, float dt);
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float dt);
short xFFXAddEffect(xEnt* ent, type_37 dof, void* fd);
short xFFXAddEffect(xEnt* ent, xFFX* f);
void xFFXTurnOff(xFFX* f);
void xFFXTurnOn(xFFX* f);
xFFX* xFFXAlloc();
void xFFXPoolInit(unsigned int num_ffx);

// xFFXRotMatchAlloc__Fv
// Start address: 0x1da8c0
xFFXRotMatchState* xFFXRotMatchAlloc()
{
}

// xFFXRotMatchPoolInit__FUi
// Start address: 0x1da8f0
void xFFXRotMatchPoolInit(unsigned int num)
{
	unsigned int i;
}

// xFFXShakeFree__FP14xFFXShakeState
// Start address: 0x1da990
void xFFXShakeFree(xFFXShakeState* s)
{
}

// xFFXShakeAlloc__Fv
// Start address: 0x1da9a0
xFFXShakeState* xFFXShakeAlloc()
{
}

// xFFXShakePoolInit__FUi
// Start address: 0x1da9d0
void xFFXShakePoolInit(unsigned int num)
{
	unsigned int i;
}

// xFFXShakeUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x1daa70
void xFFXShakeUpdateEnt(xEnt* ent, float dt, void* fdata)
{
	xFFXShakeState* ss;
	float tnext;
	float mag;
}

// xFFXApply__FP4xEntP6xScenef
// Start address: 0x1dabd0
void xFFXApply(xEnt* ent, xScene* sc, float dt)
{
}

// xFFXApplyOne__FP4xFFXP4xEntP6xScenef
// Start address: 0x1dac10
void xFFXApplyOne(xFFX* ffx, xEnt* ent, xScene* sc, float dt)
{
}

// xFFXAddEffect__FP4xEntPFP4xEntP6xScenefPv_vPv
// Start address: 0x1dadc0
short xFFXAddEffect(xEnt* ent, type_37 dof, void* fd)
{
}

// xFFXAddEffect__FP4xEntP4xFFX
// Start address: 0x1dae30
short xFFXAddEffect(xEnt* ent, xFFX* f)
{
}

// xFFXTurnOff__FP4xFFX
// Start address: 0x1dae60
void xFFXTurnOff(xFFX* f)
{
}

// xFFXTurnOn__FP4xFFX
// Start address: 0x1dae80
void xFFXTurnOn(xFFX* f)
{
}

// xFFXAlloc__Fv
// Start address: 0x1dae90
xFFX* xFFXAlloc()
{
}

// xFFXPoolInit__FUi
// Start address: 0x1daec0
void xFFXPoolInit(unsigned int num_ffx)
{
	unsigned int i;
}

