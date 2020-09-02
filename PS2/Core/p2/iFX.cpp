typedef struct RwRaster;
typedef enum RxNodeDefEditable;
typedef struct xAnimTransitionList;
typedef enum RxClusterValid;
typedef struct rxHeapBlockHeader;
typedef struct xAnimTransition;
typedef struct rxHeapFreeBlock;
typedef struct RxPS2AllPipeData;
typedef struct xAnimState;
typedef struct RpAtomic;
typedef struct RwSphere;
typedef enum rxEmbeddedPacketState;
typedef struct RwMeshCache;
typedef struct _class_0;
typedef struct xBaseAsset;
typedef enum RxClusterForcePresent;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RpInterpolator;
typedef struct RpMesh;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct RwResEntry;
typedef struct rwPS2AllResEntryHeader;
typedef struct xAnimFile;
typedef struct RxClusterDefinition;
typedef struct xAnimSingle;
typedef struct xMat3x3;
typedef struct RpMaterial;
typedef struct xEntAsset;
typedef struct RpMaterialList;
typedef struct xEnt;
typedef struct rxReq;
typedef struct RwLLLink;
typedef struct xAnimMultiFileBase;
typedef struct rxNodePS2AllPvtData;
typedef struct RwObject;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct xEntFrame;
typedef struct xMemPool;
typedef struct RwTexDictionary;
typedef struct rxNodePS2AllMatPvtData;
typedef struct xVec3;
typedef struct RpClump;
typedef struct RxClusterRef;
typedef struct RpGeometry;
typedef struct RwTexture;
typedef struct RpMeshHeader;
typedef struct xAnimPlay;
typedef struct xEnv;
typedef struct RxIoSpec;
typedef struct xShadowSimplePoly;
typedef struct RpMorphTarget;
typedef struct xAnimMultiFile;
typedef enum RxClusterValidityReq;
typedef struct xBBox;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxPipeline;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RwV3d;
typedef struct RxNodeDefinition;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef enum RpMeshHeaderFlags;
typedef struct RxPipelineNode;
typedef struct xScene;
typedef struct xAnimTable;
typedef struct xShadowSimpleCache;
typedef struct RxCluster;
typedef struct RwLinkList;
typedef struct xEntCollis;
typedef struct RxPipelineNodeParam;
typedef struct xGridBound;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct RpLight;
typedef struct rwPS2AllFieldRec;
typedef struct RwRGBAReal;
typedef struct RwSurfaceProperties;
typedef struct RxPipelineRequiresCluster;
typedef struct xCollis;
typedef struct xQuat;
typedef struct xLinkAsset;
typedef enum RwCullMode;
typedef struct RwMatrixTag;
typedef struct xFFX;
typedef struct RwObjectHasFrame;
typedef struct xSurface;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct xModelBucket;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntShadow;
typedef enum RxInstanceFlags;
typedef struct RwRGBA;
typedef struct anim_coll_data;
typedef struct RxHeap;
typedef struct rwPS2AllResEntryFormat;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct xBase;
typedef struct xMat4x3;
typedef struct xBound;
typedef struct xSphere;
typedef struct xQCData;
typedef struct xRot;
typedef struct xCylinder;
typedef struct _class_1;
typedef struct tri_data;
typedef struct xBox;

typedef unsigned int(*type_7)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_10)(RxPS2AllPipeData*);
typedef unsigned int(*type_11)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_12)(xMemPool*, void*);
typedef void(*type_15)(RwResEntry*);
typedef RpClump*(*type_16)(RpClump*, void*);
typedef xBase*(*type_18)(unsigned int);
typedef RwResEntry*(*type_19)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_15);
typedef char*(*type_22)(xBase*);
typedef void(*type_23)(xAnimState*, xAnimSingle*, void*);
typedef char*(*type_24)(unsigned int);
typedef int(*type_25)(RxPS2AllPipeData*, void**, unsigned int);
typedef void(*type_26)(xEnt*, xScene*, float);
typedef void(*type_29)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_30)(xEnt*, xVec3*);
typedef int(*type_31)(RxPS2AllPipeData*);
typedef int(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_34)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_37)(xEnt*);
typedef void(*type_39)(xAnimPlay*, xAnimState*);
typedef int(*type_40)(RxNodeDefinition*);
typedef int(*type_42)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef void(*type_46)(RxNodeDefinition*);
typedef unsigned int(*type_47)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_49)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_50)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_51)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int(*type_52)(RxPipelineNode*);
typedef void(*type_54)(RxPipelineNode*);
typedef int(*type_55)(RxPS2AllPipeData*);
typedef RwObjectHasFrame*(*type_56)(RwObjectHasFrame*);
typedef int(*type_58)(RxPipelineNode*, RxPipeline*);
typedef RwResEntry*(*type_63)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_15);
typedef int(*type_64)(RxPS2AllPipeData*);
typedef unsigned int(*type_68)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_70)(RxPS2AllPipeData*, void**, unsigned int);
typedef int(*type_72)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[2];
typedef float type_1[2];
typedef RwResEntry* type_2[1];
typedef float type_3[2];
typedef float type_4[2];
typedef float type_5[8];
typedef unsigned int type_6[4];
typedef float type_8[2];
typedef float type_9[2];
typedef rwPS2AllClusterQuickInfo type_13[12];
typedef rwPS2AllFieldRec type_14[12];
typedef xVec3 type_17[3];
typedef unsigned char type_20[2];
typedef xAnimMultiFileEntry type_21[1];
typedef float type_27[2];
typedef float type_28[16];
typedef float type_33[2];
typedef char type_35[32];
typedef char type_36[32];
typedef float type_38[2];
typedef unsigned short type_41[3];
typedef float type_44[4];
typedef float type_45[2];
typedef RxCluster type_48[1];
typedef xVec3 type_53[4];
typedef unsigned char type_57[1];
typedef float type_59[8];
typedef void* type_60[32];
typedef unsigned char type_61[3];
typedef float type_62[4];
typedef RwTexCoords* type_65[8];
typedef rwPS2AllClusterInstanceInfo type_66[12];
typedef unsigned int type_67[12];
typedef xCollis type_69[18];
typedef unsigned char type_71[2];
typedef rwPS2AllFieldRec type_73[12];

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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_6 pad;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct RxPS2AllPipeData
{
	rxNodePS2AllPvtData* objPvtData;
	rxNodePS2AllMatPvtData* matPvtData;
	void* sourceObject;
	RpMeshHeader* meshHeader;
	RwMeshCache* meshCache;
	RxInstanceFlags objInstance;
	unsigned int objIdentifier;
	float spExtra;
	int numMorphTargets;
	unsigned int fastMorphing;
	unsigned char transType;
	unsigned char primType;
	unsigned char matModulate;
	unsigned char vu1CodeIndex;
	RpMesh* mesh;
	RwResEntry** cacheEntryRef;
	RxInstanceFlags meshInstance;
	unsigned int meshIdentifier;
	RwSurfaceProperties* surfProps;
	RwTexture* texture;
	RwRGBA matCol;
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
	type_39 BeforeEnter;
	type_23 StateCallback;
	type_49 BeforeAnimMatrices;
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
	type_43 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwMeshCache
{
	unsigned int lengthOfMeshesArray;
	type_2 meshes;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct RpMesh
{
	unsigned short* indices;
	unsigned int numIndices;
	RpMaterial* material;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_15 destroyNotify;
};

struct rwPS2AllResEntryHeader
{
	int refCnt;
	int clrCnt;
	<unknown type (0xa510)>* data;
	unsigned int numVerts;
	unsigned int objIdentifier;
	unsigned int meshIdentifier;
	int batchSize;
	int numBatches;
	int batchesPerTag;
	int morphStart;
	int morphFinish;
	int morphNum;
	type_13 clquickinfo;
	type_14 fieldRec;
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
	type_20 NumAnims;
	void** RawData;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_9 BilinearLerp;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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
	type_26 update;
	type_26 endUpdate;
	type_30 bupdate;
	type_34 move;
	type_37 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_50 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct rxReq
{
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct rxNodePS2AllPvtData
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
	type_7 Callback;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_12 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct rxNodePS2AllMatPvtData
{
	type_10 meshInstanceTestCB;
	type_19 resEntryAllocCB;
	type_25 instanceCB;
	type_31 bridgeCB;
	type_42 postMeshCB;
	int vifOffset;
	void** vu1CodeArray;
	unsigned int codeArrayLength;
	type_66 clinfo;
	type_67 cliIndex;
	RpMeshHeaderFlags pipeType;
	unsigned char totallyOpaque;
	unsigned char numStripes;
	unsigned char sizeOnVU;
	unsigned char pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	unsigned int magicValue;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_16 callback;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_65 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_35 name;
	type_36 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_49 BeforeAnimMatrices;
};

struct xEnv
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

struct xShadowSimplePoly
{
	type_17 vert;
	xVec3 norm;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_21 Files;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RxNodeMethods
{
	type_32 nodeBody;
	type_40 nodeInit;
	type_46 nodeTerm;
	type_52 pipelineNodeInit;
	type_54 pipelineNodeTerm;
	type_58 pipelineNodeConfig;
	type_68 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

struct rwPS2AllClusterInstanceInfo
{
	unsigned int attrib;
	unsigned int stride;
};

struct RwV3d
{
	float x;
	float y;
	float z;
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

enum RpMeshHeaderFlags
{
	rpMESHHEADERTRISTRIP = 0x1,
	rpMESHHEADERTRIFAN,
	rpMESHHEADERLINELIST = 0x4,
	rpMESHHEADERPOLYLINE = 0x8,
	rpMESHHEADERPOINTLIST = 0x10,
	rpMESHHEADERPRIMMASK = 0xff,
	rpMESHHEADERUNINDEXED,
	rpMESHHEADERFLAGSFORCEENUMSIZEINT = 0x7fffffff
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
	type_22 base2Name;
	type_24 id2Name;
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
	type_53 corner;
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

struct RwLinkList
{
	RwLLLink link;
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
	type_69 colls;
	type_29 post;
	type_47 depenq;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RpTriangle
{
	type_41 vertIndex;
	short matIndex;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_48 clusters;
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

struct rwPS2AllFieldRec
{
	int numVerts;
	int morphNumVerts;
	int dataoffset;
	int morphDataoffset;
	short skip;
	short morphSkip;
	short reverse;
	unsigned char vuoffset;
	type_57 pad;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_62 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
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

struct xFFX
{
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_56 sync;
};

struct xSurface
{
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_0 radius;
};

enum RxInstanceFlags
{
	rxINSTANCENAINSTANCEFLAG,
	rxINSTANCEDONTINSTANCE,
	rxINSTANCEINPLACEINSTANCE,
	rxINSTANCECONGRUENTINSTANCE = 0x4,
	rxINSTANCEFULLINSTANCE = 0x8,
	rxINSTANCETYPEMASK = 0xe,
	rxINSTANCEXYZ = 0x10,
	rxINSTANCENORMAL = 0x20,
	rxINSTANCERGBA = 0x40,
	rxINSTANCEUV = 0x80,
	rxINSTANCEUV1 = 0x80,
	rxINSTANCEUV2 = 0x100,
	rxINSTANCEUV3 = 0x200,
	rxINSTANCEUV4 = 0x400,
	rxINSTANCEUV5 = 0x800,
	rxINSTANCEUV6 = 0x1000,
	rxINSTANCEUV7 = 0x2000,
	rxINSTANCEUV8 = 0x4000,
	rxINSTANCEUSER1 = 0x8000,
	rxINSTANCEUSER2 = 0x10000,
	rxINSTANCEUSER3 = 0x20000,
	rxINSTANCEUSER4 = 0x40000,
	rxINSTANCEALL = 0x7fff0,
	rxINSTANCEMASK = 0x7ffff,
	rxINSTANCEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct anim_coll_data
{
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

struct rwPS2AllResEntryFormat
{
	unsigned char batchRound;
	unsigned char stripReverse;
	type_71 pad;
	unsigned int maxInputSize;
	int batchSize;
	int batchesPerTag;
	int morphBatchSize;
	int morphBatchesPerTag;
	type_73 fieldRec;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	unsigned int stride;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_72 eventFunc;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_61 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xSphere
{
	xVec3 center;
	float r;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

type_59 sinRangePoint5;
type_5 xFXWarbleParam;
xEnt* warbEnt;
type_44 warbc;
xVec3* vbuf;
xVec3* nbuf;
unsigned int warbMode;
float warbTime;
unsigned long gs_alpha_2;
type_51 RpAtomicPS2AllObjectSetupCallBack;
type_64 iFXanimUVBridgeCallBack;
type_70 RpMeshPS2AllInstanceCallBack;
type_63 RpMeshPS2AllResEntryAllocCallBack;
type_55 RpMeshPS2AllMeshInstanceTestCallBack;
long FXanimUVPRS;
RxClusterDefinition RxClPS2normal;
RxClusterDefinition RxClPS2rgba;
RxClusterDefinition RxClPS2uv;
RxClusterDefinition RxClPS2xyz;
<unknown type (0xa510)>* _rwDMAPktPtr;
void* skyUploadedCode;
long skyTest_1;
long skyClamp_1;
long skyTex1_1;
unsigned int skyUserSwitch1;
unsigned int skyUserSwitch2;
RwCullMode gSkyCullState;
<unknown type (0xa510)> skyClipVect2;
<unknown type (0xa510)> skyClipVect1;
<unknown type (0xa510)> skyCClipVect2;
<unknown type (0xa510)> skyCClipVect1;
int skyTLClipperMode;
int skyTSClipperMode;
long skyPrim_State;
<unknown type (0xa510)> gifTag128;
int skyAlphaTex;
int skyVertexAlpha;
type_45 xFXanimUV2PScale;
type_38 xFXanimUV2PTrans;
type_33 xFXanimUV2PRotMat1;
type_27 xFXanimUV2PRotMat0;
type_8 xFXanimUVScale;
type_4 xFXanimUVTrans;
type_3 xFXanimUVRotMat1;
type_1 xFXanimUVRotMat0;
RwTexture* xFXanimUV2PTexture;
RwRaster* skyTextureRaster;

RxPipeline* iFXanimUVCreatePipe();
RxPipeline* iFXanimUVCreateMaterialPipe();
int iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);

// iFXanimUVCreatePipe__Fv
// Start address: 0x1aa3f0
RxPipeline* iFXanimUVCreatePipe()
{
	RxPipeline* newPipe;
	RxPipeline* matPipe;
	RxPipelineNode* plNode;
	RxPipeline* lPipe;
	RxNodeDefinition* ps2All;
}

// iFXanimUVCreateMaterialPipe__Fv
// Start address: 0x1aa4c0
RxPipeline* iFXanimUVCreateMaterialPipe()
{
	RxPipeline* newPipe;
	RxPipeline* lockedPipe;
	RxNodeDefinition* ps2AllMat;
	RxPipelineNode* plNode;
	type_60 VUCodeArray;
}

// iFXanimUVBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x1aa6a0
int iFXanimUVBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	unsigned int numInitialQW;
	unsigned int numUserInitialQW;
	unsigned int numExtraQW;
	unsigned int prim;
	unsigned int primSwitch;
	unsigned int fogSwitch;
	RwRaster* customRaster;
	unsigned long tmp;
	unsigned long tmp1;
	<unknown type (0xa510)> ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	RwTexture* _nwtx;
	RwRaster* _nwrs;
	unsigned int cFormat;
	int textureUploadSuccess;
	unsigned int _itQW;
	unsigned int _xaQW;
	unsigned long tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)>* _rwDMA_local_rwDMAPktPtr;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	unsigned int __prmTmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	float __colScale;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	<unknown type (0xa510)> __ltmp;
	unsigned long __tmp1;
	unsigned int __skySwitchFlag;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	unsigned long __tmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	RxPS2AllPipeData* _p2apd;
	void* _kohd;
	unsigned long tmp;
	<unknown type (0xa510)> ltmp;
	<unknown type (0xa510)> ___ltmp;
	RxPS2AllPipeData* _p2apd;
	rwPS2AllResEntryHeader* _p2rh;
	unsigned long __tmp;
	unsigned long __tmp1;
	<unknown type (0xa510)> __ltmp;
	<unknown type (0xa510)> ___ltmp;
	unsigned int stat;
}

