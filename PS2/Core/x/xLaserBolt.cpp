typedef struct static_queue_0;
typedef struct RwObjectHasFrame;
typedef struct RxPipelineNode;
typedef struct zEntHangable;
typedef struct static_queue_1;
typedef enum _zPlayerWallJumpState;
typedef struct RpPolygon;
typedef struct xVec3;
typedef struct xLaserBoltEmitter;
typedef struct xEnv;
typedef struct bolt;
typedef struct xMovePointAsset;
typedef struct RwV3d;
typedef struct xEnt;
typedef struct effect_data;
typedef struct RpGeometry;
typedef struct xAnimTable;
typedef struct xAnimPlay;
typedef struct xModelInstance;
typedef struct RpVertexNormal;
typedef struct zPlatform;
typedef struct rxHeapFreeBlock;
typedef struct xMovePoint;
typedef struct RwRaster;
typedef struct iEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimEffect;
typedef struct RwV2d;
typedef struct RwTexCoords;
typedef struct xBase;
typedef struct xGridBound;
typedef struct iterator;
typedef enum _tagRumbleType;
typedef struct RxNodeDefinition;
typedef struct _class_0;
typedef struct tagiRenderInput;
typedef enum _zPlayerType;
typedef struct xLightKit;
typedef struct xUpdateCullGroup;
typedef struct zCutsceneMgr;
typedef struct zEnt;
typedef struct xAnimSingle;
typedef struct RwRGBA;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xJSPNodeInfo;
typedef struct RwTexture;
typedef struct _tagEmitSphere;
typedef struct xAnimState;
typedef struct xEntMechData;
typedef struct RwResEntry;
typedef struct RxPipeline;
typedef struct xMat4x3;
typedef struct RxPipelineCluster;
typedef struct RxObjSpace3DVertex;
typedef struct xEntMotionSplineData;
typedef struct RxPipelineNodeParam;
typedef struct zAssetPickupTable;
typedef struct analog_data;
typedef struct RpMeshHeader;
typedef struct xSpline3;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct xMemPool;
typedef struct curve_node;
typedef struct xQuat;
typedef struct xGroup;
typedef struct RpTriangle;
typedef struct xEntBoulder;
typedef struct RpAtomic;
typedef struct xClumpCollBSPBranchNode;
typedef struct xEntShadow;
typedef struct rxHeapBlockHeader;
typedef struct xCollis;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xModelPool;
typedef struct RxPipelineRequiresCluster;
typedef struct _tagEmitRect;
typedef struct xEntMotionMPData;
typedef struct xJSPHeader;
typedef struct xEntAsset;
typedef struct xEntERData;
typedef struct xUpdateCullMgr;
typedef struct zPlayerCarryInfo;
typedef struct xPortalAsset;
typedef enum fx_when_enum;
typedef struct zPlayerSettings;
typedef struct xScene;
typedef struct xCamera;
typedef struct xAnimFile;
typedef struct _zEnv;
typedef struct RpClump;
typedef struct xVec4;
typedef struct xSurface;
typedef struct xQCData;
typedef struct xCoef;
typedef struct RwSurfaceProperties;
typedef struct xClumpCollBSPTree;
typedef struct RwCamera;
typedef struct RwMatrixTag;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xUpdateCullEnt;
typedef struct rxReq;
typedef struct xPEEntBound;
typedef struct xEnvAsset;
typedef struct xLinkAsset;
typedef struct xModelTag;
typedef struct zLasso;
typedef struct xEntMotionMechData;
typedef struct _tagEmitLine;
typedef enum RxClusterValidityReq;
typedef enum RpWorldRenderOrder;
typedef struct xRay3;
typedef struct xEntPenData;
typedef struct _tagxRumble;
typedef struct iFogParams;
typedef struct xCoef3;
typedef struct xEntDrive;
typedef enum RxNodeDefEditable;
typedef struct xBound;
typedef struct RpMaterial;
typedef struct RpSector;
typedef struct xModelBucket;
typedef enum RxClusterValid;
typedef enum fx_type_enum;
typedef struct xEntCollis;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct xEntOrbitData;
typedef struct xVec2;
typedef struct RpWorld;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct xParEmitterAsset;
typedef enum rxEmbeddedPacketState;
typedef struct zPlatFMRunTime;
typedef struct xSphere;
typedef struct _tagEmitVolume;
typedef struct _zPortal;
typedef struct RpLight;
typedef struct xEntMotion;
typedef struct unit_data;
typedef struct xParGroup;
typedef struct xEntFrame;
typedef struct xFFX;
typedef enum RwCameraProjection;
typedef struct xPlatformAsset;
typedef enum _tagPadState;
typedef enum RxClusterForcePresent;
typedef struct xParEmitterPropsAsset;
typedef struct xEntMotionAsset;
typedef struct xCylinder;
typedef enum fx_orient_enum;
typedef union RxColorUnion;
typedef struct xGlobals;
typedef struct RwFrame;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xShadowSimplePoly;
typedef struct _tagxPad;
typedef struct xEntSplineData;
typedef struct _tagEmitOffsetPoint;
typedef struct RwSphere;
typedef struct xParEmitter;
typedef struct RwLLLink;
typedef struct tri_data_0;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RwTexDictionary;
typedef struct xEntMotionPenData;
typedef struct RxOutputSpec;
typedef struct xDecalEmitter;
typedef struct _tagiPad;
typedef struct xLightKitLight;
typedef struct tri_data_1;
typedef struct xMat3x3;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct _class_1;
typedef struct xShadowSimpleCache;
typedef struct RxClusterRef;
typedef struct xEntMPData;
typedef struct xParSys;
typedef struct RwObject;
typedef struct xPEVCyl;
typedef struct config_0;
typedef struct RxIoSpec;
typedef enum texture_mode;
typedef struct RpInterpolator;
typedef struct xParInterp;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxNodeMethods;
typedef struct xEntMotionERData;
typedef union _class_2;
typedef struct xClumpCollBSPTriangle;
typedef struct xAnimMultiFileBase;
typedef struct _class_3;
typedef struct RwFrustumPlane;
typedef struct xBaseAsset;
typedef struct xPEEntBone;
typedef struct RwPlane;
typedef struct config_1;
typedef struct zGlobals;
typedef struct _class_4;
typedef struct RxCluster;
typedef struct zGlobalSettings;
typedef struct RpMaterialList;
typedef struct RxPacket;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct _class_5;
typedef struct xBBox;
typedef struct anim_coll_data;
typedef enum RwFogType;
typedef struct iColor_tag;
typedef union _class_6;
typedef struct zLedgeGrabParams;
typedef struct RwRGBAReal;
typedef struct xPECircle;
typedef struct zJumpParam;
typedef struct xEntMotionOrbitData;
typedef struct RwLinkList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RpClump*(*type_1)(RpClump*, void*);
typedef int(*type_2)(RxPipelineNode*);
typedef RwCamera*(*type_4)(RwCamera*);
typedef RwObjectHasFrame*(*type_5)(RwObjectHasFrame*);
typedef void(*type_7)(xEnt*, xScene*, float, xEntCollis*);
typedef xBase*(*type_8)(unsigned int);
typedef void(*type_9)(RxPipelineNode*);
typedef unsigned int(*type_13)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef char*(*type_14)(xBase*);
typedef char*(*type_16)(unsigned int);
typedef void(*type_19)(xAnimPlay*, xAnimState*);
typedef int(*type_20)(RxPipelineNode*, RxPipeline*);
typedef void(*type_21)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_23)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_26)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_29)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpAtomic*(*type_30)(RpAtomic*);
typedef int(*type_32)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_36)(RxNodeDefinition*);
typedef void(*type_40)(RxNodeDefinition*);
typedef unsigned int(*type_45)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_52)(void*);
typedef void(*type_60)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_63)(RpWorldSector*);
typedef int(*type_79)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_80)(xEnt*, xScene*, float);
typedef void(*type_84)(bolt&, void*);
typedef void(*type_86)(xEnt*, xVec3*);
typedef void(*type_89)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_90)(xEnt*);
typedef void(*type_94)(xMemPool*, void*);
typedef unsigned int(*type_95)(void*, void*);
typedef void(*type_103)(RwResEntry*);

typedef xVec3 type_3[60];
typedef xCollis type_6[18];
typedef char type_10[16];
typedef RwTexCoords* type_11[8];
typedef float type_12[22];
typedef xParInterp type_15[1];
typedef float type_17[22];
typedef unsigned char type_18[2];
typedef char type_22[16];
typedef unsigned int type_24[15];
typedef unsigned int type_25[15];
typedef RwFrustumPlane type_27[6];
typedef unsigned short type_28[3];
typedef unsigned int type_31[15];
typedef xParInterp type_33[4];
typedef RwV3d type_34[8];
typedef unsigned int type_35[72];
typedef char type_37[4];
typedef analog_data type_38[2];
typedef xParInterp type_39[4];
typedef xBase* type_41[72];
typedef unsigned char type_42[3];
typedef float type_43[4];
typedef float type_44[2];
typedef unsigned char type_46[2];
typedef xVec4 type_47[12];
typedef unsigned int type_48[2];
typedef RwTexCoords* type_49[8];
typedef unsigned char type_50[2];
typedef float type_51[6];
typedef unsigned char type_53[3];
typedef float type_54[3];
typedef float type_55[3];
typedef effect_data* type_56[7];
typedef xModelTag type_57[2];
typedef unsigned int type_58[7];
typedef float type_59[4];
typedef float type_61[4];
typedef float type_62[3];
typedef float type_64[12];
typedef RpLight* type_65[2];
typedef float type_66[12];
typedef RwFrame* type_67[2];
typedef float type_68[12];
typedef xEnt* type_69[111];
typedef float type_70[12];
typedef float type_71[12];
typedef xVec3 type_72[3];
typedef unsigned int type_73[4];
typedef float type_74[12];
typedef unsigned char type_75[3];
typedef unsigned char type_76[3];
typedef char type_77[128];
typedef type_77 type_78[6];
typedef unsigned char type_81[2];
typedef unsigned char type_82[14];
typedef xModelTag type_83[4];
typedef char type_85[32];
typedef xModelInstance* type_87[14];
typedef float type_88[16];
typedef unsigned char type_91[4];
typedef float type_92[2];
typedef float type_93[2];
typedef unsigned char type_96[22];
typedef char type_97[32];
typedef unsigned char type_98[22];
typedef char type_99[32];
typedef xVec3 type_100[4];
typedef unsigned short type_101[3];
typedef xVec2 type_102[2];
typedef unsigned char type_104[2];
typedef xVec2 type_105[2];
typedef xAnimMultiFileEntry type_106[1];
typedef xVec3 type_107[5];
typedef RxCluster type_108[1];
typedef unsigned char type_109[5];

struct static_queue_0
{
	unsigned int _first;
	unsigned int _size;
	unsigned int _max_size;
	unsigned int _max_size_mask;
	bolt* _buffer;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_5 sync;
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

struct zEntHangable
{
};

struct static_queue_1
{
	unsigned int _first;
	unsigned int _size;
	unsigned int _max_size;
	unsigned int _max_size_mask;
	unit_data* _buffer;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RpPolygon
{
	unsigned short matIndex;
	type_101 vertIndex;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xLaserBoltEmitter
{
	config_0 cfg;
	static_queue_0 bolts;
	float ialpha;
	RwRaster* bolt_raster;
	int start_collide;
	type_56 fx;
	type_58 fxsize;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct bolt
{
	xVec3 origin;
	xVec3 dir;
	xVec3 loc;
	xVec3 hit_norm;
	float dist;
	float hit_dist;
	float prev_dist;
	float prev_check_dist;
	xEnt* hit_ent;
	float emitted;
	void* context;
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

struct RwV3d
{
	float x;
	float y;
	float z;
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
	type_80 update;
	type_80 endUpdate;
	type_86 bupdate;
	type_89 move;
	type_90 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_21 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct effect_data
{
	fx_type_enum type;
	fx_orient_enum orient;
	float rate;
	_class_2 data;
	float irate;
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
	type_49 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_18 pad;
	float delay;
	xSpline3* spl;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_67 light_frame;
	int memlvl;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_23 Callback;
};

struct RwV2d
{
	float x;
	float y;
};

struct RwTexCoords
{
	float u;
	float v;
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

struct iterator
{
	unsigned int _it;
	static_queue_0* _owner;
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
	RwTexture* asset;
	unsigned int units;
	xVec2 size;
	xVec2 isize;
	int prev;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct zCutsceneMgr
{
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_97 name;
	type_99 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct _tagEmitSphere
{
	float radius;
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
	type_19 BeforeEnter;
	type_60 StateCallback;
	type_26 BeforeAnimMatrices;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_103 destroyNotify;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zAssetPickupTable
{
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_94 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct curve_node
{
	float time;
	iColor_tag color;
	float scale;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RpTriangle
{
	type_28 vertIndex;
	short matIndex;
};

struct xEntBoulder
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
	type_30 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_44 radius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_73 pad;
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
		_class_3 tuv;
		tri_data_1 tri;
	};
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
	type_24 Inv_PatsSock;
	type_25 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_31 Inv_LevelPickups;
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
	type_48 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_69 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_82 sb_model_indices;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct xJSPHeader
{
	type_37 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_52 activateCB;
	type_52 deactivateCB;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

enum fx_when_enum
{
	FX_WHEN_LAUNCH,
	FX_WHEN_IMPACT,
	FX_WHEN_BIRTH,
	FX_WHEN_DEATH,
	FX_WHEN_HEAD,
	FX_WHEN_TAIL,
	FX_WHEN_KILL,
	MAX_FX_WHEN
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_51 MoveSpeed;
	type_54 AnimSneak;
	type_55 AnimWalk;
	type_62 AnimRun;
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
	type_8 resolvID;
	type_14 base2Name;
	type_16 id2Name;
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
	type_47 frustplane;
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
	type_104 NumAnims;
	void** RawData;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_1 callback;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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
	type_53 pad;
	void* moprops;
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

struct xCoef
{
	type_43 a;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_4 endUpdate;
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
	type_27 frustumPlanes;
	RwBBox frustumBoundBox;
	type_34 frustumCorners;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_45 Conditional;
	type_45 Callback;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_95 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct rxReq
{
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_61 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_59 wt;
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
	type_107 lastRefs;
	type_109 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_42 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum fx_type_enum
{
	FX_TYPE_PARTICLE,
	FX_TYPE_DECAL,
	FX_TYPE_DECAL_DIST,
	FX_TYPE_CALLBACK
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
	type_6 colls;
	type_7 post;
	type_13 depenq;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_106 Files;
};

struct xRot
{
	xVec3 axis;
	float angle;
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

struct xVec2
{
	float x;
	float y;
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
	type_63 renderCallBack;
	RxPipeline* pipeline;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_11 texCoords;
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

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_64 tmrs;
	type_66 ttms;
	type_68 atms;
	type_70 dtms;
	type_71 vms;
	type_74 dss;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct unit_data
{
	unsigned char flags;
	unsigned char curve_index;
	unsigned char u;
	unsigned char v;
	float frac;
	float age;
	float cull_size;
	xMat4x3 mat;
};

struct xParGroup
{
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xPlatformAsset
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_15 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_33 color_birth;
	type_39 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

enum fx_orient_enum
{
	FX_ORIENT_DEFAULT,
	FX_ORIENT_PATH,
	FX_ORIENT_IPATH,
	FX_ORIENT_HIT_NORM,
	FX_ORIENT_HIT_REFLECT,
	MAX_FX_ORIENT,
	FORCE_INT_FX_ORIENT = 0xffffffff
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_78 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_85 sceneStart;
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
	type_72 vert;
	xVec3 norm;
};

struct _tagxPad
{
	type_96 value;
	type_98 last_value;
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
	type_12 up_tmr;
	type_17 down_tmr;
	type_38 analog;
};

struct xEntSplineData
{
	int unknown;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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
	type_75 emit_pad;
	type_76 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_81 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xDecalEmitter
{
	config_1 cfg;
	_class_0 texture;
	static_queue_1 units;
	curve_node* curve;
	unsigned int curve_size;
	unsigned int curve_index;
	float ilife;
};

struct _tagiPad
{
	int port;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_88 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
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

struct _class_1
{
	xVec3* verts;
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
	type_100 corner;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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

struct xParSys
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

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct config_0
{
	float radius;
	float length;
	float vel;
	float fade_dist;
	float kill_dist;
	float safe_dist;
	float hit_radius;
	float rand_ang;
	float scar_life;
	type_102 bolt_uv;
	int hit_interval;
	float damage;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

enum texture_mode
{
	TM_DEFAULT,
	TM_RANDOM,
	TM_CYCLE,
	MAX_TM,
	FORCE_INT_TM = 0xffffffff
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

struct xParInterp
{
	type_92 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RxNodeMethods
{
	type_32 nodeBody;
	type_36 nodeInit;
	type_40 nodeTerm;
	type_2 pipelineNodeInit;
	type_9 pipelineNodeTerm;
	type_20 pipelineNodeConfig;
	type_29 configMsgHandler;
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

union _class_2
{
	xParEmitter* par;
	xDecalEmitter* decal;
	_class_4 callback;
};

struct xClumpCollBSPTriangle
{
	_class_6 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _class_3
{
	float t;
	float u;
	float v;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct config_1
{
	unsigned int flags;
	float life_time;
	unsigned int blend_src;
	unsigned int blend_dst;
	_class_5 texture;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct _class_4
{
	type_84 fp;
	void* context;
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
	type_50 InitialPowerUp;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_108 clusters;
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
	type_35 baseCount;
	type_41 baseList;
	_zEnv* zen;
};

struct _class_5
{
	type_105 uv;
	unsigned char rows;
	unsigned char cols;
	texture_mode mode;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct anim_coll_data
{
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

union _class_6
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_3 tranTable;
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

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct RwLinkList
{
	RwLLLink link;
};

type_10 buffer;
type_22 buffer;
xMat4x3 g_I3;
tagiRenderInput gRenderBuffer;
zGlobals globals;
unsigned int gActiveHeap;

void emit_decal_dist(effect_data& effect, bolt& b, float from_dist, float to_dist);
void emit_decal(effect_data& effect, bolt& b, float to_dist);
void emit_particle(effect_data& effect, bolt& b, float from_dist, float to_dist, float dt);
void update_fx(xLaserBoltEmitter* this, bolt& b, float prev_dist, float dt);
RxObjSpace3DVertex* render(xLaserBoltEmitter* this, bolt& b, RxObjSpace3DVertex* vert);
void collide_update(xLaserBoltEmitter* this, bolt& b);
void attach_effects(xLaserBoltEmitter* this, fx_when_enum when, effect_data* fx, unsigned int fxsize);
void render(xLaserBoltEmitter* this);
void update(xLaserBoltEmitter* this, float dt);
void emit(xLaserBoltEmitter* this, xVec3& loc, xVec3& dir);
void refresh_config(xLaserBoltEmitter* this);
void reset(xLaserBoltEmitter* this);
void set_texture(xLaserBoltEmitter* this, char* name);
void init(xLaserBoltEmitter* this, unsigned int max_bolts);

// emit_decal_dist__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b08d0
void emit_decal_dist(effect_data& effect, bolt& b, float from_dist, float to_dist)
{
	float start_dist;
	int total;
	xMat4x3 mat;
	xVec3 dloc;
	int i;
}

// emit_decal__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b0e40
void emit_decal(effect_data& effect, bolt& b, float to_dist)
{
	xMat4x3 mat;
}

// emit_particle__17xLaserBoltEmitterFRQ217xLaserBoltEmitter11effect_dataRQ217xLaserBoltEmitter4boltfff
// Start address: 0x3b1280
void emit_particle(effect_data& effect, bolt& b, float from_dist, float to_dist, float dt)
{
	xParEmitter& pe;
	xParEmitterAsset& pea;
	float velmag;
	xVec3 oldloc;
}

// update_fx__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltff
// Start address: 0x3b1730
void update_fx(xLaserBoltEmitter* this, bolt& b, float prev_dist, float dt)
{
	float tail_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
	float from_dist;
	float to_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
}

// render__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4boltP18RxObjSpace3DVertex
// Start address: 0x3b1ba0
RxObjSpace3DVertex* render(xLaserBoltEmitter* this, bolt& b, RxObjSpace3DVertex* vert)
{
	float dist0;
	xVec3 loc0;
	xVec3 loc1;
	xMat4x3& cam_mat;
	xVec3 dir;
	xVec3 right;
	xVec3 half_right;
}

// collide_update__17xLaserBoltEmitterFRQ217xLaserBoltEmitter4bolt
// Start address: 0x3b2200
void collide_update(xLaserBoltEmitter* this, bolt& b)
{
	xScene& scene;
	xRay3 ray;
	xCollis player_coll;
	xCollis scene_coll;
}

// attach_effects__17xLaserBoltEmitterFQ217xLaserBoltEmitter12fx_when_enumPQ217xLaserBoltEmitter11effect_dataUi
// Start address: 0x3b2390
void attach_effects(xLaserBoltEmitter* this, fx_when_enum when, effect_data* fx, unsigned int fxsize)
{
}

// render__17xLaserBoltEmitterFv
// Start address: 0x3b2410
void render(xLaserBoltEmitter* this)
{
	RxObjSpace3DVertex* verts;
	RxObjSpace3DVertex* v;
	iterator it;
	int used;
}

// update__17xLaserBoltEmitterFf
// Start address: 0x3b25f0
void update(xLaserBoltEmitter* this, float dt)
{
	int ci;
	iterator it;
	bolt& b;
	unsigned char collided;
	float prev_dist;
	effect_data* itfx;
	effect_data* endfx;
	effect_data* itfx;
	effect_data* endfx;
}

// emit__17xLaserBoltEmitterFRC5xVec3RC5xVec3
// Start address: 0x3b2c10
void emit(xLaserBoltEmitter* this, xVec3& loc, xVec3& dir)
{
	bolt& b;
	effect_data* itfx;
	effect_data* endfx;
}

// refresh_config__17xLaserBoltEmitterFv
// Start address: 0x3b2fb0
void refresh_config(xLaserBoltEmitter* this)
{
}

// reset__17xLaserBoltEmitterFv
// Start address: 0x3b2ff0
void reset(xLaserBoltEmitter* this)
{
	iterator it;
	bolt& b;
	effect_data* itfx;
	effect_data* endfx;
	int i;
}

// set_texture__17xLaserBoltEmitterFPCc
// Start address: 0x3b32a0
void set_texture(xLaserBoltEmitter* this, char* name)
{
}

// init__17xLaserBoltEmitterFUiPCc
// Start address: 0x3b32f0
void init(xLaserBoltEmitter* this, unsigned int max_bolts)
{
}

