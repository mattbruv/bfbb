typedef struct RpWorldSector;
typedef struct RxPipelineNodeParam;
typedef struct xModelInstance;
typedef struct RpMorphTarget;
typedef struct xJSPNodeInfo;
typedef struct xEnt;
typedef struct xLightKit;
typedef struct xUpdateCullEnt;
typedef struct xMat4x3;
typedef struct xAnimMultiFileEntry;
typedef struct xEnv;
typedef struct RxHeap;
typedef struct xAnimActiveEffect;
typedef struct xBase;
typedef struct zPlatFMRunTime;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xMovePointAsset;
typedef struct RxPipelineNode;
typedef struct xScene;
typedef struct zPlayerSettings;
typedef struct RpLight;
typedef struct zEnt;
typedef struct xQuat;
typedef struct xEntMPData;
typedef struct xLightKitLight;
typedef struct _tagxRumble;
typedef struct xAnimFile;
typedef struct xEntCollis;
typedef struct xBound;
typedef struct iFogParams;
typedef struct xCollis;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xCutsceneZbufferHack;
typedef struct xCutsceneBreak;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct xAnimSingle;
typedef struct xShadowSimpleCache;
typedef struct xEntMotionAsset;
typedef struct xEntAsset;
typedef struct st_PACKER_ASSETTYPE;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMovePoint;
typedef struct xBaseAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct jsp_shadow_hack_atomic_context;
typedef struct xUpdateCullGroup;
typedef struct xEntFrame;
typedef struct xSpline3;
typedef struct xJSPHeader;
typedef struct xPortalAsset;
typedef struct xAnimState;
typedef struct xEntMotionERData;
typedef struct RpSector;
typedef struct RxPipeline;
typedef struct xAnimMultiFileBase;
typedef struct RwMatrixTag;
typedef enum _tagPadState;
typedef struct xAnimTransition;
typedef struct XCSNNosey;
typedef struct xEntBoulder;
typedef struct xVec4;
typedef struct RwLLLink;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct _tagxPad;
typedef struct xFFX;
typedef struct xAnimEffect;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpAtomic;
typedef struct xCutsceneMgr;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct rxReq;
typedef struct xClumpCollBSPTree;
typedef struct RwRaster;
typedef struct zJumpParam;
typedef struct _zEnv;
typedef struct xCutsceneMgrAsset;
typedef struct RwTexDictionary;
typedef enum RxClusterValidityReq;
typedef struct _class_0;
typedef struct tag_iFile;
typedef struct xCutscene;
typedef struct xEntDrive;
typedef struct zPlatform;
typedef struct xAnimMultiFile;
typedef struct RpVertexNormal;
typedef struct zAssetPickupTable;
typedef union RwStreamUnion;
typedef struct xAnimPlay;
typedef struct xEntShadow;
typedef struct RwStream;
typedef struct xAnimTable;
typedef struct xCurveAsset;
typedef struct xAnimAssetEffect;
typedef struct xPlatformAsset;
typedef struct xEnvAsset;
typedef struct tag_xFile;
typedef struct _tagPadAnalog;
typedef struct anim_coll_data;
typedef enum RxNodeDefEditable;
typedef struct xAnimAssetFile;
typedef struct zAnimFxSound;
typedef enum RxClusterValid;
typedef struct RpInterpolator;
typedef enum RwStreamType;
typedef struct xEntMotionOrbitData;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xUpdateCullMgr;
typedef struct iEnv;
typedef struct xQCData;
typedef struct _zPortal;
typedef struct xGroupAsset;
typedef struct RwChunkHeaderInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagiPad;
typedef struct tri_data_0;
typedef struct xAnimAssetTable;
typedef struct RpPolygon;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xCoef;
typedef struct RpMaterialList;
typedef struct xModelPool;
typedef struct xBox;
typedef struct xEntMechData;
typedef struct RpMaterial;
typedef struct RxClusterDefinition;
typedef enum RwStreamAccessType;
typedef struct xEntMotionSplineData;
typedef struct RwFrame;
typedef struct tri_data_1;
typedef struct xAnimAssetState;
typedef struct xCutsceneInfo;
typedef struct xVec2;
typedef struct RpGeometry;
typedef struct AnimTableList;
typedef struct zCutsceneMgr;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct _class_1;
typedef struct xCoef3;
typedef struct HackModelRadius;
typedef struct RxOutputSpec;
typedef struct xEntMotionMPData;
typedef struct zGlobalSettings;
typedef struct RwError;
typedef struct xEntERData;
typedef struct RwMemory;
typedef struct xMat3x3;
typedef struct xLinkAsset;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct xCutsceneTime;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct xGroup;
typedef struct zLedgeGrabParams;
typedef struct RxIoSpec;
typedef struct xGridBound;
typedef struct xAnimTransitionList;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef enum xCurveType;
typedef struct xCutsceneData;
typedef enum _zPlayerWallJumpState;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEntMotionMechData;
typedef enum xCurveClamp;
typedef struct xClumpCollBSPVertInfo;
typedef struct RpTriangle;
typedef struct xEntPenData;
typedef struct RwFrustumPlane;
typedef struct zLasso;
typedef struct RxNodeDefinition;
typedef enum _tagRumbleType;
typedef struct xSurface;
typedef struct xClumpCollBSPTriangle;
typedef union RwStreamFile;
typedef struct RwPlane;
typedef enum _zPlayerType;
typedef struct RxCluster;
typedef struct analog_data;
typedef struct xEntOrbitData;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct xEntMotion;
typedef struct xModelTag;
typedef struct RwRGBAReal;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RwObjectHasFrame;
typedef union _class_2;
typedef struct RwLinkList;
typedef enum RpWorldRenderOrder;
typedef struct zPlayerCarryInfo;
typedef struct xCamera;
typedef struct xCutsceneZbuffer;
typedef struct xEntSplineData;
typedef struct RwV2d;
typedef struct xShadowSimplePoly;
typedef struct xModelBucket;
typedef struct xEntMotionPenData;

typedef int(*type_0)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_1)(unsigned int);
typedef void(*type_3)(xEnt*, xScene*, float);
typedef RpWorldSector*(*type_4)(RpWorldSector*);
typedef int(*type_5)(void*, unsigned int);
typedef char*(*type_6)(xBase*);
typedef void(*type_8)(void*, unsigned int, void*);
typedef char*(*type_10)(unsigned int);
typedef void(*type_13)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_14)(xEnt*, xVec3*);
typedef unsigned int(*type_16)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_17)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_22)(xEnt*);
typedef int(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_28)(void*);
typedef int(*type_30)(RxNodeDefinition*);
typedef unsigned int(*type_32)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_34)(void*, void*, unsigned int);
typedef void(*type_36)(void*);
typedef void(*type_38)(RxNodeDefinition*);
typedef int(*type_40)(void*, void*, unsigned int);
typedef unsigned int(*type_43)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_45)(RxPipelineNode*);
typedef void*(*type_47)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef void(*type_48)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_51)(RxPipelineNode*);
typedef void*(*type_52)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef int(*type_54)(void*, unsigned int, void*, int);
typedef unsigned int(*type_57)(xAnimTransition*, xAnimSingle*, void*);
typedef void*(*type_58)(void*, unsigned int, void*, int*, int*);
typedef void(*type_60)(void*, unsigned int);
typedef void(*type_64)(void*, unsigned int, void*, char*);
typedef xAnimTable*(*type_66)();
typedef void(*type_69)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_71)(xAnimPlay*, xAnimState*);
typedef RwTexture*(*type_77)(RwTexture*, void*);
typedef void(*type_81)(xAnimPlay*, xAnimState*);
typedef RpAtomic*(*type_86)(RpAtomic*, void*);
typedef void(*type_89)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_91)(void*, void*);
typedef RpClump*(*type_93)(RpClump*, void*);
typedef RwCamera*(*type_101)(RwCamera*);
typedef void*(*type_104)(unsigned int, char*);
typedef RwCamera*(*type_108)(RwCamera*);
typedef void(*type_113)(xMemPool*, void*);
typedef RpAtomic*(*type_119)(RpAtomic*);
typedef void(*type_121)(RwResEntry*);
typedef int(*type_128)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RwObjectHasFrame*(*type_129)(RwObjectHasFrame*);

typedef unsigned char type_2[2];
typedef xVec4 type_7[12];
typedef unsigned char type_9[2];
typedef unsigned int type_11[2];
typedef float type_12[12];
typedef RwFrustumPlane type_15[6];
typedef unsigned char type_18[2];
typedef float type_19[12];
typedef float type_20[6];
typedef float type_21[16];
typedef float type_24[12];
typedef unsigned int type_25[2];
typedef xCutsceneZbuffer type_26[4];
typedef float type_27[3];
typedef RwV3d type_29[8];
typedef float type_31[12];
typedef unsigned int type_33[2];
typedef float type_35[3];
typedef xModelTag type_37[2];
typedef float type_39[12];
typedef unsigned int type_41[2];
typedef float type_42[3];
typedef char type_44[4];
typedef float type_46[12];
typedef float type_49[2];
typedef type_32 type_50[2];
typedef unsigned int type_53[72];
typedef xBase* type_55[72];
typedef xEnt* type_56[111];
typedef char* type_59[5];
typedef xVec3 type_61[4];
typedef char type_62[128];
typedef unsigned char type_63[2];
typedef xAnimMultiFileEntry type_65[1];
typedef char type_67[128];
typedef type_66 type_68[48];
typedef type_67 type_70[6];
typedef unsigned char type_72[14];
typedef xModelTag type_73[4];
typedef unsigned short type_74[2];
typedef char type_75[32];
typedef xModelInstance* type_76[14];
typedef xCollis type_78[18];
typedef char type_79[32];
typedef unsigned short type_80[3];
typedef unsigned char type_82[4];
typedef float type_83[4];
typedef RpLight* type_84[2];
typedef RwFrame* type_85[2];
typedef unsigned int type_87[4];
typedef unsigned char type_88[22];
typedef unsigned char type_90[22];
typedef unsigned char type_92[3];
typedef float type_94[15];
typedef float type_95[15];
typedef unsigned int type_96[4096];
typedef unsigned char type_97[2];
typedef unsigned int type_98[15];
typedef RwTexCoords* type_99[8];
typedef xVec3 type_100[5];
typedef HackModelRadius type_102[3];
typedef unsigned char type_103[5];
typedef float type_105[2];
typedef char type_106[32];
typedef char type_107[16];
typedef xVec3 type_109[60];
typedef char type_110[16];
typedef AnimTableList type_111[33];
typedef float type_112[22];
typedef float type_114[4];
typedef unsigned short type_115[3];
typedef st_PACKER_ASSETTYPE type_116[78];
typedef float type_117[22];
typedef char type_118[32];
typedef char type_120[32];
typedef unsigned int type_122[15];
typedef unsigned int type_123[15];
typedef unsigned int type_124[15];
typedef unsigned char type_125[3];
typedef RxCluster type_126[1];
typedef analog_data type_127[2];
typedef char type_130[16];
typedef RwTexCoords* type_131[8];
typedef xVec3 type_132[3];
typedef float type_133[4];
typedef char type_134[16];

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_99 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_3 update;
	type_3 endUpdate;
	type_14 bupdate;
	type_17 move;
	type_22 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_48 transl;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_91 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_128 eventFunc;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_12 tmrs;
	type_19 ttms;
	type_24 atms;
	type_31 dtms;
	type_39 vms;
	type_46 dss;
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
	type_1 resolvID;
	type_6 base2Name;
	type_10 id2Name;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_20 MoveSpeed;
	type_27 AnimSneak;
	type_35 AnimWalk;
	type_42 AnimRun;
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
	type_82 talk_filter;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xQuat
{
	xVec3 v;
	float s;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_21 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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
	type_63 NumAnims;
	void** RawData;
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
	type_13 post;
	type_43 depenq;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_125 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
		tri_data_0 tri;
	};
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

struct xCutsceneZbufferHack
{
	char* name;
	type_26 times;
};

struct xCutsceneBreak
{
	float Time;
	int Index;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_118 name;
	type_120 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_4 renderCallBack;
	RxPipeline* pipeline;
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
	type_87 pad;
};

struct RwStreamCustom
{
	type_28 sfnclose;
	type_34 sfnread;
	type_40 sfnwrite;
	type_5 sfnskip;
	void* data;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_49 BilinearLerp;
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
	type_61 corner;
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

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_47 readXForm;
	type_52 writeXForm;
	type_54 assetLoaded;
	type_58 makeData;
	type_8 cleanup;
	type_60 assetUnloaded;
	type_64 writePeek;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_97 pad;
	float delay;
	xSpline3* spl;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct jsp_shadow_hack_atomic_context
{
	xJSPHeader* jsp;
	int index;
	int last_material;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct xJSPHeader
{
	type_44 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_81 BeforeEnter;
	type_69 StateCallback;
	type_89 BeforeAnimMatrices;
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

struct RpSector
{
	int type;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_57 Conditional;
	type_57 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct xEntBoulder
{
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct _tagxPad
{
	type_88 value;
	type_90 last_value;
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
	type_112 up_tmr;
	type_117 down_tmr;
	type_127 analog;
};

struct xFFX
{
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_32 Callback;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_93 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_119 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
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
	type_75 sceneStart;
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

struct rxReq
{
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_94 startTime;
	type_95 endTime;
	type_98 emitID;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _class_0
{
	xVec3* verts;
};

struct tag_iFile
{
	unsigned int flags;
	type_62 path;
	int fd;
	int offset;
	int length;
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
	type_25 SndChannelReq;
	type_33 SndAssetID;
	type_41 SndHandle;
	XCSNNosey* cb_nosey;
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
	type_65 Files;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct zAssetPickupTable
{
	unsigned int Magic;
	unsigned int Count;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
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
	type_89 BeforeAnimMatrices;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_105 radius;
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int position;
	RwStreamUnion Type;
	int rwOwned;
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

struct xCurveAsset
{
	xCurveType type;
	xCurveClamp clamp;
	float delta;
	int numPoints;
	float* points;
};

struct xAnimAssetEffect
{
	unsigned int StateID;
	float StartTime;
	float EndTime;
	unsigned int Flags;
	unsigned int EffectType;
	unsigned int UserDataSize;
};

struct xPlatformAsset
{
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

struct tag_xFile
{
	type_79 relname;
	tag_iFile ps;
	void* user_data;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct anim_coll_data
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimAssetFile
{
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	type_74 NumAnims;
	void** RawData;
	int Physics;
	int StartPose;
	int EndPose;
};

struct zAnimFxSound
{
	unsigned int ID;
	float vol;
	float pitch;
	unsigned int priority;
	unsigned int flags;
	float radius;
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

enum RwStreamType
{
	rwNASTREAM,
	rwSTREAMFILE,
	rwSTREAMFILENAME,
	rwSTREAMMEMORY,
	rwSTREAMCUSTOM,
	rwSTREAMTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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
	type_36 activateCB;
	type_36 deactivateCB;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_84 light;
	type_85 light_frame;
	int memlvl;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RwChunkHeaderInfo
{
	unsigned int type;
	unsigned int length;
	unsigned int version;
	unsigned int buildNum;
	int isComplex;
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

struct _tagiPad
{
	int port;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

struct xAnimAssetTable
{
	unsigned int Magic;
	unsigned int NumRaw;
	unsigned int NumFiles;
	unsigned int NumStates;
	unsigned int ConstructFunc;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_80 vertIndex;
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

struct xCoef
{
	type_83 a;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionSplineData
{
	int unknown;
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

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xAnimAssetState
{
	unsigned int StateID;
	unsigned int FileIndex;
	unsigned int EffectCount;
	unsigned int EffectOffset;
	float Speed;
	unsigned int SubStateID;
	unsigned int SubStateCount;
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
	type_107 SoundLeft;
	type_110 SoundRight;
};

struct xVec2
{
	float x;
	float y;
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
	type_131 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct AnimTableList
{
	char* name;
	type_66 constructor;
	unsigned int id;
};

struct zCutsceneMgr : xCutsceneMgr
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_113 InitCB;
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

struct _class_1
{
	float t;
	float u;
	float v;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct HackModelRadius
{
	unsigned int assetid;
	float radius;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
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
	type_9 PowerUp;
	type_18 InitialPowerUp;
};

struct RwError
{
	int pluginID;
	int errorCode;
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

struct RwMemory
{
	unsigned char* start;
	unsigned int length;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_114 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RwStreamMemory
{
	unsigned int position;
	unsigned int nSize;
	unsigned char* memBlock;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_53 baseCount;
	type_55 baseList;
	_zEnv* zen;
};

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_101 beginUpdate;
	type_108 endUpdate;
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
	type_15 frustumPlanes;
	RwBBox frustumBoundBox;
	type_29 frustumCorners;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_109 tranTable;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_121 destroyNotify;
};

enum xCurveType
{
	xCVT_BAKED
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

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RxNodeMethods
{
	type_23 nodeBody;
	type_30 nodeInit;
	type_38 nodeTerm;
	type_45 pipelineNodeInit;
	type_51 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_16 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

enum xCurveClamp
{
	xCC_CONSTANT,
	xCC_CYCLE,
	xCC_OSCILLATE
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RpTriangle
{
	type_115 vertIndex;
	short matIndex;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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
	type_100 lastRefs;
	type_103 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_92 pad;
	void* moprops;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

union RwStreamFile
{
	void* fpFile;
	void* constfpFile;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_126 clusters;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_133 wt;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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
	type_37 BubbleWandTag;
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
	type_122 Inv_PatsSock;
	type_123 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_124 Inv_LevelPickups;
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
	type_11 TongueFlags;
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
	type_72 sb_model_indices;
	type_76 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_129 sync;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RwLinkList
{
	RwLLLink link;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_7 frustplane;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
};

struct xEntSplineData
{
	int unknown;
};

struct RwV2d
{
	float x;
	float y;
};

struct xShadowSimplePoly
{
	type_132 vert;
	xVec3 norm;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_2 pad;
	float len;
	float range;
	float period;
	float phase;
};

type_130 buffer;
type_134 buffer;
type_116 assetTypeHandlers;
type_102 hackRadiusTable;
xJSPHeader* sTempJSP;
xJSPHeader sDummyEmptyJSP;
type_59 jsp_shadow_hack_textures;
char** jsp_shadow_hack_end_textures;
type_111 animTable;
type_68 tableFuncList;
unsigned int s_sbFootSoundA;
unsigned int s_sbFootSoundB;
unsigned int s_scFootSoundA;
unsigned int s_scFootSoundB;
unsigned int s_patFootSoundA;
unsigned int s_patFootSoundB;
type_50 effectFuncList;
unsigned int gxAnimUseGrowAlloc;
type_71 xAnimDefaultBeforeEnter;
type_104 FindAssetCB;
type_77 TexCB;
type_86 jsp_shadow_hack_atomic_cb;
zGlobals globals;
type_96 ourGlobals;

void MovePoint_Unload(void* userdata);
void LightKit_Unload(void* userdata);
void Anim_Unload();
void* ATBL_Read(void* indata, unsigned int* outsize);
void* FindAssetCB(unsigned int ID);
unsigned int soundEffectCB(unsigned int cbenum, xAnimActiveEffect* acteffect, void* object);
unsigned int dummyEffectCB();
void FootstepHackSceneEnter();
void TextureRW3_Unload(void* userdata);
void* RWTX_Read(void* indata, unsigned int insize, unsigned int* outsize);
RwTexture* TexCB(RwTexture* texture, void* data);
void JSP_Unload(void* userdata);
void* JSP_Read(void* indata, unsigned int insize, unsigned int* outsize);
RpAtomic* jsp_shadow_hack_atomic_cb(RpAtomic* atomic, void* data);
void BSP_Unload();
void* BSP_Read(void* indata, unsigned int insize, unsigned int* outsize);
void Model_Unload(void* userdata);
void* Curve_Read(void* indata, unsigned int insize, unsigned int* outsize);
void* Model_Read(unsigned int assetid, void* indata, unsigned int insize, unsigned int* outsize);
void zAssetShutdown();
void zAssetStartup();

// MovePoint_Unload__FPvUi
// Start address: 0x12a300
void MovePoint_Unload(void* userdata)
{
}

// LightKit_Unload__FPvUi
// Start address: 0x12a310
void LightKit_Unload(void* userdata)
{
}

// Anim_Unload__FPvUi
// Start address: 0x12a320
void Anim_Unload()
{
}

// ATBL_Read__FPvUiPvUiPUi
// Start address: 0x12a330
void* ATBL_Read(void* indata, unsigned int* outsize)
{
	unsigned int i;
	unsigned int j;
	unsigned int debugNum;
	unsigned int tmpsize;
	xAnimTable* table;
	xAnimState* astate;
	xAnimTransition* atran;
	unsigned char* zaBytes;
	xAnimAssetTable* zaTbl;
	void** zaRaw;
	xAnimAssetFile* zaFile;
	xAnimAssetState* zaState;
	int k;
	xAnimFile** fList;
	type_66 constructor;
	int i;
	type_106 tmpstr;
	xAnimFile* foundFile;
	xAnimState* state;
	xAnimAssetEffect* zaEffect;
	xAnimEffect* effect;
}

// FindAssetCB__FUiPc
// Start address: 0x12a8c0
void* FindAssetCB(unsigned int ID)
{
	unsigned int size;
}

// soundEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x12a8e0
unsigned int soundEffectCB(unsigned int cbenum, xAnimActiveEffect* acteffect, void* object)
{
	unsigned int sndhandle;
	unsigned int vil_SID;
	int vil_result;
	xEnt* ent_tmp;
	zAnimFxSound* snd;
	unsigned int id;
	unsigned int newId;
	float volFactor;
	unsigned int footSelector;
}

// dummyEffectCB__FUiP17xAnimActiveEffectP11xAnimSinglePv
// Start address: 0x12ab50
unsigned int dummyEffectCB()
{
}

// FootstepHackSceneEnter__Fv
// Start address: 0x12ab60
void FootstepHackSceneEnter()
{
}

// TextureRW3_Unload__FPvUi
// Start address: 0x12abe0
void TextureRW3_Unload(void* userdata)
{
	RwTexture* tex;
}

// RWTX_Read__FPvUiPvUiPUi
// Start address: 0x12ac10
void* RWTX_Read(void* indata, unsigned int insize, unsigned int* outsize)
{
	RwTexDictionary* txd;
	RwMemory rwmem;
	RwStream* stream;
	RwTexture* tex;
	RwError error;
}

// TexCB__FP9RwTexturePv
// Start address: 0x12ad70
RwTexture* TexCB(RwTexture* texture, void* data)
{
	RwTexture** texFound;
}

// JSP_Unload__FPvUi
// Start address: 0x12ad90
void JSP_Unload(void* userdata)
{
}

// JSP_Read__FPvUiPvUiPUi
// Start address: 0x12adc0
void* JSP_Read(void* indata, unsigned int insize, unsigned int* outsize)
{
	xJSPHeader* retjsp;
}

// jsp_shadow_hack_atomic_cb__FP8RpAtomicPv
// Start address: 0x12ae80
RpAtomic* jsp_shadow_hack_atomic_cb(RpAtomic* atomic, void* data)
{
	jsp_shadow_hack_atomic_context& context;
	int index;
	xClumpCollBSPTree* colltree;
	int material_index;
	xClumpCollBSPTriangle* tri;
	xClumpCollBSPTriangle* end_tri;
}

// BSP_Unload__FPvUi
// Start address: 0x12b020
void BSP_Unload()
{
}

// BSP_Read__FPvUiPvUiPUi
// Start address: 0x12b030
void* BSP_Read(void* indata, unsigned int insize, unsigned int* outsize)
{
	RwStream* stream;
	RwMemory rwmem;
	RwChunkHeaderInfo chunkHeaderInfo;
	RpWorld* bsp;
}

// Model_Unload__FPvUi
// Start address: 0x12b120
void Model_Unload(void* userdata)
{
}

// Curve_Read__FPvUiPvUiPUi
// Start address: 0x12b150
void* Curve_Read(void* indata, unsigned int insize, unsigned int* outsize)
{
	xCurveAsset* curve_asset;
}

// Model_Read__FPvUiPvUiPUi
// Start address: 0x12b1c0
void* Model_Read(unsigned int assetid, void* indata, unsigned int insize, unsigned int* outsize)
{
	RpAtomic* model;
	unsigned int i;
	RpAtomic* tmpModel;
}

// zAssetShutdown__Fv
// Start address: 0x12b2a0
void zAssetShutdown()
{
}

// zAssetStartup__Fv
// Start address: 0x12b2b0
void zAssetStartup()
{
}

