typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct xAnimState;
typedef struct xBase;
typedef struct xModelInstance;
typedef struct RpTriangle;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct xLinkAsset;
typedef enum _tagPadState;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RpMeshHeader;
typedef struct xModelPool;
typedef struct xVec3;
typedef struct RxNodeDefinition;
typedef struct RxPipeline;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct xGlobals;
typedef struct xEnt;
typedef struct RwResEntry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xScene;
typedef struct xAnimPlay;
typedef struct xShadowSimpleCache;
typedef struct RpGeometry;
typedef struct RxPipelineCluster;
typedef struct xEntCollis;
typedef struct xUpdateCullEnt;
typedef struct _tagxPad;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct RpClump;
typedef struct xBaseAsset;
typedef struct RpLight;
typedef struct xQuat;
typedef struct xEntFrame;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct _tagPadAnalog;
typedef struct rxHeapBlockHeader;
typedef struct xGroup;
typedef struct xCollis;
typedef struct xBound;
typedef struct _tagiPad;
typedef enum RpWorldRenderOrder;
typedef struct xUpdateCullMgr;
typedef struct RxPipelineRequiresCluster;
typedef struct xGroupAsset;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xVec2;
typedef struct xAnimMultiFile;
typedef struct xFFX;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RpSector;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct xUpdateCullGroup;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct rxReq;
typedef struct xEntShadow;
typedef enum RxClusterValidityReq;
typedef struct anim_coll_data;
typedef struct xAnimTable;
typedef struct _tagxRumble;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct xGridBound;
typedef enum RxClusterValid;
typedef struct xRot;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef struct tri_data;
typedef enum _tagRumbleType;
typedef struct xCamera;
typedef struct RwSphere;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct iFogParams;
typedef struct RwTexDictionary;
typedef struct RwCamera;
typedef struct RxOutputSpec;
typedef struct analog_data;
typedef struct xMat3x3;
typedef struct RpPolygon;
typedef struct RxClusterRef;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xEntAsset;
typedef struct RwFrustumPlane;
typedef union FloatAndVoid;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xEnv;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xShadowSimplePoly;
typedef struct RwLinkList;

typedef char*(*type_1)(xBase*);
typedef RwCamera*(*type_2)(RwCamera*);
typedef int(*type_3)(RxPipelineNode*);
typedef char*(*type_4)(unsigned int);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef int(*type_8)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_9)(RxPipelineNode*);
typedef RpAtomic*(*type_10)(RpAtomic*);
typedef void(*type_11)(xEnt*, xScene*, float);
typedef int(*type_13)(RxPipelineNode*, RxPipeline*);
typedef void(*type_14)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef unsigned int(*type_16)(void*, void*);
typedef void(*type_17)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_19)(xEnt*);
typedef void(*type_20)(void*);
typedef unsigned int(*type_24)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_25)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_28)(RxNodeDefinition*);
typedef void(*type_29)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_30)(void*, void*);
typedef void(*type_32)(RxNodeDefinition*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpWorldSector*(*type_38)(RpWorldSector*);
typedef xBase*(*type_42)(unsigned int);
typedef unsigned int(*type_43)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_57)(xMemPool*, void*);
typedef RpClump*(*type_59)(RpClump*, void*);
typedef void(*type_61)(RwResEntry*);

typedef xVec3 type_0[3];
typedef unsigned short type_7[3];
typedef float type_12[16];
typedef char type_21[128];
typedef RwFrustumPlane type_22[6];
typedef type_21 type_23[6];
typedef RwV3d type_27[8];
typedef char type_31[32];
typedef RwTexCoords* type_33[8];
typedef xVec3 type_35[4];
typedef unsigned char type_39[22];
typedef unsigned char type_40[22];
typedef xCollis type_41[18];
typedef unsigned int type_44[4];
typedef float type_45[22];
typedef float type_46[2];
typedef float type_47[22];
typedef unsigned char type_48[3];
typedef unsigned int type_49[4096];
typedef unsigned short type_50[3];
typedef float type_51[2];
typedef xVec4 type_52[12];
typedef unsigned char type_53[2];
typedef xAnimMultiFileEntry type_54[1];
typedef analog_data type_55[2];
typedef float type_56[4];
typedef char type_58[32];
typedef char type_60[32];
typedef RwTexCoords* type_62[8];
typedef RxCluster type_63[1];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_6 sync;
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
	type_34 BeforeEnter;
	type_36 StateCallback;
	type_37 BeforeAnimMatrices;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_8 eventFunc;
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

struct RpTriangle
{
	type_7 vertIndex;
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
	type_10 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_43 Callback;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_56 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float x;
	float y;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xVec3
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
	type_12 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_53 NumAnims;
	void** RawData;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_23 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_31 sceneStart;
	RpWorld* currWorld;
	iFogParams fog;
	iFogParams fogA;
	iFogParams fogB;
	long fog_t0;
	long fog_t1;
	int option_vibration;
	unsigned int QuarterSpeed;
	float update_dt;
	int useHIPHOP;
	unsigned char NoMusic;
	char currentActivePad;
	unsigned char firstStartPressed;
	unsigned int minVSyncCnt;
	unsigned char dontShowPadMessageDuringLoadingOrCutScene;
	unsigned char autoSaveFeature;
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
	type_11 update;
	type_11 endUpdate;
	type_15 bupdate;
	type_17 move;
	type_19 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_29 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_61 destroyNotify;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_42 resolvID;
	type_1 base2Name;
	type_4 id2Name;
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
	type_37 BeforeAnimMatrices;
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
	type_35 corner;
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
	type_33 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_41 colls;
	type_14 post;
	type_25 depenq;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_16 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct _tagxPad
{
	type_39 value;
	type_40 last_value;
	unsigned int on;
	unsigned int pressed;
	unsigned int released;
	_tagPadAnalog analog1;
	_tagPadAnalog analog2;
	_tagPadState state;
	unsigned int flags;
	_tagxRumble rumble_head;
	short port;
	short slot;
	_tagiPad context;
	float al2d_timer;
	float ar2d_timer;
	float d_timer;
	type_45 up_tmr;
	type_47 down_tmr;
	type_55 analog;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_18 Conditional;
	type_18 Callback;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_59 callback;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct xQuat
{
	xVec3 v;
	float s;
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

struct _tagPadAnalog
{
	char x;
	char y;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_44 pad;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_48 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagiPad
{
	int port;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullMgr
{
	unsigned int entCount;
	unsigned int entActive;
	void** ent;
	xUpdateCullEnt** mgr;
	unsigned int mgrCount;
	unsigned int mgrCurr;
	xUpdateCullEnt* mgrList;
	unsigned int grpCount;
	xUpdateCullGroup* grpList;
	type_20 activateCB;
	type_20 deactivateCB;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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

struct xVec2
{
	float x;
	float y;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_54 Files;
};

struct xFFX
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_58 name;
	type_60 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_38 renderCallBack;
	RxPipeline* pipeline;
};

struct RpSector
{
	int type;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_62 texCoords;
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

struct rxReq
{
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_51 radius;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct anim_coll_data
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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
	type_46 BilinearLerp;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

enum _tagRumbleType
{
	eRumble_Off,
	eRumble_Hi,
	eRumble_VeryLightHi,
	eRumble_VeryLight,
	eRumble_LightHi,
	eRumble_Light,
	eRumble_MediumHi,
	eRumble_Medium,
	eRumble_HeavyHi,
	eRumble_Heavy,
	eRumble_VeryHeavyHi,
	eRumble_VeryHeavy,
	eRumble_Total,
	eRumbleForceU32 = 0x7fffffff
};

struct xCamera : xBase
{
	RwCamera* lo_cam;
	xMat4x3 mat;
	xMat4x3 omat;
	xMat3x3 mbasis;
	xBound bound;
	xMat4x3* tgt_mat;
	xMat4x3* tgt_omat;
	xBound* tgt_bound;
	xVec3 focus;
	xScene* sc;
	xVec3 tran_accum;
	float fov;
	unsigned int flags;
	float tmr;
	float tm_acc;
	float tm_dec;
	float ltmr;
	float ltm_acc;
	float ltm_dec;
	float dmin;
	float dmax;
	float dcur;
	float dgoal;
	float hmin;
	float hmax;
	float hcur;
	float hgoal;
	float pmin;
	float pmax;
	float pcur;
	float pgoal;
	float depv;
	float hepv;
	float pepv;
	float orn_epv;
	float yaw_epv;
	float pitch_epv;
	float roll_epv;
	xQuat orn_cur;
	xQuat orn_goal;
	xQuat orn_diff;
	float yaw_cur;
	float yaw_goal;
	float pitch_cur;
	float pitch_goal;
	float roll_cur;
	float roll_goal;
	float dct;
	float dcd;
	float dccv;
	float dcsv;
	float hct;
	float hcd;
	float hccv;
	float hcsv;
	float pct;
	float pcd;
	float pccv;
	float pcsv;
	float orn_ct;
	float orn_cd;
	float orn_ccv;
	float orn_csv;
	float yaw_ct;
	float yaw_cd;
	float yaw_ccv;
	float yaw_csv;
	float pitch_ct;
	float pitch_cd;
	float pitch_ccv;
	float pitch_csv;
	float roll_ct;
	float roll_cd;
	float roll_ccv;
	float roll_csv;
	type_52 frustplane;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct iFogParams
{
	RwFogType type;
	float start;
	float stop;
	float density;
	RwRGBA fogcolor;
	RwRGBA bgcolor;
	unsigned char* table;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_2 beginUpdate;
	type_5 endUpdate;
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
	type_22 frustumPlanes;
	RwBBox frustumBoundBox;
	type_27 frustumCorners;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_50 vertIndex;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_26 nodeBody;
	type_28 nodeInit;
	type_32 nodeTerm;
	type_3 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_24 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_57 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

union FloatAndVoid
{
	float f;
	void* v;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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
	type_63 clusters;
};

struct xEnv
{
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct xShadowSimplePoly
{
	type_0 vert;
	xVec3 norm;
};

struct RwLinkList
{
	RwLLLink link;
};

type_49 ourGlobals;
type_30 xUpdateCull_AlwaysTrueCB;
unsigned int gActiveHeap;
xGlobals* xglobals;

void xUpdateCull_Reset(xUpdateCullMgr* m);
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, type_16 cb, void* cbdata);
void xUpdateCull_Update(xUpdateCullMgr* m, unsigned int percent_update);
xUpdateCullMgr* xUpdateCull_Init(void** ent, unsigned int entCount, xGroup** group, unsigned int groupCount);
unsigned int xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata);
unsigned int xUpdateCull_AlwaysTrueCB();
void xUpdateCull_Swap(xUpdateCullMgr* m, unsigned int a, unsigned int b);

// xUpdateCull_Reset__FP14xUpdateCullMgr
// Start address: 0x328de0
void xUpdateCull_Reset(xUpdateCullMgr* m)
{
	unsigned int i;
}

// xUpdateCull_SetCB__FP14xUpdateCullMgrPvPFPvPv_UiPv
// Start address: 0x328eb0
void xUpdateCull_SetCB(xUpdateCullMgr* m, void* entity, type_16 cb, void* cbdata)
{
	unsigned int i;
}

// xUpdateCull_Update__FP14xUpdateCullMgrUi
// Start address: 0x328f20
void xUpdateCull_Update(xUpdateCullMgr* m, unsigned int percent_update)
{
	int numiters;
	unsigned int i;
	xUpdateCullEnt* cent;
	unsigned int result;
	xUpdateCullGroup* grp;
	xUpdateCullEnt* curr;
}

// xUpdateCull_Init__FPPvUiPP6xGroupUi
// Start address: 0x3292d0
xUpdateCullMgr* xUpdateCull_Init(void** ent, unsigned int entCount, xGroup** group, unsigned int groupCount)
{
	void** tempEnt;
	unsigned int tempCount;
	unsigned int idx;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int gcnt;
	unsigned int entsInThisGroup;
	unsigned int entsInGroups;
	unsigned int nonEmptyGroups;
	int x;
	unsigned char* inGroupArray;
	xBase* base;
	unsigned int mgrCount;
	xUpdateCullMgr* m;
	int grpIndex;
	int mgrIndex;
	int startIndex;
	xBase* base;
	xUpdateCullEnt** prevPtr;
}

// xUpdateCull_DistanceSquaredCB__FPvPv
// Start address: 0x3298a0
unsigned int xUpdateCull_DistanceSquaredCB(void* ent, void* cbdata)
{
	FloatAndVoid fandv;
	xVec3* campos;
}

// xUpdateCull_AlwaysTrueCB__FPvPv
// Start address: 0x329920
unsigned int xUpdateCull_AlwaysTrueCB()
{
}

// xUpdateCull_Swap__FP14xUpdateCullMgrUiUi
// Start address: 0x329930
void xUpdateCull_Swap(xUpdateCullMgr* m, unsigned int a, unsigned int b)
{
	xUpdateCullEnt* cullA;
	xUpdateCullEnt* cullB;
	xUpdateCullEnt* curr;
	void* tmpent;
	xUpdateCullEnt* tmpmgr;
}

