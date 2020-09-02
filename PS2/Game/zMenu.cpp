typedef struct zLasso;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct xEnt;
typedef struct xAnimTransition;
typedef struct RwObjectHasFrame;
typedef struct xModelPool;
typedef struct RpMaterial;
typedef struct xModelInstance;
typedef struct xClumpCollBSPTree;
typedef struct xLightKitLight;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimSingle;
typedef struct xCollis;
typedef enum _tagRumbleType;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct xEntOrbitData;
typedef enum _zPlayerType;
typedef struct RwV2d;
typedef struct xUpdateCullGroup;
typedef struct RxNodeDefinition;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpClump;
typedef struct xClumpCollBSPBranchNode;
typedef struct zPlatFMRunTime;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpGeometry;
typedef struct xEntShadow;
typedef struct xCoef3;
typedef struct RpWorldSector;
typedef struct analog_data;
typedef struct RxPipeline;
typedef struct xEntMotion;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineCluster;
typedef struct xVec3;
typedef struct xSurface;
typedef struct xMat4x3;
typedef struct st_XSAVEGAME_DATA;
typedef struct RxPipelineNodeParam;
typedef struct anim_coll_data;
typedef struct xPlatformAsset;
typedef struct _zEnv;
typedef struct xEntMotionAsset;
typedef struct xGroup;
typedef struct RxHeap;
typedef struct RpMorphTarget;
typedef struct xAnimPlay;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct xMovePointAsset;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct xQuat;
typedef struct xEnvAsset;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct xQCData;
typedef enum eGameMode;
typedef struct zCheckPoint;
typedef struct RwTexCoords;
typedef struct zPlayerGlobals;
typedef struct RpVertexNormal;
typedef struct rxHeapBlockHeader;
typedef struct _zPortal;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xEntSplineData;
typedef struct zPlayerCarryInfo;
typedef struct _tagiTRCPadInfo;
typedef struct xUpdateCullMgr;
typedef struct RpMeshHeader;
typedef struct xCamera;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zPlayerSettings;
typedef struct xBase;
typedef struct xEntMotionPenData;
typedef union _class_0;
typedef struct zEnt;
typedef struct RwCamera;
typedef struct xVec4;
typedef struct xUpdateCullEnt;
typedef struct RpTriangle;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct xEntMPData;
typedef struct rxReq;
typedef enum RxClusterValidityReq;
typedef struct iEnv;
typedef struct xLinkAsset;
typedef struct xMovePoint;
typedef struct iFogParams;
typedef struct xAnimFile;
typedef struct xBound;
typedef struct _tagxRumble;
typedef enum _tagPadInit;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct xSpline3;
typedef struct xScene;
typedef struct xAnimTransitionList;
typedef struct xEntMotionERData;
typedef enum RxNodeDefEditable;
typedef enum _tagTRCState;
typedef enum RxClusterValid;
typedef struct xModelTag;
typedef struct xRot;
typedef struct xPortalAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xJSPHeader;
typedef struct xCylinder;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct xVec2;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xBox;
typedef struct _tagxPad;
typedef struct xModelBucket;
typedef struct RxClusterDefinition;
typedef struct xBBox;
typedef struct xEntAsset;
typedef struct xEntDrive;
typedef struct xEntMotionOrbitData;
typedef struct RwSphere;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RpLight;
typedef struct RwTexDictionary;
typedef struct _tagiPad;
typedef struct RpWorld;
typedef struct zJumpParam;
typedef struct RxOutputSpec;
typedef struct xEntFrame;
typedef struct basic_rect;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct xEntMechData;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct xEntMotionSplineData;
typedef struct zPlatform;
typedef struct _tagTRCPadInfo;
typedef struct RxIoSpec;
typedef struct xShadowSimplePoly;
typedef struct zCutsceneMgr;
typedef struct xAnimMultiFileEntry;
typedef struct RxNodeMethods;
typedef struct xAnimActiveEffect;
typedef struct RwFrame;
typedef struct zAssetPickupTable;
typedef struct tri_data_0;
typedef struct RwFrustumPlane;
typedef struct xEntERData;
typedef struct xEntMotionMPData;
typedef struct tri_data_1;
typedef struct _class_1;
typedef struct zGlobals;
typedef struct RwPlane;
typedef struct zGlobalSettings;
typedef struct RxCluster;
typedef struct xEnv;
typedef struct zPlayerLassoInfo;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RxPacket;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef struct xEntMotionMechData;
typedef struct RwRGBAReal;
typedef struct _class_2;
typedef enum _zPlayerWallJumpState;
typedef struct xEntPenData;
typedef struct xCoef;
typedef struct RwLinkList;
typedef struct RpMaterialList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef void(*type_1)(xEnt*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_9)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_12)(xEnt*, xVec3*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef unsigned int(*type_22)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_25)(xAnimPlay*, xAnimState*);
typedef int(*type_27)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_30)(xEnt*, xScene*, float, xEntCollis*);
typedef int(*type_32)(RxNodeDefinition*);
typedef unsigned int(*type_33)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_34)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_35)(RxNodeDefinition*);
typedef int(*type_36)(RxPipelineNode*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_38)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_40)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef xBase*(*type_42)(unsigned int);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef char*(*type_48)(xBase*);
typedef void(*type_50)(void*);
typedef char*(*type_52)(unsigned int);
typedef unsigned int(*type_54)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_71)(RpWorldSector*);
typedef RwCamera*(*type_78)(RwCamera*);
typedef unsigned int(*type_80)(void*, void*);
typedef void(*type_81)(xMemPool*, void*);
typedef void(*type_85)(xEnt*, xScene*, float);
typedef void(*type_90)(RwResEntry*);
typedef void(*type_92)(xEnt*, xScene*, float, xEntFrame*);

typedef unsigned char type_3[2];
typedef xVec3 type_4[4];
typedef float type_5[22];
typedef xAnimMultiFileEntry type_7[1];
typedef float type_8[22];
typedef unsigned int type_11[15];
typedef float type_13[4];
typedef float type_14[12];
typedef unsigned int type_15[15];
typedef float type_16[12];
typedef float type_18[12];
typedef RwFrustumPlane type_19[6];
typedef unsigned int type_20[15];
typedef float type_21[12];
typedef RwTexCoords* type_23[8];
typedef float type_24[12];
typedef xCollis type_26[18];
typedef float type_28[12];
typedef analog_data type_29[2];
typedef RwV3d type_31[8];
typedef unsigned char type_39[2];
typedef unsigned short type_41[3];
typedef unsigned char type_44[2];
typedef xVec4 type_45[12];
typedef unsigned int type_46[2];
typedef unsigned char type_47[2];
typedef float type_49[6];
typedef float type_51[3];
typedef float type_53[3];
typedef xModelTag type_55[2];
typedef float type_56[3];
typedef float type_57[2];
typedef unsigned int type_58[72];
typedef xEnt* type_59[111];
typedef char type_60[4];
typedef char type_61[64];
typedef char type_62[16];
typedef type_61 type_63[3];
typedef RwTexCoords* type_64[8];
typedef xBase* type_65[72];
typedef float type_66[4];
typedef unsigned int type_67[4];
typedef char type_68[16];
typedef char type_69[128];
typedef type_69 type_70[6];
typedef unsigned char type_72[14];
typedef xModelTag type_73[4];
typedef char type_74[32];
typedef xModelInstance* type_75[14];
typedef unsigned char type_76[2];
typedef unsigned char type_77[4];
typedef xVec3 type_79[3];
typedef unsigned char type_82[22];
typedef RpLight* type_83[2];
typedef unsigned char type_84[22];
typedef char type_86[32];
typedef RwFrame* type_87[2];
typedef char type_88[32];
typedef float type_89[16];
typedef unsigned char type_91[3];
typedef float type_93[2];
typedef xVec3 type_94[5];
typedef _tagxPad type_95[4];
typedef unsigned char type_96[3];
typedef unsigned char type_97[5];
typedef _tagTRCPadInfo type_98[4];
typedef xVec3 type_99[60];
typedef RxCluster type_100[1];
typedef float type_101[4];
typedef unsigned short type_102[3];

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
	type_94 lastRefs;
	type_97 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_25 BeforeEnter;
	type_9 StateCallback;
	type_37 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_7 Files;
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
	type_85 update;
	type_85 endUpdate;
	type_12 bupdate;
	type_92 move;
	type_1 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_38 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_54 Conditional;
	type_54 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_89 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_93 BilinearLerp;
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

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct RwV2d
{
	float x;
	float y;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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
	type_4 corner;
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
	type_26 colls;
	type_30 post;
	type_34 depenq;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_14 tmrs;
	type_16 ttms;
	type_18 atms;
	type_21 dtms;
	type_24 vms;
	type_28 dss;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_64 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_57 radius;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_23 texCoords;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_91 pad;
	void* moprops;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct st_XSAVEGAME_DATA
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct anim_coll_data
{
};

struct xPlatformAsset
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_37 BeforeAnimMatrices;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_102 vertIndex;
};

struct xFFX
{
};

struct xQuat
{
	xVec3 v;
	float s;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_33 Callback;
};

struct RwV3d
{
	float x;
	float y;
	float z;
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

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_55 BubbleWandTag;
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
	type_73 HangPawTag;
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
	type_11 Inv_PatsSock;
	type_15 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_20 Inv_LevelPickups;
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
	type_46 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_59 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_72 sb_model_indices;
	type_75 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_67 pad;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xEntSplineData
{
	int unknown;
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

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
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
	type_50 activateCB;
	type_50 deactivateCB;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_45 frustplane;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_90 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_81 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_49 MoveSpeed;
	type_51 AnimSneak;
	type_53 AnimWalk;
	type_56 AnimRun;
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
	type_77 talk_filter;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_40 eventFunc;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_39 pad;
	float len;
	float range;
	float period;
	float phase;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_78 beginUpdate;
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
	type_19 frustumPlanes;
	RwBBox frustumBoundBox;
	type_31 frustumCorners;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_80 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpTriangle
{
	type_41 vertIndex;
	short matIndex;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_43 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct rxReq
{
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_83 light;
	type_87 light_frame;
	int memlvl;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_13 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_3 NumAnims;
	void** RawData;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_96 pad;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_42 resolvID;
	type_48 base2Name;
	type_52 id2Name;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_66 wt;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct xJSPHeader
{
	type_60 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_70 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_74 sceneStart;
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

struct xVec2
{
	float x;
	float y;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_88 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpSector
{
	int type;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct _tagxPad
{
	type_82 value;
	type_84 last_value;
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
	type_5 up_tmr;
	type_8 down_tmr;
	type_29 analog;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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

struct _tagPadAnalog
{
	char x;
	char y;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagiPad
{
	int port;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xEntMotionSplineData
{
	int unknown;
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

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int id;
	_tagTRCState state;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xShadowSimplePoly
{
	type_79 vert;
	xVec3 norm;
};

struct zCutsceneMgr
{
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct RxNodeMethods
{
	type_27 nodeBody;
	type_32 nodeInit;
	type_35 nodeTerm;
	type_36 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_22 configMsgHandler;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

struct zAssetPickupTable
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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
	type_44 PowerUp;
	type_47 InitialPowerUp;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_100 clusters;
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
	type_58 baseCount;
	type_65 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_99 tranTable;
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

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct _class_2
{
	float t;
	float u;
	float v;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct xCoef
{
	type_101 a;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

type_62 buffer;
type_68 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
unsigned char menu_fmv_played;
int sFirstBoot;
int logoTmr;
float time_elapsed;
float time_last;
float time_current;
long t1;
unsigned int sPlayerMarkerStartID;
unsigned int sPlayerMarkerStartCamID;
unsigned int s_dbloop_elaptick;
float s_dbloop_elapsec;
float s_dbloop_fps;
float sAttractMode_timer;
int promptSel;
int card;
int var;
int fullCard;
int sInMenu;
float holdTmr;
type_63 corruptFiles;
int corruptFileCount;
zGlobals globals;
eGameMode gGameMode;
type_98 gTrcPad;
unsigned int gFrameCount;
type_95 mPad;
_zEnv* gCurEnv;

int zMenuIsFirstBoot();
unsigned int zMenuGetBadCard();
int zMenuCardCheckStartup(int* bytesNeeded, int* availOnDisk, int* neededFiles);
unsigned int zMenuUpdateMode();
unsigned int zMenuLoop();
void zMenuSetup();
void zMenuExit();
void zMenuInit(unsigned int theSceneID);
int zMenuRunning();

// zMenuIsFirstBoot__Fv
// Start address: 0x18a310
int zMenuIsFirstBoot()
{
}

// zMenuGetBadCard__Fv
// Start address: 0x18a320
unsigned int zMenuGetBadCard()
{
}

// zMenuCardCheckStartup__FPiPiPi
// Start address: 0x18a330
int zMenuCardCheckStartup(int* bytesNeeded, int* availOnDisk, int* neededFiles)
{
	st_XSAVEGAME_DATA* ldinst;
	int tgtcnt;
	int tgtmax;
	int rc;
	int tgtslot;
}

// zMenuUpdateMode__Fv
// Start address: 0x18a640
unsigned int zMenuUpdateMode()
{
	unsigned int retVal;
	float elapsed1;
}

// zMenuLoop__Fv
// Start address: 0x18a710
unsigned int zMenuLoop()
{
	unsigned int s;
	iColor_tag black;
	iColor_tag clear;
	int ostrich_delay;
	int draw_black;
	int ss;
	xEnt* title1;
	xEnt* title2;
	char* src;
	char* tgt;
}

// zMenuSetup__Fv
// Start address: 0x18ae00
void zMenuSetup()
{
}

// zMenuExit__Fv
// Start address: 0x18aeb0
void zMenuExit()
{
}

// zMenuInit__FUi
// Start address: 0x18aef0
void zMenuInit(unsigned int theSceneID)
{
}

// zMenuRunning__Fv
// Start address: 0x18af80
int zMenuRunning()
{
}

