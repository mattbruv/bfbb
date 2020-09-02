typedef struct snow_particle_data;
typedef enum _tagPadState;
typedef struct xAnimFile;
typedef struct tri_data_0;
typedef struct xAnimTable;
typedef struct RwTexture;
typedef struct xEnt;
typedef struct xLightKit;
typedef struct xParEmitterPropsAsset;
typedef struct xEntBoulder;
typedef struct xJSPHeader;
typedef struct zParPTank;
typedef struct _class_0;
typedef struct xLightKitLight;
typedef struct RwObjectHasFrame;
typedef struct xCollis;
typedef struct RpVertexNormal;
typedef struct xGridBound;
typedef struct xAnimSingle;
typedef struct RpLight;
typedef struct xGlobals;
typedef struct xScene;
typedef struct RxPipelineNode;
typedef struct xVec3;
typedef struct rxHeapFreeBlock;
typedef struct RpAtomic;
typedef struct xShadowSimpleCache;
typedef struct RwRaster;
typedef struct RxPipeline;
typedef struct xAnimState;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct zEntHangable;
typedef struct RwV2d;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct xPEVCyl;
typedef struct RxNodeDefinition;
typedef struct _tagxPad;
typedef struct RpInterpolator;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimMultiFileBase;
typedef struct RxPipelineCluster;
typedef struct xEnv;
typedef struct xParInterp;
typedef struct xEntFrame;
typedef struct xAnimEffect;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct zEnt;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xQuat;
typedef struct _class_1;
typedef struct RpPolygon;
typedef struct xLinkAsset;
typedef struct xUpdateCullMgr;
typedef struct xAnimActiveEffect;
typedef struct BubbleData;
typedef struct _tagiPad;
typedef struct RwCamera;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct ptank_pool;
typedef struct xParGroup;
typedef struct rxHeapBlockHeader;
typedef struct xAnimPlay;
typedef struct xPEEntBone;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct xBase;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimMultiFile;
typedef struct xModelInstance;
typedef struct xModelPool;
typedef struct xParEmitterAsset;
typedef struct RpMaterial;
typedef struct RpWorld;
typedef struct xParSys;
typedef struct xClumpCollBSPTree;
typedef struct RpClump;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct xVec4;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpWorldSector;
typedef struct xClumpCollBSPBranchNode;
typedef struct RwSurfaceProperties;
typedef struct anim_coll_data;
typedef struct xSurface;
typedef struct RwMatrixTag;
typedef struct xPECircle;
typedef struct xMat4x3;
typedef struct xClumpCollBSPTriangle;
typedef struct rxReq;
typedef struct RpMorphTarget;
typedef enum RxClusterValidityReq;
typedef struct xEnvAsset;
typedef struct _tagxRumble;
typedef struct zPlatform;
typedef struct zGlobals;
typedef struct xQCData;
typedef struct zGlobalSettings;
typedef struct _zPortal;
typedef struct xGroup;
typedef enum RxNodeDefEditable;
typedef struct xUpdateCullEnt;
typedef struct zAssetPickupTable;
typedef struct RpMeshHeader;
typedef enum RxClusterValid;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xRot;
typedef struct _tagEmitSphere;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpTriangle;
typedef struct iColor_tag;
typedef struct xVec2;
typedef enum RwCameraProjection;
typedef enum _zPlayerWallJumpState;
typedef struct zJumpParam;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct _tagEmitRect;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct iEnv;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct RwSphere;
typedef struct xPortalAsset;
typedef struct xModelTag;
typedef struct analog_data;
typedef struct RwTexDictionary;
typedef struct _class_3;
typedef struct RxOutputSpec;
typedef struct xPEEntBound;
typedef struct xBaseAsset;
typedef struct xParEmitter;
typedef enum RpWorldRenderOrder;
typedef struct xMat3x3;
typedef struct _tagEmitLine;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RxClusterRef;
typedef struct RpPTankLockStruct;
typedef struct RwObject;
typedef struct xBound;
typedef struct RwLLLink;
typedef struct RpSector;
typedef struct zPlayerCarryInfo;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct ptank_pool__pos_color_size_uv2;
typedef struct xCamera;
typedef struct zPlayerSettings;
typedef struct xEntDrive;
typedef struct xBBox;
typedef struct _zEnv;
typedef struct RxNodeMethods;
typedef struct RwFrustumPlane;
typedef struct _tagEmitVolume;
typedef struct RwPlane;
typedef struct zLasso;
typedef struct RxCluster;
typedef struct iFogParams;
typedef struct RxPacket;
typedef struct xShadowSimplePoly;
typedef enum RwFogType;
typedef struct _tagEmitOffsetPoint;
typedef struct RwRGBAReal;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_1;
typedef struct RwLinkList;
typedef struct render_state;

typedef int(*type_0)(RxPipelineNode*);
typedef RwCamera*(*type_1)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef RpWorldSector*(*type_3)(RpWorldSector*);
typedef void(*type_4)(xEnt*, xScene*, float);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_11)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef unsigned int(*type_13)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_14)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_16)(xEnt*);
typedef int(*type_17)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_24)(unsigned int);
typedef unsigned int(*type_25)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef char*(*type_26)(xBase*);
typedef unsigned int(*type_27)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_29)(zParPTank*, float);
typedef void(*type_30)(xEnt*, xVec3*, xMat4x3*);
typedef char*(*type_32)(unsigned int);
typedef unsigned int(*type_33)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_38)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_42)(RxNodeDefinition*);
typedef void(*type_46)(RxNodeDefinition*);
typedef void(*type_47)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_49)(zParPTank*, float);
typedef RpClump*(*type_51)(RpClump*, void*);
typedef unsigned int(*type_52)(void*, void*);
typedef void(*type_56)(void*);
typedef void(*type_59)(xAnimPlay*, xAnimState*);
typedef void(*type_62)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_64)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpAtomic*(*type_67)(RpAtomic*);
typedef void(*type_76)(zParPTank*, float);
typedef RwCamera*(*type_83)(RwCamera*);
typedef void(*type_86)(xMemPool*, void*);
typedef void(*type_87)(zParPTank*, float);
typedef void(*type_89)(zParPTank*, float);
typedef void(*type_93)(RwResEntry*);

typedef RpLight* type_5[2];
typedef zParPTank type_7[7];
typedef xEnt* type_8[111];
typedef RwFrame* type_9[2];
typedef float type_10[16];
typedef float type_15[2];
typedef unsigned char type_18[3];
typedef float type_19[2];
typedef char type_20[128];
typedef unsigned char type_21[3];
typedef unsigned char type_22[3];
typedef type_20 type_23[6];
typedef char type_28[16];
typedef RwFrustumPlane type_31[6];
typedef unsigned char type_34[14];
typedef xModelTag type_35[4];
typedef char type_36[32];
typedef unsigned short type_37[3];
typedef xModelInstance* type_39[14];
typedef RwV3d type_40[8];
typedef xVec3 type_41[4];
typedef unsigned char type_43[2];
typedef char type_44[16];
typedef xAnimMultiFileEntry type_45[1];
typedef unsigned char type_48[4];
typedef float type_50[4];
typedef unsigned char type_53[22];
typedef float type_54[3];
typedef unsigned char type_55[22];
typedef RwTexCoords* type_57[8];
typedef xCollis type_58[18];
typedef xParInterp type_60[1];
typedef xVec3 type_61[5];
typedef unsigned char type_63[5];
typedef unsigned short type_65[3];
typedef xVec3 type_66[60];
typedef float type_68[22];
typedef xParInterp type_69[4];
typedef float type_70[22];
typedef xParInterp type_71[4];
typedef unsigned int type_72[4];
typedef unsigned int type_73[15];
typedef unsigned int type_74[15];
typedef float type_75[2];
typedef unsigned int type_77[4096];
typedef unsigned int type_78[15];
typedef unsigned int type_79[72];
typedef RwTexCoords* type_80[8];
typedef analog_data type_81[2];
typedef char type_82[4];
typedef float type_84[4];
typedef xBase* type_85[72];
typedef char type_88[32];
typedef char type_90[32];
typedef unsigned char type_91[2];
typedef xVec4 type_92[12];
typedef unsigned int type_94[2];
typedef unsigned char type_95[2];
typedef float type_96[6];
typedef float type_97[3];
typedef xVec3 type_98[3];
typedef float type_99[3];
typedef xModelTag type_100[2];
typedef float type_101[3];
typedef RxCluster type_102[1];

struct snow_particle_data
{
	xVec3 loc;
	float size;
	xVec3 vel;
	float life;
	float u;
	type_54 pad;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_88 name;
	type_90 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_4 update;
	type_4 endUpdate;
	type_12 bupdate;
	type_14 move;
	type_16 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_30 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_60 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_69 color_birth;
	type_71 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct xEntBoulder
{
};

struct xJSPHeader
{
	type_82 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zParPTank
{
	unsigned int flags;
	type_29 update;
	RpAtomic* ptank;
	unsigned int num_particles;
	unsigned int max_particles;
};

struct _class_0
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_10 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
		tri_data_0 tri;
	};
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_15 BilinearLerp;
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
	type_36 sceneStart;
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
	type_24 resolvID;
	type_26 base2Name;
	type_32 id2Name;
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

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_67 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_59 BeforeEnter;
	type_47 StateCallback;
	type_62 BeforeAnimMatrices;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct zEntHangable
{
};

struct RwV2d
{
	float x;
	float y;
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
	type_58 colls;
	type_11 post;
	type_25 depenq;
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

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
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

struct _tagxPad
{
	type_53 value;
	type_55 last_value;
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
	type_68 up_tmr;
	type_70 down_tmr;
	type_81 analog;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xParInterp
{
	type_19 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_13 Callback;
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
	type_27 Conditional;
	type_27 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_37 vertIndex;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_50 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_56 activateCB;
	type_56 deactivateCB;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct BubbleData
{
	xVec3 vel;
	float life;
};

struct _tagiPad
{
	int port;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_83 beginUpdate;
	type_1 endUpdate;
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
	type_31 frustumPlanes;
	RwBBox frustumBoundBox;
	type_40 frustumCorners;
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

struct ptank_pool
{
	render_state rs;
	unsigned int used;
	RpAtomic* ptank;
	_class_3 hide;
};

struct xParGroup
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_72 pad;
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
	type_62 BeforeAnimMatrices;
};

struct xPEEntBone
{
	unsigned char flags;
	unsigned char type;
	unsigned char bone;
	unsigned char pad1;
	xVec3 offset;
	float radius;
	float deflection;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_64 eventFunc;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_45 Files;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xParEmitterAsset : xBaseAsset
{
	unsigned char emit_flags;
	unsigned char emit_type;
	unsigned short pad;
	unsigned int propID;
	union
	{
		xPECircle e_circle;
		_tagEmitSphere e_sphere;
		_tagEmitRect e_rect;
		_tagEmitLine e_line;
		_tagEmitVolume e_volume;
		_tagEmitOffsetPoint e_offsetp;
		xPEVCyl e_vcyl;
		xPEEntBone e_entbone;
		xPEEntBound e_entbound;
	};
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	unsigned int cull_mode;
	float cull_dist_sqr;
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
	type_3 renderCallBack;
	RxPipeline* pipeline;
};

struct xParSys
{
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_51 callback;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_75 radius;
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
	type_80 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_57 texCoords;
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

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct anim_coll_data
{
};

struct xSurface
{
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

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct rxReq
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct zPlatform
{
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_91 PowerUp;
	type_95 InitialPowerUp;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_52 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_93 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_86 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct zCutsceneMgr
{
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct _tagEmitSphere
{
	float radius;
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
	type_79 baseCount;
	type_85 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_66 tranTable;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct RpTriangle
{
	type_65 vertIndex;
	short matIndex;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xVec2
{
	float x;
	float y;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct _tagEmitRect
{
	float x_len;
	float z_len;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_5 light;
	type_9 light_frame;
	int memlvl;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_84 wt;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _class_3
{
	unsigned char* data;
	int stride;
	unsigned int size;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xParEmitter : xBase
{
	xParEmitterAsset* tasset;
	xParGroup* group;
	xParEmitterPropsAsset* prop;
	unsigned char rate_mode;
	float rate;
	float rate_time;
	float rate_fraction;
	float rate_fraction_cull;
	unsigned char emit_flags;
	type_18 emit_pad;
	type_21 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
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
	type_100 BubbleWandTag;
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
	type_35 HangPawTag;
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
	type_73 Inv_PatsSock;
	type_74 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_78 Inv_LevelPickups;
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
	type_94 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_8 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_34 sb_model_indices;
	type_39 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct RpPTankLockStruct
{
	unsigned char* data;
	int stride;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_22 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpSector
{
	int type;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct ptank_pool__pos_color_size_uv2 : ptank_pool
{
	xVec3* pos;
	iColor_tag* color;
	xVec2* size;
	xVec2* uv;
	int stride;
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
	type_92 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_96 MoveSpeed;
	type_97 AnimSneak;
	type_99 AnimWalk;
	type_101 AnimRun;
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
	type_48 talk_filter;
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
	tri_data_1 tri;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxNodeMethods
{
	type_38 nodeBody;
	type_42 nodeInit;
	type_46 nodeTerm;
	type_0 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_33 configMsgHandler;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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
	type_61 lastRefs;
	type_63 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_102 clusters;
};

struct xShadowSimplePoly
{
	type_98 vert;
	xVec3 norm;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RwLinkList
{
	RwLLLink link;
};

struct render_state
{
	RwTexture* texture;
	unsigned int src_blend;
	unsigned int dst_blend;
	unsigned int flags;
};

type_28 buffer;
type_44 buffer;
unsigned int gPTankDisable;
unsigned int sNumPTanks;
type_7 sPTank;
zParPTank* sSparklePTank;
zParPTank* sBubblePTank;
zParPTank* sMenuBubblePTank;
zParPTank* sSnowPTank;
zParPTank* sSteamPTank;
zParPTank* sExplosionPTank;
RwV2d sparkle_size;
float sSparkleAnimTime;
BubbleData* sBubbleData;
BubbleData* sMenuBubbleData;
RwRGBA bubble_color;
RwRGBA snow_color;
snow_particle_data* snow_particles;
ptank_pool__pos_color_size_uv2 snow_pool;
RwV2d steam_size;
float sSteamAnimTime;
unsigned int gActiveHeap;
type_87 zParPTankSnowUpdate;
type_89 zParPTankSteamUpdate;
type_76 zParPTankBubbleUpdate;
type_49 zParPTankSparkleUpdate;
int _rpPTankAtomicDataOffset;
float snow_life;
zGlobals globals;
RwCamera* sGameScreenTransCam;
int gGameState;
type_77 ourGlobals;
RwCamera* sGameScreenTransCam;

int zParPTankConvertEmitRate(xParEmitter* pe, float dt);
void zParPTankRender();
void zParPTankUpdate(float dt);
void zParPTankExit();
void zParPTankSceneExit();
void zParPTankSceneEnter();
void zParPTankInit();
void zParPTankSteamUpdate(zParPTank* zp, float dt);
void zParPTankSteamCreate(zParPTank* zp, unsigned int max_particles, type_29 update);
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, unsigned int count);
void zParPTankSnowUpdate(zParPTank* zp, float dt);
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, unsigned int count);
int zParPTankBubblesAvailable();
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, unsigned int count, float scale);
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, unsigned int count, float scale, zParPTank* zp);
void zParPTankBubbleUpdate(zParPTank* zp, float dt);
void zParPTankMenuBubbleCreate(zParPTank* zp, unsigned int max_particles, type_29 update);
void zParPTankBubbleCreate(zParPTank* zp, unsigned int max_particles, type_29 update);
void zParPTankSpawnSparkles(xVec3* pos, unsigned int count);
void zParPTankSparkleUpdate(zParPTank* zp, float dt);
void zParPTankSparkleCreate(zParPTank* zp, unsigned int max_particles, type_29 update);

// zParPTankConvertEmitRate__FP11xParEmitterf
// Start address: 0x399c80
int zParPTankConvertEmitRate(xParEmitter* pe, float dt)
{
	xParEmitterPropsAsset* prop;
	int rate_has_elapsed;
	float rate;
	int count;
}

// zParPTankRender__Fv
// Start address: 0x399d80
void zParPTankRender()
{
	zParPTank* zp;
	unsigned int i;
}

// zParPTankUpdate__Ff
// Start address: 0x399e60
void zParPTankUpdate(float dt)
{
	int paused;
	zParPTank* zp;
	unsigned int i;
}

// zParPTankExit__Fv
// Start address: 0x399f10
void zParPTankExit()
{
	zParPTank* zp;
	unsigned int i;
	RwFrame* tmpframe;
}

// zParPTankSceneExit__Fv
// Start address: 0x399fd0
void zParPTankSceneExit()
{
}

// zParPTankSceneEnter__Fv
// Start address: 0x399fe0
void zParPTankSceneEnter()
{
}

// zParPTankInit__Fv
// Start address: 0x39a0b0
void zParPTankInit()
{
}

// zParPTankSteamUpdate__FP9zParPTankf
// Start address: 0x39a1b0
void zParPTankSteamUpdate(zParPTank* zp, float dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	unsigned int plock_base;
	unsigned int uvlock_base;
	unsigned int i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankSteamCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39a3b0
void zParPTankSteamCreate(zParPTank* zp, unsigned int max_particles, type_29 update)
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
}

// zParPTankSpawnSnow__FP5xVec3P5xVec3Ui
// Start address: 0x39a600
void zParPTankSpawnSnow(xVec3* pos, xVec3* vel, unsigned int count)
{
	unsigned int old_size;
	snow_particle_data* it;
	snow_particle_data* end;
}

// zParPTankSnowUpdate__FP9zParPTankf
// Start address: 0x39a770
void zParPTankSnowUpdate(zParPTank* zp, float dt)
{
	snow_particle_data* end;
	float fadein_life;
	float fadeout_life;
	float ilife;
	float ifadein;
	float ifadeout;
	snow_particle_data* it;
	xVec4* _loc;
	float par_dist;
}

// zParPTankSpawnMenuBubbles__FP5xVec3P5xVec3Ui
// Start address: 0x39acf0
void zParPTankSpawnMenuBubbles(xVec3* pos, xVec3* vel, unsigned int count)
{
}

// zParPTankBubblesAvailable__Fv
// Start address: 0x39ad10
int zParPTankBubblesAvailable()
{
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3Uif
// Start address: 0x39ad30
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, unsigned int count, float scale)
{
}

// zParPTankSpawnBubbles__FP5xVec3P5xVec3UifP9zParPTank
// Start address: 0x39ada0
void zParPTankSpawnBubbles(xVec3* pos, xVec3* vel, unsigned int count, float scale, zParPTank* zp)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	unsigned int plock_base;
	unsigned int clock_base;
	unsigned int slock_base;
	unsigned int uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	unsigned int i;
	RwTexCoords* uv;
	RwV2d* size;
}

// zParPTankBubbleUpdate__FP9zParPTankf
// Start address: 0x39b150
void zParPTankBubbleUpdate(zParPTank* zp, float dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct clock;
	RpPTankLockStruct slock;
	RpPTankLockStruct uvlock;
	unsigned int plock_base;
	unsigned int clock_base;
	unsigned int slock_base;
	unsigned int uvlock_base;
	float damp;
	BubbleData* base_xp;
	BubbleData* xp;
	unsigned int i;
	xVec3* pos;
	RwTexCoords* uv;
	RwRGBA* color;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankMenuBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b7e0
void zParPTankMenuBubbleCreate(zParPTank* zp, unsigned int max_particles, type_29 update)
{
	RwTexture* tex;
	RwFrame* frame;
}

// zParPTankBubbleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39b960
void zParPTankBubbleCreate(zParPTank* zp, unsigned int max_particles, type_29 update)
{
	RwTexture* tex;
	RwFrame* frame;
}

// zParPTankSpawnSparkles__FP5xVec3Ui
// Start address: 0x39bae0
void zParPTankSpawnSparkles(xVec3* pos, unsigned int count)
{
	zParPTank* zp;
	RpPTankLockStruct posLock;
	RpPTankLockStruct vtx2TexCoordsLock;
	unsigned int poslock_base;
	unsigned int uvlock_base;
	xVec3* ref_pos;
	RwCamera* camera;
	unsigned int i;
	RwTexCoords* uv;
}

// zParPTankSparkleUpdate__FP9zParPTankf
// Start address: 0x39bcf0
void zParPTankSparkleUpdate(zParPTank* zp, float dt)
{
	RpPTankLockStruct plock;
	RpPTankLockStruct uvlock;
	unsigned int plock_base;
	unsigned int uvlock_base;
	unsigned int i;
	RwTexCoords* uv;
	RwTexCoords* end_uv;
}

// zParPTankSparkleCreate__FP9zParPTankUiPFP9zParPTankf_v
// Start address: 0x39bec0
void zParPTankSparkleCreate(zParPTank* zp, unsigned int max_particles, type_29 update)
{
	RwTexture* tex;
	RwRGBA defaultColor;
	RwFrame* frame;
}

