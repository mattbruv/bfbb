typedef struct RpGeometry;
typedef struct RwObjectHasFrame;
typedef struct xAnimEffect;
typedef struct RpVertexNormal;
typedef struct tag_type;
typedef struct xAnimSingle;
typedef struct xAnimPlay;
typedef struct xQCData;
typedef struct zUIFont;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimState;
typedef struct RwTexCoords;
typedef struct xScene;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct callback;
typedef struct RxNodeDefinition;
typedef struct xAnimTable;
typedef struct RwRGBA;
typedef struct RpMeshHeader;
typedef struct _zUI;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct substr;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQuat;
typedef struct xBase;
typedef struct xVec3;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xModelInstance;
typedef struct xEnt;
typedef struct xClumpCollBSPTriangle;
typedef struct RxPipelineNodeParam;
typedef struct zUIAsset;
typedef struct _tagTRCPadInfo;
typedef struct xMat4x3;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RpTriangle;
typedef union _class_0;
typedef struct RpAtomic;
typedef struct rxHeapBlockHeader;
typedef struct xModelPool;
typedef struct xEntShadow;
typedef struct xLinkAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimFile;
typedef struct xSerial;
typedef struct iEnv;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct RpClump;
typedef struct xLightKit;
typedef struct xJSPNodeInfo;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct rxReq;
typedef struct xBaseAsset;
typedef enum RpWorldRenderOrder;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpMaterial;
typedef struct xClumpCollBSPBranchNode;
typedef struct xBound;
typedef struct xSurface;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xModelBucket;
typedef struct xJSPHeader;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xBBox;
typedef struct xRot;
typedef struct xEntAsset;
typedef struct RpWorldSector;
typedef struct RpMorphTarget;
typedef struct _class_1;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct RpLight;
typedef struct xClumpCollBSPTree;
typedef struct RpWorld;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct basic_rect;
typedef struct xEntFrame;
typedef struct xBox;
typedef struct xGridBound;
typedef struct RxClusterDefinition;
typedef struct zUIFontAsset;
typedef struct xShadowSimplePoly;
typedef struct _tagiTRCPadInfo;
typedef struct RwSphere;
typedef struct RwLLLink;
typedef enum _tagPadInit;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct tri_data;
typedef struct _class_2;
typedef struct xLightKitLight;
typedef struct RxClusterRef;
typedef struct jot;
typedef struct xShadowSimpleCache;
typedef struct RwObject;
typedef struct xEntCollis;
typedef struct RxIoSpec;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct RwFrame;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct xEnv;
typedef struct zEnt;
typedef struct RxNodeMethods;
typedef enum _tagTRCState;
typedef struct split_tag;
typedef struct xCollis;
typedef struct _class_3;
typedef struct RpPolygon;
typedef struct xtextbox;
typedef struct RpMaterialList;
typedef struct xFFX;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xfont;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct xClumpCollBSPVertInfo;
typedef struct anim_coll_data;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_0)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef void(*type_3)(xAnimPlay*, xAnimState*);
typedef void(*type_5)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef void(*type_6)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_7)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_8)(RpClump*, void*);
typedef unsigned int(*type_9)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef int(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_12)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_13)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_15)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef RpAtomic*(*type_16)(RpAtomic*);
typedef int(*type_17)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_18)(unsigned int);
typedef int(*type_19)(RxNodeDefinition*);
typedef void(*type_20)(zUIFont*, xScene*, float);
typedef void(*type_21)(RxNodeDefinition*);
typedef char*(*type_22)(xBase*);
typedef int(*type_23)(RxPipelineNode*);
typedef unsigned int(*type_24)(xAnimTransition*, xAnimSingle*, void*);
typedef char*(*type_25)(unsigned int);
typedef void(*type_26)(xEnt*);
typedef void(*type_31)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_34)(RpWorldSector*);
typedef int(*type_40)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_43)(xEnt*, xScene*, float);
typedef void(*type_48)(xEnt*, xVec3*);
typedef void(*type_51)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_54)(xEnt*);
typedef void(*type_57)(xMemPool*, void*);
typedef void(*type_58)(jot&, xtextbox&, float, float);
typedef void(*type_62)(RwResEntry*);
typedef void(*type_64)(jot&, xtextbox&, xtextbox&);

typedef RwTexCoords* type_1[8];
typedef xCollis type_4[18];
typedef unsigned short type_14[3];
typedef float type_27[2];
typedef _tagTRCPadInfo type_28[4];
typedef char type_29[16];
typedef RwTexCoords* type_30[8];
typedef char type_32[4];
typedef char type_33[16];
typedef unsigned short type_35[2];
typedef float type_36[2];
typedef float type_37[2];
typedef float type_38[2];
typedef float type_39[2];
typedef unsigned int type_41[4];
typedef xVec3 type_42[3];
typedef unsigned char type_44[4];
typedef unsigned char type_45[4];
typedef RpLight* type_46[2];
typedef float type_47[16];
typedef unsigned short type_49[4];
typedef RwFrame* type_50[2];
typedef float type_52[2];
typedef unsigned short type_53[2];
typedef unsigned short type_55[2];
typedef unsigned char type_56[3];
typedef char type_59[32];
typedef unsigned short type_60[3];
typedef char type_61[32];
typedef unsigned char type_63[2];
typedef xVec3 type_65[4];
typedef xAnimMultiFileEntry type_66[1];
typedef float type_67[4];
typedef RxCluster type_68[1];

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
	type_30 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_0 sync;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_7 Callback;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct tag_type
{
	substr name;
	type_5 parse_tag;
	type_5 reset_tag;
	void* context;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_52 BilinearLerp;
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
	type_11 BeforeAnimMatrices;
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

struct zUIFont : _zUI
{
	zUIFontAsset* fasset;
	unsigned short uiFontFlags;
	unsigned short uiFontHackFlags;
	unsigned int text_id;
	float yscroll;
	unsigned int text_index;
	char* text;
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
	type_31 StateCallback;
	type_11 BeforeAnimMatrices;
};

struct RwTexCoords
{
	float u;
	float v;
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
	type_18 resolvID;
	type_22 base2Name;
	type_25 id2Name;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct callback
{
	type_58 render;
	type_64 layout_update;
	type_64 render_update;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	unsigned int uiFlags;
	unsigned int uiButton;
	unsigned short preUpdateIndex;
	unsigned short updateIndex;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_62 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_57 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct substr
{
	char* text;
	unsigned int size;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_13 eventFunc;
};

struct xVec3
{
	float x;
	float y;
	float z;
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
	type_43 update;
	type_43 endUpdate;
	type_48 bupdate;
	type_51 move;
	type_54 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_12 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct zUIAsset : xEntAsset
{
	unsigned int uiFlags;
	type_35 dim;
	unsigned int textureID;
	type_36 uva;
	type_37 uvb;
	type_38 uvc;
	type_39 uvd;
};

struct _tagTRCPadInfo : _tagiTRCPadInfo
{
	int id;
	_tagTRCState state;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RpTriangle
{
	type_14 vertIndex;
	short matIndex;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_16 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_41 pad;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_27 radius;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_67 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_46 light;
	type_50 light_frame;
	int memlvl;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_24 Conditional;
	type_24 Callback;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_8 callback;
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

struct rxReq
{
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_56 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xSurface
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_66 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_59 name;
	type_61 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct xJSPHeader
{
	type_32 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xRot
{
	xVec3 axis;
	float angle;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_1 texCoords;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_34 renderCallBack;
	RxPipeline* pipeline;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
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

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct zUIFontAsset : zUIAsset
{
	unsigned short uiFontFlags;
	unsigned char mode;
	unsigned char fontID;
	unsigned int textAssetID;
	type_44 bcolor;
	type_45 color;
	type_49 inset;
	type_53 space;
	type_55 cdim;
	unsigned int max_height;
};

struct xShadowSimplePoly
{
	type_42 vert;
	xVec3 norm;
};

struct _tagiTRCPadInfo
{
	_tagPadInit pad_init;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

enum _tagPadInit
{
	ePadInit_Open1,
	ePadInit_WaitStable2,
	ePadInit_EnableAnalog3,
	ePadInit_EnableAnalog3LetsAllPissOffChris,
	ePadInit_EnableRumble4,
	ePadInit_EnableRumbleTest5,
	ePadInit_PressureS6,
	ePadInit_PressureSTest7,
	ePadInit_Complete8a,
	ePadInit_Complete8b,
	ePadInit_Finished9
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

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct _class_2
{
	xVec3* verts;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_47 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
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
	type_65 corner;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
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
	type_4 colls;
	type_6 post;
	type_9 depenq;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct st_SERIAL_CLIENTINFO
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

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RxNodeMethods
{
	type_17 nodeBody;
	type_19 nodeInit;
	type_21 nodeTerm;
	type_23 pipelineNodeInit;
	type_2 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_15 configMsgHandler;
};

enum _tagTRCState
{
	TRC_Unknown,
	TRC_PadMissing,
	TRC_PadInserted,
	TRC_PadInvalidNoAnalog,
	TRC_PadInvalidType,
	TRC_DiskNotIdentified,
	TRC_DiskIdentified,
	TRC_DiskTrayOpen,
	TRC_DiskTrayClosed,
	TRC_DiskNoDisk,
	TRC_DiskInvalid,
	TRC_DiskRetry,
	TRC_DiskFatal,
	TRC_Total
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
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
		tri_data tri;
	};
};

struct _class_3
{
	float t;
	float u;
	float v;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_60 vertIndex;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xFFX
{
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_68 clusters;
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

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct anim_coll_data
{
};

struct RwLinkList
{
	RwLLLink link;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_29 buffer;
type_33 buffer;
type_28 gTrcPad;
type_40 zUIFontEventCB;
type_20 zUIFont_Update;
type_26 zUIFont_Render;

void zUIFont_Render(xEnt* e);
int zUIFontEventCB(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget);
void zUIFont_Update(zUIFont* ent);
void zUIFont_PreUpdate(zUIFont* ent, xScene* sc, float dt);
void zUIFont_Load(zUIFont* ent, xSerial* s);
void zUIFont_Save(zUIFont* ent, xSerial* s);
void zUIFont_Init(zUIFont* ent, xEntAsset* asset);
void zUIFont_Init(void* ent, void* asset);
void zUIFontInit();

// zUIFont_Render__FP4xEnt
// Start address: 0x1a1a00
void zUIFont_Render(xEnt* e)
{
	zUIFont* ent;
	zUIFontAsset& a;
	basic_rect r;
	xtextbox tb;
	int size;
}

// zUIFontEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x1a2100
int zUIFontEventCB(xBase* from, xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
	int rval;
	zUIFont* s;
}

// zUIFont_Update__FP7zUIFontP6xScenef
// Start address: 0x1a2310
void zUIFont_Update(zUIFont* ent)
{
	_zUI* ui;
	xBase* sendTo;
}

// zUIFont_PreUpdate__FP7zUIFontP6xScenef
// Start address: 0x1a2600
void zUIFont_PreUpdate(zUIFont* ent, xScene* sc, float dt)
{
}

// zUIFont_Load__FP7zUIFontP7xSerial
// Start address: 0x1a2610
void zUIFont_Load(zUIFont* ent, xSerial* s)
{
}

// zUIFont_Save__FP7zUIFontP7xSerial
// Start address: 0x1a2620
void zUIFont_Save(zUIFont* ent, xSerial* s)
{
}

// zUIFont_Init__FP7zUIFontP9xEntAsset
// Start address: 0x1a2630
void zUIFont_Init(zUIFont* ent, xEntAsset* asset)
{
}

// zUIFont_Init__FPvPv
// Start address: 0x1a27e0
void zUIFont_Init(void* ent, void* asset)
{
}

// zUIFontInit__Fv
// Start address: 0x1a27f0
void zUIFontInit()
{
}

