typedef struct xAnimFile;
typedef struct xBase;
typedef struct zLedgeGrabParams;
typedef struct RwV3d;
typedef struct zScene;
typedef struct xLightKitLight;
typedef struct xParGroup;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimTransition;
typedef struct _class_0;
typedef struct RwRaster;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct RwV2d;
typedef struct xShadowSimpleCache;
typedef struct xUpdateCullEnt;
typedef struct xAnimActiveEffect;
typedef struct RxNodeDefinition;
typedef struct xParCmdTex;
typedef struct ptank_pool__pos_color_size_uv2;
typedef struct xEntShadow;
typedef struct RpMaterialList;
typedef enum _zPlayerWallJumpState;
typedef struct xParCmd;
typedef struct RpAtomic;
typedef struct xAnimPlay;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xVec3;
typedef struct iEnv;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct anim_coll_data;
typedef struct RpMaterial;
typedef struct render_state;
typedef struct _tagEmitSphere;
typedef struct xAnimState;
typedef struct xModelPool;
typedef struct xAnimMultiFile;
typedef struct ptank_pool;
typedef struct RxPipelineNodeParam;
typedef struct xParEmitterAsset;
typedef struct zEnt;
typedef struct xLightKit;
typedef struct RwTexture;
typedef struct RxHeap;
typedef struct xJSPNodeInfo;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef enum _tagRumbleType;
typedef struct xLinkAsset;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RpClump;
typedef struct xQuat;
typedef struct xParSysAsset;
typedef struct RwTexCoords;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct rxHeapBlockHeader;
typedef struct analog_data;
typedef struct xAnimTable;
typedef struct xParSys;
typedef struct RxPipelineRequiresCluster;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMorphTarget;
typedef struct xGroup;
typedef struct _tagEmitRect;
typedef struct xPar;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct xBound;
typedef struct xJSPHeader;
typedef struct xVec2;
typedef struct xBaseAsset;
typedef struct zCheckPoint;
typedef struct xMat4x3;
typedef struct zPlayerGlobals;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct xBBox;
typedef struct RwMatrixTag;
typedef struct RpMeshHeader;
typedef struct xUpdateCullMgr;
typedef struct xParCmdAsset;
typedef struct zPlayerCarryInfo;
typedef struct RwResEntry;
typedef struct xSerial;
typedef struct _zEnv;
typedef struct rxReq;
typedef struct xCamera;
typedef struct xMemPool;
typedef struct xPEEntBound;
typedef struct zPlayerSettings;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPTree;
typedef struct RwCamera;
typedef struct _tagEmitLine;
typedef struct xParSysInfo;
typedef struct xSurface;
typedef struct xEnvAsset;
typedef struct RpTriangle;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xPortalAsset;
typedef struct xGridBound;
typedef struct xRot;
typedef struct iFogParams;
typedef struct _tagxRumble;
typedef struct xEntAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xScene;
typedef struct xAnimTransitionList;
typedef struct RpWorld;
typedef struct _tagEmitVolume;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xModelTag;
typedef struct xCylinder;
typedef struct xEnv;
typedef struct xEntDrive;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct zJumpParam;
typedef enum RpWorldRenderOrder;
typedef struct RpLight;
typedef enum _tagPadState;
typedef struct xEntBoulder;
typedef struct zEntHangable;
typedef struct RwFrame;
typedef struct RwSphere;
typedef struct xGlobals;
typedef struct iColor_tag;
typedef struct _tagEmitOffsetPoint;
typedef struct RpSector;
typedef struct zPlatform;
typedef struct xModelBucket;
typedef struct RwTexDictionary;
typedef struct _tagxPad;
typedef struct _zPortal;
typedef struct RxOutputSpec;
typedef struct xEntFrame;
typedef struct zCutsceneMgr;
typedef struct xEntCollis;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct zAssetPickupTable;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpPTankLockStruct;
typedef struct xShadowSimplePoly;
typedef struct _tagiPad;
typedef struct xPEVCyl;
typedef struct RxIoSpec;
typedef struct xFFX;
typedef struct tri_data_0;
typedef struct _class_1;
typedef struct xCollis;
typedef struct RxNodeMethods;
typedef struct xClumpCollBSPVertInfo;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xClumpCollBSPTriangle;
typedef struct xQCData;
typedef struct xPEEntBone;
typedef struct RxCluster;
typedef struct xAnimMultiFileEntry;
typedef struct tri_data_1;
typedef struct RxPacket;
typedef struct _class_2;
typedef struct zLasso;
typedef struct zGlobals;
typedef enum RwFogType;
typedef struct zGlobalSettings;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RpInterpolator;
typedef struct xPECircle;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct zPlayerLassoInfo;
typedef union _class_3;

typedef unsigned int(*type_0)(void*, void*);
typedef xBase*(*type_1)(unsigned int);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_5)(RxPipelineNode*);
typedef unsigned int(*type_6)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_7)(xBase*);
typedef int(*type_8)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_11)(xEnt*, xVec3*);
typedef int(*type_12)(RxPipelineNode*, RxPipeline*);
typedef char*(*type_13)(unsigned int);
typedef void(*type_14)(void*, xParGroup*);
typedef void(*type_19)(xAnimState*, xAnimSingle*, void*);
typedef unsigned int(*type_21)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_23)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_24)(xEnt*, xScene*, float, xEntCollis*);
typedef int(*type_27)(RxNodeDefinition*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef unsigned int(*type_29)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_31)(RxNodeDefinition*);
typedef int(*type_32)(RxPipelineNode*);
typedef void(*type_35)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_38)(xAnimPlay*, xAnimState*);
typedef unsigned int(*type_41)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_42)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpAtomic*(*type_45)(RpAtomic*);
typedef void(*type_53)(void*);
typedef void(*type_70)(xParCmd*, xParGroup*, float);
typedef RpWorldSector*(*type_71)(RpWorldSector*);
typedef RwCamera*(*type_74)(RwCamera*);
typedef RwCamera*(*type_80)(RwCamera*);
typedef void(*type_82)(xMemPool*, void*);
typedef void(*type_83)(xEnt*, xScene*, float);
typedef void(*type_88)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_89)(RwResEntry*);
typedef void(*type_92)(xEnt*);
typedef int(*type_94)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef xVec3 type_3[4];
typedef unsigned char type_4[5];
typedef xVec3 type_9[60];
typedef unsigned short type_10[3];
typedef unsigned char type_15[2];
typedef float type_16[22];
typedef xAnimMultiFileEntry type_17[1];
typedef float type_18[22];
typedef RwFrustumPlane type_20[6];
typedef xCollis type_22[18];
typedef unsigned int type_25[15];
typedef RwV3d type_26[8];
typedef unsigned int type_30[15];
typedef unsigned int type_33[72];
typedef RwTexCoords* type_34[8];
typedef unsigned int type_36[15];
typedef char type_37[4];
typedef xBase* type_39[72];
typedef analog_data type_40[2];
typedef unsigned char type_43[4];
typedef unsigned short type_44[3];
typedef xVec4 type_46[12];
typedef unsigned char type_47[2];
typedef unsigned int type_48[2];
typedef unsigned char type_49[2];
typedef unsigned char type_50[2];
typedef float type_51[6];
typedef float type_52[2];
typedef unsigned char type_54[3];
typedef float type_55[3];
typedef unsigned char type_56[2];
typedef float type_57[3];
typedef xModelTag type_58[2];
typedef float type_59[3];
typedef xParSysInfo type_60[7];
typedef float type_61[4];
typedef RpLight* type_62[2];
typedef float type_63[4];
typedef RwFrame* type_64[2];
typedef unsigned int type_65[4];
typedef RwTexCoords* type_66[8];
typedef xEnt* type_67[111];
typedef float type_68[4];
typedef unsigned char type_69[3];
typedef char type_72[128];
typedef type_72 type_73[6];
typedef xVec3 type_75[3];
typedef unsigned char type_76[14];
typedef xModelTag type_77[4];
typedef char type_78[32];
typedef xModelInstance* type_79[14];
typedef int type_81[11];
typedef unsigned char type_84[4];
typedef char type_85[32];
typedef char type_86[32];
typedef float type_87[16];
typedef char type_90[16];
typedef float type_91[4];
typedef unsigned char type_93[22];
typedef unsigned char type_95[22];
typedef char type_96[16];
typedef RxCluster type_97[1];
typedef float type_98[2];
typedef xVec3 type_99[5];

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_15 NumAnims;
	void** RawData;
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

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_9 tranTable;
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

struct RwV3d
{
	float x;
	float y;
	float z;
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
	type_33 baseCount;
	type_39 baseList;
	_zEnv* zen;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_87 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int m_num_of_particles;
	unsigned char m_alive;
	unsigned char m_killWhenDead;
	unsigned char m_active;
	unsigned char m_visible;
	unsigned char m_culled;
	unsigned char m_priority;
	unsigned char m_flags;
	unsigned char m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	type_14 draw;
	xParCmdTex* m_cmdTex;
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

struct _class_0
{
	float t;
	float u;
	float v;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_98 BilinearLerp;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_10 vertIndex;
};

struct RwV2d
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
	type_3 corner;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_0 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

struct xParCmdTex : xParCmdAsset
{
	float x1;
	float y1;
	float x2;
	float y2;
	unsigned char birthMode;
	unsigned char rows;
	unsigned char cols;
	unsigned char unit_count;
	float unit_width;
	float unit_height;
};

struct ptank_pool__pos_color_size_uv2 : ptank_pool
{
	xVec3* pos;
	iColor_tag* color;
	xVec2* size;
	xVec2* uv;
	int stride;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_52 radius;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xParCmd
{
	unsigned int flag;
	xParCmdAsset* tasset;
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
	type_45 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_42 BeforeAnimMatrices;
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
	_class_2 anim_coll;
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
	type_83 update;
	type_83 endUpdate;
	type_11 bupdate;
	type_88 move;
	type_92 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_35 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_62 light;
	type_64 light_frame;
	int memlvl;
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

struct anim_coll_data
{
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

struct render_state
{
	RwTexture* texture;
	unsigned int src_blend;
	unsigned int dst_blend;
	unsigned int flags;
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
	type_38 BeforeEnter;
	type_19 StateCallback;
	type_42 BeforeAnimMatrices;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_17 Files;
};

struct ptank_pool
{
	render_state rs;
	unsigned int used;
	RpAtomic* ptank;
	_class_1 hide;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_85 name;
	type_86 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_91 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_28 callback;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xParSysAsset : xBaseAsset
{
	unsigned int type;
	unsigned int parentParSysID;
	unsigned int textureID;
	unsigned char parFlags;
	unsigned char priority;
	unsigned short maxPar;
	unsigned char renderFunc;
	unsigned char renderSrcBlendMode;
	unsigned char renderDstBlendMode;
	unsigned char cmdCount;
	unsigned int cmdSize;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_66 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_34 texCoords;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_65 pad;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct xParSys : xBase
{
	xParSysAsset* tasset;
	unsigned int cmdCount;
	xParCmd* cmd;
	xParSys* parent;
	xParGroup* group;
	unsigned char visible;
	RwTexture* txtr_particle;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_43 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_49 m_texIdx;
	type_54 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_61 m_cvel;
	type_63 m_cfl;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_41 Callback;
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
	type_69 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xVec2
{
	float x;
	float y;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_58 BubbleWandTag;
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
	type_77 HangPawTag;
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
	type_25 Inv_PatsSock;
	type_30 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_36 Inv_LevelPickups;
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
	type_67 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_76 sb_model_indices;
	type_79 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_53 activateCB;
	type_53 deactivateCB;
};

struct xParCmdAsset
{
	unsigned int type;
	unsigned char enabled;
	unsigned char mode;
	type_56 pad;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_89 destroyNotify;
};

struct xSerial
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct rxReq
{
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
	type_46 frustplane;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_82 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_51 MoveSpeed;
	type_55 AnimSneak;
	type_57 AnimWalk;
	type_59 AnimRun;
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
	type_84 talk_filter;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_74 beginUpdate;
	type_80 endUpdate;
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
	type_20 frustumPlanes;
	RwBBox frustumBoundBox;
	type_26 frustumCorners;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xParSysInfo
{
	int type;
	type_14 func;
};

struct xSurface
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

struct RpTriangle
{
	type_44 vertIndex;
	short matIndex;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct xRot
{
	xVec3 axis;
	float angle;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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
	type_7 base2Name;
	type_13 id2Name;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_68 wt;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct zEntHangable
{
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_73 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_78 sceneStart;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RpSector
{
	int type;
};

struct zPlatform
{
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct _tagxPad
{
	type_93 value;
	type_95 last_value;
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
	type_16 up_tmr;
	type_18 down_tmr;
	type_40 analog;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct zCutsceneMgr
{
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
	type_22 colls;
	type_24 post;
	type_29 depenq;
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

struct zAssetPickupTable
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RpPTankLockStruct
{
	unsigned char* data;
	int stride;
};

struct xShadowSimplePoly
{
	type_75 vert;
	xVec3 norm;
};

struct _tagiPad
{
	int port;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xFFX
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct _class_1
{
	unsigned char* data;
	int stride;
	unsigned int size;
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
		tri_data_1 tri;
	};
};

struct RxNodeMethods
{
	type_23 nodeBody;
	type_27 nodeInit;
	type_31 nodeTerm;
	type_32 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_21 configMsgHandler;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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

struct xClumpCollBSPTriangle
{
	_class_3 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_97 clusters;
};

struct _class_2
{
	xVec3* verts;
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
	type_99 lastRefs;
	type_4 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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
	type_47 PowerUp;
	type_50 InitialPowerUp;
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
	type_2 sync;
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

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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

union _class_3
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

type_90 buffer;
type_96 buffer;
type_81 sBlendTable;
xVec3 par_offset_right;
xVec3 par_offset_up;
type_60 sParSysInfo;
zGlobals globals;
unsigned int gActiveHeap;
type_94 xParSysEventCB;
int _rpPTankAtomicDataOffset;

void xParSysRender(xBase* b);
void xParGroupUpdateR(xParSys* s, xParGroup* g, float dt);
void xParSysUpdate(xBase* to, float dt);
int xParSysEventCB(xBase* to, unsigned int toEvent);
void xParSysExit(xParSys* t);
void xParSysSetup(xParSys* t);
void xParSysInit(xBase* b, xParSysAsset* tasset);
void xParSysInit(void* b, void* tasset);
void render_par_sprite(void* data, xParGroup* ps);
void par_sprite_update(xParSys& sys, xParGroup& group);

// xParSysRender__FP5xBase
// Start address: 0x2fba10
void xParSysRender(xBase* b)
{
	xParGroup* g;
	xParSys* s;
}

// xParGroupUpdateR__FP7xParSysP9xParGroupf
// Start address: 0x2fbad0
void xParGroupUpdateR(xParSys* s, xParGroup* g, float dt)
{
	unsigned int i;
	xParCmd* cmd;
	type_70 func;
}

// xParSysUpdate__FP5xBaseP6xScenef
// Start address: 0x2fbbb0
void xParSysUpdate(xBase* to, float dt)
{
	xParSys* s;
	xParSys* parent;
	xParGroup* g;
}

// xParSysEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2fbe00
int xParSysEventCB(xBase* to, unsigned int toEvent)
{
	xParSys* t;
}

// xParSysExit__FP7xParSys
// Start address: 0x2fbf60
void xParSysExit(xParSys* t)
{
}

// xParSysSetup__FP7xParSys
// Start address: 0x2fbfa0
void xParSysSetup(xParSys* t)
{
}

// xParSysInit__FP5xBaseP12xParSysAsset
// Start address: 0x2fc010
void xParSysInit(xBase* b, xParSysAsset* tasset)
{
	xParSys* t;
	unsigned int i;
	unsigned char* cmdPtr;
}

// xParSysInit__FPvPv
// Start address: 0x2fc2e0
void xParSysInit(void* b, void* tasset)
{
}

// render_par_sprite__FPvP9xParGroup
// Start address: 0x2fc2f0
void render_par_sprite(void* data, xParGroup* ps)
{
}

// par_sprite_update__FR7xParSysR9xParGroup
// Start address: 0x2fc330
void par_sprite_update(xParSys& sys, xParGroup& group)
{
	unsigned int pivot;
	xVec3 offset_right;
	xVec3 offset_up;
	ptank_pool__pos_color_size_uv2 pool;
	xParCmdTex* tex;
	xPar* p;
	xVec4* _loc;
	float par_dist;
	xVec3& loc;
}

