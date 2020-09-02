typedef struct RxPipelineNode;
typedef struct xEntOrbitData;
typedef struct RwObjectHasFrame;
typedef struct xScene;
typedef struct NPCGlyph;
typedef struct RpInterpolator;
typedef struct rxHeapFreeBlock;
typedef struct xAnimMultiFileBase;
typedef struct xAnimFile;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct zPlatFMRunTime;
typedef struct RwV2d;
typedef struct xVec3;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct xEntMotion;
typedef struct RxNodeDefinition;
typedef struct xAnimTable;
typedef struct xModelInstance;
typedef struct xPlatformAsset;
typedef enum _tagPadState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntMotionAsset;
typedef struct RpAtomic;
typedef struct xEntBoulder;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPTree;
typedef struct xSurface;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xMat3x3;
typedef struct xAnimActiveEffect;
typedef struct RpPolygon;
typedef struct RxPipelineNodeParam;
typedef struct xGlobals;
typedef struct xAnimPlay;
typedef struct zEntHangable;
typedef struct _class_0;
typedef struct xEnt;
typedef struct RxHeap;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct xQuat;
typedef struct _tagxPad;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xClumpCollBSPTriangle;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xModelPool;
typedef struct xEntSplineData;
typedef enum en_npcglyph;
typedef struct rxHeapBlockHeader;
typedef struct xMovePointAsset;
typedef struct xEntAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xEnvAsset;
typedef struct xEntMotionPenData;
typedef struct RpClump;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct _zPortal;
typedef struct xMat4x3;
typedef struct RpMorphTarget;
typedef struct zPlatform;
typedef struct xEntMPData;
typedef struct xBase;
typedef struct xVec4;
typedef struct xPortalAsset;
typedef struct RwSurfaceProperties;
typedef struct xEntFrame;
typedef struct RpWorld;
typedef struct RwMatrixTag;
typedef struct RpVertexNormal;
typedef union _class_1;
typedef struct rxReq;
typedef struct xMovePoint;
typedef struct zJumpParam;
typedef enum RxClusterValidityReq;
typedef struct xSpline3;
typedef struct xEntMotionERData;
typedef struct RpMeshHeader;
typedef struct xEnv;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct xLinkAsset;
typedef struct xShadowSimplePoly;
typedef struct zCutsceneMgr;
typedef enum RxNodeDefEditable;
typedef struct xCollis;
typedef enum RxClusterValid;
typedef struct iEnv;
typedef struct xRot;
typedef struct _tagxRumble;
typedef struct RpTriangle;
typedef struct zGlobals;
typedef struct zEnt;
typedef struct zAssetPickupTable;
typedef struct xEntDrive;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct zGlobalSettings;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef enum RwCameraProjection;
typedef struct zPlayerLassoInfo;
typedef struct xBaseAsset;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct zScene;
typedef struct xShadowSimpleCache;
typedef struct zLedgeGrabParams;
typedef struct xAnimTransitionList;
typedef struct xEntMotionOrbitData;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xModelTag;
typedef struct xJSPHeader;
typedef struct RpLight;
typedef enum _zPlayerWallJumpState;
typedef struct RwSphere;
typedef enum _SDRenderState;
typedef enum RpWorldRenderOrder;
typedef struct _zEnv;
typedef struct xBound;
typedef struct RwTexDictionary;
typedef enum _tagRumbleType;
typedef struct RxOutputSpec;
typedef enum _zPlayerType;
typedef struct zLasso;
typedef struct xUpdateCullGroup;
typedef struct tri_data_0;
typedef struct xEntMechData;
typedef struct RwTexture;
typedef struct xEntMotionSplineData;
typedef struct xVec2;
typedef struct RpSector;
typedef struct RxClusterRef;
typedef struct xModelBucket;
typedef struct analog_data;
typedef struct xQCData;
typedef struct xEntShadow;
typedef struct RwCamera;
typedef struct xBBox;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct anim_coll_data;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RxNodeMethods;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct RwFrame;
typedef struct zPlayerCarryInfo;
typedef struct RwFrustumPlane;
typedef struct zPlayerSettings;
typedef struct RwPlane;
typedef struct xGridBound;
typedef struct xCamera;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xEntMotionMechData;
typedef struct xAnimMultiFileEntry;
typedef struct xEntPenData;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct _class_2;
typedef struct tri_data_1;
typedef struct RwLinkList;
typedef struct iFogParams;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int(*type_1)(RxPipelineNode*);
typedef void(*type_3)(void*);
typedef unsigned int(*type_4)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef void(*type_10)(RxPipelineNode*);
typedef int(*type_17)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_29)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_33)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_37)(RxNodeDefinition*);
typedef void(*type_38)(RxNodeDefinition*);
typedef RpClump*(*type_46)(RpClump*, void*);
typedef int(*type_47)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_49)(xAnimPlay*, xAnimState*);
typedef void(*type_52)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_53)(unsigned int);
typedef unsigned int(*type_55)(void*, void*);
typedef char*(*type_57)(xBase*);
typedef char*(*type_60)(unsigned int);
typedef void(*type_62)(xEnt*, xScene*, float);
typedef RpAtomic*(*type_64)(RpAtomic*);
typedef void(*type_65)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_66)(xEnt*, xVec3*);
typedef void(*type_67)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_69)(xEnt*);
typedef unsigned int(*type_74)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_79)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_90)(RpWorldSector*);
typedef void(*type_96)(xMemPool*, void*);
typedef void(*type_99)(RwResEntry*);

typedef float type_2[3];
typedef char type_7[16];
typedef float type_8[3];
typedef float type_9[2];
typedef xModelTag type_11[2];
typedef float type_12[3];
typedef float type_13[12];
typedef unsigned char type_14[3];
typedef char type_15[16];
typedef float type_16[12];
typedef float type_19[2];
typedef float type_20[12];
typedef xEnt* type_21[111];
typedef float type_22[12];
typedef float type_23[4];
typedef unsigned short type_24[3];
typedef float type_25[12];
typedef NPCGlyph type_26[16];
typedef RwFrustumPlane type_27[6];
typedef unsigned char type_28[2];
typedef float type_30[12];
typedef xAnimMultiFileEntry type_31[1];
typedef char type_34[128];
typedef RwV3d type_35[8];
typedef type_34 type_36[6];
typedef unsigned char type_39[2];
typedef unsigned char type_40[14];
typedef xModelTag type_41[4];
typedef NPCGlyph type_42[16];
typedef char type_43[32];
typedef int type_44[10];
typedef xModelInstance* type_45[14];
typedef RwTexCoords* type_48[8];
typedef unsigned char type_50[4];
typedef NPCGlyph type_51[16];
typedef xVec3 type_54[3];
typedef unsigned char type_56[22];
typedef NPCGlyph type_58[8];
typedef unsigned char type_59[22];
typedef unsigned short type_61[3];
typedef NPCGlyph type_63[16];
typedef float type_68[16];
typedef xVec3 type_70[5];
typedef NPCGlyph type_71[16];
typedef unsigned int type_72[72];
typedef unsigned char type_73[5];
typedef xVec3 type_75[60];
typedef char type_76[4];
typedef unsigned int type_77[4];
typedef xBase* type_78[72];
typedef float type_80[22];
typedef NPCGlyph type_81[8];
typedef float type_82[22];
typedef RwTexCoords* type_83[8];
typedef xVec3 type_84[4];
typedef float type_85[4];
typedef unsigned int type_86[15];
typedef unsigned int type_87[15];
typedef char type_88[256];
typedef xModelInstance* type_89[10];
typedef unsigned char type_91[2];
typedef unsigned int type_92[15];
typedef NPCGlyph type_93[8];
typedef analog_data type_94[2];
typedef xCollis type_95[18];
typedef char type_97[32];
typedef char type_98[32];
typedef RpLight* type_100[2];
typedef RwFrame* type_101[2];
typedef char* type_102[10];
typedef NPCGlyph type_103[1];
typedef unsigned char type_104[2];
typedef unsigned int type_105[2];
typedef xVec4 type_106[12];
typedef unsigned char type_107[2];
typedef RxCluster type_108[1];
typedef float type_109[6];

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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_6 sync;
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
	type_53 resolvID;
	type_57 base2Name;
	type_60 id2Name;
};

struct NPCGlyph
{
	en_npcglyph typ_glyph;
	int flg_glyph;
	xModelInstance* mdl_glyph;
	xVec3 pos_glyph;
	xVec3 vel_glyph;
	xMat3x3 rot_glyph;
	xVec3 scl_glyph;
	float tmr_glyph;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_28 NumAnims;
	void** RawData;
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

struct zPlatFMRunTime
{
	unsigned int flags;
	type_13 tmrs;
	type_16 ttms;
	type_20 atms;
	type_22 dtms;
	type_25 vms;
	type_30 dss;
};

struct RwV2d
{
	float x;
	float y;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_4 Callback;
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

struct xEntMotion
{
	xEntMotionAsset* asset;
	unsigned char type;
	unsigned char pad;
	unsigned short flags;
	float t;
	float tmr;
	float d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
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

struct xPlatformAsset
{
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xEntMotionAsset
{
	unsigned char type;
	unsigned char use_banking;
	unsigned short flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
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
	type_64 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xEntBoulder
{
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xSurface
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_24 vertIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_36 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_43 sceneStart;
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
	type_52 BeforeAnimMatrices;
};

struct zEntHangable
{
};

struct _class_0
{
	float t;
	float u;
	float v;
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
	type_62 update;
	type_62 endUpdate;
	type_66 bupdate;
	type_67 move;
	type_69 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_79 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xFFX
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct _tagxPad
{
	type_56 value;
	type_59 last_value;
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
	type_80 up_tmr;
	type_82 down_tmr;
	type_94 analog;
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
	type_49 BeforeEnter;
	type_33 StateCallback;
	type_52 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_31 Files;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xEntSplineData
{
	int unknown;
};

enum en_npcglyph
{
	NPC_GLYPH_UNKNOWN,
	NPC_GLYPH_SHINYONE,
	NPC_GLYPH_SHINYFIVE,
	NPC_GLYPH_SHINYTEN,
	NPC_GLYPH_SHINYFIFTY,
	NPC_GLYPH_SHINYHUNDRED,
	NPC_GLYPH_TALK,
	NPC_GLYPH_TALKOTHER,
	NPC_GLYPH_FRIEND,
	NPC_GLYPH_DAZED,
	NPC_GLYPH_NOMORE,
	NPC_GLYPH_FORCE = 0x7fffffff
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_77 pad;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	unsigned short wt;
	unsigned char on;
	unsigned char bezIndex;
	unsigned char flg_props;
	unsigned char pad;
	unsigned short numPoints;
	float delay;
	float zoneRadius;
	float arenaRadius;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xEnvAsset : xBaseAsset
{
	unsigned int bspAssetID;
	unsigned int startCameraAssetID;
	unsigned int climateFlags;
	float climateStrengthMin;
	float climateStrengthMax;
	unsigned int bspLightKit;
	unsigned int objectLightKit;
	float padF1;
	unsigned int bspCollisionAssetID;
	unsigned int bspFXAssetID;
	unsigned int bspCameraAssetID;
	unsigned int bspMapperID;
	unsigned int bspMapperCollisionID;
	unsigned int bspMapperFXID;
	float loldHeight;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_39 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_46 callback;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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
	type_83 texCoords;
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
	type_48 texCoords;
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
	type_3 activateCB;
	type_3 deactivateCB;
};

struct _tagiPad
{
	int port;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	unsigned short state;
	unsigned short plat_flags;
	float tmr;
	int ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float pauseMult;
	float pauseDelta;
};

struct xEntMPData
{
	float curdist;
	float speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float dist;
	unsigned int padalign;
	xQuat aquat;
	xQuat bquat;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_47 eventFunc;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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
	type_90 renderCallBack;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct rxReq
{
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_91 pad;
	float delay;
	xSpline3* spl;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xSpline3
{
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float ext_tm;
	float ext_wait_tm;
	float ret_tm;
	float ret_wait_tm;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_96 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_99 destroyNotify;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_23 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xShadowSimplePoly
{
	type_54 vert;
	xVec3 norm;
};

struct zCutsceneMgr
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
		tri_data_1 tri;
	};
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_100 light;
	type_101 light_frame;
	int memlvl;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct RpTriangle
{
	type_61 vertIndex;
	short matIndex;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct zAssetPickupTable
{
};

struct xEntDrive
{
	unsigned int flags;
	float otm;
	float otmr;
	float os;
	float tm;
	float tmr;
	float s;
	xEnt* odriver;
	xEnt* driver;
	xEnt* driven;
	xVec3 op;
	xVec3 p;
	xVec3 q;
	float yaw;
	xVec3 dloc;
	tri_data_0 tri;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct zGlobalSettings
{
	unsigned short AnalogMin;
	unsigned short AnalogMax;
	float SundaeTime;
	float SundaeMult;
	unsigned int InitialShinyCount;
	unsigned int InitialSpatulaCount;
	int ShinyValuePurple;
	int ShinyValueBlue;
	int ShinyValueGreen;
	int ShinyValueYellow;
	int ShinyValueRed;
	int ShinyValueCombo0;
	int ShinyValueCombo1;
	int ShinyValueCombo2;
	int ShinyValueCombo3;
	int ShinyValueCombo4;
	int ShinyValueCombo5;
	int ShinyValueCombo6;
	int ShinyValueCombo7;
	int ShinyValueCombo8;
	int ShinyValueCombo9;
	int ShinyValueCombo10;
	int ShinyValueCombo11;
	int ShinyValueCombo12;
	int ShinyValueCombo13;
	int ShinyValueCombo14;
	int ShinyValueCombo15;
	float ComboTimer;
	unsigned int Initial_Specials;
	unsigned int TakeDamage;
	float DamageTimeHit;
	float DamageTimeSurface;
	float DamageTimeEGen;
	float DamageSurfKnock;
	float DamageGiveHealthKnock;
	unsigned int CheatSpongeball;
	unsigned int CheatPlayerSwitch;
	unsigned int CheatAlwaysPortal;
	unsigned int CheatFlyToggle;
	unsigned int DisableForceConversation;
	float StartSlideAngle;
	float StopSlideAngle;
	float RotMatchMaxAngle;
	float RotMatchMatchTime;
	float RotMatchRelaxTime;
	float Gravity;
	float BBashTime;
	float BBashHeight;
	float BBashDelay;
	float BBashCVTime;
	float BBounceSpeed;
	float BSpinMinFrame;
	float BSpinMaxFrame;
	float BSpinRadius;
	float SandyMeleeMinFrame;
	float SandyMeleeMaxFrame;
	float SandyMeleeRadius;
	float BubbleBowlTimeDelay;
	float BubbleBowlLaunchPosLeft;
	float BubbleBowlLaunchPosUp;
	float BubbleBowlLaunchPosAt;
	float BubbleBowlLaunchVelLeft;
	float BubbleBowlLaunchVelUp;
	float BubbleBowlLaunchVelAt;
	float BubbleBowlPercentIncrease;
	float BubbleBowlMinSpeed;
	float BubbleBowlMinRecoverTime;
	float SlideAccelVelMin;
	float SlideAccelVelMax;
	float SlideAccelStart;
	float SlideAccelEnd;
	float SlideAccelPlayerFwd;
	float SlideAccelPlayerBack;
	float SlideAccelPlayerSide;
	float SlideVelMaxStart;
	float SlideVelMaxEnd;
	float SlideVelMaxIncTime;
	float SlideVelMaxIncAccel;
	float SlideAirHoldTime;
	float SlideAirSlowTime;
	float SlideAirDblHoldTime;
	float SlideAirDblSlowTime;
	float SlideVelDblBoost;
	unsigned char SlideApplyPhysics;
	type_104 PowerUp;
	type_107 InitialPowerUp;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_55 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_68 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_95 colls;
	type_65 post;
	type_74 depenq;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct zPlayerLassoInfo
{
	xEnt* target;
	float dist;
	unsigned char destroy;
	unsigned char targetGuide;
	float lassoRot;
	xEnt* swingTarget;
	xEnt* releasedSwing;
	float copterTime;
	int canCopter;
	zLasso lasso;
	xAnimState* zeroAnim;
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct zScene : xScene
{
	_zPortal* pendingPortal;
	union
	{
		unsigned int num_ents;
		unsigned int num_base;
	};
	union
	{
		xBase** base;
		zEnt** ents;
	};
	unsigned int num_update_base;
	xBase** update_base;
	type_72 baseCount;
	type_78 baseList;
	_zEnv* zen;
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
	type_84 corner;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_75 tranTable;
	int tranCount;
	xEnt* optr;
	xMat4x3 omat;
	float y0det;
	float dydet;
	float r0det;
	float drdet;
	float thdet;
	float rtime;
	float ttime;
	float tmr;
	xVec3 spos;
	xVec3 epos;
	xVec3 tpos;
	int nrays;
	int rrand;
	float startrot;
	float endrot;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_85 wt;
};

struct xJSPHeader
{
	type_76 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

enum _SDRenderState
{
	SDRS_Unknown,
	SDRS_Default,
	SDRS_OpaqueModels,
	SDRS_AlphaModels,
	SDRS_Bubble,
	SDRS_Projectile,
	SDRS_Font,
	SDRS_HUD,
	SDRS_Particles,
	SDRS_Lightning,
	SDRS_Streak,
	SDRS_SkyBack,
	SDRS_Environment,
	SDRS_Fill,
	SDRS_NPCVisual,
	SDRS_OOBFade,
	SDRS_OOBPlayerZ,
	SDRS_OOBPlayerAlpha,
	SDRS_OOBHand,
	SDRS_Glare,
	SDRS_Newsfish,
	SDRS_CruiseHUD,
	SDRS_DiscoFloorGlow,
	SDRS_Total = 0xffffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_14 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct zLasso
{
	unsigned int flags;
	float secsTotal;
	float secsLeft;
	float stRadius;
	float tgRadius;
	float crRadius;
	xVec3 stCenter;
	xVec3 tgCenter;
	xVec3 crCenter;
	xVec3 stNormal;
	xVec3 tgNormal;
	xVec3 crNormal;
	xVec3 honda;
	float stSlack;
	float stSlackDist;
	float tgSlack;
	float tgSlackDist;
	float crSlack;
	float currDist;
	float lastDist;
	type_70 lastRefs;
	type_73 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float arot;
	float brot;
	float ss;
	float sr;
	int state;
	float tsfd;
	float trfd;
	float tsbd;
	float trbd;
	float* rotptr;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_97 name;
	type_98 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct xVec2
{
	float x;
	float y;
};

struct RpSector
{
	int type;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_19 radius;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
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
	type_27 frustumPlanes;
	RwBBox frustumBoundBox;
	type_35 frustumCorners;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct anim_coll_data
{
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct zPlayerGlobals
{
	zEnt ent;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
	zGlobalSettings g;
	zPlayerSettings* s;
	zPlayerSettings sb;
	zPlayerSettings patrick;
	zPlayerSettings sandy;
	xModelInstance* model_spongebob;
	xModelInstance* model_patrick;
	xModelInstance* model_sandy;
	unsigned int Visible;
	unsigned int Health;
	int Speed;
	float SpeedMult;
	int Sneak;
	int Teeter;
	float SlipFadeTimer;
	int Slide;
	float SlideTimer;
	int Stepping;
	int JumpState;
	int LastJumpState;
	float JumpTimer;
	float LookAroundTimer;
	unsigned int LookAroundRand;
	unsigned int LastProjectile;
	float DecelRun;
	float DecelRunSpeed;
	float HotsauceTimer;
	float LeanLerp;
	float ScareTimer;
	xBase* ScareSource;
	float CowerTimer;
	float DamageTimer;
	float SundaeTimer;
	float ControlOffTimer;
	float HelmetTimer;
	unsigned int WorldDisguise;
	unsigned int Bounced;
	float FallDeathTimer;
	float HeadbuttVel;
	float HeadbuttTimer;
	unsigned int SpecialReceived;
	xEnt* MountChimney;
	float MountChimOldY;
	unsigned int MaxHealth;
	unsigned int DoMeleeCheck;
	float VictoryTimer;
	float BadGuyNearTimer;
	float ForceSlipperyTimer;
	float ForceSlipperyFriction;
	float ShockRadius;
	float ShockRadiusOld;
	float Face_ScareTimer;
	unsigned int Face_ScareRandom;
	unsigned int Face_Event;
	float Face_EventTimer;
	float Face_PantTimer;
	unsigned int Face_AnimSpecific;
	unsigned int IdleRand;
	float IdleMinorTimer;
	float IdleMajorTimer;
	float IdleSitTimer;
	int Transparent;
	zEnt* FireTarget;
	unsigned int ControlOff;
	unsigned int ControlOnEvent;
	unsigned int AutoMoveSpeed;
	float AutoMoveDist;
	xVec3 AutoMoveTarget;
	xBase* AutoMoveObject;
	zEnt* Diggable;
	float DigTimer;
	zPlayerCarryInfo carry;
	zPlayerLassoInfo lassoInfo;
	type_11 BubbleWandTag;
	xModelInstance* model_wand;
	xEntBoulder* bubblebowl;
	float bbowlInitVel;
	zEntHangable* HangFound;
	zEntHangable* HangEnt;
	zEntHangable* HangEntLast;
	xVec3 HangPivot;
	xVec3 HangVel;
	float HangLength;
	xVec3 HangStartPos;
	float HangStartLerp;
	type_41 HangPawTag;
	float HangPawOffset;
	float HangElapsed;
	float Jump_CurrGravity;
	float Jump_HoldTimer;
	float Jump_ChangeTimer;
	int Jump_CanDouble;
	int Jump_CanFloat;
	int Jump_SpringboardStart;
	zPlatform* Jump_Springboard;
	int CanJump;
	int CanBubbleSpin;
	int CanBubbleBounce;
	int CanBubbleBash;
	int IsJumping;
	int IsDJumping;
	int IsBubbleSpinning;
	int IsBubbleBouncing;
	int IsBubbleBashing;
	int IsBubbleBowling;
	int WasDJumping;
	int IsCoptering;
	_zPlayerWallJumpState WallJumpState;
	int cheat_mode;
	unsigned int Inv_Shiny;
	unsigned int Inv_Spatula;
	type_86 Inv_PatsSock;
	type_87 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_92 Inv_LevelPickups;
	unsigned int Inv_LevelPickups_CurrentLevel;
	unsigned int Inv_PatsSock_Total;
	xModelTag BubbleTag;
	xEntDrive drv;
	xSurface* floor_surf;
	xVec3 floor_norm;
	int slope;
	xCollis earc_coll;
	xSphere head_sph;
	xModelTag center_tag;
	xModelTag head_tag;
	type_105 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_21 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_40 sb_model_indices;
	type_45 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct RxNodeMethods
{
	type_32 nodeBody;
	type_37 nodeInit;
	type_38 nodeTerm;
	type_1 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_29 configMsgHandler;
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float et;
	float wet;
	float rt;
	float wrt;
	float p;
	float brt;
	float ert;
	int state;
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

struct zPlayerCarryInfo
{
	xEnt* grabbed;
	unsigned int grabbedModelID;
	xMat4x3 spin;
	xEnt* throwTarget;
	xEnt* flyingToTarget;
	float minDist;
	float maxDist;
	float minHeight;
	float maxHeight;
	float maxCosAngle;
	float throwMinDist;
	float throwMaxDist;
	float throwMinHeight;
	float throwMaxHeight;
	float throwMaxStack;
	float throwMaxCosAngle;
	float throwTargetRotRate;
	float targetRot;
	unsigned int grabTarget;
	xVec3 grabOffset;
	float grabLerpMin;
	float grabLerpMax;
	float grabLerpLast;
	unsigned int grabYclear;
	float throwGravity;
	float throwHeight;
	float throwDistance;
	float fruitFloorDecayMin;
	float fruitFloorDecayMax;
	float fruitFloorBounce;
	float fruitFloorFriction;
	float fruitCeilingBounce;
	float fruitWallBounce;
	float fruitLifetime;
	xEnt* patLauncher;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_109 MoveSpeed;
	type_2 AnimSneak;
	type_8 AnimWalk;
	type_12 AnimRun;
	float JumpGravity;
	float GravSmooth;
	float FloatSpeed;
	float ButtsmashSpeed;
	zJumpParam Jump;
	zJumpParam Bounce;
	zJumpParam Spring;
	zJumpParam Wall;
	zJumpParam Double;
	zJumpParam SlideDouble;
	zJumpParam SlideJump;
	float WallJumpVelocity;
	zLedgeGrabParams ledge;
	float spin_damp_xz;
	float spin_damp_y;
	unsigned char talk_anims;
	unsigned char talk_filter_size;
	type_50 talk_filter;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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
	type_106 frustplane;
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
	type_108 clusters;
};

struct xEntMotionMechData
{
	unsigned char type;
	unsigned char flags;
	unsigned char sld_axis;
	unsigned char rot_axis;
	float sld_dist;
	float sld_tm;
	float sld_acc_tm;
	float sld_dec_tm;
	float rot_dist;
	float rot_tm;
	float rot_acc_tm;
	float rot_dec_tm;
	float ret_delay;
	float post_ret_delay;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
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

struct _class_2
{
	xVec3* verts;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RwLinkList
{
	RwLLLink link;
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

type_7 buffer;
type_15 buffer;
type_102 g_strz_glyphmodel;
type_89 g_glyphs_animModelInstRef;
type_44 g_cnt_activeGlyphs;
type_81 g_glyphs_talk;
type_93 g_glyphs_talkOther;
type_103 g_glyphs_friend;
type_58 g_glyphs_dazed;
type_71 g_glyphs_shinyOne;
type_63 g_glyphs_shinyFive;
type_51 g_glyphs_shinyTen;
type_42 g_glyphs_shinyFifty;
type_26 g_glyphs_shinyHundred;
xVec3 g_Y3;
zGlobals globals;
xVec3 g_O3;
xVec3 g_Onez;

void Timestep(NPCGlyph* this, float dt);
void RotAddDelta(NPCGlyph* this, xMat3x3* mat_rot);
void VelSet_Shiny(NPCGlyph* this);
void RotSet(NPCGlyph* this, xVec3* ang, int doautospin);
void ScaleSet(NPCGlyph* this, xVec3* scale);
void PosSet(NPCGlyph* this, xVec3* pos);
void Discard(NPCGlyph* this);
void Enable(NPCGlyph* this, int ison);
NPCGlyph* GLYF_Acquire(en_npcglyph type);
void zNPCCommon_Glyphs_RenderAll(int doOpaqueStuff);
int zNPCGlyph_TypeToList(en_npcglyph gtyp, NPCGlyph** glist);
void zNPCGlyph_Timestep(float dt);
void zNPCGlyph_ScenePostInit();
void zNPCGlyph_SceneReset();
void zNPCGlyph_SceneFinish();
void zNPCGlyph_ScenePrepare();
void zNPCGlyph_Shutdown();
void zNPCGlyph_Startup();

// Timestep__8NPCGlyphFf
// Start address: 0x3cd930
void Timestep(NPCGlyph* this, float dt)
{
	xVec3 pos_new;
	float dx__;
	float dy__;
	float dz__;
	float chkdist;
	xVec3 delta;
	float ds2_cam;
}

// RotAddDelta__8NPCGlyphFP7xMat3x3
// Start address: 0x3cdc70
void RotAddDelta(NPCGlyph* this, xMat3x3* mat_rot)
{
}

// VelSet_Shiny__8NPCGlyphFv
// Start address: 0x3cdcd0
void VelSet_Shiny(NPCGlyph* this)
{
	xVec3 vel;
	xVec3* dest;
	xVec3* src;
	xVec3 vec;
	float dx__;
	float dy__;
	float dz__;
	float total_mult;
}

// RotSet__8NPCGlyphFP5xVec3i
// Start address: 0x3cdeb0
void RotSet(NPCGlyph* this, xVec3* ang, int doautospin)
{
	xMat3x3 mat_rot;
}

// ScaleSet__8NPCGlyphFP5xVec3
// Start address: 0x3cdf50
void ScaleSet(NPCGlyph* this, xVec3* scale)
{
	xVec3 allone;
}

// PosSet__8NPCGlyphFP5xVec3
// Start address: 0x3cdfd0
void PosSet(NPCGlyph* this, xVec3* pos)
{
}

// Discard__8NPCGlyphFv
// Start address: 0x3ce050
void Discard(NPCGlyph* this)
{
}

// Enable__8NPCGlyphFi
// Start address: 0x3ce0b0
void Enable(NPCGlyph* this, int ison)
{
}

// GLYF_Acquire__F11en_npcglyph
// Start address: 0x3ce0e0
NPCGlyph* GLYF_Acquire(en_npcglyph type)
{
	NPCGlyph* da_glyph;
	int i;
	int cnt;
	NPCGlyph* list;
}

// zNPCCommon_Glyphs_RenderAll__Fi
// Start address: 0x3ce1f0
void zNPCCommon_Glyphs_RenderAll(int doOpaqueStuff)
{
	int i;
	int k;
	NPCGlyph* glyph;
	int cnt;
	NPCGlyph* list;
	_SDRenderState old_rendstat;
}

// zNPCGlyph_TypeToList__F11en_npcglyphPP8NPCGlyph
// Start address: 0x3ce490
int zNPCGlyph_TypeToList(en_npcglyph gtyp, NPCGlyph** glist)
{
	int cnt;
}

// zNPCGlyph_Timestep__Ff
// Start address: 0x3ce5a0
void zNPCGlyph_Timestep(float dt)
{
	int i;
	int k;
	int cnt;
	NPCGlyph* list;
	NPCGlyph* glyph;
}

// zNPCGlyph_ScenePostInit__Fv
// Start address: 0x3ce790
void zNPCGlyph_ScenePostInit()
{
}

// zNPCGlyph_SceneReset__Fv
// Start address: 0x3ce7a0
void zNPCGlyph_SceneReset()
{
}

// zNPCGlyph_SceneFinish__Fv
// Start address: 0x3ce7b0
void zNPCGlyph_SceneFinish()
{
	int i;
	NPCGlyph* glyph;
	int k;
	int cnt;
	NPCGlyph* list;
}

// zNPCGlyph_ScenePrepare__Fv
// Start address: 0x3ce8c0
void zNPCGlyph_ScenePrepare()
{
	RpAtomic* mdl_raw;
	NPCGlyph* glyph;
	unsigned int aid;
	int i;
	int k;
	int cnt;
	NPCGlyph* list;
}

// zNPCGlyph_Shutdown__Fv
// Start address: 0x3ceae0
void zNPCGlyph_Shutdown()
{
}

// zNPCGlyph_Startup__Fv
// Start address: 0x3ceaf0
void zNPCGlyph_Startup()
{
}

