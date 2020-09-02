typedef struct xVec3;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct _class_0;
typedef struct RwObjectHasFrame;
typedef struct xAnimTransition;
typedef struct xBase;
typedef struct xAnimState;
typedef struct xAnimMultiFile;
typedef struct rxHeapFreeBlock;
typedef struct RpMaterial;
typedef struct RxPipelineNodeTopSortData;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xAnimSingle;
typedef struct RyzMemData;
typedef struct RxNodeDefinition;
typedef struct xEnt;
typedef struct xNPCBasic;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpClump;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct RxPipelineNodeParam;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntFrame;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xLinkAsset;
typedef struct xMemPool;
typedef struct xCollis;
typedef struct xShadowSimplePoly;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct RwRaster;
typedef struct xFactoryInst;
typedef enum RxClusterValidityReq;
typedef struct xBaseAsset;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct _anon0;
typedef struct xScene;
typedef enum RxNodeDefEditable;
typedef struct xShadowSimpleCache;
typedef enum RxClusterValid;
typedef struct xAnimTransitionList;
typedef struct xEntCollis;
typedef struct xRot;
typedef struct RpLight;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xBox;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct RxClusterDefinition;
typedef struct xFFX;
typedef struct xQCData;
typedef struct xBBox;
typedef struct xModelBucket;
typedef struct RwSphere;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xQCControl;
typedef struct RxNodeMethods;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct _class_1;
typedef struct RxCluster;
typedef struct tri_data;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef int(*type_1)(RxPipelineNode*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_4)(RxPipelineNode*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_9)(RxPipelineNode*, RxPipeline*);
typedef void(*type_10)(xEnt*);
typedef void(*type_11)(xEnt*);
typedef RpClump*(*type_12)(RpClump*, void*);
typedef unsigned int(*type_13)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_14)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_15)(xEnt*, xVec3*);
typedef int(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_17)(xAnimPlay*, xAnimState*);
typedef int(*type_18)(RxNodeDefinition*);
typedef void(*type_19)(RxNodeDefinition*);
typedef unsigned int(*type_20)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_22)(xAnimPlay*, xQuat*, xVec3*, int);
typedef xBase*(*type_23)(unsigned int);
typedef void(*type_24)(xEnt*, xVec3*);
typedef char*(*type_26)(xBase*);
typedef char*(*type_27)(unsigned int);
typedef RpAtomic*(*type_29)(RpAtomic*);
typedef void(*type_30)(xEnt*, xScene*, float);
typedef void(*type_32)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_33)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_34)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_35)(xEnt*);
typedef void(*type_36)(xEnt*);
typedef unsigned int(*type_37)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_38)(xEnt*);
typedef void(*type_39)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_41)(xEnt*, xScene*, float);
typedef void(*type_45)(xEnt*, xVec3*);
typedef void(*type_46)(xEnt*, xScene*, float, void*);
typedef void(*type_47)(xEnt*, xScene*, float, xEntFrame*);
typedef int(*type_49)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_51)(xMemPool*, void*);
typedef void(*type_52)(xEnt*);
typedef void(*type_55)(RwResEntry*);

typedef float type_0[4];
typedef float type_3[2];
typedef unsigned char type_5[2];
typedef xAnimMultiFileEntry type_6[1];
typedef char* type_8[3];
typedef char* type_21[5];
typedef xVec3 type_25[3];
typedef unsigned short type_28[3];
typedef float type_31[16];
typedef RwTexCoords* type_40[8];
typedef xVec3 type_42[4];
typedef unsigned int type_43[4];
typedef char* type_44[6];
typedef xCollis type_48[18];
typedef char* type_50[23];
typedef char type_53[32];
typedef char type_54[32];
typedef float type_56[2];
typedef unsigned char type_57[3];
typedef RxCluster type_58[1];

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_22 BeforeAnimMatrices;
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
	type_29 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_34 Conditional;
	type_34 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_14 eventFunc;
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
	type_17 BeforeEnter;
	type_7 StateCallback;
	type_22 BeforeAnimMatrices;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_6 Files;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_56 BilinearLerp;
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

struct RyzMemData
{
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
	type_30 update;
	type_30 endUpdate;
	type_15 bupdate;
	type_33 move;
	type_35 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_39 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xNPCBasic : xEnt, xFactoryInst
{
	type_10 f_setup;
	type_11 f_reset;
	union
	{
		int flg_basenpc;
		int inUpdate;
		int flg_upward;
	};
	int colFreq;
	int colFreqReset;
	union
	{
		unsigned int flg_colCheck;
		unsigned int flg_penCheck;
		unsigned int flg_unused;
	};
	int myNPCType;
	xEntShadow entShadow_embedded;
	xShadowSimpleCache simpShadow_embedded;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_12 callback;
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
	type_40 texCoords;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_20 Callback;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_43 pad;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xEnv
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_0 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_51 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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
		tri_data tri;
	};
};

struct xShadowSimplePoly
{
	type_25 vert;
	xVec3 norm;
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

struct RpTriangle
{
	type_28 vertIndex;
	short matIndex;
};

struct rxReq
{
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

struct xFactoryInst : RyzMemData
{
	int itemType;
	xFactoryInst* nextprod;
	xFactoryInst* prevprod;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_31 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_5 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_55 destroyNotify;
};

struct _anon0
{
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
	type_23 resolvID;
	type_26 base2Name;
	type_27 id2Name;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_42 corner;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_48 colls;
	type_32 post;
	type_37 depenq;
};

struct xRot
{
	xVec3 axis;
	float angle;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_57 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_53 name;
	type_54 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xFFX
{
	unsigned int flags;
	type_46 doEffect;
	void* fdata;
	xFFX* next;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_3 radius;
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

struct anim_coll_data
{
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xQCControl
{
	float world_xmin;
	float world_ymin;
	float world_zmin;
	float world_xmax;
	float world_ymax;
	float world_zmax;
	float world_xsz;
	float world_ysz;
	float world_zsz;
	float scale_x;
	float scale_y;
	float scale_z;
	float center_x;
	float center_y;
	float center_z;
};

struct RxNodeMethods
{
	type_16 nodeBody;
	type_18 nodeInit;
	type_19 nodeTerm;
	type_1 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_9 pipelineNodeConfig;
	type_13 configMsgHandler;
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

struct tri_data
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
	type_58 clusters;
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

xEntCollis g_colrec;
type_8 g_strz_perfcats;
type_44 g_strz_npcmenu;
type_21 g_strz_dbopts;
type_50 g_strz_npcdcat;
_anon0 __vt__9xNPCBasic;
type_24 NPC_alwaysUseSphere;
xQCControl xqc_def_ctrl;
xVec3 g_Y3;
type_52 NPC_entwrap_render;
type_47 NPC_entwrap_move;
type_45 NPC_entwrap_bupdate;
type_41 NPC_entwrap_update;
type_49 NPC_entwrap_event;
type_38 NPC_entwrap_reset;
type_36 NPC_entwrap_setup;
unsigned int gActiveHeap;

void NPC_entwrap_render(xEnt* ent);
int NPC_entwrap_event(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget);
void NPC_entwrap_move(xEnt* ent, xScene* xscn, float dt, xEntFrame* frm);
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos);
void NPC_entwrap_update(xEnt* ent, xScene* xscn, float dt_caller);
void NPC_entwrap_reset(xEnt* ent);
void NPC_entwrap_setup(xEnt* ent);
void NewTime(xNPCBasic* this);
void CollideReview();
void Process(xNPCBasic* this, xScene* xscn, float dt);
void NPC_spdBasedColFreq(xNPCBasic* npc, float dt);
void NPC_alwaysUseSphere(xEnt* ent);
void Reset(xNPCBasic* this);
void Init(xNPCBasic* this, xEntAsset* asset);

// NPC_entwrap_render__FP4xEnt
// Start address: 0x2f23a0
void NPC_entwrap_render(xEnt* ent)
{
}

// NPC_entwrap_event__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x2f23b0
int NPC_entwrap_event(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
	int used;
}

// NPC_entwrap_move__FP4xEntP6xScenefP9xEntFrame
// Start address: 0x2f2400
void NPC_entwrap_move(xEnt* ent, xScene* xscn, float dt, xEntFrame* frm)
{
}

// NPC_entwrap_bupdate__FP4xEntP5xVec3
// Start address: 0x2f2410
void NPC_entwrap_bupdate(xEnt* ent, xVec3* pos)
{
}

// NPC_entwrap_update__FP4xEntP6xScenef
// Start address: 0x2f2420
void NPC_entwrap_update(xEnt* ent, xScene* xscn, float dt_caller)
{
	xNPCBasic* npc;
	float dt;
}

// NPC_entwrap_reset__FP4xEnt
// Start address: 0x2f2520
void NPC_entwrap_reset(xEnt* ent)
{
}

// NPC_entwrap_setup__FP4xEnt
// Start address: 0x2f2530
void NPC_entwrap_setup(xEnt* ent)
{
}

// NewTime__9xNPCBasicFP6xScenef
// Start address: 0x2f2540
void NewTime(xNPCBasic* this)
{
}

// CollideReview__9xNPCBasicFv
// Start address: 0x2f2560
void CollideReview()
{
}

// Process__9xNPCBasicFP6xScenef
// Start address: 0x2f2570
void Process(xNPCBasic* this, xScene* xscn, float dt)
{
	xEnt* ent;
	int hasgrav;
	type_15 bak_bupdate;
}

// NPC_spdBasedColFreq__FP9xNPCBasicf
// Start address: 0x2f2850
void NPC_spdBasedColFreq(xNPCBasic* npc, float dt)
{
	xVec3 delt;
	float d;
	int nf;
}

// NPC_alwaysUseSphere__FP4xEntP5xVec3
// Start address: 0x2f2960
void NPC_alwaysUseSphere(xEnt* ent)
{
	xNPCBasic* npc;
	xVec3 bndcent;
}

// Reset__9xNPCBasicFv
// Start address: 0x2f2a30
void Reset(xNPCBasic* this)
{
}

// Init__9xNPCBasicFP9xEntAsset
// Start address: 0x2f2b90
void Init(xNPCBasic* this, xEntAsset* asset)
{
	xEnt* ent;
}

