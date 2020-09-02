typedef struct RpClump;
typedef struct tri_data_0;
typedef struct xAnimTransition;
typedef struct RwTexture;
typedef struct xFXRibbon;
typedef struct xPEEntBound;
typedef struct RpAtomic;
typedef struct RwV3d;
typedef struct config;
typedef struct xBase;
typedef struct xAnimSingle;
typedef struct zSurfUVFX;
typedef struct RxHeap;
typedef struct RpGeometry;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpSkin;
typedef struct xFXStreak;
typedef struct RxPipelineNode;
typedef struct RpMaterial;
typedef struct RpVertexNormal;
typedef struct RxObjSpace3DVertex;
typedef struct block_data;
typedef struct _tagEmitLine;
typedef struct xQuat;
typedef struct xClumpCollBSPBranchNode;
typedef struct curve_node;
typedef struct _class_0;
typedef struct RwTexCoords;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct _tagxPad;
typedef struct xFXBubbleParams;
typedef struct zPlayerGlobals;
typedef struct zSurfaceProps;
typedef struct zCheckPoint;
typedef struct RpMeshHeader;
typedef struct RwFrame;
typedef struct xJSPHeader;
typedef struct RwResEntry;
typedef struct xModelInstance;
typedef struct RxPipelineRequiresCluster;
typedef struct zSurfAssetBase;
typedef struct xAnimPlay;
typedef struct _tagFirework;
typedef struct xAnimEffect;
typedef struct xVec3;
typedef struct xLinkAsset;
typedef struct _tagxRumble;
typedef struct zPlayerCarryInfo;
typedef struct joint_data;
typedef struct xSurface;
typedef struct _xFXAuraAngle;
typedef enum RpMatFXMaterialFlags;
typedef struct RxPipeline;
typedef struct xFXShine;
typedef struct xModelPool;
typedef struct RpLight;
typedef struct xFXRing;
typedef struct xEnt;
typedef struct RpTriangle;
typedef struct zPlayerSettings;
typedef struct xEntFrame;
typedef struct xGroup;
typedef struct _zPortal;
typedef struct xAnimState;
typedef struct zParEmitter;
typedef struct xParEmitter;
typedef struct zEnt;
typedef struct xUpdateCullEnt;
typedef struct xClumpCollBSPTree;
typedef struct xVec4;
typedef struct RpWorld;
typedef struct _tagEmitVolume;
typedef struct RwRaster;
typedef struct xGroupAsset;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xPortalAsset;
typedef struct xJSPNodeInfo;
typedef struct xParEmitterAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xVec2;
typedef struct rxReq;
typedef struct zSurfMatFX;
typedef struct xParGroup;
typedef struct vert_data;
typedef struct xAnimTable;
typedef struct tier_queue_allocator;
typedef struct xShadowSimplePoly;
typedef struct xParEmitterPropsAsset;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xMemPool;
typedef struct RpWorldSector;
typedef struct tier_queue;
typedef struct zScene;
typedef struct _xFXAura;
typedef struct xFXShineElem;
typedef struct xEnv;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct iEnv;
typedef enum RxClusterValid;
typedef struct _tagEmitOffsetPoint;
typedef struct xFXStreakElem;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xAnimFile;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef enum RpWorldRenderOrder;
typedef struct xScene;
typedef struct xShadowSimpleCache;
typedef struct iterator;
typedef struct iColor_tag;
typedef struct xEntCollis;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xAnimTransitionList;
typedef struct xBBox;
typedef struct xModelBucket;
typedef enum RwCameraProjection;
typedef struct analog_data;
typedef enum RxClusterForcePresent;
typedef struct xEntBoulder;
typedef struct xCylinder;
typedef struct RpSector;
typedef struct xPEVCyl;
typedef struct xBound;
typedef union RxColorUnion;
typedef struct zEntHangable;
typedef struct xParSys;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xCollis;
typedef struct xParInterp;
typedef struct RpMorphTarget;
typedef struct zJumpParam;
typedef struct xModelTag;
typedef struct RwV2d;
typedef struct xFFX;
typedef struct xQCData;
typedef struct xUpdateCullMgr;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xGridBound;
typedef struct RwTexDictionary;
typedef struct zPlatform;
typedef struct xPEEntBone;
typedef struct RxOutputSpec;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xEntShadow;
typedef struct xMat3x3;
typedef struct zCutsceneMgr;
typedef struct RxClusterRef;
typedef struct zSurfTextureAnim;
typedef struct anim_coll_data;
typedef struct RwCamera;
typedef struct xEnvAsset;
typedef struct RwObject;
typedef struct zAssetPickupTable;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPVertInfo;
typedef struct xPECircle;
typedef struct _class_1;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct tagiRenderInput;
typedef struct xEntDrive;
typedef struct xClumpCollBSPTriangle;
typedef struct iFogParams;
typedef struct zSurfacePropTexAnim;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct xAnimMultiFileEntry;
typedef struct zGlobals;
typedef struct xAnimActiveEffect;
typedef struct RpInterpolator;
typedef struct RxCluster;
typedef struct zGlobalSettings;
typedef struct RxPipelineNodeParam;
typedef enum _tagPadState;
typedef struct _tagEmitSphere;
typedef struct RxPacket;
typedef struct zPlayerLassoInfo;
typedef struct xGlobals;
typedef struct zLasso;
typedef enum RwFogType;
typedef struct RpPolygon;
typedef union _class_2;
typedef struct zLedgeGrabParams;
typedef struct RwRGBAReal;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct zSurfacePropUVFX;
typedef struct zSurfColorFX;
typedef struct xAnimMultiFileBase;
typedef struct RwLinkList;
typedef enum RwCullMode;
typedef enum _zPlayerWallJumpState;
typedef struct tri_data_1;
typedef struct _tagEmitRect;
typedef struct _tagPadAnalog;
typedef struct tri_data_2;
typedef struct xParEmitterCustomSettings;
typedef struct _tagiPad;
typedef enum _zPlayerType;

typedef int(*type_0)(void*, void*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_8)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_11)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpClump*(*type_13)(RpClump*, void*);
typedef int(*type_14)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_15)(void*, void*);
typedef int(*type_20)(RxNodeDefinition*);
typedef RpMaterial*(*type_21)(RpMaterial*, void*);
typedef void(*type_23)(void*);
typedef void(*type_24)(RxNodeDefinition*);
typedef int(*type_28)(RxPipelineNode*);
typedef void(*type_30)(xAnimPlay*, xAnimState*);
typedef void(*type_32)(RxPipelineNode*);
typedef RpMaterial*(*type_33)(RpMaterial*, void*);
typedef RpMaterial*(*type_34)(RpMaterial*, void*);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef unsigned int(*type_36)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_37)(RxPipelineNode*, RxPipeline*);
typedef void(*type_40)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_51)(unsigned int);
typedef void(*type_54)(xEnt*, xScene*, float);
typedef char*(*type_56)(xBase*);
typedef RpMaterial*(*type_63)(RpMaterial*, void*);
typedef char*(*type_64)(unsigned int);
typedef void(*type_67)(xEnt*, xVec3*);
typedef void(*type_72)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_74)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_75)(xEnt*);
typedef RpAtomic*(*type_76)(RpAtomic*);
typedef RpAtomic*(*type_77)(RpAtomic*);
typedef unsigned int(*type_78)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_87)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_89)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_91)(RpWorldSector*);
typedef RpAtomic*(*type_105)(RpAtomic*, void*);
typedef RpMaterial*(*type_109)(RpMaterial*, void*);
typedef RwCamera*(*type_112)(RwCamera*);
typedef RwCamera*(*type_118)(RwCamera*);
typedef RpAtomic*(*type_119)(RpAtomic*, void*);
typedef void(*type_122)(xMemPool*, void*);
typedef void(*type_128)(RwResEntry*);
typedef RpMaterial*(*type_136)(RpMaterial*, void*);
typedef RwObjectHasFrame*(*type_142)(RwObjectHasFrame*);
typedef RpMaterial*(*type_149)(RpMaterial*, void*);

typedef xAnimMultiFileEntry type_1[1];
typedef unsigned int type_2[15];
typedef vert_data type_3[3];
typedef char type_5[16];
typedef unsigned int type_6[15];
typedef RwTexCoords* type_7[8];
typedef RwFrustumPlane type_9[6];
typedef _xFXAura type_10[32];
typedef unsigned int type_12[15];
typedef xFXRibbon* type_16[64];
typedef RwV3d type_17[8];
typedef char type_18[4];
typedef unsigned char type_19[22];
typedef float type_22[2];
typedef unsigned char type_25[22];
typedef zSurfacePropTexAnim type_26[2];
typedef unsigned char type_27[300];
typedef zSurfacePropUVFX type_29[2];
typedef unsigned short type_31[3];
typedef unsigned int type_38[11];
typedef float type_39[2];
typedef xVec3 type_41[5];
typedef xVec3 type_42[3];
typedef unsigned char type_43[43];
typedef _tagFirework type_44[10];
typedef unsigned char type_45[5];
typedef unsigned char type_46[2];
typedef unsigned int type_47[2];
typedef unsigned char type_48[2];
typedef float type_49[6];
typedef _xFXAuraAngle type_50[2];
typedef float type_52[3];
typedef char* type_53[11];
typedef unsigned char type_55[3];
typedef RxObjSpace3DVertex type_57[4];
typedef float type_58[3];
typedef float type_59[22];
typedef float type_60[2];
typedef xVec3 type_61[2];
typedef unsigned char type_62[3];
typedef xModelTag type_65[2];
typedef xFXBubbleParams type_66[1];
typedef float type_68[3];
typedef float type_69[22];
typedef float type_70[16];
typedef RxObjSpace3DVertex type_71[384];
typedef unsigned char type_73[3];
typedef RwTexCoords* type_79[8];
typedef RpLight* type_80[2];
typedef float type_81[2];
typedef RwFrame* type_82[2];
typedef xEnt* type_83[111];
typedef tri_data_0 type_84[3];
typedef type_84 type_85[2];
typedef zSurfTextureAnim type_86[2];
typedef float type_88[2];
typedef float type_90[2];
typedef unsigned char type_92[256];
typedef zSurfUVFX type_93[2];
typedef unsigned int type_94[4];
typedef unsigned int type_95[72];
typedef analog_data type_96[2];
typedef unsigned char type_97[3];
typedef xBase* type_98[72];
typedef xVec3 type_99[4];
typedef unsigned char type_100[300];
typedef unsigned char type_101[14];
typedef float type_102[2];
typedef xModelTag type_103[4];
typedef float type_104[2];
typedef unsigned short type_106[3];
typedef unsigned int type_107[4096];
typedef xModelInstance* type_108[14];
typedef xFXStreakElem type_110[50];
typedef float type_111[4];
typedef xFXRing type_113[8];
typedef unsigned char type_114[4];
typedef xFXShineElem type_115[100];
typedef RxObjSpace3DVertex type_116[4];
typedef xFXStreak type_117[10];
typedef xCollis type_120[18];
typedef xVec4 type_121[12];
typedef unsigned char type_123[3];
typedef xFXShine type_124[2];
typedef char type_125[32];
typedef char type_126[32];
typedef xParInterp type_127[1];
typedef float type_129[2];
typedef float type_130[2];
typedef unsigned short type_131[3];
typedef float type_132[4];
typedef RxCluster type_133[1];
typedef float type_134[2];
typedef xVec3 type_135[60];
typedef xParInterp type_137[4];
typedef float type_138[2];
typedef char type_139[128];
typedef float type_140[2];
typedef type_139 type_141[6];
typedef float type_143[2];
typedef xParInterp type_144[4];
typedef float type_145[2];
typedef char type_146[16];
typedef char type_147[32];
typedef float type_148[2];
typedef unsigned char type_150[3];
typedef unsigned char type_151[2];

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_13 callback;
};

struct tri_data_0
{
	type_3 vert;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_78 Conditional;
	type_78 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_125 name;
	type_126 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xFXRibbon
{
	config cfg;
	unsigned char activated;
	RwRaster* raster;
	tier_queue joints;
	curve_node* curve;
	unsigned int curve_size;
	unsigned int curve_index;
	float ilife;
	unsigned int mtime;
	unsigned int mlife;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_35 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct config
{
	float life_time;
	unsigned int blend_src;
	unsigned int blend_dst;
	float pivot;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_8 eventFunc;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_138 BilinearLerp;
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
	type_79 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpSkin
{
};

struct xFXStreak
{
	unsigned int flags;
	float frequency;
	float alphaFadeRate;
	float alphaStart;
	float elapsed;
	float lifetime;
	unsigned int head;
	iColor_tag color_a;
	iColor_tag color_b;
	RwTexture* texturePtr;
	RwRaster* textureRasterPtr;
	type_110 elem;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
};

struct block_data
{
	unsigned char prev;
	unsigned char next;
	unsigned short flags;
	void* data;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct curve_node
{
	float time;
	iColor_tag color;
	float scale;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_94 pad;
};

struct _tagxPad
{
	type_19 value;
	type_25 last_value;
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
	type_59 up_tmr;
	type_69 down_tmr;
	type_96 analog;
};

struct xFXBubbleParams
{
	union
	{
		unsigned int pass1;
		unsigned int pass2;
		unsigned int pass3;
		unsigned int padding;
	};
	unsigned char pass1_alpha;
	unsigned char pass2_alpha;
	unsigned char pass3_alpha;
	unsigned int pass1_fbmsk;
	unsigned int fresnel_map;
	float fresnel_map_coeff;
	unsigned int env_map;
	float env_map_coeff;
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
	type_65 BubbleWandTag;
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
	type_103 HangPawTag;
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
	type_2 Inv_PatsSock;
	type_6 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_12 Inv_LevelPickups;
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
	type_47 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_83 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_101 sb_model_indices;
	type_108 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	unsigned int texanim_flags;
	type_26 texanim;
	unsigned int uvfx_flags;
	type_29 uvfx;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct xJSPHeader
{
	type_18 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_128 destroyNotify;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_86 texture_anim;
	unsigned int uvfx_flags;
	type_93 uvfx;
	unsigned char on;
	type_97 surf_pad;
	float oob_delay;
	float walljump_scale_xz;
	float walljump_scale_y;
	float damage_timer;
	float damage_bounce;
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

struct _tagFirework
{
	int state;
	float timer;
	xVec3 vel;
	xVec3 pos;
	float fuel;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_36 Callback;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_132 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct joint_data
{
	unsigned int flags;
	unsigned int born;
	xVec3 loc;
	xVec3 norm;
	float orient;
	float scale;
	float alpha;
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
	type_73 pad;
	void* moprops;
};

struct _xFXAuraAngle
{
	float angle;
	float cc;
	float ss;
};

enum RpMatFXMaterialFlags
{
	rpMATFXEFFECTNULL,
	rpMATFXEFFECTBUMPMAP,
	rpMATFXEFFECTENVMAP,
	rpMATFXEFFECTBUMPENVMAP,
	rpMATFXEFFECTDUAL,
	rpMATFXEFFECTUVTRANSFORM,
	rpMATFXEFFECTDUALUVTRANSFORM,
	rpMATFXEFFECTMAX,
	rpMATFXNUMEFFECTS = 0x6,
	rpMATFXFORCEENUMSIZEINT = 0x7fffffff
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

struct xFXShine
{
	unsigned int flags;
	xVec3* ppos;
	xVec3 pos;
	float spd;
	float width;
	float frequency;
	float elapsed;
	float lifetimeElemMax;
	float lifetimeMax;
	float lifetime;
	float rotateSpeed;
	float rotateZ;
	iColor_tag color_a;
	iColor_tag color_b;
	RwTexture* texturePtr;
	RwRaster* textureRasterPtr;
	type_115 elem;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xFXRing
{
	unsigned int texture;
	float lifetime;
	xVec3 pos;
	float time;
	float ring_radius;
	float ring_radius_delta;
	float ring_tilt;
	float ring_tilt_delta;
	float ring_height;
	float ring_height_delta;
	iColor_tag ring_color;
	unsigned short ring_segs;
	unsigned char u_repeat;
	unsigned char v_repeat;
	xFXRing** parent;
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
	type_54 update;
	type_54 endUpdate;
	type_67 bupdate;
	type_74 move;
	type_75 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_89 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RpTriangle
{
	type_31 vertIndex;
	short matIndex;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_49 MoveSpeed;
	type_52 AnimSneak;
	type_58 AnimWalk;
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
	type_114 talk_filter;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_30 BeforeEnter;
	type_4 StateCallback;
	type_40 BeforeAnimMatrices;
};

struct zParEmitter : xParEmitter
{
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
	type_55 emit_pad;
	type_62 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_15 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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
	type_91 renderCallBack;
	RxPipeline* pipeline;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xVec2
{
	float x;
	float y;
};

struct rxReq
{
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

struct xParGroup
{
};

struct vert_data
{
	xVec3 loc;
	xVec3 norm;
	RwRGBA color;
	RwTexCoords uv;
	float depth;
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

struct tier_queue_allocator
{
	block_data* blocks;
	unsigned int _unit_size;
	unsigned int _block_size;
	unsigned int _block_size_shift;
	unsigned int _max_blocks;
	unsigned int _max_blocks_shift;
	unsigned char head;
};

struct xShadowSimplePoly
{
	type_42 vert;
	xVec3 norm;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_127 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_137 color_birth;
	type_144 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_122 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_7 texCoords;
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

struct tier_queue
{
	unsigned int first;
	unsigned int _size;
	unsigned int wrap_mask;
	tier_queue_allocator* alloc;
	type_92 blocks;
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
	type_95 baseCount;
	type_98 baseList;
	_zEnv* zen;
};

struct _xFXAura
{
	xVec3 pos;
	iColor_tag color;
	float size;
	void* parent;
	unsigned int frame;
	type_60 dangle;
};

struct xFXShineElem
{
	unsigned int flag;
	xVec3 p;
	xVec3 vel;
	float lifetime;
	float a;
	iColor_tag cola;
	iColor_tag colb;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_80 light;
	type_82 light_frame;
	int memlvl;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xFXStreakElem
{
	unsigned int flag;
	type_61 p;
	float a;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_151 NumAnims;
	void** RawData;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_56 base2Name;
	type_64 id2Name;
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
	type_99 corner;
};

struct iterator
{
	unsigned int it;
	tier_queue* owner;
};

struct iColor_tag
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
	type_120 colls;
	type_72 post;
	type_87 depenq;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntBoulder
{
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct RpSector
{
	int type;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_123 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct zEntHangable
{
};

struct xParSys
{
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
		tri_data_2 tri;
	};
};

struct xParInterp
{
	type_90 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_111 wt;
};

struct RwV2d
{
	float x;
	float y;
};

struct xFFX
{
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
	type_23 activateCB;
	type_23 deactivateCB;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_1 Files;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zPlatform
{
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_121 frustplane;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_148 radius;
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

struct zCutsceneMgr
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct zSurfTextureAnim
{
	unsigned short pad;
	unsigned short mode;
	unsigned int group;
	float speed;
};

struct anim_coll_data
{
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_112 beginUpdate;
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
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
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

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct zAssetPickupTable
{
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct _class_1
{
	xVec3* verts;
};

struct RxNodeMethods
{
	type_14 nodeBody;
	type_20 nodeInit;
	type_24 nodeTerm;
	type_28 pipelineNodeInit;
	type_32 pipelineNodeTerm;
	type_37 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct tagiRenderInput
{
	unsigned short* m_index;
	RxObjSpace3DVertex* m_vertex;
	float* m_vertexTZ;
	unsigned int m_mode;
	int m_vertexType;
	int m_vertexTypeSize;
	int m_indexCount;
	int m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct zSurfacePropTexAnim
{
	unsigned short mode;
	float speed;
	float frame;
	unsigned int group;
	int group_idx;
	xBase* group_ptr;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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
	type_46 PowerUp;
	type_48 InitialPowerUp;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _tagEmitSphere
{
	float radius;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_133 clusters;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_141 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_147 sceneStart;
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
	type_41 lastRefs;
	type_45 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpPolygon
{
	unsigned short matIndex;
	type_131 vertIndex;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_135 tranTable;
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_142 sync;
};

struct zSurfacePropUVFX
{
	int mode;
	float rot;
	float rot_spd;
	type_143 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct zSurfColorFX
{
	unsigned short flags;
	unsigned short mode;
	float speed;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RwCullMode
{
	rwCULLMODENACULLMODE,
	rwCULLMODECULLNONE,
	rwCULLMODECULLBACK,
	rwCULLMODECULLFRONT,
	rwCULLMODEFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct tri_data_1 : tri_data_2
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct tri_data_2
{
	unsigned int index;
	float r;
	float d;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_150 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct _tagiPad
{
	int port;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

type_146 buffer;
type_5 buffer;
type_35 gAtomicRenderCallBack;
float EnvMapShininess;
float BumpMapBumpiness;
RpLight* MainLight;
unsigned int xfx_initted;
type_113 ringlist;
RxObjSpace3DVertex* Im3DBuffer;
unsigned int Im3DBufferPos;
RwTexture* g_txtr_drawRing;
type_66 defaultBFX;
unsigned int bfx_curr;
unsigned int bfx_max;
xFXBubbleParams* BFX;
unsigned int sFresnelMap;
unsigned int sEnvMap;
int sTweaked;
RxPipeline* xFXanimUVPipeline;
type_134 xFXanimUVRotMat0;
type_39 xFXanimUVRotMat1;
type_104 xFXanimUVTrans;
type_140 xFXanimUVScale;
type_129 xFXanimUV2PRotMat0;
type_22 xFXanimUV2PRotMat1;
type_88 xFXanimUV2PTrans;
type_130 xFXanimUV2PScale;
RwTexture* xFXanimUV2PTexture;
RxPipeline* xFXgooPipeline;
type_27 alpha_count0;
type_100 alpha_count1;
type_43 segments;
type_44 sFirework;
zParEmitter* sFireworkTrailEmit;
zParEmitter* sFirework1Emit;
zParEmitter* sFirework2Emit;
unsigned int sFireworkSoundID;
unsigned int sFireworkLaunchSoundID;
type_117 sStreakList;
type_124 sShineList;
type_16 active_ribbons;
unsigned int active_ribbons_size;
unsigned char ribbons_dirty;
type_53 blend_mode_labels;
type_38 blend_mode_values;
unsigned int blend_modes;
tier_queue_allocator joint_alloc;
type_102 sAuraPulse;
type_145 sAuraPulseAng;
type_50 sAuraAngle;
RwTexture* gAuraTex;
type_10 sAura;
unsigned int gFrameCount;
type_107 ourGlobals;
type_0 compare_ribbons;
unsigned int gActiveHeap;
tagiRenderInput gRenderBuffer;
zGlobals globals;
type_105 AtomicResetMaterialEffects;
type_34 MaterialResetEffects;
unsigned int gFXSurfaceFlags;
type_21 MaterialSetBumpMap;
type_149 MaterialSetBumpiness;
type_63 MaterialSetShininess;
type_33 MaterialSetEnvMap2;
type_136 MatUpdateFrame;
type_109 MaterialDisableMatFX;
type_119 PreAllocMatFX_cb;
type_76 AtomicDefaultRenderCallBack;
type_77 xFXBubbleRender;

void xFXSceneFinish();
void xFXScenePrepare();
void xFXSceneReset();
void xFXSceneSetup();
void xFXSceneInit();
void xFXShutdown();
void xFXStartup();
void xFXAuraRender();
void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, unsigned int count, float width, float height, iColor_tag tint, unsigned int flipUV);
void xFXAuraUpdate(float dt);
void xFXAuraAdd(void* parent, xVec3* pos, iColor_tag* color, float size);
void xFXRibbonRender();
void xFXRibbonSceneEnter();
int render_compare(xFXRibbon* this, xFXRibbon& c);
void render_strip(xFXRibbon* this, RxObjSpace3DVertex* verts, iterator first, unsigned int size);
void eval_joint(xFXRibbon* this, joint_data& joint, iColor_tag& color, float& width);
void refresh_joint(xFXRibbon* this, joint_data& joint, iterator& it);
void get_normal(xVec3& norm, xVec3& dir, float orient);
void set_texture(xFXRibbon* this, char* name);
void set_texture(xFXRibbon* this, unsigned int id);
void render(xFXRibbon* this);
void update(xFXRibbon* this, float dt);
void insert(xFXRibbon* this, xVec3& loc, float orient, float scale, float alpha, unsigned int flags);
void insert(xFXRibbon* this, xVec3& loc, xVec3& norm, float scale, float alpha, unsigned int flags);
void set_curve(xFXRibbon* this, curve_node* curve, unsigned int size);
void refresh_config(xFXRibbon* this);
void set_default_config(xFXRibbon* this);
void init(xFXRibbon* this);
int compare_ribbons(void* e1, void* e2);
unsigned int xFXShineStart();
void xFXShineRender();
void xFXShineUpdate(float dt);
void xFXShineInit();
void xFXStreakUpdate(unsigned int id, xVec3* a, xVec3* b);
void xFXStreakStop(unsigned int id);
unsigned int xFXStreakStart(float frequency, float alphaFadeRate, float alphaStart, unsigned int textureID, iColor_tag* edge_a, iColor_tag* edge_b, int taper);
void xFXStreakRender();
void xFXStreakUpdate(float dt);
void xFXStreakInit();
void xFXFireworksUpdate(float dt);
void xFXFireworksLaunch(float countdownTime, xVec3* pos, float fuelTime);
void xFXFireworksInit(char* fireworksTrailEmitter, char* fireworksEmitter1, char* fireworksEmitter2, char* fireworksSound, char* fireworksLaunchSound);
void xFXRenderProximityFade(xModelInstance& model, float near_dist, float far_dist);
void set_vert(RxObjSpace3DVertex& vert, vert_data& vd);
void lerp(vert_data& v, float frac, vert_data& v0, vert_data& v1);
void depth_sort(unsigned short* index, tri_data_0* tri, unsigned int size);
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic);
void xFXanimUV2PSetTexture(RwTexture* texture);
void xFXanimUV2PSetAngle(float angle);
void xFXanimUV2PSetScale(xVec3* scale);
void xFXanimUV2PSetTranslation(xVec3* trans);
void xFXanimUVSetAngle(float angle);
void xFXanimUVSetScale(xVec3* scale);
void xFXanimUVSetTranslation(xVec3* trans);
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, unsigned int envmapID, float shininess);
RpAtomic* xFXShinyRender(RpAtomic* atomic);
RpAtomic* xFXBubbleRender(RpAtomic* atomic);
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data);
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data);
RpMaterial* MaterialSetShininess(RpMaterial* material);
void xFXPreAllocMatFX(RpClump* clump);
RpAtomic* PreAllocMatFX_cb(RpAtomic* atomic);
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic);
RpMaterial* MaterialDisableMatFX(RpMaterial* material);
void xFXUpdate(float dt);
void xFX_SceneExit();
void xFX_SceneEnter(RpWorld* world);
void xFXRingRender();
void xFXRingUpdate(float dt);
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params);
void DrawRing(xFXRing* m);
void xFXInit();

// xFXSceneFinish__Fv
// Start address: 0x1e4130
void xFXSceneFinish()
{
}

// xFXScenePrepare__Fv
// Start address: 0x1e4140
void xFXScenePrepare()
{
}

// xFXSceneReset__Fv
// Start address: 0x1e4150
void xFXSceneReset()
{
}

// xFXSceneSetup__Fv
// Start address: 0x1e4160
void xFXSceneSetup()
{
}

// xFXSceneInit__Fv
// Start address: 0x1e41a0
void xFXSceneInit()
{
}

// xFXShutdown__Fv
// Start address: 0x1e41b0
void xFXShutdown()
{
}

// xFXStartup__Fv
// Start address: 0x1e41c0
void xFXStartup()
{
}

// xFXAuraRender__Fv
// Start address: 0x1e41d0
void xFXAuraRender()
{
	int fogstate;
	_xFXAura* ap;
	int i;
	int i;
}

// RenderRotatedBillboard__FP5xVec3P13_xFXAuraAngleUiff10iColor_tagUi
// Start address: 0x1e4360
void RenderRotatedBillboard(xVec3* pos, _xFXAuraAngle* rot, unsigned int count, float width, float height, iColor_tag tint, unsigned int flipUV)
{
	unsigned int i;
	type_71 vert;
	RxObjSpace3DVertex* vp;
	xMat4x3* cammat;
	xVec3* rt;
	xVec3* up;
	float zero;
	float one;
	float nearclip;
	xVec3 myat;
	float depth;
	float camdist;
	float at_offset;
	float scale;
	float dx;
	float dy;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// xFXAuraUpdate__Ff
// Start address: 0x1e48e0
void xFXAuraUpdate(float dt)
{
	_xFXAura* ap;
	int i;
}

// xFXAuraAdd__FPvP5xVec3P10iColor_tagf
// Start address: 0x1e4ab0
void xFXAuraAdd(void* parent, xVec3* pos, iColor_tag* color, float size)
{
	int i;
	_xFXAura* ap;
}

// xFXRibbonRender__Fv
// Start address: 0x1e4bc0
void xFXRibbonRender()
{
	xFXRibbon* prev;
	unsigned int i;
	xFXRibbon* ribbon;
}

// xFXRibbonSceneEnter__Fv
// Start address: 0x1e4d00
void xFXRibbonSceneEnter()
{
}

// render_compare__9xFXRibbonCFRC9xFXRibbon
// Start address: 0x1e5080
int render_compare(xFXRibbon* this, xFXRibbon& c)
{
}

// render_strip__9xFXRibbonFP18RxObjSpace3DVertexQ236tier_queue<Q29xFXRibbon10joint_data>8iteratorUi
// Start address: 0x1e5120
void render_strip(xFXRibbon* this, RxObjSpace3DVertex* verts, iterator first, unsigned int size)
{
	RxObjSpace3DVertex* v;
	int back;
	type_81 ulookup;
	iterator last;
	iColor_tag color;
	float width;
	float offset1;
	float offset2;
	float u;
	xVec3 loc1;
	xVec3 loc2;
}

// eval_joint__9xFXRibbonFRCQ29xFXRibbon10joint_dataR10iColor_tagRf
// Start address: 0x1e5580
void eval_joint(xFXRibbon* this, joint_data& joint, iColor_tag& color, float& width)
{
	float frac;
	curve_node& node0;
	curve_node& node1;
	float subfrac;
}

// refresh_joint__9xFXRibbonFRQ29xFXRibbon10joint_dataRCQ236tier_queue<Q29xFXRibbon10joint_data>8iterator
// Start address: 0x1e5a40
void refresh_joint(xFXRibbon* this, joint_data& joint, iterator& it)
{
	xVec3 offset;
	xVec3 dir;
}

// get_normal__9xFXRibbonFR5xVec3RC5xVec3f
// Start address: 0x1e5da0
void get_normal(xVec3& norm, xVec3& dir, float orient)
{
	float a;
	float b;
	float ax;
	float ay;
	float az;
}

// set_texture__9xFXRibbonFPCc
// Start address: 0x1e6050
void set_texture(xFXRibbon* this, char* name)
{
}

// set_texture__9xFXRibbonFUi
// Start address: 0x1e60d0
void set_texture(xFXRibbon* this, unsigned int id)
{
}

// render__9xFXRibbonFv
// Start address: 0x1e6140
void render(xFXRibbon* this)
{
	RxObjSpace3DVertex* verts;
	int it;
	int subsize;
	int next_it;
	int break_it;
}

// update__9xFXRibbonFf
// Start address: 0x1e62d0
void update(xFXRibbon* this, float dt)
{
}

// insert__9xFXRibbonFRC5xVec3fffUi
// Start address: 0x1e6850
void insert(xFXRibbon* this, xVec3& loc, float orient, float scale, float alpha, unsigned int flags)
{
}

// insert__9xFXRibbonFRC5xVec3RC5xVec3ffUi
// Start address: 0x1e6b90
void insert(xFXRibbon* this, xVec3& loc, xVec3& norm, float scale, float alpha, unsigned int flags)
{
}

// set_curve__9xFXRibbonFPCQ29xFXRibbon10curve_nodeUi
// Start address: 0x1e6ed0
void set_curve(xFXRibbon* this, curve_node* curve, unsigned int size)
{
}

// refresh_config__9xFXRibbonFv
// Start address: 0x1e6ee0
void refresh_config(xFXRibbon* this)
{
}

// set_default_config__9xFXRibbonFv
// Start address: 0x1e6f60
void set_default_config(xFXRibbon* this)
{
}

// init__9xFXRibbonFPCcPCc
// Start address: 0x1e7000
void init(xFXRibbon* this)
{
}

// compare_ribbons__17@unnamed@xFX_cpp@FPCvPCv
// Start address: 0x1e70e0
int compare_ribbons(void* e1, void* e2)
{
}

// xFXShineStart__FPC5xVec3ffffUiPC10iColor_tagPC10iColor_tagfi
// Start address: 0x1e7140
unsigned int xFXShineStart()
{
}

// xFXShineRender__Fv
// Start address: 0x1e7150
void xFXShineRender()
{
	xFXShineElem* e;
	int shine;
	xFXShine* s;
	int j;
	RxObjSpace3DVertex* vert;
	RwFrame* frame;
	xVec3 v;
	xVec3 w;
	float uoff;
	xMat3x3 mat;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_116 blah;
}

// xFXShineUpdate__Ff
// Start address: 0x1e7810
void xFXShineUpdate(float dt)
{
	int i;
	xFXShine* s;
	int j;
	xFXShineElem* e;
	int done;
	int j;
}

// xFXShineInit__Fv
// Start address: 0x1e7bc0
void xFXShineInit()
{
	int i;
}

// xFXStreakUpdate__FUiPC5xVec3PC5xVec3
// Start address: 0x1e7c20
void xFXStreakUpdate(unsigned int id, xVec3* a, xVec3* b)
{
	xFXStreak* s;
}

// xFXStreakStop__FUi
// Start address: 0x1e7cf0
void xFXStreakStop(unsigned int id)
{
	xFXStreak* s;
}

// xFXStreakStart__FfffUiPC10iColor_tagPC10iColor_tagi
// Start address: 0x1e7d50
unsigned int xFXStreakStart(float frequency, float alphaFadeRate, float alphaStart, unsigned int textureID, iColor_tag* edge_a, iColor_tag* edge_b, int taper)
{
	unsigned int i;
	int j;
}

// xFXStreakRender__Fv
// Start address: 0x1e7ef0
void xFXStreakRender()
{
	xFXStreakElem* e1;
	int streak;
	xFXStreak* s;
	int count;
	int j;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	type_57 sStripVert;
}

// xFXStreakUpdate__Ff
// Start address: 0x1e82a0
void xFXStreakUpdate(float dt)
{
	int i;
	xFXStreak* s;
	int j;
	xFXStreakElem* e;
	xVec3 diff;
	int done;
	int j;
}

// xFXStreakInit__Fv
// Start address: 0x1e84b0
void xFXStreakInit()
{
	int i;
}

// xFXFireworksUpdate__Ff
// Start address: 0x1e8510
void xFXFireworksUpdate(float dt)
{
	int i;
	xParEmitterCustomSettings trail_info;
	zParEmitter* femit;
	xParEmitterCustomSettings xplo_info;
}

// xFXFireworksLaunch__FfPC5xVec3f
// Start address: 0x1e8ad0
void xFXFireworksLaunch(float countdownTime, xVec3* pos, float fuelTime)
{
	int i;
}

// xFXFireworksInit__FPCcPCcPCcPCcPCc
// Start address: 0x1e8b30
void xFXFireworksInit(char* fireworksTrailEmitter, char* fireworksEmitter1, char* fireworksEmitter2, char* fireworksSound, char* fireworksLaunchSound)
{
	int i;
}

// xFXRenderProximityFade__FRC14xModelInstanceff
// Start address: 0x1e8bf0
void xFXRenderProximityFade(xModelInstance& model, float near_dist, float far_dist)
{
	RpGeometry* geom;
	RwRaster* raster;
	RpTriangle* tri;
	RwFrame* frame;
	RwTexCoords* uv;
	int vert_total;
	xVec3* vert;
	xVec3* normal;
	unsigned char* alpha;
	float* depth;
	xMat4x3& cm;
	xVec3 ov;
	float zfrac;
	int i;
	float a;
	RxObjSpace3DVertex* out_vert;
	int tri_total;
	unsigned short* alpha_tri_index;
	tri_data_0* alpha_tri;
	unsigned int alpha_tri_total;
	type_85 tri_buffer;
	tri_data_0 cur_tri;
	RpTriangle* end;
	type_106 vi;
	float d0;
	float d1;
	float d2;
	unsigned int flags;
	int i;
	int size1;
	int j;
	unsigned int i;
}

// set_vert__17@unnamed@xFX_cpp@FR18RxObjSpace3DVertexRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9da0
void set_vert(RxObjSpace3DVertex& vert, vert_data& vd)
{
	unsigned char alpha;
	float a;
	RwRGBA* _col;
}

// lerp__17@unnamed@xFX_cpp@FRQ217@unnamed@xFX_cpp@9vert_datafRCQ217@unnamed@xFX_cpp@9vert_dataRCQ217@unnamed@xFX_cpp@9vert_data
// Start address: 0x1e9ea0
void lerp(vert_data& v, float frac, vert_data& v0, vert_data& v1)
{
}

// depth_sort__17@unnamed@xFX_cpp@FPUsPCQ217@unnamed@xFX_cpp@8tri_dataUi
// Start address: 0x1ea400
void depth_sort(unsigned short* index, tri_data_0* tri, unsigned int size)
{
	unsigned int i;
	unsigned short& e0;
	float d0;
	unsigned int j;
	unsigned short temp;
}

// xFXanimUVAtomicSetup__FP8RpAtomic
// Start address: 0x1ea4a0
RpAtomic* xFXanimUVAtomicSetup(RpAtomic* atomic)
{
}

// xFXanimUV2PSetTexture__FP9RwTexture
// Start address: 0x1ea4c0
void xFXanimUV2PSetTexture(RwTexture* texture)
{
}

// xFXanimUV2PSetAngle__Ff
// Start address: 0x1ea4d0
void xFXanimUV2PSetAngle(float angle)
{
}

// xFXanimUV2PSetScale__FPC5xVec3
// Start address: 0x1ea520
void xFXanimUV2PSetScale(xVec3* scale)
{
}

// xFXanimUV2PSetTranslation__FPC5xVec3
// Start address: 0x1ea540
void xFXanimUV2PSetTranslation(xVec3* trans)
{
}

// xFXanimUVSetAngle__Ff
// Start address: 0x1ea560
void xFXanimUVSetAngle(float angle)
{
}

// xFXanimUVSetScale__FPC5xVec3
// Start address: 0x1ea5b0
void xFXanimUVSetScale(xVec3* scale)
{
}

// xFXanimUVSetTranslation__FPC5xVec3
// Start address: 0x1ea5d0
void xFXanimUVSetTranslation(xVec3* trans)
{
}

// xFXAtomicEnvMapSetup__FP8RpAtomicUif
// Start address: 0x1ea5f0
RpAtomic* xFXAtomicEnvMapSetup(RpAtomic* atomic, unsigned int envmapID, float shininess)
{
	RwTexture* env;
	float tmp;
	RpSkin* skin;
}

// xFXShinyRender__FP8RpAtomic
// Start address: 0x1ea6c0
RpAtomic* xFXShinyRender(RpAtomic* atomic)
{
	RwCullMode cmode;
}

// xFXBubbleRender__FP8RpAtomic
// Start address: 0x1ea900
RpAtomic* xFXBubbleRender(RpAtomic* atomic)
{
	RwCullMode cmode;
	xFXBubbleParams* bp;
}

// MaterialSetEnvMap2__FP10RpMaterialPv
// Start address: 0x1eab60
RpMaterial* MaterialSetEnvMap2(RpMaterial* material, void* data)
{
	char* textureName;
	RwTexture* texture;
	RwFrame* frame;
}

// MaterialSetEnvMap__FP10RpMaterialPv
// Start address: 0x1eac00
RpMaterial* MaterialSetEnvMap(RpMaterial* material, void* data)
{
	RwTexture* texture;
	RwFrame* frame;
}

// MaterialSetShininess__FP10RpMaterialPv
// Start address: 0x1eacd0
RpMaterial* MaterialSetShininess(RpMaterial* material)
{
	RpMatFXMaterialFlags flags;
}

// xFXPreAllocMatFX__FP7RpClump
// Start address: 0x1ead20
void xFXPreAllocMatFX(RpClump* clump)
{
}

// PreAllocMatFX_cb__FP8RpAtomicPv
// Start address: 0x1ead30
RpAtomic* PreAllocMatFX_cb(RpAtomic* atomic)
{
}

// AtomicDisableMatFX__FP8RpAtomic
// Start address: 0x1ead80
RpAtomic* AtomicDisableMatFX(RpAtomic* atomic)
{
	RpGeometry* geometry;
}

// MaterialDisableMatFX__FP10RpMaterialPv
// Start address: 0x1eadd0
RpMaterial* MaterialDisableMatFX(RpMaterial* material)
{
}

// xFXUpdate__Ff
// Start address: 0x1eae00
void xFXUpdate(float dt)
{
}

// xFX_SceneExit__FP7RpWorld
// Start address: 0x1eae80
void xFX_SceneExit()
{
}

// xFX_SceneEnter__FP7RpWorld
// Start address: 0x1eae90
void xFX_SceneEnter(RpWorld* world)
{
	int i;
	int num;
	xSurface* sp;
	zSurfaceProps* pp;
	zSurfMatFX* fxp;
	RpMaterial* mp;
	RwTexture* env;
	RwTexture* bump;
	RwTexture* env;
	RwTexture* bump;
	zScene* sc;
	xEnt* ent;
	type_35 tmp;
	unsigned int bubble;
}

// xFXRingRender__Fv
// Start address: 0x1eb2c0
void xFXRingRender()
{
	int i;
	xFXRing* ring;
}

// xFXRingUpdate__Ff
// Start address: 0x1eb330
void xFXRingUpdate(float dt)
{
	xFXRing* ring;
	int i;
	float lifetime;
	float t;
}

// xFXRingCreate__FPC5xVec3PC7xFXRing
// Start address: 0x1eb3f0
xFXRing* xFXRingCreate(xVec3* pos, xFXRing* params)
{
	xFXRing* ring;
	int i;
}

// DrawRing__FP7xFXRing
// Start address: 0x1eb500
void DrawRing(xFXRing* m)
{
	int i;
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
	float u;
	float radius;
	float oradius;
	float height;
	float tilt;
	RwCullMode cmode;
	float dt;
	xVec3* center;
	RxObjSpace3DVertex* Im3DBuffer;
	RxObjSpace3DVertex* imv;
	float oour;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// xFXInit__Fv
// Start address: 0x1ebca0
void xFXInit()
{
	RpLight* light;
	RwFrame* frame;
}

