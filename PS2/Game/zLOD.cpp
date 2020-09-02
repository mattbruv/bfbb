typedef struct xAnimTransition;
typedef struct RwObjectHasFrame;
typedef struct xParGroup;
typedef struct xFFX;
typedef struct RpAtomic;
typedef struct xPEEntBone;
typedef struct xEnt;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct xModelPool;
typedef struct xParSys;
typedef struct xModelInstance;
typedef struct RpMaterial;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xLightKitLight;
typedef struct RwRaster;
typedef struct xEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPTree;
typedef struct xParEmitterAsset;
typedef struct xBase;
typedef struct RpWorld;
typedef struct RxNodeDefinition;
typedef struct xShadowSimpleCache;
typedef struct xEntCollis;
typedef struct xCollis;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntShadow;
typedef struct RpGeometry;
typedef struct xClumpCollBSPBranchNode;
typedef struct RxPipeline;
typedef struct xParEmitterPropsAsset;
typedef struct RxPipelineCluster;
typedef struct zEntDestructObj;
typedef struct RpWorldSector;
typedef struct xVec3;
typedef struct RxPipelineNodeParam;
typedef struct xSurface;
typedef struct xMat4x3;
typedef struct xClumpCollBSPTriangle;
typedef struct anim_coll_data;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct zParEmitter;
typedef struct _tagxPad;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct RpPolygon;
typedef struct xPECircle;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xEnvAsset;
typedef struct rxHeapBlockHeader;
typedef struct RpVertexNormal;
typedef struct zPlatform;
typedef struct _tagxRumble;
typedef struct xQCData;
typedef struct zGlobals;
typedef struct RxPipelineRequiresCluster;
typedef struct _zPortal;
typedef struct xAnimTable;
typedef struct zGlobalSettings;
typedef struct RpMeshHeader;
typedef struct xGroup;
typedef struct zLODTable;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zScene;
typedef struct zAssetPickupTable;
typedef struct xUpdateCullEnt;
typedef struct zPlayerLassoInfo;
typedef struct zCutsceneMgr;
typedef struct xGroupAsset;
typedef union _class_0;
typedef struct xVec4;
typedef struct _tagEmitSphere;
typedef struct zJumpParam;
typedef struct RwSurfaceProperties;
typedef struct zLedgeGrabParams;
typedef struct RwMatrixTag;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct zEntHangable;
typedef enum _zPlayerWallJumpState;
typedef enum RxClusterValidityReq;
typedef struct xLinkAsset;
typedef struct iEnv;
typedef struct xAnimFile;
typedef struct _tagEmitRect;
typedef struct xLightKit;
typedef struct zEnt;
typedef enum RxNodeDefEditable;
typedef struct xJSPNodeInfo;
typedef enum _tagRumbleType;
typedef struct xAnimTransitionList;
typedef enum RxClusterValid;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xRot;
typedef struct xModelTag;
typedef struct xPortalAsset;
typedef struct analog_data;
typedef struct xModelBucket;
typedef struct xEntBoulder;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef struct xScene;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xPEEntBound;
typedef struct xCylinder;
typedef struct _tagEmitLine;
typedef struct xJSPHeader;
typedef struct zCheckPoint;
typedef struct zEntDestructObjAsset;
typedef struct zPlayerGlobals;
typedef struct xBound;
typedef struct xVec2;
typedef struct RwTexture;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpSector;
typedef struct zPlayerCarryInfo;
typedef struct xUpdateCullMgr;
typedef struct xEntAsset;
typedef struct xBBox;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct xEntDrive;
typedef struct zPlayerSettings;
typedef struct RwSphere;
typedef struct zLODManager;
typedef struct RwCamera;
typedef struct RwTexDictionary;
typedef struct RpLight;
typedef struct zShrapnelAsset;
typedef struct zLasso;
typedef struct RxOutputSpec;
typedef struct _tagEmitVolume;
typedef struct xEntFrame;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct iFogParams;
typedef struct zFrag;
typedef struct RxIoSpec;
typedef struct zFragAsset;
typedef struct xShadowSimplePoly;
typedef struct xParEmitter;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct xAnimMultiFileEntry;
typedef struct _tagEmitOffsetPoint;
typedef struct xAnimActiveEffect;
typedef struct tri_data_0;
typedef struct RwFrustumPlane;
typedef struct xSFXAsset;
typedef struct tri_data_1;
typedef struct _class_1;
typedef struct RwPlane;
typedef enum _tagPadState;
typedef struct RxCluster;
typedef struct xGlobals;
typedef struct RxPacket;
typedef struct xPEVCyl;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef enum RwFogType;
typedef struct xParInterp;
typedef struct RwRGBAReal;
typedef struct _class_2;
typedef struct _tagPadAnalog;
typedef struct RwLinkList;
typedef enum zFragType;
typedef struct RpMaterialList;
typedef struct _tagiPad;

typedef RwCamera*(*type_1)(RwCamera*);
typedef RwObjectHasFrame*(*type_4)(RwObjectHasFrame*);
typedef void(*type_5)(xEnt*);
typedef void(*type_7)(RxPipelineNode*);
typedef void(*type_12)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_14)(RxPipelineNode*, RxPipeline*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef unsigned int(*type_19)(void*, void*);
typedef unsigned int(*type_20)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_26)(xAnimPlay*, xAnimState*);
typedef void(*type_27)(void*);
typedef int(*type_29)(RxNodeDefinition*);
typedef void(*type_30)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_32)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_33)(RxNodeDefinition*);
typedef unsigned int(*type_34)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_36)(RxPipelineNode*);
typedef void(*type_37)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_38)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_40)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpAtomic*(*type_43)(RpAtomic*);
typedef xBase*(*type_45)(unsigned int);
typedef char*(*type_51)(xBase*);
typedef unsigned int(*type_54)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_55)(unsigned int);
typedef RpWorldSector*(*type_70)(RpWorldSector*);
typedef RwCamera*(*type_74)(RwCamera*);
typedef void(*type_77)(zFrag*, zFragAsset*);
typedef void(*type_78)(zEntDestructObj&, void*);
typedef void(*type_84)(xMemPool*, void*);
typedef void(*type_85)(zShrapnelAsset*, xModelInstance*, xVec3*, type_77);
typedef void(*type_88)(xEnt*, xScene*, float);
typedef xEnt*(*type_91)(xEnt*, xScene*, void*);
typedef void(*type_93)(RwResEntry*);
typedef void(*type_95)(xEnt*, xScene*, float, xEntFrame*);

typedef unsigned short type_0[3];
typedef unsigned char type_2[14];
typedef xModelTag type_3[4];
typedef char type_6[32];
typedef xModelInstance* type_8[14];
typedef xVec3 type_9[4];
typedef unsigned char type_10[2];
typedef xAnimMultiFileEntry type_11[1];
typedef unsigned char type_13[4];
typedef float type_16[4];
typedef RwFrustumPlane type_18[6];
typedef unsigned char type_21[22];
typedef RwTexCoords* type_23[8];
typedef unsigned char type_24[22];
typedef xCollis type_25[18];
typedef RwV3d type_28[8];
typedef unsigned int type_31[2];
typedef xParInterp type_35[1];
typedef xVec3 type_39[5];
typedef unsigned char type_41[5];
typedef unsigned short type_42[3];
typedef xVec3 type_44[60];
typedef char type_46[16];
typedef xParInterp type_47[4];
typedef unsigned char type_48[2];
typedef float type_49[22];
typedef xParInterp type_50[4];
typedef float type_52[22];
typedef char type_53[16];
typedef unsigned int type_56[15];
typedef unsigned int type_57[15];
typedef float type_58[2];
typedef xModelBucket** type_59[3];
typedef zLODManager type_60[2048];
typedef float type_61[3];
typedef unsigned int type_62[15];
typedef unsigned int type_63[72];
typedef char type_64[4];
typedef RwTexCoords* type_65[8];
typedef xBase* type_66[72];
typedef float type_67[4];
typedef analog_data type_68[2];
typedef unsigned int type_69[4];
typedef unsigned char type_71[2];
typedef xVec4 type_72[12];
typedef unsigned int type_73[2];
typedef unsigned char type_75[2];
typedef float type_76[6];
typedef xVec3 type_79[3];
typedef float type_80[3];
typedef float type_81[3];
typedef xModelTag type_82[2];
typedef float type_83[3];
typedef RpLight* type_86[2];
typedef char type_87[32];
typedef char type_89[32];
typedef RwFrame* type_90[2];
typedef float type_92[16];
typedef xEnt* type_94[111];
typedef float type_96[2];
typedef unsigned char type_97[3];
typedef unsigned char type_98[3];
typedef unsigned char type_99[3];
typedef float type_100[2];
typedef char type_101[128];
typedef type_101 type_102[6];
typedef RxCluster type_103[1];

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
	type_4 sync;
};

struct xParGroup
{
};

struct xFFX
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
	type_43 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_88 update;
	type_88 endUpdate;
	type_15 bupdate;
	type_95 move;
	type_5 render;
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
	type_26 BeforeEnter;
	type_12 StateCallback;
	type_37 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_11 Files;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xParSys
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_92 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_96 BilinearLerp;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_40 eventFunc;
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
	type_70 renderCallBack;
	RxPipeline* pipeline;
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
	type_9 corner;
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
	type_25 colls;
	type_30 post;
	type_34 depenq;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_58 radius;
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
	type_65 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_35 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_47 color_birth;
	type_50 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct zEntDestructObj : zEnt
{
	zEntDestructObjAsset* dasset;
	unsigned int state;
	unsigned int healthCnt;
	float fx_timer;
	zParEmitter* fx_emitter;
	float respawn_timer;
	unsigned int throw_target;
	zShrapnelAsset* shrapnel_destroy;
	zShrapnelAsset* shrapnel_hit;
	xModelInstance* base_model;
	xModelInstance* hit_model;
	xModelInstance* destroy_model;
	type_78 destroy_notify;
	void* notify_context;
	xSFXAsset* sfx_destroy;
	xSFXAsset* sfx_hit;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xSurface
{
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct anim_coll_data
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

struct zParEmitter : xParEmitter
{
};

struct _tagxPad
{
	type_21 value;
	type_24 last_value;
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
	type_49 up_tmr;
	type_52 down_tmr;
	type_68 analog;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_0 vertIndex;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_32 Callback;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RwTexCoords
{
	float u;
	float v;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_69 pad;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct zPlatform
{
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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
	type_71 PowerUp;
	type_75 InitialPowerUp;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	float noRenderDist;
	type_59 lodBucket;
	type_61 lodDist;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_93 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_84 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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
	type_63 baseCount;
	type_66 baseList;
	_zEnv* zen;
};

struct zAssetPickupTable
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_19 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct _tagEmitSphere
{
	float radius;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_44 tranTable;
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

struct RpTriangle
{
	type_42 vertIndex;
	short matIndex;
};

struct rxReq
{
};

struct zEntHangable
{
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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
	type_16 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_86 light;
	type_90 light_frame;
	int memlvl;
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
	type_10 NumAnims;
	void** RawData;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_67 wt;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xEntBoulder
{
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
	type_51 base2Name;
	type_55 id2Name;
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xJSPHeader
{
	type_64 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct zEntDestructObjAsset
{
	float animSpeed;
	unsigned int initAnimState;
	unsigned int health;
	unsigned int spawnItemID;
	unsigned int dflags;
	unsigned char collType;
	unsigned char fxType;
	type_48 pad;
	float blast_radius;
	float blast_strength;
	unsigned int shrapnelID_destroy;
	unsigned int shrapnelID_hit;
	unsigned int sfx_destroy;
	unsigned int sfx_hit;
	unsigned int hitModel;
	unsigned int destroyModel;
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
	type_82 BubbleWandTag;
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
	type_3 HangPawTag;
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
	type_56 Inv_PatsSock;
	type_57 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_62 Inv_LevelPickups;
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
	type_73 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_94 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_2 sb_model_indices;
	type_8 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_99 pad;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_87 name;
	type_89 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct RpSector
{
	int type;
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
	type_27 activateCB;
	type_27 deactivateCB;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_72 frustplane;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_76 MoveSpeed;
	type_80 AnimSneak;
	type_81 AnimWalk;
	type_83 AnimRun;
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
	type_13 talk_filter;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct zLODManager
{
	int numextra;
	zLODTable* lod;
	xModelInstance* model;
	float adjustNoRenderDist;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_74 beginUpdate;
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
	type_18 frustumPlanes;
	RwBBox frustumBoundBox;
	type_28 frustumCorners;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_85 initCB;
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
	type_39 lastRefs;
	type_41 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct zFrag
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

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_31 parentID;
	float lifetime;
	float delay;
};

struct xShadowSimplePoly
{
	type_79 vert;
	xVec3 norm;
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
	type_97 emit_pad;
	type_98 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RxNodeMethods
{
	type_22 nodeBody;
	type_29 nodeInit;
	type_33 nodeTerm;
	type_36 pipelineNodeInit;
	type_7 pipelineNodeTerm;
	type_14 pipelineNodeConfig;
	type_20 configMsgHandler;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

struct xSFXAsset : xBaseAsset
{
	unsigned short flagsSFX;
	unsigned short freq;
	float freqm;
	unsigned int soundAssetID;
	unsigned int attachID;
	unsigned char loopCount;
	unsigned char priority;
	unsigned char volume;
	unsigned char pad;
	xVec3 pos;
	float innerRadius;
	float outerRadius;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_102 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_6 sceneStart;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_103 clusters;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xParInterp
{
	type_100 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct _tagPadAnalog
{
	char x;
	char y;
};

struct RwLinkList
{
	RwLLLink link;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _tagiPad
{
	int port;
};

type_46 buffer;
type_53 buffer;
unsigned int sTableCount;
zLODTable* sTableList;
unsigned int sManagerIndex;
unsigned int sManagerCount;
type_60 sManagerList;
zGlobals globals;
type_91 AddToLODList;
unsigned int gActiveHeap;

void zLOD_UseCustomTable(xEnt* ent, zLODTable* lod);
zLODTable* zLOD_Get(xEnt* ent);
void zLOD_Update(unsigned int percent_update);
void zLOD_Setup();
xEnt* AddToLODList(xEnt* ent);
void AddToLODList(xModelInstance* model);

// zLOD_UseCustomTable__FP4xEntP9zLODTable
// Start address: 0x184f20
void zLOD_UseCustomTable(xEnt* ent, zLODTable* lod)
{
	unsigned int i;
	xModelInstance* model;
	xVec3* campos;
	float camdist2;
	float distscale;
	int i;
}

// zLOD_Get__FP4xEnt
// Start address: 0x1851a0
zLODTable* zLOD_Get(xEnt* ent)
{
	unsigned int i;
}

// zLOD_Update__FUi
// Start address: 0x185220
void zLOD_Update(unsigned int percent_update)
{
	xVec3* campos;
	unsigned int numUpdates;
	zLODTable* lod;
	xModelInstance* model;
	float camdist2;
	float distscale;
	int i;
}

// zLOD_Setup__Fv
// Start address: 0x1854b0
void zLOD_Setup()
{
	unsigned int tmpsize;
	unsigned int i;
	unsigned int j;
	void* data;
	unsigned int count;
	zLODTable* tableCurr;
	RpAtomic* model;
	RpAtomic* model;
}

// AddToLODList__FP4xEntP6xScenePv
// Start address: 0x185700
xEnt* AddToLODList(xEnt* ent)
{
	zEntDestructObj* destruct;
}

// AddToLODList__FP14xModelInstance
// Start address: 0x185790
void AddToLODList(xModelInstance* model)
{
	unsigned int i;
	unsigned int i;
	xModelInstance* minst;
	unsigned int numextra;
	float distscale;
}

