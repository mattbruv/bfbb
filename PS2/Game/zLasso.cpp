typedef struct RwObjectHasFrame;
typedef struct RxPipeline;
typedef struct RpMeshHeader;
typedef struct xBBox;
typedef struct xModelBucket;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct RwResEntry;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpWorldSector;
typedef struct zLasso;
typedef struct RpClump;
typedef struct RpMorphTarget;
typedef struct RxNodeDefinition;
typedef struct xModelInstance;
typedef struct xClumpCollBSPTree;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpLight;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineCluster;
typedef struct RpWorld;
typedef struct RxPipelineNodeParam;
typedef struct xAnimTransitionList;
typedef struct RxHeap;
typedef struct xAnimTable;
typedef struct xEntFrame;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xQuat;
typedef struct xAnimTransition;
typedef struct xEnt;
typedef struct xGridBound;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct rxHeapBlockHeader;
typedef struct RpSector;
typedef struct xAnimState;
typedef struct xMat4x3;
typedef struct xVec3;
typedef struct RxPipelineRequiresCluster;
typedef struct iEnv;
typedef struct xShadowSimplePoly;
typedef struct RwMatrixTag;
typedef struct RwLLLink;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxObjSpace3DVertex;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct tri_data;
typedef struct _class_0;
typedef struct RwSurfaceProperties;
typedef struct xJSPHeader;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct xLightKitLight;
typedef struct tagiRenderArrays;
typedef struct rxReq;
typedef struct RpGeometry;
typedef struct xScene;
typedef struct RwRaster;
typedef struct xShadowSimpleCache;
typedef struct RwFrame;
typedef struct xEnv;
typedef struct xEntCollis;
typedef enum RxClusterValidityReq;
typedef struct RwTexture;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xAnimEffect;
typedef struct zLassoGuide;
typedef struct xBase;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xLinkAsset;
typedef struct xRot;
typedef struct xCollis;
typedef struct _class_1;
typedef struct RpPolygon;
typedef struct xAnimPlay;
typedef struct RpMaterialList;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xFFX;
typedef struct xAnimMultiFile;
typedef struct xModelPool;
typedef struct RpMaterial;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPVertInfo;
typedef struct xEntShadow;
typedef struct xClumpCollBSPBranchNode;
typedef struct xSurface;
typedef struct xClumpCollBSPTriangle;
typedef struct anim_coll_data;
typedef struct xQCData;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RpTriangle;
typedef struct xMemPool;
typedef struct RwObject;
typedef union _class_2;
typedef struct RxIoSpec;
typedef struct RxNodeMethods;
typedef struct zLassoGuideList;
typedef struct RxCluster;
typedef struct xModelTag;
typedef struct RxPacket;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef struct RwRGBAReal;
typedef struct xBound;
typedef struct RwLinkList;

typedef void(*type_0)(xAnimPlay*, xAnimState*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef void(*type_4)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_5)(RxPipelineNode*);
typedef void(*type_6)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpWorldSector*(*type_7)(RpWorldSector*);
typedef int(*type_8)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_10)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_13)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef int(*type_17)(RxPipelineNode*);
typedef void(*type_19)(xEnt*, xScene*, float);
typedef unsigned int(*type_24)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef void(*type_25)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_27)(xEnt*, xVec3*);
typedef void(*type_28)(xEnt*, xScene*, float, xEntFrame*);
typedef xBase*(*type_29)(unsigned int);
typedef void(*type_32)(xEnt*);
typedef char*(*type_33)(xBase*);
typedef char*(*type_35)(unsigned int);
typedef unsigned int(*type_36)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef unsigned int(*type_37)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_38)(xEnt*, xVec3*, xMat4x3*);
typedef RpClump*(*type_46)(RpClump*, void*);
typedef int(*type_52)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpAtomic*(*type_55)(RpAtomic*);
typedef void(*type_56)(xMemPool*, void*);
typedef void(*type_60)(RwResEntry*);

typedef char type_1[4];
typedef float type_3[4];
typedef xVec3 type_9[16];
typedef xVec3 type_12[64];
typedef xVec3 type_14[3];
typedef xQuat type_16[64];
typedef RpLight* type_18[2];
typedef unsigned short type_20[960];
typedef zLassoGuideList type_21[64];
typedef RwFrame* type_22[2];
typedef float type_23[16];
typedef RxObjSpace3DVertex type_26[480];
typedef float type_30[2];
typedef float type_31[480];
typedef unsigned char type_34[3];
typedef unsigned short type_39[3];
typedef unsigned char type_40[2];
typedef xVec3 type_41[4];
typedef xAnimMultiFileEntry type_42[1];
typedef char type_43[16];
typedef float type_44[4];
typedef unsigned int type_45[4];
typedef char type_47[16];
typedef RwTexCoords* type_48[8];
typedef xCollis type_49[18];
typedef int type_50[16];
typedef xVec3 type_51[5];
typedef unsigned char type_53[5];
typedef unsigned short type_54[3];
typedef char type_57[32];
typedef zLassoGuide type_58[3];
typedef char type_59[32];
typedef float type_61[2];
typedef xVec3 type_62[3];
typedef RxCluster type_63[1];
typedef xVec3 type_64[6];
typedef RwTexCoords* type_65[8];

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_60 destroyNotify;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_48 texCoords;
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
	type_51 lastRefs;
	type_53 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_46 callback;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_7 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_37 Conditional;
	type_37 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_27 bupdate;
	type_28 move;
	type_32 render;
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
	type_45 pad;
};

struct RpSector
{
	int type;
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
	type_0 BeforeEnter;
	type_4 StateCallback;
	type_6 BeforeAnimMatrices;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_18 light;
	type_22 light_frame;
	int memlvl;
};

struct xShadowSimplePoly
{
	type_14 vert;
	xVec3 norm;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
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
	type_55 renderCallBack;
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
	type_40 NumAnims;
	void** RawData;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct _class_0
{
	xVec3* verts;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xJSPHeader
{
	type_1 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_30 BilinearLerp;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_23 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct tagiRenderArrays
{
	type_20 m_index;
	type_26 m_vertex;
	type_31 m_vertexTZ;
};

struct rxReq
{
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
	type_29 resolvID;
	type_33 base2Name;
	type_35 id2Name;
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
	type_41 corner;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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
	type_49 colls;
	type_25 post;
	type_36 depenq;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_57 name;
	type_59 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_24 Callback;
};

struct zLassoGuide
{
	xModelInstance* poly;
	xAnimState* lassoAnim;
	type_50 vertMap;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_52 eventFunc;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_44 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xRot
{
	xVec3 axis;
	float angle;
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

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_39 vertIndex;
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
	type_6 BeforeAnimMatrices;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xFFX
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_42 Files;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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
	type_61 radius;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xSurface
{
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct anim_coll_data
{
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

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct RpTriangle
{
	type_54 vertIndex;
	short matIndex;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_56 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_13 nodeInit;
	type_15 nodeTerm;
	type_17 pipelineNodeInit;
	type_5 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_10 configMsgHandler;
};

struct zLassoGuideList
{
	xEnt* target;
	unsigned int numGuides;
	type_58 guide;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_3 wt;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_63 clusters;
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_34 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwLinkList
{
	RwLLLink link;
};

type_43 buffer;
type_47 buffer;
RwRaster* sLassoRaster;
type_21 sGuideList;
unsigned int sNumGuideLists;
zLassoGuide* sCurrentGuide;
RxObjSpace3DVertex* lnverts;
int negativeHondaX;
xVec3 g_O3;
xMat4x3 g_I3;
tagiRenderArrays gRenderArr;

void bakeMorphAnim(RpGeometry* geom, void* anim);
void initVertMap(zLassoGuide* guide);
void zLasso_scenePrepare();
void nonfizzicalHonda(zLasso* lasso, xVec3* newPoint);
void fizzicalHonda(zLasso* lasso, xVec3* newPoint);
void zLasso_ResetTimer(zLasso* lasso, float interpTime);
void zLasso_InitTimer(zLasso* lasso, float interpTime);
void zLasso_Update(zLasso* lasso, xEnt* ent, float dt);
void zLasso_Render(zLasso* lasso);
void zLasso_InterpToGuide(zLasso* lasso);
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim);
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel);
void zLasso_Init(zLasso* lasso, xModelInstance* model, float x, float y, float z);

// bakeMorphAnim__FP10RpGeometryPv
// Start address: 0x29ac50
void bakeMorphAnim(RpGeometry* geom, void* anim)
{
	xMat4x3 mat;
	type_12 tran;
	type_16 quat;
	int i;
	int j;
	int numV;
	xVec3* v;
}

// initVertMap__FP11zLassoGuide
// Start address: 0x29ae00
void initVertMap(zLassoGuide* guide)
{
	int center;
	int init;
	int curr;
	int currTri;
	int i;
	RpGeometry* geom;
	int numTri;
	RpTriangle* tris;
}

// zLasso_scenePrepare__Fv
// Start address: 0x29af70
void zLasso_scenePrepare()
{
}

// nonfizzicalHonda__FP6zLassofP5xVec3
// Start address: 0x29af80
void nonfizzicalHonda(zLasso* lasso, xVec3* newPoint)
{
}

// fizzicalHonda__FP6zLassofP5xVec3
// Start address: 0x29b150
void fizzicalHonda(zLasso* lasso, xVec3* newPoint)
{
}

// zLasso_ResetTimer__FP6zLassof
// Start address: 0x29b410
void zLasso_ResetTimer(zLasso* lasso, float interpTime)
{
}

// zLasso_InitTimer__FP6zLassof
// Start address: 0x29b4a0
void zLasso_InitTimer(zLasso* lasso, float interpTime)
{
}

// zLasso_Update__FP6zLassoP4xEntf
// Start address: 0x29b630
void zLasso_Update(zLasso* lasso, xEnt* ent, float dt)
{
	int i;
	xVec3 newPoint;
	float interp;
}

// zLasso_Render__FP6zLasso
// Start address: 0x29bef0
void zLasso_Render(zLasso* lasso)
{
	int i;
	type_9 loop;
	int numVerts;
	float arc_length;
	unsigned char shouldUseGuide;
	RpGeometry* geom;
	int numMorphs;
	int mIndx1;
	float interp;
	RwV3d* m1V;
	RwV3d* m2V;
	xVec3 dif;
	float closestDistSqr;
	float len;
	RxObjSpace3DVertex* tmp_pt;
	xVec3 b1;
	xVec3 b2;
	xVec3 b3;
	type_62 crossSection;
	type_64 sections;
	int currSection;
	int lastSection;
	int numSections;
	float distSoFar;
	float distTotal;
	float spokeDistIncr;
	unsigned int numVertsSoFar;
	float u;
	float v;
	float ustep;
	float xDisp;
	float yDisp;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	int shouldRepeat;
	xMat4x3 rotMatrix;
	xVec3 temp;
	int k;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	xMat4x3 rotMatrix;
	xVec3 norm;
	int k;
	int k1;
	int k2;
	int k3;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
}

// zLasso_InterpToGuide__FP6zLasso
// Start address: 0x29dc50
void zLasso_InterpToGuide(zLasso* lasso)
{
	RpGeometry* geom;
	RwV3d* v;
	int numVerts;
	int i;
	xVec3 rad1;
}

// zLasso_SetGuide__FP4xEntP10xAnimState
// Start address: 0x29e1c0
void zLasso_SetGuide(xEnt* ent, xAnimState* lassoAnim)
{
	unsigned int i;
	unsigned int j;
}

// zLasso_AddGuide__FP4xEntP10xAnimStateP14xModelInstance
// Start address: 0x29e2c0
void zLasso_AddGuide(xEnt* ent, xAnimState* lassoAnim, xModelInstance* lassoModel)
{
	unsigned int i;
	int givenSlot;
}

// zLasso_Init__FP6zLassoP14xModelInstancefff
// Start address: 0x29e440
void zLasso_Init(zLasso* lasso, xModelInstance* model, float x, float y, float z)
{
	RwTexture* tempTexture;
}

