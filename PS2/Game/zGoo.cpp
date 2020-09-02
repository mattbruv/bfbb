typedef struct xVec3;
typedef struct RwObjectHasFrame;
typedef struct xMat4x3;
typedef struct xModelInstance;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNode;
typedef struct xBase;
typedef struct rxHeapFreeBlock;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterialList;
typedef struct xAnimSingle;
typedef struct RxNodeDefinition;
typedef struct xEnt;
typedef struct xQCData;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpClump;
typedef struct RxPipelineNodeParam;
typedef struct tri_data;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBA;
typedef struct xQuat;
typedef struct xAnimTransition;
typedef struct RpGeometry;
typedef struct xEnv;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct zGooParams;
typedef struct xAnimEffect;
typedef struct xLinkAsset;
typedef struct RpMorphTarget;
typedef struct xCollis;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFile;
typedef struct xAnimPlay;
typedef struct _class_0;
typedef struct RpMeshHeader;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xBaseAsset;
typedef struct rxReq;
typedef struct xEntAsset;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpTriangle;
typedef struct RwResEntry;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xEntFrame;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xAnimTable;
typedef struct xShadowSimplePoly;
typedef struct xMemPool;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xSurface;
typedef struct xBBox;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct RwTexture;
typedef struct xScene;
typedef struct RwSphere;
typedef struct xShadowSimpleCache;
typedef struct xModelBucket;
typedef struct xEntCollis;
typedef struct xAnimTransitionList;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RpLight;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xFFX;
typedef struct RxNodeMethods;
typedef struct anim_coll_data;
typedef struct RxCluster;
typedef struct _class_1;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;
typedef struct xBound;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_1)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_2)(RxPipelineNode*);
typedef char*(*type_3)(xBase*);
typedef char*(*type_4)(unsigned int);
typedef unsigned int(*type_5)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_6)(RxPipelineNode*, RxPipeline*);
typedef int(*type_7)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpClump*(*type_9)(RpClump*, void*);
typedef unsigned int(*type_10)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_11)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_13)(RxNodeDefinition*);
typedef void(*type_14)(RxNodeDefinition*);
typedef int(*type_16)(RxPipelineNode*);
typedef void(*type_19)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_20)(RpAtomic*);
typedef void(*type_22)(xAnimPlay*, xAnimState*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_26)(unsigned int);
typedef void(*type_27)(xEnt*, xScene*, float);
typedef void(*type_30)(xEnt*, xVec3*);
typedef void(*type_32)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_33)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_34)(xEnt*);
typedef unsigned int(*type_35)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_37)(xMemPool*, void*);
typedef void(*type_41)(RwResEntry*);

typedef float type_8[2];
typedef float type_15[2];
typedef unsigned char type_17[2];
typedef xAnimMultiFileEntry type_18[1];
typedef unsigned short type_21[3];
typedef unsigned char type_24[3];
typedef xVec3 type_25[3];
typedef unsigned int type_28[4];
typedef RwTexCoords* type_29[8];
typedef float type_31[16];
typedef xVec3 type_36[4];
typedef char type_38[16];
typedef char type_39[32];
typedef char type_40[32];
typedef char type_42[16];
typedef unsigned char type_43[3];
typedef float type_44[4];
typedef xCollis type_45[18];
typedef RxCluster type_46[1];

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_7 eventFunc;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_20 renderCallBack;
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
	type_17 NumAnims;
	void** RawData;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_8 BilinearLerp;
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
	type_33 move;
	type_34 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_1 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_15 radius;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_9 callback;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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
	type_22 BeforeEnter;
	type_19 StateCallback;
	type_23 BeforeAnimMatrices;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_11 Conditional;
	type_11 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_29 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xEnv
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_28 pad;
};

struct zGooParams
{
	float depth;
	float orig_depth;
	xEnt* goo_ent;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_5 Callback;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_44 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct rxReq
{
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

struct RpTriangle
{
	type_21 vertIndex;
	short matIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_41 destroyNotify;
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

struct xShadowSimplePoly
{
	type_25 vert;
	xVec3 norm;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_37 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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
	type_24 pad;
	void* moprops;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_31 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_39 name;
	type_40 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_3 base2Name;
	type_4 id2Name;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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
	type_36 corner;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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
	type_45 colls;
	type_32 post;
	type_35 depenq;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xFFX
{
};

struct RxNodeMethods
{
	type_12 nodeBody;
	type_13 nodeInit;
	type_14 nodeTerm;
	type_16 pipelineNodeInit;
	type_2 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_10 configMsgHandler;
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

struct _class_1
{
	xVec3* verts;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_46 clusters;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_43 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

type_38 buffer;
type_42 buffer;
zGooParams* zgoo_gps;
int zgoo_ngps;
int zgoo_nused;
unsigned int gActiveHeap;

void zGooMeltFinished(RpAtomic* atomic);
void zGooStopTide();
void zGooCollsEnd();
void zGooCollsBegin();
int zGooIs(xEnt* obj, float& depth, unsigned int playerCheck);
int zGooAdd(xEnt* obj, float depth, int freezeGroup);
void zGooExit();
void zGooInit(int nobj);

// zGooMeltFinished__FP8RpAtomic
// Start address: 0x30f8a0
void zGooMeltFinished(RpAtomic* atomic)
{
	int i;
	xEnt* gooey;
}

// zGooStopTide__Fv
// Start address: 0x30f940
void zGooStopTide()
{
	int i;
}

// zGooCollsEnd__Fv
// Start address: 0x30f9c0
void zGooCollsEnd()
{
	int i;
	xEnt* gooey;
	xVec3 change;
}

// zGooCollsBegin__Fv
// Start address: 0x30fa70
void zGooCollsBegin()
{
	int i;
	xEnt* gooey;
	float ignoredepth;
	xVec3 change;
}

// zGooIs__FP4xEntRfUi
// Start address: 0x30fbe0
int zGooIs(xEnt* obj, float& depth, unsigned int playerCheck)
{
	int ret;
	int i;
}

// zGooAdd__FP4xEntfi
// Start address: 0x30fcb0
int zGooAdd(xEnt* obj, float depth, int freezeGroup)
{
	int i;
	zGooParams* gp;
}

// zGooExit__Fv
// Start address: 0x30fd70
void zGooExit()
{
}

// zGooInit__Fi
// Start address: 0x30fd80
void zGooInit(int nobj)
{
}

