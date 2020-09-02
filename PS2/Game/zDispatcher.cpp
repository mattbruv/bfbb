typedef struct RpGeometry;
typedef struct RxNodeMethods;
typedef struct RwCamera;
typedef struct xBase;
typedef struct iFogParams;
typedef struct xMemPool;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct xBound;
typedef struct xAnimSingle;
typedef struct _tagxRumble;
typedef struct xAnimPlay;
typedef struct xUpdateCullGroup;
typedef struct RwRaster;
typedef struct xEnvAsset;
typedef struct RwV3d;
typedef struct xAnimState;
typedef struct st_ZDISPATCH_DATA;
typedef struct RwTexCoords;
typedef struct zEnt;
typedef struct xEntMotionOrbitData;
typedef struct RwTexDictionary;
typedef struct xScene;
typedef struct RwFrustumPlane;
typedef struct xMovePoint;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct st_ZDISPATCH_CONTEXT;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RwPlane;
typedef struct RpMeshHeader;
typedef struct xBaseAsset;
typedef struct RxPipelineNode;
typedef struct _zPortal;
typedef struct xSerial;
typedef struct xMovePointAsset;
typedef struct xQuat;
typedef struct xVec3;
typedef struct RxCluster;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct RxPipelineNodeParam;
typedef struct xMat4x3;
typedef struct RxPipeline;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef enum _tagPadState;
typedef union _class_0;
typedef struct RpAtomic;
typedef struct xEntBoulder;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntMechData;
typedef enum RwFogType;
typedef struct xGlobals;
typedef struct iColor_tag;
typedef struct xModelPool;
typedef struct xEntMotionSplineData;
typedef struct zEntHangable;
typedef struct RwRGBAReal;
typedef struct xEntShadow;
typedef struct xSpline3;
typedef struct RwObjectHasFrame;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct _tagxPad;
typedef struct xAnimFile;
typedef struct RwLinkList;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct rxHeapFreeBlock;
typedef struct st_ZDISPATCH_DEPOT;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xModelTag;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xPortalAsset;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct zJumpParam;
typedef struct rxHeapSuperBlockDescriptor;
typedef enum RpWorldRenderOrder;
typedef struct RpWorld;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMaterial;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xLinkAsset;
typedef struct xSurface;
typedef struct xVec2;
typedef struct zPlatform;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xJSPHeader;
typedef struct xModelBucket;
typedef struct rxHeapBlockHeader;
typedef struct xEntMotionMechData;
typedef struct zCutsceneMgr;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct RpWorldSector;
typedef struct xEntDrive;
typedef struct xEntPenData;
typedef struct RpMorphTarget;
typedef struct xCoef;
typedef struct zAssetPickupTable;
typedef struct _zEnv;
typedef struct RpLight;
typedef struct xClumpCollBSPTree;
typedef struct zGlobals;
typedef struct xEntOrbitData;
typedef struct basic_rect;
typedef struct xVec4;
typedef struct xEntFrame;
typedef struct zGlobalSettings;
typedef struct RwSurfaceProperties;
typedef struct xGroup;
typedef struct RwMatrixTag;
typedef struct xUpdateCullEnt;
typedef struct rxReq;
typedef struct xGridBound;
typedef struct zPlatFMRunTime;
typedef struct xCoef3;
typedef struct zPlayerLassoInfo;
typedef struct xEntMotion;
typedef enum RxClusterValidityReq;
typedef struct zScene;
typedef struct xPlatformAsset;
typedef struct xEntMotionAsset;
typedef struct zLedgeGrabParams;
typedef struct xShadowSimplePoly;
typedef struct xEnv;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef enum RxNodeDefEditable;
typedef enum _zPlayerWallJumpState;
typedef enum RxClusterValid;
typedef struct tri_data_0;
typedef struct xRot;
typedef struct zLasso;
typedef struct xEntSplineData;
typedef struct tri_data_1;
typedef struct _class_1;
typedef struct xLightKitLight;
typedef enum _tagRumbleType;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum _zPlayerType;
typedef struct xCollis;
typedef struct xEntMotionPenData;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RpInterpolator;
typedef struct xCylinder;
typedef struct analog_data;
typedef struct xAnimMultiFileBase;
typedef struct xBox;
typedef struct xEntMPData;
typedef struct RxClusterDefinition;
typedef struct _class_2;
typedef struct RpPolygon;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RwSphere;
typedef enum en_DISPATCH_COMMAND;
typedef struct RpMaterialList;
typedef struct xEntMotionERData;
typedef struct xFFX;
typedef struct zPlayerCarryInfo;
typedef struct xCamera;
typedef struct xQCData;
typedef struct zPlayerSettings;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxIoSpec;
typedef struct anim_coll_data;

typedef RwCamera*(*type_1)(RwCamera*);
typedef void(*type_7)(xAnimPlay*, xAnimState*);
typedef int(*type_8)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_9)(void*);
typedef void(*type_11)(xMemPool*, void*);
typedef xBase*(*type_12)(unsigned int);
typedef void(*type_14)(xEnt*, xScene*, float, xEntCollis*);
typedef RpClump*(*type_16)(RpClump*, void*);
typedef unsigned int(*type_17)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_19)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef char*(*type_24)(xBase*);
typedef void(*type_25)(RwResEntry*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_27)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_28)(xEnt*, xVec3*, xMat4x3*);
typedef char*(*type_29)(unsigned int);
typedef int(*type_31)(RxNodeDefinition*);
typedef RpAtomic*(*type_33)(RpAtomic*);
typedef void(*type_35)(RxNodeDefinition*);
typedef RwCamera*(*type_37)(RwCamera*);
typedef int(*type_38)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);
typedef void(*type_42)(RxPipelineNode*);
typedef unsigned int(*type_43)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_47)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_55)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_58)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_62)(RpWorldSector*);
typedef unsigned int(*type_63)(void*, void*);
typedef int(*type_79)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_82)(xEnt*, xScene*, float);
typedef void(*type_87)(xEnt*, xVec3*);
typedef void(*type_89)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_92)(xEnt*);

typedef xVec4 type_0[12];
typedef unsigned char type_2[2];
typedef unsigned int type_3[2];
typedef unsigned char type_4[2];
typedef RwTexCoords* type_5[8];
typedef float type_6[6];
typedef xCollis type_10[18];
typedef float type_13[3];
typedef char type_15[16];
typedef char type_18[32];
typedef float type_20[3];
typedef char type_21[32];
typedef xModelTag type_22[2];
typedef float type_23[3];
typedef unsigned short type_30[3];
typedef unsigned char type_32[2];
typedef xEnt* type_34[111];
typedef RxCluster type_36[1];
typedef char type_40[128];
typedef type_40 type_41[6];
typedef unsigned char type_44[14];
typedef xModelTag type_45[4];
typedef char type_46[32];
typedef float type_48[2];
typedef xModelInstance* type_49[14];
typedef unsigned char type_50[3];
typedef char type_51[512];
typedef RwTexCoords* type_52[8];
typedef unsigned char type_53[4];
typedef RwFrustumPlane type_54[6];
typedef unsigned int type_56[72];
typedef float type_57[4];
typedef char type_59[4];
typedef xBase* type_60[72];
typedef RwV3d type_61[8];
typedef float type_64[4];
typedef unsigned char type_65[22];
typedef unsigned char type_66[22];
typedef float type_67[4];
typedef xVec3 type_68[5];
typedef float type_69[12];
typedef char type_70[256];
typedef type_70 type_71[20];
typedef unsigned char type_72[5];
typedef float type_73[12];
typedef xVec3 type_74[3];
typedef float type_75[12];
typedef float type_76[12];
typedef xVec3 type_77[60];
typedef float type_78[12];
typedef float type_80[12];
typedef float type_81[22];
typedef RpLight* type_83[2];
typedef float type_84[22];
typedef char type_85[512];
typedef float type_86[16];
typedef RwFrame* type_88[2];
typedef float type_90[2];
typedef unsigned char type_91[2];
typedef unsigned int type_93[15];
typedef unsigned char type_94[3];
typedef unsigned int type_95[15];
typedef unsigned int type_96[4];
typedef unsigned int type_97[15];
typedef unsigned short type_98[3];
typedef analog_data type_99[2];
typedef unsigned char type_100[2];
typedef xVec3 type_101[4];
typedef xAnimMultiFileEntry type_102[1];
typedef char type_103[16];

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
	type_52 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RxNodeMethods
{
	type_27 nodeBody;
	type_31 nodeInit;
	type_35 nodeTerm;
	type_38 pipelineNodeInit;
	type_42 pipelineNodeTerm;
	type_47 pipelineNodeConfig;
	type_55 configMsgHandler;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_37 beginUpdate;
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
	type_54 frustumPlanes;
	RwBBox frustumBoundBox;
	type_61 frustumCorners;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_79 eventFunc;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_11 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_17 Callback;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_94 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_90 BilinearLerp;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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
	type_26 BeforeAnimMatrices;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct RwV3d
{
	float x;
	float y;
	float z;
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
	type_7 BeforeEnter;
	type_58 StateCallback;
	type_26 BeforeAnimMatrices;
};

struct st_ZDISPATCH_DATA : xBase
{
	xBaseAsset* rawass;
	int placeholder;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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
	type_12 resolvID;
	type_24 base2Name;
	type_29 id2Name;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_32 pad;
	float delay;
	xSpline3* spl;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_25 destroyNotify;
};

struct st_ZDISPATCH_CONTEXT
{
	en_DISPATCH_COMMAND cmd;
	void* indata;
	void* inxtra;
	void* result;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	_class_1 anim_coll;
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
	type_82 update;
	type_82 endUpdate;
	type_87 bupdate;
	type_89 move;
	type_92 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_28 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct RpTriangle
{
	type_30 vertIndex;
	short matIndex;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_36 clusters;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_33 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xEntBoulder
{
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_41 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_46 sceneStart;
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

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct zEntHangable
{
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_48 radius;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_39 sync;
};

struct st_SERIAL_CLIENTINFO
{
};

struct _tagxPad
{
	type_65 value;
	type_66 last_value;
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
	type_81 up_tmr;
	type_84 down_tmr;
	type_99 analog;
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
	type_100 NumAnims;
	void** RawData;
};

struct RwLinkList
{
	RwLLLink link;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_83 light;
	type_88 light_frame;
	int memlvl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_43 Conditional;
	type_43 Callback;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_16 callback;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct st_ZDISPATCH_DEPOT
{
	st_ZDISPATCH_DATA* raw_pool;
	int raw_cnt;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_57 wt;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_9 activateCB;
	type_9 deactivateCB;
};

struct _tagiPad
{
	int port;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_62 renderCallBack;
	RxPipeline* pipeline;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_67 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_50 pad;
	void* moprops;
};

struct xVec2
{
	float x;
	float y;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_102 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_18 name;
	type_21 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpSector
{
	int type;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_96 pad;
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

struct zCutsceneMgr
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_5 texCoords;
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

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xCoef
{
	type_64 a;
};

struct zAssetPickupTable
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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
	type_2 PowerUp;
	type_4 InitialPowerUp;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_63 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct rxReq
{
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

struct zPlatFMRunTime
{
	unsigned int flags;
	type_69 tmrs;
	type_73 ttms;
	type_75 atms;
	type_76 dtms;
	type_78 vms;
	type_80 dss;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_56 baseCount;
	type_60 baseList;
	_zEnv* zen;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_77 tranTable;
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

struct xShadowSimplePoly
{
	type_74 vert;
	xVec3 norm;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xRot
{
	xVec3 axis;
	float angle;
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
	type_68 lastRefs;
	type_72 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xEntSplineData
{
	int unknown;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct _class_1
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_86 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_91 pad;
	float len;
	float range;
	float period;
	float phase;
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
	type_101 corner;
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
	type_14 post;
	type_19 depenq;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct _class_2
{
	float t;
	float u;
	float v;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_98 vertIndex;
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
	type_22 BubbleWandTag;
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
	type_45 HangPawTag;
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
	type_93 Inv_PatsSock;
	type_95 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_97 Inv_LevelPickups;
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
	type_3 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_34 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_44 sb_model_indices;
	type_49 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

enum en_DISPATCH_COMMAND
{
	ZDSP_CMD_INITDFLT = 0xffffffff,
	ZDSP_CMD_CTRL_CFGGET,
	ZDSP_CMD_CTRL_CFGSET,
	ZDSP_CMD_CTRL_VIBEGET,
	ZDSP_CMD_CTRL_VIBESET,
	ZDSP_CMD_SNDMOD_GET,
	ZDSP_CMD_SNDMOD_SET,
	ZDSP_CMD_SNDVOL_GET,
	ZDSP_CMD_SNDVOL_SET,
	ZDSP_CMD_SNDVOL_INCR,
	ZDSP_CMD_SNDVOL_DECR,
	ZDSP_CMD_MUSVOL_GET,
	ZDSP_CMD_MUSVOL_SET,
	ZDSP_CMD_MUSVOL_INCR,
	ZDSP_CMD_MUSVOL_DECR,
	ZDSP_CMD_SFXVOL_GET,
	ZDSP_CMD_SFXVOL_SET,
	ZDSP_CMD_SFXVOL_INCR,
	ZDSP_CMD_SFXVOL_DECR,
	ZDSP_CMD_GSTATE_GET,
	ZDSP_CMD_GSTATE_SET,
	ZDSP_CMD_GMODE_GET,
	ZDSP_CMD_GMODE_SET,
	ZDSP_CHECKPNT_SET,
	ZDSP_CMD_NOMORE
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xFFX
{
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
	type_0 frustplane;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_6 MoveSpeed;
	type_13 AnimSneak;
	type_20 AnimWalk;
	type_23 AnimRun;
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
	type_53 talk_filter;
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

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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

type_103 buffer;
type_15 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
int g_zdsp_init;
int g_zdsp_dblog_init;
st_ZDISPATCH_DEPOT g_zdsp_depot;
int oldVibrationOption;
unsigned int oldSoundMode;
unsigned int oldMusicVolume;
unsigned int oldSFXVolume;
zGlobals globals;
type_71 zEventLogBuf;
unsigned char menu_fmv_played;
type_8 ZDSP_elcb_event;
unsigned int gActiveHeap;

int ZDSP_elcb_event(xBase* xb, unsigned int toEvent, float* toParam, xBase* toParamWidget);
int ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt);
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s);
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata);
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass);
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int idx);
st_ZDISPATCH_DATA* zDispatcher_memPool(int cnt);
void zDispatcher_sceneFinish();
void zDispatcher_scenePrepare();
void zDispatcher_Shutdown();
void zDispatcher_Startup();

// ZDSP_elcb_event__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x130980
int ZDSP_elcb_event(xBase* xb, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
	st_ZDISPATCH_DATA* dspdata;
	iColor_tag black;
	iColor_tag clear;
	type_51 events;
	unsigned int c;
	unsigned int len;
	unsigned int i;
	type_85 log;
}

// ZDSP_doCommand__FP17st_ZDISPATCH_DATAP20st_ZDISPATCH_CONTEXT
// Start address: 0x131510
int ZDSP_doCommand(st_ZDISPATCH_CONTEXT* cmdCtxt)
{
	int iv;
	en_DISPATCH_COMMAND cmd;
	void* indata;
	void* result;
	int warned;
}

// zDispatcher_Load__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x131b40
void zDispatcher_Load(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
}

// zDispatcher_Save__FP17st_ZDISPATCH_DATAP7xSerial
// Start address: 0x131b50
void zDispatcher_Save(st_ZDISPATCH_DATA* dspdata, xSerial* s)
{
}

// zDispatcher_InitDep__FP17st_ZDISPATCH_DATAP6zScene
// Start address: 0x131b60
void zDispatcher_InitDep(st_ZDISPATCH_DATA* dspdata)
{
}

// zDispatcher_Init__FP17st_ZDISPATCH_DATAP10xBaseAsset
// Start address: 0x131b70
void zDispatcher_Init(st_ZDISPATCH_DATA* dspdata, xBaseAsset* bass)
{
}

// zDispatcher_getInst__FP17st_ZDISPATCH_DATAi
// Start address: 0x131bf0
st_ZDISPATCH_DATA* zDispatcher_getInst(st_ZDISPATCH_DATA* pool, int idx)
{
}

// zDispatcher_memPool__Fi
// Start address: 0x131c10
st_ZDISPATCH_DATA* zDispatcher_memPool(int cnt)
{
	st_ZDISPATCH_DATA* pool;
	st_ZDISPATCH_DEPOT* depot;
}

// zDispatcher_sceneFinish__Fv
// Start address: 0x131c90
void zDispatcher_sceneFinish()
{
	st_ZDISPATCH_DEPOT* depot;
}

// zDispatcher_scenePrepare__Fv
// Start address: 0x131cd0
void zDispatcher_scenePrepare()
{
	st_ZDISPATCH_DEPOT* depot;
}

// zDispatcher_Shutdown__Fv
// Start address: 0x131d10
void zDispatcher_Shutdown()
{
}

// zDispatcher_Startup__Fv
// Start address: 0x131d20
void zDispatcher_Startup()
{
}

