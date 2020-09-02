typedef struct zEnt;
typedef struct xShadowSimplePoly;
typedef struct RwRGBA;
typedef struct popper_data;
typedef struct xAnimState;
typedef struct _class_0;
typedef struct RxHeap;
typedef struct RpSkin;
typedef struct RwBBox;
typedef struct xVec3;
typedef struct entrail_data;
typedef struct zPlatform;
typedef struct xModelInstance;
typedef struct _class_1;
typedef struct _tagEmitOffsetPoint;
typedef struct RxPipelineNode;
typedef struct xAnimEffect;
typedef struct zFXGooInstance;
typedef struct xEntCollis;
typedef struct xQuat;
typedef struct xFXRing;
typedef struct xMat4x3;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xEnt;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpWorld;
typedef struct rxHeapBlockHeader;
typedef struct zCutsceneMgr;
typedef struct tri_data_0;
typedef enum RpWorldRenderOrder;
typedef struct RpAtomic;
typedef struct xFFX;
typedef struct RpMaterial;
typedef struct xUpdateCullMgr;
typedef struct RpGeometry;
typedef struct _tagiPad;
typedef struct xBound;
typedef struct xAnimFile;
typedef struct xBase;
typedef struct RxPipelineRequiresCluster;
typedef struct RpTriangle;
typedef struct xLightKit;
typedef struct zAssetPickupTable;
typedef struct xLightKitLight;
typedef struct RxPipeline;
typedef struct RwTexture;
typedef struct xCollis;
typedef struct _class_2;
typedef struct tri_data_1;
typedef struct RpSector;
typedef struct xAnimTransition;
typedef struct xScene;
typedef struct xEnv;
typedef struct xAnimTransitionList;
typedef struct xShadowSimpleCache;
typedef struct xEntBoulder;
typedef struct _class_3;
typedef struct xParSys;
typedef struct xPEVCyl;
typedef struct RpMeshHeader;
typedef struct xQCData;
typedef struct RwResEntry;
typedef struct xClumpCollBSPTree;
typedef struct xModelPool;
typedef struct asset_type;
typedef struct xParInterp;
typedef struct RpWorldSector;
typedef struct xVec4;
typedef struct RpMorphTarget;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xEntFrame;
typedef struct RpLight;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPVertInfo;
typedef struct rxReq;
typedef struct xClumpCollBSPBranchNode;
typedef struct _tagxPad;
typedef struct RwRaster;
typedef struct xModelTag;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPTriangle;
typedef struct ztextbox;
typedef struct xParGroup;
typedef struct xAnimMultiFile;
typedef struct xPEEntBone;
typedef struct _class_4;
typedef struct _class_5;
typedef struct _tagxRumble;
typedef struct zGlobals;
typedef struct xEnvAsset;
typedef struct xMat3x3;
typedef struct jot;
typedef struct xVec2;
typedef enum RxNodeDefEditable;
typedef struct xLinkAsset;
typedef struct xParEmitterAsset;
typedef enum RxClusterValid;
typedef struct zGlobalSettings;
typedef struct _tagRain;
typedef struct xGroup;
typedef struct zLasso;
typedef struct _zPortal;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct color_type;
typedef struct xUpdateCullEnt;
typedef struct xParEmitterPropsAsset;
typedef struct zPlayerLassoInfo;
typedef struct xEntShadow;
typedef struct RwLLLink;
typedef struct zScene;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct zParEmitter;
typedef struct zLedgeGrabParams;
typedef struct _class_6;
typedef struct anim_coll_data;
typedef union _class_7;
typedef struct xPECircle;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct split_tag;
typedef struct callback;
typedef struct basic_rect;
typedef struct xAnimTable;
typedef struct xtextbox;
typedef struct xBaseAsset;
typedef struct tag_type;
typedef struct RpVertexNormal;
typedef enum _zPlayerWallJumpState;
typedef struct substr;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct _class_8;
typedef struct iEnv;
typedef struct RpInterpolator;
typedef struct xAnimPlay;
typedef enum _tagRumbleType;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct RwSphere;
typedef struct _tagWind;
typedef struct xAnimMultiFileEntry;
typedef struct tweak_info;
typedef struct xAnimActiveEffect;
typedef struct _tagEmitSphere;
typedef struct xJSPNodeInfo;
typedef struct _zEnv;
typedef struct RwTexDictionary;
typedef struct xfont;
typedef struct RxOutputSpec;
typedef struct _class_9;
typedef struct analog_data;
typedef struct RpPolygon;
typedef struct xAnimSingle;
typedef struct RpMaterialList;
typedef struct RxClusterRef;
typedef struct _class_10;
typedef struct RwCamera;
typedef struct zPlayerGlobals;
typedef struct xBBox;
typedef struct RwObject;
typedef struct zCheckPoint;
typedef struct RxIoSpec;
typedef struct _tagEmitRect;
typedef enum zFXGooState;
typedef struct xAnimMultiFileBase;
typedef struct xJSPHeader;
typedef struct xSurface;
typedef struct _tagClimate;
typedef struct zPlayerCarryInfo;
typedef struct _class_11;
typedef struct RpClump;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct zPlayerSettings;
typedef struct RwFrame;
typedef struct RxPipelineCluster;
typedef struct xPortalAsset;
typedef struct xCamera;
typedef struct xModelBucket;
typedef struct tweak_callback;
typedef struct _class_12;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct xPEEntBound;
typedef struct xGridBound;
typedef struct RxCluster;
typedef struct xDynAsset;
typedef struct _tagEmitLine;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xEntAsset;
typedef enum RwFogType;
typedef struct iFogParams;
typedef enum _enum_0;
typedef struct xEntDrive;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xParEmitter;
typedef struct _class_13;
typedef struct RwLinkList;
typedef struct _tagEmitVolume;
typedef enum _enum_1;
typedef enum _tagPadState;
typedef struct entrail_type;
typedef struct RwV2d;
typedef struct zJumpParam;
typedef struct xGlobals;
typedef struct zEntHangable;
typedef struct _class_14;
typedef enum state_enum;
typedef union _class_15;

typedef char*(*type_0)(xBase*);
typedef char*(*type_2)(unsigned int);
typedef RpAtomic*(*type_3)(RpAtomic*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_11)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_18)(RxNodeDefinition*);
typedef void(*type_19)(xEnt*, xScene*, float);
typedef RpAtomic*(*type_21)(RpAtomic*);
typedef void(*type_25)(RxNodeDefinition*);
typedef void(*type_26)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, float, xEntCollis*);
typedef int(*type_29)(RxPipelineNode*);
typedef void(*type_30)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_31)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_32)(xEnt*);
typedef void(*type_33)(RxPipelineNode*);
typedef int(*type_36)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_38)(RpWorldSector*);
typedef unsigned int(*type_41)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_42)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_43)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_44)(void*, void*);
typedef void(*type_46)(xAnimPlay*, xAnimState*);
typedef void(*type_49)(void*);
typedef void(*type_50)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_56)(unsigned int);
typedef void(*type_58)(jot&, xtextbox&, float, float);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_63)(jot&, xtextbox&, xtextbox&);
typedef void(*type_67)(tweak_info&);
typedef void(*type_73)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef unsigned int(*type_77)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_80)(RwCamera*);
typedef RwCamera*(*type_87)(RwCamera*);
typedef void(*type_91)(xMemPool*, void*);
typedef RpClump*(*type_93)(RpClump*, void*);
typedef void(*type_97)(tweak_info&);
typedef void(*type_102)(RwResEntry*);
typedef RwObjectHasFrame*(*type_120)(RwObjectHasFrame*);
typedef void(*type_123)(tweak_info&, void*);

typedef xVec3 type_1[3];
typedef unsigned char type_4[3];
typedef float type_5[4];
typedef char type_6[128];
typedef unsigned char type_7[3];
typedef type_6 type_8[6];
typedef RwFrustumPlane type_9[6];
typedef RpAtomic* type_12[4];
typedef xFXRing type_14[1];
typedef unsigned char type_15[14];
typedef xModelTag type_16[4];
typedef RwV3d type_17[8];
typedef char type_20[32];
typedef entrail_type type_22[2];
typedef xModelInstance* type_23[14];
typedef RwTexCoords* type_24[8];
typedef float type_27[16];
typedef unsigned char type_34[4];
typedef float type_35[2];
typedef char type_37[6];
typedef float type_39[4];
typedef char* type_40[16];
typedef unsigned char type_45[22];
typedef xFXRing type_47[2];
typedef unsigned char type_48[22];
typedef xVec3 type_51[4];
typedef float type_52[768];
typedef float type_53[4];
typedef xFXRing type_54[1];
typedef xVec3 type_55[5];
typedef unsigned char type_57[5];
typedef xVec3 type_59[60];
typedef xCollis type_61[18];
typedef xParInterp type_62[1];
typedef float type_64[22];
typedef unsigned int type_65[4];
typedef float type_66[22];
typedef unsigned int type_68[15];
typedef popper_data type_69[8];
typedef xVec3 type_70[3];
typedef unsigned int type_71[15];
typedef xVec3 type_72[3];
typedef unsigned int type_74[4096];
typedef unsigned short type_75[3];
typedef zFXGooInstance type_76[24];
typedef unsigned int type_78[15];
typedef xParInterp type_79[4];
typedef xParInterp type_81[4];
typedef unsigned int type_82[72];
typedef analog_data type_83[2];
typedef char type_84[4];
typedef float type_85[2];
typedef unsigned char type_86[16];
typedef xBase* type_88[72];
typedef unsigned int type_89[2];
typedef xFXRing type_90[3];
typedef xFXRing type_92[1];
typedef unsigned int type_94[2];
typedef char type_95[32];
typedef char type_96[16];
typedef char type_98[32];
typedef unsigned int type_99[2];
typedef float type_100[2];
typedef unsigned char type_101[2];
typedef RwTexCoords* type_103[8];
typedef xAnimMultiFileEntry type_104[1];
typedef xVec3 type_105[100];
typedef unsigned char type_106[2];
typedef char type_107[16];
typedef xVec3 type_108[100];
typedef unsigned int type_109[2];
typedef float type_110[4];
typedef xVec4 type_111[12];
typedef unsigned char type_112[2];
typedef float type_113[6];
typedef float type_114[3];
typedef float type_115[3];
typedef RxCluster type_116[1];
typedef xModelTag type_117[2];
typedef float type_118[3];
typedef unsigned short type_119[3];
typedef float type_121[4];
typedef float type_122[4];
typedef RpLight* type_124[2];
typedef xEnt* type_125[111];
typedef unsigned char type_126[3];
typedef RwFrame* type_127[2];

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xShadowSimplePoly
{
	type_1 vert;
	xVec3 norm;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct popper_data
{
	state_enum state;
	xEnt* ent;
	type_12 atomic;
	unsigned int atomic_size;
	float time;
	float end_time;
	union
	{
		xVec3 model_scale;
		unsigned int pipe_flags;
	};
	float rate;
	float vel;
	float rloc;
	float rvel;
	float emitted;
	int faces;
	float radius;
	float area;
	type_52 weight;
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
	type_46 BeforeEnter;
	type_50 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct _class_0
{
	unsigned int value_def;
	unsigned int value_min;
	unsigned int value_max;
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

struct RpSkin
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct entrail_data
{
	unsigned short flags;
	unsigned short type;
	xEnt* ent;
	xVec3 loc;
	xVec3 vel;
	float emitted;
};

struct zPlatform
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
	_class_14 anim_coll;
};

struct _class_1
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_77 Callback;
};

struct zFXGooInstance
{
	RpAtomic* atomic;
	int freezeGroup;
	xVec3* orig_verts;
	RwRGBA* orig_colors;
	float time;
	float timer;
	float w0;
	float w2;
	type_121 warbc;
	type_122 state_time;
	xVec3 center;
	zFXGooState state;
	float warb_time;
	float alpha;
	float min;
	float max;
	xVec3* ref_parentPos;
	xVec3 pos_parentOnFreeze;
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
	type_61 colls;
	type_28 post;
	type_41 depenq;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xFXRing
{
	unsigned int texture;
	float lifetime;
	xVec3 pos;
	float time;
	float ring_radius;
	float ring_radius_delta;
	float ring_tilt;
	float ring_tilt_delta;
	float ring_height;
	float ring_height_delta;
	iColor_tag ring_color;
	unsigned short ring_segs;
	unsigned char u_repeat;
	unsigned char v_repeat;
	xFXRing** parent;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_19 update;
	type_19 endUpdate;
	type_26 bupdate;
	type_30 move;
	type_32 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_43 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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
	type_38 renderCallBack;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_65 pad;
};

struct zCutsceneMgr
{
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_3 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xFFX
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
	type_24 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct _tagiPad
{
	int port;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_126 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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
	type_101 NumAnims;
	void** RawData;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_42 eventFunc;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpTriangle
{
	type_119 vertIndex;
	short matIndex;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct zAssetPickupTable
{
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_27 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_95 name;
	type_98 mask;
	unsigned int filterAddressing;
	int refCount;
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
		_class_4 tuv;
		tri_data_1 tri;
	};
};

struct _class_2
{
	unsigned int type;
	color_type color;
	unsigned int texture;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RpSector
{
	int type;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_31 Conditional;
	type_31 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_56 resolvID;
	type_0 base2Name;
	type_2 id2Name;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_51 corner;
};

struct xEntBoulder
{
};

struct _class_3
{
	float value_def;
	float value_min;
	float value_max;
};

struct xParSys
{
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_102 destroyNotify;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct asset_type : xDynAsset
{
	unsigned int text;
	basic_rect bounds;
	unsigned int font;
	_class_8 size;
	_class_10 space;
	color_type color;
	_class_12 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float max_height;
	_class_2 backdrop;
};

struct xParInterp
{
	type_35 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_103 texCoords;
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

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct rxReq
{
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct _tagxPad
{
	type_45 value;
	type_48 last_value;
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
	type_64 up_tmr;
	type_66 down_tmr;
	type_83 analog;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_53 wt;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_7 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct ztextbox : xBase
{
	_class_15 flag;
	asset_type* asset;
	xtextbox tb;
	type_40 segments;
	unsigned int segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
};

struct xParGroup
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_104 Files;
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

struct _class_4
{
	float t;
	float u;
	float v;
};

struct _class_5
{
	unsigned char value_def;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
};

struct jot
{
	substr s;
	_class_1 flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct xVec2
{
	float x;
	float y;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_5 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_106 PowerUp;
	type_112 InitialPowerUp;
};

struct _tagRain
{
	int rain;
	float strength;
	zParEmitter* rain_emitter;
	zParEmitter* snow_emitter;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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
	type_55 lastRefs;
	type_57 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct color_type
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_44 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_62 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_79 color_birth;
	type_81 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_100 radius;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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
	type_82 baseCount;
	type_88 baseList;
	_zEnv* zen;
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

struct zParEmitter : xParEmitter
{
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_59 tranTable;
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

struct _class_6
{
	unsigned int value_def;
	unsigned int labels_size;
	char** labels;
	void* values;
};

struct anim_coll_data
{
};

union _class_7
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
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

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct callback
{
	type_58 render;
	type_63 layout_update;
	type_63 render_update;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct tag_type
{
	substr name;
	type_73 parse_tag;
	type_73 reset_tag;
	void* context;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct substr
{
	char* text;
	unsigned int size;
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

struct _class_8
{
	float width;
	float height;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_124 light;
	type_127 light_frame;
	int memlvl;
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
	type_10 BeforeAnimMatrices;
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

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct _tagWind
{
	float strength;
	float angle;
	xVec3 dir;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct tweak_info
{
	substr name;
	void* value;
	tweak_callback* cb;
	void* context;
	unsigned char type;
	unsigned char value_size;
	unsigned short flags;
	union
	{
		_class_13 int_context;
		_class_0 uint_context;
		_class_3 float_context;
		_class_5 bool_context;
		_class_6 select_context;
		_class_9 flag_context;
		_class_11 all_context;
	};
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct _tagEmitSphere
{
	float radius;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _class_9
{
	unsigned int value_def;
	unsigned int mask;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_75 vertIndex;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_85 BilinearLerp;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct _class_10
{
	float x;
	float y;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_80 beginUpdate;
	type_87 endUpdate;
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
	type_9 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
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
	type_117 BubbleWandTag;
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
	type_16 HangPawTag;
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
	type_68 Inv_PatsSock;
	type_71 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_78 Inv_LevelPickups;
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
	type_109 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_125 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_15 sb_model_indices;
	type_23 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

enum zFXGooState
{
	zFXGooStateNormal,
	zFXGooStateFreezing,
	zFXGooStateFrozen,
	zFXGooStateMelting,
	zFXGooStateInactive = 0xdeadbeef,
	zFXGooStateForce32Bit = 0xffffffff
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xJSPHeader
{
	type_84 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xSurface
{
};

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
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

struct _class_11
{
	type_86 pad;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_91 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxNodeMethods
{
	type_13 nodeBody;
	type_18 nodeInit;
	type_25 nodeTerm;
	type_29 pipelineNodeInit;
	type_33 pipelineNodeTerm;
	type_36 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_113 MoveSpeed;
	type_114 AnimSneak;
	type_115 AnimWalk;
	type_118 AnimRun;
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
	type_34 talk_filter;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_111 frustplane;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct tweak_callback
{
	type_97 on_change;
	type_97 on_select;
	type_97 on_unselect;
	type_97 on_start_edit;
	type_97 on_stop_edit;
	type_97 on_expand;
	type_97 on_collapse;
	type_97 on_update;
	type_123 convert_mem_to_tweak;
	type_123 convert_tweak_to_mem;
};

struct _class_12
{
	float left;
	float top;
	float right;
	float bottom;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_116 clusters;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_120 sync;
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
	type_4 emit_pad;
	type_7 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _class_13
{
	int value_def;
	int value_min;
	int value_max;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct entrail_type
{
	char* model_name;
	int bone;
	float rate;
	float cull_dist;
	xVec3 offset;
	xVec3 offset_rand;
	xVec3 vel;
	xVec3 vel_rand;
};

struct RwV2d
{
	float x;
	float y;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_8 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_20 sceneStart;
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

struct _class_14
{
	xVec3* verts;
};

enum state_enum
{
	STATE_NONE,
	STATE_OFF,
	STATE_ON
};

union _class_15
{
	unsigned char active;
	unsigned char dirty;
	unsigned char show_backdrop;
	unsigned char visible;
	unsigned char hack_invisible;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_96 buffer;
type_107 buffer;
unsigned int gFXSurfaceFlags;
type_90 sPatrickStunRing;
type_92 sThunderRing;
type_54 sHammerRing;
type_47 sPorterRing;
type_14 sMuscleArmRing;
type_110 defaultGooTimes;
type_39 defaultGooWarbc;
type_76 zFXGooInstances;
ztextbox* goo_timer_textbox;
xVec3 bubblehit_pos_rnd;
xVec3 bubblehit_vel_rnd;
float bubblehit_vel_scale;
xVec3 bubbletrail_pos_rnd;
xVec3 bubbletrail_vel_rnd;
float bubbletrail_vel_scale;
xVec3 bubblewall_scale;
xVec3 bubblewall_velscale;
type_69 poppers;
type_22 entrail_types;
entrail_data* entrails;
unsigned int entrails_size;
unsigned int gActiveHeap;
zGlobals globals;
xVec3 m_UnitAxisY;
unsigned char* giAnimScratch;
type_74 ourGlobals;
xVec3 g_O3;
type_3 gAtomicRenderCallBack;
RxPipeline* xFXgooPipeline;
_zEnv* gCurEnv;
_tagClimate gClimate;
type_21 AtomicDefaultRenderCallBack;
type_60 zFXGooRenderAtomic;
type_67 on_spawn_bubble_wall;

void setup_entrails(zScene& s);
void update_entrails(float dt);
void zFXPopOff(xEnt& ent, float rate, float time);
void zFXPopOn(xEnt& ent, float rate, float time);
void update_popper(popper_data& popper, float dt);
void emit_popper_bubbles(popper_data& popper, int emit, float scale, float vel_add);
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper);
void random_point_on_triangle(xVec3& loc, xVec3& norm, xVec3* v, xVec3* n);
void eval_tri(xVec3* vert, xVec3* norm, xMat4x3* mat, RpGeometry* geom, RpTriangle* tri);
unsigned char setup_popper_emitter(popper_data& popper);
void zFX_SpawnBubbleBlast(xVec3* pos, unsigned int num, float radius, float blast_vel, float rand_vel);
void zFX_SpawnBubbleSlam(xVec3* pos, unsigned int num, float rang, float bvel, float rvel);
void zFX_SpawnBubbleWall();
void zFX_SpawnBubbleMenuTrail(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd, float scale);
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrailNoNegRandVel(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd);
void zFX_SpawnBubbleTrail(xVec3* pos, unsigned int num);
void zFX_SpawnBubbleHit(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd, float vel_scale);
void zFX_SpawnBubbleHit(xVec3* pos, unsigned int num);
void zFXGooEventMelt(xEnt* ent);
void zFXGooEventSetFreezeDuration(xEnt* ent, float duration);
void zFXGooEventSetWarb(xEnt* ent, float* warb);
int zFXGooIs(xEnt* obj, float& depth, unsigned int playerCheck);
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec);
void zFXUpdate(float dt);
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic);
void zFXGooUpdateInstance(zFXGooInstance* goo, float dt);
void zFXGooEnable(RpAtomic* atomic, int freezeGroup);
xFXRing* zFXMuscleArmWave(xVec3* pos);
void zFXPorterWave(xVec3* pos);
void zFXHammer(xVec3* pos);
void zFXPatrickStun(xVec3* pos);
void zFX_SceneReset();
void zFX_SceneExit(RpWorld* world);
void zFX_SceneEnter(RpWorld* world);
void on_spawn_bubble_wall();

// setup_entrails__FR6zScene
// Start address: 0x175870
void setup_entrails(zScene& s)
{
	type_89 hash;
	type_94 hash_dff;
	type_99 hash_minf;
	unsigned int i;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	unsigned int model;
	unsigned int i;
	zEnt** it;
	zEnt** end;
	xEnt* ent;
	unsigned int model;
	unsigned int i;
}

// update_entrails__Ff
// Start address: 0x175af0
void update_entrails(float dt)
{
	entrail_data* it;
	entrail_data* end;
}

// zFXPopOff__FR4xEntff
// Start address: 0x175eb0
void zFXPopOff(xEnt& ent, float rate, float time)
{
	popper_data* popper;
	xSphere o;
}

// zFXPopOn__FR4xEntff
// Start address: 0x1762a0
void zFXPopOn(xEnt& ent, float rate, float time)
{
	popper_data* popper;
	xSphere o;
	xVec3 tiny;
}

// update_popper__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_dataf
// Start address: 0x1766b0
void update_popper(popper_data& popper, float dt)
{
	float area;
	float vel_add;
	float rate;
	float s;
	float ss;
	float scale;
	int emit;
}

// emit_popper_bubbles__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_dataiff
// Start address: 0x176980
void emit_popper_bubbles(popper_data& popper, int emit, float scale, float vel_add)
{
	int max_emit;
	xVec3* buffer;
	xVec3* loc;
	xVec3* end_loc;
	xVec3* vel;
	xModelInstance* model;
	xMat3x3 oldmat;
	xMat3x3& mat;
	float svel;
	float rloc;
	float rvel;
}

// random_surface_point__17@unnamed@zFX_cpp@FR5xVec3R5xVec3RCQ217@unnamed@zFX_cpp@11popper_data
// Start address: 0x176d70
void random_surface_point(xVec3& loc, xVec3& norm, popper_data& popper)
{
	xMat4x3* mat;
	int which;
	RpGeometry* geom;
	RpAtomic** atomic;
	RpAtomic** end;
	int size;
	type_70 v;
	type_72 n;
}

// random_point_on_triangle__17@unnamed@zFX_cpp@FR5xVec3R5xVec3PC5xVec3PC5xVec3
// Start address: 0x176ea0
void random_point_on_triangle(xVec3& loc, xVec3& norm, xVec3* v, xVec3* n)
{
	float s;
	float t;
}

// eval_tri__17@unnamed@zFX_cpp@FP5xVec3P5xVec3PC7xMat4x3PC10RpGeometryPC10RpTriangle
// Start address: 0x177090
void eval_tri(xVec3* vert, xVec3* norm, xMat4x3* mat, RpGeometry* geom, RpTriangle* tri)
{
	RpSkin* skin;
	RpMorphTarget* mt;
	xVec3* in_vert;
	xVec3* in_norm;
	xMat4x3* skinmat;
	float* vert_bone_weight;
	unsigned int* vert_bone_index;
}

// setup_popper_emitter__17@unnamed@zFX_cpp@FRQ217@unnamed@zFX_cpp@11popper_data
// Start address: 0x1779c0
unsigned char setup_popper_emitter(popper_data& popper)
{
	float* weight;
	xModelInstance* model;
	RpGeometry* geom;
	xVec3* vert;
	RpTriangle* tri;
	float* end;
	xVec3& a;
	xVec3& b;
	xVec3& c;
}

// zFX_SpawnBubbleBlast__FPC5xVec3Uifff
// Start address: 0x177c80
void zFX_SpawnBubbleBlast(xVec3* pos, unsigned int num, float radius, float blast_vel, float rand_vel)
{
	xVec3* buffer;
	xVec3* itl;
	xVec3* itv;
	xVec3* end;
	float ang;
	float uz;
	xVec3 rvel;
}

// zFX_SpawnBubbleSlam__FPC5xVec3Uifff
// Start address: 0x178020
void zFX_SpawnBubbleSlam(xVec3* pos, unsigned int num, float rang, float bvel, float rvel)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	unsigned int j;
	float ang;
}

// zFX_SpawnBubbleWall__Fv
// Start address: 0x178280
void zFX_SpawnBubbleWall()
{
	RwCamera* camera;
	RwMatrixTag* mat;
	type_105 pos;
	type_108 vel;
	xVec3* pp;
	xVec3* vp;
	unsigned int i;
}

// zFX_SpawnBubbleMenuTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178490
void zFX_SpawnBubbleMenuTrail(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3PC5xVec3PC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x178660
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, xVec3* vel1, xVec3* vel2, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd, float scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3 vel_offset;
	xVec3* pp;
	xVec3* vp;
	int j;
	float t;
}

// zFX_SpawnBubbleTrail__FPC5xVec3PC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178b10
void zFX_SpawnBubbleTrail(xVec3* p1, xVec3* p2, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3 offset;
	xVec3* pp;
	xVec3* vp;
	int j;
}

// zFX_SpawnBubbleTrailNoNegRandVel__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178e30
void zFX_SpawnBubbleTrailNoNegRandVel(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3UiPC5xVec3PC5xVec3
// Start address: 0x178fe0
void zFX_SpawnBubbleTrail(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int j;
}

// zFX_SpawnBubbleTrail__FPC5xVec3Ui
// Start address: 0x1791c0
void zFX_SpawnBubbleTrail(xVec3* pos, unsigned int num)
{
}

// zFX_SpawnBubbleHit__FPC5xVec3UiPC5xVec3PC5xVec3f
// Start address: 0x1791e0
void zFX_SpawnBubbleHit(xVec3* pos, unsigned int num, xVec3* pos_rnd, xVec3* vel_rnd, float vel_scale)
{
	xVec3* posbuf;
	xVec3* velbuf;
	xVec3* pp;
	xVec3* vp;
	int j;
}

// zFX_SpawnBubbleHit__FPC5xVec3Ui
// Start address: 0x179460
void zFX_SpawnBubbleHit(xVec3* pos, unsigned int num)
{
}

// zFXGooEventMelt__FP4xEnt
// Start address: 0x179480
void zFXGooEventMelt(xEnt* ent)
{
	int i;
	zFXGooInstance* goo;
	int freezeGroup;
}

// zFXGooEventSetFreezeDuration__FP4xEntf
// Start address: 0x179510
void zFXGooEventSetFreezeDuration(xEnt* ent, float duration)
{
	int i;
	zFXGooInstance* goo;
	int freezeGroup;
}

// zFXGooEventSetWarb__FP4xEntPCf
// Start address: 0x1795a0
void zFXGooEventSetWarb(xEnt* ent, float* warb)
{
	int i;
	zFXGooInstance* goo;
}

// zFXGooIs__FP4xEntRfUi
// Start address: 0x179630
int zFXGooIs(xEnt* obj, float& depth, unsigned int playerCheck)
{
	int i;
	zFXGooInstance* goo;
	xVec3* pos;
}

// zFXGooFreeze__FP8RpAtomicPC5xVec3P5xVec3
// Start address: 0x179740
void zFXGooFreeze(RpAtomic* atomic, xVec3* center, xVec3* ref_parPosVec)
{
	int i;
	zFXGooInstance* goo;
	int freezeGroup;
}

// zFXUpdate__Ff
// Start address: 0x179910
void zFXUpdate(float dt)
{
}

// zFXGooRenderAtomic__FP8RpAtomic
// Start address: 0x179a90
RpAtomic* zFXGooRenderAtomic(RpAtomic* atomic)
{
	int i;
	zFXGooInstance* goo;
}

// zFXGooUpdateInstance__FP14zFXGooInstancef
// Start address: 0x179b60
void zFXGooUpdateInstance(zFXGooInstance* goo, float dt)
{
	float tmp;
	zFXGooState old_state;
	float rate;
	xVec3 pos;
	float freeze_time;
	int s;
	type_37 counter_text;
}

// zFXGooEnable__FP8RpAtomici
// Start address: 0x179fd0
void zFXGooEnable(RpAtomic* atomic, int freezeGroup)
{
	int i;
	zFXGooInstance* goo;
	xVec3* orig_verts;
	RwRGBA* orig_colors;
}

// zFXMuscleArmWave__FPC5xVec3
// Start address: 0x17a150
xFXRing* zFXMuscleArmWave(xVec3* pos)
{
}

// zFXPorterWave__FPC5xVec3
// Start address: 0x17a160
void zFXPorterWave(xVec3* pos)
{
}

// zFXHammer__FPC5xVec3
// Start address: 0x17a1a0
void zFXHammer(xVec3* pos)
{
}

// zFXPatrickStun__FPC5xVec3
// Start address: 0x17a200
void zFXPatrickStun(xVec3* pos)
{
}

// zFX_SceneReset__Fv
// Start address: 0x17a250
void zFX_SceneReset()
{
}

// zFX_SceneExit__FP7RpWorld
// Start address: 0x17a300
void zFX_SceneExit(RpWorld* world)
{
}

// zFX_SceneEnter__FP7RpWorld
// Start address: 0x17a360
void zFX_SceneEnter(RpWorld* world)
{
	char @4297;
	tweak_callback cb_spawn_bubble_wall;
}

// on_spawn_bubble_wall__FRC10tweak_info
// Start address: 0x17a490
void on_spawn_bubble_wall()
{
}

