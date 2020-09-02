typedef struct special_data;
typedef struct xLinkAsset;
typedef struct meter_widget;
typedef struct RxPipelineCluster;
typedef struct xEnt;
typedef struct xAnimFile;
typedef struct RwFrame;
typedef struct tag_xFile;
typedef struct RxNodeDefinition;
typedef struct zPlatform;
typedef struct xAnimTransition;
typedef struct xEnvAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct zGlobals;
typedef struct _tagxRumble;
typedef struct xAnimSingle;
typedef enum RwFogType;
typedef struct RpAtomic;
typedef struct RwResEntry;
typedef struct RpPolygon;
typedef struct iColor_tag;
typedef struct xCutsceneMgrAsset;
typedef struct xLightKitLight;
typedef struct xAnimActiveEffect;
typedef struct widget;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct zGlobalSettings;
typedef struct xShadowSimpleCache;
typedef struct motive;
typedef struct xModelPool;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xBound;
typedef struct xModelInstance;
typedef struct RpMaterialList;
typedef struct _zPortal;
typedef struct zAssetPickupTable;
typedef struct xGroup;
typedef struct xEntShadow;
typedef struct RwLinkList;
typedef struct xUpdateCullEnt;
typedef struct xAnimState;
typedef struct zCutsceneMgr;
typedef struct RxPipelineNode;
typedef struct xAnimMultiFile;
typedef struct zPlayerLassoInfo;
typedef struct RpMaterial;
typedef struct xGroupAsset;
typedef struct xClumpCollBSPTriangle;
typedef struct xVec3;
typedef struct zScene;
typedef struct anim_coll_data;
typedef struct xBBox;
typedef struct xBase;
typedef struct zLedgeGrabParams;
typedef struct rxHeapFreeBlock;
typedef struct widget_chunk;
typedef struct RpClump;
typedef struct RwRaster;
typedef struct xCutsceneTime;
typedef struct xCutscene;
typedef struct RxPipelineNodeTopSortData;
typedef union _class_0;
typedef struct RwV2d;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xCutsceneInfo;
typedef struct font_meter_widget;
typedef struct RwV3d;
typedef enum _zPlayerWallJumpState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xCutsceneData;
typedef struct RxPipeline;
typedef struct RpMorphTarget;
typedef struct meter_asset;
typedef struct xAnimTable;
typedef struct RxPipelineNodeParam;
typedef struct _class_1;
typedef struct RxHeap;
typedef struct xAnimEffect;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct iEnv;
typedef enum eGameMode;
typedef struct RpVertexNormal;
typedef struct xCutsceneBreak;
typedef struct xGridBound;
typedef struct xQuat;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RwTexCoords;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct rxHeapBlockHeader;
typedef struct xJSPNodeInfo;
typedef struct xMat4x3;
typedef struct xEntAsset;
typedef struct RpMeshHeader;
typedef struct xEnv;
typedef struct xDynAsset;
typedef struct analog_data;
typedef struct XCSNNosey;
typedef struct xMemPool;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpTriangle;
typedef struct asset;
typedef struct zPlayerGlobals;
typedef struct sound_queue;
typedef struct zCheckPoint;
typedef struct xfont;
typedef enum _enum;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xJSPHeader;
typedef struct xCutsceneZbuffer;
typedef struct zPlayerCarryInfo;
typedef struct rxReq;
typedef struct xUpdateCullMgr;
typedef struct xPortalAsset;
typedef struct zPlayerSettings;
typedef enum RxClusterValidityReq;
typedef struct xCamera;
typedef struct _zEnv;
typedef struct xSurface;
typedef struct xCollis;
typedef struct zJumpParam;
typedef struct xAnimTransitionList;
typedef struct motive_node;
typedef struct RwCamera;
typedef struct xClumpCollBSPTree;
typedef struct color32u;
typedef struct xEntCollis;
typedef enum RxNodeDefEditable;
typedef struct xModelTag;
typedef enum RxClusterValid;
typedef struct zEntHangable;
typedef struct xRot;
typedef struct model_widget;
typedef struct xCutsceneZbufferHack;
typedef enum RpWorldRenderOrder;
typedef enum rxEmbeddedPacketState;
typedef struct xFFX;
typedef struct xSphere;
typedef struct xQCData;
typedef struct xEntDrive;
typedef struct iFogParams;
typedef struct xModelBucket;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwTexture;
typedef struct font_context;
typedef struct tag_iFile;
typedef struct RpSector;
typedef struct xScene;
typedef struct RpWorld;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xEntBoulder;
typedef struct render_context;
typedef struct xEntFrame;
typedef struct xCutsceneMgr;
typedef enum _tagPadState;
typedef struct RpLight;
typedef struct RwSphere;
typedef struct xGlobals;
typedef struct xVec2;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xShadowSimplePoly;
typedef struct _tagxPad;
typedef struct xBaseAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct tri_data_0;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct _tagPadAnalog;
typedef struct RxIoSpec;
typedef struct zLasso;
typedef struct _tagiPad;
typedef struct tri_data_1;
typedef struct xAnimMultiFileEntry;
typedef struct basic_rect;
typedef struct _class_2;
typedef struct RxNodeMethods;
typedef struct RwFrustumPlane;
typedef struct _class_3;
typedef struct RwPlane;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimMultiFileBase;
typedef struct _class_4;

typedef void(*type_0)(xMemPool*, void*);
typedef unsigned int(*type_1)(void*, void*);
typedef int(*type_3)(RxNodeDefinition*);
typedef void(*type_4)(xEnt*);
typedef unsigned int(*type_7)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_8)(void*);
typedef void(*type_9)(RxNodeDefinition*);
typedef void(*type_10)(RwResEntry*);
typedef unsigned char(*type_11)(widget&, motive&, float);
typedef RwCamera*(*type_14)(RwCamera*);
typedef unsigned char(*type_15)(widget&, motive&, float);
typedef int(*type_16)(RxPipelineNode*);
typedef void(*type_17)(xEnt*, xVec3*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef void(*type_24)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_29)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_31)(RpClump*, void*);
typedef void(*type_32)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_33)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_38)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_39)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_40)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_43)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_46)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_51)(unsigned int);
typedef void(*type_53)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_54)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef char*(*type_55)(xBase*);
typedef char*(*type_57)(unsigned int);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_67)(widget&, motive&);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef void(*type_99)(xEnt*, xScene*, float);
typedef void(*type_106)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned char(*type_113)(widget&, motive&, float);

typedef unsigned char type_2[22];
typedef unsigned char type_5[22];
typedef xVec3 type_6[4];
typedef unsigned short type_12[3];
typedef RxCluster type_13[1];
typedef unsigned char type_19[2];
typedef unsigned int type_21[5];
typedef xAnimMultiFileEntry type_22[1];
typedef float type_25[4];
typedef xVec3 type_26[5];
typedef unsigned char type_27[5];
typedef xVec3 type_28[60];
typedef xCollis type_30[18];
typedef float type_34[22];
typedef RwTexCoords* type_35[8];
typedef float type_36[22];
typedef RwFrustumPlane type_37[6];
typedef char type_41[16];
typedef float type_42[15];
typedef unsigned char type_44[5];
typedef unsigned int type_45[15];
typedef float type_47[15];
typedef RwV3d type_48[8];
typedef unsigned int type_49[15];
typedef unsigned int type_50[15];
typedef int type_52[5];
typedef char type_56[16];
typedef unsigned int type_58[15];
typedef unsigned short type_59[3];
typedef char type_61[16];
typedef unsigned int type_62[72];
typedef analog_data type_63[2];
typedef char type_64[4];
typedef char type_65[16];
typedef xBase* type_66[72];
typedef unsigned char type_68[3];
typedef float type_69[2];
typedef unsigned int* type_70[5];
typedef unsigned char type_71[2];
typedef unsigned int type_72[2];
typedef xVec4 type_73[12];
typedef unsigned char type_74[2];
typedef float type_75[6];
typedef xCutsceneZbuffer type_76[4];
typedef float type_77[3];
typedef RwTexCoords* type_78[8];
typedef widget* type_79[9];
typedef unsigned int type_80[2];
typedef float type_81[3];
typedef unsigned int type_82[2];
typedef xModelTag type_83[2];
typedef char type_84[128];
typedef float type_85[4];
typedef float type_86[3];
typedef unsigned int type_87[2];
typedef unsigned int type_89[4];
typedef RpLight* type_90[2];
typedef xEnt* type_91[111];
typedef unsigned int* type_92[5];
typedef RwFrame* type_93[2];
typedef xVec3 type_94[3];
typedef char type_95[32];
typedef char type_96[128];
typedef type_96 type_97[6];
typedef unsigned int type_98[5];
typedef unsigned char type_100[14];
typedef xModelTag type_101[4];
typedef char type_102[32];
typedef xModelInstance* type_103[14];
typedef float type_104[16];
typedef special_data type_105[15];
typedef unsigned int type_107[5];
typedef int type_108[5];
typedef char type_109[12];
typedef unsigned char type_110[4];
typedef char type_111[32];
typedef char* type_112[9];
typedef char type_114[32];
typedef float type_115[2];

struct special_data
{
	char* hud_model;
	int max_value;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_25 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct meter_widget : widget
{
	meter_asset& res;
	float value;
	float min_value;
	float max_value;
	float end_value;
	float value_vel;
	float value_accel;
	float ping_delay;
	float pitch;
	sound_queue pings;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_99 update;
	type_99 endUpdate;
	type_17 bupdate;
	type_106 move;
	type_4 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_40 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_19 NumAnims;
	void** RawData;
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

struct tag_xFile
{
	type_95 relname;
	tag_iFile ps;
	void* user_data;
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

struct zPlatform
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_7 Conditional;
	type_7 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_115 BilinearLerp;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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
	type_60 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_10 destroyNotify;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_12 vertIndex;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_42 startTime;
	type_47 endTime;
	type_49 emitID;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_104 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct widget
{
	_class_1 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_13 clusters;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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
	type_71 PowerUp;
	type_74 InitialPowerUp;
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
	type_6 corner;
};

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_15 fp_update;
	void* context;
	unsigned char inverse;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_20 sync;
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
	type_53 BeforeAnimMatrices;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_68 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zAssetPickupTable
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_69 radius;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_1 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_38 BeforeEnter;
	type_24 StateCallback;
	type_53 BeforeAnimMatrices;
};

struct zCutsceneMgr : xCutsceneMgr
{
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_22 Files;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_62 baseCount;
	type_66 baseList;
	_zEnv* zen;
};

struct anim_coll_data
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_28 tranTable;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct widget_chunk : xBase
{
	widget w;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_31 callback;
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

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
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
	type_80 SndChannelReq;
	type_82 SndAssetID;
	type_87 SndHandle;
	XCSNNosey* cb_nosey;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwV2d
{
	float x;
	float y;
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
	type_78 texCoords;
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
	type_35 texCoords;
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
	type_61 SoundLeft;
	type_65 SoundRight;
};

struct font_meter_widget : meter_widget
{
	font_context font;
	font_context start_font;
	int precision;
	xVec2 offset;
	type_109 buffer;
	int last_value;
	xfont xf;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct meter_asset : asset
{
	float start_value;
	float min_value;
	float max_value;
	float increment_time;
	float decrement_time;
	_class_3 sound;
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

struct _class_1
{
	unsigned char visible;
	unsigned char enabled;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_46 Callback;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_90 light;
	type_93 light_frame;
	int memlvl;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xCutsceneBreak
{
	float Time;
	int Index;
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

struct xQuat
{
	xVec3 v;
	float s;
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

struct RwTexCoords
{
	float u;
	float v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_89 pad;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_0 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RpTriangle
{
	type_59 vertIndex;
	short matIndex;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
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
	type_83 BubbleWandTag;
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
	type_101 HangPawTag;
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
	type_45 Inv_PatsSock;
	type_50 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_58 Inv_LevelPickups;
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
	type_72 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_91 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_100 sb_model_indices;
	type_103 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct sound_queue
{
	type_98 _playing;
	int head;
	int tail;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
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

struct xJSPHeader
{
	type_64 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
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

struct rxReq
{
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
	type_8 activateCB;
	type_8 deactivateCB;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_75 MoveSpeed;
	type_77 AnimSneak;
	type_81 AnimWalk;
	type_86 AnimRun;
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
	type_110 talk_filter;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_73 frustplane;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xSurface
{
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_14 beginUpdate;
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
	type_37 frustumPlanes;
	RwBBox frustumBoundBox;
	type_48 frustumCorners;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct color32u
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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
	type_30 colls;
	type_32 post;
	type_33 depenq;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_85 wt;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zEntHangable
{
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct model_widget : widget
{
	unsigned int mid;
	xModelInstance* model;
};

struct xCutsceneZbufferHack
{
	char* name;
	type_76 times;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xFFX
{
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_111 name;
	type_114 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct tag_iFile
{
	unsigned int flags;
	type_84 path;
	int fd;
	int offset;
	int length;
};

struct RpSector
{
	int type;
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
	type_51 resolvID;
	type_55 base2Name;
	type_57 id2Name;
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
	type_88 renderCallBack;
	RxPipeline* pipeline;
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

struct xEntBoulder
{
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

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_97 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_102 sceneStart;
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

struct xVec2
{
	float x;
	float y;
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

struct xShadowSimplePoly
{
	type_94 vert;
	xVec3 norm;
};

struct _tagxPad
{
	type_2 value;
	type_5 last_value;
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
	type_34 up_tmr;
	type_36 down_tmr;
	type_63 analog;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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

struct _tagPadAnalog
{
	char x;
	char y;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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
	type_26 lastRefs;
	type_27 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _tagiPad
{
	int port;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct _class_2
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_43 nodeBody;
	type_3 nodeInit;
	type_9 nodeTerm;
	type_16 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_29 pipelineNodeConfig;
	type_39 configMsgHandler;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct _class_3
{
	unsigned int start_increment;
	unsigned int increment;
	unsigned int start_decrement;
	unsigned int decrement;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _class_4
{
	float t;
	float u;
	float v;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_41 buffer;
type_56 buffer;
type_108 meter_widget_index;
type_52 model_widget_index;
type_92 value;
type_21 old_value;
type_70 max_value;
type_107 old_max_value;
type_44 hiding;
unsigned char inited;
unsigned char last_paused;
type_112 widget_resources;
type_105 level_specials;
type_79 widgets;
type_67 hide_widget;
type_11 delay_motive_update;
type_113 shake_motive_update;
zGlobals globals;
eGameMode gGameMode;

void hide();
void show();
void render();
void update(float dt);
void destroy();
void setup();
void init();
void hide_widget(widget& w);

// hide__4zhudFv
// Start address: 0x17faf0
void hide()
{
	widget** it;
	widget** end;
	widget* widget;
	unsigned char* it;
	unsigned char* end;
}

// show__4zhudFv
// Start address: 0x17fba0
void show()
{
	widget** it;
	widget** end;
	widget* widget;
	unsigned char* it;
	unsigned char* end;
}

// render__4zhudFv
// Start address: 0x17fc60
void render()
{
}

// update__4zhudFf
// Start address: 0x17fc70
void update(float dt)
{
	int i;
	int i;
	char @3956;
	unsigned int model_type;
	char @3948;
	unsigned int meter_type;
}

// destroy__4zhudFv
// Start address: 0x180230
void destroy()
{
}

// setup__4zhudFv
// Start address: 0x180270
void setup()
{
	int i;
	unsigned int id;
	widget_chunk* wc;
	special_data& special;
	unsigned int id;
	widget_chunk* wc;
	font_meter_widget& meter;
	unsigned int id;
	widget_chunk* wc;
	int i;
}

// init__4zhudFv
// Start address: 0x180570
void init()
{
}

// hide_widget__Q24zhud18@unnamed@zHud_cpp@FRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x180580
void hide_widget(widget& w)
{
}

