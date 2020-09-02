typedef struct RxHeap;
typedef struct xAnimEffect;
typedef struct _reent;
typedef struct RpGeometry;
typedef struct RwRGBA;
typedef struct xAnimTransitionList;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct xQuat;
typedef struct _Bigint;
typedef struct xAnimMultiFile;
typedef struct xAnimFile;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimSingle;
typedef struct rxHeapBlockHeader;
typedef struct RpMeshHeader;
typedef struct xVec3;
typedef struct RxPipelineRequiresCluster;
typedef struct __sFILE;
typedef struct xAnimState;
typedef struct xAnimActiveEffect;
typedef struct xAnimTable;
typedef struct RxPipeline;
typedef struct xModelInstance;
typedef struct RpTriangle;
typedef struct RpAtomic;
typedef struct xAnimTransition;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xModelPool;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct _atexit;
typedef struct RpClump;
typedef enum RxNodeDefEditable;
typedef struct xAnimMultiFileEntry;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xMemPool;
typedef struct RpMaterial;
typedef enum rxEmbeddedPacketState;
typedef struct RwTexture;
typedef struct __sbuf;
typedef struct xSurface;
typedef enum RxClusterForcePresent;
typedef union _class_0;
typedef struct xAnimMultiFileBase;
typedef struct _class_1;
typedef struct RxClusterDefinition;
typedef struct xModelBucket;
typedef struct RpMorphTarget;
typedef struct RwSphere;
typedef struct xLightKit;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct _class_2;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RxNodeDefinition;
typedef struct _class_3;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct _glue;
typedef struct RwLinkList;
typedef struct tm;

typedef unsigned int(*type_0)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_1)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_3)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_5)(RpClump*, void*);
typedef int(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_7)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(RxNodeDefinition*);
typedef unsigned int(*type_11)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef RpAtomic*(*type_18)(RpAtomic*);
typedef int(*type_19)(RxPipelineNode*, RxPipeline*);
typedef void(*type_20)(_reent*);
typedef void(*type_21)();
typedef void(*type_22)(xMemPool*, void*);
typedef int(*type_33)(void*, char*, int);
typedef int(*type_37)(void*, char*, int);
typedef void(*type_38)(xMemPool*, void*);
typedef long(*type_42)(void*, long, int);
typedef void(*type_43)(RwResEntry*);
typedef int(*type_45)(void*);
typedef void(*type_46)(int);
typedef RwObjectHasFrame*(*type_49)(RwObjectHasFrame*);

typedef char type_2[128];
typedef char type_10[128];
typedef unsigned int type_12[1];
typedef char type_13[128];
typedef unsigned short type_16[3];
typedef char type_17[25];
typedef type_21 type_23[32];
typedef xAnimTransition* type_24[32];
typedef RwTexCoords* type_25[8];
typedef char type_26[0];
typedef char type_27[5];
typedef float type_28[2];
typedef unsigned int type_29[4];
typedef char type_30[26];
typedef unsigned char type_31[2];
typedef xAnimMultiFileEntry type_32[1];
typedef unsigned char* type_34[30];
typedef float type_35[2];
typedef unsigned int type_36[30];
typedef char type_39[32];
typedef unsigned int type_40[2];
typedef char type_41[32];
typedef unsigned int type_44[2];
typedef RxCluster type_47[1];
typedef unsigned char type_48[3];
typedef unsigned char type_50[1];
typedef __sFILE type_51[3];
typedef char type_52[128];

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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_11 Callback;
};

struct _reent
{
	int _errno;
	__sFILE* _stdin;
	__sFILE* _stdout;
	__sFILE* _stderr;
	int _inc;
	type_17 _emergency;
	int _current_category;
	char* _current_locale;
	int __sdidinit;
	type_20 __cleanup;
	_Bigint* _result;
	int _result_k;
	_Bigint* _p5s;
	_Bigint** _freelist;
	int _cvtlen;
	char* _cvtbuf;
	_class_0 _new;
	_atexit* _atexit;
	_atexit _atexit0;
	type_46* _sig_func;
	_glue __sglue;
	type_51 __sf;
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
	type_25 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_7 BeforeAnimMatrices;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct _Bigint
{
	_Bigint* _next;
	int _k;
	int _maxwds;
	int _sign;
	int _wds;
	type_12 _x;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_32 Files;
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
	type_31 NumAnims;
	void** RawData;
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
	type_28 BilinearLerp;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_29 pad;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct __sFILE
{
	unsigned char* _p;
	int _r;
	int _w;
	short _flags;
	short _file;
	__sbuf _bf;
	int _lbfsize;
	void* _cookie;
	type_33 _read;
	type_37 _write;
	type_42 _seek;
	type_45 _close;
	__sbuf _ub;
	unsigned char* _up;
	int _ur;
	type_48 _ubuf;
	type_50 _nbuf;
	__sbuf _lb;
	int _blksize;
	int _offset;
	_reent* _data;
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
	type_1 BeforeEnter;
	type_4 StateCallback;
	type_7 BeforeAnimMatrices;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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
	_class_3 anim_coll;
};

struct RpTriangle
{
	type_16 vertIndex;
	short matIndex;
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
	type_18 renderCallBack;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_43 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _atexit
{
	_atexit* _next;
	int _ind;
	type_23 _fns;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_5 callback;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_39 name;
	type_41 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct __sbuf
{
	unsigned char* _base;
	int _size;
};

struct xSurface
{
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

union _class_0
{
	_class_1 _reent;
	_class_2 _unused;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _class_1
{
	unsigned int _unused_rand;
	char* _strtok_last;
	type_30 _asctime_buf;
	tm _localtime_buf;
	int _gamma_signgam;
	unsigned long long _rand_next;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xLightKit
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

struct _class_2
{
	type_34 _nextf;
	type_36 _nmalloc;
};

struct RxNodeMethods
{
	type_6 nodeBody;
	type_8 nodeInit;
	type_9 nodeTerm;
	type_14 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_3 configMsgHandler;
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

struct _class_3
{
	xVec3* verts;
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
	type_47 clusters;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_49 sync;
};

struct _glue
{
	_glue* _next;
	int _niobs;
	__sFILE* _iobs;
};

struct RwLinkList
{
	RwLLLink link;
};

struct tm
{
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};

xMemPool sxAnimTempTranPool;
unsigned int gxAnimUseGrowAlloc;
type_22 xAnimPoolCB;
unsigned int gActiveHeap;
unsigned char* giAnimScratch;
_reent* _impure_ptr;
type_26 _ctype_;

void xAnimPoolFree(xAnimPlay* play);
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst);
void xAnimPoolInit(xMemPool* pool, unsigned int count, unsigned int singles, unsigned int blendFlags, unsigned int effectMax);
void xAnimPoolCB(xMemPool* pool, void* data);
void xAnimPlayEval(xAnimPlay* play);
void xAnimPlayUpdate(xAnimPlay* play, float timeDelta);
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition);
void xAnimPlayChooseTransition(xAnimPlay* play);
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst);
void SingleUpdate(xAnimSingle* single, float timeDelta);
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float startTime);
void EffectSingleStop(xAnimSingle* single);
void EffectSingleLoop(xAnimSingle* single);
void EffectSingleRun(xAnimSingle* single);
void EffectSingleDuration(xAnimSingle* single);
void EffectSingleStart(xAnimSingle* single);
xAnimState* xAnimTableGetState(xAnimTable* table, char* name);
xAnimState* xAnimTableGetStateID(xAnimTable* table, unsigned int ID);
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, unsigned int stateID, unsigned int subStateID, unsigned int subStateCount);
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, char* states);
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, char* source, char* dest, type_0 conditional, type_0 callback, unsigned int flags, unsigned int userFlags, float srcTime, float destTime, unsigned short priority, unsigned short queuePriority, float blendRecip, unsigned short* blendOffset);
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, char* source);
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, char* source, char* dest);
xAnimState* xAnimTableNewState(xAnimTable* table, char* name, unsigned int flags, unsigned int userFlags, float speed, float* boneBlend, float* timeSnap, float fadeRecip, unsigned short* fadeOffset, void* callbackData, type_1 beforeEnter, type_4 stateCallback, type_7 beforeAnimMatrices);
void xAnimDefaultBeforeEnter(xAnimState* state);
xAnimTable* xAnimTableNew(char* name, xAnimTable** linkedList, unsigned int userFlags);
xAnimEffect* xAnimStateNewEffect(xAnimState* state, unsigned int flags, float startTime, float endTime, type_11 callback, unsigned int userDataSize);
void xAnimFileEval(xAnimFile* data, float time, float* bilinear, unsigned int flags, xVec3* tran, xQuat* quat);
void xAnimFileSetTime(xAnimFile* data, float duration, float timeOffset);
xAnimFile* xAnimFileNew(void* rawData, char* name, unsigned int flags, xAnimFile** linkedList);
xAnimFile* xAnimFileNewBilinear(void** rawData, char* name, unsigned int flags, xAnimFile** linkedList, unsigned int numX, unsigned int numY);
void xAnimTempTransitionInit(unsigned int count);
void xAnimInit();
unsigned char _xCheckAnimNameInner(char* name, char* pattern, int patternSize, char* extra, int* nameOut, int* extraOut);

// xAnimPoolFree__FP9xAnimPlay
// Start address: 0x210870
void xAnimPoolFree(xAnimPlay* play)
{
	unsigned int i;
}

// xAnimPoolAlloc__FP8xMemPoolPvP10xAnimTableP14xModelInstance
// Start address: 0x210910
xAnimPlay* xAnimPoolAlloc(xMemPool* pool, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	xAnimPlay* play;
}

// xAnimPoolInit__FP8xMemPoolUiUiUiUi
// Start address: 0x210970
void xAnimPoolInit(xMemPool* pool, unsigned int count, unsigned int singles, unsigned int blendFlags, unsigned int effectMax)
{
	unsigned int size;
	unsigned int i;
	void* buffer;
	xAnimPlay* play;
	xAnimSingle* currsingle;
	xAnimActiveEffect* curract;
}

// xAnimPoolCB__FP8xMemPoolPv
// Start address: 0x210be0
void xAnimPoolCB(xMemPool* pool, void* data)
{
	int i;
	xAnimPlay* clone;
	xAnimPlay* play;
	xAnimSingle* clonesingle;
	xAnimSingle* currsingle;
	xAnimActiveEffect* curract;
}

// xAnimPlayEval__FP9xAnimPlay
// Start address: 0x210d10
void xAnimPlayEval(xAnimPlay* play)
{
	unsigned int i;
	unsigned int bone;
	xQuat* quatresult;
	xVec3* tranresult;
	xQuat* quatblend;
	xVec3* tranblend;
	xAnimSingle* si;
	float blendF;
	float blendR;
	unsigned short* blendO;
}

// xAnimPlayUpdate__FP9xAnimPlayf
// Start address: 0x2111c0
void xAnimPlayUpdate(xAnimPlay* play, float timeDelta)
{
	unsigned int i;
	xAnimSingle* single;
}

// xAnimPlayStartTransition__FP9xAnimPlayP15xAnimTransition
// Start address: 0x211260
void xAnimPlayStartTransition(xAnimPlay* play, xAnimTransition* transition)
{
	xAnimSingle* single;
	xAnimSingle* bl;
}

// xAnimPlayChooseTransition__FP9xAnimPlay
// Start address: 0x211530
void xAnimPlayChooseTransition(xAnimPlay* play)
{
	unsigned int i;
	void* object;
	xAnimTransition** found;
	xAnimTransitionList* curr;
}

// xAnimPlaySetup__FP9xAnimPlayPvP10xAnimTableP14xModelInstance
// Start address: 0x2116e0
void xAnimPlaySetup(xAnimPlay* play, void* object, xAnimTable* table, xModelInstance* modelInst)
{
	int i;
}

// SingleUpdate__FP11xAnimSinglef
// Start address: 0x2117c0
void SingleUpdate(xAnimSingle* single, float timeDelta)
{
	unsigned int foundBlendstop;
	unsigned int firstStep;
	xAnimTransition* foundTransition;
	xAnimSingle* bl;
	float tranDelta;
	float blendDelta;
	float singleTime;
	void* object;
	float duration;
	float timeCmp;
	float timeCmp;
	xAnimTransitionList* curr;
	float recip;
}

// xAnimPlaySetState__FP11xAnimSingleP10xAnimStatef
// Start address: 0x212050
void xAnimPlaySetState(xAnimSingle* single, xAnimState* state, float startTime)
{
}

// EffectSingleStop__FP11xAnimSingle
// Start address: 0x212160
void EffectSingleStop(xAnimSingle* single)
{
	unsigned int i;
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
}

// EffectSingleLoop__FP11xAnimSingle
// Start address: 0x2122c0
void EffectSingleLoop(xAnimSingle* single)
{
	xAnimActiveEffect* alist;
	unsigned int index;
	unsigned int count;
	xAnimEffect* effect;
}

// EffectSingleRun__FP11xAnimSingle
// Start address: 0x212400
void EffectSingleRun(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float time;
	unsigned int flags;
}

// EffectSingleDuration__FP11xAnimSingle
// Start address: 0x212610
void EffectSingleDuration(xAnimSingle* single)
{
	float time;
	xAnimActiveEffect* alist;
	unsigned int index;
	unsigned int count;
}

// EffectSingleStart__FP11xAnimSingle
// Start address: 0x212750
void EffectSingleStart(xAnimSingle* single)
{
	xAnimEffect* effect;
	xAnimActiveEffect tempActive;
	float time;
	unsigned int flags;
}

// xAnimTableGetState__FP10xAnimTablePCc
// Start address: 0x2129a0
xAnimState* xAnimTableGetState(xAnimTable* table, char* name)
{
}

// xAnimTableGetStateID__FP10xAnimTableUi
// Start address: 0x212a10
xAnimState* xAnimTableGetStateID(xAnimTable* table, unsigned int ID)
{
	xAnimState* curr;
}

// xAnimTableAddFileID__FP10xAnimTableP9xAnimFileUiUiUi
// Start address: 0x212a60
xAnimState* xAnimTableAddFileID(xAnimTable* table, xAnimFile* file, unsigned int stateID, unsigned int subStateID, unsigned int subStateCount)
{
}

// xAnimTableAddFile__FP10xAnimTableP9xAnimFilePCc
// Start address: 0x212bd0
void xAnimTableAddFile(xAnimTable* table, xAnimFile* file, char* states)
{
	unsigned char* buffer;
	char* stateName;
}

// xAnimTableNewTransition__FP10xAnimTablePCcPCcPFP15xAnimTransitionP11xAnimSinglePv_UiPFP15xAnimTransitionP11xAnimSinglePv_UiUiUiffUsUsfPUs
// Start address: 0x212c70
xAnimTransition* xAnimTableNewTransition(xAnimTable* table, char* source, char* dest, type_0 conditional, type_0 callback, unsigned int flags, unsigned int userFlags, float srcTime, float destTime, unsigned short priority, unsigned short queuePriority, float blendRecip, unsigned short* blendOffset)
{
	xAnimTransition* tran;
	unsigned char isComplex;
	int i;
}

// xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCc
// Start address: 0x212fb0
void xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, char* source)
{
}

// _xAnimTableAddTransition__FP10xAnimTableP15xAnimTransitionPCcPCc
// Start address: 0x212fc0
void _xAnimTableAddTransition(xAnimTable* table, xAnimTransition* tran, char* source, char* dest)
{
	unsigned char* buffer;
	xAnimState** stateList;
	unsigned int i;
	unsigned int stateCount;
	unsigned int allocCount;
	char* stateName;
	xAnimTransitionList* tlist;
	type_24 substTransitionList;
	unsigned int substTransitionCount;
	unsigned char hasSubst;
	int i;
	unsigned char isComplex;
	char* COMPLEX_PATTERNS;
	char* search;
	xAnimState* state;
	type_52 extra;
	type_2 tempName;
	char* tempIterator;
	char* extraIterator;
	unsigned char allowMissingState;
	int i;
	unsigned int extraIteratorLength;
	xAnimTransition* duplicatedTransition;
	xAnimTransitionList* curr;
}

// xAnimTableNewState__FP10xAnimTablePCcUiUifPfPffPUsPvPFP9xAnimPlayP10xAnimState_vPFP10xAnimStateP11xAnimSinglePv_vPFP9xAnimPlayP5xQuatP5xVec3i_v
// Start address: 0x213820
xAnimState* xAnimTableNewState(xAnimTable* table, char* name, unsigned int flags, unsigned int userFlags, float speed, float* boneBlend, float* timeSnap, float fadeRecip, unsigned short* fadeOffset, void* callbackData, type_1 beforeEnter, type_4 stateCallback, type_7 beforeAnimMatrices)
{
	xAnimState* state;
}

// xAnimDefaultBeforeEnter__FP9xAnimPlayP10xAnimState
// Start address: 0x213a90
void xAnimDefaultBeforeEnter(xAnimState* state)
{
	unsigned int entry;
}

// xAnimTableNew__FPCcPP10xAnimTableUi
// Start address: 0x213af0
xAnimTable* xAnimTableNew(char* name, xAnimTable** linkedList, unsigned int userFlags)
{
	xAnimTable* table;
}

// xAnimStateNewEffect__FP10xAnimStateUiffPFUiP17xAnimActiveEffectP11xAnimSinglePv_UiUi
// Start address: 0x213b70
xAnimEffect* xAnimStateNewEffect(xAnimState* state, unsigned int flags, float startTime, float endTime, type_11 callback, unsigned int userDataSize)
{
	xAnimEffect* curr;
	xAnimEffect** prev;
	xAnimEffect* effect;
}

// xAnimFileEval__FP9xAnimFilefPfUiP5xVec3P5xQuatPf
// Start address: 0x213c40
void xAnimFileEval(xAnimFile* data, float time, float* bilinear, unsigned int flags, xVec3* tran, xQuat* quat)
{
	int i;
	unsigned int numBones;
	type_35 bilerp;
	type_40 biindex;
	type_44 biplus;
	xQuat* q0;
	xVec3* t0;
	xQuat* q1;
	xVec3* t1;
}

// xAnimFileSetTime__FP9xAnimFileff
// Start address: 0x214290
void xAnimFileSetTime(xAnimFile* data, float duration, float timeOffset)
{
	float rawDuration;
}

// xAnimFileNew__FPvPCcUiPP9xAnimFile
// Start address: 0x214350
xAnimFile* xAnimFileNew(void* rawData, char* name, unsigned int flags, xAnimFile** linkedList)
{
}

// xAnimFileNewBilinear__FPPvPCcUiPP9xAnimFileUiUi
// Start address: 0x214380
xAnimFile* xAnimFileNewBilinear(void** rawData, char* name, unsigned int flags, xAnimFile** linkedList, unsigned int numX, unsigned int numY)
{
	int i;
	xAnimFile* afile;
}

// xAnimTempTransitionInit__FUi
// Start address: 0x214650
void xAnimTempTransitionInit(unsigned int count)
{
}

// xAnimInit__Fv
// Start address: 0x2146c0
void xAnimInit()
{
}

// _xCheckAnimNameInner__FPCcPCciPcPiPi
// Start address: 0x2146f0
unsigned char _xCheckAnimNameInner(char* name, char* pattern, int patternSize, char* extra, int* nameOut, int* extraOut)
{
	char* startExtra;
	char* initialExtra;
	int patternCurrent;
	int nameCurrent;
	int check;
	type_10 nextPattern;
	int nextPatternCount;
	unsigned char first;
	int parenCount;
	char* IGNORE_PATTERNS;
	int length;
	unsigned char done;
	char* current;
	char* startPattern;
	int pc;
	int nameOut;
	int extraOut;
	char* current;
	char* positiveEnd;
	char* negative;
	char* negativeEnd;
	int nameOut;
	int extraOut;
	unsigned char matched;
}

