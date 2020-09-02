typedef struct RxPipelineNode;
typedef struct zPlayerGlobals;
typedef struct xBBox;
typedef struct RwResEntry;
typedef struct _tagLightningAdd;
typedef struct xModelBucket;
typedef struct RwObjectHasFrame;
typedef struct xEntAsset;
typedef struct xBase;
typedef struct RpMorphTarget;
typedef struct RpWorldSector;
typedef struct xEntDrive;
typedef struct rxHeapFreeBlock;
typedef struct xUpdateCullMgr;
typedef struct RwRGBA;
typedef struct RwRaster;
typedef struct zLightning;
typedef struct zPlayerCarryInfo;
typedef struct _class_0;
typedef struct xFuncPiece;
typedef struct xModelInstance;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xVec3;
typedef struct RpClump;
typedef struct RpLight;
typedef struct RxNodeDefinition;
typedef struct zLasso;
typedef struct zPlayerSettings;
typedef struct xEnt;
typedef struct xLightKit;
typedef struct tweak_info;
typedef struct xClumpCollBSPTree;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RwCamera;
typedef struct zEnt;
typedef struct RpWorld;
typedef struct xAnimTransitionList;
typedef struct xJSPNodeInfo;
typedef struct RxPipeline;
typedef struct xSurface;
typedef struct RxPipelineCluster;
typedef struct xEnvAsset;
typedef struct xAnimTable;
typedef struct RxPipelineNodeParam;
typedef struct xUpdateCullEnt;
typedef struct xEntFrame;
typedef struct tweak_callback;
typedef struct _tagEmitVolume;
typedef struct _zPortal;
typedef struct RxHeap;
typedef struct xAnimTransition;
typedef struct RwBBox;
typedef struct xGridBound;
typedef struct xQuat;
typedef struct xPortalAsset;
typedef struct xMat4x3;
typedef struct xAnimState;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpSector;
typedef struct rxHeapBlockHeader;
typedef struct iFogParams;
typedef struct xShadowSimplePoly;
typedef struct RwMatrixTag;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct RxPipelineRequiresCluster;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct RwLLLink;
typedef struct xParEmitter;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xScene;
typedef struct _tagEmitOffsetPoint;
typedef struct xParEmitterAsset;
typedef struct RpAtomic;
typedef struct _class_1;
typedef struct xAnimFile;
typedef struct tri_data_0;
typedef struct xParGroup;
typedef struct RpVertexNormal;
typedef struct tri_data_1;
typedef struct _class_2;
typedef struct xAnimSingle;
typedef struct xVec4;
typedef struct xLightKitLight;
typedef struct xParEmitterPropsAsset;
typedef struct RwSurfaceProperties;
typedef struct xJSPHeader;
typedef struct xCollis;
typedef enum _tagPadState;
typedef struct xShadowSimpleCache;
typedef struct rxReq;
typedef struct xEntCollis;
typedef struct xEntBoulder;
typedef struct RwFrame;
typedef struct RpInterpolator;
typedef enum RxClusterValidityReq;
typedef struct xAnimMultiFileBase;
typedef struct xGlobals;
typedef struct xEnv;
typedef struct xPEVCyl;
typedef struct zEntHangable;
typedef struct xAnimEffect;
typedef struct _tagxPad;
typedef struct _class_3;
typedef struct xParInterp;
typedef struct xLinkAsset;
typedef enum RxNodeDefEditable;
typedef struct RpPolygon;
typedef enum RxClusterValid;
typedef struct _class_4;
typedef struct xRot;
typedef struct RpMaterialList;
typedef struct xAnimPlay;
typedef struct tagiRenderArrays;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct _class_5;
typedef struct RpMaterial;
typedef struct xAnimMultiFile;
typedef struct xFFX;
typedef struct xModelPool;
typedef struct _tagiPad;
typedef enum rxEmbeddedPacketState;
typedef struct xPEEntBone;
typedef struct xSphere;
typedef struct xParSys;
typedef struct RxObjSpace3DVertex;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpGeometry;
typedef struct _class_6;
typedef union RxColorUnion;
typedef struct xEntShadow;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct anim_coll_data;
typedef struct zParEmitter;
typedef struct xClumpCollBSPTriangle;
typedef struct _tagLightningLine;
typedef struct xPECircle;
typedef struct RwSphere;
typedef struct xQCData;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct _class_7;
typedef struct RpMeshHeader;
typedef struct zPlatform;
typedef struct zScene;
typedef struct xMat3x3;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct substr;
typedef struct RwTexture;
typedef struct RxClusterRef;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct _tagLightningRot;
typedef struct zJumpParam;
typedef struct zAssetPickupTable;
typedef struct RwObject;
typedef struct _tagEmitSphere;
typedef struct RpTriangle;
typedef struct zPlayerLassoInfo;
typedef union _class_8;
typedef struct zCutsceneMgr;
typedef struct RxIoSpec;
typedef struct _class_9;
typedef struct zLedgeGrabParams;
typedef struct RxNodeMethods;
typedef struct _class_10;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrustumPlane;
typedef struct _tagEmitRect;
typedef struct RwPlane;
typedef struct _tagLightningZeus;
typedef struct xModelTag;
typedef struct RxCluster;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct RxPacket;
typedef struct xBaseAsset;
typedef struct analog_data;
typedef enum RpWorldRenderOrder;
typedef struct _class_11;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef struct xPEEntBound;
typedef struct RwRGBAReal;
typedef struct xVec2;
typedef struct _tagEmitLine;
typedef struct xParEmitterCustomSettings;
typedef struct RwLinkList;
typedef struct zCheckPoint;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int(*type_2)(RxPipelineNode*);
typedef void(*type_5)(xAnimState*, xAnimSingle*, void*);
typedef RwCamera*(*type_8)(RwCamera*);
typedef RwObjectHasFrame*(*type_9)(RwObjectHasFrame*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_13)(RxPipelineNode*);
typedef RpWorldSector*(*type_17)(RpWorldSector*);
typedef int(*type_20)(RxPipelineNode*, RxPipeline*);
typedef void(*type_23)(tweak_info&);
typedef unsigned int(*type_25)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_28)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_34)(RxNodeDefinition*);
typedef void(*type_35)(void*);
typedef void(*type_37)(RxNodeDefinition*);
typedef void(*type_42)(xEnt*, xScene*, float);
typedef unsigned int(*type_44)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_46)(tweak_info&);
typedef void(*type_47)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_48)(xEnt*, xVec3*);
typedef void(*type_50)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_53)(tweak_info&, void*);
typedef void(*type_55)(xEnt*);
typedef xBase*(*type_58)(unsigned int);
typedef void(*type_59)(tweak_info&);
typedef char*(*type_61)(xBase*);
typedef unsigned int(*type_63)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef unsigned int(*type_64)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_65)(unsigned int);
typedef void(*type_68)(xEnt*, xVec3*, xMat4x3*);
typedef RpClump*(*type_92)(RpClump*, void*);
typedef void(*type_96)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_97)(void*, void*);
typedef int(*type_104)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpAtomic*(*type_108)(RpAtomic*);
typedef void(*type_112)(xMemPool*, void*);
typedef void(*type_120)(RwResEntry*);

typedef unsigned int type_1[72];
typedef float type_3[4];
typedef float type_4[2];
typedef unsigned int type_6[15];
typedef char type_7[4];
typedef xBase* type_10[72];
typedef analog_data type_12[2];
typedef unsigned char type_14[24];
typedef xFuncPiece* type_15[2];
typedef unsigned char type_16[3];
typedef unsigned char type_18[16];
typedef xFuncPiece* type_19[2];
typedef xFuncPiece* type_21[2];
typedef float type_22[5];
typedef RwFrustumPlane type_24[6];
typedef xVec4 type_26[12];
typedef unsigned char type_27[2];
typedef unsigned int type_29[2];
typedef xVec3 type_30[3];
typedef unsigned char type_31[2];
typedef RwV3d type_32[8];
typedef float type_33[6];
typedef float type_36[3];
typedef xFuncPiece type_38[10];
typedef float type_39[3];
typedef xModelTag type_40[2];
typedef float type_41[3];
typedef RpLight* type_43[2];
typedef float type_45[16];
typedef RwFrame* type_49[2];
typedef float type_51[2];
typedef xVec3 type_52[2];
typedef type_52 type_54[10];
typedef xEnt* type_56[111];
typedef unsigned char type_57[3];
typedef unsigned char type_60[3];
typedef unsigned char type_62[3];
typedef float type_66[2];
typedef char type_67[128];
typedef unsigned short type_69[3];
typedef char type_70[16];
typedef type_67 type_71[6];
typedef xVec3 type_72[2];
typedef unsigned short type_73[960];
typedef xVec3 type_74[16];
typedef unsigned char type_75[2];
typedef RxObjSpace3DVertex type_76[480];
typedef xVec3 type_77[16];
typedef zLightning* type_78[48];
typedef xAnimMultiFileEntry type_79[1];
typedef xVec3 type_80[4];
typedef unsigned char type_81[14];
typedef RxObjSpace3DVertex* type_82[2];
typedef xModelTag type_83[4];
typedef char type_84[32];
typedef float type_85[480];
typedef char type_86[16];
typedef xModelInstance* type_87[14];
typedef float type_88[4];
typedef float type_89[16];
typedef float type_90[5];
typedef unsigned char type_91[4];
typedef unsigned int type_93[4];
typedef xFuncPiece type_94[10];
typedef RwTexCoords* type_95[8];
typedef unsigned char type_98[22];
typedef xCollis type_99[18];
typedef unsigned char type_100[22];
typedef xParInterp type_101[1];
typedef float type_102[10];
typedef float type_103[16];
typedef char* type_105[4];
typedef xVec3 type_106[5];
typedef unsigned short type_107[3];
typedef unsigned char type_109[5];
typedef xVec3 type_110[5];
typedef xVec3 type_111[60];
typedef xVec3 type_113[2];
typedef RxObjSpace3DVertex type_114[128];
typedef char type_115[32];
typedef xParInterp type_116[4];
typedef char type_117[32];
typedef float type_118[22];
typedef xFuncPiece type_119[10];
typedef xParInterp type_121[4];
typedef float type_122[22];
typedef float type_123[2];
typedef float type_124[2];
typedef float type_125[2];
typedef float type_126[2];
typedef unsigned int type_127[15];
typedef unsigned int type_128[15];
typedef RwTexCoords* type_129[8];
typedef xVec3 type_130[2];
typedef RxCluster type_131[1];
typedef xVec3 type_132[10];

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
	type_40 BubbleWandTag;
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
	type_83 HangPawTag;
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
	type_127 Inv_PatsSock;
	type_128 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_6 Inv_LevelPickups;
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
	type_29 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_56 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_81 sb_model_indices;
	type_87 sb_models;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_120 destroyNotify;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_9 sync;
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
	type_104 eventFunc;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_95 texCoords;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_35 activateCB;
	type_35 deactivateCB;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
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

struct zLightning
{
	unsigned int type;
	unsigned int flags;
	union
	{
		_class_5 legacy;
		_class_10 func;
	};
	iColor_tag color;
	float time_left;
	float time_total;
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

struct _class_0
{
	type_18 pad;
};

struct xFuncPiece
{
	type_90 coef;
	float end;
	int order;
	xFuncPiece* next;
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
	type_26 frustplane;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_92 callback;
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
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
	type_106 lastRefs;
	type_109 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_33 MoveSpeed;
	type_36 AnimSneak;
	type_39 AnimWalk;
	type_41 AnimRun;
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
	type_91 talk_filter;
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
	type_42 update;
	type_42 endUpdate;
	type_48 bupdate;
	type_50 move;
	type_55 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_68 transl;
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

struct tweak_info
{
	substr name;
	void* value;
	tweak_callback* cb;
	void* context;
	unsigned char type;
	unsigned char value_size;
	unsigned short flags;
	union
	{
		_class_1 int_context;
		_class_3 uint_context;
		_class_6 float_context;
		_class_7 bool_context;
		_class_9 select_context;
		_class_11 flag_context;
		_class_0 all_context;
	};
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_8 endUpdate;
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
	type_32 frustumCorners;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct xSurface
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_97 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct tweak_callback
{
	type_23 on_change;
	type_23 on_select;
	type_23 on_unselect;
	type_23 on_start_edit;
	type_23 on_stop_edit;
	type_23 on_expand;
	type_23 on_collapse;
	type_23 on_update;
	type_53 convert_mem_to_tweak;
	type_53 convert_tweak_to_mem;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_64 Conditional;
	type_64 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_96 BeforeEnter;
	type_5 StateCallback;
	type_11 BeforeAnimMatrices;
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

struct RpSector
{
	int type;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_93 pad;
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
	type_30 vert;
	xVec3 norm;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_57 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_43 light;
	type_49 light_frame;
	int memlvl;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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
	type_60 emit_pad;
	type_62 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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
	type_58 resolvID;
	type_61 base2Name;
	type_65 id2Name;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_108 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct _class_1
{
	int value_def;
	int value_min;
	int value_max;
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
	type_75 NumAnims;
	void** RawData;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xParGroup
{
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_51 BilinearLerp;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_45 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_101 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_116 color_birth;
	type_121 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xJSPHeader
{
	type_7 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_80 corner;
};

struct rxReq
{
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
	type_99 colls;
	type_47 post;
	type_63 depenq;
};

struct xEntBoulder
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_71 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_84 sceneStart;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct zEntHangable
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_44 Callback;
};

struct _tagxPad
{
	type_98 value;
	type_100 last_value;
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
	type_118 up_tmr;
	type_122 down_tmr;
	type_12 analog;
};

struct _class_3
{
	unsigned int value_def;
	unsigned int value_min;
	unsigned int value_max;
};

struct xParInterp
{
	type_66 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_88 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	unsigned short matIndex;
	type_69 vertIndex;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_4
{
	float t;
	float u;
	float v;
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
	type_11 BeforeAnimMatrices;
};

struct tagiRenderArrays
{
	type_73 m_index;
	type_76 m_vertex;
	type_85 m_vertexTZ;
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

struct _class_5
{
	type_74 base_point;
	type_77 point;
	short total_points;
	short end_points;
	float arc_height;
	xVec3 arc_normal;
	type_89 thickness;
	union
	{
		_tagLightningLine line;
		_tagLightningRot rot;
		_tagLightningZeus zeus;
	};
	float rand_radius;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_79 Files;
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

struct _tagiPad
{
	int port;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xSphere
{
	xVec3 center;
	float r;
};

struct xParSys
{
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
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
	type_129 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct _class_6
{
	float value_def;
	float value_min;
	float value_max;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_125 radius;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct anim_coll_data
{
};

struct zParEmitter : xParEmitter
{
};

struct xClumpCollBSPTriangle
{
	_class_8 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct _tagLightningLine
{
	float unused;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct _class_7
{
	unsigned char value_def;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct zPlatform
{
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
	type_1 baseCount;
	type_10 baseList;
	_zEnv* zen;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_112 InitCB;
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

struct substr
{
	char* text;
	unsigned int size;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_115 name;
	type_117 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_27 PowerUp;
	type_31 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct _tagLightningRot
{
	type_103 deg;
	float degrees;
	float height;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct zAssetPickupTable
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

struct _tagEmitSphere
{
	float radius;
};

struct RpTriangle
{
	type_107 vertIndex;
	short matIndex;
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

union _class_8
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zCutsceneMgr
{
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct _class_9
{
	unsigned int value_def;
	unsigned int labels_size;
	char** labels;
	void* values;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_111 tranTable;
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

struct RxNodeMethods
{
	type_28 nodeBody;
	type_34 nodeInit;
	type_37 nodeTerm;
	type_2 pipelineNodeInit;
	type_13 pipelineNodeTerm;
	type_20 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct _class_10
{
	type_113 endPoint;
	xVec3 direction;
	float length;
	float scale;
	float width;
	type_123 endParam;
	type_124 endVel;
	type_126 paramSpan;
	float arc_height;
	xVec3 arc_normal;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct _tagLightningZeus
{
	float normal_offset;
	float back_offset;
	float side_offset;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_3 wt;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_131 clusters;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct _class_11
{
	unsigned int value_def;
	unsigned int mask;
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct xVec2
{
	float x;
	float y;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_16 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct RwLinkList
{
	RwLLLink link;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

type_70 buffer;
type_86 buffer;
type_78 sLightning;
zParEmitter* sSparkEmitter;
RwRaster* sLightningRaster;
type_119 sLFuncX;
type_38 sLFuncY;
type_94 sLFuncZ;
type_132 sLFuncVal;
type_54 sLFuncSlope;
type_102 sLFuncEnd;
float sLFuncJerkFreq;
float sLFuncJerkTime;
float sLFuncShift;
float sLFuncMaxPStep;
float sLFuncMinPStep;
float sLFuncMinScale;
float sLFuncMaxScale;
float sLFuncScalePerLength;
float sLFuncMinSpan;
float sLFuncSpanPerLength;
float sLFuncSlopeRange;
float sLFuncUVSpeed;
float sLFuncUVOffset;
_tagLightningAdd gLightningTweakAddInfo;
xVec3 sTweakStart;
xVec3 sTweakEnd;
tweak_callback sLightningStartCB;
tweak_callback sLightningChangeCB;
type_105 lightning_type_names;
type_14 cSparkColors;
type_110 sPoint;
type_22 sSize;
zGlobals globals;
xMat4x3 g_I3;
tagiRenderArrays gRenderArr;
iColor_tag g_WHITE;
_tagxPad* gDebugPad;
unsigned int gActiveHeap;
type_46 lightningTweakChangeType;
type_59 lightningTweakStart;

void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end);
void zLightningKill(zLightning* l);
void zLightningShow(zLightning* l, int show);
void zLightningRender();
void RenderLightning(zLightning* l);
void zLightningFunc_Render(zLightning* l);
void zLightningUpdate(float seconds);
void UpdateLightning(zLightning* l, float seconds);
zLightning* zLightningAdd(_tagLightningAdd* add);
void zLightningInit();
void lightningTweakStart();
void lightningTweakChangeType();

// zLightningModifyEndpoints__FP10zLightningP5xVec3P5xVec3
// Start address: 0x181530
void zLightningModifyEndpoints(zLightning* l, xVec3* start, xVec3* end)
{
	int i;
	xVec3 dir;
	int j;
	int zeusOnStraightPoint;
	float pos;
	float inc;
	int j;
	float scalar;
	xVec3* dir;
}

// zLightningKill__FP10zLightning
// Start address: 0x181c70
void zLightningKill(zLightning* l)
{
}

// zLightningShow__FP10zLightningi
// Start address: 0x181c90
void zLightningShow(zLightning* l, int show)
{
}

// zLightningRender__Fv
// Start address: 0x181cc0
void zLightningRender()
{
	int i;
}

// RenderLightning__FP10zLightning
// Start address: 0x181d60
void RenderLightning(zLightning* l)
{
	xMat4x3* cam;
	float alphaf;
	unsigned char alphau8;
	int i;
	unsigned int verts;
	xVec3 nextN;
	xVec3 next;
	float len;
	int lastPoint;
	RwRGBA* _col;
	RwRGBA* _col;
	int backwards;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float thicknessScale;
	RwRGBA* _col;
	RwRGBA* _col;
	int backwards;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_114 sStripVert;
}

// zLightningFunc_Render__FP10zLightning
// Start address: 0x182e00
void zLightningFunc_Render(zLightning* l)
{
	float percent;
	float pstep;
	type_130 val;
	type_4 param;
	type_15 xI;
	type_19 yI;
	type_21 zI;
	int i;
	type_72 drawAxis;
	type_82 verts;
	unsigned int numVerts;
	int u;
	unsigned char aVal;
	RwRGBA* _col;
	RwRGBA* _col;
	float newParam;
	float p2;
	float p3;
	float w1;
	float w2;
	float scalar;
	RwRGBA* _col;
	RwRGBA* _col;
}

// zLightningUpdate__Ff
// Start address: 0x1835a0
void zLightningUpdate(float seconds)
{
	int i;
	int picker;
	int j;
	float prevEnd;
}

// UpdateLightning__FP10zLightningf
// Start address: 0x183a00
void UpdateLightning(zLightning* l, float seconds)
{
	int i;
	float full;
	float half;
	float sc1;
	xVec3 dir;
	float full;
	float half;
	int i;
	xMat3x3 mat3;
	xVec3 vec;
	float sc2;
	float sc1;
	xParEmitterCustomSettings info;
	int i;
}

// zLightningAdd__FP16_tagLightningAdd
// Start address: 0x184050
zLightning* zLightningAdd(_tagLightningAdd* add)
{
	float currot;
	int zeusOnStraightPoint;
	xVec3 dir;
	int j;
	float pos;
	float inc;
	int i;
	int j;
	float scalar;
}

// zLightningInit__Fv
// Start address: 0x1848c0
void zLightningInit()
{
	int i;
	RwTexture* tex;
	int j;
	float prevEnd;
}

// lightningTweakStart__FRC10tweak_info
// Start address: 0x184e50
void lightningTweakStart()
{
	xVec3 s;
	xVec3 e;
}

// lightningTweakChangeType__FRC10tweak_info
// Start address: 0x184f10
void lightningTweakChangeType()
{
}

