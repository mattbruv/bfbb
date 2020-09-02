typedef struct xAnimState;
typedef struct zScene;
typedef struct zGlobals;
typedef struct RwTexCoords;
typedef struct RwObjectHasFrame;
typedef struct xCoef3;
typedef struct RwV3d;
typedef struct _zPortal;
typedef struct xEntMotion;
typedef struct _zUI;
typedef struct xAnimTable;
typedef struct RxPipelineNode;
typedef struct xModelInstance;
typedef struct rxHeapFreeBlock;
typedef struct zGlobalSettings;
typedef struct xPlatformAsset;
typedef struct RwRaster;
typedef struct RwRGBA;
typedef struct RxPipelineNodeTopSortData;
typedef struct xEntMotionAsset;
typedef struct RwV2d;
typedef struct RpMeshHeader;
typedef struct zUIMgr;
typedef struct xClumpCollBSPTriangle;
typedef struct xGroup;
typedef struct xAnimPlay;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zAssetPickupTable;
typedef struct RxNodeDefinition;
typedef struct xMovePointAsset;
typedef struct xUpdateCullEnt;
typedef struct xQuat;
typedef struct xBase;
typedef struct xVec3;
typedef struct xEnt;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xGroupAsset;
typedef struct xMgr;
typedef struct rxHeapSuperBlockDescriptor;
typedef union _class_0;
typedef struct xMat4x3;
typedef struct zJumpParam;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct zLedgeGrabParams;
typedef struct RxPipelineNodeParam;
typedef struct RpTriangle;
typedef struct RxHeap;
typedef struct RpAtomic;
typedef struct xEntAsset;
typedef struct zUIAsset;
typedef struct RwBBox;
typedef struct xEntSplineData;
typedef struct zEntHangable;
typedef struct RwSky2DVertex;
typedef struct xAnimEffect;
typedef struct RwTexture;
typedef struct xIniFile;
typedef struct zUIFont;
typedef struct xScene;
typedef struct xCounterAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct menuTask;
typedef struct zPlatform;
typedef struct rxHeapBlockHeader;
typedef struct xEntMotionPenData;
typedef struct xLinkAsset;
typedef struct iEnv;
typedef struct xAnimFile;
typedef struct xSerial;
typedef struct xIniValue;
typedef struct RxPipelineRequiresCluster;
typedef struct RpGeometry;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct xIniSection;
typedef struct xJSPNodeInfo;
typedef struct xAnimTransition;
typedef enum _tagRumbleType;
typedef enum _CurrentPlayer;
typedef struct xAnimTransitionList;
typedef enum _zPlayerType;
typedef struct xModelAssetInfo;
typedef struct xUpdateCullGroup;
typedef struct xEntMPData;
typedef struct RpClump;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct _tagxPad;
typedef struct xVec4;
typedef struct analog_data;
typedef struct xMovePoint;
typedef struct xEntBoulder;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct _xCounter;
typedef struct xBaseAsset;
typedef struct xClumpCollBSPBranchNode;
typedef enum RpWorldRenderOrder;
typedef struct xSpline3;
typedef struct rxReq;
typedef struct xEntMotionERData;
typedef struct RpMaterial;
typedef enum RxClusterValidityReq;
typedef struct RwCamera;
typedef struct xJSPHeader;
typedef struct zCheckPoint;
typedef struct xSurface;
typedef struct zPlayerGlobals;
typedef struct xBound;
typedef struct xVec2;
typedef struct xAnimMultiFile;
typedef struct zPlatFMRunTime;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct xBBox;
typedef enum RxNodeDefEditable;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct RpWorldSector;
typedef enum RxClusterValid;
typedef struct xEntDrive;
typedef struct zPlayerSettings;
typedef struct RpMorphTarget;
typedef struct xRot;
typedef struct menuWorld;
typedef struct xClumpCollBSPTree;
typedef struct RpLight;
typedef struct xEnvAsset;
typedef struct zLasso;
typedef struct RpWorld;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagiTRCPadInfo;
typedef struct xEntFrame;
typedef struct basic_rect;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xEntMotionOrbitData;
typedef struct xGridBound;
typedef struct iFogParams;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct _tagxRumble;
typedef enum _tagPadInit;
typedef struct xShadowSimplePoly;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct RwSphere;
typedef struct xAnimActiveEffect;
typedef struct zUIFontAsset;
typedef struct xEntMechData;
typedef struct RwTexDictionary;
typedef struct tri_data_0;
typedef struct xEntMotionSplineData;
typedef struct tri_data_1;
typedef struct RxOutputSpec;
typedef struct menuTaskInfo;
typedef struct _class_1;
typedef struct xLightKitLight;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef enum _tagPadState;
typedef struct xMat3x3;
typedef enum _tagTRCState;
typedef struct xCollis;
typedef struct xShadowSimpleCache;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct xGlobals;
typedef struct xEntCollis;
typedef struct RwObject;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxIoSpec;
typedef struct xEnv;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct menuWorldInfo;
typedef struct RxNodeMethods;
typedef struct _class_2;
typedef struct _tagPadAnalog;
typedef struct RpPolygon;
typedef struct RwSky2DVertexFields;
typedef struct RwFrustumPlane;
typedef struct RpMaterialList;
typedef struct _tagiPad;
typedef struct xFFX;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct xEntMotionMechData;
typedef struct xEntPenData;
typedef struct RxPacket;
typedef struct xClumpCollBSPVertInfo;
typedef struct xCoef;
typedef enum RwFogType;
typedef struct anim_coll_data;
typedef struct RwRGBAReal;
typedef struct xEntOrbitData;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _tagTRCPadInfo;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct xQCData;

typedef RwCamera*(*type_0)(RwCamera*);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_6)(void*);
typedef void(*type_7)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_9)(RxPipelineNode*);
typedef unsigned int(*type_11)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_12)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef void(*type_16)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_18)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_19)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_22)(void*, void*);
typedef int(*type_24)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef unsigned int(*type_32)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef xBase*(*type_33)(unsigned int);
typedef void(*type_34)(_zUI*, xScene*, float);
typedef int(*type_35)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_38)(RxNodeDefinition*);
typedef char*(*type_41)(xBase*);
typedef void(*type_42)(RxNodeDefinition*);
typedef unsigned int(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_47)(RxPipelineNode*);
typedef char*(*type_49)(unsigned int);
typedef void(*type_68)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_69)(xBase*, zScene*, void*);
typedef RpWorldSector*(*type_71)(RpWorldSector*);
typedef int(*type_72)(void*, void*);
typedef int(*type_83)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_85)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_96)(xEnt*, xScene*, float);
typedef void(*type_99)(xEnt*, xVec3*);
typedef void(*type_101)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_103)(xEnt*);
typedef RwCamera*(*type_104)(RwCamera*);
typedef void(*type_111)(xMemPool*, void*);
typedef void(*type_125)(RwResEntry*);

typedef RwTexCoords* type_1[8];
typedef unsigned char type_2[22];
typedef xCollis type_3[18];
typedef float type_8[12];
typedef <unknown type (0xa510)> type_10[4];
typedef float type_14[12];
typedef float type_15[12];
typedef float type_17[12];
typedef xVec3 type_20[5];
typedef _tagxPad type_21[4];
typedef float type_23[12];
typedef char type_25[5];
typedef unsigned char type_26[5];
typedef float type_27[12];
typedef unsigned short type_28[3];
typedef xVec3 type_30[60];
typedef RwFrustumPlane type_31[6];
typedef RwV3d type_36[8];
typedef unsigned char type_37[2];
typedef float type_39[22];
typedef _tagTRCPadInfo type_40[4];
typedef char type_43[256];
typedef float type_44[22];
typedef menuWorld type_46[15];
typedef char type_48[256];
typedef _zUI* type_50[768];
typedef unsigned int type_51[15];
typedef unsigned short type_52[2];
typedef unsigned int type_53[15];
typedef float type_54[2];
typedef char type_55[2];
typedef float type_56[2];
typedef float type_57[2];
typedef unsigned int type_58[15];
typedef unsigned int type_59[72];
typedef float type_60[2];
typedef char type_61[4];
typedef RwTexCoords* type_62[8];
typedef xBase* type_63[72];
typedef char type_64[6];
typedef float type_65[2];
typedef float type_66[4];
typedef analog_data type_67[2];
typedef char type_70[32];
typedef char type_73[2];
typedef menuTask type_74[8];
typedef unsigned char type_75[4];
typedef RwSky2DVertex type_76[4];
typedef unsigned char type_77[2];
typedef xVec4 type_78[12];
typedef unsigned char type_79[4];
typedef unsigned int type_80[2];
typedef unsigned char type_81[2];
typedef unsigned short type_82[4];
typedef float type_84[6];
typedef unsigned short type_86[2];
typedef xVec3 type_87[3];
typedef float type_88[3];
typedef unsigned short type_89[2];
typedef unsigned int type_90[4];
typedef float type_91[3];
typedef xModelTag type_92[2];
typedef float type_93[3];
typedef unsigned char type_94[2];
typedef RpLight* type_95[2];
typedef RwFrame* type_97[2];
typedef float type_98[16];
typedef xEnt* type_100[111];
typedef float type_102[2];
typedef char type_105[16];
typedef unsigned char type_106[3];
typedef char type_107[16];
typedef char type_108[128];
typedef type_108 type_109[6];
typedef menuTaskInfo type_110[8];
typedef char type_112[16];
typedef unsigned short type_113[3];
typedef unsigned char type_114[14];
typedef xModelTag type_115[4];
typedef char type_116[32];
typedef char type_117[32];
typedef xModelInstance* type_118[14];
typedef xVec3 type_119[4];
typedef char type_120[32];
typedef unsigned char type_121[2];
typedef char type_122[32];
typedef menuWorldInfo type_123[15];
typedef xAnimMultiFileEntry type_124[1];
typedef unsigned char type_126[4];
typedef unsigned short type_127[6];
typedef float type_128[4];
typedef float type_129[4];
typedef RxCluster type_130[1];
typedef unsigned char type_131[22];
typedef unsigned char type_132[3];

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
	type_4 BeforeEnter;
	type_68 StateCallback;
	type_16 BeforeAnimMatrices;
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
	type_59 baseCount;
	type_63 baseList;
	_zEnv* zen;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct _zUI : zEnt
{
	zUIAsset* sasset;
	unsigned int uiFlags;
	unsigned int uiButton;
	unsigned short preUpdateIndex;
	unsigned short updateIndex;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_77 PowerUp;
	type_81 InitialPowerUp;
};

struct xPlatformAsset
{
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct zUIMgr : xMgr
{
	int m_preUpdateStart;
	int m_preUpdateEnd;
	unsigned int m_preUpdateMax;
	_zUI** m_preUpdate;
	int m_updateStart;
	int m_updateEnd;
	unsigned int m_updateMax;
	_zUI** m_update;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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
	type_16 BeforeAnimMatrices;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_125 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_111 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zAssetPickupTable
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_22 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_96 update;
	type_96 endUpdate;
	type_99 bupdate;
	type_101 move;
	type_103 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_18 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct xMgr
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_30 tranTable;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpTriangle
{
	type_28 vertIndex;
	short matIndex;
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

struct zUIAsset : xEntAsset
{
	unsigned int uiFlags;
	type_52 dim;
	unsigned int textureID;
	type_56 uva;
	type_57 uvb;
	type_60 uvc;
	type_65 uvd;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xEntSplineData
{
	int unknown;
};

struct zEntHangable
{
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_11 Callback;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_116 name;
	type_120 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xIniFile
{
	int NumValues;
	int NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	type_43 name;
	type_48 pathname;
};

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	unsigned short uiFontFlags;
	unsigned short uiFontHackFlags;
	unsigned int text_id;
	float yscroll;
	unsigned int text_index;
	char* text;
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
	type_33 resolvID;
	type_41 base2Name;
	type_49 id2Name;
};

struct xCounterAsset : xBaseAsset
{
	short count;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_54 radius;
};

struct menuTask
{
	_zUI* uiSelected;
	_zUI* uiSpatOutline;
	_zUI* uiSpatGray;
	_zUI* uiSpatGold;
	_zUI* uiTaskDesc;
	_xCounter* counter;
	type_55 levelSuffix;
	_zPortal portal;
	xPortalAsset portalAsset;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_90 pad;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_37 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_128 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_95 light;
	type_97 light_frame;
	int memlvl;
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
	type_121 NumAnims;
	void** RawData;
};

struct xSerial
{
	unsigned int idtag;
	int baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int warned;
	int curele;
	int bitidx;
	int bittally;
};

struct xIniValue
{
	char* tok;
	char* val;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_62 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct xIniSection
{
	char* sec;
	int first;
	int count;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_45 Conditional;
	type_45 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xModelAssetInfo
{
	unsigned int Magic;
	unsigned int NumModelInst;
	unsigned int AnimTableID;
	unsigned int CombatID;
	unsigned int BrainID;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_13 callback;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_66 wt;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct _tagxPad
{
	type_131 value;
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
	type_39 up_tmr;
	type_44 down_tmr;
	type_67 analog;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_94 pad;
	float delay;
	xSpline3* spl;
};

struct xEntBoulder
{
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	short count;
	unsigned char state;
	unsigned char counterFlags;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct rxReq
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_104 beginUpdate;
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
	type_31 frustumPlanes;
	RwBBox frustumBoundBox;
	type_36 frustumCorners;
};

struct xJSPHeader
{
	type_61 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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
	type_132 pad;
	void* moprops;
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
	type_92 BubbleWandTag;
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
	type_115 HangPawTag;
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
	type_51 Inv_PatsSock;
	type_53 Inv_PatsSock_Max;
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
	type_80 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_100 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_114 sb_model_indices;
	type_118 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_106 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xVec2
{
	float x;
	float y;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_124 Files;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_8 tmrs;
	type_14 ttms;
	type_15 atms;
	type_17 dtms;
	type_23 vms;
	type_27 dss;
};

struct RpSector
{
	int type;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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
	type_6 activateCB;
	type_6 deactivateCB;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_78 frustplane;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_1 texCoords;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_84 MoveSpeed;
	type_88 AnimSneak;
	type_91 AnimWalk;
	type_93 AnimRun;
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
	type_126 talk_filter;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct menuWorld
{
	_zUI* uiSelected;
	type_73 worldPrefix;
	unsigned int numTasks;
	type_74 task;
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
	type_20 lastRefs;
	type_26 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_71 renderCallBack;
	RxPipeline* pipeline;
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

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct xShadowSimplePoly
{
	type_87 vert;
	xVec3 norm;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct zUIFontAsset : zUIAsset
{
	unsigned short uiFontFlags;
	unsigned char mode;
	unsigned char fontID;
	unsigned int textAssetID;
	type_75 bcolor;
	type_79 color;
	type_82 inset;
	type_86 space;
	type_89 cdim;
	unsigned int max_height;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct menuTaskInfo
{
	float ang;
	_CurrentPlayer player;
};

struct _class_1
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_98 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_102 BilinearLerp;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
	type_119 corner;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_109 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_117 sceneStart;
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
	type_3 colls;
	type_7 post;
	type_12 depenq;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct menuWorldInfo
{
	type_110 taskInfo;
};

struct RxNodeMethods
{
	type_35 nodeBody;
	type_38 nodeInit;
	type_42 nodeTerm;
	type_47 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_32 configMsgHandler;
};

struct _class_2
{
	float t;
	float u;
	float v;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_113 vertIndex;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float camVertex_z;
	float u;
	float v;
	float recipZ;
	float pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float pad2;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _tagiPad
{
	int port;
};

struct xFFX
{
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

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_130 clusters;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xCoef
{
	type_129 a;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
};

struct st_SERIAL_CLIENTINFO
{
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int id;
	_tagTRCState state;
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_10 qWords;
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

basic_rect screen_bounds;
basic_rect default_adjust;
type_105 buffer;
type_112 buffer;
unsigned int sSortedCount;
type_50 sSorted;
type_76 Vertex;
type_127 Index;
unsigned int cKeyUIid1off;
unsigned int cKeyUIid2off;
unsigned int cKeyUIid3off;
unsigned int cKeyUIid4off;
unsigned int cKeyUIid1on;
unsigned int cKeyUIid2on;
unsigned int cKeyUIid3on;
unsigned int cKeyUIid4on;
type_64 patsock_text_buffer;
_zUI* patsock_ui;
zUIFont* patsock_uif;
unsigned int patsock_prev_world;
unsigned int patsock_prev_count;
zUIMgr gUIMgr;
float ushift;
type_123 sWorldInfo;
type_46 sWorld;
_zUI* sTakeTaxi;
_zUI* sNoneTaskDesc;
_zUI* sCurrTaskDesc;
unsigned int sCurrWorld;
unsigned int sCurrTask;
_zUI* sPauseManager;
_zUI* sConfirmation;
xGroup* sTaxiConfirmGrp;
zGlobals globals;
_CurrentPlayer gPendingPlayer;
type_85 zUIPortalEventCB;
type_72 iRenderQSort_Face;
type_69 zUIRenderIteratorInsert;
type_40 gTrcPad;
type_21 mPad;
xScene* g_xSceneCur;
type_83 zUIEventCB;
type_34 zUI_Update;
unsigned int gActiveHeap;

void zUI_ScenePortalLoad(xSerial* s);
void zUI_ScenePortalSave(xSerial* s);
void zUI_ScenePortalUpdate();
void zUI_PortalToKrabs(unsigned int taskNum);
void refresh_patsocks(unsigned int world);
void zUI_ScenePortalInit(zScene* zsc);
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc);
int zUIPortalEventCB(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget);
void zUI_ParseINI(xIniFile* ini);
int zUIEventCB(xBase* to, unsigned int toEvent, float* toParam);
void zUI_Render(xEnt* ent);
void zUIRenderAll();
int iRenderQSort_Face(void* arg1, void* arg2);
xBase* zUIRenderIteratorInsert(xBase* b);
void zUI_Update(_zUI* ent, float dt);
void zUI_PreUpdate(_zUI* ent);
void zUI_Reset(_zUI* ent);
void zUI_Load(_zUI* ent, xSerial* s);
void zUI_Save(_zUI* ent, xSerial* s);
void zUI_Init(_zUI* ent, xEntAsset* asset);
void load_anim_list(_zUI& ui);
void zUI_Init(void* ent, void* asset);
void zUI_Init();
void Remove(zUIMgr* this, _zUI* ui);
void Touch(zUIMgr* this, _zUI* ui);
void Setup(zUIMgr* this, zScene* s);
void Update(zUIMgr* this, zScene* s, float dt);
void PreUpdate(zScene* s, float dt);

// zUI_ScenePortalLoad__FP7xSerial
// Start address: 0x19e050
void zUI_ScenePortalLoad(xSerial* s)
{
	unsigned int i;
	unsigned int j;
}

// zUI_ScenePortalSave__FP7xSerial
// Start address: 0x19e0f0
void zUI_ScenePortalSave(xSerial* s)
{
	unsigned int i;
	unsigned int j;
}

// zUI_ScenePortalUpdate__Fv
// Start address: 0x19e190
void zUI_ScenePortalUpdate()
{
	unsigned int i;
	unsigned int j;
	_zUI* select;
}

// zUI_PortalToKrabs__FUi
// Start address: 0x19e770
void zUI_PortalToKrabs(unsigned int taskNum)
{
	xPortalAsset* portal;
	int c1;
	int c2;
	type_122 tempString;
}

// refresh_patsocks__FUi
// Start address: 0x19e850
void refresh_patsocks(unsigned int world)
{
	unsigned int count;
	unsigned int max;
}

// zUI_ScenePortalInit__FP6zScene
// Start address: 0x19e990
void zUI_ScenePortalInit(zScene* zsc)
{
	unsigned int i;
	unsigned int j;
	char c;
	char c2;
	type_70 tempString;
	unsigned int uiID;
	_zUI* ui;
	unsigned int id;
}

// zUI_ScenePortalSetToCurrentLevel__FP6zScene
// Start address: 0x19f6e0
void zUI_ScenePortalSetToCurrentLevel(zScene* zsc)
{
	unsigned int i;
}

// zUIPortalEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f740
int zUIPortalEventCB(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
	int result;
}

// zUI_ParseINI__FP8xIniFile
// Start address: 0x19f820
void zUI_ParseINI(xIniFile* ini)
{
	type_107 itemName;
	char* value;
	char* tok;
	char* ltok;
	unsigned int i;
	unsigned int j;
}

// zUIEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x19f9d0
int zUIEventCB(xBase* to, unsigned int toEvent, float* toParam)
{
	_zUI* s;
	unsigned int theTextureID;
	RwTexture* texture;
}

// zUI_Render__FP4xEnt
// Start address: 0x19fd10
void zUI_Render(xEnt* ent)
{
	_zUI* ui;
	RwTexture* texture;
	RwRaster* raster;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	RwCamera* camera;
	float w;
	float h;
	float u1;
	float v1;
	float u2;
	float v2;
	float u3;
	float v3;
	float u4;
	float v4;
	float x1;
	float y1;
	float x2;
	float y2;
	float z;
	float cz;
	float cooz;
	zUIAsset& a;
	basic_rect r;
	unsigned int srcblend;
	unsigned int destblend;
	xVec3 to;
	xVec3 from;
}

// zUIRenderAll__Fv
// Start address: 0x1a0730
void zUIRenderAll()
{
	unsigned char rendering_models;
	int i;
}

// iRenderQSort_Face__FPCvPCv
// Start address: 0x1a08c0
int iRenderQSort_Face(void* arg1, void* arg2)
{
	_zUI* f1;
	_zUI* f2;
	unsigned char font1;
	unsigned char font2;
}

// zUIRenderIteratorInsert__FP5xBaseP6zScenePv
// Start address: 0x1a09d0
xBase* zUIRenderIteratorInsert(xBase* b)
{
}

// zUI_Update__FP4_zUIP6xScenef
// Start address: 0x1a0a00
void zUI_Update(_zUI* ent, float dt)
{
}

// zUI_PreUpdate__FP4_zUIP6xScenef
// Start address: 0x1a0c80
void zUI_PreUpdate(_zUI* ent)
{
	_zUI* ui;
	int i;
	_tagxPad* pad;
	_tagxPad* p;
}

// zUI_Reset__FP4_zUI
// Start address: 0x1a1050
void zUI_Reset(_zUI* ent)
{
}

// zUI_Load__FP4_zUIP7xSerial
// Start address: 0x1a1110
void zUI_Load(_zUI* ent, xSerial* s)
{
}

// zUI_Save__FP4_zUIP7xSerial
// Start address: 0x1a1120
void zUI_Save(_zUI* ent, xSerial* s)
{
}

// zUI_Init__FP4_zUIP9xEntAsset
// Start address: 0x1a1130
void zUI_Init(_zUI* ent, xEntAsset* asset)
{
	zUIAsset* sasset;
	xSurface* surf;
	xModelInstance* minst;
}

// load_anim_list__17@unnamed@zUI_cpp@FR4_zUI
// Start address: 0x1a13d0
void load_anim_list(_zUI& ui)
{
	zUIAsset& a;
	int used;
	xAnimState* ast;
	xAnimSingle* single;
}

// zUI_Init__FPvPv
// Start address: 0x1a1490
void zUI_Init(void* ent, void* asset)
{
}

// zUI_Init__Fv
// Start address: 0x1a14a0
void zUI_Init()
{
}

// Remove__6zUIMgrFP4_zUI
// Start address: 0x1a14b0
void Remove(zUIMgr* this, _zUI* ui)
{
}

// Touch__6zUIMgrFP4_zUI
// Start address: 0x1a15e0
void Touch(zUIMgr* this, _zUI* ui)
{
}

// Setup__6zUIMgrFP6zScene
// Start address: 0x1a1700
void Setup(zUIMgr* this, zScene* s)
{
	unsigned int count;
	unsigned int arraySize;
	_zUI* ui;
	unsigned int i;
}

// Update__6zUIMgrFP6zScenef
// Start address: 0x1a18a0
void Update(zUIMgr* this, zScene* s, float dt)
{
	unsigned int i;
}

// PreUpdate__6zUIMgrFP6zScenef
// Start address: 0x1a1950
void PreUpdate(zScene* s, float dt)
{
	_zUI* ui;
	unsigned int i;
	_zUI* ui;
	unsigned int i;
}

