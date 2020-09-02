typedef struct RxPipelineNode;
typedef struct zEGenerator;
typedef struct _tagxPad;
typedef struct xVec3;
typedef struct RpGeometry;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct RwObjectHasFrame;
typedef struct xScene;
typedef struct xAnimSingle;
typedef struct xAnimPlay;
typedef struct xQCData;
typedef struct xEntAsset;
typedef struct xEnvAsset;
typedef struct xAnimState;
typedef struct RwTexCoords;
typedef struct rxHeapFreeBlock;
typedef struct RwV3d;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xEnt;
typedef struct xEntMechData;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RxNodeDefinition;
typedef struct xBase;
typedef struct xEntMotionSplineData;
typedef struct _tagxRumble;
typedef struct RpMeshHeader;
typedef struct zPlatform;
typedef struct _zPortal;
typedef struct zScene;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct xQuat;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelInstance;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct xMovePointAsset;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct xUpdateCullEnt;
typedef struct zAssetPickupTable;
typedef struct RxHeap;
typedef struct xMat4x3;
typedef struct RwBBox;
typedef union _class_0;
typedef struct RpTriangle;
typedef struct xGroupAsset;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct RpAtomic;
typedef struct zEntHangable;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct zLedgeGrabParams;
typedef struct rxHeapBlockHeader;
typedef struct xModelPool;
typedef struct xLinkAsset;
typedef struct xEntShadow;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimFile;
typedef struct zEGenAsset;
typedef enum _zPlayerWallJumpState;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xLightKit;
typedef struct RpClump;
typedef struct zEnt;
typedef struct xModelTag;
typedef struct xJSPNodeInfo;
typedef struct xVec4;
typedef enum _tagRumbleType;
typedef struct zLightning;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RwSurfaceProperties;
typedef struct xEntMotionMechData;
typedef struct xPortalAsset;
typedef struct RwMatrixTag;
typedef struct xEntBoulder;
typedef struct xBaseAsset;
typedef struct rxReq;
typedef struct xEntPenData;
typedef struct analog_data;
typedef enum RpWorldRenderOrder;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMaterial;
typedef struct _class_1;
typedef struct xBound;
typedef struct xVec2;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct xMovePoint;
typedef struct RpSector;
typedef struct xJSPHeader;
typedef struct xEntOrbitData;
typedef struct zCheckPoint;
typedef struct xModelBucket;
typedef enum RxNodeDefEditable;
typedef struct zPlayerGlobals;
typedef enum RxClusterValid;
typedef struct xBBox;
typedef struct xPlatformAsset;
typedef struct xRot;
typedef struct zPlatFMRunTime;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct zFrag;
typedef struct xEntMotion;
typedef struct xUpdateCullMgr;
typedef struct xEntDrive;
typedef struct zPlayerCarryInfo;
typedef struct zFragAsset;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xEntMotionAsset;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zLasso;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct RwCamera;
typedef struct zShrapnelAsset;
typedef enum RwCameraProjection;
typedef struct RpWorld;
typedef struct _tagLightningLine;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xEntFrame;
typedef struct xGridBound;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xEntSplineData;
typedef struct xSerial;
typedef struct xEntMotionPenData;
typedef struct iFogParams;
typedef struct xShadowSimplePoly;
typedef struct RwSphere;
typedef struct RwLLLink;
typedef struct _tagLightningRot;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xEntMPData;
typedef struct xMat3x3;
typedef struct tri_data_0;
typedef struct xSpline3;
typedef struct tri_data_1;
typedef struct _class_2;
typedef struct xLightKitLight;
typedef struct RxClusterRef;
typedef struct _class_3;
typedef enum zFragType;
typedef struct RwObject;
typedef enum _tagPadState;
typedef struct xShadowSimpleCache;
typedef struct xCollis;
typedef struct xEntCollis;
typedef struct RwFrame;
typedef struct RxIoSpec;
typedef struct xEntMotionERData;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xEnv;
typedef struct xGlobals;
typedef struct _tagLightningZeus;
typedef struct RxNodeMethods;
typedef struct RpPolygon;
typedef struct RwFrustumPlane;
typedef struct _class_4;
typedef struct RpMaterialList;
typedef struct RwPlane;
typedef struct _tagPadAnalog;
typedef struct RxCluster;
typedef struct xFFX;
typedef struct _tagiPad;
typedef struct RxPacket;
typedef struct xEntMotionOrbitData;
typedef struct _tagLightningAdd;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwRGBAReal;
typedef struct anim_coll_data;
typedef struct RwLinkList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int(*type_1)(RxPipelineNode*);
typedef RwCamera*(*type_2)(RwCamera*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_5)(xAnimPlay*, xAnimState*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_7)(zEGenerator*, xScene*, float);
typedef unsigned int(*type_8)(void*, void*);
typedef unsigned int(*type_11)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_12)(xEnt*, xScene*, float, xEntCollis*);
typedef RpClump*(*type_14)(RpClump*, void*);
typedef void(*type_15)(void*);
typedef unsigned int(*type_16)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_17)(RxPipelineNode*, RxPipeline*);
typedef void(*type_18)(zEGenerator*, xScene*, float);
typedef void(*type_19)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_22)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_23)(zEGenerator*);
typedef unsigned int(*type_27)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef int(*type_31)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_32)(unsigned int);
typedef int(*type_34)(RxNodeDefinition*);
typedef void(*type_36)(RxNodeDefinition*);
typedef char*(*type_37)(xBase*);
typedef unsigned int(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_40)(unsigned int);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_55)(zFrag*, zFragAsset*);
typedef RpWorldSector*(*type_58)(RpWorldSector*);
typedef int(*type_59)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_63)(zShrapnelAsset*, xModelInstance*, xVec3*, type_55);
typedef void(*type_80)(xEnt*, xScene*, float);
typedef void(*type_86)(xEnt*, xVec3*);
typedef void(*type_88)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_90)(xEnt*);
typedef void(*type_94)(xMemPool*, void*);
typedef void(*type_95)(xAnimPlay*, xAnimState*);
typedef void(*type_102)(RwResEntry*);

typedef RwTexCoords* type_4[8];
typedef unsigned char type_9[22];
typedef xCollis type_10[18];
typedef unsigned char type_13[22];
typedef char type_20[16];
typedef xVec3 type_24[5];
typedef unsigned short type_25[3];
typedef RwFrustumPlane type_26[6];
typedef unsigned char type_28[5];
typedef char type_30[16];
typedef RwV3d type_33[8];
typedef xVec3 type_35[60];
typedef float type_39[22];
typedef float type_41[22];
typedef float type_42[2];
typedef unsigned int type_43[15];
typedef unsigned int type_44[15];
typedef xVec3 type_45[16];
typedef RwTexCoords* type_46[8];
typedef xVec3 type_47[16];
typedef unsigned int type_48[72];
typedef float type_49[4];
typedef char type_51[4];
typedef unsigned int type_52[15];
typedef xBase* type_53[72];
typedef analog_data type_54[2];
typedef float type_56[16];
typedef float type_57[12];
typedef float type_60[12];
typedef float type_61[12];
typedef float type_62[12];
typedef float type_64[12];
typedef float type_65[12];
typedef xVec4 type_66[12];
typedef unsigned char type_67[2];
typedef unsigned int type_68[4];
typedef unsigned int type_69[2];
typedef xVec3 type_70[3];
typedef unsigned char type_71[2];
typedef float type_72[6];
typedef unsigned char type_73[2];
typedef float type_74[16];
typedef unsigned char type_75[2];
typedef float type_76[3];
typedef float type_77[3];
typedef xModelTag type_78[2];
typedef float type_79[3];
typedef RpLight* type_81[2];
typedef zLightning* type_82[2];
typedef float type_83[16];
typedef RwFrame* type_84[2];
typedef xVec3 type_85[2];
typedef float type_87[2];
typedef xEnt* type_89[111];
typedef unsigned char type_91[3];
typedef float type_92[2];
typedef float type_93[2];
typedef char type_96[128];
typedef float type_97[2];
typedef char type_98[32];
typedef unsigned short type_99[3];
typedef type_96 type_100[6];
typedef char type_101[32];
typedef unsigned char type_103[2];
typedef xAnimMultiFileEntry type_104[1];
typedef xVec3 type_105[4];
typedef unsigned char type_106[14];
typedef xModelTag type_107[4];
typedef char type_108[32];
typedef xModelInstance* type_109[14];
typedef unsigned int type_110[2];
typedef float type_111[4];
typedef unsigned char type_112[4];
typedef RxCluster type_113[1];

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

struct zEGenerator : zEnt
{
	zEGenAsset* zasset;
	unsigned short flags;
	unsigned short num_dsts;
	float tmr;
	xAnimFile* afile;
	xVec3 src_pos;
	xVec3 dst_pos;
	xVec3 dst_off;
	xBase* dst;
	type_82 lfx;
};

struct _tagxPad
{
	type_9 value;
	type_13 last_value;
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
	type_41 down_tmr;
	type_54 analog;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_46 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_11 Callback;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
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
	type_32 resolvID;
	type_37 base2Name;
	type_40 id2Name;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_87 BilinearLerp;
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
	type_19 BeforeAnimMatrices;
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
	type_5 BeforeEnter;
	type_50 StateCallback;
	type_19 BeforeAnimMatrices;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct RwV3d
{
	float x;
	float y;
	float z;
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
	type_80 update;
	type_80 endUpdate;
	type_86 bupdate;
	type_88 move;
	type_90 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_21 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_22 eventFunc;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_48 baseCount;
	type_53 baseList;
	_zEnv* zen;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_102 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_94 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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
	type_67 PowerUp;
	type_71 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_8 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct zAssetPickupTable
{
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RpTriangle
{
	type_25 vertIndex;
	short matIndex;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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

struct zEntHangable
{
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_35 tranTable;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_68 pad;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_111 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_42 radius;
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
	type_103 NumAnims;
	void** RawData;
};

struct zEGenAsset : xEntAsset
{
	xVec3 src_dpos;
	unsigned char damage_type;
	unsigned char flags;
	float ontime;
	unsigned int onAnimID;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_81 light;
	type_84 light_frame;
	int memlvl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_14 callback;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_49 wt;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct zLightning
{
	unsigned int type;
	unsigned int flags;
	union
	{
		_class_1 legacy;
		_class_3 func;
	};
	iColor_tag color;
	float time_left;
	float time_total;
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

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct xEntBoulder
{
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct rxReq
{
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

struct _class_1
{
	type_45 base_point;
	type_47 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_56 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_91 pad;
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

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_104 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_98 name;
	type_101 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_75 pad;
	float delay;
	xSpline3* spl;
};

struct RpSector
{
	int type;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_78 BubbleWandTag;
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
	type_107 HangPawTag;
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
	type_43 Inv_PatsSock;
	type_44 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_52 Inv_LevelPickups;
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
	type_69 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_89 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_106 sb_model_indices;
	type_109 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xPlatformAsset
{
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_57 tmrs;
	type_60 ttms;
	type_61 atms;
	type_62 dtms;
	type_64 vms;
	type_65 dss;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_4 texCoords;
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

struct zFrag
{
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
	type_15 activateCB;
	type_15 deactivateCB;
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

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_110 parentID;
	float lifetime;
	float delay;
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
	type_66 frustplane;
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
	type_24 lastRefs;
	type_28 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_72 MoveSpeed;
	type_76 AnimSneak;
	type_77 AnimWalk;
	type_79 AnimRun;
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
	type_112 talk_filter;
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
	type_0 beginUpdate;
	type_2 endUpdate;
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
	type_26 frustumPlanes;
	RwBBox frustumBoundBox;
	type_33 frustumCorners;
};

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_63 initCB;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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
	type_58 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagLightningLine
{
	float unused;
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

struct xEntSplineData
{
	int unknown;
};

struct xSerial
{
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_73 pad;
	float len;
	float range;
	float period;
	float phase;
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

struct xShadowSimplePoly
{
	type_70 vert;
	xVec3 norm;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagLightningRot
{
	type_74 deg;
	float degrees;
	float height;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xSpline3
{
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct _class_2
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_83 matrix;
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

struct _class_3
{
	type_85 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_92 endParam;
	type_93 endVel;
	type_97 paramSpan;
	float arc_height;
	xVec3 arc_normal;
};

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
	type_105 corner;
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
	type_10 colls;
	type_12 post;
	type_16 depenq;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_100 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_108 sceneStart;
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

struct _tagLightningZeus
{
	float normal_offset;
	float back_offset;
	float side_offset;
};

struct RxNodeMethods
{
	type_31 nodeBody;
	type_34 nodeInit;
	type_36 nodeTerm;
	type_1 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_27 configMsgHandler;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_99 vertIndex;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct _class_4
{
	float t;
	float u;
	float v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct _tagPadAnalog
{
	char x;
	char y;
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

struct xFFX
{
};

struct _tagiPad
{
	int port;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_113 clusters;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct _tagLightningAdd
{
	unsigned int type;
	float setup_degrees;
	float move_degrees;
	float rot_radius;
	xVec3* start;
	xVec3* end;
	short total_points;
	short end_points;
	float time;
	float arc_height;
	float thickness;
	iColor_tag color;
	float rand_radius;
	unsigned int flags;
	float zeus_normal_offset;
	float zeus_back_offset;
	float zeus_side_offset;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

type_20 buffer;
type_30 buffer;
zGlobals globals;
type_95 xAnimDefaultBeforeEnter;
type_23 zEGenerator_Render;
type_59 zEGeneratorEventCB;
type_7 zEGenerator_Move;
type_18 zEGenerator_Update;

int zEGeneratorEventCB(xBase* to, unsigned int toEvent, xBase* toParamWidget);
void zEGenerator_TurnOn(zEGenerator* egen);
void zEGenerator_Render(zEGenerator* egen);
void zEGenerator_Update(zEGenerator* egen, xScene* sc, float dt);
void zEGenerator_Move();
void zEGenerator_Reset(zEGenerator* egen);
void zEGenerator_Load(zEGenerator* ent, xSerial* s);
void zEGenerator_Save(zEGenerator* ent, xSerial* s);
void zEGenerator_Setup(zEGenerator* egen);
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset);
void zEGenerator_Init(void* egen, void* asset);

// zEGeneratorEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x131d30
int zEGeneratorEventCB(xBase* to, unsigned int toEvent, xBase* toParamWidget)
{
	zEGenerator* egen;
	zShrapnelAsset* shrap;
}

// zEGenerator_TurnOn__FP11zEGenerator
// Start address: 0x132080
void zEGenerator_TurnOn(zEGenerator* egen)
{
	zEGenAsset* zasset;
	unsigned short itgt;
	unsigned short imp;
	int i;
	xLinkAsset* link;
	xBase* b;
	int i;
	_tagLightningAdd add;
}

// zEGenerator_Render__FP11zEGenerator
// Start address: 0x1325f0
void zEGenerator_Render(zEGenerator* egen)
{
}

// zEGenerator_Update__FP11zEGeneratorP6xScenef
// Start address: 0x132600
void zEGenerator_Update(zEGenerator* egen, xScene* sc, float dt)
{
	zEnt* ent;
}

// zEGenerator_Move__FP11zEGeneratorP6xScenef
// Start address: 0x1328a0
void zEGenerator_Move()
{
}

// zEGenerator_Reset__FP11zEGeneratorP6xScene
// Start address: 0x1328b0
void zEGenerator_Reset(zEGenerator* egen)
{
	zEGenAsset* zasset;
}

// zEGenerator_Load__FP11zEGeneratorP7xSerial
// Start address: 0x1329b0
void zEGenerator_Load(zEGenerator* ent, xSerial* s)
{
}

// zEGenerator_Save__FP11zEGeneratorP7xSerial
// Start address: 0x1329c0
void zEGenerator_Save(zEGenerator* ent, xSerial* s)
{
}

// zEGenerator_Setup__FP11zEGeneratorP6xScene
// Start address: 0x1329d0
void zEGenerator_Setup(zEGenerator* egen)
{
	int i;
	xLinkAsset* la;
	xBase* b;
}

// zEGenerator_Init__FP11zEGeneratorP9xEntAsset
// Start address: 0x132ab0
void zEGenerator_Init(zEGenerator* egen, xEntAsset* asset)
{
	zEGenAsset* zasset;
	void* buf;
	unsigned int size;
}

// zEGenerator_Init__FPvPv
// Start address: 0x132c10
void zEGenerator_Init(void* egen, void* asset)
{
}

