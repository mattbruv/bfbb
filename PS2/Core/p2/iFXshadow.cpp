typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpGeometry;
typedef struct RxPipelineNode;
typedef struct xModelInstance;
typedef struct RpAtomic;
typedef struct RwMatrixTag;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RwCamera;
typedef struct RpMeshHeader;
typedef struct xAnimPlay;
typedef struct RpClump;
typedef struct RwResEntry;
typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct RpLight;
typedef struct RwMeshCache;
typedef struct RxPS2AllPipeData;
typedef struct xEnt;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct xBase;
typedef struct RpMorphTarget;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct xAnimTable;
typedef struct rwPS2AllResEntryHeader;
typedef struct RxNodeDefinition;
typedef struct tri_data;
typedef struct RxPipelineRequiresCluster;
typedef struct xMemPool;
typedef struct xEntShadow;
typedef struct rwPS2AllClusterInstanceInfo;
typedef struct RwTexture;
typedef struct RpInterpolator;
typedef struct RpMesh;
typedef struct RwRaster;
typedef enum RpMeshHeaderFlags;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct xAnimFile;
typedef struct Shadow;
typedef struct xEnv;
typedef struct RwRGBAReal;
typedef struct rxReq;
typedef struct xLinkAsset;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xModelPool;
typedef enum RxClusterValidityReq;
typedef struct xCollis;
typedef struct _class_0;
typedef struct rwPS2AllFieldRec;
typedef union RwStreamUnion;
typedef struct rxNodePS2AllMatPvtData;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum RwStreamType;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xEntAsset;
typedef struct xBaseAsset;
typedef struct xAnimMultiFile;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxInstanceFlags;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RwStream;
typedef struct xCylinder;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xEntFrame;
typedef struct xBox;
typedef struct RwSphere;
typedef struct RwFrame;
typedef struct RxClusterDefinition;
typedef enum RwStreamAccessType;
typedef struct xBound;
typedef struct rwPS2AllClusterQuickInfo;
typedef struct rwPS2AllResEntryFormat;
typedef struct xModelBucket;
typedef enum RwFrustumTestResult;
typedef struct xShadowSimplePoly;
typedef struct rpAtomicPS2AllLightData;
typedef struct RwTexDictionary;
typedef struct xQCData;
typedef struct RxOutputSpec;
typedef struct xBBox;
typedef struct RwMemory;
typedef struct xLightKit;
typedef struct xMat3x3;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct xLightKitLight;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct RxIoSpec;
typedef struct xEntCollis;
typedef struct RxNodeMethods;
typedef struct xGridBound;
typedef struct RwFrustumPlane;
typedef union RwStreamFile;
typedef struct xAnimMultiFileBase;
typedef struct RwPlane;
typedef struct _class_1;
typedef struct RxCluster;
typedef struct xFFX;
typedef struct RxPacket;
typedef struct RwObjectHasFrame;
typedef struct anim_coll_data;
typedef struct RwLinkList;
typedef enum RwCullMode;
typedef struct RpMaterialList;
typedef struct rxNodePS2AllPvtData;
typedef struct RwV2d;

typedef int(*type_1)(RxPS2AllPipeData*);
typedef void(*type_2)(xEnt*, xScene*, float, xEntCollis*);
typedef xBase*(*type_3)(unsigned int);
typedef int(*type_4)(void*, void*, unsigned int);
typedef int(*type_5)(RxPS2AllPipeData*, RwMatrixTag**);
typedef int(*type_6)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_7)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_9)(xAnimPlay*, xAnimState*);
typedef char*(*type_11)(xBase*);
typedef int(*type_12)(void*, unsigned int);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_14)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_15)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_16)(RwResEntry*);
typedef char*(*type_19)(unsigned int);
typedef unsigned int(*type_20)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RwResEntry*(*type_21)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_16);
typedef int(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_23)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_24)(void*);
typedef int(*type_26)(RxNodeDefinition*);
typedef unsigned int(*type_27)(void*, void*, unsigned int);
typedef void(*type_28)(RxNodeDefinition*);
typedef int(*type_29)(RxPS2AllPipeData*, void**, unsigned int);
typedef int(*type_30)(RxPipelineNode*);
typedef int(*type_31)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_32)(RxPipelineNode*);
typedef int(*type_33)(RxPS2AllPipeData*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef int(*type_36)(RxPS2AllPipeData*);
typedef unsigned int(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_39)(RxPS2AllPipeData*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef RwResEntry*(*type_42)(RxPS2AllPipeData*, RwResEntry**, unsigned int, type_16);
typedef int(*type_45)(RxPS2AllPipeData*, void**, unsigned int);
typedef void(*type_51)(xEnt*, xScene*, float);
typedef RwCamera*(*type_52)(RwCamera*);
typedef void(*type_55)(xEnt*, xVec3*);
typedef void(*type_56)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_57)(xEnt*);
typedef RwCamera*(*type_58)(RwCamera*);
typedef void(*type_60)(xMemPool*, void*);
typedef int(*type_62)(RxPS2AllPipeData*);
typedef RwObjectHasFrame*(*type_72)(RwObjectHasFrame*);

typedef float type_0[4];
typedef rwPS2AllClusterQuickInfo type_8[12];
typedef rwPS2AllFieldRec type_10[12];
typedef RwFrustumPlane type_17[6];
typedef void* type_18[32];
typedef RwV3d type_25[8];
typedef unsigned short type_34[3];
typedef float type_37[2];
typedef unsigned char type_40[1];
typedef RwTexCoords* type_43[8];
typedef rwPS2AllClusterInstanceInfo type_44[12];
typedef unsigned int type_46[12];
typedef unsigned int type_47[4];
typedef xVec3 type_48[3];
typedef unsigned char type_49[2];
typedef unsigned int type_50[4096];
typedef rwPS2AllFieldRec type_53[12];
typedef float type_54[16];
typedef char type_59[16];
typedef char type_61[32];
typedef char type_63[32];
typedef char type_64[16];
typedef float type_65[2];
typedef xVec3 type_66[4];
typedef RwResEntry* type_67[1];
typedef unsigned char type_68[2];
typedef xAnimMultiFileEntry type_69[1];
typedef RxCluster type_70[1];
typedef unsigned char type_71[3];
typedef xCollis type_73[18];

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_43 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_35 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_52 beginUpdate;
	type_58 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float nearPlane;
	float farPlane;
	float fogPlane;
	float zScale;
	float zShift;
	type_17 frustumPlanes;
	RwBBox frustumBoundBox;
	type_25 frustumCorners;
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
	type_23 BeforeAnimMatrices;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_16 destroyNotify;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_15 Callback;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwMeshCache
{
	unsigned int lengthOfMeshesArray;
	type_67 meshes;
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
	type_51 update;
	type_51 endUpdate;
	type_55 bupdate;
	type_56 move;
	type_57 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_14 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_9 BeforeEnter;
	type_41 StateCallback;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_31 eventFunc;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_65 BilinearLerp;
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

struct RwTexCoords
{
	float u;
	float v;
};

struct RwV3d
{
	float x;
	float y;
	float z;
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
	type_47 pad;
};

struct RwStreamCustom
{
	type_24 sfnclose;
	type_27 sfnread;
	type_4 sfnwrite;
	type_12 sfnskip;
	void* data;
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
	type_8 clquickinfo;
	type_10 fieldRec;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_60 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_37 radius;
};

struct rwPS2AllClusterInstanceInfo
{
	unsigned int attrib;
	unsigned int stride;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_61 name;
	type_63 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct RpTriangle
{
	type_34 vertIndex;
	short matIndex;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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
	type_68 NumAnims;
	void** RawData;
};

struct Shadow
{
};

struct xEnv
{
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct rxReq
{
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_0 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _class_0
{
	float t;
	float u;
	float v;
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
	type_40 pad;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

struct rxNodePS2AllMatPvtData
{
	type_1 meshInstanceTestCB;
	type_21 resEntryAllocCB;
	type_29 instanceCB;
	type_33 bridgeCB;
	type_36 postMeshCB;
	int vifOffset;
	void** vu1CodeArray;
	unsigned int codeArrayLength;
	type_44 clinfo;
	type_46 cliIndex;
	RpMeshHeaderFlags pipeType;
	unsigned char totallyOpaque;
	unsigned char numStripes;
	unsigned char sizeOnVU;
	unsigned char pad0;
	rwPS2AllResEntryFormat strip;
	rwPS2AllResEntryFormat list;
	unsigned int magicValue;
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

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_69 Files;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int position;
	RwStreamUnion Type;
	int rwOwned;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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

struct xSurface
{
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_71 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct rwPS2AllClusterQuickInfo
{
	<unknown type (0xa510)>* data;
	unsigned int stride;
};

struct rwPS2AllResEntryFormat
{
	unsigned char batchRound;
	unsigned char stripReverse;
	type_49 pad;
	unsigned int maxInputSize;
	int batchSize;
	int batchesPerTag;
	int morphBatchSize;
	int morphBatchesPerTag;
	type_53 fieldRec;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

enum RwFrustumTestResult
{
	rwSPHEREOUTSIDE,
	rwSPHEREBOUNDARY,
	rwSPHEREINSIDE,
	rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 0x7fffffff
};

struct xShadowSimplePoly
{
	type_48 vert;
	xVec3 norm;
};

struct rpAtomicPS2AllLightData
{
	RwSurfaceProperties* surface;
	RwMatrixTag invMat;
	float invScale;
	float recipInvScale;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwMemory
{
	unsigned char* start;
	unsigned int length;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

struct RwStreamMemory
{
	unsigned int position;
	unsigned int nSize;
	unsigned char* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_54 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_3 resolvID;
	type_11 base2Name;
	type_19 id2Name;
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
	type_66 corner;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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
	type_73 colls;
	type_2 post;
	type_7 depenq;
};

struct RxNodeMethods
{
	type_22 nodeBody;
	type_26 nodeInit;
	type_28 nodeTerm;
	type_30 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_20 configMsgHandler;
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

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct _class_1
{
	xVec3* verts;
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

struct xFFX
{
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_70 clusters;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_72 sync;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct rxNodePS2AllPvtData
{
};

struct RwV2d
{
	float x;
	float y;
};

type_59 buffer;
type_64 buffer;
RxPipeline* ShadowMapMaterialPipeline;
RxPipeline* ShadowMapAtomicPipeline;
int ShadowAtomicOffset;
int ShadowLightOffset;
int ShadowWorldOffset;
type_18 VUCodeArray;
unsigned int ShadowMapLightOffset;
RwV3d Yaxis;
RwV3d Zaxis;
unsigned int ShadowWidth;
unsigned int ShadowHeight;
float ViewScale;
float PointLightRadius;
float PointLightBrightness;
float DirectionalLightBrightness;
RpAtomic* MainAtomic;
RpAtomic* ShadowAtomic;
RpAtomic* ShadowMapAtomic;
RwV3d sc_offset;
RwV3d light_offset;
RwCamera* ShadowCamera;
type_50 ourGlobals;
RpLight* ShadowLight;
RwCamera* ShadowCamera;
type_5 ShadowMapObjectSetupCallBack;
type_62 ShadowMapBridgeCallBack;
type_45 RpMeshPS2AllInstanceCallBack;
type_42 RpMeshPS2AllResEntryAllocCallBack;
type_39 RpMeshPS2AllMeshInstanceTestCallBack;
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
RwRaster* skyTextureRaster;
RwRaster* ShadowCameraRaster;
float ShadowStrength;
RwMatrixTag sm_matrix;
RwCamera* ShadowCamera;
unsigned char skyTransType;
int skyCameraExt;
int rwPip2GeometryOffset;
int rwPip2AtomicOffset;
RpLight* ShadowLight;

int ShadowMapCreatePipelines();
RxPipeline* ShadowMapCreateMaterialPipeline();
int ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData);
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, unsigned int numShadows);
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data);
int ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform);
void ShadowMapLightingSetup(RxPS2AllPipeData* ps2AllPipeData);

// ShadowMapCreatePipelines__Fv
// Start address: 0x33b190
int ShadowMapCreatePipelines()
{
}

// ShadowMapCreateMaterialPipeline__Fv
// Start address: 0x33b2b0
RxPipeline* ShadowMapCreateMaterialPipeline()
{
	RxPipeline* pipe;
	RxPipeline* lpipe;
	RxNodeDefinition* ps2allmat;
	RxPipelineNode* plnode;
}

// ShadowMapBridgeCallBack__FP16RxPS2AllPipeData
// Start address: 0x33b470
int ShadowMapBridgeCallBack(RxPS2AllPipeData* ps2AllPipeData)
{
	unsigned int numInitialQW;
	unsigned int numExtraQW;
	unsigned int numShadows;
	unsigned int numShadowQW;
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

// ShadowMapUpload__FP16RxPS2AllPipeDataUi
// Start address: 0x33bbc0
void ShadowMapUpload(RxPS2AllPipeData* ps2AllPipeData, unsigned int numShadows)
{
	unsigned long tmp;
	unsigned long tmp1;
}

// DKShadowDataUpload__FP6ShadowP16RxPS2AllPipeData
// Start address: 0x33bdc0
Shadow* DKShadowDataUpload(Shadow* shadow, RxPS2AllPipeData* data)
{
	unsigned int msw;
	unsigned int lsw;
	unsigned long tmp;
	RwMatrixTag matrix;
	RwCamera* camera;
	float val;
}

// ShadowMapObjectSetupCallBack__FP16RxPS2AllPipeDataPP11RwMatrixTag
// Start address: 0x33bf30
int ShadowMapObjectSetupCallBack(RxPS2AllPipeData* ps2AllPipeData, RwMatrixTag** transform)
{
	RpAtomic* atomic;
	RwFrustumTestResult inFrustum;
	RpGeometry* _gmty;
	RpInterpolator* _itpltr;
	RpGeometry* _gmty;
	RwResEntry* resEntry;
	rwPS2AllResEntryHeader* ps2AllResHeader;
	RpInterpolator* interpolator;
	RwMatrixTag* _viewMatrix;
	RwMatrixTag* _mpLocalToWorld;
	RwFrustumTestResult* _infm;
	RwFrustumPlane* _frustPlane;
	RwSphere* _sphere;
	unsigned int _numPlanes;
	float dot;
	RwFrustumTestResult _infm;
}

// ShadowMapLightingSetup__FP16RxPS2AllPipeData
// Start address: 0x33c3a0
void ShadowMapLightingSetup(RxPS2AllPipeData* ps2AllPipeData)
{
	RpAtomic* atomic;
	RpGeometry* geometry;
	RpMeshHeader* meshHeader;
	rpAtomicPS2AllLightData lightingData;
	RwMatrixTag* frameMat;
	float temp;
}

