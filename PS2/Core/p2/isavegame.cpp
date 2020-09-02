typedef struct st_ISGTHUMDATA;
typedef struct xUpdateCullEnt;
typedef struct RpGeometry;
typedef struct RpAtomic;
typedef struct st_ISG_MEMCARD_DATA;
typedef struct xEnt;
typedef struct xBox;
typedef struct rxHeapBlockHeader;
typedef struct xModelInstance;
typedef struct xJSPNodeInfo;
typedef struct RxClusterDefinition;
typedef struct _zPortal;
typedef struct xEnvAsset;
typedef struct xSurface;
typedef struct xAnimTable;
typedef struct st_ISGSESSION;
typedef struct xAnimPlay;
typedef struct xScene;
typedef struct RpLight;
typedef struct xMemPool;
typedef struct RpClump;
typedef struct xQuat;
typedef struct xPortalAsset;
typedef struct rxHeapFreeBlock;
typedef struct xModelTag;
typedef struct xEntFrame;
typedef struct xFFX;
typedef struct rxReq;
typedef struct xVec3;
typedef struct xMat4x3;
typedef struct zPlayerSettings;
typedef struct RwSphere;
typedef struct xBase;
typedef struct xEntCollis;
typedef struct xCollis;
typedef struct _tagxRumble;
typedef struct iFogParams;
typedef struct zEnt;
typedef struct xAnimState;
typedef struct xUpdateCullGroup;
typedef struct xBound;
typedef struct RwTexDictionary;
typedef enum RpWorldRenderOrder;
typedef struct RxOutputSpec;
typedef struct xAnimEffect;
typedef struct zScene;
typedef struct iEnv;
typedef struct RpMaterial;
typedef struct RpTriangle;
typedef struct RpWorld;
typedef struct xMat3x3;
typedef struct RxPipeline;
typedef struct sceCdCLOCK;
typedef struct RwRGBA;
typedef struct RxClusterRef;
typedef struct zJumpParam;
typedef struct xLightKitLight;
typedef struct tri_data_0;
typedef struct xModelBucket;
typedef struct RwTexture;
typedef struct RwTexCoords;
typedef struct xAnimFile;
typedef struct RpSector;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpMeshHeader;
typedef struct zEntHangable;
typedef struct xShadowSimpleCache;
typedef struct sceMcTblGetDir;
typedef struct RxIoSpec;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct RwResEntry;
typedef struct xAnimTransition;
typedef enum en_ASYNC_OPCODE;
typedef struct xJSPHeader;
typedef struct xAnimTransitionList;
typedef struct xEntShadow;
typedef enum RxClusterValidityReq;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xGlobals;
typedef struct zPlatform;
typedef struct anim_coll_data;
typedef struct RxNodeMethods;
typedef struct xLightKit;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct _tagxPad;
typedef struct RwRaster;
typedef struct zCutsceneMgr;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef enum en_CHGCODE;
typedef struct xEnv;
typedef struct RwPlane;
typedef struct zAssetPickupTable;
typedef struct RxPipelineNode;
typedef struct xLinkAsset;
typedef enum en_NAMEGEN_TYPE;
typedef struct RxCluster;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct xAnimMultiFile;
typedef struct RxPipelineNodeParam;
typedef struct sceMcStDateTime;
typedef struct xUpdateCullMgr;
typedef struct RwMatrixTag;
typedef struct _tagiPad;
typedef struct RxPacket;
typedef struct RxPipelineRequiresCluster;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct xBaseAsset;
typedef struct RwObjectHasFrame;
typedef struct xClumpCollBSPTree;
typedef struct _class_0;
typedef struct tri_data_1;
typedef struct RwLinkList;
typedef struct RpVertexNormal;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct sceMcIconSys;
typedef enum en_ISGMC_ERRSTATUS;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct zLasso;
typedef struct RpInterpolator;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct zGlobals;
typedef struct zGlobalSettings;
typedef struct xAnimMultiFileEntry;
typedef struct xGroup;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct _class_1;
typedef struct RwBBox;
typedef struct RpPolygon;
typedef struct xVec2;
typedef struct zPlayerLassoInfo;
typedef struct RpMaterialList;
typedef struct xQCData;
typedef struct RwV3d;
typedef struct xModelPool;
typedef struct xBBox;
typedef struct xAnimSingle;
typedef struct zLedgeGrabParams;
typedef union _class_2;
typedef enum en_ISGMCA_STATUS;
typedef struct xEntAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xAnimMultiFileBase;
typedef enum en_ASYNC_OPSTAT;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef enum en_ISG_IOMODE;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xGridBound;
typedef struct analog_data;
typedef enum en_ASYNC_OPERR;
typedef enum en_MEMCARD_SEEKPT;
typedef struct xShadowSimplePoly;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xRot;
typedef struct zPlayerCarryInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntDrive;
typedef struct xCamera;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct _zEnv;
typedef struct xCylinder;

typedef void(*type_2)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void(*type_4)(xEnt*, xVec3*);
typedef void(*type_6)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_7)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_8)(xEnt*);
typedef void(*type_12)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_13)(void*, en_CHGCODE);
typedef RpAtomic*(*type_15)(RpAtomic*);
typedef unsigned int(*type_20)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_27)(void*);
typedef void(*type_28)(xEnt*, xScene*, float);
typedef void(*type_29)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_43)(RwCamera*);
typedef unsigned int(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_51)(RpWorldSector*);
typedef RwCamera*(*type_53)(RwCamera*);
typedef int(*type_54)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef xBase*(*type_63)(unsigned int);
typedef void(*type_64)(RwResEntry*);
typedef int(*type_65)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_66)(xMemPool*, void*);
typedef void(*type_70)(xAnimState*, xAnimSingle*, void*);
typedef char*(*type_73)(xBase*);
typedef int(*type_74)(RxNodeDefinition*);
typedef char*(*type_76)(unsigned int);
typedef void(*type_77)(RxNodeDefinition*);
typedef int(*type_80)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_81)(RwObjectHasFrame*);
typedef void(*type_82)(RxPipelineNode*);
typedef unsigned int(*type_83)(void*, void*);
typedef int(*type_87)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_94)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpClump*(*type_106)(RpClump*, void*);

typedef float type_0[16];
typedef unsigned char type_1[4];
typedef unsigned char type_5[3];
typedef char type_9[64];
typedef unsigned int type_10[4];
typedef float type_11[4];
typedef unsigned char type_14[2];
typedef xVec4 type_16[12];
typedef unsigned char type_17[68];
typedef unsigned int type_18[2];
typedef type_121 type_19[4];
typedef unsigned char type_21[2];
typedef float type_22[6];
typedef char type_23[25];
typedef char type_24[64];
typedef type_23 type_25[3];
typedef type_125 type_26[3];
typedef float type_30[3];
typedef type_125 type_31[3];
typedef float type_32[3];
typedef char type_33[25];
typedef type_33 type_34[3];
typedef xModelTag type_35[2];
typedef float type_36[3];
typedef xVec3 type_37[4];
typedef unsigned char type_38[68];
typedef RwTexCoords* type_39[8];
typedef unsigned char type_40[64];
typedef char type_41[64];
typedef float type_42[4];
typedef unsigned char type_44[64];
typedef char type_45[64];
typedef RpLight* type_46[2];
typedef unsigned char type_47[64];
typedef xEnt* type_48[111];
typedef char type_50[64];
typedef RwFrame* type_52[2];
typedef unsigned char type_55[512];
typedef char* type_56[3];
typedef char type_57[64];
typedef char type_58[32];
typedef char type_59[128];
typedef xCollis type_60[18];
typedef type_59 type_61[6];
typedef char type_62[32];
typedef char type_67[64];
typedef unsigned char type_68[14];
typedef xModelTag type_69[4];
typedef int type_71[2];
typedef char type_72[32];
typedef xModelInstance* type_75[14];
typedef RxCluster type_78[1];
typedef unsigned char type_79[4];
typedef unsigned char type_84[22];
typedef char type_85[32];
typedef unsigned char type_86[22];
typedef int type_88[2];
typedef char type_89[32];
typedef float type_90[2];
typedef RwFrustumPlane type_91[6];
typedef unsigned short type_92[3];
typedef _tagxPad type_93[4];
typedef type_121 type_95[4];
typedef xVec3 type_96[5];
typedef RwV3d type_97[8];
typedef unsigned char type_98[32];
typedef unsigned char type_99[5];
typedef char type_100[32];
typedef type_100 type_101[8];
typedef xVec3 type_102[60];
typedef float type_103[2];
typedef type_125 type_104[3];
typedef float type_105[22];
typedef float type_107[22];
typedef char type_108[32];
typedef unsigned int type_109[15];
typedef RwTexCoords* type_110[8];
typedef unsigned int type_111[15];
typedef unsigned char type_112[2];
typedef type_125 type_113[3];
typedef xAnimMultiFileEntry type_114[1];
typedef xVec3 type_115[3];
typedef unsigned int type_116[15];
typedef char type_117[64];
typedef unsigned int type_118[72];
typedef analog_data type_119[2];
typedef char type_120[4];
typedef int type_121[4];
typedef unsigned short type_122[3];
typedef char type_123[32];
typedef xBase* type_124[72];
typedef float type_125[4];
typedef char type_126[992];
typedef char* type_127[8];

struct st_ISGTHUMDATA
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_83 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
	type_39 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_15 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct st_ISG_MEMCARD_DATA
{
	int mcport;
	int mcslot;
	int mcfp;
	en_ISG_IOMODE fmode;
	type_9 gamepath;
	sceMcTblGetDir finfo;
	int cur_mcop;
	en_ISGMC_ERRSTATUS mcerr;
	int allow_cache;
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
	type_28 update;
	type_28 endUpdate;
	type_4 bupdate;
	type_6 move;
	type_8 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_29 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_10 pad;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct xSurface
{
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

struct st_ISGSESSION
{
	st_ISG_MEMCARD_DATA* mcdata;
	type_45 gameroot;
	type_50 gamedir;
	en_ASYNC_OPCODE as_curop;
	en_ASYNC_OPSTAT as_opstat;
	en_ASYNC_OPERR as_operr;
	void* cltdata;
	en_CHGCODE chgcode;
	type_13 chgfunc;
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
	type_12 BeforeAnimMatrices;
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
	type_63 resolvID;
	type_73 base2Name;
	type_76 id2Name;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_66 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_106 callback;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_42 wt;
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

struct xFFX
{
};

struct rxReq
{
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_22 MoveSpeed;
	type_30 AnimSneak;
	type_32 AnimWalk;
	type_36 AnimRun;
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
	type_79 talk_filter;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_54 eventFunc;
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
	type_60 colls;
	type_2 post;
	type_20 depenq;
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
		_class_1 tuv;
		tri_data_1 tri;
	};
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
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
	type_3 BeforeEnter;
	type_70 StateCallback;
	type_12 BeforeAnimMatrices;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_5 pad;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_7 Callback;
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
	type_118 baseCount;
	type_124 baseList;
	_zEnv* zen;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_46 light;
	type_52 light_frame;
	int memlvl;
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

struct RpTriangle
{
	type_122 vertIndex;
	short matIndex;
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
	type_51 renderCallBack;
	RxPipeline* pipeline;
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

struct sceCdCLOCK
{
	unsigned char stat;
	unsigned char second;
	unsigned char minute;
	unsigned char hour;
	unsigned char pad;
	unsigned char day;
	unsigned char month;
	unsigned char year;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_58 name;
	type_62 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_112 NumAnims;
	void** RawData;
};

struct RpSector
{
	int type;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_43 beginUpdate;
	type_53 endUpdate;
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
	type_91 frustumPlanes;
	RwBBox frustumBoundBox;
	type_97 frustumCorners;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct zEntHangable
{
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
	type_37 corner;
};

struct sceMcTblGetDir
{
	sceMcStDateTime _Create;
	sceMcStDateTime _Modify;
	unsigned int FileSizeByte;
	unsigned short AttrFile;
	unsigned short Reserve1;
	unsigned int Reserve2;
	unsigned int PdaAplNo;
	type_98 EntryName;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_64 destroyNotify;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_49 Conditional;
	type_49 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

enum en_ASYNC_OPCODE
{
	ISG_OPER_NOOP,
	ISG_OPER_INIT,
	ISG_OPER_SAVE,
	ISG_OPER_LOAD
};

struct xJSPHeader
{
	type_120 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_90 radius;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_110 texCoords;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_61 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_72 sceneStart;
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

struct zPlatform
{
};

struct anim_coll_data
{
};

struct RxNodeMethods
{
	type_65 nodeBody;
	type_74 nodeInit;
	type_77 nodeTerm;
	type_80 pipelineNodeInit;
	type_82 pipelineNodeTerm;
	type_87 pipelineNodeConfig;
	type_94 configMsgHandler;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

struct _tagxPad
{
	type_84 value;
	type_86 last_value;
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
	type_105 up_tmr;
	type_107 down_tmr;
	type_119 analog;
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

struct zCutsceneMgr
{
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

enum en_CHGCODE
{
	ISG_CHG_NONE,
	ISG_CHG_TARGET,
	ISG_CHG_GAMELIST
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct zAssetPickupTable
{
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_11 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

enum en_NAMEGEN_TYPE
{
	ISG_NGTYP_GAMEDIR,
	ISG_NGTYP_GAMEFILE,
	ISG_NGTYP_CONFIG,
	ISG_NGTYP_ICONTHUM
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

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_114 Files;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct sceMcStDateTime
{
	unsigned char Resv2;
	unsigned char Sec;
	unsigned char Min;
	unsigned char Hour;
	unsigned char Day;
	unsigned char Month;
	unsigned short Year;
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
	type_78 clusters;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_81 sync;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct sceMcIconSys
{
	type_1 Head;
	unsigned short Reserv1;
	unsigned short OffsLF;
	unsigned int Reserv2;
	unsigned int TransRate;
	type_19 BgColor;
	type_26 LightDir;
	type_31 LightColor;
	type_125 Ambient;
	type_38 TitleName;
	type_40 FnameView;
	type_44 FnameCopy;
	type_47 FnameDel;
	type_55 Reserve3;
};

enum en_ISGMC_ERRSTATUS
{
	ISGMC_ERR_NONE,
	ISGMC_ERR_NOMEMCARD,
	ISGMC_ERR_MKDIR,
	ISGMC_ERR_OPEN,
	ISGMC_ERR_CLOSE,
	ISGMC_ERR_READ,
	ISGMC_ERR_WRITE
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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
	type_96 lastRefs;
	type_99 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_14 PowerUp;
	type_21 InitialPowerUp;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_92 vertIndex;
};

struct xVec2
{
	float x;
	float y;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_103 BilinearLerp;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_102 tranTable;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

enum en_ISGMCA_STATUS
{
	ISG_MCA_STAT_DONE_ERR = 0xffffffff,
	ISG_MCA_STAT_INPROG,
	ISG_MCA_STAT_DONE
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

enum en_ISG_IOMODE
{
	ISG_IOMODE_READ = 0x1,
	ISG_IOMODE_WRITE,
	ISG_IOMODE_APPEND
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

enum en_ASYNC_OPERR
{
	ISG_OPERR_NONE,
	ISG_OPERR_NOOPER,
	ISG_OPERR_MULTIOPER,
	ISG_OPERR_INITFAIL,
	ISG_OPERR_GAMEDIR,
	ISG_OPERR_NOCARD,
	ISG_OPERR_NOROOM,
	ISG_OPERR_DAMAGE,
	ISG_OPERR_CORRUPT,
	ISG_OPERR_OTHER,
	ISG_OPERR_SVNOSPACE,
	ISG_OPERR_SVINIT,
	ISG_OPERR_SVWRITE,
	ISG_OPERR_SVOPEN,
	ISG_OPERR_LDINIT,
	ISG_OPERR_LDREAD,
	ISG_OPERR_LDOPEN,
	ISG_OPERR_TGTERR,
	ISG_OPERR_TGTREM,
	ISG_OPERR_TGTPREP,
	ISG_OPERR_UNKNOWN,
	ISG_OPERR_NOMORE
};

enum en_MEMCARD_SEEKPT
{
	ISG_MCSEEK_TOP,
	ISG_MCSEEK_CUR,
	ISG_MCSEEK_END
};

struct xShadowSimplePoly
{
	type_115 vert;
	xVec3 norm;
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
	type_35 BubbleWandTag;
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
	type_69 HangPawTag;
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
	type_109 Inv_PatsSock;
	type_111 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_116 Inv_LevelPickups;
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
	type_18 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_48 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_68 sb_model_indices;
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

struct xRot
{
	xVec3 axis;
	float angle;
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
	type_16 frustplane;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

char* g_scoobydoo_icon_list;
int gIconSize;
char* g_scoobydoo_icon_copy;
char* g_scoobydoo_icon_delete;
int g_isginit;
st_ISG_MEMCARD_DATA g_mcdata_MAIN;
st_ISGSESSION g_isgdata_MAIN;
st_ISG_MEMCARD_DATA g_mcdata_MONITOR;
st_ISGSESSION g_isgdata_MONITOR;
type_56 g_isg_scemodule;
type_127 g_strz_egotrip;
type_93 mPad;
zGlobals globals;

unsigned char iSGCheckMemoryCard(int index);
unsigned char iSGCheckForGameFiles(int mcPort);
unsigned char iSGIsGameCorrupt(st_ISGSESSION* sess);
void iSGIconInit(void* iconData, unsigned int size);
void iSGMakeTimeStamp(char* str);
int iSG_is_MCOP_realerr(int mcop, int que_rc);
int iSG_is_synccode_realerr(int mcop, int mcopret);
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int block, int* sync_resval);
int iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, char* data, int n);
int iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, char* buf, int bufsize);
int iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, char* fname, en_ISG_IOMODE mode);
int iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata);
int iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int force);
int iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, char* fname, int* sec, int* min, int* hr, int* mon, int* day, int* yr);
int iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, char* fname, char* path);
int iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int mcidx, int fsize, char* dpath, char* fname, int* bytesNeeded, int* availOnDisk);
int iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int mcidx, char* dpath);
int iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int mcidx);
int iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int mcidx);
int iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int mcidx);
int iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int mcidx);
int iSG_mcidx_portslot(int mcidx, int* port, int* slot, int* concnt);
void SQUIB_init_st_iconsys(sceMcIconSys* icsys);
int iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata);
int iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata);
int iSG_start_your_engines();
int iSGAutoSave_Monitor(st_ISGSESSION* isg, int idx_target);
void iSGAutoSave_Disconnect(st_ISGSESSION* isg);
st_ISGSESSION* iSGAutoSave_Connect(int idx_target, void* cltdata, type_13 chg);
void iSGAutoSave_Startup();
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, char* errmsg);
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int block);
int iSGReadLeader(st_ISGSESSION* isgdata, char* fname, char* databuf, int numbytes, int async);
int iSGLoadFile(st_ISGSESSION* isgdata, char* fname, char* databuf, int async);
int iSGSaveFile(st_ISGSESSION* isgdata, char* fname, char* data, int n, int async);
int iSGSetupGameDir(st_ISGSESSION* isgdata, char* dname, int force_iconfix);
int iSGSelectGameDir(st_ISGSESSION* isgdata, char* dname);
char* iSGFileModDate(st_ISGSESSION* isgdata, char* fname, int* sec, int* min, int* hr, int* mon, int* day, int* yr);
char* iSGFileModDate(st_ISGSESSION* isgdata, char* fname);
int iSGFileSize(st_ISGSESSION* isgdata, char* fname);
unsigned char iSGGameExists(st_ISGSESSION* isgdata, char* fname);
int iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int tidx, int fsize, char* dpath, char* fname, int* bytesNeeded, int* availOnDisk);
int iSGTgtHaveRoom(st_ISGSESSION* isgdata, int tidx, int fsize, char* dpath, char* fname, int* bytesNeeded, int* availOnDisk);
int iSGTgtSetActive(st_ISGSESSION* isgdata, int tgtidx);
unsigned int iSGTgtState(st_ISGSESSION* isgdata, int tgtidx, char* dpath);
int iSGTgtFormat(st_ISGSESSION* isgdata, int tgtidx, int async);
int iSGTgtPhysSlotIdx();
int iSGTgtCount(int* max);
void iSGSessionEnd(st_ISGSESSION* isgdata);
st_ISGSESSION* iSGSessionBegin(void* cltdata, type_13 chgfunc, int monitor);
char* iSGMakeName(en_NAMEGEN_TYPE type, char* base, int idx);
int iSGShutdown();
int iSGStartup();

// iSGCheckMemoryCard__FP13st_ISGSESSIONi
// Start address: 0x1b3230
unsigned char iSGCheckMemoryCard(int index)
{
	int result;
}

// iSGCheckForGameFiles__Fi
// Start address: 0x1b32a0
unsigned char iSGCheckForGameFiles(int mcPort)
{
	type_34 fileNames;
	char* gameDir;
	int resultCode;
	int i;
}

// iSGIsGameCorrupt__FP13st_ISGSESSIONi
// Start address: 0x1b33b0
unsigned char iSGIsGameCorrupt(st_ISGSESSION* sess)
{
	type_25 fileNames;
	char* gameDir;
	int resultCode;
	int i;
}

// iSGIconInit__FPvUi
// Start address: 0x1b34d0
void iSGIconInit(void* iconData, unsigned int size)
{
}

// iSGMakeTimeStamp__FPc
// Start address: 0x1b34e0
void iSGMakeTimeStamp(char* str)
{
}

// iSG_is_MCOP_realerr__Fii
// Start address: 0x1b34f0
int iSG_is_MCOP_realerr(int mcop, int que_rc)
{
	int is_ok;
}

// iSG_is_synccode_realerr__FiiP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3540
int iSG_is_synccode_realerr(int mcop, int mcopret)
{
	int is_ok;
}

// iSG_mcasync_chkop__FP19st_ISG_MEMCARD_DATAiPi
// Start address: 0x1b3a60
en_ISGMCA_STATUS iSG_mcasync_chkop(st_ISG_MEMCARD_DATA* mcdata, int block, int* sync_resval)
{
	en_ISGMCA_STATUS result;
	int rc;
	int ret;
	int mcf;
	unsigned int on;
}

// iSG_mca_fwrite__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3bf0
int iSG_mca_fwrite(st_ISG_MEMCARD_DATA* mcdata, char* data, int n)
{
	int result;
	int rc;
}

// iSG_mca_fread__FP19st_ISG_MEMCARD_DATAPci
// Start address: 0x1b3c60
int iSG_mca_fread(st_ISG_MEMCARD_DATA* mcdata, char* buf, int bufsize)
{
	int result;
	int rc;
}

// iSG_mca_fopen__FP19st_ISG_MEMCARD_DATAPCc13en_ISG_IOMODE
// Start address: 0x1b3cd0
int iSG_mca_fopen(st_ISG_MEMCARD_DATA* mcdata, char* fname, en_ISG_IOMODE mode)
{
	int result;
	int rc;
	int ps2mode;
}

// iSG_mca_unfmt__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b3d40
int iSG_mca_unfmt(st_ISG_MEMCARD_DATA* mcdata)
{
	int result;
	int rc;
}

// iSG_mca_fmt__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b3dc0
int iSG_mca_fmt(st_ISG_MEMCARD_DATA* mcdata, int force)
{
	int result;
	int rc;
}

// iSG_get_fmoddate__FP19st_ISG_MEMCARD_DATAPCcPiPiPiPiPiPi
// Start address: 0x1b3e90
int iSG_get_fmoddate(st_ISG_MEMCARD_DATA* mcdata, char* fname, int* sec, int* min, int* hr, int* mon, int* day, int* yr)
{
	int result;
	int rc;
	sceMcTblGetDir* finf;
}

// iSG_get_finfo__FP19st_ISG_MEMCARD_DATAPCcPCc
// Start address: 0x1b3f80
int iSG_get_finfo(st_ISG_MEMCARD_DATA* mcdata, char* fname, char* path)
{
	int result;
	int rc;
	type_41 str_buf;
	int len;
	int numfound;
}

// iSG_isSpaceForFile__FP19st_ISG_MEMCARD_DATAiiPCcPCcPiPi
// Start address: 0x1b41a0
int iSG_isSpaceForFile(st_ISG_MEMCARD_DATA* mcdata, int mcidx, int fsize, char* dpath, char* fname, int* bytesNeeded, int* availOnDisk)
{
	int rc;
	int fc_need;
	int fEc_need;
	int xtra_fent;
	int estclust;
	int totclust;
	int reset_mcpath;
}

// iSG_mc_availDirEnt__FP19st_ISG_MEMCARD_DATAiPCc
// Start address: 0x1b4340
int iSG_mc_availDirEnt(st_ISG_MEMCARD_DATA* mcdata, int mcidx, char* dpath)
{
	int result;
	int rc;
}

// iSG_mc_availclust__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b43f0
int iSG_mc_availclust(st_ISG_MEMCARD_DATA* mcdata, int mcidx)
{
	int result;
	int rc;
	int clust;
}

// iSG_mc_isPSIIcard__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b44a0
int iSG_mc_isPSIIcard(st_ISG_MEMCARD_DATA* mcdata, int mcidx)
{
	int result;
	int rc;
	int type;
}

// iSG_mc_isformatted__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4560
int iSG_mc_isformatted(st_ISG_MEMCARD_DATA* mcdata, int mcidx)
{
	int result;
	int rc;
	int is_fmtd;
}

// iSG_mc_exists__FP19st_ISG_MEMCARD_DATAi
// Start address: 0x1b4620
int iSG_mc_exists(st_ISG_MEMCARD_DATA* mcdata, int mcidx)
{
	int result;
	int rc;
}

// iSG_mcidx_portslot__FiPiPiPi
// Start address: 0x1b46c0
int iSG_mcidx_portslot(int mcidx, int* port, int* slot, int* concnt)
{
	int result;
	int rc;
	int ret;
	int i;
	int type;
	int tp;
	int con_p0;
	int con_p1;
	int use_port;
	int cur_mcop;
}

// SQUIB_init_st_iconsys__FP12sceMcIconSys
// Start address: 0x1b4870
void SQUIB_init_st_iconsys(sceMcIconSys* icsys)
{
	type_95 bgcolor;
	type_104 lightdir;
	type_113 lightcol;
	type_125 ambient;
	char* iconname;
	type_17 sjistitle;
}

// iSG_add_sysicons__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4a40
int iSG_add_sysicons(st_ISG_MEMCARD_DATA* mcdata)
{
	sceMcIconSys icsysdata;
	char* iconname;
}

// iSG_add_cfgholder__FP19st_ISG_MEMCARD_DATA
// Start address: 0x1b4c20
int iSG_add_cfgholder(st_ISG_MEMCARD_DATA* mcdata)
{
	type_126 cfgdata;
	char* strptr;
	char* cfgname;
}

// iSG_start_your_engines__Fv
// Start address: 0x1b4d80
int iSG_start_your_engines()
{
	int result;
	int rc;
}

// iSGAutoSave_Monitor__FP13st_ISGSESSIONi
// Start address: 0x1b4e30
int iSGAutoSave_Monitor(st_ISGSESSION* isg, int idx_target)
{
	unsigned int stat;
}

// iSGAutoSave_Disconnect__FP13st_ISGSESSION
// Start address: 0x1b4eb0
void iSGAutoSave_Disconnect(st_ISGSESSION* isg)
{
}

// iSGAutoSave_Connect__FiPvPFPv10en_CHGCODE_v
// Start address: 0x1b4ec0
st_ISGSESSION* iSGAutoSave_Connect(int idx_target, void* cltdata, type_13 chg)
{
	st_ISGSESSION* isg;
}

// iSGAutoSave_Startup__Fv
// Start address: 0x1b4f80
void iSGAutoSave_Startup()
{
}

// iSGOpError__FP13st_ISGSESSIONPc
// Start address: 0x1b4f90
en_ASYNC_OPERR iSGOpError(st_ISGSESSION* isgdata, char* errmsg)
{
}

// iSGPollStatus__FP13st_ISGSESSIONP15en_ASYNC_OPCODEi
// Start address: 0x1b51e0
en_ASYNC_OPSTAT iSGPollStatus(st_ISGSESSION* isgdata, en_ASYNC_OPCODE* curop, int block)
{
	int rc;
	int sceResultCode;
}

// iSGReadLeader__FP13st_ISGSESSIONPCcPcii
// Start address: 0x1b5390
int iSGReadLeader(st_ISGSESSION* isgdata, char* fname, char* databuf, int numbytes, int async)
{
	int result;
	int rc;
}

// iSGLoadFile__FP13st_ISGSESSIONPCcPci
// Start address: 0x1b5660
int iSGLoadFile(st_ISGSESSION* isgdata, char* fname, char* databuf, int async)
{
}

// iSGSaveFile__FP13st_ISGSESSIONPCcPciiPc
// Start address: 0x1b56f0
int iSGSaveFile(st_ISGSESSION* isgdata, char* fname, char* data, int n, int async)
{
	int result;
	int rc;
}

// iSGSetupGameDir__FP13st_ISGSESSIONPCci
// Start address: 0x1b5a20
int iSGSetupGameDir(st_ISGSESSION* isgdata, char* dname, int force_iconfix)
{
	int result;
	int rc;
	st_ISG_MEMCARD_DATA* mcdata;
	int dir_isnew;
	char* strptr;
}

// iSGSelectGameDir__FP13st_ISGSESSIONPCc
// Start address: 0x1b5d40
int iSGSelectGameDir(st_ISGSESSION* isgdata, char* dname)
{
}

// iSGFileModDate__FP13st_ISGSESSIONPCcPiPiPiPiPiPi
// Start address: 0x1b5e30
char* iSGFileModDate(st_ISGSESSION* isgdata, char* fname, int* sec, int* min, int* hr, int* mon, int* day, int* yr)
{
	int rc;
	sceMcTblGetDir* finf;
	sceCdCLOCK clock;
	type_24 datestr;
}

// iSGFileModDate__FP13st_ISGSESSIONPCc
// Start address: 0x1b5f90
char* iSGFileModDate(st_ISGSESSION* isgdata, char* fname)
{
	char* date_str;
}

// iSGFileSize__FP13st_ISGSESSIONPCc
// Start address: 0x1b5fb0
int iSGFileSize(st_ISGSESSION* isgdata, char* fname)
{
	int size;
}

// iSGGameExists__FP13st_ISGSESSIONPCc
// Start address: 0x1b6000
unsigned char iSGGameExists(st_ISGSESSION* isgdata, char* fname)
{
	int rc;
	type_117 str_buf;
	int len;
	int numfound;
	st_ISG_MEMCARD_DATA* mcdata;
	char* path;
}

// iSGTgtHaveRoomStartup__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61a0
int iSGTgtHaveRoomStartup(st_ISGSESSION* isgdata, int tidx, int fsize, char* dpath, char* fname, int* bytesNeeded, int* availOnDisk)
{
	int result;
}

// iSGTgtHaveRoom__FP13st_ISGSESSIONiiPCcPCcPiPiPi
// Start address: 0x1b61b0
int iSGTgtHaveRoom(st_ISGSESSION* isgdata, int tidx, int fsize, char* dpath, char* fname, int* bytesNeeded, int* availOnDisk)
{
	int result;
	int i;
	char* gameName;
}

// iSGTgtSetActive__FP13st_ISGSESSIONi
// Start address: 0x1b62b0
int iSGTgtSetActive(st_ISGSESSION* isgdata, int tgtidx)
{
}

// iSGTgtState__FP13st_ISGSESSIONiPCc
// Start address: 0x1b6320
unsigned int iSGTgtState(st_ISGSESSION* isgdata, int tgtidx, char* dpath)
{
	unsigned int state;
	int rc;
}

// iSGTgtFormat__FP13st_ISGSESSIONiiPi
// Start address: 0x1b6460
int iSGTgtFormat(st_ISGSESSION* isgdata, int tgtidx, int async)
{
	int result;
	int rc;
}

// iSGTgtPhysSlotIdx__FP13st_ISGSESSIONi
// Start address: 0x1b6580
int iSGTgtPhysSlotIdx()
{
	type_71 concnt;
	int dp;
	int ds;
}

// iSGTgtCount__FP13st_ISGSESSIONPi
// Start address: 0x1b65d0
int iSGTgtCount(int* max)
{
	int rc;
	int tgtmax;
	type_88 concnt;
	int dp;
	int ds;
}

// iSGSessionEnd__FP13st_ISGSESSION
// Start address: 0x1b6670
void iSGSessionEnd(st_ISGSESSION* isgdata)
{
}

// iSGSessionBegin__FPvPFPv10en_CHGCODE_vi
// Start address: 0x1b6680
st_ISGSESSION* iSGSessionBegin(void* cltdata, type_13 chgfunc, int monitor)
{
	st_ISGSESSION* isgdata;
}

// iSGMakeName__F15en_NAMEGEN_TYPEPCci
// Start address: 0x1b6770
char* iSGMakeName(en_NAMEGEN_TYPE type, char* base, int idx)
{
	char* use_buf;
	char* fmt_sb;
	char* fmt_sd;
	char* fmt_sbd;
	int rotate;
	type_101 rotatebuf;
}

// iSGShutdown__Fv
// Start address: 0x1b6970
int iSGShutdown()
{
}

// iSGStartup__Fv
// Start address: 0x1b6990
int iSGStartup()
{
}

