typedef struct RpInterpolator;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct tag_xFile;
typedef struct xCutsceneMphRun;
typedef struct RpAtomic;
typedef struct xGlobals;
typedef struct xAnimMultiFileBase;
typedef struct xAnimFile;
typedef struct xCutscene;
typedef struct xAnimEffect;
typedef struct xShadowPoly;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef struct _tagxPad;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xMorphTargetFile;
typedef struct xCutsceneAnimHdr;
typedef struct RxNodeDefinition;
typedef struct xVec3;
typedef struct JDeltaRun;
typedef struct RpPolygon;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct xGridBound;
typedef struct xAnimActiveEffect;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xGroupAsset;
typedef struct RpMaterialList;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xAnimPlay;
typedef struct _tagPadAnalog;
typedef struct xAnimTable;
typedef struct RxPipelineNodeParam;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct RpMaterial;
typedef struct RxHeap;
typedef struct _tagiPad;
typedef struct xAnimState;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimMultiFile;
typedef struct xUpdateCullMgr;
typedef struct xEnt;
typedef struct xQuat;
typedef struct XCSNNosey;
typedef struct xShadowCache;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct rxHeapBlockHeader;
typedef struct xCutsceneInfo;
typedef struct xEntCollis;
typedef struct RpGeometry;
typedef struct JDeltaTarget;
typedef struct RpWorld;
typedef struct RpWorldSector;
typedef struct xCutsceneTime;
typedef struct RxPipelineRequiresCluster;
typedef struct RpMorphTarget;
typedef struct xLinkAsset;
typedef struct xCutsceneData;
typedef struct xScene;
typedef struct tagiRenderArrays;
typedef struct xEntFrame;
typedef struct RpVertexNormal;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xCutsceneBreak;
typedef struct rxReq;
typedef struct _tagxRumble;
typedef struct xEnv;
typedef struct RpMeshHeader;
typedef struct xSurface;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct xMemPool;
typedef struct xShadowSimplePoly;
typedef struct xGroup;
typedef struct CutsceneShadowModel;
typedef struct xUpdateCullEnt;
typedef struct xFFX;
typedef struct RpTriangle;
typedef struct xBase;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct RwTexture;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xShadowSimpleCache;
typedef struct zFlyKey;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimTransitionList;
typedef struct RpLight;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xCollis;
typedef enum RpWorldRenderOrder;
typedef struct analog_data;
typedef struct FakeEntityInfo;
typedef struct RwSphere;
typedef struct xCamera;
typedef struct RwTexDictionary;
typedef struct xModelBucket;
typedef struct RpSector;
typedef struct RxOutputSpec;
typedef struct RxObjSpace3DVertex;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xEntShadow;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct anim_coll_data;
typedef struct RxIoSpec;
typedef struct xBaseAsset;
typedef struct RxNodeMethods;
typedef struct xCutsceneMphFrame;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xBound;
typedef struct RxCluster;
typedef struct iFogParams;
typedef struct xAnimMultiFileEntry;
typedef struct RxPacket;
typedef struct xVec2;
typedef struct _class_1;
typedef struct tri_data;
typedef struct xQCData;
typedef enum RwFogType;
typedef struct tag_iFile;
typedef struct xBBox;
typedef struct RwRGBAReal;
typedef enum _tagPadState;
typedef struct RwLinkList;

typedef unsigned int(*type_0)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef int(*type_2)(RxPipelineNode*);
typedef RwCamera*(*type_4)(RwCamera*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_7)(RxPipelineNode*);
typedef unsigned int(*type_9)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_13)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_23)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_24)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_25)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_27)(RxNodeDefinition*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef void(*type_30)(RxNodeDefinition*);
typedef unsigned int(*type_35)(void*, void*);
typedef void(*type_40)(xAnimPlay*, xAnimState*);
typedef void(*type_42)(void*);
typedef xBase*(*type_45)(unsigned int);
typedef char*(*type_47)(xBase*);
typedef void(*type_49)(xAnimPlay*, xQuat*, xVec3*, int);
typedef char*(*type_51)(unsigned int);
typedef RpAtomic*(*type_54)(RpAtomic*);
typedef void(*type_55)(xEnt*, xScene*, float);
typedef void(*type_57)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_58)(xEnt*, xVec3*);
typedef void(*type_59)(CutsceneShadowModel*);
typedef void(*type_60)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_62)(xEnt*);
typedef int(*type_67)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_68)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_79)(RpWorldSector*);
typedef void(*type_85)(xMemPool*, void*);
typedef void(*type_90)(RwResEntry*);

typedef float type_3[2];
typedef RwMatrixTag type_6[65];
typedef xVec3 type_8[3];
typedef float type_10[2];
typedef char type_11[128];
typedef float type_12[3];
typedef unsigned short type_14[3];
typedef type_11 type_15[6];
typedef short* type_16[4];
typedef char type_17[32];
typedef unsigned char type_18[2];
typedef xAnimMultiFileEntry type_19[1];
typedef char type_20[32];
typedef RwFrustumPlane type_21[6];
typedef short type_22[4];
typedef RwV3d type_26[8];
typedef float type_28[5];
typedef JDeltaRun type_31[1];
typedef xQuat type_32[2];
typedef xEnt* type_33[16];
typedef unsigned short type_34[960];
typedef xShadowPoly type_36[256];
typedef RwTexCoords* type_37[8];
typedef RxObjSpace3DVertex type_38[480];
typedef unsigned char type_39[22];
typedef unsigned char type_41[3];
typedef float type_43[480];
typedef unsigned char type_44[22];
typedef xVec3 type_46[3];
typedef float type_48[4];
typedef char type_50[16];
typedef char type_52[16];
typedef unsigned short type_53[3];
typedef float type_56[16];
typedef xQuat type_61[65];
typedef float type_63[22];
typedef xVec3 type_64[65];
typedef RwMatrixTag type_65[65];
typedef float type_66[22];
typedef unsigned int type_70[4];
typedef float type_71[128];
typedef RwTexCoords* type_72[8];
typedef xVec3 type_73[4];
typedef unsigned int type_74[2];
typedef unsigned int type_75[4096];
typedef float type_76[12];
typedef unsigned int type_77[2];
typedef analog_data type_78[2];
typedef char type_80[16];
typedef float type_81[2];
typedef unsigned int type_82[2];
typedef char type_83[16];
typedef xCollis type_84[18];
typedef char type_86[32];
typedef char type_87[32];
typedef short* type_88[4];
typedef xVec4 type_89[12];
typedef short type_91[4];
typedef xModelInstance type_92[8];
typedef char type_93[128];
typedef RxCluster type_94[1];
typedef xEnt type_95[8];

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
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

struct tag_xFile
{
	type_17 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneMphRun
{
	int VertIdx;
	int VertCt;
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
	type_54 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_15 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_20 sceneStart;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
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
	type_18 NumAnims;
	void** RawData;
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	unsigned int* TimeChunkOffs;
	unsigned int* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	unsigned int Waiting;
	unsigned int BadReadPause;
	float BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float Time;
	float CamTime;
	unsigned int PlayIndex;
	unsigned int Ready;
	int DataLoading;
	unsigned int GotData;
	unsigned int ShutDownWait;
	float PlaybackSpeed;
	unsigned int Opened;
	tag_xFile File;
	int AsyncID;
	void* MemBuf;
	void* MemCurr;
	unsigned int SndStarted;
	unsigned int SndNumChannel;
	type_74 SndChannelReq;
	type_77 SndAssetID;
	type_82 SndHandle;
	XCSNNosey* cb_nosey;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_0 Callback;
};

struct xShadowPoly
{
	type_8 vert;
	xVec3 norm;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_9 Conditional;
	type_9 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct _tagxPad
{
	type_39 value;
	type_44 last_value;
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
	type_63 up_tmr;
	type_66 down_tmr;
	type_78 analog;
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

struct xMorphTargetFile
{
	unsigned int Magic;
	unsigned short NumTargets;
	unsigned short NumVerts;
	unsigned int Flags;
	float Scale;
	xVec3 Center;
	float Radius;
};

struct xCutsceneAnimHdr
{
	unsigned int RootIndex;
	type_12 Translate;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct JDeltaRun
{
	int VertIdx;
	int VertCt;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_14 vertIndex;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_3 BilinearLerp;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct _tagPadAnalog
{
	char x;
	char y;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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

struct _tagiPad
{
	int port;
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
	type_40 BeforeEnter;
	type_24 StateCallback;
	type_49 BeforeAnimMatrices;
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
	type_19 Files;
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
	type_42 activateCB;
	type_42 deactivateCB;
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
	type_55 update;
	type_55 endUpdate;
	type_58 bupdate;
	type_60 move;
	type_62 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_69 transl;
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

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct xShadowCache
{
	xVec3 pos;
	float radius;
	unsigned int entCount;
	unsigned int polyCount;
	type_28 polyRayDepth;
	unsigned short castOnEnt;
	unsigned short castOnPoly;
	type_33 ent;
	type_36 poly;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_29 callback;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_70 pad;
};

struct xCutsceneInfo
{
	unsigned int Magic;
	unsigned int AssetID;
	unsigned int NumData;
	unsigned int NumTime;
	unsigned int MaxModel;
	unsigned int MaxBufEven;
	unsigned int MaxBufOdd;
	unsigned int HeaderSize;
	unsigned int VisCount;
	unsigned int VisSize;
	unsigned int BreakCount;
	unsigned int pad;
	type_50 SoundLeft;
	type_52 SoundRight;
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
	type_84 colls;
	type_57 post;
	type_68 depenq;
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
	type_72 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct JDeltaTarget
{
	int skipSize;
	int numRuns;
	int numVerts;
	float scale;
	type_31 runs;
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
	type_79 renderCallBack;
	RxPipeline* pipeline;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_37 texCoords;
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

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_48 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xCutsceneData
{
	unsigned int DataType;
	unsigned int AssetID;
	unsigned int ChunkSize;
	union
	{
		unsigned int FileOffset;
		void* DataPtr;
	};
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
	type_45 resolvID;
	type_47 base2Name;
	type_51 id2Name;
};

struct tagiRenderArrays
{
	type_34 m_index;
	type_38 m_vertex;
	type_43 m_vertexTZ;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct xCutsceneBreak
{
	float Time;
	int Index;
};

struct rxReq
{
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct xSurface
{
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_90 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_85 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xShadowSimplePoly
{
	type_46 vert;
	xVec3 norm;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct CutsceneShadowModel
{
	RpAtomic* model;
	RwMatrixTag* animMat;
	unsigned int shadowBits;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_35 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xFFX
{
};

struct RpTriangle
{
	type_53 vertIndex;
	short matIndex;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_67 eventFunc;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_87 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_56 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_73 corner;
};

struct zFlyKey
{
	int frame;
	type_76 matrix;
	type_81 aperture;
	float focal;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct FakeEntityInfo
{
	RpAtomic* model;
	xCutsceneAnimHdr* ahdr;
	float time;
	type_88 v_array;
	type_91 weight;
	float scale;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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
	type_89 frustplane;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RpSector
{
	int type;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_10 radius;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_1 beginUpdate;
	type_4 endUpdate;
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
	type_21 frustumPlanes;
	RwBBox frustumBoundBox;
	type_26 frustumCorners;
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

struct anim_coll_data
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RxNodeMethods
{
	type_25 nodeBody;
	type_27 nodeInit;
	type_30 nodeTerm;
	type_2 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_13 pipelineNodeConfig;
	type_23 configMsgHandler;
};

struct xCutsceneMphFrame
{
	float Time;
	unsigned int Flags;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_41 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_94 clusters;
};

struct xVec2
{
	float x;
	float y;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	unsigned int flags;
	type_93 path;
	int fd;
	int offset;
	int length;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwLinkList
{
	RwLLLink link;
};

type_80 buffer;
type_83 buffer;
xCutscene sActiveCutscene;
unsigned int sCutTocCount;
xCutsceneInfo* sCutTocInfo;
type_95 sCutsceneFakeEntity;
type_92 sCutsceneFakeModel;
float ShadowStrength;
type_59 CutsceneShadowRender;
tagiRenderArrays gRenderArr;
type_75 ourGlobals;
xMat4x3 g_I3;
xGlobals* xglobals;
float gCameraLastFov;
unsigned int gActiveHeap;

void xCutscene_Render(xCutscene* csn);
void CutsceneShadowRender(CutsceneShadowModel* smod);
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, float time);
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float time, unsigned int tworoot);
void xCutscene_SetCamera(xCutscene* csn, xCamera* cam);
void xCutscene_SetSpeed(xCutscene* csn, float speed);
int xCutscene_Update(xCutscene* csn, float dt);
int xCutscene_LoadStart(xCutscene* csn);
int xCutscene_Destroy(xCutscene* csn);
xCutscene* xCutscene_Create(unsigned int id);
void xCutscene_Init(void* toc);

// xCutscene_Render__FP9xCutscenePP4xEntPiPf
// Start address: 0x1ce970
void xCutscene_Render(xCutscene* csn)
{
	unsigned int i;
	unsigned int dataIndex;
	unsigned int animIndex;
	unsigned int mphIndex;
	unsigned int visFlags;
	unsigned int visIdx;
	unsigned int fakeCount;
	unsigned int hasAlpha;
	unsigned int boundhack;
	unsigned int tworoot;
	unsigned int noshadow;
	xCutsceneData* data;
	xCutsceneData* mphdata;
	RpAtomic* model;
	RpAtomic* shadowModel;
	type_6 animMat;
	xVec3* camVec;
	XCSNNosey* nosey;
	unsigned int tempSize;
	RpAtomic* tmpModel;
	float maxRadius;
	unsigned int viscnt;
	unsigned int* currvis;
	unsigned int subIndex;
	unsigned int frameMin;
	unsigned int frameMax;
	unsigned int frameIndex;
	unsigned int shadowBits;
	RpGeometry* geom;
	RwTexture* tex;
	int matnum;
	unsigned int morphAnimIndex;
	unsigned int morphModelIndex;
	unsigned int numFrame;
	unsigned int numRun;
	xCutsceneMphFrame* mphFrame;
	xCutsceneMphRun* mphRun;
	xMorphTargetFile* mphFile;
	type_16 v_array;
	type_22 weight;
	unsigned int skipsize;
	xVec3* csnTmpArray;
	xVec3* currtmp;
	xVec3* outv;
	unsigned int j;
	unsigned int cmpval;
	void* deltaAnim;
	void* deltaModel;
	CutsceneShadowModel smod;
	xShadowCache scache;
	xVec3 center;
	float radius;
	xVec3 shadVec;
}

// CutsceneShadowRender__FP19CutsceneShadowModel
// Start address: 0x1cf6b0
void CutsceneShadowRender(CutsceneShadowModel* smod)
{
	RpAtomic* model;
	unsigned int bits;
}

// JDeltaEval__FP8RpAtomicPvPvf
// Start address: 0x1cf720
void JDeltaEval(RpAtomic* model, void* deltaModel, void* deltaAnim, float time)
{
	type_71 outweight;
	float* currweight;
	int i;
	int numFrames;
	int numWeights;
	float* times;
	float* weights;
	float lerp;
	float invlerp;
	RwV3d* outverts;
	int numRun;
	JDeltaTarget* dtgt;
	float scale;
	short* svert;
	int j;
	int cmpval;
	RwV3d* vert;
	int j;
	int cmpval;
	float scale;
	short* svert;
	int j;
	int cmpval;
	float scale;
	RwV3d* vert;
	int j;
	int cmpval;
}

// xcsCalcAnimMatrices__FP11RwMatrixTagP8RpAtomicP16xCutsceneAnimHdrfUi
// Start address: 0x1cfd30
void xcsCalcAnimMatrices(RwMatrixTag* animMat, RpAtomic* model, xCutsceneAnimHdr* ahdr, float time, unsigned int tworoot)
{
	type_61 quatresult;
	type_64 tranresult;
	void* afile;
	xMat4x3 m1;
	xMat4x3 m2;
	unsigned int numbone;
	unsigned int boneidx;
	xQuat* qqq;
	xVec3* ttt;
	xVec3 addtran;
}

// xCutscene_SetCamera__FP9xCutsceneP7xCamera
// Start address: 0x1cffc0
void xCutscene_SetCamera(xCutscene* csn, xCamera* cam)
{
	xCutsceneData* data;
	unsigned int i;
	unsigned int dataIndex;
	float camFOV;
	xMat4x3 camMat;
	xMat3x3 tmpMat;
	type_32 quats;
	xQuat qresult;
	float invlerp;
	float lerp;
	int frame;
	unsigned int count;
	zFlyKey* keys;
}

// xCutscene_SetSpeed__FP9xCutscenef
// Start address: 0x1d0380
void xCutscene_SetSpeed(xCutscene* csn, float speed)
{
	float semitones;
	int i;
}

// xCutscene_Update__FP9xCutscenef
// Start address: 0x1d0480
int xCutscene_Update(xCutscene* csn, float dt)
{
	xCutsceneTime* oldChunk;
}

// xCutscene_LoadStart__FP9xCutscene
// Start address: 0x1d0780
int xCutscene_LoadStart(xCutscene* csn)
{
}

// xCutscene_Destroy__FP9xCutscene
// Start address: 0x1d07c0
int xCutscene_Destroy(xCutscene* csn)
{
	unsigned int i;
}

// xCutscene_Create__FUi
// Start address: 0x1d0940
xCutscene* xCutscene_Create(unsigned int id)
{
	xCutscene* csn;
	unsigned int i;
	xCutsceneInfo* cnfo;
	unsigned int maxload;
}

// xCutscene_Init__FPv
// Start address: 0x1d0ac0
void xCutscene_Init(void* toc)
{
	int i;
}

