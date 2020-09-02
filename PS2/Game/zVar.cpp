typedef struct xAnimTransitionList;
typedef struct RxNodeDefinition;
typedef struct xEntMotionPenData;
typedef struct analog_data;
typedef struct xCutsceneInfo;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimState;
typedef struct xPortalAsset;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipelineRequiresCluster;
typedef struct xModelTag;
typedef struct RpClump;
typedef enum RwFogType;
typedef struct RwResEntry;
typedef struct iColor_tag;
typedef struct RxPacket;
typedef enum _CurrentPlayer;
typedef struct RxPipelineCluster;
typedef struct xClumpCollBSPTriangle;
typedef struct RwRGBAReal;
typedef struct xGroup;
typedef struct RwObjectHasFrame;
typedef struct RpAtomic;
typedef struct xPlatformAsset;
typedef struct xScene;
typedef struct xCutscene;
typedef struct xCutsceneTime;
typedef struct RwLinkList;
typedef struct xEntMPData;
typedef struct xEnvAsset;
typedef struct zCheckPoint;
typedef struct RxPipelineNode;
typedef struct zPlayerGlobals;
typedef enum RpWorldRenderOrder;
typedef struct RpMaterial;
typedef struct xBaseAsset;
typedef struct xCutsceneData;
typedef struct xModelInstance;
typedef struct xEntMotionAsset;
typedef struct var_type;
typedef struct RpTriangle;
typedef struct xMovePoint;
typedef struct rxHeapFreeBlock;
typedef struct _zPortal;
typedef struct xSurface;
typedef struct zPlayerCarryInfo;
typedef struct RxPipeline;
typedef struct RwRaster;
typedef struct RwRGBA;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwTexture;
typedef struct xUpdateCullMgr;
typedef struct RwV2d;
typedef struct zVarMagicEntry;
typedef struct xAnimMultiFile;
typedef struct substr;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct xSpline3;
typedef struct xModelBucket;
typedef struct xCamera;
typedef struct zPlayerSettings;
typedef struct xBound;
typedef struct xEnt;
typedef struct xVec2;
typedef struct xEntMotionERData;
typedef struct xEntAsset;
typedef struct RpMeshHeader;
typedef struct xCutsceneBreak;
typedef struct xVec3;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zEnt;
typedef struct RwCamera;
typedef struct RpWorldSector;
typedef struct RxPipelineNodeParam;
typedef union _class_0;
typedef struct RpMorphTarget;
typedef struct xBBox;
typedef struct zPlatFMRunTime;
typedef struct xUpdateCullEnt;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwV3d;
typedef struct jot;
typedef struct xQuat;
typedef struct RpLight;
typedef struct xLightKit;
typedef struct XCSNNosey;
typedef struct xCoef3;
typedef struct xEntFrame;
typedef struct RpWorld;
typedef struct rxHeapBlockHeader;
typedef struct xMat4x3;
typedef struct xAnimTable;
typedef struct xBase;
typedef struct iEnv;
typedef struct iFogParams;
typedef struct basic_rect;
typedef struct _tagxRumble;
typedef struct xAnimTransition;
typedef struct xUpdateCullGroup;
typedef struct xJSPNodeInfo;
typedef struct xShadowSimplePoly;
typedef struct iSndInfo;
typedef struct xCutsceneZbuffer;
typedef struct xGridBound;
typedef struct split_tag;
typedef struct callback;
typedef struct xtextbox;
typedef struct xEntMotionOrbitData;
typedef struct RwMatrixTag;
typedef struct tag_type;
typedef struct xVec4;
typedef struct RwLLLink;
typedef struct RwSurfaceProperties;
typedef enum sound_listener_game_mode;
typedef struct xAnimMultiFileEntry;
typedef struct xMovePointAsset;
typedef struct xAnimActiveEffect;
typedef struct rxReq;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct xSndVoiceInfo;
typedef struct tri_data_0;
typedef struct xAnimFile;
typedef enum RxClusterValidityReq;
typedef struct xLightKitLight;
typedef struct _class_1;
typedef struct xGlobals;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct zEntHangable;
typedef struct xJSPHeader;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct _tagxPad;
typedef struct xfont;
typedef struct xCutsceneZbufferHack;
typedef struct xEntMechData;
typedef struct xEntMotionSplineData;
typedef enum RxNodeDefEditable;
typedef struct xEnv;
typedef enum RxClusterValid;
typedef struct RpInterpolator;
typedef struct _zEnv;
typedef struct xAnimMultiFileBase;
typedef struct xRot;
typedef struct xAnimEffect;
typedef struct xClumpCollBSPTree;
typedef struct zSaveLoadGame;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xCollis;
typedef struct zScene;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _class_2;
typedef struct _tagiPad;
typedef struct RpPolygon;
typedef struct zJumpParam;
typedef enum RwCameraProjection;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef enum RxClusterForcePresent;
typedef struct RpMaterialList;
typedef struct xAnimPlay;
typedef struct xLinkAsset;
typedef struct xCylinder;
typedef struct xFFX;
typedef struct xEntDrive;
typedef struct xCutsceneMgr;
typedef struct xModelPool;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xCutsceneMgrAsset;
typedef struct zPlatform;
typedef struct xEntShadow;
typedef struct zCutsceneMgr;
typedef struct RpGeometry;
typedef struct xCoef;
typedef struct RwSphere;
typedef struct anim_coll_data;
typedef struct xEntMotionMechData;
typedef struct RwTexDictionary;
typedef struct zAssetPickupTable;
typedef struct RxOutputSpec;
typedef struct iSndVol;
typedef struct xEntPenData;
typedef struct tag_iFile;
typedef struct xMat3x3;
typedef struct zGlobals;
typedef struct xSndGlobals;
typedef struct xQCData;
typedef struct zGlobalSettings;
typedef struct RxClusterRef;
typedef struct RwFrame;
typedef struct RwObject;
typedef struct xEntOrbitData;
typedef struct zPlayerLassoInfo;
typedef struct RxIoSpec;
typedef struct tri_data_1;
typedef struct tag_xFile;
typedef struct xMemPool;
typedef struct zLedgeGrabParams;
typedef struct xEntMotion;
typedef struct RxNodeMethods;
typedef enum _zPlayerWallJumpState;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct zLasso;
typedef struct RxCluster;
typedef enum sound_category;
typedef struct _class_3;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xEntSplineData;
typedef struct zVarEntry;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_1)(RxNodeDefinition*);
typedef char*(*type_5)(unsigned int);
typedef unsigned int(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_7)(RxNodeDefinition*);
typedef unsigned int(*type_8)(void*);
typedef void(*type_10)(RwResEntry*);
typedef RpAtomic*(*type_12)(RpAtomic*);
typedef RwCamera*(*type_15)(RwCamera*);
typedef int(*type_16)(RxPipelineNode*);
typedef RwCamera*(*type_18)(RwCamera*);
typedef RwObjectHasFrame*(*type_20)(RwObjectHasFrame*);
typedef void(*type_23)(RxPipelineNode*);
typedef char*(*type_29)();
typedef void(*type_31)(xAnimPlay*, xAnimState*);
typedef void(*type_36)(xAnimState*, xAnimSingle*, void*);
typedef char*(*type_37)(char*);
typedef int(*type_39)(RxPipelineNode*, RxPipeline*);
typedef void(*type_40)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpWorldSector*(*type_43)(RpWorldSector*);
typedef unsigned int(*type_49)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_52)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_59)(void*);
typedef void(*type_67)(jot&, xtextbox&, float, float);
typedef void(*type_72)(jot&, xtextbox&, xtextbox&);
typedef void(*type_74)(xEnt*, xScene*, float);
typedef void(*type_81)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_83)(xEnt*, xVec3*);
typedef unsigned int(*type_85)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_87)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_88)(xEnt*);
typedef void(*type_93)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef xBase*(*type_94)(unsigned int);
typedef char*(*type_99)(xBase*);
typedef unsigned int(*type_101)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_110)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_131)(void*, void*);
typedef RpClump*(*type_134)(RpClump*, void*);
typedef void(*type_151)(xMemPool*, void*);

typedef char type_2[16];
typedef char type_3[12];
typedef unsigned int type_4[15];
typedef unsigned int type_9[15];
typedef unsigned char type_11[2];
typedef RxCluster type_13[1];
typedef float type_14[2];
typedef unsigned int type_17[15];
typedef float type_19[15];
typedef float type_21[15];
typedef char type_22[12];
typedef analog_data type_24[2];
typedef char type_25[64];
typedef unsigned int type_26[15];
typedef char type_27[12];
typedef RwTexCoords* type_28[8];
typedef char type_30[64];
typedef char type_32[16];
typedef char type_33[128];
typedef char type_34[48];
typedef float type_35[4];
typedef char type_38[12];
typedef char type_41[64];
typedef char type_42[16];
typedef char type_44[16];
typedef char type_45[16];
typedef zVarEntry type_46[19];
typedef var_type type_47[39];
typedef RwFrustumPlane type_48[6];
typedef unsigned char type_50[2];
typedef xVec4 type_51[12];
typedef char type_53[12];
typedef unsigned int type_54[2];
typedef unsigned char type_55[2];
typedef RwV3d type_56[8];
typedef float type_57[6];
typedef char type_58[16];
typedef float type_60[3];
typedef float type_61[3];
typedef xVec3 type_62[3];
typedef zVarMagicEntry type_63[23];
typedef xModelTag type_64[2];
typedef float type_65[3];
typedef char type_66[64];
typedef char type_68[12];
typedef char type_69[256];
typedef char type_70[12];
typedef char type_71[32];
typedef char type_73[12];
typedef char type_75[64];
typedef xEnt* type_76[111];
typedef char type_77[32];
typedef unsigned int type_78[72];
typedef unsigned char type_79[2];
typedef float type_80[16];
typedef char type_82[4];
typedef char type_84[12];
typedef xBase* type_86[72];
typedef float type_89[2];
typedef char type_90[32];
typedef xCutsceneZbuffer type_91[4];
typedef char type_92[32];
typedef char type_95[128];
typedef char* type_96[4];
typedef type_95 type_97[6];
typedef unsigned int type_98[2];
typedef char type_100[64];
typedef unsigned int type_102[2];
typedef char* type_103[3];
typedef char type_104[12];
typedef unsigned char type_105[3];
typedef char type_106[32];
typedef unsigned char type_107[14];
typedef xModelTag type_108[4];
typedef unsigned int type_109[2];
typedef char type_111[64];
typedef char type_112[32];
typedef char type_113[32];
typedef char type_114[64];
typedef char type_115[32];
typedef xModelInstance* type_116[14];
typedef unsigned char type_117[3];
typedef unsigned short type_118[3];
typedef char type_119[64];
typedef xVec3 type_120[4];
typedef char type_121[12];
typedef unsigned char type_122[2];
typedef char type_123[12];
typedef unsigned char type_124[4];
typedef xAnimMultiFileEntry type_125[1];
typedef char type_126[256];
typedef char type_127[12];
typedef unsigned int type_128[4];
typedef zSaveLoadGame type_129[0];
typedef float type_130[4];
typedef unsigned char type_132[22];
typedef float type_133[4];
typedef char type_135[64];
typedef unsigned char type_136[22];
typedef RpLight* type_137[2];
typedef char type_138[12];
typedef char type_139[128];
typedef RwFrame* type_140[2];
typedef xCollis type_141[18];
typedef RwTexCoords* type_142[8];
typedef float type_143[5];
typedef char type_144[64];
typedef xSndVoiceInfo type_145[48];
typedef xVec3 type_146[5];
typedef xMat4x3 type_147[2];
typedef char type_148[12];
typedef unsigned char type_149[5];
typedef float type_150[12];
typedef float type_152[12];
typedef xVec3 type_153[60];
typedef float type_154[12];
typedef unsigned short type_155[3];
typedef char type_156[12];
typedef char type_157[32];
typedef char type_158[32];
typedef float type_159[12];
typedef char type_160[32];
typedef char type_161[32];
typedef char type_162[32];
typedef float type_163[12];
typedef float type_164[22];
typedef char* type_165[3];
typedef char type_166[64];
typedef float type_167[12];
typedef char type_168[64];
typedef float type_169[22];
typedef char type_170[64];
typedef char type_171[12];

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_11 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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
	type_42 SoundLeft;
	type_44 SoundRight;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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
	type_31 BeforeEnter;
	type_36 StateCallback;
	type_40 BeforeAnimMatrices;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_35 wt;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_134 callback;
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

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_20 sync;
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

struct xPlatformAsset
{
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
	type_94 resolvID;
	type_99 base2Name;
	type_5 id2Name;
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
	type_98 SndChannelReq;
	type_102 SndAssetID;
	type_109 SndHandle;
	XCSNNosey* cb_nosey;
};

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct RwLinkList
{
	RwLLLink link;
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

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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
	type_108 HangPawTag;
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
	type_4 Inv_PatsSock;
	type_9 Inv_PatsSock_Max;
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
	type_76 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_107 sb_model_indices;
	type_116 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct var_type
{
	substr name;
	type_29 get_text;
};

struct RpTriangle
{
	type_155 vertIndex;
	short matIndex;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_79 pad;
	float delay;
	xSpline3* spl;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_117 pad;
	void* moprops;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_158 name;
	type_160 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_59 activateCB;
	type_59 deactivateCB;
};

struct RwV2d
{
	float x;
	float y;
};

struct zVarMagicEntry
{
	unsigned int varNameID;
	char* varName;
	type_37 varCB;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_125 Files;
};

struct substr
{
	char* text;
	unsigned int size;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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
	type_51 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_57 MoveSpeed;
	type_60 AnimSneak;
	type_61 AnimWalk;
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
	type_124 talk_filter;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_105 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_74 update;
	type_74 endUpdate;
	type_83 bupdate;
	type_87 move;
	type_88 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_110 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xVec2
{
	float x;
	float y;
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

struct xCutsceneBreak
{
	float Time;
	int Index;
};

struct xVec3
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_15 beginUpdate;
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
	type_48 frustumPlanes;
	RwBBox frustumBoundBox;
	type_56 frustumCorners;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_142 texCoords;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_150 tmrs;
	type_152 ttms;
	type_154 atms;
	type_159 dtms;
	type_163 vms;
	type_167 dss;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_131 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct jot
{
	substr s;
	_class_3 flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct xQuat
{
	xVec3 v;
	float s;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_43 renderCallBack;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_128 pad;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_137 light;
	type_140 light_frame;
	int memlvl;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_6 Conditional;
	type_6 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xShadowSimplePoly
{
	type_62 vert;
	xVec3 norm;
};

struct iSndInfo
{
	unsigned int flags;
	iSndVol vol;
	unsigned int pitch;
	int lastStreamBuffer;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
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

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct callback
{
	type_67 render;
	type_72 layout_update;
	type_72 render_update;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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

struct tag_type
{
	substr name;
	type_93 parse_tag;
	type_93 reset_tag;
	void* context;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct rxReq
{
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

struct xSndVoiceInfo
{
	unsigned int assetID;
	unsigned int sndID;
	unsigned int parentID;
	xVec3* parentPos;
	int internalID;
	unsigned int flags;
	unsigned short pad;
	unsigned short priority;
	float vol;
	float pitch;
	unsigned int sample_rate;
	unsigned int deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float innerRadius2;
	float outerRadius2;
	unsigned int lock_owner;
	iSndInfo ps;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
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
	type_122 NumAnims;
	void** RawData;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_80 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct _class_1
{
	xVec3* verts;
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
	type_112 sceneStart;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_89 BilinearLerp;
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

struct zEntHangable
{
};

struct xJSPHeader
{
	type_82 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_120 corner;
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
	type_141 colls;
	type_81 post;
	type_101 depenq;
};

struct _tagxPad
{
	type_132 value;
	type_136 last_value;
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
	type_164 up_tmr;
	type_169 down_tmr;
	type_24 analog;
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

struct xCutsceneZbufferHack
{
	char* name;
	type_91 times;
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

struct xEntMotionSplineData
{
	int unknown;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_85 Callback;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zSaveLoadGame
{
	type_100 label;
	type_106 date;
	int progress;
	unsigned int size;
	char thumbIconIndex;
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
	type_78 baseCount;
	type_86 baseList;
	_zEnv* zen;
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

struct _class_2
{
	float t;
	float u;
	float v;
};

struct _tagiPad
{
	int port;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_118 vertIndex;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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
	type_40 BeforeAnimMatrices;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_133 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xFFX
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
	tri_data_1 tri;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_19 startTime;
	type_21 endTime;
	type_26 emitID;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_14 radius;
};

struct zCutsceneMgr : xCutsceneMgr
{
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
	type_28 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xCoef
{
	type_130 a;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct anim_coll_data
{
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zAssetPickupTable
{
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct iSndVol
{
	short volL;
	short volR;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct tag_iFile
{
	unsigned int flags;
	type_139 path;
	int fd;
	int offset;
	int length;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xSndGlobals
{
	unsigned int stereo;
	unsigned int SndCount;
	type_143 categoryVolFader;
	type_145 voice;
	type_147 listenerMat;
	sound_listener_game_mode listenerMode;
	unsigned int suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
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
	type_50 PowerUp;
	type_55 InitialPowerUp;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct tag_xFile
{
	type_157 relname;
	tag_iFile ps;
	void* user_data;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_151 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_153 tranTable;
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

struct RxNodeMethods
{
	type_52 nodeBody;
	type_1 nodeInit;
	type_7 nodeTerm;
	type_16 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_39 pipelineNodeConfig;
	type_49 configMsgHandler;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
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
	type_146 lastRefs;
	type_149 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
};

struct _class_3
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

struct xEntSplineData
{
	int unknown;
};

struct zVarEntry
{
	unsigned int entry;
	unsigned int varNameID;
	char* varName;
	type_8 varCB;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_45 buffer;
type_58 buffer;
int bad_card_available;
int bad_card_needed;
unsigned int selSceneID;
type_47 vars;
type_46 zVarEntryTable;
type_63 sVarMagicEntryTrable;
int sVarMagicInit;
zGlobals globals;
xSndGlobals gSnd;
_CurrentPlayer gCurrentPlayer;
type_129 zSaveLoadGameTable;

unsigned int zVarEntryCB_IsVisible(void* context);
unsigned int zVarEntryCB_IsEnabled(void* context);
unsigned int zVarEntryCB_CounterValue(void* context);
unsigned int zVarEntryCB_Minute();
unsigned int zVarEntryCB_Hour();
unsigned int zVarEntryCB_Date();
unsigned int zVarEntryCB_Spatulas();
unsigned int zVarEntryCB_Shinies();
unsigned int zVarEntryCB_TotalPSocks();
unsigned int zVarEntryCB_CurrentLevelPSocks();
unsigned int zVarEntryCB_CurrentLevelPickup();
unsigned int zVarEntryCB_CurrentRoom();
unsigned int zVarEntryCB_CurrentSceneLetter();
unsigned int zVarEntryCB_VibrationOn();
unsigned int zVarEntryCB_MCAvailable();
unsigned int zVarEntryCB_SndFXVol();
unsigned int zVarEntryCB_SndMusicVol();
unsigned int zVarEntryCB_SndMode();
void zVarNewGame();
void zVarInit(zVarEntry* table);
void var_init();
void parse_tag_var(jot& j, split_tag& ti);
var_type* find_var(substr& s);
char* var_text_MCName();
char* var_text_TotalPatsSocks();
char* var_text_SpaceNeeded();
char* var_text_SpaceAvailableString();
char* var_text_SpaceAvailable();
char* var_text_SoundMusicVolume();
char* var_text_SoundFXVolume();
char* var_text_ShinyCountText();
char* var_text_ShinyCount();
char* var_text_SelectedArea();
char* var_text_PlayerPosition();
char* var_text_PlayerName();
char* var_text_PlayerHeShe();
char* var_text_MCSelectedGame();
char* var_text_MCSelectedCard();
char* var_text_MCPS2MinSpace();
char* var_text_MCPS2MaxSpace();
char* var_text_MCAutoSaveCard();
char* var_text_MCAccessType();
char* var_text_GameSlot7();
char* var_text_GameSlot6();
char* var_text_GameSlot5();
char* var_text_GameSlot4();
char* var_text_GameSlot3();
char* var_text_GameSlot2();
char* var_text_GameSlot1();
char* var_text_GameSlot0();
char* zVarGameSlotInfo(int i, char* buffer);
char* var_text_CurrentTime();
char* var_text_CurrentScene();
char* var_text_CurrentLevelPatsSocks();
char* var_text_CurrentLevelCollectable();
char* var_text_CurrentDate();
char* var_text_CurrentArea();
char* var_text_CorruptFileName();
char* var_text_BadCardNeeded();
char* var_text_BadCardAvailable();
char* var_text_BadCard();
char* var_text_ActivePad();

// zVarEntryCB_IsVisible__FPv
// Start address: 0x1a2800
unsigned int zVarEntryCB_IsVisible(void* context)
{
}

// zVarEntryCB_IsEnabled__FPv
// Start address: 0x1a2820
unsigned int zVarEntryCB_IsEnabled(void* context)
{
}

// zVarEntryCB_CounterValue__FPv
// Start address: 0x1a2830
unsigned int zVarEntryCB_CounterValue(void* context)
{
}

// zVarEntryCB_Minute__FPv
// Start address: 0x1a2840
unsigned int zVarEntryCB_Minute()
{
	unsigned int minute;
}

// zVarEntryCB_Hour__FPv
// Start address: 0x1a2860
unsigned int zVarEntryCB_Hour()
{
	unsigned int hour;
}

// zVarEntryCB_Date__FPv
// Start address: 0x1a2880
unsigned int zVarEntryCB_Date()
{
	unsigned int date;
}

// zVarEntryCB_Spatulas__FPv
// Start address: 0x1a28d0
unsigned int zVarEntryCB_Spatulas()
{
}

// zVarEntryCB_Shinies__FPv
// Start address: 0x1a28e0
unsigned int zVarEntryCB_Shinies()
{
}

// zVarEntryCB_TotalPSocks__FPv
// Start address: 0x1a28f0
unsigned int zVarEntryCB_TotalPSocks()
{
}

// zVarEntryCB_CurrentLevelPSocks__FPv
// Start address: 0x1a2900
unsigned int zVarEntryCB_CurrentLevelPSocks()
{
}

// zVarEntryCB_CurrentLevelPickup__FPv
// Start address: 0x1a2910
unsigned int zVarEntryCB_CurrentLevelPickup()
{
}

// zVarEntryCB_CurrentRoom__FPv
// Start address: 0x1a2920
unsigned int zVarEntryCB_CurrentRoom()
{
	int room;
	type_2 s;
}

// zVarEntryCB_CurrentSceneLetter__FPv
// Start address: 0x1a29d0
unsigned int zVarEntryCB_CurrentSceneLetter()
{
	type_32 s;
}

// zVarEntryCB_VibrationOn__FPv
// Start address: 0x1a2a40
unsigned int zVarEntryCB_VibrationOn()
{
}

// zVarEntryCB_MCAvailable__FPv
// Start address: 0x1a2a50
unsigned int zVarEntryCB_MCAvailable()
{
}

// zVarEntryCB_SndFXVol__FPv
// Start address: 0x1a2b10
unsigned int zVarEntryCB_SndFXVol()
{
	double floatVol;
}

// zVarEntryCB_SndMusicVol__FPv
// Start address: 0x1a2b60
unsigned int zVarEntryCB_SndMusicVol()
{
	double floatVol;
}

// zVarEntryCB_SndMode__FPv
// Start address: 0x1a2bb0
unsigned int zVarEntryCB_SndMode()
{
}

// zVarNewGame__Fv
// Start address: 0x1a2bc0
void zVarNewGame()
{
}

// zVarInit__FP9zVarEntry
// Start address: 0x1a2bd0
void zVarInit(zVarEntry* table)
{
	int i;
}

// var_init__Fv
// Start address: 0x1a2c20
void var_init()
{
	tag_type var_tag;
}

// parse_tag_var__18@unnamed@zVar_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1a2c30
void parse_tag_var(jot& j, split_tag& ti)
{
}

// find_var__18@unnamed@zVar_cpp@FRC6substr
// Start address: 0x1a2d10
var_type* find_var(substr& s)
{
	unsigned int start;
	unsigned int end;
	unsigned int i;
	var_type& t;
	int c;
}

// var_text_MCName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2dc0
char* var_text_MCName()
{
	type_90 buffer;
}

// var_text_TotalPatsSocks__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2e60
char* var_text_TotalPatsSocks()
{
	type_3 buffer;
}

// var_text_SpaceNeeded__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2ea0
char* var_text_SpaceNeeded()
{
	type_104 buffer;
}

// var_text_SpaceAvailableString__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2ee0
char* var_text_SpaceAvailableString()
{
	type_113 spaceStr;
	int spaceAvailable;
	type_119 buffer;
}

// var_text_SpaceAvailable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2f60
char* var_text_SpaceAvailable()
{
	type_22 buffer;
}

// var_text_SoundMusicVolume__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a2fa0
char* var_text_SoundMusicVolume()
{
	type_121 buffer;
}

// var_text_SoundFXVolume__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3010
char* var_text_SoundFXVolume()
{
	type_27 buffer;
}

// var_text_ShinyCountText__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3080
char* var_text_ShinyCountText()
{
	type_30 buffer;
}

// var_text_ShinyCount__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3110
char* var_text_ShinyCount()
{
	type_127 buffer;
}

// var_text_SelectedArea__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3150
char* var_text_SelectedArea()
{
}

// var_text_PlayerPosition__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3160
char* var_text_PlayerPosition()
{
	xVec3& v;
	type_34 buffer;
}

// var_text_PlayerName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a31c0
char* var_text_PlayerName()
{
	type_103 text;
}

// var_text_PlayerHeShe__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a31e0
char* var_text_PlayerHeShe()
{
	type_165 text;
}

// var_text_MCSelectedGame__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3200
char* var_text_MCSelectedGame()
{
	type_84 buffer;
}

// var_text_MCSelectedCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3240
char* var_text_MCSelectedCard()
{
	type_171 buffer;
}

// var_text_MCPS2MinSpace__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3280
char* var_text_MCPS2MinSpace()
{
	type_68 buffer;
}

// var_text_MCPS2MaxSpace__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a32c0
char* var_text_MCPS2MaxSpace()
{
	type_138 buffer;
}

// var_text_MCAutoSaveCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3300
char* var_text_MCAutoSaveCard()
{
	type_53 buffer;
}

// var_text_MCAccessType__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3340
char* var_text_MCAccessType()
{
	int i;
	type_96 state_text;
}

// var_text_GameSlot7__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3370
char* var_text_GameSlot7()
{
	type_25 buffer;
}

// var_text_GameSlot6__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3390
char* var_text_GameSlot6()
{
	type_135 buffer;
}

// var_text_GameSlot5__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33b0
char* var_text_GameSlot5()
{
	type_66 buffer;
}

// var_text_GameSlot4__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33d0
char* var_text_GameSlot4()
{
	type_168 buffer;
}

// var_text_GameSlot3__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a33f0
char* var_text_GameSlot3()
{
	type_114 buffer;
}

// var_text_GameSlot2__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3410
char* var_text_GameSlot2()
{
	type_41 buffer;
}

// var_text_GameSlot1__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3430
char* var_text_GameSlot1()
{
	type_144 buffer;
}

// var_text_GameSlot0__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3450
char* var_text_GameSlot0()
{
	type_75 buffer;
}

// zVarGameSlotInfo__18@unnamed@zVar_cpp@FiPcUi
// Start address: 0x1a3470
char* zVarGameSlotInfo(int i, char* buffer)
{
	type_77 date;
	type_92 time;
	int hour;
	type_115 ampm;
	type_126 biggerbuf;
}

// var_text_CurrentTime__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3700
char* var_text_CurrentTime()
{
	type_162 buffer;
}

// var_text_CurrentScene__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3730
char* var_text_CurrentScene()
{
	type_71 buffer;
}

// var_text_CurrentLevelPatsSocks__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3780
char* var_text_CurrentLevelPatsSocks()
{
	type_156 buffer;
}

// var_text_CurrentLevelCollectable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a37c0
char* var_text_CurrentLevelCollectable()
{
	type_73 buffer;
}

// var_text_CurrentDate__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3800
char* var_text_CurrentDate()
{
	type_161 buffer;
}

// var_text_CurrentArea__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3830
char* var_text_CurrentArea()
{
}

// var_text_CorruptFileName__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3840
char* var_text_CorruptFileName()
{
	type_33 buffer;
}

// var_text_BadCardNeeded__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3870
char* var_text_BadCardNeeded()
{
	type_123 buffer;
}

// var_text_BadCardAvailable__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a38b0
char* var_text_BadCardAvailable()
{
	type_38 buffer;
}

// var_text_BadCard__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a38f0
char* var_text_BadCard()
{
	int card;
	type_70 buffer;
}

// var_text_ActivePad__18@unnamed@zVar_cpp@Fv
// Start address: 0x1a3960
char* var_text_ActivePad()
{
	type_148 buffer;
}

