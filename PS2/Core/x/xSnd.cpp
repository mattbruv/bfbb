typedef struct fade_data;
typedef struct xSurface;
typedef struct xAnimTransition;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xAnimSingle;
typedef struct RxPipelineNode;
typedef struct xAnimActiveEffect;
typedef struct iSndFileInfo;
typedef struct xQuat;
typedef struct xFFX;
typedef struct RpAtomic;
typedef struct _class_0;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xAnimPlay;
typedef struct xEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterialList;
typedef struct rxHeapBlockHeader;
typedef struct xVec3;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xMat4x3;
typedef struct RxPipeline;
typedef struct xSndVoiceInfo;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct RpGeometry;
typedef enum sound_category;
typedef struct _class_1;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xBase;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct _xSndDelayed;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct _class_2;
typedef enum RxNodeDefEditable;
typedef struct xMemPool;
typedef enum RxClusterValid;
typedef struct xLinkAsset;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xShadowSimplePoly;
typedef struct xRot;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBaseAsset;
typedef struct xAnimFile;
typedef struct xBox;
typedef struct RwResEntry;
typedef struct xScene;
typedef struct RxClusterDefinition;
typedef struct xShadowSimpleCache;
typedef enum sound_effect;
typedef struct xEntCollis;
typedef struct xAnimTransitionList;
typedef struct RwSphere;
typedef struct RpLight;
typedef enum sound_listener_type;
typedef struct RwTexDictionary;
typedef struct iSndInfo;
typedef struct RxOutputSpec;
typedef struct xBound;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef enum sound_listener_game_mode;
typedef struct RwTexture;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct RxIoSpec;
typedef struct xBBox;
typedef struct RxNodeMethods;
typedef struct xEntShadow;
typedef struct RxPipelineCluster;
typedef struct anim_coll_data;
typedef struct RxNodeDefinition;
typedef struct RxCluster;
typedef struct xGridBound;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xAnimMultiFileEntry;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_3;
typedef struct tri_data;
typedef struct iSndVol;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xSndGlobals;

typedef unsigned int(*type_1)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_5)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_7)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_9)(RxNodeDefinition*);
typedef void(*type_12)(RxNodeDefinition*);
typedef void(*type_13)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef int(*type_16)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef int(*type_19)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_20)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_22)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_23)(unsigned int);
typedef void(*type_24)(xAnimPlay*, xQuat*, xVec3*, int);
typedef char*(*type_26)(xBase*);
typedef char*(*type_27)(unsigned int);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(xEnt*, xScene*, float);
typedef void(*type_32)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_33)(xEnt*, xVec3*);
typedef void(*type_34)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_36)(xEnt*);
typedef void(*type_37)(unsigned int, unsigned char);
typedef unsigned int(*type_38)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_43)(xMemPool*, void*);
typedef void(*type_47)(RwResEntry*);
typedef RwObjectHasFrame*(*type_50)(RwObjectHasFrame*);

typedef float type_0[5];
typedef xSndVoiceInfo type_2[48];
typedef float type_3[4];
typedef xMat4x3 type_4[2];
typedef float type_6[2];
typedef unsigned char type_8[2];
typedef xAnimMultiFileEntry type_10[1];
typedef _xSndDelayed type_11[16];
typedef fade_data type_18[128];
typedef unsigned int type_21[64];
typedef xVec3 type_25[3];
typedef unsigned short type_28[3];
typedef float type_31[16];
typedef unsigned int type_35[4];
typedef RwTexCoords* type_40[8];
typedef xVec3 type_41[4];
typedef char type_42[16];
typedef char type_44[16];
typedef char type_45[32];
typedef char type_46[32];
typedef xCollis type_48[18];
typedef RxCluster type_49[1];
typedef float type_51[2];
typedef unsigned char type_52[3];

struct fade_data
{
	unsigned char in;
	unsigned int handle;
	float start_delay;
	float time;
	float end_time;
	float volume;
};

struct xSurface
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_1 Conditional;
	type_1 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_51 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct iSndFileInfo
{
	unsigned int ID;
	unsigned int assetID;
	unsigned short sample_rate;
	unsigned char is_streamed;
	union
	{
		_class_1 nonstream;
		_class_2 stream;
	};
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xFFX
{
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
	type_29 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_0
{
	float t;
	float u;
	float v;
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
	type_24 BeforeAnimMatrices;
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
	type_30 update;
	type_30 endUpdate;
	type_33 bupdate;
	type_34 move;
	type_36 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_39 transl;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_35 pad;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_13 StateCallback;
	type_24 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_10 Files;
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
	_class_3 anim_coll;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
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

struct xSndVoiceInfo
{
	unsigned int assetID;
	unsigned int sndID;
	unsigned int parentID;
	xVec3* parentPos;
	int internalID;
	unsigned int flags;
	unsigned short pad;
	unsigned short priority;
	float vol;
	float pitch;
	unsigned int sample_rate;
	unsigned int deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float innerRadius2;
	float outerRadius2;
	unsigned int lock_owner;
	iSndInfo ps;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
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
	type_40 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
};

struct _class_1
{
	unsigned int address;
	unsigned int size;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_19 eventFunc;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct rxReq
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_22 Callback;
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

struct _xSndDelayed
{
	unsigned int id;
	float vol;
	float pitch;
	unsigned int priority;
	unsigned int flags;
	unsigned int parentID;
	xEnt* parentEnt;
	xVec3* pos;
	float innerRadius;
	float outerRadius;
	sound_category category;
	float delay;
	unsigned int pad0;
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

struct _class_2
{
	int file_index;
	unsigned int lsn;
	unsigned int data_size;
	unsigned short stream_interleave_size;
	unsigned short stream_interleave_count;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_43 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_3 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xShadowSimplePoly
{
	type_25 vert;
	xVec3 norm;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct RpTriangle
{
	type_28 vertIndex;
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
	type_8 NumAnims;
	void** RawData;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_47 destroyNotify;
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
	type_23 resolvID;
	type_26 base2Name;
	type_27 id2Name;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_41 corner;
};

enum sound_effect
{
	SND_EFFECT_NONE,
	SND_EFFECT_CAVE
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
	type_48 colls;
	type_32 post;
	type_38 depenq;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

enum sound_listener_type
{
	SND_LISTENER_CAMERA,
	SND_LISTENER_PLAYER,
	SND_MAX_LISTENER_TYPES
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct iSndInfo
{
	unsigned int flags;
	iSndVol vol;
	unsigned int pitch;
	int lastStreamBuffer;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_52 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_45 name;
	type_46 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RxNodeMethods
{
	type_7 nodeBody;
	type_9 nodeInit;
	type_12 nodeTerm;
	type_14 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_16 pipelineNodeConfig;
	type_5 configMsgHandler;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_6 radius;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct anim_coll_data
{
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
	type_49 clusters;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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
	type_50 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_3
{
	xVec3* verts;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct iSndVol
{
	short volL;
	short volR;
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

struct xSndGlobals
{
	unsigned int stereo;
	unsigned int SndCount;
	type_0 categoryVolFader;
	type_2 voice;
	type_4 listenerMat;
	sound_listener_game_mode listenerMode;
	unsigned int suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_42 buffer;
type_44 buffer;
type_11 sDelayedSnd;
unsigned int sDelayedPaused;
unsigned int snd_annoy_cnt;
type_21 snd_annoy_previous;
xSndGlobals gSnd;
type_18 faders;
int faders_active;
float sTimeElapsed;

void xSndStreamUnlock(unsigned int owner);
unsigned char xSndStreamReady(unsigned int owner);
unsigned char xSndStreamLock(unsigned int owner, sound_category kill_cat, unsigned char kill_nonlooping);
void xSndStopFade(unsigned int snd, float fade_time);
unsigned int xSndPlay3DFade(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay, float fade_time);
void update_faders(float dt);
void xSndSetExternalCallback(type_37 callback);
void xSndLoadExternalData(unsigned int snd, void* data, int forceBuffer);
void xSndSetPitch(unsigned int snd, float pitch);
void xSndSetVol(unsigned int snd, float vol);
void xSndStopChildren(unsigned int pid);
void xSndParentDied(unsigned int pid);
void xSndStop(unsigned int snd);
unsigned int xSndIDIsPlaying(unsigned int sndID);
void xSndStartStereo(unsigned int id1, unsigned int id2, float pitch);
unsigned int xSndIsReady(unsigned int id);
unsigned int xSndPlayInternal(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, unsigned int parentID, xEnt* parentEnt, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay);
unsigned int xSndPlay3D(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay);
unsigned int xSndPlay3D(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, xEnt* parent, float innerRadius, float outerRadius, sound_category category, float delay);
unsigned int xSndPlay(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, unsigned int parentID, sound_category category, float delay);
void xSndExit();
void xSndSelectListenerMode(sound_listener_game_mode listenerMode);
void xSndSetListenerData(sound_listener_type listenerType, xMat4x3* pMat);
void xSndUpdate();
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice);
void xSndProcessSoundPos(xVec3* pActual, xVec3* pProcessed);
void xSndCalculateListenerPosition();
void xSndAddDelayed(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, unsigned int parentID, xEnt* parentEnt, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay);
void xSndStopAll(unsigned int mask);
void xSndSetCategoryVol(sound_category category, float vol);
void xSndPauseCategory(unsigned int mask, unsigned int pause);
void xSndPauseAll(unsigned int pause_effects, unsigned int pause_streams);
void xSndResume();
void xSndSuspend();
void xSndSetEnvironmentalEffect(sound_effect effectType);
void xSndSceneInit();
void xSndInit();

// xSndStreamUnlock__FUi
// Start address: 0x208fd0
void xSndStreamUnlock(unsigned int owner)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
}

// xSndStreamReady__FUi
// Start address: 0x209020
unsigned char xSndStreamReady(unsigned int owner)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
}

// xSndStreamLock__FUi14sound_categoryb
// Start address: 0x209080
unsigned char xSndStreamLock(unsigned int owner, sound_category kill_cat, unsigned char kill_nonlooping)
{
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
	xSndVoiceInfo* v;
}

// xSndStopFade__FUif
// Start address: 0x209220
void xSndStopFade(unsigned int snd, float fade_time)
{
	fade_data* it;
	fade_data* end;
	fade_data* it;
	fade_data* end;
}

// xSndPlay3DFade__FUiffUiUiPC5xVec3ff14sound_categoryff
// Start address: 0x2093b0
unsigned int xSndPlay3DFade(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay, float fade_time)
{
	fade_data& f;
}

// update_faders__Ff
// Start address: 0x2094e0
void update_faders(float dt)
{
	fade_data* it;
	fade_data* end;
	float volume;
}

// xSndSetExternalCallback__FPFUib_v
// Start address: 0x209630
void xSndSetExternalCallback(type_37 callback)
{
}

// xSndLoadExternalData__FUiPCvi
// Start address: 0x209640
void xSndLoadExternalData(unsigned int snd, void* data, int forceBuffer)
{
}

// xSndSetPitch__FUif
// Start address: 0x209650
void xSndSetPitch(unsigned int snd, float pitch)
{
}

// xSndSetVol__FUif
// Start address: 0x209660
void xSndSetVol(unsigned int snd, float vol)
{
}

// xSndStopChildren__FUi
// Start address: 0x209670
void xSndStopChildren(unsigned int pid)
{
	unsigned int i;
	xSndVoiceInfo* vp;
}

// xSndParentDied__FUi
// Start address: 0x209700
void xSndParentDied(unsigned int pid)
{
	unsigned int i;
	xSndVoiceInfo* vp;
}

// xSndStop__FUi
// Start address: 0x209740
void xSndStop(unsigned int snd)
{
}

// xSndIDIsPlaying__FUi
// Start address: 0x209750
unsigned int xSndIDIsPlaying(unsigned int sndID)
{
	xSndVoiceInfo* vp;
	unsigned int i;
}

// xSndStartStereo__FUiUif
// Start address: 0x2097b0
void xSndStartStereo(unsigned int id1, unsigned int id2, float pitch)
{
}

// xSndIsReady__FUi
// Start address: 0x2097c0
unsigned int xSndIsReady(unsigned int id)
{
}

// xSndPlayInternal__FUiffUiUiUiP4xEntPC5xVec3ff14sound_categoryf
// Start address: 0x2097e0
unsigned int xSndPlayInternal(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, unsigned int parentID, xEnt* parentEnt, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay)
{
	float temp;
	unsigned int i;
	unsigned int i;
	unsigned int i;
	unsigned int voice;
	unsigned int sample_rate;
	int internalID;
	iSndFileInfo* ip;
	iSndFileInfo* ip;
	xSndVoiceInfo* vp;
}

// xSndPlay3D__FUiffUiUiPC5xVec3ff14sound_categoryf
// Start address: 0x209d40
unsigned int xSndPlay3D(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay)
{
	unsigned int sndID;
}

// xSndPlay3D__FUiffUiUiP4xEntff14sound_categoryf
// Start address: 0x209d90
unsigned int xSndPlay3D(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, xEnt* parent, float innerRadius, float outerRadius, sound_category category, float delay)
{
	unsigned int sndID;
}

// xSndPlay__FUiffUiUiUi14sound_categoryf
// Start address: 0x209db0
unsigned int xSndPlay(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, unsigned int parentID, sound_category category, float delay)
{
	unsigned int sndID;
}

// xSndExit__Fv
// Start address: 0x209dd0
void xSndExit()
{
}

// xSndSelectListenerMode__F24sound_listener_game_mode
// Start address: 0x209df0
void xSndSelectListenerMode(sound_listener_game_mode listenerMode)
{
}

// xSndSetListenerData__F19sound_listener_typePC7xMat4x3
// Start address: 0x209e00
void xSndSetListenerData(sound_listener_type listenerType, xMat4x3* pMat)
{
}

// xSndUpdate__Fv
// Start address: 0x209ef0
void xSndUpdate()
{
}

// xSndInternalUpdateVoicePos__FP13xSndVoiceInfo
// Start address: 0x209fb0
void xSndInternalUpdateVoicePos(xSndVoiceInfo* pVoice)
{
	xEnt* ent;
}

// xSndProcessSoundPos__FPC5xVec3P5xVec3
// Start address: 0x20a0d0
void xSndProcessSoundPos(xVec3* pActual, xVec3* pProcessed)
{
	xVec3 playerDelta;
	float inwardShift;
	float factor;
}

// xSndCalculateListenerPosition__Fv
// Start address: 0x20a340
void xSndCalculateListenerPosition()
{
	xMat4x3* pMat;
	xMat4x3* pMat;
}

// xSndAddDelayed__FUiffUiUiUiP4xEntP5xVec3ff14sound_categoryf
// Start address: 0x20a4e0
void xSndAddDelayed(unsigned int id, float vol, float pitch, unsigned int priority, unsigned int flags, unsigned int parentID, xEnt* parentEnt, xVec3* pos, float innerRadius, float outerRadius, sound_category category, float delay)
{
	_xSndDelayed* snd;
	int i;
}

// xSndStopAll__FUi
// Start address: 0x20a560
void xSndStopAll(unsigned int mask)
{
	unsigned int i;
}

// xSndSetCategoryVol__F14sound_categoryf
// Start address: 0x20a620
void xSndSetCategoryVol(sound_category category, float vol)
{
}

// xSndPauseCategory__FUiUi
// Start address: 0x20a640
void xSndPauseCategory(unsigned int mask, unsigned int pause)
{
	unsigned int i;
}

// xSndPauseAll__FUiUi
// Start address: 0x20a6e0
void xSndPauseAll(unsigned int pause_effects, unsigned int pause_streams)
{
	unsigned int i;
}

// xSndResume__Fv
// Start address: 0x20a790
void xSndResume()
{
}

// xSndSuspend__Fv
// Start address: 0x20a820
void xSndSuspend()
{
}

// xSndSetEnvironmentalEffect__F12sound_effect
// Start address: 0x20a8c0
void xSndSetEnvironmentalEffect(sound_effect effectType)
{
}

// xSndSceneInit__Fv
// Start address: 0x20a910
void xSndSceneInit()
{
	unsigned int i;
}

// xSndInit__Fv
// Start address: 0x20a9f0
void xSndInit()
{
	unsigned int i;
	xSndVoiceInfo* voice;
}

