typedef struct xAnimTable;
typedef struct xEntShadow;
typedef struct RwObjectHasFrame;
typedef struct widget;
typedef struct xEnt;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct anim_coll_data;
typedef struct motive_node;
typedef struct xGlobals;
typedef struct RxPipelineNodeTopSortData;
typedef struct zPlatform;
typedef struct xVec3;
typedef struct RwV2d;
typedef struct block_allocator;
typedef struct color32u;
typedef struct motive;
typedef struct xAnimTransition;
typedef struct zGlobals;
typedef struct font_context;
typedef struct RxNodeDefinition;
typedef struct functor_update;
typedef struct RpSector;
typedef struct xAnimState;
typedef struct _tagxPad;
typedef struct iEnv;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobalSettings;
typedef struct holder;
typedef struct xBase;
typedef struct xVec2;
typedef struct RxPipeline;
typedef struct xAnimMultiFileEntry;
typedef struct RxPipelineCluster;
typedef struct xAnimActiveEffect;
typedef struct zAssetPickupTable;
typedef struct RpWorld;
typedef struct RxPipelineNodeParam;
typedef struct RwLLLink;
typedef struct zCutsceneMgr;
typedef struct xModelAssetInfo;
typedef struct zPlayerLassoInfo;
typedef struct RxHeap;
typedef struct xBaseAsset;
typedef struct xGroupAsset;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct zScene;
typedef struct substr;
typedef struct xAnimFile;
typedef struct tri_data_0;
typedef struct _tagPadAnalog;
typedef struct xQuat;
typedef struct RpAtomic;
typedef struct xAnimSingle;
typedef struct zLedgeGrabParams;
typedef struct widget_chunk;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct _tagiPad;
typedef struct xJSPHeader;
typedef struct _class_0;
typedef struct xUpdateCullMgr;
typedef struct rxHeapBlockHeader;
typedef struct RpLight;
typedef struct xCollis;
typedef struct RpVertexNormal;
typedef struct xBound;
typedef struct RxPipelineRequiresCluster;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct xAnimMultiFileBase;
typedef struct xPortalAsset;
typedef struct xScene;
typedef struct render_context;
typedef struct basic_rect;
typedef struct xBBox;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef struct xAnimEffect;
typedef enum _zPlayerType;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct _class_1;
typedef struct rxReq;
typedef struct RpPolygon;
typedef struct xAnimMultiFile;
typedef struct xCamera;
typedef enum RxClusterValidityReq;
typedef struct xAnimPlay;
typedef struct tri_data_1;
typedef struct RpMaterialList;
typedef struct _tagxRumble;
typedef struct xClumpCollBSPTree;
typedef struct xModelPool;
typedef struct header;
typedef struct xGridBound;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwCamera;
typedef struct RpMaterial;
typedef struct asset;
typedef struct xGroup;
typedef struct zPlayerGlobals;
typedef struct _class_2;
typedef struct zCheckPoint;
typedef struct xUpdateCullEnt;
typedef enum RxNodeDefEditable;
typedef struct xClumpCollBSPBranchNode;
typedef enum RxClusterValid;
typedef struct RpClump;
typedef struct xRot;
typedef struct xClumpCollBSPTriangle;
typedef struct RpGeometry;
typedef struct zPlayerCarryInfo;
typedef struct RpWorldSector;
typedef struct zPlayerSettings;
typedef struct _zPortal;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zEnt;
typedef struct iFogParams;
typedef struct RpMorphTarget;
typedef struct xSurface;
typedef struct _class_3;
typedef enum RwCameraProjection;
typedef struct functor_disable;
typedef struct xEnvAsset;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xEntAsset;
typedef struct jot;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef union _class_4;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct RpMeshHeader;
typedef struct xLinkAsset;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct RwSphere;
typedef struct xEntFrame;
typedef struct zJumpParam;
typedef struct analog_data;
typedef struct RwTexDictionary;
typedef struct RpTriangle;
typedef struct split_tag;
typedef struct RxOutputSpec;
typedef struct zEntHangable;
typedef struct xEnv;
typedef struct xLightKit;
typedef struct xtextbox;
typedef struct xMat3x3;
typedef struct xDynAsset;
typedef struct xShadowSimplePoly;
typedef struct RxClusterRef;
typedef struct callback;
typedef struct tag_type;
typedef struct xEntBoulder;
typedef struct RwObject;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct RxIoSpec;
typedef struct xfont;
typedef struct RwTexture;
typedef struct xModelTag;
typedef struct RxNodeMethods;
typedef struct _class_5;
typedef struct xLightKitLight;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct RwFrustumPlane;
typedef enum RpWorldRenderOrder;
typedef struct RwPlane;
typedef struct _zEnv;
typedef struct RxCluster;
typedef struct xModelBucket;
typedef struct RxPacket;
typedef struct _anon0;
typedef struct xEntDrive;
typedef enum RwFogType;
typedef struct xQCData;
typedef enum _enum;
typedef struct xFFX;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct zLasso;
typedef enum _tagPadState;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_5)(widget&);
typedef int(*type_6)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_7)(unsigned int);
typedef void(*type_11)(xEnt*, xScene*, float, xEntCollis*);
typedef char*(*type_12)(xBase*);
typedef unsigned int(*type_14)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_15)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef unsigned int(*type_18)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef char*(*type_21)(unsigned int);
typedef int(*type_25)(RxNodeDefinition*);
typedef void(*type_26)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_27)(RxNodeDefinition*);
typedef int(*type_29)(RxPipelineNode*);
typedef void(*type_30)(widget&);
typedef unsigned int(*type_31)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_32)(void*, void*);
typedef void(*type_38)(void*);
typedef unsigned char(*type_41)(widget&, motive&, float);
typedef void(*type_42)(xAnimState*, xAnimSingle*, void*);
typedef unsigned char(*type_45)(widget&, motive&, float);
typedef RpClump*(*type_48)(RpClump*, void*);
typedef void(*type_49)(xAnimPlay*, xAnimState*);
typedef unsigned char(*type_51)(widget&, motive&, float);
typedef void(*type_56)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpAtomic*(*type_69)(RpAtomic*);
typedef void(*type_70)(jot&, xtextbox&, float, float);
typedef void(*type_71)(widget&);
typedef void(*type_73)(widget&);
typedef RwCamera*(*type_76)(RwCamera*);
typedef int(*type_77)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_78)(jot&, xtextbox&, xtextbox&);
typedef void(*type_81)(xEnt*, xScene*, float);
typedef void(*type_83)(xMemPool*, void*);
typedef void(*type_87)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef void(*type_88)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_90)(xEnt*);
typedef void(*type_95)(RwResEntry*);
typedef int(*type_99)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef char type_1[20];
typedef char type_8[128];
typedef xCollis type_9[18];
typedef type_8 type_10[6];
typedef RwFrustumPlane type_13[6];
typedef RpLight* type_16[2];
typedef char type_20[32];
typedef RwFrame* type_22[2];
typedef RwV3d type_23[8];
typedef xVec3 type_24[60];
typedef float type_28[2];
typedef unsigned int type_33[15];
typedef unsigned char type_34[22];
typedef unsigned int type_35[15];
typedef unsigned char type_36[2];
typedef unsigned short type_37[3];
typedef unsigned char type_39[22];
typedef xAnimMultiFileEntry type_40[1];
typedef unsigned int type_43[15];
typedef float type_44[2];
typedef xVec4 type_46[12];
typedef _class_2 type_47[4];
typedef RwTexCoords* type_50[8];
typedef xVec3 type_52[5];
typedef unsigned char type_53[5];
typedef float type_54[22];
typedef unsigned char type_55[2];
typedef unsigned int type_57[2];
typedef float type_58[22];
typedef unsigned int type_59[4];
typedef unsigned char type_60[2];
typedef unsigned char type_61[3];
typedef float type_62[6];
typedef float type_63[3];
typedef float type_64[3];
typedef unsigned short type_65[3];
typedef xModelTag type_66[2];
typedef char type_67[16];
typedef float type_68[3];
typedef xVec3 type_72[3];
typedef float type_74[4];
typedef char type_75[16];
typedef analog_data type_79[2];
typedef xEnt* type_80[111];
typedef unsigned int type_82[72];
typedef float type_84[16];
typedef unsigned char type_85[1];
typedef xBase* type_86[72];
typedef char type_89[32];
typedef char type_91[32];
typedef char type_92[4];
typedef unsigned char type_93[14];
typedef xModelTag type_94[4];
typedef float type_96[4];
typedef RwTexCoords* type_97[8];
typedef xModelInstance* type_98[14];
typedef float type_100[4];
typedef unsigned char type_101[4];
typedef RxCluster type_102[1];
typedef xVec3 type_103[4];

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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_44 radius;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
};

struct widget
{
	_class_5 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
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
	type_81 update;
	type_81 endUpdate;
	type_4 bupdate;
	type_88 move;
	type_90 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_26 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct anim_coll_data
{
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_10 profFunc;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct zPlatform
{
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwV2d
{
	float x;
	float y;
};

struct block_allocator
{
	unsigned int _block_size;
	unsigned int _alloc_size;
	holder* _top;
	block_allocator* _next_alloc;
};

struct color32u
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_51 fp_update;
	void* context;
	unsigned char inverse;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_31 Conditional;
	type_31 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct font_context
{
	unsigned int id;
	int justify;
	float w;
	float h;
	float space;
	float drop_x;
	float drop_y;
	color32u c;
	color32u drop_c;
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

struct functor_update
{
	float dt;
};

struct RpSector
{
	int type;
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
	type_42 StateCallback;
	type_56 BeforeAnimMatrices;
};

struct _tagxPad
{
	type_34 value;
	type_39 last_value;
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
	type_54 up_tmr;
	type_58 down_tmr;
	type_79 analog;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_16 light;
	type_22 light_frame;
	int memlvl;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_60 InitialPowerUp;
};

struct holder
{
	header h;
	type_85 data;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_99 eventFunc;
};

struct xVec2
{
	float x;
	float y;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct zAssetPickupTable
{
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
	type_17 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zCutsceneMgr
{
};

struct xModelAssetInfo
{
	unsigned int Magic;
	unsigned int NumModelInst;
	unsigned int AnimTableID;
	unsigned int CombatID;
	unsigned int BrainID;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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
	type_82 baseCount;
	type_86 baseList;
	_zEnv* zen;
};

struct substr
{
	char* text;
	unsigned int size;
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
	type_36 NumAnims;
	void** RawData;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_69 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_24 tranTable;
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

struct widget_chunk : xBase
{
	widget w;
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

struct _tagiPad
{
	int port;
};

struct xJSPHeader
{
	type_92 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct _class_0
{
	xVec3* verts;
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
	type_38 activateCB;
	type_38 deactivateCB;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_59 pad;
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
		_class_3 tuv;
		tri_data_1 tri;
	};
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_7 resolvID;
	type_12 base2Name;
	type_21 id2Name;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float r;
	float g;
	float b;
	float a;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_18 Callback;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct _class_1
{
	union
	{
		unsigned char invisible;
		unsigned char ethereal;
		unsigned char merge;
		unsigned char word_break;
		unsigned char word_end;
		unsigned char line_break;
		unsigned char stop;
		unsigned char tab;
	};
	union
	{
		unsigned char insert;
		unsigned char dynamic;
		unsigned char page_break;
		unsigned char stateful;
	};
	unsigned short dummy;
};

struct rxReq
{
};

struct RpPolygon
{
	unsigned short matIndex;
	type_37 vertIndex;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_40 Files;
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
	type_46 frustplane;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_56 BeforeAnimMatrices;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct header
{
	holder* next;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_76 beginUpdate;
	type_0 endUpdate;
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
	type_13 frustumPlanes;
	RwBBox frustumBoundBox;
	type_23 frustumCorners;
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

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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
	type_66 BubbleWandTag;
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
	type_94 HangPawTag;
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
	type_33 Inv_PatsSock;
	type_35 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_43 Inv_LevelPickups;
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
	type_57 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_80 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_93 sb_model_indices;
	type_98 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct _class_2
{
	unsigned char type;
	unsigned int size;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_32 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_48 callback;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xClumpCollBSPTriangle
{
	_class_4 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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
	type_97 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_50 texCoords;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_62 MoveSpeed;
	type_63 AnimSneak;
	type_64 AnimWalk;
	type_68 AnimRun;
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
	type_101 talk_filter;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xSurface
{
};

struct _class_3
{
	float t;
	float u;
	float v;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct functor_disable
{
	unsigned char destroy_widgets;
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

struct jot
{
	substr s;
	_class_1 flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
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

union _class_4
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_74 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_95 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_83 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct RpTriangle
{
	type_65 vertIndex;
	short matIndex;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct zEntHangable
{
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	unsigned int flags;
	float line_space;
	float tab_stop;
	float left_indent;
	float right_indent;
	callback* cb;
	void* context;
	char** texts;
	unsigned int* text_sizes;
	unsigned int texts_size;
	substr text;
	unsigned int text_hash;
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

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct xShadowSimplePoly
{
	type_72 vert;
	xVec3 norm;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct callback
{
	type_70 render;
	type_78 layout_update;
	type_78 render_update;
};

struct tag_type
{
	substr name;
	type_87 parse_tag;
	type_87 reset_tag;
	void* context;
};

struct xEntBoulder
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xfont
{
	unsigned int id;
	float width;
	float height;
	float space;
	iColor_tag color;
	basic_rect clip;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_89 name;
	type_91 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_100 wt;
};

struct RxNodeMethods
{
	type_19 nodeBody;
	type_25 nodeInit;
	type_27 nodeTerm;
	type_29 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_14 configMsgHandler;
};

struct _class_5
{
	unsigned char visible;
	unsigned char enabled;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_84 matrix;
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
	type_103 corner;
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
	type_9 colls;
	type_11 post;
	type_15 depenq;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct _anon0
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct xFFX
{
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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
	type_52 lastRefs;
	type_53 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_67 buffer;
type_75 buffer;
type_47 known_types;
block_allocator* _head_alloc;
unsigned char inited;
_anon0 __vt__Q24xhud6widget;
long skyTest_1;
callback text_cb;
iColor_tag g_WHITE;
unsigned int gActiveHeap;
type_5 fp_hide;
type_71 fp_show;
type_30 fp_render;
type_73 fp_setup;
type_41 linear_motive_update;
type_45 accelerate_motive_update;
type_77 cb_dispatch;
zGlobals globals;

unsigned char delay_motive_update(widget& w, motive& m, float dt);
unsigned char shake_motive_update(motive& m);
unsigned char accelerate_motive_update(motive& m, float dt);
unsigned char linear_motive_update(motive& m, float dt);
void render_model(xModelInstance& m, render_context& rc);
xModelInstance* load_model(unsigned int id);
int cb_dispatch(xBase* from, xBase* to, unsigned int event, float* argf, xBase* argw);
void clear_motives(widget* this, type_51 fp_update, void* context);
void add_motive(widget* this, motive& m);
void fp_render(widget& w);
void fp_setup(widget& w);
void hide(widget* this);
void show(widget* this);
unsigned char is(unsigned int id);
unsigned int type();
void updater(widget* this, float dt);
void presetup(widget* this);
void destruct(widget* this);
void init_base(xBase& data, xBaseAsset& asset, unsigned int chunk_size);
void* __ct(widget* this, asset& a);
void render();
void update(float dt);
void destroy();
void setup();
void init();
void for_each(unsigned char type, unsigned int size, functor_update f);
void for_each(unsigned char type, unsigned int size, type_73 f);
void for_each(unsigned char type, unsigned int size, functor_disable f);

// delay_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x2981f0
unsigned char delay_motive_update(widget& w, motive& m, float dt)
{
}

// shake_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x298250
unsigned char shake_motive_update(motive& m)
{
	unsigned int& iter;
	unsigned int i;
	float diff;
	type_96 mult;
}

// accelerate_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x2982f0
unsigned char accelerate_motive_update(motive& m, float dt)
{
	float diff;
	float remaining;
}

// linear_motive_update__4xhudFRQ24xhud6widgetRQ24xhud6motivef
// Start address: 0x2983b0
unsigned char linear_motive_update(motive& m, float dt)
{
	float diff;
	float remaining;
}

// render_model__4xhudFR14xModelInstanceRCQ24xhud14render_context
// Start address: 0x298450
void render_model(xModelInstance& m, render_context& rc)
{
	basic_rect r;
	xVec3 from;
	xVec3 to;
	xMat4x3 frame;
	xModelInstance* model;
}

// load_model__4xhudFUi
// Start address: 0x298700
xModelInstance* load_model(unsigned int id)
{
	unsigned int bufsize;
	xModelAssetInfo* minf;
	RpAtomic* imodel;
}

// cb_dispatch__Q24xhud6widgetFP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2987b0
int cb_dispatch(xBase* from, xBase* to, unsigned int event, float* argf, xBase* argw)
{
}

// clear_motives__Q24xhud6widgetFPFRQ24xhud6widgetRQ24xhud6motivef_bPv
// Start address: 0x2987e0
void clear_motives(widget* this, type_51 fp_update, void* context)
{
	motive_node** itp;
	motive_node* it;
	block_allocator ba;
	char @4476;
}

// add_motive__Q24xhud6widgetFRCQ24xhud6motive
// Start address: 0x2988b0
void add_motive(widget* this, motive& m)
{
	motive_node* n;
}

// fp_render__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget
// Start address: 0x298a40
void fp_render(widget& w)
{
}

// fp_setup__Q24xhud18@unnamed@xHud_cpp@FRQ24xhud6widget
// Start address: 0x298a90
void fp_setup(widget& w)
{
}

// hide__Q24xhud6widgetFv
// Start address: 0x298aa0
void hide(widget* this)
{
	float x;
	float y;
	float sx;
	float sy;
	float cx;
	float cy;
	float tx;
	float ty;
	float tcx;
	float tcy;
	float acx;
	float acy;
	float dist;
	float vx;
	float vy;
	float ex;
	float ey;
}

// show__Q24xhud6widgetFv
// Start address: 0x298d00
void show(widget* this)
{
	float dx;
	float dy;
	float d2;
	float vx;
	float vy;
	float a;
	float da;
}

// is__Q24xhud6widgetCFUi
// Start address: 0x298f80
unsigned char is(unsigned int id)
{
	unsigned int myid;
	char @4606;
}

// type__Q24xhud6widgetCFv
// Start address: 0x298fd0
unsigned int type()
{
}

// updater__Q24xhud6widgetFf
// Start address: 0x299010
void updater(widget* this, float dt)
{
	motive_node** itp;
	motive_node* it;
}

// presetup__Q24xhud6widgetFv
// Start address: 0x299160
void presetup(widget* this)
{
}

// destruct__Q24xhud6widgetFv
// Start address: 0x299170
void destruct(widget* this)
{
}

// init_base__Q24xhud6widgetFR5xBaseRC10xBaseAssetUi
// Start address: 0x299180
void init_base(xBase& data, xBaseAsset& asset, unsigned int chunk_size)
{
	widget_chunk& wc;
}

// __ct__Q24xhud6widgetFRCQ24xhud5asset
// Start address: 0x2991e0
void* __ct(widget* this, asset& a)
{
}

// render__4xhudFv
// Start address: 0x2992c0
void render()
{
}

// update__4xhudFf
// Start address: 0x299330
void update(float dt)
{
}

// destroy__4xhudFv
// Start address: 0x299390
void destroy()
{
}

// setup__4xhudFv
// Start address: 0x299420
void setup()
{
}

// init__4xhudFv
// Start address: 0x299480
void init()
{
}

// for_each<Q34xhud18@unnamed@xHud_cpp@14functor_update>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@14functor_update_v
// Start address: 0x299500
void for_each(unsigned char type, unsigned int size, functor_update f)
{
	zScene& s;
	unsigned char* it;
	unsigned char* end;
	widget_chunk* wc;
}

// for_each<PFRQ24xhud6widget_v>__Q24xhud18@unnamed@xHud_cpp@FUcUiPFRQ24xhud6widget_v_v
// Start address: 0x2995a0
void for_each(unsigned char type, unsigned int size, type_73 f)
{
	zScene& s;
	unsigned char* it;
	unsigned char* end;
}

// for_each<Q34xhud18@unnamed@xHud_cpp@15functor_disable>__Q24xhud18@unnamed@xHud_cpp@FUcUiQ34xhud18@unnamed@xHud_cpp@15functor_disable_v
// Start address: 0x299620
void for_each(unsigned char type, unsigned int size, functor_disable f)
{
	zScene& s;
	unsigned char* it;
	unsigned char* end;
	widget_chunk* wc;
}

