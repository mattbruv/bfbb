typedef struct xEnt;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xLightKit;
typedef struct xModelPool;
typedef struct xJSPNodeInfo;
typedef struct xEntShadow;
typedef struct xAnimEffect;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xEnv;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct RpAtomic;
typedef struct xSerial;
typedef struct RxNodeDefinition;
typedef struct xVolumeAsset;
typedef struct xAnimSingle;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct xAnimState;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipeline;
typedef struct RpWorld;
typedef struct RxPipelineCluster;
typedef struct xAnimTable;
typedef struct xVolume;
typedef struct RxPipelineNodeParam;
typedef struct xClumpCollBSPBranchNode;
typedef struct RpMorphTarget;
typedef struct xMemPool;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct xVec3;
typedef struct _xFColor;
typedef struct xModelInstance;
typedef struct xJSPHeader;
typedef struct RpVertexNormal;
typedef struct RwTexCoords;
typedef struct _zLight;
typedef struct rxHeapBlockHeader;
typedef struct xSurface;
typedef struct xBase;
typedef struct RpMeshHeader;
typedef struct RxPipelineRequiresCluster;
typedef struct RwResEntry;
typedef struct zLightAsset;
typedef struct xModelBucket;
typedef struct xCollis;
typedef struct xClumpCollBSPTree;
typedef struct xAnimFile;
typedef struct RwLLLink;
typedef struct xEntAsset;
typedef struct RpTriangle;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xLinkAsset;
typedef struct rxReq;
typedef struct xQCData;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xEntFrame;
typedef struct iEnv;
typedef struct xMat4x3;
typedef enum RxNodeDefEditable;
typedef struct _tagPartLink;
typedef enum RxClusterValid;
typedef struct xBound;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct xShadowSimplePoly;
typedef struct xBaseAsset;
typedef struct xBBox;
typedef enum RpWorldRenderOrder;
typedef enum rxEmbeddedPacketState;
typedef struct RpLight;
typedef struct xSphere;
typedef struct RpMaterial;
typedef struct tri_data;
typedef struct _class_0;
typedef struct RwFrame;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RwTexture;
typedef struct xLightKitLight;
typedef struct RpSector;
typedef struct zVolume;
typedef struct xBox;
typedef struct xScene;
typedef struct RxClusterDefinition;
typedef struct xShadowSimpleCache;
typedef struct _tagPartSpace;
typedef struct xEntCollis;
typedef struct xGridBound;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct xAnimMultiFileEntry;
typedef struct xMat3x3;
typedef struct xAnimActiveEffect;
typedef struct RxClusterRef;
typedef struct _tagPartition;
typedef struct xFFX;
typedef struct RwObject;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPTriangle;
typedef struct RxNodeMethods;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xAnimMultiFileBase;
typedef struct anim_coll_data;
typedef struct iLight;
typedef struct RxCluster;
typedef struct RpInterpolator;
typedef union _class_2;
typedef struct RxPacket;
typedef struct RwRGBAReal;
typedef struct RpMaterialList;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_1)(RxPipelineNode*);
typedef xBase*(*type_3)(unsigned int);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef char*(*type_5)(xBase*);
typedef int(*type_6)(RxPipelineNode*, RxPipeline*);
typedef char*(*type_7)(unsigned int);
typedef unsigned int(*type_8)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_9)(RpClump*, void*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_12)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_15)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_16)(RxNodeDefinition*);
typedef void(*type_17)(_zLight*, float);
typedef void(*type_18)(RxNodeDefinition*);
typedef int(*type_20)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_21)(RxPipelineNode*);
typedef void(*type_22)(_zLight*);
typedef RpAtomic*(*type_25)(RpAtomic*);
typedef unsigned int(*type_26)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_30)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_34)(xEnt*, xScene*, float);
typedef void(*type_36)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_37)(xEnt*, xVec3*);
typedef void(*type_38)(xEnt*, xScene*, float, xEntFrame*);
typedef RpWorldSector*(*type_40)(RpWorldSector*);
typedef void(*type_41)(xEnt*);
typedef unsigned int(*type_42)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_44)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_48)(xMemPool*, void*);
typedef int(*type_50)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_54)(RwResEntry*);

typedef float type_2[4];
typedef RwTexCoords* type_11[8];
typedef float type_13[2];
typedef char type_14[4];
typedef char type_19[16];
typedef _zLight* type_23[32];
typedef unsigned short type_24[3];
typedef char type_27[16];
typedef _zLight* type_28[32];
typedef xVec3 type_29[3];
typedef RpLight* type_31[2];
typedef RwFrame* type_32[2];
typedef RwTexCoords* type_33[8];
typedef float type_35[16];
typedef unsigned int type_39[4];
typedef type_22 type_43[18];
typedef type_17 type_45[18];
typedef xVec3 type_46[4];
typedef float type_47[2];
typedef unsigned char type_49[3];
typedef char type_51[32];
typedef char type_52[32];
typedef unsigned char type_53[2];
typedef xCollis type_55[18];
typedef float type_56[4];
typedef unsigned char type_57[2];
typedef xAnimMultiFileEntry type_58[1];
typedef RxCluster type_59[1];
typedef unsigned short type_60[3];

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
	type_34 update;
	type_34 endUpdate;
	type_37 bupdate;
	type_38 move;
	type_41 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_44 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_13 radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_8 Callback;
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_9 callback;
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
	type_25 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
};

struct xVolumeAsset
{
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_47 BilinearLerp;
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
	type_33 texCoords;
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
	type_4 BeforeEnter;
	type_30 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_40 renderCallBack;
	RxPipeline* pipeline;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_48 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_60 vertIndex;
};

struct xQuat
{
	xVec3 v;
	float s;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct _xFColor
{
	float r;
	float g;
	float b;
	float a;
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

struct xJSPHeader
{
	type_14 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct _zLight : xBase
{
	unsigned int flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	int true_idx;
	float* reg;
	int effect_idx;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_39 pad;
};

struct xSurface
{
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_20 eventFunc;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_54 destroyNotify;
};

struct zLightAsset : xBaseAsset
{
	unsigned char lightType;
	unsigned char lightEffect;
	type_53 lightPad;
	unsigned int lightFlags;
	type_56 lightColor;
	xVec3 lightDir;
	float lightConeAngle;
	xSphere lightSphere;
	unsigned int attachID;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_57 NumAnims;
	void** RawData;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RpTriangle
{
	type_24 vertIndex;
	short matIndex;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_26 Conditional;
	type_26 Callback;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_2 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct rxReq
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_31 light;
	type_32 light_frame;
	int memlvl;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPartLink
{
	void* data;
	_tagPartLink* next;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_49 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_58 Files;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xShadowSimplePoly
{
	type_29 vert;
	xVec3 norm;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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

struct xSphere
{
	xVec3 center;
	float r;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_51 name;
	type_52 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_35 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RpSector
{
	int type;
};

struct zVolume : xVolume
{
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_3 resolvID;
	type_5 base2Name;
	type_7 id2Name;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
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
	type_46 corner;
};

struct _tagPartSpace
{
	int total;
	_tagPartLink head;
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
	type_55 colls;
	type_36 post;
	type_42 depenq;
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

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct _tagPartition
{
	xVec3 min;
	xVec3 max;
	xVec3 space_dim;
	int total_x;
	int total_y;
	int total_z;
	_tagPartSpace* space;
	_tagPartSpace global;
};

struct xFFX
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RxNodeMethods
{
	type_15 nodeBody;
	type_16 nodeInit;
	type_18 nodeTerm;
	type_21 pipelineNodeInit;
	type_1 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_12 configMsgHandler;
};

struct st_SERIAL_CLIENTINFO
{
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct anim_coll_data
{
};

struct iLight
{
	unsigned int type;
	RpLight* hw;
	xSphere sph;
	float radius_sq;
	_xFColor color;
	xVec3 dir;
	float coneangle;
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

struct RpInterpolator
{
	int flags;
	short startMorphTarget;
	short endMorphTarget;
	float time;
	float recipTime;
	float position;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_59 clusters;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwLinkList
{
	RwLLLink link;
};

type_19 buffer;
type_27 buffer;
type_23 sLight;
int sLightTotal;
_tagPartition sLightPart;
zVolume* sPartitionVolume;
int gNumTemporaryLights;
type_28 gTemporaryLights;
type_45 sEffectFuncs;
type_43 sEffectInitFuncs;
xVec3 sDefaultShadowVec;
RpWorld* gLightWorld;
unsigned int gActiveHeap;
type_50 zLightEventCB;

void zLightOn(_zLight* zl, int on);
void zLightSetVolume(zVolume* vol);
void zLightRemoveLocalEnv();
void zLightAddLocal(xEnt* ent);
void zLightAddLocalEnv();
void zLightUpdate(xBase* to, float dt);
int zLightEventCB(xBase* to, unsigned int toEvent);
void zLightLoad(_zLight* ent, xSerial* s);
void zLightSave(_zLight* ent, xSerial* s);
void zLightDestroyAll();
void zLightResolveLinks();
void zLightInit(xBase* b, zLightAsset* tasset);
void zLightInit(void* b, void* tasset);
void zLightResetAll(xEnv* env);

// zLightOn__FP7_zLighti
// Start address: 0x180590
void zLightOn(_zLight* zl, int on)
{
}

// zLightSetVolume__FP7zVolume
// Start address: 0x1805c0
void zLightSetVolume(zVolume* vol)
{
	unsigned int lp_id;
}

// zLightRemoveLocalEnv__Fv
// Start address: 0x180610
void zLightRemoveLocalEnv()
{
	int i;
	RwLLLink* link;
}

// zLightAddLocal__FP4xEnt
// Start address: 0x180660
void zLightAddLocal(xEnt* ent)
{
	xVec3 default_light_pos;
}

// zLightAddLocalEnv__Fv
// Start address: 0x180740
void zLightAddLocalEnv()
{
	int i;
	_zLight* zlight;
	iLight* light;
}

// zLightUpdate__FP5xBaseP6xScenef
// Start address: 0x180850
void zLightUpdate(xBase* to, float dt)
{
	_zLight* t;
	xVec3 pos;
}

// zLightEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x180940
int zLightEventCB(xBase* to, unsigned int toEvent)
{
	_zLight* t;
}

// zLightLoad__FP7_zLightP7xSerial
// Start address: 0x180a30
void zLightLoad(_zLight* ent, xSerial* s)
{
}

// zLightSave__FP7_zLightP7xSerial
// Start address: 0x180a40
void zLightSave(_zLight* ent, xSerial* s)
{
}

// zLightDestroyAll__Fv
// Start address: 0x180a50
void zLightDestroyAll()
{
	int total;
	int i;
}

// zLightResolveLinks__Fv
// Start address: 0x180ad0
void zLightResolveLinks()
{
	int i;
	_zLight* zl;
}

// zLightInit__FP5xBaseP11zLightAsset
// Start address: 0x180b60
void zLightInit(xBase* b, zLightAsset* tasset)
{
	_zLight* t;
	unsigned int itype;
}

// zLightInit__FPvPv
// Start address: 0x180d60
void zLightInit(void* b, void* tasset)
{
}

// zLightResetAll__FP4xEnv
// Start address: 0x180d70
void zLightResetAll(xEnv* env)
{
}

