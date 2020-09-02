typedef struct xSurface;
typedef struct xEnt;
typedef struct RxPipeline;
typedef struct RwRGBA;
typedef struct xAnimMultiFile;
typedef struct RxHeap;
typedef struct RwTexture;
typedef struct RwV3d;
typedef struct RwBBox;
typedef struct xLightKitLight;
typedef struct RwTexCoords;
typedef struct RxPipelineNode;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xQCData;
typedef struct xQuat;
typedef struct RpMeshHeader;
typedef struct xBBox;
typedef struct xShadowSimpleCache;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwResEntry;
typedef struct rxHeapBlockHeader;
typedef struct xVec3;
typedef struct RpWorldSector;
typedef struct xEntShadow;
typedef struct iEnv;
typedef struct RpMorphTarget;
typedef struct xSFX;
typedef struct xModelInstance;
typedef struct RxPipelineRequiresCluster;
typedef struct xLightKit;
typedef struct anim_coll_data;
typedef struct RpLight;
typedef struct xJSPNodeInfo;
typedef struct RpWorld;
typedef struct xAnimTransitionList;
typedef struct xAnimTable;
typedef struct xSFXAsset;
typedef struct xAnimTransition;
typedef struct xBase;
typedef struct RwSurfaceProperties;
typedef struct xGridBound;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPBranchNode;
typedef struct rxReq;
typedef struct xAnimState;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xJSPHeader;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xMat4x3;
typedef struct xAnimActiveEffect;
typedef struct xLinkAsset;
typedef struct xEntCollis;
typedef enum RxNodeDefEditable;
typedef struct RpAtomic;
typedef enum RxClusterValid;
typedef struct xAnimFile;
typedef struct RpClump;
typedef struct _class_0;
typedef struct iSndVol;
typedef struct xAnimSingle;
typedef struct tri_data;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xClumpCollBSPTree;
typedef struct RpVertexNormal;
typedef struct xSndGlobals;
typedef struct xScene;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef enum RxClusterForcePresent;
typedef struct xSerial;
typedef struct xCylinder;
typedef struct xAnimEffect;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct _class_1;
typedef struct RpPolygon;
typedef struct xFFX;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef struct st_PACKER_ASSETTYPE;
typedef struct RwSphere;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum sound_category;
typedef struct xEntAsset;
typedef struct xMat3x3;
typedef struct RpGeometry;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xEntFrame;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xEnv;
typedef struct RxNodeDefinition;
typedef struct xShadowSimplePoly;
typedef struct xCollis;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RpTriangle;
typedef struct RxPacket;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPTriangle;
typedef struct xBaseAsset;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct iSndInfo;
typedef enum sound_listener_game_mode;
typedef struct xBound;
typedef struct st_SERIAL_CLIENTINFO;
typedef enum RpWorldRenderOrder;
typedef union _class_2;
typedef struct xSndVoiceInfo;

typedef void(*type_0)(xEnt*);
typedef void*(*type_1)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void*(*type_5)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef void(*type_6)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_7)(void*, unsigned int, void*, int);
typedef unsigned int(*type_8)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_9)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void*(*type_10)(void*, unsigned int, void*, int*, int*);
typedef int(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_12)(void*, unsigned int, void*);
typedef void(*type_13)(xEnt*, xVec3*);
typedef RpWorldSector*(*type_14)(RpWorldSector*);
typedef int(*type_15)(RxNodeDefinition*);
typedef void(*type_16)(void*, unsigned int);
typedef void(*type_17)(RxNodeDefinition*);
typedef void(*type_20)(void*, unsigned int, void*, char*);
typedef int(*type_21)(RxPipelineNode*);
typedef void(*type_22)(RxPipelineNode*);
typedef int(*type_24)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_25)(unsigned int);
typedef void(*type_27)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_28)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef char*(*type_29)(xBase*);
typedef void(*type_31)(xEnt*, xVec3*, xMat4x3*);
typedef char*(*type_32)(unsigned int);
typedef int(*type_33)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_34)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_40)(xAnimTransition*, xAnimSingle*, void*);
typedef RpClump*(*type_49)(RpClump*, void*);
typedef int(*type_51)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_57)(RwResEntry*);
typedef RpAtomic*(*type_60)(RpAtomic*);
typedef void(*type_61)(xEnt*, xScene*, float);
typedef void(*type_65)(xEnt*, xScene*, float, xEntFrame*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);

typedef RwTexCoords* type_2[8];
typedef xVec3 type_4[4];
typedef xSFX* type_18[1];
typedef xSFX* type_19[1];
typedef xCollis type_23[18];
typedef float type_26[1];
typedef char type_30[4];
typedef float type_35[2];
typedef float type_36[5];
typedef xSndVoiceInfo type_37[48];
typedef unsigned char type_38[3];
typedef xMat4x3 type_39[2];
typedef float type_41[4];
typedef float type_42[2];
typedef unsigned int type_43[4];
typedef unsigned short type_44[3];
typedef unsigned char type_45[2];
typedef xAnimMultiFileEntry type_46[1];
typedef RpLight* type_47[2];
typedef RwFrame* type_48[2];
typedef unsigned char type_50[3];
typedef RwTexCoords* type_52[8];
typedef char type_54[32];
typedef xVec3 type_55[3];
typedef char type_56[32];
typedef char type_58[16];
typedef unsigned short type_59[3];
typedef char type_62[16];
typedef float type_63[16];
typedef RxCluster type_64[1];

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
	type_50 pad;
	void* moprops;
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
	type_61 update;
	type_61 endUpdate;
	type_13 bupdate;
	type_65 move;
	type_0 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_31 transl;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_46 Files;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_54 name;
	type_56 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_63 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RwTexCoords
{
	float u;
	float v;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_57 destroyNotify;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_43 pad;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_52 texCoords;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_42 radius;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_47 light;
	type_48 light_frame;
	int memlvl;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xSFX : xBase
{
	xSFXAsset* asset;
	unsigned int sndID;
	float cachedOuterDistSquared;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_40 Conditional;
	type_40 Callback;
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
	type_51 eventFunc;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct rxReq
{
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
	type_6 StateCallback;
	type_9 BeforeAnimMatrices;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPHeader
{
	type_30 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_41 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_23 colls;
	type_27 post;
	type_28 depenq;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_60 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_45 NumAnims;
	void** RawData;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_49 callback;
};

struct _class_0
{
	xVec3* verts;
};

struct iSndVol
{
	short volL;
	short volR;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_35 BilinearLerp;
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

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xSndGlobals
{
	unsigned int stereo;
	unsigned int SndCount;
	type_36 categoryVolFader;
	type_37 voice;
	type_39 listenerMat;
	sound_listener_game_mode listenerMode;
	unsigned int suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
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
	type_25 resolvID;
	type_29 base2Name;
	type_32 id2Name;
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

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xSerial
{
	unsigned int idtag;
	int baseoff;
	st_SERIAL_CLIENTINFO* ctxtdata;
	int warned;
	int curele;
	int bitidx;
	int bittally;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_34 Callback;
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

struct st_PKR_ASSET_TOCINFO
{
	unsigned int aid;
	st_PACKER_ASSETTYPE* typeref;
	unsigned int sector;
	unsigned int plus_offset;
	unsigned int size;
	void* mempos;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_44 vertIndex;
};

struct xFFX
{
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
	type_9 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_1 readXForm;
	type_5 writeXForm;
	type_7 assetLoaded;
	type_10 makeData;
	type_12 cleanup;
	type_16 assetUnloaded;
	type_20 writePeek;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
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
	type_2 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_53 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_15 nodeInit;
	type_17 nodeTerm;
	type_21 pipelineNodeInit;
	type_22 pipelineNodeTerm;
	type_24 pipelineNodeConfig;
	type_8 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xShadowSimplePoly
{
	type_55 vert;
	xVec3 norm;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpTriangle
{
	type_59 vertIndex;
	short matIndex;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_64 clusters;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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
	type_66 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct iSndInfo
{
	unsigned int flags;
	iSndVol vol;
	unsigned int pitch;
	int lastStreamBuffer;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_38 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct st_SERIAL_CLIENTINFO
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xSndVoiceInfo
{
	unsigned int assetID;
	unsigned int sndID;
	unsigned int parentID;
	xVec3* parentPos;
	int internalID;
	unsigned int flags;
	unsigned short pad;
	unsigned short priority;
	float vol;
	float pitch;
	unsigned int sample_rate;
	unsigned int deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float innerRadius2;
	float outerRadius2;
	unsigned int lock_owner;
	iSndInfo ps;
};

type_58 buffer;
type_62 buffer;
type_18 s_managedEnvSFX;
type_33 xSFXEventCB;
xSndGlobals gSnd;

void xSFXPlay(xSFX* t);
int xSFXEventCB(xBase* to, unsigned int toEvent, float* toParam);
void xSFXLoad(xSFX* ent, xSerial* s);
void xSFXSave(xSFX* ent, xSerial* s);
void xSFXInit(void* t, void* asset);
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, unsigned int numSounds);
void xSFXEnvironmentalStreamSceneExit();

// xSFXPlay__FP4xSFX
// Start address: 0x29efc0
void xSFXPlay(xSFX* t)
{
	st_PKR_ASSET_TOCINFO ainfo;
	xEnt* ent;
}

// xSFXEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x29f470
int xSFXEventCB(xBase* to, unsigned int toEvent, float* toParam)
{
	xSFX* t;
}

// xSFXLoad__FP4xSFXP7xSerial
// Start address: 0x29f610
void xSFXLoad(xSFX* ent, xSerial* s)
{
}

// xSFXSave__FP4xSFXP7xSerial
// Start address: 0x29f620
void xSFXSave(xSFX* ent, xSerial* s)
{
}

// xSFXInit__FPvPv
// Start address: 0x29f630
void xSFXInit(void* t, void* asset)
{
}

// xSFXUpdateEnvironmentalStreamSounds__FP4xSFXUi
// Start address: 0x29f730
void xSFXUpdateEnvironmentalStreamSounds(xSFX* pSFXList, unsigned int numSounds)
{
	unsigned int i;
	xVec3 playPos;
	xVec3 delta;
	unsigned int j;
	unsigned int j;
	unsigned int j;
	unsigned char found;
	unsigned int j;
	unsigned int j;
	type_19 bestSFX;
	type_26 bestDist2;
}

// xSFXEnvironmentalStreamSceneExit__Fv
// Start address: 0x29fae0
void xSFXEnvironmentalStreamSceneExit()
{
}

