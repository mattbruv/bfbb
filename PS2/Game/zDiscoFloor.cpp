typedef struct zSurfMatFX;
typedef struct xVec3;
typedef union _class_0;
typedef struct z_disco_floor;
typedef struct clone_pipe_data;
typedef struct xAnimState;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct zGlobalSettings;
typedef struct xBase;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct RxPipelineCluster;
typedef struct xGroup;
typedef struct RpAtomic;
typedef struct xAnimEffect;
typedef struct RxNodeDefinition;
typedef struct RwV3d;
typedef struct zAssetPickupTable;
typedef struct xUpdateCullEnt;
typedef struct z_disco_floor_asset;
typedef struct RxPipelineRequiresCluster;
typedef enum RwFogType;
typedef struct RwResEntry;
typedef struct zCutsceneMgr;
typedef struct xGroupAsset;
typedef struct zSurfAssetBase;
typedef struct zPlayerLassoInfo;
typedef struct RpMeshHeader;
typedef struct iColor_tag;
typedef struct zScene;
typedef struct xModelPool;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xEntShadow;
typedef struct xScene;
typedef struct xAnimFile;
typedef struct bucket_data;
typedef struct zLedgeGrabParams;
typedef struct tile_data;
typedef struct RwLinkList;
typedef struct iEnv;
typedef struct RpGeometry;
typedef struct xAnimPlay;
typedef struct RxPipelineNode;
typedef struct xAnimTransition;
typedef struct zEntSimpleObj;
typedef struct xAnimTransitionList;
typedef struct RwCamera;
typedef struct xLightKit;
typedef struct zEnt;
typedef enum _zPlayerWallJumpState;
typedef struct xJSPNodeInfo;
typedef struct xModelTag;
typedef struct RpClump;
typedef struct rxHeapFreeBlock;
typedef struct xSurface;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xPortalAsset;
typedef struct xVec2;
typedef struct zLasso;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef enum RpWorldRenderOrder;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineNodeParam;
typedef struct RpMaterial;
typedef struct xSphere;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct analog_data;
typedef struct xBound;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xJSPHeader;
typedef struct xQuat;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xModelBucket;
typedef struct _class_1;
typedef struct rxHeapBlockHeader;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct xEntDrive;
typedef struct zCheckPoint;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct zPlayerGlobals;
typedef struct _zEnv;
typedef struct xLinkAsset;
typedef struct xClumpCollBSPTree;
typedef struct RpLight;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct xEnvAsset;
typedef struct xCamera;
typedef struct RpWorld;
typedef struct xAnimTable;
typedef struct zPlayerSettings;
typedef struct zLODTable;
typedef struct _zPortal;
typedef struct xVec4;
typedef struct xEntFrame;
typedef struct RwSurfaceProperties;
typedef struct zSurfTextureAnim;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xGridBound;
typedef struct xSimpleObjAsset;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xShadowSimplePoly;
typedef struct xEnv;
typedef struct RwLLLink;
typedef struct _class_2;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RxNodeDefEditable;
typedef struct iFogParams;
typedef enum RxClusterValid;
typedef struct _tagxRumble;
typedef struct zSurfacePropTexAnim;
typedef struct tri_data_0;
typedef struct xRot;
typedef struct xAnimSingle;
typedef struct tri_data_1;
typedef struct RpVertexNormal;
typedef struct _class_3;
typedef struct xLightKitLight;
typedef enum rxEmbeddedPacketState;
typedef struct xCollis;
typedef struct xShadowSimpleCache;
typedef enum RwCameraProjection;
typedef struct xEntCollis;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xGlobals;
typedef struct render_context;
typedef struct zEntHangable;
typedef struct zSurfColorFX;
typedef struct zSurfacePropUVFX;
typedef struct RpPolygon;
typedef struct _tagxPad;
typedef struct _class_4;
typedef struct RwSphere;
typedef struct RpMaterialList;
typedef struct _class_5;
typedef struct xFFX;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct _tagPadAnalog;
typedef struct xMat3x3;
typedef struct _tagiPad;
typedef struct xQCData;
typedef struct RxClusterRef;
typedef struct zJumpParam;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwObject;
typedef struct zSurfUVFX;
typedef struct anim_coll_data;
typedef struct _class_6;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPTriangle;
typedef struct zPlatform;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct zSurfaceProps;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct zGlobals;

typedef int(*type_0)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_1)(void*);
typedef void(*type_2)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_3)(xMemPool*, void*);
typedef char*(*type_4)(xBase*);
typedef int(*type_5)(RxNodeDefinition*);
typedef char*(*type_7)(unsigned int);
typedef RpAtomic*(*type_8)(RpAtomic*);
typedef void(*type_9)(RxNodeDefinition*);
typedef void(*type_10)(RwResEntry*);
typedef unsigned int(*type_12)(void*, void*);
typedef RwCamera*(*type_16)(RwCamera*);
typedef int(*type_17)(RxPipelineNode*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef unsigned int(*type_25)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_27)(RxPipelineNode*, RxPipeline*);
typedef void(*type_32)(xAnimPlay*, xAnimState*);
typedef int(*type_34)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_39)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_41)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_45)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_49)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpWorldSector*(*type_50)(RpWorldSector*);
typedef xBase*(*type_57)(unsigned int);
typedef void(*type_66)(xEnt*, xScene*, float);
typedef unsigned int(*type_70)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_74)(xEnt*, xVec3*);
typedef void(*type_75)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_77)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_79)(xEnt*);
typedef unsigned int(*type_86)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef RpClump*(*type_102)(RpClump*, void*);
typedef int(*type_105)(void*, void*);

typedef unsigned short type_6[3];
typedef xVec3 type_11[5];
typedef float type_13[4];
typedef RxCluster type_14[1];
typedef unsigned char type_15[5];
typedef unsigned char type_19[3];
typedef unsigned char type_21[3];
typedef xVec3 type_22[60];
typedef unsigned char type_24[3];
typedef float type_26[22];
typedef float type_28[22];
typedef float type_29[2];
typedef unsigned int type_30[15];
typedef RwTexCoords* type_31[8];
typedef zSurfTextureAnim type_33[2];
typedef unsigned int type_35[72];
typedef RwFrustumPlane type_36[6];
typedef char type_37[4];
typedef unsigned int type_38[15];
typedef float type_40[4];
typedef unsigned char type_42[3];
typedef xBase* type_43[72];
typedef zSurfUVFX type_44[2];
typedef RwV3d type_46[8];
typedef unsigned int type_47[15];
typedef unsigned char type_48[3];
typedef analog_data type_51[2];
typedef float type_52[5];
typedef xVec3 type_53[3];
typedef xVec4 type_54[12];
typedef unsigned char type_55[2];
typedef unsigned char type_56[3];
typedef unsigned char type_58[3];
typedef xLightKitLight type_59[1];
typedef unsigned int type_60[2];
typedef unsigned char type_61[3];
typedef unsigned char type_62[2];
typedef float type_63[6];
typedef float type_64[3];
typedef RpLight* type_65[2];
typedef float type_67[3];
typedef char type_68[256];
typedef xModelTag type_69[2];
typedef RwFrame* type_71[2];
typedef float type_72[3];
typedef float type_73[16];
typedef float type_76[2];
typedef char* type_78[3];
typedef char type_80[256];
typedef unsigned char type_81[3];
typedef tile_data* type_82[3];
typedef xModelBucket** type_83[3];
typedef xEnt* type_84[111];
typedef float type_85[3];
typedef unsigned int type_87[4];
typedef unsigned short type_88[3];
typedef float type_89[2];
typedef unsigned char type_90[3];
typedef unsigned char type_91[2];
typedef char type_92[128];
typedef type_92 type_93[6];
typedef xAnimMultiFileEntry type_94[1];
typedef xVec3 type_95[4];
typedef unsigned int type_96[4096];
typedef unsigned char type_97[14];
typedef xModelTag type_98[4];
typedef char type_99[16];
typedef char type_100[32];
typedef xModelInstance* type_101[14];
typedef float type_103[3];
typedef char type_104[16];
typedef unsigned char type_106[4];
typedef unsigned char type_107[3];
typedef unsigned char type_108[3];
typedef RwTexCoords* type_109[8];
typedef float type_110[6];
typedef xCollis type_111[18];
typedef char type_112[32];
typedef zSurfacePropTexAnim type_113[2];
typedef unsigned char type_114[22];
typedef char type_115[32];
typedef zSurfacePropUVFX type_116[2];
typedef unsigned char type_117[22];

struct zSurfMatFX
{
	unsigned int flags;
	unsigned int bumpmapID;
	unsigned int envmapID;
	float shininess;
	float bumpiness;
	unsigned int dualmapID;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct z_disco_floor : xBase
{
	_class_1 flag;
	z_disco_floor_asset* asset;
	unsigned char** state_masks;
	unsigned char* active_state_mask;
	unsigned char* next_state_mask;
	type_78 prefix;
	type_82 tiles;
	unsigned int tiles_size;
	unsigned int min_state;
	unsigned int max_state;
	unsigned int state;
	unsigned int next_state;
	unsigned int state_counter;
	float transition_delay;
	float state_delay;
	float transition_time;
	float state_time;
	xSphere bound;
	float pulse_time;
	type_103 pulse_glow;
	float cull_dist_glow;
	float cull_dist_update;
	float glow_fade;
	float sound_delay;
	int curr_note;
};

struct clone_pipe_data
{
	bucket_data* buckets;
	unsigned int buckets_size;
	RwFrame** frames;
	RwRGBAReal* colors;
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
	type_32 BeforeEnter;
	type_41 StateCallback;
	type_45 BeforeAnimMatrices;
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

struct RpTriangle
{
	type_6 vertIndex;
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
	type_14 clusters;
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
	type_55 PowerUp;
	type_62 InitialPowerUp;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_34 eventFunc;
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
	type_66 update;
	type_66 endUpdate;
	type_74 bupdate;
	type_77 move;
	type_79 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_2 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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
	type_8 renderCallBack;
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
	type_70 Callback;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct zAssetPickupTable
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_12 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct z_disco_floor_asset : xBaseAsset
{
	unsigned int flags;
	_class_5 interval;
	_class_6 prefix_offset;
	unsigned int state_mask_size;
	unsigned int states_offset;
	unsigned int states_size;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_10 destroyNotify;
};

struct zCutsceneMgr
{
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct zSurfAssetBase : xBaseAsset
{
	unsigned char game_damage_type;
	unsigned char game_sticky;
	unsigned char game_damage_flags;
	unsigned char surf_type;
	unsigned char phys_pad;
	unsigned char sld_start;
	unsigned char sld_stop;
	unsigned char phys_flags;
	float friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	unsigned int texture_anim_flags;
	type_33 texture_anim;
	unsigned int uvfx_flags;
	type_44 uvfx;
	unsigned char on;
	type_48 surf_pad;
	float oob_delay;
	float walljump_scale_xz;
	float walljump_scale_y;
	float damage_timer;
	float damage_bounce;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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
	type_35 baseCount;
	type_43 baseList;
	_zEnv* zen;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_20 sync;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_29 radius;
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
	type_57 resolvID;
	type_4 base2Name;
	type_7 id2Name;
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
	type_91 NumAnims;
	void** RawData;
};

struct bucket_data
{
	RpAtomic* atomic;
	RpAtomic* atomic_clone;
	render_context* rc;
	unsigned short size;
	unsigned short used;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_22 tranTable;
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

struct tile_data
{
	unsigned char culled;
	zEntSimpleObj* ent;
	xSphere sphere;
};

struct RwLinkList
{
	RwLLLink link;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_71 light_frame;
	int memlvl;
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
	type_31 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_45 BeforeAnimMatrices;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_25 Conditional;
	type_25 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct zEntSimpleObj : zEnt
{
	xSimpleObjAsset* sasset;
	unsigned int sflags;
	void* anim;
	float animTime;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_16 beginUpdate;
	type_18 endUpdate;
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
	type_36 frustumPlanes;
	RwBBox frustumBoundBox;
	type_46 frustumCorners;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_40 wt;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_102 callback;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xVec2
{
	float x;
	float y;
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
	type_11 lastRefs;
	type_15 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xSphere
{
	xVec3 center;
	float r;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_81 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_94 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_112 name;
	type_115 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xJSPHeader
{
	type_37 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpSector
{
	int type;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct _class_1
{
	unsigned char enabled;
	unsigned char forward;
	unsigned char culled;
	unsigned char glow_culled;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_87 pad;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_109 texCoords;
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
	type_69 BubbleWandTag;
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
	type_98 HangPawTag;
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
	type_30 Inv_PatsSock;
	type_38 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_47 Inv_LevelPickups;
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
	type_60 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_84 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_97 sb_model_indices;
	type_101 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_13 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_1 activateCB;
	type_1 deactivateCB;
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
	type_54 frustplane;
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
	type_50 renderCallBack;
	RxPipeline* pipeline;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_63 MoveSpeed;
	type_64 AnimSneak;
	type_67 AnimWalk;
	type_72 AnimRun;
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
	type_106 talk_filter;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	float noRenderDist;
	type_83 lodBucket;
	type_85 lodDist;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct zSurfTextureAnim
{
	unsigned short pad;
	unsigned short mode;
	unsigned int group;
	float speed;
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

struct rxReq
{
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

struct xSimpleObjAsset
{
	float animSpeed;
	unsigned int initAnimState;
	unsigned char collType;
	unsigned char flags;
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

struct xShadowSimplePoly
{
	type_53 vert;
	xVec3 norm;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _class_2
{
	xLightKit kit;
	type_59 light;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct zSurfacePropTexAnim
{
	unsigned short mode;
	float speed;
	float frame;
	unsigned int group;
	int group_idx;
	xBase* group_ptr;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_76 BilinearLerp;
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

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct _class_3
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_73 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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
		_class_4 tuv;
		tri_data_1 tri;
	};
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
	type_95 corner;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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
	type_111 colls;
	type_75 post;
	type_86 depenq;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xEntBoulder
{
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_93 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_100 sceneStart;
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

struct render_context
{
	xMat4x3 mat;
	iColor_tag color;
};

struct zEntHangable
{
};

struct zSurfColorFX
{
	unsigned short flags;
	unsigned short mode;
	float speed;
};

struct zSurfacePropUVFX
{
	int mode;
	float rot;
	float rot_spd;
	type_89 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_88 vertIndex;
};

struct _tagxPad
{
	type_114 value;
	type_117 last_value;
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
	type_26 up_tmr;
	type_28 down_tmr;
	type_51 analog;
};

struct _class_4
{
	float t;
	float u;
	float v;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _class_5
{
	float transition;
	float state;
};

struct xFFX
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

struct _tagPadAnalog
{
	char x;
	char y;
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

struct _tagiPad
{
	int port;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct zSurfUVFX
{
	int mode;
	float rot;
	float rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct anim_coll_data
{
};

struct _class_6
{
	unsigned int off;
	unsigned int transition;
	unsigned int on;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct zPlatform
{
};

struct RxNodeMethods
{
	type_0 nodeBody;
	type_5 nodeInit;
	type_9 nodeTerm;
	type_17 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_27 pipelineNodeConfig;
	type_39 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_3 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	unsigned int texanim_flags;
	type_113 texanim;
	unsigned int uvfx_flags;
	type_116 uvfx;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

type_99 buffer;
type_104 buffer;
type_52 close_encounters;
type_110 blues_scale;
_class_2 glow_light;
unsigned int current_disco_floor;
type_61 off_flag;
type_108 transition_flag;
type_42 on_flag;
unsigned char mask;
type_21 off_flag;
type_58 transition_flag;
type_107 on_flag;
unsigned char mask;
type_90 off_flag;
type_19 transition_flag;
type_56 on_flag;
unsigned char mask;
clone_pipe_data clone_pipe;
float radd;
float rmul;
zGlobals globals;
unsigned int gActiveHeap;
type_49 event_handler;
type_96 ourGlobals;
type_105 compare_buckets;

int event_handler(xBase* to, unsigned int event, float* argf);
void distance_cull(z_disco_floor* this);
void refresh_bound(z_disco_floor* this);
void refresh_spheres(z_disco_floor* this);
void set_state_delay(z_disco_floor* this, float s);
void set_transition_delay(z_disco_floor* this, float s);
void set_state_range(z_disco_floor* this, int min, int max, unsigned char immediate);
void set_state(z_disco_floor* this, unsigned int state, unsigned char immediate);
void update(z_disco_floor* this, float dt);
void setup(z_disco_floor* this);
void load(z_disco_floor* this, z_disco_floor_asset& asset);
void init(void* ent, void* asset);
void effects_render_all();
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color);
unsigned char sphere_hits_screen(xSphere& o);
void render_all();
void destroy();
void post_setup();
int compare_buckets(void* e1, void* e2);
void insert_atomic(clone_pipe_data* this, xModelInstance* model);
void init();
xSurface& get_damage_surface();
void update_state(z_disco_floor& df, float dt);
void play_sound(z_disco_floor& df);
void refresh_state(z_disco_floor& df);
unsigned int find_tiles(char* name, tile_data* tiles, unsigned int size);
void object_prefix(char* name, unsigned int& size, unsigned int& first);

// event_handler__13z_disco_floorFP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x337140
int event_handler(xBase* to, unsigned int event, float* argf)
{
	z_disco_floor& f;
}

// distance_cull__13z_disco_floorFv
// Start address: 0x3372f0
void distance_cull(z_disco_floor* this)
{
	xVec3& cam_loc;
	xVec3 offset;
	float min_glow_dist;
	float max_glow_dist;
}

// refresh_bound__13z_disco_floorFv
// Start address: 0x337430
void refresh_bound(z_disco_floor* this)
{
	xVec3 avg_center;
	xBox box;
	float itotal;
	int group;
	tile_data* it;
	tile_data* end;
	xBox ent_box;
	xVec3 box_center;
	xVec3 mid_center;
	float avg_radius;
	float box_radius;
	float mid_radius;
	int group;
	tile_data* it;
	tile_data* end;
	float avg_r;
	float box_r;
	float mid_r;
}

// refresh_spheres__13z_disco_floorFv
// Start address: 0x337bd0
void refresh_spheres(z_disco_floor* this)
{
	int group;
	tile_data* it;
	tile_data* end;
	RwSphere& msphere;
	xVec3& scale;
}

// set_state_delay__13z_disco_floorFf
// Start address: 0x337d40
void set_state_delay(z_disco_floor* this, float s)
{
}

// set_transition_delay__13z_disco_floorFf
// Start address: 0x337d50
void set_transition_delay(z_disco_floor* this, float s)
{
}

// set_state_range__13z_disco_floorFiib
// Start address: 0x337d60
void set_state_range(z_disco_floor* this, int min, int max, unsigned char immediate)
{
	unsigned int min_state;
	unsigned int max_state;
	unsigned int newstate;
	unsigned int newstate;
}

// set_state__13z_disco_floorFUib
// Start address: 0x337e60
void set_state(z_disco_floor* this, unsigned int state, unsigned char immediate)
{
	unsigned int r;
	int bit_index;
}

// update__13z_disco_floorFR6xScenef
// Start address: 0x3380f0
void update(z_disco_floor* this, float dt)
{
}

// setup__13z_disco_floorFv
// Start address: 0x338380
void setup(z_disco_floor* this)
{
	unsigned int data_size;
	unsigned char* buffer;
	int group;
	unsigned int i;
	xSurface&* surf;
	int i;
	unsigned int j;
}

// load__13z_disco_floorFR19z_disco_floor_asset
// Start address: 0x338690
void load(z_disco_floor* this, z_disco_floor_asset& asset)
{
	unsigned char* data;
	unsigned int* state_offsets;
	unsigned int i;
}

// init__13z_disco_floorFPvPv
// Start address: 0x338850
void init(void* ent, void* asset)
{
}

// effects_render_all__13z_disco_floorFv
// Start address: 0x338860
void effects_render_all()
{
	iColor_tag color;
	zScene& s;
	z_disco_floor* begin_floor;
	z_disco_floor* end_floor;
	RpAtomic* atomic;
	bucket_data* bucket;
	z_disco_floor* floor;
	int group;
	float glow;
	float dalpha;
	float dyoffset;
	tile_data* tile;
	tile_data* end_tile;
	xModelInstance* model;
	float alpha;
	float yoffset;
	int i;
}

// clip_render__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFP8RpAtomicR7xMat4x3RC7xSphere10iColor_tag
// Start address: 0x338ef0
void clip_render(RpAtomic* atomic, xMat4x3& mat, xSphere& bound, iColor_tag color)
{
	RpGeometry* geom;
	unsigned int flags;
	int materials;
	int i;
}

// sphere_hits_screen__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFRC7xSphere
// Start address: 0x339200
unsigned char sphere_hits_screen(xSphere& o)
{
	RwCamera* camera;
	xMat4x3& cammat;
	xVec3 offset;
	float radius;
	float near_dist;
	xVec2& window;
}

// render_all__13z_disco_floorFv
// Start address: 0x339400
void render_all()
{
	iColor_tag color;
	zScene& s;
	z_disco_floor* begin_floor;
	z_disco_floor* end_floor;
	RpAtomic* atomic;
	bucket_data* bucket;
	z_disco_floor* floor;
	int group;
	tile_data* tile;
	tile_data* end_tile;
	xModelInstance* model;
}

// destroy__13z_disco_floorFv
// Start address: 0x339970
void destroy()
{
}

// post_setup__13z_disco_floorFv
// Start address: 0x339a50
void post_setup()
{
}

// compare_buckets__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFPCvPCv
// Start address: 0x339cb0
int compare_buckets(void* e1, void* e2)
{
}

// insert_atomic__Q225@unnamed@zDiscoFloor_cpp@15clone_pipe_dataFP14xModelInstance
// Start address: 0x339cc0
void insert_atomic(clone_pipe_data* this, xModelInstance* model)
{
	RpAtomic* atomic;
	bucket_data* it;
	bucket_data* end;
}

// init__13z_disco_floorFv
// Start address: 0x339e30
void init()
{
}

// get_damage_surface__25@unnamed@zDiscoFloor_cpp@Fv
// Start address: 0x339ed0
xSurface& get_damage_surface()
{
	xSurface& defsurf;
	xSurface surf;
	zSurfAssetBase asset;
	zSurfaceProps props;
	unsigned char inited;
}

// update_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floorf
// Start address: 0x33a2a0
void update_state(z_disco_floor& df, float dt)
{
}

// play_sound__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a510
void play_sound(z_disco_floor& df)
{
	float pitch;
	float pitch_offset;
}

// refresh_state__25@unnamed@zDiscoFloor_cpp@FR13z_disco_floor
// Start address: 0x33a750
void refresh_state(z_disco_floor& df)
{
	unsigned int i;
	unsigned int i;
}

// find_tiles__25@unnamed@zDiscoFloor_cpp@FPCcPQ213z_disco_floor9tile_dataUi
// Start address: 0x33af40
unsigned int find_tiles(char* name, tile_data* tiles, unsigned int size)
{
	type_68 buffer;
	unsigned int prefix_size;
	unsigned int start;
	unsigned int i;
	unsigned int total;
	int j;
}

// object_prefix__25@unnamed@zDiscoFloor_cpp@FPCcRUiRUi
// Start address: 0x33b080
void object_prefix(char* name, unsigned int& size, unsigned int& first)
{
	unsigned int namelen;
	int i;
}

