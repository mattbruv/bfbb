typedef struct xGroup;
typedef struct RwCamera;
typedef struct xAnimTransition;
typedef struct RwRaster;
typedef struct tagiRenderInput;
typedef struct xEntMotionPenData;
typedef struct xShadowMgr;
typedef struct RpAtomic;
typedef struct RxHeap;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct xModelPool;
typedef struct xShadowCache;
typedef struct RxPipelineNode;
typedef struct RpMaterial;
typedef struct xModelInstance;
typedef struct xBase;
typedef struct ShadowCacheContext;
typedef struct xEnt;
typedef struct zScene;
typedef struct xQuat;
typedef struct xAnimSingle;
typedef struct zCheckPoint;
typedef struct xJSPHeader;
typedef struct xVec3;
typedef struct RxObjSpace3DVertex;
typedef struct xPlatformAsset;
typedef struct zPlayerGlobals;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RpGeometry;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct zJumpParam;
typedef struct xEntMPData;
typedef struct tri_data_0;
typedef struct RpClump;
typedef struct xEntAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct RwFrame;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct RpWorldSector;
typedef struct xMat4x3;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xNPCBasic;
typedef struct xEntMotionAsset;
typedef struct zEntHangable;
typedef struct RpTriangle;
typedef struct xMovePoint;
typedef struct zPlayerSettings;
typedef struct xClumpCollBSPTree;
typedef struct xCollis;
typedef struct RxPipeline;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct zEnt;
typedef struct RpV3dGradient;
typedef struct RpMaterialList;
typedef struct RpPolygon;
typedef struct RpCollisionTriangle;
typedef struct xJSPNodeInfo;
typedef struct xSurface;
typedef struct xSpline3;
typedef struct zPlatform;
typedef struct xAnimEffect;
typedef struct xEnvAsset;
typedef struct xUpdateCullEnt;
typedef struct RpIntersection;
typedef struct xEntMotionERData;
typedef struct xScene;
typedef struct xGridBound;
typedef struct xVec4;
typedef struct RwMatrixTag;
typedef struct xRay3;
typedef struct RpVertexNormal;
typedef struct RwSurfaceProperties;
typedef struct xEntFrame;
typedef struct xQCData;
typedef struct zCutsceneMgr;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zPlatFMRunTime;
typedef struct rxReq;
typedef struct RwV4dTag;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct zAssetPickupTable;
typedef struct RpMeshHeader;
typedef enum RxClusterValidityReq;
typedef struct xLinkAsset;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct ShadowCBParam;
typedef struct iFogParams;
typedef struct xCoef;
typedef struct _tagxRumble;
typedef struct xBound;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct xShadowSimplePoly;
typedef struct xEntBoulder;
typedef struct xFactoryInst;
typedef struct RpWorld;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xEntMotionOrbitData;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xBaseAsset;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xCoef3;
typedef enum _tagPadState;
typedef struct xSphere;
typedef struct xAnimFile;
typedef struct _ProjectionParam;
typedef struct xShadowSimpleCache;
typedef enum RwCameraProjection;
typedef struct xMovePointAsset;
typedef struct xEntCollis;
typedef enum RxClusterForcePresent;
typedef struct xGlobals;
typedef struct xCylinder;
typedef struct xAnimTransitionList;
typedef union RxColorUnion;
typedef struct xModelTag;
typedef struct _tagxPad;
typedef struct xBox;
typedef struct RwV2d;
typedef enum RpIntersectType;
typedef struct RxClusterDefinition;
typedef struct zLasso;
typedef struct xShadowPoly;
typedef struct xEntMechData;
typedef struct xEntMotionSplineData;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct RwSphere;
typedef struct xGroupAsset;
typedef struct _tagiPad;
typedef struct RwTexDictionary;
typedef struct xVec2;
typedef struct xFFX;
typedef struct RxOutputSpec;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xGrid;
typedef struct xBBox;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct RwObject;
typedef struct xEntShadow;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwLLLink;
typedef union RpIntersectData;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxIoSpec;
typedef struct anim_coll_data;
typedef struct xClumpCollBSPTriangle;
typedef struct RwLine;
typedef struct RxNodeMethods;
typedef struct RyzMemData;
typedef struct RxPipelineCluster;
typedef struct RwSky2DVertexFields;
typedef struct xPortalAsset;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xEntMotionMechData;
typedef struct _zPortal;
typedef struct zGlobals;
typedef struct RwPlane;
typedef struct xEntPenData;
typedef struct zGlobalSettings;
typedef struct RxCluster;
typedef struct xQCControl;
typedef struct RxPipelineNodeParam;
typedef struct zPlayerLassoInfo;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef union _class_0;
typedef struct RxPacket;
typedef struct xEntOrbitData;
typedef struct zLedgeGrabParams;
typedef enum RwFogType;
typedef struct _class_1;
typedef struct tri_data_1;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xEntDrive;
typedef enum _zPlayerWallJumpState;
typedef struct xEntMotion;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RpSkin;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef enum RwBlendFunction;
typedef struct xEntSplineData;
typedef struct analog_data;
typedef struct _class_2;

typedef int(*type_6)(xEnt*, void*);
typedef void(*type_9)(xModelInstance*);
typedef void(*type_11)(xEnt*);
typedef unsigned int(*type_16)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_17)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_19)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_21)(xEnt*);
typedef int(*type_23)(RxNodeDefinition*);
typedef void(*type_25)(RxNodeDefinition*);
typedef int(*type_27)(RxPipelineNode*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef void(*type_29)(RxPipelineNode*);
typedef int(*type_30)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_32)(RxPipelineNode*, RxPipeline*);
typedef void(*type_34)(xAnimPlay*, xAnimState*);
typedef RpCollisionTriangle*(*type_35)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef RpCollisionTriangle*(*type_36)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef void(*type_37)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef unsigned int(*type_39)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_45)(unsigned int);
typedef void(*type_47)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_49)(void*);
typedef char*(*type_52)(xBase*);
typedef char*(*type_54)(unsigned int);
typedef RpAtomic*(*type_59)(RpAtomic*);
typedef void(*type_61)(xEnt*, xScene*, float);
typedef int(*type_65)(void*, void*);
typedef void(*type_66)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_67)(xEnt*, xVec3*);
typedef void(*type_69)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_72)(xEnt*);
typedef unsigned int(*type_73)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_74)(void*);
typedef unsigned int(*type_77)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_81)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_90)(void*);
typedef RpWorldSector*(*type_95)(RpWorldSector*);
typedef RwCamera*(*type_96)(RwCamera*);
typedef RwCamera*(*type_99)(RwCamera*);
typedef unsigned int(*type_100)(void*, void*);
typedef void(*type_104)(xMemPool*, void*);
typedef void(*type_110)(void*);
typedef void(*type_111)(RwResEntry*);
typedef int(*type_116)(int, int, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);

typedef xVec3 type_0[3];
typedef float type_1[2];
typedef unsigned short type_2[3];
typedef unsigned int type_3[15];
typedef float type_4[5];
typedef unsigned char type_5[2];
typedef xAnimMultiFileEntry type_7[1];
typedef unsigned char type_8[2];
typedef unsigned int type_10[72];
typedef char type_12[16];
typedef unsigned int type_13[15];
typedef RwFrustumPlane type_14[6];
typedef char type_15[4];
typedef xBase* type_18[72];
typedef analog_data type_20[2];
typedef RwV3d type_22[8];
typedef xShadowCache type_24[6];
typedef RxObjSpace3DVertex type_26[36];
typedef float type_31[5];
typedef RwTexCoords* type_33[8];
typedef xEnt* type_38[16];
typedef xVec4 type_40[12];
typedef unsigned char type_41[2];
typedef xVec3 type_42[6];
typedef xShadowPoly type_43[256];
typedef unsigned int type_44[2];
typedef unsigned char type_46[2];
typedef float type_48[6];
typedef float type_50[4];
typedef xVec3 type_51[3];
typedef float type_53[3];
typedef float type_55[3];
typedef unsigned short type_56[3];
typedef xModelTag type_57[2];
typedef float type_58[3];
typedef RpLight* type_60[2];
typedef RwFrame* type_62[2];
typedef unsigned char type_63[3];
typedef float type_64[16];
typedef xEnt* type_68[111];
typedef RwV3d type_70[3];
typedef RwV2d type_71[2];
typedef xEnt* type_75[16];
typedef unsigned char type_76[2];
typedef char type_78[128];
typedef unsigned int type_79[4];
typedef type_78 type_80[6];
typedef unsigned char type_82[14];
typedef xModelTag type_83[4];
typedef char type_84[32];
typedef RwTexCoords* type_85[8];
typedef xVec3 type_86[4];
typedef xVec3 type_87[3];
typedef xModelInstance* type_88[14];
typedef float type_89[4];
typedef unsigned int type_91[4096];
typedef unsigned int type_92[4];
typedef type_92 type_93[6];
typedef unsigned char type_94[4];
typedef unsigned int type_97[11];
typedef xRay3 type_98[1];
typedef unsigned char type_101[22];
typedef xCollis type_102[1];
typedef xEnt* type_103[5];
typedef unsigned char type_105[22];
typedef xCollis type_106[18];
typedef xCollis type_107[1];
typedef char type_108[32];
typedef char type_109[32];
typedef float type_112[2];
typedef type_112 type_113[3];
typedef char* type_114[11];
typedef xVec3 type_115[5];
typedef unsigned char type_117[5];
typedef float type_118[12];
typedef xVec3 type_119[60];
typedef RxCluster type_120[1];
typedef float type_121[12];
typedef float type_122[2];
typedef float type_123[12];
typedef float type_125[22];
typedef float type_126[12];
typedef unsigned char type_127[3];
typedef <unknown type (0xa510)> type_128[4];
typedef RwV3d* type_129[3];
typedef float type_130[22];
typedef RwSky2DVertex type_131[4];
typedef float type_132[12];
typedef xVec3 type_133[8];
typedef float type_134[12];
typedef int type_135[6];
typedef float type_136[4];
typedef unsigned char type_137[3];
typedef char type_138[16];
typedef unsigned int type_139[15];

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_96 beginUpdate;
	type_99 endUpdate;
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
	type_22 frustumCorners;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_73 Conditional;
	type_73 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_8 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct xShadowMgr
{
	xEnt* ent;
	xShadowCache* cache;
	int priority;
	int cacheReady;
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
	type_59 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
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
	type_34 BeforeEnter;
	type_17 StateCallback;
	type_47 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_7 Files;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xShadowCache
{
	xVec3 pos;
	float radius;
	unsigned int entCount;
	unsigned int polyCount;
	type_31 polyRayDepth;
	unsigned short castOnEnt;
	unsigned short castOnPoly;
	type_38 ent;
	type_43 poly;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_30 eventFunc;
};

struct ShadowCacheContext
{
	xShadowCache* cache;
	float minNormY;
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
	type_61 update;
	type_61 endUpdate;
	type_67 bupdate;
	type_69 move;
	type_72 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_81 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_10 baseCount;
	type_18 baseList;
	_zEnv* zen;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_122 BilinearLerp;
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

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xJSPHeader
{
	type_15 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
};

struct xPlatformAsset
{
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
	type_57 BubbleWandTag;
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
	type_139 Inv_PatsSock;
	type_3 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_13 Inv_LevelPickups;
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
	type_44 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_68 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_82 sb_model_indices;
	type_88 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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
	type_85 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_79 pad;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_28 callback;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_49 activateCB;
	type_49 deactivateCB;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_33 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_40 frustplane;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_11 f_setup;
	type_21 f_reset;
	union
	{
		int flg_basenpc;
		int inUpdate;
		int flg_upward;
	};
	int colFreq;
	int colFreqReset;
	union
	{
		unsigned int flg_colCheck;
		unsigned int flg_penCheck;
		unsigned int flg_unused;
	};
	int myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
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

struct zEntHangable
{
};

struct RpTriangle
{
	type_56 vertIndex;
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
	type_76 pad;
	float delay;
	xSpline3* spl;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_48 MoveSpeed;
	type_53 AnimSneak;
	type_55 AnimWalk;
	type_58 AnimRun;
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
	type_94 talk_filter;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_47 BeforeAnimMatrices;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpV3dGradient
{
	float dydx;
	float dzdx;
	float dxdy;
	float dzdy;
	float dxdz;
	float dydz;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_2 vertIndex;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int index;
	type_129 vertices;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_63 pad;
	void* moprops;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_39 Callback;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_100 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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
	type_52 base2Name;
	type_54 id2Name;
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

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
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

struct zCutsceneMgr
{
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_118 tmrs;
	type_121 ttms;
	type_123 atms;
	type_126 dtms;
	type_132 vms;
	type_134 dss;
};

struct rxReq
{
};

struct RwV4dTag
{
	float x;
	float y;
	float z;
	float w;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct zAssetPickupTable
{
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_136 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_104 InitCB;
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
	type_111 destroyNotify;
};

struct ShadowCBParam
{
	xShadowCache* cache;
	RpIntersection* isx;
	xVec3 capsuleStart;
	xVec3 capsuleEnd;
	float capsuleRadius;
	xEnt* ent;
	RwLine localLine;
	RwV3d localDelta;
	float localRadius;
	RwMatrixTag* modelMat;
	RpGeometry* geom;
	unsigned int polyFound;
	type_103 rayCloser;
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

struct xCoef
{
	type_50 a;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_127 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_60 light;
	type_62 light_frame;
	int memlvl;
};

struct xShadowSimplePoly
{
	type_51 vert;
	xVec3 norm;
};

struct xEntBoulder
{
};

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
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
	type_95 renderCallBack;
	RxPipeline* pipeline;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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
	type_64 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xSphere
{
	xVec3 center;
	float r;
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
	type_5 NumAnims;
	void** RawData;
};

struct _ProjectionParam
{
	RwV3d at;
	RwMatrixTag invMatrix;
	unsigned char shadowValue;
	int fade;
	unsigned int numIm3DBatch;
	unsigned int shadowWord;
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
	type_86 corner;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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
	type_106 colls;
	type_66 post;
	type_77 depenq;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_89 wt;
};

struct _tagxPad
{
	type_101 value;
	type_105 last_value;
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
	type_125 up_tmr;
	type_130 down_tmr;
	type_20 analog;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct RwV2d
{
	float x;
	float y;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_115 lastRefs;
	type_117 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xShadowPoly
{
	type_0 vert;
	xVec3 norm;
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct _tagiPad
{
	int port;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xVec2
{
	float x;
	float y;
};

struct xFFX
{
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_108 name;
	type_109 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct xGrid
{
	unsigned char ingrid_id;
	type_137 pad;
	unsigned short nx;
	unsigned short nz;
	float minx;
	float minz;
	float maxx;
	float maxz;
	float csizex;
	float csizez;
	float inv_csizex;
	float inv_csizez;
	float maxr;
	xGridBound** cells;
	xGridBound* other;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_1 radius;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct anim_coll_data
{
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

struct RxNodeMethods
{
	type_19 nodeBody;
	type_23 nodeInit;
	type_25 nodeTerm;
	type_27 pipelineNodeInit;
	type_29 pipelineNodeTerm;
	type_32 pipelineNodeConfig;
	type_16 configMsgHandler;
};

struct RyzMemData
{
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
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
	type_41 PowerUp;
	type_46 InitialPowerUp;
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

struct xQCControl
{
	float world_xmin;
	float world_ymin;
	float world_zmin;
	float world_xmax;
	float world_ymax;
	float world_zmax;
	float world_xsz;
	float world_ysz;
	float world_zsz;
	float scale_x;
	float scale_y;
	float scale_z;
	float center_x;
	float center_y;
	float center_z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_120 clusters;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_119 tranTable;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_1
{
	xVec3* verts;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_124 sync;
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_128 qWords;
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

struct RpSkin
{
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

enum RwBlendFunction
{
	rwBLENDNABLEND,
	rwBLENDZERO,
	rwBLENDONE,
	rwBLENDSRCCOLOR,
	rwBLENDINVSRCCOLOR,
	rwBLENDSRCALPHA,
	rwBLENDINVSRCALPHA,
	rwBLENDDESTALPHA,
	rwBLENDINVDESTALPHA,
	rwBLENDDESTCOLOR,
	rwBLENDINVDESTCOLOR,
	rwBLENDSRCALPHASAT,
	rwBLENDFUNCTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntSplineData
{
	int unknown;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct _class_2
{
	float t;
	float u;
	float v;
};

type_138 buffer;
type_12 buffer;
RpLight* ShadowLight;
RwRGBAReal ShadowLightColor;
type_114 sCacheBlendLabels;
type_97 sCacheBlendValues;
unsigned int sCacheNumBlendModes;
float SHADOW_BF_DOT;
float SHADOW_BOTH;
RxObjSpace3DVertex* Im3DBuffer;
unsigned int Im3DBufferPos;
float ShadowThreshold;
RwCamera* ShadowCamera;
RwRaster* ShadowCameraRaster;
RwRaster* ShadowRenderRaster;
type_71 ShadowPreviewVerts;
float ShadowStrength;
unsigned int gShadowFlags;
float gShadowObjectRadius;
unsigned int shadow_ent_count;
type_75 shadow_ent_list;
int sShadowCollJSP;
RwMatrixTag sm_matrix;
float rscale;
RwV3d gCamPos;
unsigned int skyOldTest;
type_93 shadvolquad_idx;
xEnt* sEntSelf;
xShadowMgr* sMgrList;
int sMgrCount;
int sMgrTotal;
type_24 sCacheList;
RxPipeline* adlSkinPipe;
RxPipeline* a4dSkinPipe;
RxPipeline* adlSkinPipeADC;
RxPipeline* a4dSkinPipeADC;
xVec3 g_NY3;
unsigned char xClumpColl_FilterFlags;
type_9 xModelRender;
type_65 CmpShadowMgr;
zGlobals globals;
unsigned int gActiveHeap;
tagiRenderInput gRenderBuffer;
type_6 shadowCacheEntityCB;
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
xQCControl xqc_def_ctrl;
type_36 shadowCacheEnvCB;
type_116 shadowCacheLeafCB;
int _rpCollisionGeometryDataOffset;
type_91 ourGlobals;
type_35 ShadowRenderTriangleCB;
int iModelHack_DisablePrelight;
type_110 modelRenderCB;
type_37 xRayHitsEnt;

void xShadow_PickEntForNPC(xShadowMgr* mgr);
void xShadow_PickByRayCast(xShadowMgr* mgr);
void xShadowManager_Render();
int CmpShadowMgr(void* a, void* b);
void xShadowManager_Remove(xEnt* ent);
void xShadowManager_Add(xEnt* ent);
void xShadowManager_Reset();
void xShadowManager_Init(int numEnts);
void xShadowVertical_DrawCache(xShadowCache* cache, float shadowFactor, float fadeDist, int shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float r, float depth, float minNormY);
int shadowCacheEntityCB(xEnt* ent, void* cbdata);
int shadowCacheLeafCB(int numTriangles, int triOffset, void* data);
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data);
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float depth);
void DrawAlphaBox(xVec3* volume, int frontface, unsigned char alpha);
unsigned char ShadowInsideBoxAdjust(xVec3* volume);
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float radius);
int ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, float shadowFactor, float fadeDist);
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data);
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, type_74 renderCB);
void ShadowCameraDestroy(RwCamera* shadowCamera);
int Im2DRenderQuad(float x1, float y1, float x2, float y2, float z, float recipCamZ, float uvOffset);
void xShadow_ListAdd(xEnt* ent);
void xShadowRender(xEnt* ent, float max_dist);
void xShadowReceiveShadow(xEnt* ent, float shadowFactor, int shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
void xShadowReceiveShadowFastPS2(xEnt* ent, float shadowFactor, int shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast);
unsigned int xShadowReceiveShadowSetup(xEnt* ent);
void modelRenderCB(void* model);
void xShadowRenderWorld(xVec3* center, float radius, float max_dist);
void xShadowCameraUpdate(void* model, type_90 renderCB, xVec3* center, float radius, int shadowMode);
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec);
void xShadowSetWorld(RpWorld* world);
int SetupShadow();
void xShadowInit();

// xShadow_PickEntForNPC__FP10xShadowMgr
// Start address: 0x2040a0
void xShadow_PickEntForNPC(xShadowMgr* mgr)
{
}

// xShadow_PickByRayCast__FP10xShadowMgr
// Start address: 0x204100
void xShadow_PickByRayCast(xShadowMgr* mgr)
{
	xEnt* ent_best;
	int idx_best;
	xCollis colrec;
	xRay3 ray;
	int num;
	int i;
	xEnt* ep;
}

// xShadowManager_Render__Fv
// Start address: 0x2042a0
void xShadowManager_Render()
{
	int i;
	type_135 cacheUsed;
	unsigned int j;
	unsigned char old_xClumpColl_FilterFlags;
	int bestIndex;
	int foundPriority;
	xVec3 center;
	float radius;
	xShadowMgr* mgr_best;
	float dst_depth;
	xEnt* ep;
	xEnt* ent;
	int shadowOutside;
	xVec3 shadVec;
	xVec3 center;
	float radius;
	RpAtomic* old_model;
	xModelInstance* old_mnext;
	xEnt* ep;
	xShadowMgr* mgr;
	xNPCBasic* npc_base;
	int num;
	int a;
	xEnt* ep;
	float rad;
	xVec3* lower;
	xVec3* upper;
}

// CmpShadowMgr__FPCvPCv
// Start address: 0x204cf0
int CmpShadowMgr(void* a, void* b)
{
	xEnt* entA;
	xEnt* entB;
	int isPlayerA;
	int isPlayerB;
	float distA;
	float distB;
	xVec3* campos;
	float dx__;
	float dy__;
	float dz__;
	float dx__;
	float dy__;
	float dz__;
}

// xShadowManager_Remove__FP4xEnt
// Start address: 0x204e20
void xShadowManager_Remove(xEnt* ent)
{
	int i;
}

// xShadowManager_Add__FP4xEnt
// Start address: 0x204ee0
void xShadowManager_Add(xEnt* ent)
{
	int i;
}

// xShadowManager_Reset__Fv
// Start address: 0x204f90
void xShadowManager_Reset()
{
}

// xShadowManager_Init__Fi
// Start address: 0x204fa0
void xShadowManager_Init(int numEnts)
{
}

// xShadowVertical_DrawCache__FP12xShadowCacheffiP11RwMatrixTagP8RwRaster
// Start address: 0x205020
void xShadowVertical_DrawCache(xShadowCache* cache, float shadowFactor, float fadeDist, int shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	float radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
	unsigned int i;
	RpCollisionTriangle tri;
}

// xShadowVertical_FillCache__FP12xShadowCacheP5xVec3fff
// Start address: 0x205430
void xShadowVertical_FillCache(xShadowCache* cache, xVec3* pos, float r, float depth, float minNormY)
{
	int i;
	int j;
	xEnv* env;
	RpIntersection isx;
	ShadowCacheContext context;
	type_4 sortRayDepth;
	float objMaxDepth;
	xQCData qcd;
	ShadowCBParam cbparam;
}

// shadowCacheEntityCB__FP4xEntPv
// Start address: 0x205720
int shadowCacheEntityCB(xEnt* ent, void* cbdata)
{
	ShadowCBParam* cbparam;
	xCollis coll;
	RwMatrixTag inverseLTM;
	RpV3dGradient grad;
}

// shadowCacheLeafCB__FiiPv
// Start address: 0x205b10
int shadowCacheLeafCB(int numTriangles, int triOffset, void* data)
{
	ShadowCBParam* cbparam;
	xShadowCache* cache;
	RpGeometry* geometry;
	RwV3d* vertices;
	RpTriangle* triangles;
	int triSlot;
	unsigned short* triIndex;
	int i;
	RpTriangle* tri;
	int vertIndex0;
	int vertIndex1;
	int vertIndex2;
	RwV3d* v0;
	RwV3d* v1;
	RwV3d* v2;
	type_87 worldV;
	float posX;
	float posZ;
	float nx;
	float nz;
	float nmag2;
	float pdot;
	xVec3* vert0;
	xVec3* vert1;
	float dotA;
	float dotB;
	xVec3* vert0;
	xVec3* vert1;
	xVec3* vert2;
	xVec3 aa;
	xVec3 bb;
	xVec3 trinorm;
	float depthtest;
	float dydx;
	float dydz;
	float depth0;
	float n0x;
	float n0z;
	float n0d;
	float n1x;
	float n1z;
	float n1d;
	float n2x;
	float n2z;
	float n2d;
	float denom;
}

// shadowCacheEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x206370
RpCollisionTriangle* shadowCacheEnvCB(RpCollisionTriangle* tri, void* data)
{
	ShadowCacheContext* context;
	xShadowCache* cache;
	xShadowPoly* poly;
	float dydx;
	float dydz;
	float depth0;
	float n0x;
	float n0z;
	float n0d;
	float n1x;
	float n1z;
	float n1d;
	float n2x;
	float n2z;
	float n2d;
}

// xShadowSetVolume__FP8RwCameraP5xVec3f
// Start address: 0x206770
void xShadowSetVolume(RwCamera* shadowCamera, xVec3* pos, float depth)
{
	int i;
	type_133 volume;
	float invNearFar;
	float lerp;
	RwMatrixTag* camMatrix;
	int cullstate;
	int ztest;
	int zwrite;
	int srcblend;
	int destblend;
}

// DrawAlphaBox__FP5xVec3iUc
// Start address: 0x206a50
void DrawAlphaBox(xVec3* volume, int frontface, unsigned char alpha)
{
	unsigned int i;
	unsigned int numV;
	type_26 boxV;
	RxObjSpace3DVertex* v3d;
	RwMatrixTag* mainMatrix;
	xVec3 normal;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// ShadowInsideBoxAdjust__FP5xVec3
// Start address: 0x206d90
unsigned char ShadowInsideBoxAdjust(xVec3* volume)
{
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	xVec3* v3;
	type_42 normal;
	unsigned int i;
	RwCamera* mainCamera;
	RwMatrixTag* mainMatrix;
	float nearclip;
}

// ShadowCameraSetSpherePersp__FP8RwCameraP5RwV3df
// Start address: 0x207100
RwCamera* ShadowCameraSetSpherePersp(RwCamera* camera, RwV3d* center, float radius)
{
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	RwV3d* camPos;
	float objDepth;
	float nearZ;
	float farZ;
}

// ShadowRender__FP8RwCameraP8RwRasterP14RpIntersectionff
// Start address: 0x207240
int ShadowRender(RwCamera* shadowCamera, RpIntersection* shadowZone, float shadowFactor, float fadeDist)
{
	_ProjectionParam param;
	RwMatrixTag* shadowMatrix;
	float radius;
	RwV3d scl;
	RwV3d tr;
	xVec3 A;
	xVec3 B;
}

// ShadowRenderTriangleCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x207560
RpCollisionTriangle* ShadowRenderTriangleCB(RpCollisionTriangle* collTriangle, void* data)
{
	_ProjectionParam* param;
	type_70 vShad;
	RxObjSpace3DVertex* imv;
	xVec3 c;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	unsigned int* p0;
	unsigned int* p1;
	unsigned int* p2;
	unsigned int sw;
}

// ShadowCameraUpdate__FP8RwCameraPvPFPv_vP5xVec3fi
// Start address: 0x2079b0
RwCamera* ShadowCameraUpdate(RwCamera* shadowCamera, void* model, type_74 renderCB)
{
	RwRGBA bgColor;
	RwCamera* camera;
	int fogstate;
}

// ShadowCameraDestroy__FP8RwCamera
// Start address: 0x207b20
void ShadowCameraDestroy(RwCamera* shadowCamera)
{
	RwRaster* raster;
	RwFrame* frame;
}

// Im2DRenderQuad__Ffffffff
// Start address: 0x207bb0
int Im2DRenderQuad(float x1, float y1, float x2, float y2, float z, float recipCamZ, float uvOffset)
{
	type_131 vx;
}

// xShadow_ListAdd__FP4xEnt
// Start address: 0x207c90
void xShadow_ListAdd(xEnt* ent)
{
}

// xShadowRender__FP4xEntf
// Start address: 0x207ca0
void xShadowRender(xEnt* ent, float max_dist)
{
	xVec3 center;
	float radius;
}

// xShadowReceiveShadow__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207d40
void xShadowReceiveShadow(xEnt* ent, float shadowFactor, int shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwMatrixTag oldroot;
}

// xShadowReceiveShadowFastPS2__FP4xEntfiP11RwMatrixTagP8RwRaster
// Start address: 0x207f90
void xShadowReceiveShadowFastPS2(xEnt* ent, float shadowFactor, int shadowMode, RwMatrixTag* shadowMat, RwRaster* shadowRast)
{
	RwCamera* shadowCamera;
	RwMatrixTag* shadowMatrix;
	RwMatrixTag invMatrix;
	RwV4dTag at;
	float radius;
	RwV3d scl;
	RwV3d tr;
	float fadeDist;
	unsigned int i;
	unsigned int num_verts;
	xVec3* xvert;
	RpTriangle* tri;
	RpGeometry* geom;
	RwMatrixTag* mat;
	RpSkin* skin;
	unsigned char val;
	unsigned int vertex_color;
	xModelInstance* model;
	unsigned int max_verts;
	unsigned int model_num;
	unsigned int ent_id;
	xVec3* vert;
	RxObjSpace3DVertex* imv;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	float local_SHADOW_BIAS_AMT;
	float local_SHADOW_MINNORMY;
}

// xShadowReceiveShadowSetup__FP4xEnt
// Start address: 0x208670
unsigned int xShadowReceiveShadowSetup(xEnt* ent)
{
}

// modelRenderCB__FPv
// Start address: 0x2086e0
void modelRenderCB(void* model)
{
}

// xShadowRenderWorld__FP5xVec3ff
// Start address: 0x2086f0
void xShadowRenderWorld(xVec3* center, float radius, float max_dist)
{
	RpIntersection shadowZone;
	float fadeDistance;
	xSphere zone;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
	xVec3* at;
	xVec3* up;
	xVec3* rt;
	type_98 R;
	type_102 entcoll;
	type_107 envcoll;
	type_113 sf;
	unsigned int hit_env;
	unsigned int hit_ent;
	float ent_dist;
	float env_dist;
	xVec3 ent_pos;
	xVec3 env_pos;
	int i;
	xQCData q;
}

// xShadowCameraUpdate__FPvPFPv_vP5xVec3fi
// Start address: 0x208d10
void xShadowCameraUpdate(void* model, type_90 renderCB, xVec3* center, float radius, int shadowMode)
{
}

// xShadowSetLight__FP5xVec3P5xVec3f
// Start address: 0x208d90
void xShadowSetLight(xVec3* target_pos, xVec3* in_vec)
{
	xVec3 zvec;
	xMat4x3 matrix;
	RwFrame* camFrame;
	RwMatrixTag* camMatrix;
}

// xShadowSetWorld__FP7RpWorld
// Start address: 0x208e20
void xShadowSetWorld(RpWorld* world)
{
}

// SetupShadow__Fv
// Start address: 0x208e50
int SetupShadow()
{
	int res;
}

// xShadowInit__Fv
// Start address: 0x208f70
void xShadowInit()
{
	RwFrame* frame;
}

