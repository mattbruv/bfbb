typedef struct RwV3d;
typedef struct RpMaterial;
typedef struct RpAtomic;
typedef struct xAnimState;
typedef struct RpHAnimHierarchy;
typedef struct RxHeap;
typedef struct xBase;
typedef struct RpSector;
typedef struct RwTexCoords;
typedef struct RwMatrixTag;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpWorld;
typedef struct xEnt;
typedef struct RxPipeline;
typedef struct xCollis;
typedef struct xModelInstance;
typedef struct RxPipelineNode;
typedef struct RtAnimAnimation;
typedef struct xQuat;
typedef struct RwCamera;
typedef struct xScene;
typedef struct xAnimEffect;
typedef struct RpMeshHeader;
typedef struct xEntFrame;
typedef struct xVec3;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xEntCollis;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpSkin;
typedef struct rxHeapBlockHeader;
typedef struct RwStreamCustom;
typedef struct RpWorldSector;
typedef struct _class_0;
typedef struct RpMorphTarget;
typedef struct RpGeometry;
typedef struct RtAnimInterpolatorInfo;
typedef struct RpLight;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimFile;
typedef struct RxPipelineRequiresCluster;
typedef struct RpHAnimNodeInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct _tagxPad;
typedef struct xModelTag;
typedef struct xClumpCollBSPTriangle;
typedef struct xModelPool;
typedef struct xFFX;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xQCData;
typedef struct zLasso;
typedef struct zPlatform;
typedef struct RpUserDataArray;
typedef struct xEnvAsset;
typedef struct _tagxRumble;
typedef struct xAnimPlay;
typedef struct zGlobals;
typedef struct RwFrame;
typedef struct xVec4;
typedef struct xShadowSimpleCache;
typedef struct RtAnimInterpolator;
typedef struct RwSurfaceProperties;
typedef struct zGlobalSettings;
typedef struct xLinkAsset;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xEntShadow;
typedef struct _zPortal;
typedef struct xGroup;
typedef struct RpClump;
typedef struct zAssetPickupTable;
typedef struct rxReq;
typedef struct xUpdateCullEnt;
typedef struct RwRaster;
typedef struct zCutsceneMgr;
typedef struct zPlayerLassoInfo;
typedef struct anim_coll_data;
typedef struct xGroupAsset;
typedef enum RxClusterValidityReq;
typedef struct zScene;
typedef struct xSphere;
typedef struct RwLLLink;
typedef union RwStreamUnion;
typedef struct zLedgeGrabParams;
typedef struct xAnimMultiFile;
typedef union _class_1;
typedef struct xMat4x3;
typedef struct xVec2;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef enum _zPlayerWallJumpState;
typedef enum RwStreamType;
typedef struct xBaseAsset;
typedef struct RpVertexNormal;
typedef struct xSurface;
typedef struct xAnimTable;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xModelTagWithNormal;
typedef struct xBound;
typedef struct iEnv;
typedef enum rxEmbeddedPacketState;
typedef struct xModelBucket;
typedef enum _tagRumbleType;
typedef struct RpInterpolator;
typedef struct RwFrustumPlane;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xLightKit;
typedef enum RwCameraProjection;
typedef struct zEnt;
typedef enum RxClusterForcePresent;
typedef struct RwStream;
typedef struct xCylinder;
typedef struct xJSPNodeInfo;
typedef struct xBBox;
typedef struct analog_data;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpPolygon;
typedef enum RwStreamAccessType;
typedef struct RpMaterialList;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct RwSphere;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xJSPHeader;
typedef struct RwTexDictionary;
typedef enum RpUserDataFormat;
typedef struct xPortalAsset;
typedef struct xGridBound;
typedef struct zPlayerCarryInfo;
typedef struct RxOutputSpec;
typedef struct xUpdateCullMgr;
typedef struct RwMemory;
typedef struct zPlayerSettings;
typedef struct xAnimSingle;
typedef struct xLightKitLight;
typedef struct xMat3x3;
typedef struct xCamera;
typedef struct RwStreamMemory;
typedef struct RxClusterRef;
typedef struct _zEnv;
typedef struct RwObject;
typedef struct RwMatrixWeights;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileBase;
typedef struct _class_2;
typedef struct xMemPool;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEntDrive;
typedef struct xEntAsset;
typedef struct iFogParams;
typedef struct RxNodeDefinition;
typedef union RwStreamFile;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RpTriangle;
typedef struct RxPipelineNodeParam;
typedef struct zJumpParam;
typedef struct RxPacket;
typedef struct xEntBoulder;
typedef enum _tagPadState;
typedef struct zEntHangable;
typedef enum RwFogType;
typedef struct xGlobals;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xEnv;
typedef struct xShadowSimplePoly;
typedef struct RwLinkList;
typedef struct tri_data_0;
typedef struct tri_data_1;
typedef struct RwV2d;
typedef struct _tagPadAnalog;
typedef enum RpWorldRenderOrder;
typedef struct _tagiPad;

typedef void(*type_2)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_4)(xEnt*);
typedef RtAnimInterpolator*(*type_5)(RtAnimInterpolator*, void*);
typedef int(*type_6)(void*, unsigned int);
typedef int(*type_7)(RtAnimAnimation*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_11)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_12)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_13)(RxPipelineNode*, RxPipelineNodeParam*);
typedef RpWorldSector*(*type_14)(RpWorldSector*);
typedef int(*type_15)(void*);
typedef void(*type_16)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_18)(xEnt*, xScene*, float);
typedef int(*type_19)(RxNodeDefinition*);
typedef RpAtomic*(*type_21)(RpAtomic*, void*);
typedef unsigned int(*type_22)(void*, void*, unsigned int);
typedef void(*type_23)(RxNodeDefinition*);
typedef int(*type_24)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_25)(void*, void*, unsigned int);
typedef unsigned int(*type_26)(void*, void*);
typedef int(*type_28)(RxPipelineNode*);
typedef void(*type_29)(void*, void*);
typedef unsigned int(*type_30)(xAnimTransition*, xAnimSingle*, void*);
typedef RpMaterial*(*type_33)(RpMaterial*, void*);
typedef void(*type_34)(RxPipelineNode*);
typedef void(*type_35)(void*);
typedef void(*type_36)(void*, void*, void*, float);
typedef int(*type_37)(RxPipelineNode*, RxPipeline*);
typedef RpAtomic*(*type_38)(RpAtomic*, void*);
typedef void(*type_39)(void*, void*, void*, float, void*);
typedef void(*type_40)(void*, void*, void*);
typedef void(*type_41)(xEnt*, xVec3*);
typedef void(*type_42)(void*, void*);
typedef RtAnimAnimation*(*type_43)(RwStream*, RtAnimAnimation*);
typedef void(*type_44)(xAnimPlay*, xAnimState*);
typedef int(*type_46)(RtAnimAnimation*, RwStream*);
typedef void(*type_47)(xAnimState*, xAnimSingle*, void*);
typedef xBase*(*type_50)(unsigned int);
typedef void(*type_52)(xEnt*, xScene*, float, xEntCollis*);
typedef char*(*type_54)(xBase*);
typedef char*(*type_58)(unsigned int);
typedef RpMaterial*(*type_63)(RpMaterial*, void*);
typedef unsigned int(*type_73)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_77)(RpClump*, void*);
typedef RwCamera*(*type_78)(RwCamera*);
typedef RwCamera*(*type_82)(RwCamera*);
typedef RwFrame*(*type_83)(RwFrame*, void*);
typedef void(*type_88)(xMemPool*, void*);
typedef void(*type_100)(RwResEntry*);
typedef RpAtomic*(*type_104)(RpAtomic*);
typedef RwObjectHasFrame*(*type_110)(RwObjectHasFrame*);

typedef RwMatrixTag type_0[32];
typedef xModelInstance* type_1[14];
typedef RwTexCoords* type_3[8];
typedef RwFrustumPlane type_8[6];
typedef unsigned char type_9[4];
typedef RwV3d type_17[8];
typedef unsigned char type_20[16];
typedef unsigned char type_27[22];
typedef xVec3 type_31[4];
typedef unsigned char type_32[22];
typedef xVec3 type_45[5];
typedef unsigned char type_48[5];
typedef xVec3 type_49[60];
typedef xCollis type_51[18];
typedef RwRGBA type_53[16];
typedef float type_55[22];
typedef float type_56[4];
typedef float type_57[22];
typedef unsigned int type_59[15];
typedef unsigned int type_60[15];
typedef char type_61[16];
typedef unsigned short type_62[3];
typedef unsigned int type_64[4];
typedef unsigned int type_65[15];
typedef char type_66[16];
typedef unsigned int type_67[72];
typedef analog_data type_68[2];
typedef char type_69[4];
typedef xBase* type_70[72];
typedef RpLight* type_71[4];
typedef unsigned int type_72[4096];
typedef float type_74[16];
typedef float type_75[2];
typedef int type_76[5];
typedef RpAtomic* type_79[256];
typedef RwTexCoords* type_80[8];
typedef float type_81[2];
typedef float type_84[3];
typedef unsigned char type_85[2];
typedef RpLight* type_86[4];
typedef unsigned int type_87[2];
typedef xVec4 type_89[12];
typedef unsigned char type_90[2];
typedef float type_91[6];
typedef float type_92[3];
typedef RwTexture* type_93[16];
typedef char type_94[32];
typedef float type_95[3];
typedef char type_96[32];
typedef xModelTag type_97[2];
typedef unsigned char type_98[2];
typedef unsigned char type_99[3];
typedef float type_101[3];
typedef xAnimMultiFileEntry type_102[1];
typedef unsigned short type_103[3];
typedef RpLight* type_105[2];
typedef xEnt* type_106[111];
typedef RwFrame* type_107[2];
typedef RxCluster type_108[1];
typedef xVec3 type_109[3];
typedef char type_111[128];
typedef type_111 type_112[6];
typedef float type_113[4];
typedef unsigned char type_114[14];
typedef xModelTag type_115[4];
typedef char type_116[32];

struct RwV3d
{
	float x;
	float y;
	float z;
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

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_104 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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
	type_44 BeforeEnter;
	type_47 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct RpHAnimHierarchy
{
	int flags;
	int numNodes;
	RwMatrixTag* pMatrixArray;
	void* pMatrixArrayUnaligned;
	RpHAnimNodeInfo* pNodeInfo;
	RwFrame* parentFrame;
	RpHAnimHierarchy* parentHierarchy;
	int rootParentOffset;
	RtAnimInterpolator* currentAnim;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_24 eventFunc;
};

struct RpSector
{
	int type;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_14 renderCallBack;
	RxPipeline* pipeline;
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
	type_18 update;
	type_18 endUpdate;
	type_41 bupdate;
	type_2 move;
	type_4 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_16 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RtAnimAnimation
{
	RtAnimInterpolatorInfo* interpInfo;
	int numFrames;
	int flags;
	float duration;
	void* pFrames;
	void* customData;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_78 beginUpdate;
	type_82 endUpdate;
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
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_17 frustumCorners;
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
	type_50 resolvID;
	type_54 base2Name;
	type_58 id2Name;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_73 Callback;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_100 destroyNotify;
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
	type_51 colls;
	type_52 post;
	type_12 depenq;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RpSkin
{
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_64 pad;
};

struct RwStreamCustom
{
	type_15 sfnclose;
	type_22 sfnread;
	type_25 sfnwrite;
	type_6 sfnskip;
	void* data;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_80 texCoords;
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

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_3 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RtAnimInterpolatorInfo
{
	int typeID;
	int interpKeyFrameSize;
	int animKeyFrameSize;
	type_29 keyFrameApplyCB;
	type_36 keyFrameBlendCB;
	type_39 keyFrameInterpolateCB;
	type_40 keyFrameAddCB;
	type_42 keyFrameMulRecipCB;
	type_43 keyFrameStreamReadCB;
	type_46 keyFrameStreamWriteCB;
	type_7 keyFrameStreamGetSizeCB;
	int customDataSize;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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
	type_98 NumAnims;
	void** RawData;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RpHAnimNodeInfo
{
	int nodeID;
	int nodeIndex;
	int flags;
	RwFrame* pFrame;
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
	type_27 value;
	type_32 last_value;
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
	type_55 up_tmr;
	type_57 down_tmr;
	type_68 analog;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_56 wt;
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xFFX
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_30 Conditional;
	type_30 Callback;
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
	type_45 lastRefs;
	type_48 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct zPlatform
{
};

struct RpUserDataArray
{
	char* name;
	RpUserDataFormat format;
	int numElements;
	void* data;
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
	type_10 BeforeAnimMatrices;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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
	type_31 corner;
};

struct RtAnimInterpolator
{
	RtAnimAnimation* pCurrentAnim;
	float currentTime;
	void* pNextFrame;
	type_5 pAnimCallBack;
	void* pAnimCallBackData;
	float animCallBackTime;
	type_5 pAnimLoopCallBack;
	void* pAnimLoopCallBackData;
	int maxInterpKeyFrameSize;
	int currentInterpKeyFrameSize;
	int currentAnimKeyFrameSize;
	int numNodes;
	int isSubInterpolator;
	int offsetInParent;
	RtAnimInterpolator* parentAnimation;
	type_29 keyFrameApplyCB;
	type_36 keyFrameBlendCB;
	type_39 keyFrameInterpolateCB;
	type_40 keyFrameAddCB;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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
	type_85 PowerUp;
	type_90 InitialPowerUp;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_113 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_75 radius;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_77 callback;
};

struct zAssetPickupTable
{
};

struct rxReq
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_26 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct anim_coll_data
{
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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
	type_67 baseCount;
	type_70 baseList;
	_zEnv* zen;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

union RwStreamUnion
{
	RwStreamMemory memory;
	RwStreamFile file;
	RwStreamCustom custom;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_49 tranTable;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_102 Files;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct xModelTagWithNormal : xModelTag
{
	xVec3 normal;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_105 light;
	type_107 light_frame;
	int memlvl;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct RwStream
{
	RwStreamType type;
	RwStreamAccessType accessType;
	int position;
	RwStreamUnion Type;
	int rwOwned;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_62 vertIndex;
};

enum RwStreamAccessType
{
	rwNASTREAMACCESS,
	rwSTREAMREAD,
	rwSTREAMWRITE,
	rwSTREAMAPPEND,
	rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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
	type_97 BubbleWandTag;
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
	type_115 HangPawTag;
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
	type_59 Inv_PatsSock;
	type_60 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_65 Inv_LevelPickups;
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
	type_87 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_106 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_114 sb_model_indices;
	type_1 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct xJSPHeader
{
	type_69 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

enum RpUserDataFormat
{
	rpNAUSERDATAFORMAT,
	rpINTUSERDATA,
	rpREALUSERDATA,
	rpSTRINGUSERDATA,
	rpUSERDATAFORCEENUMSIZEINT = 0x7fffffff
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

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_35 activateCB;
	type_35 deactivateCB;
};

struct RwMemory
{
	unsigned char* start;
	unsigned int length;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_91 MoveSpeed;
	type_92 AnimSneak;
	type_95 AnimWalk;
	type_101 AnimRun;
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
	type_9 talk_filter;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_81 BilinearLerp;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_74 matrix;
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
	type_89 frustplane;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RwMatrixWeights
{
	float w0;
	float w1;
	float w2;
	float w3;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _class_2
{
	xVec3* verts;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_88 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_94 name;
	type_96 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RxNodeMethods
{
	type_13 nodeBody;
	type_19 nodeInit;
	type_23 nodeTerm;
	type_28 pipelineNodeInit;
	type_34 pipelineNodeTerm;
	type_37 pipelineNodeConfig;
	type_11 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
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

struct RpTriangle
{
	type_103 vertIndex;
	short matIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct xEntBoulder
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

struct zEntHangable
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_112 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_116 sceneStart;
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
	type_110 sync;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xShadowSimplePoly
{
	type_109 vert;
	xVec3 norm;
};

struct RwLinkList
{
	RwLLLink link;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct RwV2d
{
	float x;
	float y;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagiPad
{
	int port;
};

type_61 buffer;
type_66 buffer;
unsigned int gLastAtomicCount;
type_79 gLastAtomicList;
type_86 sEmptyDirectionalLight;
RpLight* sEmptyAmbientLight;
type_53 sMaterialColor;
type_93 sMaterialTexture;
type_20 sMaterialAlpha;
unsigned int sMaterialIdx;
unsigned int sMaterialFlags;
RpAtomic* sLastMaterial;
type_63 iModelMaterialMulCB;
type_33 iModelSetMaterialTextureCB;
unsigned char* giAnimScratch;
type_72 ourGlobals;
zGlobals globals;
int iModelHack_DisablePrelight;
type_83 GetChildFrameHierarchy;
type_38 NextAtomicCallback;
type_21 FindAtomicCallback;

void iModelMaterialMul(RpAtomic* model, float rm, float gm, float bm);
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data);
void iModelSetMaterialTexture(RpAtomic* model, void* texture);
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data);
void iModelResetMaterial(RpAtomic* model);
void iModelSetMaterialAlpha(RpAtomic* model, unsigned char alpha);
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal);
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest);
unsigned int iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, float x, float y, float z);
unsigned int iModelTagSetup(xModelTag* tag, RpAtomic* model, float x, float y, float z);
unsigned int iModelTagInternal(xModelTag* tag, RpAtomic* model, float x, float y, float z, int closeV);
unsigned int iModelTagUserData(xModelTag* tag, RpAtomic* model, float x, float y, float z, int closeV);
unsigned int iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, unsigned int index, int size, xVec3* in);
unsigned int iModelVertEval(RpAtomic* model, unsigned int index, unsigned int count, RwMatrixTag* mat, xVec3* vert, xVec3* dest);
void iModel_SetLightKit(xLightKit* lightKit);
unsigned int iModelVertCount(RpAtomic* model);
int iModelCullPlusShadow(RpAtomic* model, RwMatrixTag* mat, xVec3* shadowVec, int* shadowOutside);
int iModelSphereCull(xSphere* sphere);
int iModelCull(RpAtomic* model, RwMatrixTag* mat);
void iModelRender(RpAtomic* model, RwMatrixTag* mat);
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat);
unsigned int iModelNumBones(RpAtomic* model);
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model);
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data);
void iModelUnload(RpAtomic* userdata);
RpAtomic* iModelFileNew(void* buffer, unsigned int size);
RpAtomic* iModelStreamRead(RwStream* stream);
RpAtomic* FindAtomicCallback(RpAtomic* atomic);
void iModelInit();
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data);

// iModelMaterialMul__FP8RpAtomicfff
// Start address: 0x1accc0
void iModelMaterialMul(RpAtomic* model, float rm, float gm, float bm)
{
	RpGeometry* geom;
	type_84 cols;
}

// iModelMaterialMulCB__FP10RpMaterialPv
// Start address: 0x1acd30
RpMaterial* iModelMaterialMulCB(RpMaterial* material, void* data)
{
	RwRGBA* rw_col;
	RwRGBA col;
	float tmp;
	float* mods;
}

// iModelSetMaterialTexture__FP8RpAtomicPv
// Start address: 0x1ad000
void iModelSetMaterialTexture(RpAtomic* model, void* texture)
{
	RpGeometry* geom;
}

// iModelSetMaterialTextureCB__FP10RpMaterialPv
// Start address: 0x1ad060
RpMaterial* iModelSetMaterialTextureCB(RpMaterial* material, void* data)
{
}

// iModelResetMaterial__FP8RpAtomic
// Start address: 0x1ad0b0
void iModelResetMaterial(RpAtomic* model)
{
	unsigned int i;
	RpGeometry* geom;
	RpMaterial* material;
	RwRGBA newColor;
	RwRGBA newColor;
	RwRGBA newColor;
}

// iModelSetMaterialAlpha__FP8RpAtomicUc
// Start address: 0x1ad2e0
void iModelSetMaterialAlpha(RpAtomic* model, unsigned char alpha)
{
	unsigned int i;
	RpGeometry* geom;
	RpMaterial* material;
	RwRGBA* col;
	RwRGBA new_col;
}

// iModelTagEval__FP8RpAtomicPC19xModelTagWithNormalP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x1ad3c0
void iModelTagEval(RpAtomic* model, xModelTagWithNormal* tag, RwMatrixTag* mat, xVec3* dest, xVec3* normal)
{
	RpSkin* skin;
	RwMatrixTag* skinmat;
}

// iModelTagEval__FP8RpAtomicPC9xModelTagP11RwMatrixTagP5xVec3
// Start address: 0x1ad680
void iModelTagEval(RpAtomic* model, xModelTag* tag, RwMatrixTag* mat, xVec3* dest)
{
	RpGeometry* geom;
	RpSkin* skin;
	RwMatrixTag* skinmat;
}

// iModelTagSetup__FP19xModelTagWithNormalP8RpAtomicfff
// Start address: 0x1ad960
unsigned int iModelTagSetup(xModelTagWithNormal* tag, RpAtomic* model, float x, float y, float z)
{
	unsigned int index;
	xVec3* normals;
}

// iModelTagSetup__FP9xModelTagP8RpAtomicfff
// Start address: 0x1ad9d0
unsigned int iModelTagSetup(xModelTag* tag, RpAtomic* model, float x, float y, float z)
{
}

// iModelTagInternal__FP9xModelTagP8RpAtomicfffi
// Start address: 0x1ad9e0
unsigned int iModelTagInternal(xModelTag* tag, RpAtomic* model, float x, float y, float z, int closeV)
{
	RpGeometry* geom;
	RwV3d* vert;
	int v;
	int numV;
	float distSqr;
	float closeDistSqr;
	RpSkin* skin;
	RwMatrixWeights* wt;
}

// iModelTagUserData__FP9xModelTagP8RpAtomicfffi
// Start address: 0x1adb90
unsigned int iModelTagUserData(xModelTag* tag, RpAtomic* model, float x, float y, float z, int closeV)
{
	int i;
	int count;
	RpUserDataArray* array;
	RpUserDataArray* testarray;
	float distSqr;
	float closeDistSqr;
	int numTags;
	int t;
	xModelTag* tagList;
}

// iModelNormalEval__FP5xVec3RC8RpAtomicPC11RwMatrixTagUiiPC5xVec3
// Start address: 0x1addd0
unsigned int iModelNormalEval(xVec3* out, RpAtomic& m, RwMatrixTag* mat, unsigned int index, int size, xVec3* in)
{
	RpGeometry* geom;
	int max_size;
	RpSkin* skin;
	RwMatrixTag* skin_mats;
	float* bone_weights;
	unsigned int* bone_indices;
	xMat4x3 nmat;
}

// iModelVertEval__FP8RpAtomicUiUiP11RwMatrixTagP5xVec3P5xVec3
// Start address: 0x1ae160
unsigned int iModelVertEval(RpAtomic* model, unsigned int index, unsigned int count, RwMatrixTag* mat, xVec3* vert, xVec3* dest)
{
	RpGeometry* geom;
	unsigned int numV;
	RpSkin* skin;
}

// iModel_SetLightKit__FP9xLightKit
// Start address: 0x1ae4e0
void iModel_SetLightKit(xLightKit* lightKit)
{
	RpLight* amb;
	type_71 dir;
	type_76 lightTypes;
	unsigned int i;
}

// iModelVertCount__FP8RpAtomic
// Start address: 0x1ae670
unsigned int iModelVertCount(RpAtomic* model)
{
}

// iModelCullPlusShadow__FP8RpAtomicP11RwMatrixTagP5xVec3Pi
// Start address: 0x1ae680
int iModelCullPlusShadow(RpAtomic* model, RwMatrixTag* mat, xVec3* shadowVec, int* shadowOutside)
{
	float xScale2;
	float yScale2;
	float zScale2;
	RwV3d* up;
	RwV3d* at;
	RwCamera* cam;
	RwSphere worldsph;
	RwFrustumPlane* frustumPlane;
	int numPlanes;
	float nDot;
	float nDot;
	float sDot;
}

// iModelSphereCull__FP7xSphere
// Start address: 0x1ae8f0
int iModelSphereCull(xSphere* sphere)
{
}

// iModelCull__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1ae920
int iModelCull(RpAtomic* model, RwMatrixTag* mat)
{
}

// iModelRender__FP8RpAtomicP11RwMatrixTag
// Start address: 0x1aea40
void iModelRender(RpAtomic* model, RwMatrixTag* mat)
{
	RwMatrixTag* pAnimOldMatrix;
	RwFrame* frame;
}

// iModelAnimMatrices__FP8RpAtomicP5xQuatP5xVec3P11RwMatrixTag
// Start address: 0x1aebd0
void iModelAnimMatrices(RpAtomic* model, xQuat* quat, xVec3* tran, RwMatrixTag* mat)
{
	RpHAnimHierarchy* pHierarchy;
	type_0 matrixStack;
	RwMatrixTag* pMatrixStackTop;
	RpHAnimNodeInfo* pCurrentFrame;
	int pCurrentFrameFlags;
	int i;
	int numFrames;
	RwMatrixTag* pMatrixArray;
}

// iModelNumBones__FP8RpAtomic
// Start address: 0x1aedf0
unsigned int iModelNumBones(RpAtomic* model)
{
}

// iModelFile_RWMultiAtomic__FP8RpAtomic
// Start address: 0x1aee70
RpAtomic* iModelFile_RWMultiAtomic(RpAtomic* model)
{
	RpClump* clump;
	RpAtomic* nextModel;
}

// NextAtomicCallback__FP8RpAtomicPv
// Start address: 0x1aeec0
RpAtomic* NextAtomicCallback(RpAtomic* atomic, void* data)
{
	RpAtomic** nextModel;
}

// iModelUnload__FP8RpAtomic
// Start address: 0x1aeef0
void iModelUnload(RpAtomic* userdata)
{
	RpClump* clump;
	RwFrame* frame;
	RwFrame* root;
}

// iModelFileNew__FPvUi
// Start address: 0x1aef60
RpAtomic* iModelFileNew(void* buffer, unsigned int size)
{
	RwMemory rwmem;
}

// iModelStreamRead__FP8RwStream
// Start address: 0x1aefa0
RpAtomic* iModelStreamRead(RwStream* stream)
{
	RpClump* clump;
	unsigned int i;
	unsigned int maxIndex;
	float maxRadius;
	float testRadius;
}

// FindAtomicCallback__FP8RpAtomicPv
// Start address: 0x1af1d0
RpAtomic* FindAtomicCallback(RpAtomic* atomic)
{
	RpHAnimHierarchy* pHier;
	RpSkin* pSkin;
}

// iModelInit__Fv
// Start address: 0x1af300
void iModelInit()
{
	RwFrame* frame;
	RwRGBAReal black;
	int i;
}

// GetChildFrameHierarchy__FP7RwFramePv
// Start address: 0x1af3c0
RwFrame* GetChildFrameHierarchy(RwFrame* frame, void* data)
{
	RpHAnimHierarchy* hierarchy;
}

