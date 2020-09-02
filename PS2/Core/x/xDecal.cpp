typedef struct zPlatform;
typedef struct xEnvAsset;
typedef struct xVec2;
typedef struct xAnimTransitionList;
typedef struct _tagxRumble;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef struct zGlobals;
typedef struct xDecalEmitter;
typedef struct xModelInstance;
typedef struct RwMatrixTag;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xLinkAsset;
typedef struct xBase;
typedef struct xCollis;
typedef struct xQuat;
typedef struct zGlobalSettings;
typedef struct _zPortal;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xAnimState;
typedef struct xGroup;
typedef struct RxPipelineNodeTopSortData;
typedef struct zCutsceneMgr;
typedef struct rxHeapBlockHeader;
typedef struct zAssetPickupTable;
typedef struct RpSector;
typedef struct xUpdateCullEnt;
typedef struct xEnt;
typedef struct xClumpCollBSPTriangle;
typedef struct zPlayerLassoInfo;
typedef struct RpAtomic;
typedef struct curve_node;
typedef struct xEntShadow;
typedef struct xGroupAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct zScene;
typedef struct RwLLLink;
typedef struct _class_0;
typedef struct tri_data_0;
typedef struct xAnimMultiFileEntry;
typedef struct zLedgeGrabParams;
typedef struct xAnimActiveEffect;
typedef struct unit_data;
typedef union _class_1;
typedef struct xVec3;
typedef struct RxPipeline;
typedef struct xEntBoulder;
typedef struct xAnimFile;
typedef struct xBaseAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xAnimSingle;
typedef struct xVec4;
typedef struct RpVertexNormal;
typedef struct RwSurfaceProperties;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct rxReq;
typedef struct iEnv;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xUpdateCullGroup;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct _class_2;
typedef struct xJSPNodeInfo;
typedef struct xAnimEffect;
typedef struct xAnimTable;
typedef struct xBound;
typedef struct analog_data;
typedef enum texture_mode;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xModelPool;
typedef struct xEntAsset;
typedef struct RpPolygon;
typedef struct zLasso;
typedef struct rxHeapFreeBlock;
typedef struct xAnimPlay;
typedef struct xRot;
typedef struct RpMaterialList;
typedef struct xClumpCollBSPBranchNode;
typedef struct RwTexture;
typedef struct xQCData;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct xAnimMultiFile;
typedef struct xBBox;
typedef struct RpMaterial;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xJSPHeader;
typedef struct static_queue;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct zPlayerCarryInfo;
typedef struct config;
typedef struct xUpdateCullMgr;
typedef struct xCylinder;
typedef struct xEntFrame;
typedef struct RpClump;
typedef struct zPlayerSettings;
typedef struct xPortalAsset;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xCamera;
typedef struct xBox;
typedef struct _zEnv;
typedef struct RxClusterDefinition;
typedef struct xSurface;
typedef struct xClumpCollBSPTree;
typedef struct RwCamera;
typedef struct RpMorphTarget;
typedef struct xShadowSimplePoly;
typedef struct xGridBound;
typedef struct _class_3;
typedef struct xEnv;
typedef struct RwSphere;
typedef struct _class_4;
typedef struct RwTexDictionary;
typedef struct ptank_pool;
typedef struct RxOutputSpec;
typedef struct RpMeshHeader;
typedef struct ptank_pool__color_mat_uv2;
typedef struct iFogParams;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct xMat3x3;
typedef struct xEntDrive;
typedef struct xLightKitLight;
typedef struct RxClusterRef;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct RwObject;
typedef struct RpWorld;
typedef struct xEntCollis;
typedef struct RxIoSpec;
typedef struct RpTriangle;
typedef struct iColor_tag;
typedef struct RpLight;
typedef struct RxNodeMethods;
typedef enum _tagPadState;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct _class_5;
typedef struct RwPlane;
typedef struct _tagxPad;
typedef struct xFFX;
typedef struct RxCluster;
typedef struct xModelTag;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct tri_data_1;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct xModelBucket;
typedef enum RwFogType;
typedef struct _tagiPad;
typedef struct anim_coll_data;
typedef struct RwRGBAReal;
typedef struct render_state;
typedef struct RwObjectHasFrame;
typedef struct iterator;
typedef struct RwLinkList;
typedef struct RwV2d;
typedef struct xClumpCollBSPVertInfo;
typedef struct zJumpParam;

typedef void(*type_1)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_3)(void*);
typedef char*(*type_4)(xBase*);
typedef int(*type_5)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_7)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef char*(*type_8)(unsigned int);
typedef int(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_12)(RxNodeDefinition*);
typedef unsigned int(*type_13)(void*, void*);
typedef void(*type_14)(RxNodeDefinition*);
typedef int(*type_16)(RxPipelineNode*);
typedef void(*type_18)(RxPipelineNode*);
typedef RpWorldSector*(*type_20)(RpWorldSector*);
typedef int(*type_21)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_23)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_38)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_41)(RpClump*, void*);
typedef xBase*(*type_45)(unsigned int);
typedef void(*type_47)(xAnimPlay*, xAnimState*);
typedef void(*type_53)(xEnt*, xScene*, float);
typedef void(*type_55)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_57)(xEnt*, xVec3*);
typedef void(*type_59)(xEnt*, xScene*, float, xEntCollis*);
typedef RwCamera*(*type_61)(RwCamera*);
typedef void(*type_62)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_64)(xEnt*);
typedef RpAtomic*(*type_66)(RpAtomic*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef void(*type_69)(xMemPool*, void*);
typedef unsigned int(*type_71)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_76)(RwResEntry*);
typedef RwObjectHasFrame*(*type_89)(RwObjectHasFrame*);

typedef unsigned char type_0[22];
typedef unsigned char type_2[22];
typedef RwFrustumPlane type_6[6];
typedef unsigned int type_9[11];
typedef RwV3d type_11[8];
typedef xVec3 type_15[5];
typedef unsigned char type_17[5];
typedef xVec3 type_19[60];
typedef char* type_22[11];
typedef float type_24[22];
typedef float type_25[2];
typedef float type_26[2];
typedef float type_27[22];
typedef xDecalEmitter* type_28[32];
typedef unsigned int type_29[15];
typedef unsigned int type_31[15];
typedef unsigned short type_32[3];
typedef unsigned int type_33[15];
typedef unsigned char type_34[2];
typedef xAnimMultiFileEntry type_35[1];
typedef unsigned int type_36[72];
typedef char type_37[4];
typedef analog_data type_39[2];
typedef xBase* type_40[72];
typedef unsigned int type_42[4];
typedef xVec3 type_43[3];
typedef xVec2 type_44[2];
typedef RwTexCoords* type_46[8];
typedef unsigned char type_48[2];
typedef unsigned int type_49[2];
typedef xVec4 type_50[12];
typedef unsigned char type_51[2];
typedef float type_52[6];
typedef float type_54[3];
typedef float type_56[3];
typedef float type_58[16];
typedef xModelTag type_60[2];
typedef float type_63[3];
typedef unsigned short type_65[3];
typedef RpLight* type_68[2];
typedef xEnt* type_70[111];
typedef RwFrame* type_72[2];
typedef unsigned char type_73[3];
typedef char type_74[32];
typedef char type_75[32];
typedef xVec3 type_77[4];
typedef float type_78[4];
typedef char type_79[128];
typedef type_79 type_80[6];
typedef unsigned char type_81[14];
typedef xModelTag type_82[4];
typedef char type_83[32];
typedef xModelInstance* type_84[14];
typedef RxCluster type_85[1];
typedef RwTexCoords* type_86[8];
typedef float type_87[4];
typedef char type_88[16];
typedef unsigned char type_90[4];
typedef xCollis type_91[18];
typedef char type_92[16];

struct zPlatform
{
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

struct xVec2
{
	float x;
	float y;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xDecalEmitter
{
	config cfg;
	_class_5 texture;
	static_queue units;
	curve_node* curve;
	unsigned int curve_size;
	unsigned int curve_index;
	float ilife;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_30 Conditional;
	type_30 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_78 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
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
		_class_2 tuv;
		tri_data_0 tri;
	};
};

struct xQuat
{
	xVec3 v;
	float s;
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
	type_48 PowerUp;
	type_51 InitialPowerUp;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_47 BeforeEnter;
	type_38 StateCallback;
	type_55 BeforeAnimMatrices;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct zCutsceneMgr
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_42 pad;
};

struct zAssetPickupTable
{
};

struct RpSector
{
	int type;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_13 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_53 update;
	type_53 endUpdate;
	type_57 bupdate;
	type_62 move;
	type_64 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_1 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_66 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct curve_node
{
	float time;
	iColor_tag color;
	float scale;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_25 radius;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_36 baseCount;
	type_40 baseList;
	_zEnv* zen;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data_0
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_19 tranTable;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct unit_data
{
	unsigned char flags;
	unsigned char curve_index;
	unsigned char u;
	unsigned char v;
	float frac;
	float age;
	float cull_size;
	xMat4x3 mat;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xEntBoulder
{
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
	type_34 NumAnims;
	void** RawData;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_26 BilinearLerp;
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

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_68 light;
	type_72 light_frame;
	int memlvl;
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

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct _class_2
{
	float t;
	float u;
	float v;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_23 Callback;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_73 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

enum texture_mode
{
	TM_DEFAULT,
	TM_RANDOM,
	TM_CYCLE,
	MAX_TM,
	FORCE_INT_TM = 0xffffffff
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_32 vertIndex;
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
	type_15 lastRefs;
	type_17 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_55 BeforeAnimMatrices;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_74 name;
	type_75 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_60 BubbleWandTag;
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
	type_82 HangPawTag;
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
	type_29 Inv_PatsSock;
	type_31 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_33 Inv_LevelPickups;
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
	type_49 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_70 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_81 sb_model_indices;
	type_84 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_35 Files;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xSphere
{
	xVec3 center;
	float r;
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

struct static_queue
{
	unsigned int _first;
	unsigned int _size;
	unsigned int _max_size;
	unsigned int _max_size_mask;
	unit_data* _buffer;
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

struct config
{
	unsigned int flags;
	float life_time;
	unsigned int blend_src;
	unsigned int blend_dst;
	_class_3 texture;
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_41 callback;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_52 MoveSpeed;
	type_54 AnimSneak;
	type_56 AnimWalk;
	type_63 AnimRun;
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
	type_90 talk_filter;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_86 texCoords;
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
	type_46 texCoords;
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
	type_50 frustplane;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xSurface
{
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_61 beginUpdate;
	type_67 endUpdate;
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
	type_6 frustumPlanes;
	RwBBox frustumBoundBox;
	type_11 frustumCorners;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xShadowSimplePoly
{
	type_43 vert;
	xVec3 norm;
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

struct _class_3
{
	type_44 uv;
	unsigned char rows;
	unsigned char cols;
	texture_mode mode;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct _class_4
{
	unsigned char* data;
	int stride;
	unsigned int size;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct ptank_pool
{
	render_state rs;
	unsigned int used;
	RpAtomic* ptank;
	_class_4 hide;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct ptank_pool__color_mat_uv2 : ptank_pool
{
	iColor_tag* color;
	xMat4x3* mat;
	xVec2* uv;
	int stride;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_69 InitCB;
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
	type_76 destroyNotify;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_58 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_4 base2Name;
	type_8 id2Name;
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
	type_77 corner;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
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
	type_20 renderCallBack;
	RxPipeline* pipeline;
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
	type_91 colls;
	type_59 post;
	type_71 depenq;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct RxNodeMethods
{
	type_10 nodeBody;
	type_12 nodeInit;
	type_14 nodeTerm;
	type_16 pipelineNodeInit;
	type_18 pipelineNodeTerm;
	type_21 pipelineNodeConfig;
	type_7 configMsgHandler;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_80 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_83 sceneStart;
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

struct zEntHangable
{
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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

struct _class_5
{
	RwTexture* asset;
	unsigned int units;
	xVec2 size;
	xVec2 isize;
	int prev;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct _tagxPad
{
	type_0 value;
	type_2 last_value;
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
	type_24 up_tmr;
	type_27 down_tmr;
	type_39 analog;
};

struct xFFX
{
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_87 wt;
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
	type_85 clusters;
};

struct tri_data_1 : tri_data_0
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagiPad
{
	int port;
};

struct anim_coll_data
{
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct render_state
{
	RwTexture* texture;
	unsigned int src_blend;
	unsigned int dst_blend;
	unsigned int flags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_89 sync;
};

struct iterator
{
	unsigned int _it;
	static_queue* _owner;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwV2d
{
	float x;
	float y;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

type_88 buffer;
type_92 buffer;
type_28 active_emitters;
unsigned int active_emitters_size;
type_22 blend_mode_labels;
type_9 blend_mode_values;
unsigned int blend_modes;
zGlobals globals;
int _rpPTankAtomicDataOffset;
unsigned int gActiveHeap;

void get_render_data(xDecalEmitter* this, unit_data& unit, float scale, iColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1);
void update(xDecalEmitter* this, float dt);
void emit(xDecalEmitter* this, xMat4x3& mat, xVec3& scale, int texture_index);
void emit(xDecalEmitter* this, xMat4x3& mat, int texture_index);
void set_curve(xDecalEmitter* this, curve_node* curve, unsigned int size);
void refresh_config(xDecalEmitter* this);
void set_texture(xDecalEmitter* this, char* name);
void set_default_config(xDecalEmitter* this);
void init(xDecalEmitter* this, int max_size);
void xDecalUpdate(float dt);
void xDecalInit();

// get_render_data__13xDecalEmitterFRCQ213xDecalEmitter9unit_datafR10iColor_tagR7xMat4x3R5xVec2R5xVec2
// Start address: 0x3ae5d0
void get_render_data(xDecalEmitter* this, unit_data& unit, float scale, iColor_tag& color, xMat4x3& mat, xVec2& uv0, xVec2& uv1)
{
}

// update__13xDecalEmitterFf
// Start address: 0x3aecc0
void update(xDecalEmitter* this, float dt)
{
	float dage;
	ptank_pool__color_mat_uv2 pool;
	iterator it;
	unit_data& unit;
	curve_node& node0;
	curve_node& node1;
	float scale;
	xVec4* _loc;
	float par_dist;
}

// emit__13xDecalEmitterFRC7xMat4x3RC5xVec3i
// Start address: 0x3af1c0
void emit(xDecalEmitter* this, xMat4x3& mat, xVec3& scale, int texture_index)
{
}

// emit__13xDecalEmitterFRC7xMat4x3i
// Start address: 0x3af550
void emit(xDecalEmitter* this, xMat4x3& mat, int texture_index)
{
}

// set_curve__13xDecalEmitterFPCQ213xDecalEmitter10curve_nodeUi
// Start address: 0x3af830
void set_curve(xDecalEmitter* this, curve_node* curve, unsigned int size)
{
}

// refresh_config__13xDecalEmitterFv
// Start address: 0x3af840
void refresh_config(xDecalEmitter* this)
{
}

// set_texture__13xDecalEmitterFPCc
// Start address: 0x3afa20
void set_texture(xDecalEmitter* this, char* name)
{
}

// set_default_config__13xDecalEmitterFv
// Start address: 0x3afa70
void set_default_config(xDecalEmitter* this)
{
}

// init__13xDecalEmitterFiPCc
// Start address: 0x3afab0
void init(xDecalEmitter* this, int max_size)
{
}

// xDecalUpdate__Ff
// Start address: 0x3afb70
void xDecalUpdate(float dt)
{
	unsigned int i;
}

// xDecalInit__Fv
// Start address: 0x3afc00
void xDecalInit()
{
}

