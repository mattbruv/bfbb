typedef struct xModelInstance;
typedef struct xEnvAsset;
typedef struct RpTriangle;
typedef struct RwObjectHasFrame;
typedef struct xEnt;
typedef struct zPlatform;
typedef struct RpAtomic;
typedef struct xAnimMultiFileEntry;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xAnimActiveEffect;
typedef struct _tagxRumble;
typedef struct zGlobals;
typedef struct xEnv;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct zEnt;
typedef struct RwRaster;
typedef struct zAssetPickupTable;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xPlatformAsset;
typedef struct RpLight;
typedef struct RpMeshHeader;
typedef struct xSerial;
typedef struct zGlobalSettings;
typedef struct RxNodeDefinition;
typedef struct xAnimFile;
typedef struct xEntMPData;
typedef struct zSurfaceProps;
typedef struct RxPipeline;
typedef struct xGroup;
typedef struct zScene;
typedef struct xEntBoulder;
typedef struct xAnimSingle;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xUpdateCullEnt;
typedef struct RwResEntry;
typedef struct zPlayerLassoInfo;
typedef struct zSurfAssetBase;
typedef struct xGridBound;
typedef struct zCutsceneMgr;
typedef struct RxPipelineCluster;
typedef struct iEnv;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct xGroupAsset;
typedef struct xEntMotionAsset;
typedef struct RxPipelineNodeParam;
typedef struct xMovePoint;
typedef struct xEntAsset;
typedef struct xBase;
typedef struct RpWorld;
typedef struct RxHeap;
typedef struct zLedgeGrabParams;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xSpline3;
typedef struct xQuat;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct _zEnv;
typedef struct xAnimMultiFileBase;
typedef struct xEntMotionERData;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct rxHeapBlockHeader;
typedef enum _zPlayerWallJumpState;
typedef struct zSurfMatFX;
typedef struct xJSPHeader;
typedef struct _zPortal;
typedef struct zPlatFMRunTime;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntFrame;
typedef enum RpWorldRenderOrder;
typedef struct xLightKitLight;
typedef struct xEntCollis;
typedef struct RpMaterial;
typedef struct RwFrame;
typedef struct xPortalAsset;
typedef struct xAnimPlay;
typedef struct xCollis;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RwTexture;
typedef struct xUpdateCullGroup;
typedef struct xVec3;
typedef struct zLasso;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RpSector;
typedef struct xVec4;
typedef struct xShadowSimplePoly;
typedef struct RwSurfaceProperties;
typedef struct xFFX;
typedef struct RwMatrixTag;
typedef struct analog_data;
typedef struct xLinkAsset;
typedef struct xQCData;
typedef struct rxReq;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xModelPool;
typedef enum RxClusterValidityReq;
typedef struct xCoef3;
typedef struct xEntMotionOrbitData;
typedef struct tri_data_0;
typedef struct xClumpCollBSPTree;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct xCamera;
typedef struct xMat4x3;
typedef struct xClumpCollBSPVertInfo;
typedef struct xMovePointAsset;
typedef struct xScene;
typedef enum RxNodeDefEditable;
typedef struct zPlayerCarryInfo;
typedef struct xShadowSimpleCache;
typedef enum RxClusterValid;
typedef struct xUpdateCullMgr;
typedef struct xClumpCollBSPBranchNode;
typedef struct xRot;
typedef struct xBaseAsset;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimTable;
typedef struct xEntMechData;
typedef struct RwCamera;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntMotionSplineData;
typedef struct xMemPool;
typedef struct RwLLLink;
typedef enum RwCameraProjection;
typedef struct _class_0;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct xModelBucket;
typedef struct RxClusterDefinition;
typedef struct RpVertexNormal;
typedef union _class_1;
typedef struct xBound;
typedef struct zSurfTextureAnim;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct iFogParams;
typedef struct RwSphere;
typedef struct xEntShadow;
typedef struct RpInterpolator;
typedef struct xEntDrive;
typedef struct RwTexDictionary;
typedef struct xAnimTransitionList;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef struct xMat3x3;
typedef struct xModelTag;
typedef enum _tagPadState;
typedef struct RxClusterRef;
typedef struct zSurfacePropTexAnim;
typedef struct RpPolygon;
typedef struct xEntMotionMechData;
typedef struct RpMaterialList;
typedef struct RwObject;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct xEntPenData;
typedef struct xJSPNodeInfo;
typedef struct RxIoSpec;
typedef struct _tagxPad;
typedef struct RxNodeMethods;
typedef struct xCoef;
typedef struct _class_2;
typedef struct xVec2;
typedef struct xEntOrbitData;
typedef struct _tagPadAnalog;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xBBox;
typedef struct _tagiPad;
typedef struct tri_data_1;
typedef struct xEntMotion;
typedef struct zSurfColorFX;
typedef struct zSurfacePropUVFX;
typedef struct RxCluster;
typedef struct zJumpParam;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xEntSplineData;
typedef struct RwLinkList;
typedef struct zSurfUVFX;
typedef struct xEntMotionPenData;

typedef unsigned int(*type_1)(void*, void*);
typedef RwCamera*(*type_2)(RwCamera*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_7)(RxPipelineNode*);
typedef void(*type_11)(void*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef xBase*(*type_13)(unsigned int);
typedef char*(*type_15)(xBase*);
typedef int(*type_16)(RxPipelineNode*, RxPipeline*);
typedef char*(*type_17)(unsigned int);
typedef unsigned int(*type_19)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_25)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_32)(RxNodeDefinition*);
typedef unsigned int(*type_33)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_35)(RxNodeDefinition*);
typedef int(*type_37)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_38)(RxPipelineNode*);
typedef void(*type_45)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_47)(RpWorldSector*);
typedef void(*type_49)(xEnt*, xScene*, float);
typedef void(*type_50)(xEnt*, xVec3*);
typedef void(*type_52)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_53)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_55)(xAnimPlay*, xAnimState*);
typedef void(*type_56)(xEnt*);
typedef unsigned int(*type_59)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_61)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_62)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_63)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_77)(RwCamera*);
typedef void(*type_83)(xMemPool*, void*);
typedef RpClump*(*type_90)(RpClump*, void*);
typedef void(*type_94)(RwResEntry*);

typedef float type_0[16];
typedef unsigned char type_3[22];
typedef float type_5[2];
typedef unsigned short type_6[3];
typedef char type_8[16];
typedef unsigned char type_9[22];
typedef unsigned char type_10[2];
typedef float type_14[4];
typedef char type_18[16];
typedef zSurfacePropTexAnim type_20[2];
typedef float type_21[2];
typedef zSurfacePropUVFX type_22[2];
typedef xVec3 type_23[5];
typedef RwFrustumPlane type_24[6];
typedef xVec3 type_26[60];
typedef unsigned char type_27[5];
typedef RpLight* type_29[2];
typedef unsigned char type_30[3];
typedef RwV3d type_31[8];
typedef RwFrame* type_34[2];
typedef float type_36[22];
typedef float type_39[22];
typedef RwTexCoords* type_40[8];
typedef unsigned char type_41[2];
typedef xAnimMultiFileEntry type_42[1];
typedef xVec3 type_43[3];
typedef unsigned int type_44[15];
typedef unsigned int type_46[15];
typedef unsigned int type_48[15];
typedef analog_data type_51[2];
typedef zSurfTextureAnim type_54[2];
typedef unsigned char type_57[2];
typedef zSurfUVFX type_58[2];
typedef unsigned char type_60[3];
typedef unsigned char type_64[2];
typedef xVec4 type_65[12];
typedef unsigned int type_66[2];
typedef float type_67[6];
typedef unsigned char type_68[2];
typedef xVec3 type_69[4];
typedef unsigned int type_70[4];
typedef float type_71[3];
typedef float type_72[3];
typedef xModelTag type_73[2];
typedef float type_74[3];
typedef xEnt* type_75[111];
typedef unsigned short type_76[3];
typedef xCollis type_78[18];
typedef unsigned int type_79[72];
typedef xBase* type_80[72];
typedef float type_81[4];
typedef char type_82[128];
typedef float type_84[4];
typedef type_82 type_85[6];
typedef char type_86[32];
typedef unsigned char type_87[14];
typedef xModelTag type_88[4];
typedef char type_89[32];
typedef float type_91[12];
typedef char type_92[32];
typedef xModelInstance* type_93[14];
typedef unsigned char type_95[3];
typedef char type_96[4];
typedef float type_97[12];
typedef float type_98[12];
typedef float type_99[2];
typedef RwTexCoords* type_100[8];
typedef float type_101[12];
typedef unsigned char type_102[4];
typedef float type_103[12];
typedef float type_104[12];
typedef RxCluster type_105[1];

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

struct RpTriangle
{
	type_6 vertIndex;
	short matIndex;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_4 sync;
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
	type_49 update;
	type_49 endUpdate;
	type_50 bupdate;
	type_53 move;
	type_56 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_63 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_12 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct st_SERIAL_CLIENTINFO
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct zAssetPickupTable
{
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

struct xPlatformAsset
{
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_64 PowerUp;
	type_68 InitialPowerUp;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_41 NumAnims;
	void** RawData;
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

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	unsigned int texanim_flags;
	type_20 texanim;
	unsigned int uvfx_flags;
	type_22 uvfx;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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
	type_80 baseList;
	_zEnv* zen;
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
	type_21 BilinearLerp;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_1 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_94 destroyNotify;
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
	type_54 texture_anim;
	unsigned int uvfx_flags;
	type_58 uvfx;
	unsigned char on;
	type_60 surf_pad;
	float oob_delay;
	float walljump_scale_xz;
	float walljump_scale_y;
	float damage_timer;
	float damage_bounce;
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

struct zCutsceneMgr
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_29 light;
	type_34 light_frame;
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
	type_40 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_55 BeforeEnter;
	type_45 StateCallback;
	type_61 BeforeAnimMatrices;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_57 pad;
	float delay;
	xSpline3* spl;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_37 eventFunc;
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
	type_47 renderCallBack;
	RxPipeline* pipeline;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_26 tranTable;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_90 callback;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_19 Callback;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_33 Conditional;
	type_33 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_70 pad;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct zSurfMatFX
{
	unsigned int flags;
	unsigned int bumpmapID;
	unsigned int envmapID;
	float shininess;
	float bumpiness;
	unsigned int dualmapID;
};

struct xJSPHeader
{
	type_96 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_91 tmrs;
	type_97 ttms;
	type_98 atms;
	type_101 dtms;
	type_103 vms;
	type_104 dss;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_0 matrix;
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
	type_78 colls;
	type_52 post;
	type_59 depenq;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_61 BeforeAnimMatrices;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_89 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_23 lastRefs;
	type_27 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_95 pad;
	void* moprops;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_42 Files;
};

struct RpSector
{
	int type;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xShadowSimplePoly
{
	type_43 vert;
	xVec3 norm;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xFFX
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_14 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct rxReq
{
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_100 texCoords;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_73 BubbleWandTag;
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
	type_88 HangPawTag;
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
	type_44 Inv_PatsSock;
	type_46 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_48 Inv_LevelPickups;
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
	type_66 TongueFlags;
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
	type_87 sb_model_indices;
	type_93 sb_models;
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
	type_65 frustplane;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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
	type_13 resolvID;
	type_15 base2Name;
	type_17 id2Name;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_69 corner;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_11 activateCB;
	type_11 deactivateCB;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_67 MoveSpeed;
	type_71 AnimSneak;
	type_72 AnimWalk;
	type_74 AnimRun;
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
	type_102 talk_filter;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_77 beginUpdate;
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
	type_24 frustumPlanes;
	RwBBox frustumBoundBox;
	type_31 frustumCorners;
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

struct xEntMotionSplineData
{
	int unknown;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	float t;
	float u;
	float v;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_30 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct zSurfTextureAnim
{
	unsigned short pad;
	unsigned short mode;
	unsigned int group;
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

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_5 radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct anim_coll_data
{
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_84 wt;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_76 vertIndex;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_85 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_92 sceneStart;
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

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
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

struct _tagxPad
{
	type_3 value;
	type_9 last_value;
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
	type_36 up_tmr;
	type_39 down_tmr;
	type_51 analog;
};

struct RxNodeMethods
{
	type_28 nodeBody;
	type_32 nodeInit;
	type_35 nodeTerm;
	type_38 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_16 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct xCoef
{
	type_81 a;
};

struct _class_2
{
	xVec3* verts;
};

struct xVec2
{
	float x;
	float y;
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

struct _tagPadAnalog
{
	char x;
	char y;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _tagiPad
{
	int port;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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
	type_99 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_105 clusters;
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

struct xEntSplineData
{
	int unknown;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_10 pad;
	float len;
	float range;
	float period;
	float phase;
};

type_8 buffer;
type_18 buffer;
zGlobals globals;
type_62 zEnvEventCB;

int zEnvEventCB(xBase* to, unsigned int toEvent, float* toParam);
void zEnvLoad(_zEnv* ent, xSerial* s);
void zEnvSave(_zEnv* ent, xSerial* s);
void zEnvRender(xEnv* env);
void zEnvStartingCamera(_zEnv* env);
void zEnvSetup(_zEnv* env);
void zEnvInit(_zEnv* env, xEnvAsset* easset);
void zEnvInit(void* env, void* easset);

// zEnvEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x175240
int zEnvEventCB(xBase* to, unsigned int toEvent, float* toParam)
{
}

// zEnvLoad__FP5_zEnvP7xSerial
// Start address: 0x1752c0
void zEnvLoad(_zEnv* ent, xSerial* s)
{
}

// zEnvSave__FP5_zEnvP7xSerial
// Start address: 0x1752d0
void zEnvSave(_zEnv* ent, xSerial* s)
{
}

// zEnvRender__FP4xEnv
// Start address: 0x1752e0
void zEnvRender(xEnv* env)
{
	RpWorld* world;
	int num;
	int i;
	xSurface* sp;
	zSurfaceProps* pp;
	RpMaterial* mp;
	xGroup* g;
	unsigned int texid;
	RwTexture* texptr;
}

// zEnvStartingCamera__FP5_zEnv
// Start address: 0x1753e0
void zEnvStartingCamera(_zEnv* env)
{
	xCamera* cam;
}

// zEnvSetup__FP5_zEnv
// Start address: 0x175430
void zEnvSetup(_zEnv* env)
{
}

// zEnvInit__FP5_zEnvP9xEnvAsset
// Start address: 0x175470
void zEnvInit(_zEnv* env, xEnvAsset* easset)
{
	unsigned int bufsize;
	void* buf;
}

// zEnvInit__FPvPv
// Start address: 0x175610
void zEnvInit(void* env, void* easset)
{
}

