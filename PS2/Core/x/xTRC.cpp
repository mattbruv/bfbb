typedef struct RwObjectHasFrame;
typedef struct RpWorldSector;
typedef struct xCutsceneZbuffer;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct zJumpParam;
typedef struct RpAtomic;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct RpLight;
typedef struct xEnt;
typedef struct RxNodeDefinition;
typedef struct _class_0;
typedef struct xClumpCollBSPTree;
typedef struct xUpdateCullEnt;
typedef struct xAnimTransitionList;
typedef struct zPlatform;
typedef struct zEntHangable;
typedef struct RpWorld;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xCutsceneData;
typedef struct xVec3;
typedef struct zGlobals;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct zGlobalSettings;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransition;
typedef struct xLinkAsset;
typedef struct xMat4x3;
typedef struct xClumpCollBSPBranchNode;
typedef struct xGridBound;
typedef struct jot;
typedef struct RxHeap;
typedef struct RwCamera;
typedef struct zAssetPickupTable;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xClumpCollBSPTriangle;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xQuat;
typedef struct RpSector;
typedef struct zScene;
typedef struct xCutsceneZbufferHack;
typedef struct xUpdateCullGroup;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct rxHeapBlockHeader;
typedef struct zLedgeGrabParams;
typedef struct xAnimState;
typedef struct xEntDrive;
typedef struct xEntShadow;
typedef struct _tagiTRCPadInfo;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimActiveEffect;
typedef struct tag_iFile;
typedef struct _tagxRumble;
typedef struct iEnv;
typedef enum _zPlayerWallJumpState;
typedef struct xEnvAsset;
typedef struct xModelInstance;
typedef struct xEntBoulder;
typedef struct split_tag;
typedef struct xAnimFile;
typedef struct _tagiPad;
typedef struct xPortalAsset;
typedef struct xAnimSingle;
typedef struct xModelPool;
typedef struct xtextbox;
typedef struct RpVertexNormal;
typedef union _class_1;
typedef struct callback;
typedef struct xVec4;
typedef struct tag_type;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct XCSNNosey;
typedef enum _zPlayerType;
typedef struct xJSPHeader;
typedef struct xCutsceneMgr;
typedef struct rxReq;
typedef enum _tagPadState;
typedef struct xBase;
typedef struct xAnimMultiFileBase;
typedef struct RpInterpolator;
typedef struct xCutsceneMgrAsset;
typedef struct RwFrame;
typedef enum RxClusterValidityReq;
typedef struct xCutscene;
typedef struct xfont;
typedef struct xCutsceneBreak;
typedef struct xGlobals;
typedef struct xBaseAsset;
typedef struct xAnimEffect;
typedef struct _tagxPad;
typedef enum _tagTRCState;
typedef struct xGroupAsset;
typedef struct RpPolygon;
typedef struct tri_data_0;
typedef enum RxNodeDefEditable;
typedef struct zLasso;
typedef enum RxClusterValid;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RpMaterialList;
typedef struct xEntAsset;
typedef struct xRot;
typedef struct xAnimMultiFile;
typedef struct xJSPNodeInfo;
typedef struct RpMaterial;
typedef struct xAnimPlay;
typedef struct xCollis;
typedef struct _tagPadAnalog;
typedef enum eGameMode;
typedef struct zPlayerCarryInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEnv;
typedef struct _zPortal;
typedef struct xUpdateCullMgr;
typedef struct zPlayerSettings;
typedef enum RwCameraProjection;
typedef struct zEnt;
typedef struct RpClump;
typedef enum RxClusterForcePresent;
typedef struct xEntFrame;
typedef struct xCylinder;
typedef struct xSurface;
typedef struct RpGeometry;
typedef struct xScene;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xShadowSimplePoly;
typedef struct tag_xFile;
typedef struct tri_data_1;
typedef struct RwSphere;
typedef struct xBound;
typedef struct RwTexDictionary;
typedef struct iFogParams;
typedef struct RpMeshHeader;
typedef struct RxOutputSpec;
typedef struct xGroup;
typedef struct RwResEntry;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xMat3x3;
typedef struct xMemPool;
typedef struct RxClusterRef;
typedef struct _tagTRCPadInfo;
typedef struct xVec2;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct RwObject;
typedef struct RpTriangle;
typedef struct RxIoSpec;
typedef struct substr;
typedef struct xCutsceneTime;
typedef struct _class_2;
typedef struct xCamera;
typedef struct RwTexture;
typedef struct xCutsceneInfo;
typedef struct RxNodeMethods;
typedef struct xModelBucket;
typedef struct RwFrustumPlane;
typedef struct _tagTRCDiskInfo;
typedef struct RwPlane;
typedef struct basic_rect;
typedef struct xFFX;
typedef struct xQCData;
typedef struct xBBox;
typedef struct RxCluster;
typedef struct _zEnv;
typedef struct xModelTag;
typedef enum _tagRumbleType;
typedef struct _class_3;
typedef struct RxPacket;
typedef enum RpWorldRenderOrder;
typedef enum RwFogType;
typedef struct analog_data;
typedef struct anim_coll_data;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef enum _tagPadInit;
typedef struct RwLinkList;

typedef void(*type_0)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RwCamera*(*type_1)(RwCamera*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef RpWorldSector*(*type_6)(RpWorldSector*);
typedef void(*type_8)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_9)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_13)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_14)(void*);
typedef int(*type_15)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_18)(RxNodeDefinition*);
typedef void(*type_22)(RxNodeDefinition*);
typedef int(*type_25)(RxPipelineNode*);
typedef void(*type_28)(jot&, xtextbox&, float, float);
typedef unsigned int(*type_29)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_32)(jot&, xtextbox&, xtextbox&);
typedef xBase*(*type_35)(unsigned int);
typedef unsigned int(*type_41)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_42)(xBase*);
typedef void(*type_43)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef char*(*type_45)(unsigned int);
typedef int(*type_47)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_54)(xAnimState*, xAnimSingle*, void*);
typedef RpClump*(*type_57)(RpClump*, void*);
typedef unsigned int(*type_58)(void*, void*);
typedef void(*type_64)(xAnimPlay*, xAnimState*);
typedef void(*type_74)(xEnt*, xScene*, float);
typedef void(*type_78)(xEnt*, xVec3*);
typedef void(*type_80)(xEnt*, xScene*, float, xEntFrame*);
typedef RwCamera*(*type_81)(RwCamera*);
typedef void(*type_82)(xEnt*);
typedef RpAtomic*(*type_84)(RpAtomic*);
typedef void(*type_86)(xMemPool*, void*);
typedef void(*type_93)(RwResEntry*);

typedef float type_2[4];
typedef xCollis type_5[18];
typedef analog_data type_7[2];
typedef RwFrustumPlane type_12[6];
typedef xCutsceneZbuffer type_16[4];
typedef RwV3d type_17[8];
typedef unsigned int type_19[2];
typedef unsigned char type_20[3];
typedef xVec3 type_21[60];
typedef char type_23[128];
typedef unsigned int type_24[2];
typedef float type_26[4];
typedef unsigned int type_27[2];
typedef char type_30[16];
typedef RpLight* type_31[2];
typedef float type_33[2];
typedef RwFrame* type_34[2];
typedef unsigned int type_36[15];
typedef float type_37[2];
typedef char type_38[16];
typedef unsigned int type_39[15];
typedef char type_40[32];
typedef unsigned int type_44[15];
typedef unsigned short type_46[3];
typedef char type_48[128];
typedef _tagTRCPadInfo type_49[4];
typedef char* type_50[4];
typedef unsigned char type_51[2];
typedef type_48 type_52[6];
typedef xAnimMultiFileEntry type_53[1];
typedef char type_55[32];
typedef xVec3 type_56[5];
typedef char type_59[4];
typedef unsigned char type_60[5];
typedef unsigned int type_61[4];
typedef unsigned char type_62[2];
typedef xVec3 type_63[3];
typedef RwTexCoords* type_65[8];
typedef unsigned int type_66[2];
typedef unsigned char type_67[2];
typedef xVec4 type_68[12];
typedef float type_69[6];
typedef float type_70[3];
typedef unsigned char type_71[22];
typedef float type_72[3];
typedef unsigned char type_73[22];
typedef xModelTag type_75[2];
typedef float type_76[3];
typedef unsigned int type_77[4096];
typedef float type_79[16];
typedef unsigned short type_83[3];
typedef xEnt* type_85[111];
typedef unsigned int type_87[72];
typedef char type_88[32];
typedef xBase* type_89[72];
typedef char type_90[32];
typedef float type_91[15];
typedef float type_92[15];
typedef xVec3 type_94[4];
typedef float type_95[22];
typedef unsigned int type_96[15];
typedef unsigned char type_97[14];
typedef xModelTag type_98[4];
typedef float type_99[22];
typedef xModelInstance* type_100[14];
typedef RwTexCoords* type_101[8];
typedef char type_102[16];
typedef unsigned char type_103[4];
typedef RxCluster type_104[1];
typedef char type_105[16];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_65 texCoords;
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

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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
	type_84 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_78 bupdate;
	type_80 move;
	type_82 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_11 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct _class_0
{
	xVec3* verts;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_58 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zPlatform
{
};

struct zEntHangable
{
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
	type_6 renderCallBack;
	RxPipeline* pipeline;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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
	type_62 PowerUp;
	type_67 InitialPowerUp;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_41 Conditional;
	type_41 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_26 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_81 beginUpdate;
	type_1 endUpdate;
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
	type_12 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
};

struct zAssetPickupTable
{
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

struct zCutsceneMgr : xCutsceneMgr
{
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpSector
{
	int type;
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
	type_87 baseCount;
	type_89 baseList;
	_zEnv* zen;
};

struct xCutsceneZbufferHack
{
	char* name;
	type_16 times;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_61 pad;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_21 tranTable;
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
	type_64 BeforeEnter;
	type_54 StateCallback;
	type_0 BeforeAnimMatrices;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_33 radius;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct tag_iFile
{
	unsigned int flags;
	type_23 path;
	int fd;
	int offset;
	int length;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_31 light;
	type_34 light_frame;
	int memlvl;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct xEntBoulder
{
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
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
	type_51 NumAnims;
	void** RawData;
};

struct _tagiPad
{
	int port;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_37 BilinearLerp;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct callback
{
	type_28 render;
	type_32 layout_update;
	type_32 render_update;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct tag_type
{
	substr name;
	type_43 parse_tag;
	type_43 reset_tag;
	void* context;
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

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xJSPHeader
{
	type_59 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_47 eventFunc;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_91 startTime;
	type_92 endTime;
	type_96 emitID;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_19 SndChannelReq;
	type_24 SndAssetID;
	type_27 SndHandle;
	XCSNNosey* cb_nosey;
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

struct xCutsceneBreak
{
	float Time;
	int Index;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_52 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_55 sceneStart;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_29 Callback;
};

struct _tagxPad
{
	type_71 value;
	type_73 last_value;
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
	type_95 up_tmr;
	type_99 down_tmr;
	type_7 analog;
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

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_46 vertIndex;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_56 lastRefs;
	type_60 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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
	type_75 BubbleWandTag;
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
	type_36 Inv_PatsSock;
	type_39 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_44 Inv_LevelPickups;
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
	type_85 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_97 sb_model_indices;
	type_100 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_53 Files;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_0 BeforeAnimMatrices;
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

struct _tagPadAnalog
{
	char x;
	char y;
};

enum eGameMode
{
	eGameMode_Boot,
	eGameMode_Intro,
	eGameMode_Title,
	eGameMode_Start,
	eGameMode_Load,
	eGameMode_Options,
	eGameMode_Save,
	eGameMode_Pause,
	eGameMode_Stall,
	eGameMode_WorldMap,
	eGameMode_MonsterGallery,
	eGameMode_ConceptArtGallery,
	eGameMode_Game,
	eGameMode_Count
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_14 activateCB;
	type_14 deactivateCB;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_69 MoveSpeed;
	type_70 AnimSneak;
	type_72 AnimWalk;
	type_76 AnimRun;
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
	type_103 talk_filter;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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
	type_57 callback;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xSurface
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
	type_101 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_35 resolvID;
	type_42 base2Name;
	type_45 id2Name;
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

struct xShadowSimplePoly
{
	type_63 vert;
	xVec3 norm;
};

struct tag_xFile
{
	type_40 relname;
	tag_iFile ps;
	void* user_data;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_20 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_93 destroyNotify;
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
	type_79 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_86 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int id;
	_tagTRCState state;
};

struct xVec2
{
	float x;
	float y;
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
	type_94 corner;
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
	type_5 colls;
	type_8 post;
	type_9 depenq;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RpTriangle
{
	type_83 vertIndex;
	short matIndex;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct substr
{
	char* text;
	unsigned int size;
};

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct _class_2
{
	float t;
	float u;
	float v;
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
	type_68 frustplane;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_88 name;
	type_90 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_102 SoundLeft;
	type_105 SoundRight;
};

struct RxNodeMethods
{
	type_15 nodeBody;
	type_18 nodeInit;
	type_22 nodeTerm;
	type_25 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_13 configMsgHandler;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct _tagTRCDiskInfo
{
	_tagTRCState state;
	_tagTRCState id;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_2 wt;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_104 clusters;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct anim_coll_data
{
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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

struct RwLinkList
{
	RwLLLink link;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_30 buffer;
type_38 buffer;
type_49 gTrcPad;
_tagTRCDiskInfo gTrcDisk;
unsigned int gInTRC;
iColor_tag yellow;
char* message_text;
unsigned int standalone;
callback text_cb;
int bad_card_available;
int bad_card_needed;
eGameMode gGameMode;
zGlobals globals;
type_77 ourGlobals;
unsigned int gBusStopIsRunning;

void RenderText(char* text, unsigned char enabled);
void render_mem_card_no_space(int needed, int available, int neededFiles, unsigned char enabled);
void xTRCPad(int pad_id, _tagTRCState state);
int DisplayMessage(_tagTRCState state);
void xTRCReset();
void xTRCRender();
void render_message(char* s);
unsigned int pad_message_valid();
void xTRCInit();

// RenderText__FPCcb
// Start address: 0x20ef30
void RenderText(char* text, unsigned char enabled)
{
	xtextbox tb;
	char @4079;
}

// render_mem_card_no_space__Fiiib
// Start address: 0x20f280
void render_mem_card_no_space(int needed, int available, int neededFiles, unsigned char enabled)
{
	char* error_text;
}

// xTRCPad__Fi12_tagTRCState
// Start address: 0x20f2c0
void xTRCPad(int pad_id, _tagTRCState state)
{
	iColor_tag clear;
	int display_message;
	int i;
	type_50 autoSaveFailed;
	xEnt* ent;
}

// DisplayMessage__F12_tagTRCState
// Start address: 0x20f430
int DisplayMessage(_tagTRCState state)
{
	iColor_tag clear;
	RwCamera* cam;
	RwRGBA bg;
}

// xTRCReset__Fv
// Start address: 0x20f620
void xTRCReset()
{
}

// xTRCRender__Fv
// Start address: 0x20f660
void xTRCRender()
{
}

// render_message__FPCc
// Start address: 0x20f690
void render_message(char* s)
{
	xtextbox tb;
	char @3928;
}

// pad_message_valid__Fv
// Start address: 0x20f9b0
unsigned int pad_message_valid()
{
}

// xTRCInit__Fv
// Start address: 0x20fb90
void xTRCInit()
{
}

