typedef struct xAnimTransition;
typedef struct _zEnv;
typedef struct xVec2;
typedef struct xEntFrame;
typedef struct RwV3d;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpAtomic;
typedef struct RxPipelineNode;
typedef struct xLinkAsset;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xAnimState;
typedef struct RxPipelineNodeParam;
typedef struct xEnt;
typedef struct xCollis;
typedef struct xEnvAsset;
typedef struct zPlatform;
typedef struct RpInterpolator;
typedef struct xEntBoulderAsset;
typedef struct zGlobals;
typedef struct RxHeap;
typedef struct _tagTRCPadInfo;
typedef struct RwBBox;
typedef struct xSpline3;
typedef struct RwRGBA;
typedef struct XCSNNosey;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct xCutsceneMgr;
typedef struct xModelInstance;
typedef struct xQuat;
typedef struct zGlobalSettings;
typedef struct xEntMechData;
typedef struct xAnimMultiFileEntry;
typedef struct zAssetPickupTable;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwTexCoords;
typedef struct xAnimActiveEffect;
typedef struct xGroupAsset;
typedef struct xEntMotionSplineData;
typedef struct xCutsceneMgrAsset;
typedef struct xShadowSimplePoly;
typedef struct basic_rect;
typedef struct zCutsceneMgr;
typedef struct RpPolygon;
typedef struct xBase;
typedef struct xCutscene;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimFile;
typedef struct RpMaterialList;
typedef struct zJumpParam;
typedef struct zEnt;
typedef struct xBaseAsset;
typedef struct xCutsceneZbufferHack;
typedef struct xJSPNodeInfo;
typedef struct xAnimSingle;
typedef struct zLedgeGrabParams;
typedef struct RpMaterial;
typedef struct xLightKit;
typedef struct zEntHangable;
typedef struct xIniFile;
typedef struct _tagxPad;
typedef struct xClumpCollBSPBranchNode;
typedef struct xScene;
typedef enum _zPlayerWallJumpState;
typedef struct xLightKitLight;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct xEntCollis;
typedef struct xModelPool;
typedef struct xVec4;
typedef struct xAnimMultiFileBase;
typedef struct RpClump;
typedef struct xVec3;
typedef struct xAnimEffect;
typedef struct RwSurfaceProperties;
typedef struct xShadowSimpleCache;
typedef struct RpGeometry;
typedef struct RwMatrixTag;
typedef struct RpWorldSector;
typedef struct rxReq;
typedef enum eStartupErrors;
typedef struct xUpdateCullGroup;
typedef struct xAnimPlay;
typedef struct tri_data_0;
typedef struct RwRaster;
typedef struct xCoef;
typedef enum RxClusterValidityReq;
typedef struct RpMorphTarget;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xEntBoulder;
typedef struct xJSPHeader;
typedef struct RpLight;
typedef struct xCutsceneInfo;
typedef struct xBound;
typedef struct RpVertexNormal;
typedef struct xAnimMultiFile;
typedef struct analog_data;
typedef enum RxNodeDefEditable;
typedef struct xEntMotionMechData;
typedef struct xMat4x3;
typedef enum _tagPadInit;
typedef struct xFFX;
typedef enum RxClusterValid;
typedef struct xAnimTable;
typedef struct xCamera;
typedef struct xEntPenData;
typedef struct RpMeshHeader;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xCoef3;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xQCData;
typedef struct RwCamera;
typedef struct zPlayerGlobals;
typedef struct xBBox;
typedef struct zCheckPoint;
typedef struct _class_0;
typedef struct xSurface;
typedef enum rxEmbeddedPacketState;
typedef struct xUpdateCullMgr;
typedef struct xSphere;
typedef struct xEntShadow;
typedef struct xModelBucket;
typedef enum RwCameraProjection;
typedef struct xEntOrbitData;
typedef enum RxClusterForcePresent;
typedef struct RpTriangle;
typedef struct zPlayerCarryInfo;
typedef struct anim_coll_data;
typedef struct xCylinder;
typedef struct zPlayerSettings;
typedef struct zLasso;
typedef struct zPlatFMRunTime;
typedef struct xMovePointAsset;
typedef struct RxClusterDefinition;
typedef struct xEntMotion;
typedef struct xBox;
typedef struct _zHipDepend;
typedef struct xIniValue;
typedef struct xPlatformAsset;
typedef struct xEntMotionAsset;
typedef struct iEnv;
typedef struct xGridBound;
typedef struct tag_iFile;
typedef struct xCutsceneTime;
typedef struct xMemPool;
typedef struct xPortalAsset;
typedef struct RpWorld;
typedef struct _tagiTRCPadInfo;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct xCutsceneData;
typedef struct RxOutputSpec;
typedef struct xEntSplineData;
typedef struct _zPortal;
typedef struct _tagiPad;
typedef struct _tagxRumble;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xIniSection;
typedef enum RpWorldRenderOrder;
typedef struct tag_xFile;
typedef struct xCutsceneBreak;
typedef struct xEntMotionPenData;
typedef struct RwFrame;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xEntDrive;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct st_SERIAL_PERCID_SIZE;
typedef struct RpSector;
typedef struct xEntMPData;
typedef struct _class_1;
typedef struct RxNodeMethods;
typedef struct xAnimTransitionList;
typedef enum _tagPadState;
typedef struct xModelTag;
typedef struct xMovePoint;
typedef enum _tagTRCState;
typedef struct xGlobals;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct xEntMotionERData;
typedef struct RxCluster;
typedef struct xEnv;
typedef struct xCutsceneZbuffer;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPacket;
typedef struct _tagPadAnalog;
typedef struct xClumpCollBSPTriangle;
typedef enum RwFogType;
typedef struct tri_data_1;
typedef struct RwObjectHasFrame;
typedef struct RwRGBAReal;
typedef struct xEntAsset;
typedef struct RwLinkList;
typedef struct iFogParams;
typedef struct xEntMotionOrbitData;
typedef union _class_2;
typedef struct RwV2d;

typedef unsigned int(*type_0)(void*, void*);
typedef int(*type_3)(RxPipelineNode*, RxPipeline*);
typedef int(*type_6)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_7)(void*);
typedef unsigned int(*type_16)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_21)(RxNodeDefinition*);
typedef void(*type_26)(RxNodeDefinition*);
typedef void(*type_27)(xEnt*, xScene*, float);
typedef int(*type_28)(RxPipelineNode*);
typedef unsigned int(*type_29)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_32)(RxPipelineNode*);
typedef void(*type_33)(xEnt*, xVec3*);
typedef void(*type_35)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_36)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_37)(xEnt*);
typedef RpClump*(*type_43)(RpClump*, void*);
typedef xBase*(*type_44)(unsigned int);
typedef unsigned int(*type_46)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_48)();
typedef unsigned int(*type_50)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_52)(xEnt*, xVec3*, xMat4x3*);
typedef char*(*type_57)(xBase*);
typedef char*(*type_64)(unsigned int);
typedef void(*type_65)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_79)(RpAtomic*);
typedef void(*type_84)(xAnimPlay*, xAnimState*);
typedef void(*type_94)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RwCamera*(*type_111)(RwCamera*);
typedef RwCamera*(*type_118)(RwCamera*);
typedef void(*type_121)(xMemPool*, void*);
typedef RpWorldSector*(*type_125)(RpWorldSector*);
typedef void(*type_130)(RwResEntry*);
typedef RwObjectHasFrame*(*type_150)(RwObjectHasFrame*);

typedef unsigned int type_1[2];
typedef unsigned int type_2[2];
typedef unsigned char type_4[2];
typedef float type_5[4];
typedef unsigned int type_8[2];
typedef unsigned char type_9[22];
typedef char type_10[11];
typedef unsigned char type_11[22];
typedef float type_12[3];
typedef char type_13[64];
typedef RwFrustumPlane type_14[6];
typedef unsigned int type_15[6];
typedef char type_17[64];
typedef xVec3 type_18[3];
typedef RwV3d type_20[8];
typedef char type_22[64];
typedef unsigned short type_23[3];
typedef float type_24[4];
typedef _tagxPad type_25[4];
typedef float type_30[4];
typedef float type_31[2];
typedef xVec3 type_34[60];
typedef unsigned char type_38[2];
typedef float type_39[16];
typedef float type_40[6];
typedef float type_41[22];
typedef float type_42[4];
typedef float type_45[22];
typedef float type_47[4];
typedef _tagTRCPadInfo type_49[4];
typedef char type_51[4];
typedef float type_53[4];
typedef unsigned int type_54[15];
typedef st_SERIAL_PERCID_SIZE type_55[3];
typedef RwTexCoords* type_56[8];
typedef unsigned int type_58[15];
typedef unsigned char type_59[2];
typedef xAnimMultiFileEntry type_60[1];
typedef char type_61[16];
typedef xVec3 type_62[5];
typedef float type_63[15];
typedef unsigned int type_66[15];
typedef unsigned char type_67[5];
typedef unsigned char type_68[3];
typedef float type_69[15];
typedef float type_70[6];
typedef xVec3 type_71[4];
typedef unsigned int type_72[15];
typedef float type_73[3];
typedef char type_74[16];
typedef analog_data type_75[2];
typedef unsigned int type_76[101];
typedef unsigned short type_77[3];
typedef float type_78[4];
typedef float type_80[4];
typedef char type_81[16];
typedef xVec4 type_82[12];
typedef float type_83[12];
typedef char type_85[16];
typedef float type_86[12];
typedef unsigned int type_87[4];
typedef xCollis type_88[18];
typedef float type_89[12];
typedef float type_90[4];
typedef float type_91[12];
typedef char type_92[128];
typedef float type_93[3];
typedef float type_95[12];
typedef unsigned char type_96[2];
typedef unsigned int type_97[2];
typedef float type_98[6];
typedef float type_99[3];
typedef float type_100[12];
typedef unsigned char type_101[2];
typedef float type_102[6];
typedef RpLight* type_103[2];
typedef float type_104[4];
typedef float type_105[3];
typedef unsigned int type_106[4096];
typedef RwFrame* type_107[2];
typedef float type_108[4];
typedef float type_109[3];
typedef xModelTag type_110[2];
typedef unsigned char type_112[2];
typedef float type_113[3];
typedef RwTexCoords* type_114[8];
typedef unsigned int type_115[10];
typedef float type_116[4];
typedef char type_117[32];
typedef float type_119[3];
typedef xEnt* type_120[111];
typedef unsigned char type_122[3];
typedef float type_123[3];
typedef float type_124[3];
typedef char type_126[32];
typedef float type_127[4];
typedef char type_128[32];
typedef float type_129[4];
typedef float type_131[4];
typedef float type_132[2];
typedef unsigned char type_133[52247];
typedef char type_134[128];
typedef type_134 type_135[6];
typedef char type_136[256];
typedef float type_137[4];
typedef float type_138[4];
typedef unsigned char type_139[14];
typedef xModelTag type_140[4];
typedef char type_141[256];
typedef _zHipDepend type_142[1];
typedef xModelInstance* type_143[14];
typedef float type_144[3];
typedef char type_145[32];
typedef unsigned int type_146[8];
typedef RxCluster type_147[1];
typedef float type_148[3];
typedef unsigned int type_149[72];
typedef float type_151[4];
typedef xBase* type_152[72];
typedef unsigned char type_153[4];
typedef xCutsceneZbuffer type_154[4];

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_46 Conditional;
	type_46 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xVec2
{
	float x;
	float y;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_79 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_127 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_84 BeforeEnter;
	type_65 StateCallback;
	type_94 BeforeAnimMatrices;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_27 update;
	type_27 endUpdate;
	type_33 bupdate;
	type_36 move;
	type_37 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_52 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
		tri_data_0 tri;
	};
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct xEntBoulderAsset
{
	float gravity;
	float mass;
	float bounce;
	float friction;
	float statFric;
	float maxVel;
	float maxAngVel;
	float stickiness;
	float bounceDamp;
	unsigned int flags;
	float killtimer;
	unsigned int hitpoints;
	unsigned int soundID;
	float volume;
	float minSoundVel;
	float maxSoundVel;
	float innerRadius;
	float outerRadius;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int id;
	_tagTRCState state;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xSpline3
{
	unsigned short type;
	unsigned short flags;
	unsigned int N;
	unsigned int allocN;
	xVec3* points;
	float* time;
	xVec3* p12;
	xVec3* bctrl;
	float* knot;
	xCoef3* coef;
	unsigned int arcSample;
	float* arcLength;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
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
	type_0 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
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
	type_96 PowerUp;
	type_101 InitialPowerUp;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct zAssetPickupTable
{
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_87 pad;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_63 startTime;
	type_69 endTime;
	type_72 emitID;
};

struct xShadowSimplePoly
{
	type_18 vert;
	xVec3 norm;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct RpPolygon
{
	unsigned short matIndex;
	type_23 vertIndex;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_6 eventFunc;
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
	type_1 SndChannelReq;
	type_2 SndAssetID;
	type_8 SndHandle;
	XCSNNosey* cb_nosey;
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
	type_149 baseCount;
	type_152 baseList;
	_zEnv* zen;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_59 NumAnims;
	void** RawData;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xCutsceneZbufferHack
{
	char* name;
	type_154 times;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_31 BilinearLerp;
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
	type_34 tranTable;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct zEntHangable
{
};

struct xIniFile
{
	int NumValues;
	int NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	type_136 name;
	type_141 pathname;
};

struct _tagxPad
{
	type_9 value;
	type_11 last_value;
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
	type_41 up_tmr;
	type_45 down_tmr;
	type_75 analog;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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
	type_44 resolvID;
	type_57 base2Name;
	type_64 id2Name;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_39 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
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
	type_88 colls;
	type_35 post;
	type_50 depenq;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_43 callback;
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
	type_29 Callback;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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
	type_71 corner;
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
	type_114 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_56 texCoords;
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

struct rxReq
{
};

enum eStartupErrors
{
	eNoError,
	eNoFormat,
	eDamagedCard,
	eWrongDevice,
	eNoCards,
	eCorruptFile,
	eNoController
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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
	type_94 BeforeAnimMatrices;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
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

struct xCoef
{
	type_42 a;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xEntBoulder : xEnt
{
	xEntBoulderAsset* basset;
	xShadowSimpleCache simpShadow_embedded;
	xEntShadow entShadow_embedded;
	xVec3 localCenter;
	xVec3 vel;
	xVec3 rotVec;
	xVec3 force;
	xVec3 instForce;
	float angVel;
	float timeToLive;
	int hitpoints;
	float lastRolling;
	unsigned int rollingID;
	unsigned char collis_chk;
	unsigned char collis_pen;
	type_38 pad1;
};

struct xJSPHeader
{
	type_51 idtag;
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
	type_81 SoundLeft;
	type_85 SoundRight;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_122 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_60 Files;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
};

struct xFFX
{
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_82 frustplane;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_130 destroyNotify;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_111 beginUpdate;
	type_118 endUpdate;
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
	type_14 frustumPlanes;
	RwBBox frustumBoundBox;
	type_20 frustumCorners;
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
	type_110 BubbleWandTag;
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
	type_140 HangPawTag;
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
	type_54 Inv_PatsSock;
	type_58 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_66 Inv_LevelPickups;
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
	type_97 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_120 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_139 sb_model_indices;
	type_143 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct _class_0
{
	float t;
	float u;
	float v;
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
	type_68 pad;
	void* moprops;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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
	type_7 activateCB;
	type_7 deactivateCB;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_132 radius;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	type_77 vertIndex;
	short matIndex;
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

struct anim_coll_data
{
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_102 MoveSpeed;
	type_105 AnimSneak;
	type_109 AnimWalk;
	type_113 AnimRun;
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
	type_153 talk_filter;
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
	type_62 lastRefs;
	type_67 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_83 tmrs;
	type_86 ttms;
	type_89 atms;
	type_91 dtms;
	type_95 vms;
	type_100 dss;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _zHipDepend
{
	unsigned int sceneID;
	unsigned int dependID;
};

struct xIniValue
{
	char* tok;
	char* val;
};

struct xPlatformAsset
{
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_103 light;
	type_107 light_frame;
	int memlvl;
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

struct tag_iFile
{
	unsigned int flags;
	type_92 path;
	int fd;
	int offset;
	int length;
};

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_121 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_125 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntSplineData
{
	int unknown;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct _tagiPad
{
	int port;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct xIniSection
{
	char* sec;
	int first;
	int count;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct tag_xFile
{
	type_117 relname;
	tag_iFile ps;
	void* user_data;
};

struct xCutsceneBreak
{
	float Time;
	int Index;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_112 pad;
	float len;
	float range;
	float period;
	float phase;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_126 name;
	type_128 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct st_SERIAL_PERCID_SIZE
{
	unsigned int idtag;
	int needsize;
};

struct RpSector
{
	int type;
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

struct _class_1
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_19 nodeBody;
	type_21 nodeInit;
	type_26 nodeTerm;
	type_28 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_3 pipelineNodeConfig;
	type_16 configMsgHandler;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_137 wt;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_4 pad;
	float delay;
	xSpline3* spl;
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_135 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_145 sceneStart;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_147 clusters;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_150 sync;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwV2d
{
	float x;
	float y;
};

type_61 buffer;
type_74 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
type_142 sHipDependTable;
type_76 RlePalette;
type_133 RleData;
zGlobals globals;
xGlobals* xglobals;
int gBuildNumber;
unsigned int gEE2BuildNumber;
int sShowMenuOnBoot;
type_55 g_xser_sizeinfo;
float gSkipTimeCutscene;
float gSkipTimeFlythrough;
int percentageDone;
type_49 gTrcPad;
int bad_card_needed;
type_25 mPad;
type_106 ourGlobals;
unsigned int gSoak;
unsigned int gGameSfxReport;
float zcam_overrot_max;
float zcam_overrot_mid;
float zcam_overrot_min;
float zcam_wall_pitch;
float zcam_highbounce_pitch;
float zcam_below_pitch;
float zcam_above_pitch;
float zcam_far_pitch;
float zcam_near_pitch;
float zcam_overrot_tmanual;
float zcam_overrot_velmax;
float zcam_overrot_velmin;
float zcam_overrot_tend;
float zcam_overrot_tstart;
float zcam_overrot_rate;
float zcam_wall_h;
float zcam_wall_d;
float zcam_highbounce_h;
float zcam_highbounce_d;
float zcam_below_h;
float zcam_below_d;
float zcam_above_h;
float zcam_above_d;
float zcam_far_h;
float zcam_far_d;
float zcam_near_h;
float zcam_near_d;
float zcam_pad_pitch_scale;
float zcam_pad_pyaw_scale;
float xcam_collis_stiffness;
float xcam_collis_radius;
_tagxPad* gDebugPad;
type_48 zMainMemLvlChkCB;

void zMainLoadFontHIP();
void zMainMemCardSpaceQuery();
void zMainFirstScreen(int mode);
void zMainReadINI();
void zMainLoop();
void zMainMemLvlChkCB();
void zMainParseINIGlobals(xIniFile* ini);
void zMainOutputMgrSetup();
void main(int argc, char** argv);

// zMainLoadFontHIP__Fv
// Start address: 0x185960
void zMainLoadFontHIP()
{
	long t;
}

// zMainMemCardSpaceQuery__Fv
// Start address: 0x185a70
void zMainMemCardSpaceQuery()
{
	int bytesNeeded;
	int availOnDisk;
	int neededFiles;
	int do_chk;
	int fullCard;
	unsigned char formatInProgress;
	unsigned char formatFailed;
	eStartupErrors startupError;
	int status;
}

// zMainFirstScreen__Fi
// Start address: 0x1861f0
void zMainFirstScreen(int mode)
{
	RwCamera* cam;
	RwRGBA bg;
	int i;
	int vbl;
}

// zMainReadINI__Fv
// Start address: 0x186430
void zMainReadINI()
{
	char* str;
	void* buf;
	unsigned int size;
	xIniFile* ini;
}

// zMainLoop__Fv
// Start address: 0x186710
void zMainLoop()
{
	long t;
	unsigned int* preinit;
	RpAtomic* modl;
	RpAtomic* modl;
	RpAtomic* modl;
	unsigned int newGameSceneID;
	unsigned int iconDataSize;
	void* iconData;
	unsigned int gameSceneID;
	unsigned int menuModeID;
	char @5697;
	type_15 preinit_bubble_matfx;
	type_146 preinit_shiny_models;
	type_115 preinit_ADC_models;
}

// zMainMemLvlChkCB__Fv
// Start address: 0x187a40
void zMainMemLvlChkCB()
{
}

// zMainParseINIGlobals__FP8xIniFile
// Start address: 0x187a50
void zMainParseINIGlobals(xIniFile* ini)
{
	unsigned int use_degrees;
	type_131 fbuf;
	type_108 fbuf;
	type_80 fbuf;
	type_53 fbuf;
	type_24 fbuf;
	type_124 fbuf;
	type_99 fbuf;
	type_73 fbuf;
	type_40 fbuf;
	type_151 fbuf;
	type_129 fbuf;
	type_104 fbuf;
	type_78 fbuf;
	type_47 fbuf;
	type_144 fbuf;
	type_119 fbuf;
	type_93 fbuf;
	type_70 fbuf;
	type_30 fbuf;
	type_5 fbuf;
	type_138 fbuf;
	type_116 fbuf;
	type_90 fbuf;
	type_12 fbuf;
	type_148 fbuf;
	type_123 fbuf;
	type_98 fbuf;
}

// zMainOutputMgrSetup__Fv
// Start address: 0x189c20
void zMainOutputMgrSetup()
{
}

// 
// Start address: 0x189c50
void main(int argc, char** argv)
{
	unsigned int options;
	int i;
}

