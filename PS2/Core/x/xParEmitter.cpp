typedef struct xEnt;
typedef struct xGridBound;
typedef struct xCollis;
typedef enum RpWorldRenderOrder;
typedef struct RwObjectHasFrame;
typedef struct RwTexture;
typedef struct xParEmitter;
typedef struct _tagxRumble;
typedef struct xScene;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef struct RwRaster;
typedef struct xParCmd;
typedef struct RpTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct iEnv;
typedef struct RwV2d;
typedef struct xParCmdTex;
typedef struct xPar;
typedef struct RxPipeline;
typedef struct xSurface;
typedef struct RwRGBA;
typedef struct xGroup;
typedef struct RxNodeDefinition;
typedef struct xAnimMultiFile;
typedef struct _tagEmitVolume;
typedef struct xFFX;
typedef struct RpWorld;
typedef struct xUpdateCullEnt;
typedef struct RwTexCoords;
typedef struct RpSector;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xModelBucket;
typedef struct xLightKitLight;
typedef struct xGroupAsset;
typedef struct RpMeshHeader;
typedef struct xParGroup;
typedef struct RxPipelineCluster;
typedef struct xParEmitterAsset;
typedef struct xBase;
typedef struct RwResEntry;
typedef struct RxPipelineNodeParam;
typedef struct RpWorldSector;
typedef struct xShadowSimpleCache;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct xParEmitterPropsAsset;
typedef struct RwBBox;
typedef struct xJSPHeader;
typedef struct xModelInstance;
typedef struct xVec2;
typedef struct xEntShadow;
typedef struct RpLight;
typedef struct xQuat;
typedef struct xVec3;
typedef struct RwV3d;
typedef struct xLightKit;
typedef struct anim_coll_data;
typedef struct rxHeapBlockHeader;
typedef struct RwFrame;
typedef struct xAnimTransitionList;
typedef struct _tagEmitOffsetPoint;
typedef struct xAnimTable;
typedef struct RxPipelineRequiresCluster;
typedef struct xGlobals;
typedef struct xParInterp;
typedef struct xAnimTransition;
typedef struct xMat4x3;
typedef struct xUpdateCullGroup;
typedef enum _tagRumbleType;
typedef struct xAnimState;
typedef struct xParCmdAsset;
typedef struct RwMatrixTag;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct RwLLLink;
typedef struct xPEVCyl;
typedef struct analog_data;
typedef struct xAnimMultiFileEntry;
typedef struct rxReq;
typedef struct xAnimActiveEffect;
typedef struct xParSys;
typedef enum RxClusterValidityReq;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct xLinkAsset;
typedef struct xEnv;
typedef struct xClumpCollBSPTree;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct tri_data;
typedef struct xEntCollis;
typedef struct xSerial;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef enum RxNodeDefEditable;
typedef struct xUpdateCullMgr;
typedef enum RxClusterValid;
typedef struct xPEEntBone;
typedef struct xClumpCollBSPTriangle;
typedef struct RpInterpolator;
typedef struct xRot;
typedef struct xAnimMultiFileBase;
typedef struct xCamera;
typedef struct iFogParams;
typedef struct xAnimEffect;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RwCamera;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct RpPolygon;
typedef struct xCylinder;
typedef struct _class_1;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct xBox;
typedef struct xPECircle;
typedef struct RxClusterDefinition;
typedef struct xModelPool;
typedef union _class_2;
typedef struct xBound;
typedef struct RpClump;
typedef struct RwSphere;
typedef struct xParEmitterCustomSettings;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct _tagEmitSphere;
typedef struct xMat3x3;
typedef enum _tagPadState;
typedef struct RxClusterRef;
typedef struct xJSPNodeInfo;
typedef struct RwObject;
typedef struct xEntFrame;
typedef struct xQCData;
typedef struct RxIoSpec;
typedef struct xBBox;
typedef struct _tagxPad;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct _tagEmitRect;
typedef struct xShadowSimplePoly;
typedef struct _tagPadAnalog;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct _tagiPad;
typedef struct xParSysAsset;
typedef struct xBaseAsset;
typedef struct RxCluster;
typedef struct xPEEntBound;
typedef struct RxPacket;
typedef struct _tagEmitLine;
typedef enum RwFogType;
typedef struct xModelTag;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef RwCamera*(*type_0)(RwCamera*);
typedef unsigned int(*type_2)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef RwObjectHasFrame*(*type_3)(RwObjectHasFrame*);
typedef void(*type_4)(void*);
typedef void(*type_6)(RxPipelineNode*);
typedef void(*type_7)(xEnt*, xScene*, float);
typedef void(*type_8)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_10)(xEnt*);
typedef void(*type_11)(xAnimPlay*, xAnimState*);
typedef void(*type_14)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_15)(RxPipelineNode*, RxPipeline*);
typedef void(*type_16)(void*, xParGroup*);
typedef unsigned int(*type_18)(void*, void*);
typedef void(*type_19)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpWorldSector*(*type_21)(RpWorldSector*);
typedef void(*type_22)(xEnt*, xVec3*);
typedef unsigned int(*type_25)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_26)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_28)(RxNodeDefinition*);
typedef void(*type_30)(RxNodeDefinition*);
typedef int(*type_34)(RxPipelineNode*);
typedef xBase*(*type_35)(unsigned int);
typedef void(*type_36)(xEnt*, xScene*, float, xEntCollis*);
typedef char*(*type_38)(xBase*);
typedef char*(*type_39)(unsigned int);
typedef unsigned int(*type_42)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_43)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_60)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpClump*(*type_61)(RpClump*, void*);
typedef RwCamera*(*type_63)(RwCamera*);
typedef void(*type_68)(xMemPool*, void*);
typedef RpAtomic*(*type_75)(RpAtomic*);
typedef void(*type_77)(RwResEntry*);
typedef void(*type_81)(xEnt*, xScene*, float, xEntFrame*);

typedef unsigned char type_1[22];
typedef unsigned char type_5[22];
typedef RwTexCoords* type_9[8];
typedef xVec3 type_12[4];
typedef float type_13[4];
typedef unsigned char type_17[3];
typedef RpLight* type_20[2];
typedef RwFrustumPlane type_23[6];
typedef RwFrame* type_24[2];
typedef RwV3d type_27[8];
typedef unsigned char type_29[3];
typedef unsigned char type_31[3];
typedef float type_32[22];
typedef xCollis type_33[18];
typedef float type_37[22];
typedef float type_40[2];
typedef unsigned char type_41[4];
typedef analog_data type_44[2];
typedef float type_45[2];
typedef unsigned char type_46[2];
typedef unsigned char type_47[2];
typedef float type_48[4];
typedef unsigned char type_50[3];
typedef unsigned short type_51[3];
typedef float type_52[2];
typedef unsigned char type_53[2];
typedef xVec4 type_54[12];
typedef xAnimMultiFileEntry type_55[1];
typedef float type_56[4];
typedef unsigned int type_57[4];
typedef float type_58[4];
typedef xParInterp type_59[1];
typedef RwTexCoords* type_62[8];
typedef xParInterp type_64[4];
typedef xVec3 type_65[3];
typedef char type_66[128];
typedef type_66 type_67[6];
typedef xParInterp type_69[4];
typedef unsigned short type_70[3];
typedef char type_71[32];
typedef char type_72[4];
typedef char type_73[16];
typedef char type_74[32];
typedef char type_76[32];
typedef unsigned char type_78[3];
typedef float type_79[16];
typedef char type_80[16];
typedef RxCluster type_82[1];

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
	type_7 update;
	type_7 endUpdate;
	type_22 bupdate;
	type_81 move;
	type_10 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_8 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
		tri_data tri;
	};
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_3 sync;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_71 name;
	type_74 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_29 emit_pad;
	type_31 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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
	type_38 base2Name;
	type_39 id2Name;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
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

struct xParCmd
{
	unsigned int flag;
	xParCmdAsset* tasset;
};

struct RpTriangle
{
	type_70 vertIndex;
	short matIndex;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_20 light;
	type_24 light_frame;
	int memlvl;
};

struct RwV2d
{
	float x;
	float y;
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

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_41 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_47 m_texIdx;
	type_50 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_56 m_cvel;
	type_58 m_cfl;
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

struct xSurface
{
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_55 Files;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct xFFX
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
	type_21 renderCallBack;
	RxPipeline* pipeline;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_18 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct RpSector
{
	int type;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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
	type_16 draw;
	xParCmdTex* m_cmdTex;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_60 eventFunc;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_77 destroyNotify;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_62 texCoords;
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
	type_12 corner;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_59 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_64 color_birth;
	type_69 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xJSPHeader
{
	type_72 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xVec2
{
	float x;
	float y;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_52 radius;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct anim_coll_data
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_57 pad;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_67 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_76 sceneStart;
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

struct xParInterp
{
	type_40 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_11 BeforeEnter;
	type_14 StateCallback;
	type_19 BeforeAnimMatrices;
};

struct xParCmdAsset
{
	unsigned int type;
	unsigned char enabled;
	unsigned char mode;
	type_46 pad;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct rxReq
{
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_75 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_53 NumAnims;
	void** RawData;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_48 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_45 BilinearLerp;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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
	type_33 colls;
	type_36 post;
	type_2 depenq;
};

struct xSerial
{
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_4 activateCB;
	type_4 deactivateCB;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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
	type_54 frustplane;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_42 Callback;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_63 beginUpdate;
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
	type_23 frustumPlanes;
	RwBBox frustumBoundBox;
	type_27 frustumCorners;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_51 vertIndex;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct _class_1
{
	float t;
	float u;
	float v;
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
	type_19 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_17 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_61 callback;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_78 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
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
	type_9 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagEmitSphere
{
	float radius;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct _tagxPad
{
	type_1 value;
	type_5 last_value;
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
	type_32 up_tmr;
	type_37 down_tmr;
	type_44 analog;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_68 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxNodeMethods
{
	type_26 nodeBody;
	type_28 nodeInit;
	type_30 nodeTerm;
	type_34 pipelineNodeInit;
	type_6 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_25 configMsgHandler;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xShadowSimplePoly
{
	type_65 vert;
	xVec3 norm;
};

struct _tagPadAnalog
{
	char x;
	char y;
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

struct _tagiPad
{
	int port;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_82 clusters;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_13 wt;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

type_73 buffer;
type_80 buffer;
xParEmitterAsset sSaveEmmiterSettings;
xParEmitterPropsAsset sSaveEmmiterPropSettings;
xParEmitterPropsAsset sDummyProp;
xGlobals* xglobals;
type_43 xParEmitterEventCB;

void xParEmitterDestroy();
void xParEmitterUpdate(xBase* to, float dt);
xPar* xParEmitterEmit(xParEmitter* pe, float emit_dt, float par_dt);
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps);
float xParInterpCompute(int interp_mode, xParInterp* r, float time, int time_has_elapsed, float lastVal);
xPar* xParEmitterEmitCustom(xParEmitter* p, float dt, xParEmitterCustomSettings* info);
int xParEmitterEventCB(xBase* to, unsigned int toEvent);
void xParEmitterSetup(xParEmitter* t);
void xParEmitterInit(xBase* b, xParEmitterAsset* pea);
void xParEmitterInit(void* b, void* tasset);
int xParInterpConvertInterpMode(xParInterp* p);

// xParEmitterDestroy__Fv
// Start address: 0x2fcaa0
void xParEmitterDestroy()
{
}

// xParEmitterUpdate__FP5xBaseP6xScenef
// Start address: 0x2fcab0
void xParEmitterUpdate(xBase* to, float dt)
{
	xParEmitter* pe;
}

// xParEmitterEmit__FP11xParEmitterff
// Start address: 0x2fcaf0
xPar* xParEmitterEmit(xParEmitter* pe, float emit_dt, float par_dt)
{
	xPar* last_p;
	xParEmitterAsset* pea;
	xParEmitterPropsAsset* prop;
	int rate_has_elapsed;
	float rate;
	int count;
	xParSys* ps;
	xPar* p;
	float life;
	float size_birth;
	float size_death;
	xVec3 emitPosition;
	xBase* attachObject;
	int attachGroupIndex;
	int attachGroupTotal;
	int emitAgain;
	xBase* emitObj;
	int marker;
	xGroup* g;
	unsigned int get_rnd_group_idx;
	xEnt* attach_ent;
	xMat4x3* bone_mat;
	xVec3 bone_vel;
	int i;
	int c;
	float fc1;
	float fc2;
	xBase* obj;
}

// xParEmitterEmitSetTexIdxs__FP4xParPC7xParSys
// Start address: 0x2fd680
xPar* xParEmitterEmitSetTexIdxs(xPar* p, xParSys* ps)
{
	xParCmdTex* tex;
}

// xParInterpCompute__FiP10xParInterpfif
// Start address: 0x2fd740
float xParInterpCompute(int interp_mode, xParInterp* r, float time, int time_has_elapsed, float lastVal)
{
	float val;
}

// xParEmitterEmitCustom__FP11xParEmitterfP25xParEmitterCustomSettings
// Start address: 0x2fd8e0
xPar* xParEmitterEmitCustom(xParEmitter* p, float dt, xParEmitterCustomSettings* info)
{
	unsigned int flags;
	xParEmitterAsset* pe;
}

// xParEmitterEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2fdd30
int xParEmitterEventCB(xBase* to, unsigned int toEvent)
{
	xParEmitter* t;
	xParEmitterCustomSettings fake_settings;
}

// xParEmitterSetup__FP11xParEmitter
// Start address: 0x2fde00
void xParEmitterSetup(xParEmitter* t)
{
	xEnt* ent;
}

// xParEmitterInit__FP5xBaseP16xParEmitterAsset
// Start address: 0x2fdee0
void xParEmitterInit(xBase* b, xParEmitterAsset* pea)
{
	xParEmitterPropsAsset* prop;
	xParEmitter* t;
	int i;
}

// xParEmitterInit__FPvPv
// Start address: 0x2fe1b0
void xParEmitterInit(void* b, void* tasset)
{
}

// xParInterpConvertInterpMode__FP10xParInterp
// Start address: 0x2fe1c0
int xParInterpConvertInterpMode(xParInterp* p)
{
}

