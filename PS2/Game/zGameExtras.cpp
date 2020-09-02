typedef struct RxPipelineNode;
typedef struct zCutsceneMgr;
typedef struct xAnimState;
typedef struct zPlayerGlobals;
typedef struct xEntOrbitData;
typedef struct analog_data;
typedef struct RwObjectHasFrame;
typedef struct xCoef3;
typedef struct zPlatFMRunTime;
typedef struct RpAtomic;
typedef struct rxHeapFreeBlock;
typedef struct xEnt;
typedef struct zAssetPickupTable;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct xGroup;
typedef struct RwV2d;
typedef struct xBaseAsset;
typedef struct st_SERIAL_CLIENTINFO;
typedef enum RpWorldRenderOrder;
typedef struct RxNodeDefinition;
typedef struct xScene;
typedef struct xEntMotion;
typedef struct xClumpCollBSPBranchNode;
typedef struct xEntBoulder;
typedef struct RpMaterial;
typedef struct xPlatformAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zCheckPoint;
typedef struct xEntMotionAsset;
typedef struct RpTriangle;
typedef struct xModelInstance;
typedef struct xSurface;
typedef struct RxPipeline;
typedef struct xMovePointAsset;
typedef struct RxPipelineCluster;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xBound;
typedef struct RwTexture;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeParam;
typedef struct xVec2;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xUpdateCullMgr;
typedef struct RpMeshHeader;
typedef struct zPlayerCarryInfo;
typedef struct xEntAsset;
typedef struct xQuat;
typedef struct EGGItem;
typedef struct RwResEntry;
typedef struct xEntDrive;
typedef struct xCamera;
typedef struct xBBox;
typedef struct RwV3d;
typedef struct xCounterAsset;
typedef struct zPlayerSettings;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct rxHeapBlockHeader;
typedef struct xEntSplineData;
typedef struct _zEnv;
typedef struct zEnt;
typedef struct RpClump;
typedef struct RwCamera;
typedef struct RpLight;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPTree;
typedef struct xLightKit;
typedef struct zGlobalSettings;
typedef struct xUpdateCullEnt;
typedef struct xSerial;
typedef struct xEntMotionPenData;
typedef struct xJSPNodeInfo;
typedef struct RpWorld;
typedef struct xEnvAsset;
typedef struct _zPortal;
typedef struct xEntFrame;
typedef struct xAnimTransitionList;
typedef struct xAnimTable;
typedef struct zLasso;
typedef struct xMat4x3;
typedef struct xPortalAsset;
typedef struct xAnimTransition;
typedef struct xVec4;
typedef struct GECheat;
typedef struct xEntMPData;
typedef struct xGridBound;
typedef struct xVec3;
typedef struct iFogParams;
typedef struct RwSurfaceProperties;
typedef struct _tagxRumble;
typedef struct RwMatrixTag;
typedef struct xUpdateCullGroup;
typedef struct xShadowSimplePoly;
typedef struct rxReq;
typedef struct xMovePoint;
typedef struct iEnv;
typedef enum RxClusterValidityReq;
typedef struct RwLLLink;
typedef struct xSpline3;
typedef struct xAnimMultiFileEntry;
typedef struct EGGItemFuncs;
typedef struct xAnimActiveEffect;
typedef struct xEntMotionERData;
typedef struct tri_data_0;
typedef struct xAnimFile;
typedef struct tri_data_1;
typedef enum RxNodeDefEditable;
typedef struct _class_0;
typedef struct xLightKitLight;
typedef enum _tagPadState;
typedef struct RpVertexNormal;
typedef enum RxClusterValid;
typedef struct xAnimSingle;
typedef struct _xCounter;
typedef struct xCollis;
typedef struct xRot;
typedef struct xShadowSimpleCache;
typedef struct xGlobals;
typedef struct xEntCollis;
typedef struct zEntHangable;
typedef struct RwFrame;
typedef struct _tagxPad;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xEnv;
typedef struct xAnimEffect;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct EGGMisc;
typedef struct _class_1;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xBox;
typedef struct RpPolygon;
typedef struct xLinkAsset;
typedef struct xEntMotionOrbitData;
typedef struct RxClusterDefinition;
typedef struct xAnimPlay;
typedef struct _tagiPad;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct xModelPool;
typedef struct RwSphere;
typedef union EGGData;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct xMat3x3;
typedef struct xEntMechData;
typedef struct anim_coll_data;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntMotionSplineData;
typedef struct RxClusterRef;
typedef struct xClumpCollBSPTriangle;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct zPlatform;
typedef struct zGlobals;
typedef struct xQCData;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct RwFrustumPlane;
typedef struct zPlayerLassoInfo;
typedef struct RwPlane;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef struct RxCluster;
typedef struct zJumpParam;
typedef enum _zPlayerWallJumpState;
typedef struct RxPacket;
typedef struct xEntMotionMechData;
typedef struct xCoef;
typedef enum RwFogType;
typedef struct xEntPenData;
typedef struct RwRGBAReal;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RwLinkList;
typedef struct xModelTag;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int(*type_2)(RxPipelineNode*);
typedef unsigned int(*type_3)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_6)(RwObjectHasFrame*);
typedef RpAtomic*(*type_7)(RpAtomic*);
typedef char*(*type_8)(unsigned int);
typedef void(*type_10)(RxPipelineNode*);
typedef int(*type_19)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(xAnimPlay*, xAnimState*);
typedef void(*type_29)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_36)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_38)(EGGItem*);
typedef RpWorldSector*(*type_39)(RpWorldSector*);
typedef int(*type_40)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_43)(RxNodeDefinition*);
typedef void(*type_44)(EGGItem*);
typedef void(*type_47)(RxNodeDefinition*);
typedef void(*type_48)(EGGItem*);
typedef void(*type_53)(float, EGGItem*);
typedef void(*type_57)(void*);
typedef void(*type_59)(EGGItem*);
typedef void(*type_67)(xEnt*, xScene*, float);
typedef void(*type_71)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_72)(xEnt*, xVec3*);
typedef unsigned int(*type_74)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_77)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_81)(xEnt*);
typedef xBase*(*type_85)(unsigned int);
typedef unsigned int(*type_87)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef char*(*type_91)(xBase*);
typedef void(*type_92)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_107)();
typedef RpClump*(*type_113)(RpClump*, void*);
typedef unsigned int(*type_114)(void*, void*);
typedef void(*type_121)(xMemPool*, void*);
typedef int(*type_130)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_131)(RwResEntry*);

typedef unsigned int type_1[2];
typedef unsigned int type_4[16];
typedef unsigned int type_9[15];
typedef float type_11[2];
typedef unsigned int type_12[16];
typedef unsigned int type_13[15];
typedef float type_14[12];
typedef float type_15[12];
typedef unsigned int type_16[16];
typedef unsigned int type_17[15];
typedef float type_18[12];
typedef RwTexCoords* type_20[8];
typedef unsigned int type_21[16];
typedef float type_22[12];
typedef unsigned int type_24[72];
typedef analog_data type_25[2];
typedef char type_26[4];
typedef float type_27[4];
typedef float type_28[12];
typedef xBase* type_30[72];
typedef float type_31[12];
typedef unsigned int type_32[16];
typedef unsigned int type_33[16];
typedef RwFrustumPlane type_35[6];
typedef unsigned int type_37[3];
typedef unsigned int type_41[16];
typedef RwV3d type_42[8];
typedef unsigned int type_45[16];
typedef EGGItem type_46[2];
typedef unsigned char type_49[2];
typedef unsigned int type_50[16];
typedef unsigned char type_51[2];
typedef xVec4 type_52[12];
typedef unsigned int type_54[2];
typedef unsigned char type_55[2];
typedef float type_56[6];
typedef unsigned int type_58[16];
typedef xVec3 type_60[3];
typedef unsigned int type_61[16];
typedef float type_62[3];
typedef float type_63[3];
typedef xModelTag type_64[2];
typedef float type_65[3];
typedef unsigned int type_66[16];
typedef unsigned int type_68[16];
typedef RpLight* type_69[2];
typedef float type_70[16];
typedef unsigned int type_73[6];
typedef xEnt* type_75[111];
typedef RwFrame* type_76[2];
typedef unsigned int type_78[16];
typedef char type_79[16];
typedef float type_80[2];
typedef unsigned int type_82[16];
typedef char* type_83[2];
typedef unsigned char type_84[3];
typedef char type_86[128];
typedef unsigned int type_88[16];
typedef type_86 type_89[6];
typedef char type_90[16];
typedef unsigned int type_93[7];
typedef unsigned short type_94[3];
typedef unsigned int type_95[16];
typedef unsigned char type_96[14];
typedef unsigned int type_97[2];
typedef xModelTag type_98[4];
typedef char type_99[32];
typedef unsigned int type_100[16];
typedef unsigned int type_101[4];
typedef xVec3 type_102[4];
typedef xModelInstance* type_103[14];
typedef unsigned char type_104[2];
typedef xAnimMultiFileEntry type_105[1];
typedef unsigned int type_106[16];
typedef unsigned char type_108[4];
typedef char type_109[32];
typedef unsigned char type_110[2];
typedef unsigned int type_111[16];
typedef float type_112[4];
typedef unsigned char type_115[22];
typedef unsigned int type_116[16];
typedef unsigned char type_117[22];
typedef xCollis type_118[18];
typedef RwTexCoords* type_119[8];
typedef unsigned int type_120[16];
typedef unsigned char type_122[3];
typedef GECheat type_123[22];
typedef unsigned int type_124[16];
typedef char type_125[32];
typedef xVec3 type_126[5];
typedef unsigned int type_127[16];
typedef char type_128[32];
typedef unsigned char type_129[5];
typedef unsigned short type_132[3];
typedef unsigned int type_133[16];
typedef xVec3 type_134[60];
typedef float type_135[4];
typedef unsigned int type_136[16];
typedef unsigned int type_137[16];
typedef float type_138[22];
typedef float type_139[22];
typedef RxCluster type_140[1];

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

struct zCutsceneMgr
{
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
	type_23 BeforeEnter;
	type_29 StateCallback;
	type_34 BeforeAnimMatrices;
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
	type_64 BubbleWandTag;
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
	type_9 Inv_PatsSock;
	type_13 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_17 Inv_LevelPickups;
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
	type_54 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_75 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_96 sb_model_indices;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_6 sync;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_14 tmrs;
	type_15 ttms;
	type_18 atms;
	type_22 dtms;
	type_28 vms;
	type_31 dss;
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
	type_7 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_67 update;
	type_67 endUpdate;
	type_72 bupdate;
	type_77 move;
	type_81 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_92 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zAssetPickupTable
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RwV2d
{
	float x;
	float y;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct st_SERIAL_CLIENTINFO
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_85 resolvID;
	type_91 base2Name;
	type_8 id2Name;
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

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xEntBoulder
{
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

struct xPlatformAsset
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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

struct RpTriangle
{
	type_132 vertIndex;
	short matIndex;
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
	type_122 pad;
	void* moprops;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_130 eventFunc;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_84 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_125 name;
	type_128 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_105 Files;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RwTexCoords
{
	float u;
	float v;
};

struct xJSPHeader
{
	type_26 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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
	type_57 activateCB;
	type_57 deactivateCB;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct EGGItem
{
	type_38 fun_check;
	EGGItemFuncs* funcs;
	int enabled;
	EGGData eggdata;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_131 destroyNotify;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xCounterAsset : xBaseAsset
{
	short count;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_56 MoveSpeed;
	type_62 AnimSneak;
	type_63 AnimWalk;
	type_65 AnimRun;
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
	type_108 talk_filter;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_119 texCoords;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_101 pad;
};

struct xEntSplineData
{
	int unknown;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_113 callback;
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
	type_35 frustumPlanes;
	RwBBox frustumBoundBox;
	type_42 frustumCorners;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_51 PowerUp;
	type_55 InitialPowerUp;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_114 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_49 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_39 renderCallBack;
	RxPipeline* pipeline;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_126 lastRefs;
	type_129 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_3 Conditional;
	type_3 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct GECheat
{
	unsigned int* key_code;
	type_107 fun_cheat;
	int flg_keep;
	int flg_mode;
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

struct xVec3
{
	float x;
	float y;
	float z;
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

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xShadowSimplePoly
{
	type_60 vert;
	xVec3 norm;
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
	type_110 pad;
	float delay;
	xSpline3* spl;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_69 light;
	type_76 light_frame;
	int memlvl;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct EGGItemFuncs
{
	type_53 fun_update;
	type_44 fun_init;
	type_59 fun_reset;
	type_48 fun_done;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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
	type_104 NumAnims;
	void** RawData;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_70 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_80 BilinearLerp;
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

struct _xCounter : xBase
{
	xCounterAsset* asset;
	short count;
	unsigned char state;
	unsigned char counterFlags;
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
		tri_data_1 tri;
	};
};

struct xRot
{
	xVec3 axis;
	float angle;
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
	type_102 corner;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_89 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_99 sceneStart;
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
	type_118 colls;
	type_71 post;
	type_87 depenq;
};

struct zEntHangable
{
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

struct _tagxPad
{
	type_115 value;
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
	type_138 up_tmr;
	type_139 down_tmr;
	type_25 analog;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_74 Callback;
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

struct EGGMisc
{
	int other;
};

struct _class_1
{
	float t;
	float u;
	float v;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_94 vertIndex;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_112 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_34 BeforeAnimMatrices;
};

struct _tagiPad
{
	int port;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

union EGGData
{
	int placeholder;
	EGGMisc misc;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_11 radius;
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
	type_20 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct anim_coll_data
{
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct RxNodeMethods
{
	type_40 nodeBody;
	type_43 nodeInit;
	type_47 nodeTerm;
	type_2 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_19 pipelineNodeConfig;
	type_36 configMsgHandler;
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

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
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
	type_24 baseCount;
	type_30 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_134 tranTable;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_140 clusters;
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

struct xCoef
{
	type_135 a;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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

struct RwLinkList
{
	RwLLLink link;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_27 wt;
};

type_79 buffer;
type_90 buffer;
int g_enableGameExtras;
int g_currDay;
int g_currMonth;
int g_gameExtraFlags;
EGGItemFuncs EGGModuleTest;
EGGItemFuncs EGGBirthDay;
EGGItemFuncs EGGSnow;
EGGItemFuncs EGGRain;
EGGItemFuncs EGGEmpty;
type_46 g_eggBasket;
int g_flg_chEnabled;
float sCheatTimer;
int sCheatInputCount;
type_16 sCheatAddShiny;
type_78 sCheatAddSpatulas;
type_124 sCheatBubbleBowl;
type_41 sCheatCruiseBubble;
type_95 sCheatMonsterGallery;
type_136 sCheatArtTheatre;
type_58 sCheatChaChing;
type_111 sCheatExpertMode;
type_12 sCheatTikiCheat;
type_68 sCheatSwapCCLR;
type_120 sCheatSwapCCUD;
type_33 sCheatRestoreHealth;
type_88 sCheatTeflonPlayer;
type_133 sCheatVikingFeet;
type_50 sCheatDryBobMode;
type_106 sCheatShrapBob;
type_4 sCheatBigFlopper;
type_66 sCheatNoPants;
type_116 sCheatCruiseControl;
type_21 sCheatBigPlank;
type_82 sCheatSmallPeep;
type_127 sCheatSmallCoStars;
type_45 sCheatRichPeep;
type_100 sCheatPanHandle;
type_137 sCheatMedics;
type_61 sCheatDogTrix;
type_123 cheatList;
type_32 sCheatPressed;
xEnt* sGalleryTitle;
zGlobals globals;

unsigned int zGame_HackIsGallery();
void zGame_HackGalleryInit();
void GEC_cb_PanHandle();
void GEC_cb_RichPeep();
void GEC_cb_SmallCostars();
void GEC_cb_SmallPeep();
void GEC_cb_DogTrix();
void GEC_cb_Medics();
void GEC_cb_BigPlank();
void GEC_cb_SwapCCUD();
void GEC_cb_SwapCCLR();
void GEC_cb_CruiseControl();
void GEC_cb_NoPantsMode();
void GEC_cb_ShrapBobMode();
void GEC_cb_ExpertMode();
void GEC_cb_RestoreHealth();
void GEC_cb_ChaChing();
void GEC_cb_UnlockArtTheatre();
void GEC_cb_MonsterGallery();
void GEC_cb_CruiseBubble();
void GEC_cb_BubbleBowl();
void GEC_cb_AddSpatulas();
void GEC_cb_AddShiny();
void zGameCheats(float dt);
void zGameExtras_Load(xSerial* xser);
void zGameExtras_Save(xSerial* xser);
void zGameExtras_NewGameReset();
int zGameExtras_CheatFlags();
int EGG_check_ExtrasFlags();
void zGameExtras_SceneUpdate(float dt);
void zGameExtras_SceneExit();
void zGameExtras_SceneReset();
void zGameExtras_SceneInit();
void zGameExtras_MoDay(int* month, int* day);
int zGameExtras_ExtrasFlags();

// zGame_HackIsGallery__Fv
// Start address: 0x17cee0
unsigned int zGame_HackIsGallery()
{
}

// zGame_HackGalleryInit__Fv
// Start address: 0x17cf20
void zGame_HackGalleryInit()
{
}

// GEC_cb_PanHandle__Fv
// Start address: 0x17cf50
void GEC_cb_PanHandle()
{
	type_73 aid_sndList;
	char @5620;
}

// GEC_cb_RichPeep__Fv
// Start address: 0x17d0a0
void GEC_cb_RichPeep()
{
}

// GEC_cb_SmallCostars__Fv
// Start address: 0x17d1f0
void GEC_cb_SmallCostars()
{
}

// GEC_cb_SmallPeep__Fv
// Start address: 0x17d340
void GEC_cb_SmallPeep()
{
}

// GEC_cb_DogTrix__Fv
// Start address: 0x17d490
void GEC_cb_DogTrix()
{
}

// GEC_cb_Medics__Fv
// Start address: 0x17d5e0
void GEC_cb_Medics()
{
}

// GEC_cb_BigPlank__Fv
// Start address: 0x17d730
void GEC_cb_BigPlank()
{
}

// GEC_cb_SwapCCUD__Fv
// Start address: 0x17d880
void GEC_cb_SwapCCUD()
{
	type_93 aid_sndList;
	char @5449;
}

// GEC_cb_SwapCCLR__Fv
// Start address: 0x17d9e0
void GEC_cb_SwapCCLR()
{
}

// GEC_cb_CruiseControl__Fv
// Start address: 0x17db40
void GEC_cb_CruiseControl()
{
	type_37 choices;
	char @5598;
}

// GEC_cb_NoPantsMode__Fv
// Start address: 0x17dc50
void GEC_cb_NoPantsMode()
{
}

// GEC_cb_ShrapBobMode__Fv
// Start address: 0x17dca0
void GEC_cb_ShrapBobMode()
{
}

// GEC_cb_ExpertMode__Fv
// Start address: 0x17de00
void GEC_cb_ExpertMode()
{
}

// GEC_cb_RestoreHealth__Fv
// Start address: 0x17df60
void GEC_cb_RestoreHealth()
{
	type_97 choices;
	char @5558;
}

// GEC_cb_ChaChing__Fv
// Start address: 0x17e060
void GEC_cb_ChaChing()
{
	zGlobalSettings* gs;
	unsigned int aid_snd;
}

// GEC_cb_UnlockArtTheatre__Fv
// Start address: 0x17e0e0
void GEC_cb_UnlockArtTheatre()
{
	char* nam_theatreCounter;
	unsigned int aid_theatreCounter;
	_xCounter* cntr;
}

// GEC_cb_MonsterGallery__Fv
// Start address: 0x17e120
void GEC_cb_MonsterGallery()
{
	type_109 tempString;
	char c;
	int i;
	unsigned int id;
	_xCounter* cntr;
}

// GEC_cb_CruiseBubble__Fv
// Start address: 0x17e1e0
void GEC_cb_CruiseBubble()
{
	unsigned int aid_snd;
}

// GEC_cb_BubbleBowl__Fv
// Start address: 0x17e240
void GEC_cb_BubbleBowl()
{
	unsigned int aid_snd;
}

// GEC_cb_AddSpatulas__Fv
// Start address: 0x17e2a0
void GEC_cb_AddSpatulas()
{
	zPlayerGlobals* pg;
	unsigned int aid_snd;
}

// GEC_cb_AddShiny__Fv
// Start address: 0x17e320
void GEC_cb_AddShiny()
{
	zPlayerGlobals* pg;
	unsigned int aid_snd;
}

// zGameCheats__Ff
// Start address: 0x17e3c0
void zGameCheats(float dt)
{
	int startover;
	int match;
	GECheat* rec_next;
	GECheat* rec_curr;
}

// zGameExtras_Load__FP7xSerial
// Start address: 0x17e670
void zGameExtras_Load(xSerial* xser)
{
	int keepers;
}

// zGameExtras_Save__FP7xSerial
// Start address: 0x17e6a0
void zGameExtras_Save(xSerial* xser)
{
}

// zGameExtras_NewGameReset__Fv
// Start address: 0x17e6b0
void zGameExtras_NewGameReset()
{
	zGlobalSettings* gs;
}

// zGameExtras_CheatFlags__Fv
// Start address: 0x17e6f0
int zGameExtras_CheatFlags()
{
}

// EGG_check_ExtrasFlags__FP7EGGItem
// Start address: 0x17e700
int EGG_check_ExtrasFlags()
{
}

// zGameExtras_SceneUpdate__Ff
// Start address: 0x17e930
void zGameExtras_SceneUpdate(float dt)
{
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_SceneExit__Fv
// Start address: 0x17e9d0
void zGameExtras_SceneExit()
{
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_SceneReset__Fv
// Start address: 0x17ea80
void zGameExtras_SceneReset()
{
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_SceneInit__Fv
// Start address: 0x17eaf0
void zGameExtras_SceneInit()
{
	int somethingIsEnabled;
	EGGItem* egg_next;
	EGGItem* egg;
}

// zGameExtras_MoDay__FPiPi
// Start address: 0x17ebb0
void zGameExtras_MoDay(int* month, int* day)
{
}

// zGameExtras_ExtrasFlags__Fv
// Start address: 0x17ebd0
int zGameExtras_ExtrasFlags()
{
}

