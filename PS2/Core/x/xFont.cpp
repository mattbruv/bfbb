typedef struct xfont;
typedef struct jot;
typedef struct font_asset;
typedef struct xtextbox;
typedef struct model_tag_context;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct RwImage;
typedef struct RxPipelineNode;
typedef struct tag_entry;
typedef struct xQuat;
typedef struct model_pool;
typedef struct RwTexCoords;
typedef struct RpMaterial;
typedef struct RwV3d;
typedef struct RpTriangle;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct iColor_tag;
typedef struct RxPipeline;
typedef struct jot_line;
typedef struct xTextAsset;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct tag_type;
typedef struct substr;
typedef struct RxPipelineRequiresCluster;
typedef struct split_tag;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct xVec2;
typedef struct xAnimTransitionList;
typedef struct xModelBucket;
typedef struct font_data;
typedef struct xTimerAsset;
typedef struct RpMorphTarget;
typedef struct RwRaster;
typedef struct xAnimTable;
typedef struct basic_rect_0;
typedef struct xAnimTransition;
typedef struct layout;
typedef struct RpLight;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct xModelInstance;
typedef struct tag_entry_list;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct basic_rect_1;
typedef struct rxReq;
typedef struct xLightKit;
typedef enum RxClusterValidityReq;
typedef struct xAnimState;
typedef struct xLightKitLight;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xMat4x3;
typedef struct xAnimFile;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimSingle;
typedef struct rxHeapFreeBlock;
typedef struct _class_0;
typedef struct tex_tag_context;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct model_cache_entry;
typedef struct xAnimMultiFileBase;
typedef struct model_args;
typedef struct RpAtomic;
typedef enum RxClusterForcePresent;
typedef struct tex_args;
typedef struct _class_1;
typedef struct xAnimEffect;
typedef struct RpInterpolator;
typedef struct RxClusterDefinition;
typedef enum _enum_0;
typedef struct tl_cache_entry;
typedef struct xLinkAsset;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xAnimPlay;
typedef struct RwTexDictionary;
typedef struct xTimer;
typedef struct RxOutputSpec;
typedef struct _class_2;
typedef struct RpMaterialList;
typedef struct _class_3;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct xModelPool;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RpClump;
typedef struct RxIoSpec;
typedef struct RpGeometry;
typedef enum RwTextureFilterMode;
typedef struct xMemPool;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RwSky2DVertexFields;
typedef struct RxNodeDefinition;
typedef struct callback;
typedef struct xBase;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct _class_4;
typedef enum _enum_1;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct _class_5;
typedef struct xBaseAsset;

typedef void(*type_1)(xAnimPlay*, xAnimState*);
typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_5)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_6)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_12)(RxNodeDefinition*);
typedef void(*type_13)(RxNodeDefinition*);
typedef int(*type_14)(RxPipelineNode*);
typedef void(*type_15)(RxPipelineNode*);
typedef int(*type_17)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_23)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_27)(xAnimTransition*, xAnimSingle*, void*);
typedef RpClump*(*type_37)(RpClump*, void*);
typedef void(*type_38)(xMemPool*, void*);
typedef void(*type_39)(jot&, xtextbox&, float, float);
typedef void(*type_44)(jot&, xtextbox&, xtextbox&);
typedef void(*type_45)(RwResEntry*);
typedef int(*type_46)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_50)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef RpAtomic*(*type_53)(RpAtomic*);
typedef RwObjectHasFrame*(*type_55)(RwObjectHasFrame*);

typedef model_cache_entry type_0[8];
typedef _class_5 type_3[127];
typedef char type_4[16];
typedef RwMatrixTag type_7[8];
typedef RwTexCoords* type_8[8];
typedef xModelInstance type_10[8];
typedef tl_cache_entry type_11[3];
typedef unsigned char type_16[256];
typedef basic_rect_1 type_18[127];
typedef basic_rect_1 type_19[127];
typedef xVec2 type_20[127];
typedef float type_21[16];
typedef substr type_22[32];
typedef char* type_24[3];
typedef tag_entry type_25[16];
typedef float type_26[2];
typedef unsigned int type_28[4];
typedef unsigned char type_29[2];
typedef xAnimMultiFileEntry type_30[1];
typedef RwSky2DVertex type_31[120];
typedef unsigned char type_32[256];
typedef unsigned int type_33[4096];
typedef font_data type_34[4];
typedef float type_35[4];
typedef _class_3 type_36[16];
typedef char type_40[32];
typedef tag_type type_41[128];
typedef char type_42[32];
typedef type_41 type_43[2];
typedef jot type_47[512];
typedef jot_line type_48[128];
typedef RwSky2DVertex type_49[4];
typedef unsigned short type_51[3];
typedef RxCluster type_52[1];
typedef unsigned char type_54[1024];
typedef unsigned short type_56[64];
typedef unsigned char type_57[128];
typedef <unknown type (0xa510)> type_58[4];
typedef char type_59[16];
typedef char type_60[64];
typedef font_asset type_61[4];

struct xfont
{
	unsigned int id;
	float width;
	float height;
	float space;
	iColor_tag color;
	basic_rect_1 clip;
};

struct jot
{
	substr s;
	_class_0 flag;
	unsigned short context_size;
	void* context;
	basic_rect_1 bounds;
	basic_rect_1 render_bounds;
	callback* cb;
	tag_type* tag;
};

struct font_asset
{
	unsigned int tex_id;
	unsigned short u;
	unsigned short v;
	unsigned char du;
	unsigned char dv;
	unsigned char line_size;
	unsigned char baseline;
	_class_4 space;
	unsigned int flags;
	type_57 char_set;
	type_3 char_pos;
};

struct xtextbox
{
	xfont font;
	basic_rect_1 bounds;
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

struct model_tag_context
{
	xModelInstance* model;
	xVec3 rot;
	basic_rect_1 dst;
	xSphere o;
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

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwImage
{
	int flags;
	int width;
	int height;
	int depth;
	int stride;
	unsigned char* cpPixels;
	RwRGBA* palette;
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

struct tag_entry
{
	substr name;
	char op;
	substr* args;
	unsigned int args_size;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct model_pool
{
	type_7 mat;
	type_10 model;
};

struct RwTexCoords
{
	float u;
	float v;
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

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RpTriangle
{
	type_51 vertIndex;
	short matIndex;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_28 pad;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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

struct jot_line
{
	basic_rect_1 bounds;
	float baseline;
	unsigned int first;
	unsigned int last;
	unsigned char page_break;
};

struct xTextAsset
{
	unsigned int len;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_40 name;
	type_42 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct tag_type
{
	substr name;
	type_50 parse_tag;
	type_50 reset_tag;
	void* context;
};

struct substr
{
	char* text;
	unsigned int size;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_45 destroyNotify;
};

struct xVec2
{
	float x;
	float y;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct font_data
{
	font_asset* asset;
	unsigned int index_max;
	type_16 char_index;
	float iwidth;
	float iheight;
	type_18 tex_bounds;
	type_19 bounds;
	type_20 dstfrac;
	RwTexture* texture;
	RwRaster* raster;
};

struct xTimerAsset : xBaseAsset
{
	float seconds;
	float randomRange;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct basic_rect_0
{
	int x;
	int y;
	int w;
	int h;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_27 Conditional;
	type_27 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct layout
{
	xtextbox tb;
	type_47 _jots;
	unsigned int _jots_size;
	type_48 _lines;
	unsigned int _lines_size;
	type_54 context_buffer;
	unsigned int context_buffer_size;
	type_56 dynamics;
	unsigned int dynamics_size;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct tag_entry_list
{
	tag_entry* entries;
	unsigned int size;
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

struct basic_rect_1
{
	float x;
	float y;
	float w;
	float h;
};

struct rxReq
{
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_1 BeforeEnter;
	type_2 StateCallback;
	type_5 BeforeAnimMatrices;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_21 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_29 NumAnims;
	void** RawData;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_26 BilinearLerp;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct _class_0
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

struct tex_tag_context
{
	RwRaster* raster;
	float rot;
	basic_rect_1 src;
	basic_rect_1 dst;
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

struct model_cache_entry
{
	unsigned int id;
	unsigned int order;
	xModelInstance* model;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct model_args
{
	xModelInstance* model;
	xVec3 rot;
	basic_rect_1 dst;
	xVec2 off;
	_enum_0 scale;
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
	type_53 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct tex_args
{
	RwRaster* raster;
	float rot;
	basic_rect_1 src;
	basic_rect_1 dst;
	xVec2 off;
	_enum_1 scale;
};

struct _class_1
{
	xVec3* verts;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_23 Callback;
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

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

enum _enum_0
{
	SCALE_FONT,
	SCALE_SCREEN,
	SCALE_SIZE
};

struct tl_cache_entry
{
	unsigned int used;
	long last_used;
	layout tl;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_35 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_30 Files;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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
	type_5 BeforeAnimMatrices;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xTimer : xBase
{
	xTimerAsset* tasset;
	unsigned char state;
	unsigned char runsInPause;
	unsigned short flags;
	float secondsLeft;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _class_2
{
	int fogenable;
	int vertexalphaenable;
	int zwriteenable;
	int ztestenable;
	unsigned int srcblend;
	unsigned int destblend;
	unsigned int shademode;
	RwRaster* textureraster;
	RwTextureFilterMode filter;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct _class_3
{
	char* s;
	char* end;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_37 callback;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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
	type_8 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

enum RwTextureFilterMode
{
	rwFILTERNAFILTERMODE,
	rwFILTERNEAREST,
	rwFILTERLINEAR,
	rwFILTERMIPNEAREST,
	rwFILTERMIPLINEAR,
	rwFILTERLINEARMIPNEAREST,
	rwFILTERLINEARMIPLINEAR,
	rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 0x7fffffff
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_38 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxNodeMethods
{
	type_9 nodeBody;
	type_12 nodeInit;
	type_13 nodeTerm;
	type_14 pipelineNodeInit;
	type_15 pipelineNodeTerm;
	type_17 pipelineNodeConfig;
	type_6 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float camVertex_z;
	float u;
	float v;
	float recipZ;
	float pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float pad2;
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

struct callback
{
	type_39 render;
	type_44 layout_update;
	type_44 render_update;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_46 eventFunc;
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

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_52 clusters;
};

struct _class_4
{
	short x;
	short y;
};

enum _enum_1
{
	SCALE_FONT,
	SCALE_SCREEN,
	SCALE_SIZE,
	SCALE_FONT_WIDTH,
	SCALE_FONT_HEIGHT,
	SCALE_SCREEN_WIDTH,
	SCALE_SCREEN_HEIGHT
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
	type_55 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_58 qWords;
};

struct _class_5
{
	unsigned char offset;
	unsigned char size;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

basic_rect_1 screen_bounds;
basic_rect_1 default_adjust;
type_59 buffer;
type_4 buffer;
type_24 default_font_texture;
type_61 default_font_assets;
type_34 active_fonts;
unsigned int active_fonts_size;
type_31 vert_buffer;
unsigned int vert_buffer_used;
float rcz;
float nsz;
type_0 model_cache;
unsigned char model_cache_inited;
_class_2 oldrs;
substr text_delims;
tex_args def_tex_args;
model_args def_model_args;
type_11 tl_cache;
callback text_cb;
unsigned char disable_text_stats;
type_43 format_tags_buffer;
tag_type* format_tags;
unsigned int format_tags_size;
type_33 ourGlobals;
basic_rect_1 m_Unit;
xVec3 m_Null;
basic_rect_1 m_Null;
iColor_tag g_WHITE;
xMat4x3 g_I3;
unsigned int gActiveHeap;

void render_fill_rect(basic_rect_1& bounds, iColor_tag color);
void set_rect_vert(RwSky2DVertex& vert, float x, float y, float z, iColor_tag c, float rcz);
tag_type* find_format_tag(substr& s, int& index);
void register_tags(tag_type* t, unsigned int size);
void parse_tag_timer(jot& j, split_tag& ti);
void parse_tag_pop(split_tag& ti);
void parse_tag_insert_hash(jot& j, split_tag& ti);
void parse_tag_insert(jot& j, split_tag& ti);
void reset_tag_tex();
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_tex(jot& j, xtextbox& tb, float x, float y);
void reset_tag_model();
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti);
void render_tag_model(jot& j, xtextbox& tb, float x, float y);
void parse_tag_page_break(jot& a);
void parse_tag_word_break(jot& a);
void parse_tag_tab(jot& a);
void parse_tag_newline(jot& a, xtextbox& tb);
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti);
void reset_tag_yjustify(jot& a);
void parse_tag_yjustify(jot& a, split_tag& ti);
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_yjustify(jot& j, xtextbox& tb);
void reset_tag_xjustify(jot& a);
void parse_tag_xjustify(jot& a, split_tag& ti);
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb);
void update_tag_xjustify(jot& j, xtextbox& tb);
void reset_tag_wrap(jot& a);
void parse_tag_wrap(jot& a, split_tag& ti);
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb);
void update_tag_wrap(jot& j, xtextbox& tb);
void reset_tag_font(jot& a);
void parse_tag_font(jot& a, split_tag& ti);
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb);
void update_tag_font(jot& j, xtextbox& tb);
void reset_tag_color(jot& a);
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb);
void update_tag_color(jot& j, xtextbox& tb);
void reset_tag_all(jot& j);
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb);
void reset_tag_yspace(jot& a);
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb);
void update_tag_yspace(jot& j, xtextbox& tb);
void reset_tag_xspace(jot& a);
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb);
void update_tag_xspace(jot& j, xtextbox& tb);
void reset_tag_tab_stop(jot& a);
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb);
void update_tag_tab_stop(jot& j, xtextbox& tb);
void reset_tag_right_indent(jot& a);
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_right_indent(jot& j, xtextbox& tb);
void reset_tag_left_indent(jot& a);
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb);
void update_tag_left_indent(jot& j, xtextbox& tb);
void reset_tag_height(jot& a);
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb);
void update_tag_height(jot& j, xtextbox& tb);
void reset_tag_width(jot& a);
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb);
void update_tag_width(jot& j, xtextbox& tb);
void reset_tag_blue(jot& a);
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb);
void update_tag_blue(jot& j, xtextbox& tb);
void reset_tag_green(jot& a);
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb);
void update_tag_green(jot& j, xtextbox& tb);
void reset_tag_red(jot& a);
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb);
void update_tag_red(jot& j, xtextbox& tb);
void reset_tag_alpha(jot& a);
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti);
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb);
void update_tag_alpha(jot& j, xtextbox& tb);
unsigned char changed(layout* this, xtextbox& ctb);
float yextent(layout* this, float max, int& size, int begin_jot, int end_jot);
void render(layout* this, xtextbox& ctb, int begin_jot, int end_jot);
void calc(layout* this, xtextbox& ctb, unsigned int start_text);
unsigned char fit_line(layout* this);
void bound_line(layout* this, jot_line& line);
void merge_line(layout* this, jot_line& line);
void trim_line(layout* this, jot_line& line);
void clear(layout* this);
void refresh_end(layout* this, xtextbox& tb);
void refresh(layout* this, xtextbox& tb, unsigned char force);
void clear_layout_cache();
unsigned int read_list(tag_entry& e, int* v, unsigned int vsize);
unsigned int read_list(tag_entry& e, float* v, unsigned int vsize);
tag_entry* find_entry(tag_entry_list& el, substr& name);
tag_entry_list read_tag(substr& s);
float yextent(float max, int& size, layout& l, int begin_jot, int end_jot);
void render(xtextbox* this, layout& l, int begin_jot, int end_jot);
layout& temp_layout(xtextbox* this, unsigned char cache);
void set_text(xtextbox* this, char** texts, unsigned int* text_sizes, unsigned int size);
void set_text(xtextbox* this, char** texts, unsigned int size);
void set_text(xtextbox* this, char* text);
void text_render(jot& j, xtextbox& tb, float x, float y);
void start_layout();
void load_model_args(model_args& ma, substr& s);
void load_tex_args(tex_args& ta, substr& s);
char* parse_next_text_jot(jot& a, xtextbox& tb, char* text);
char* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, char* text, unsigned int text_size);
unsigned int parse_split_tag(split_tag& ti);
void irender(xfont* this, char* text, unsigned int text_size, float x, float y);
void irender(xfont* this, char* text, float x, float y);
void stop_render();
void start_render(xfont* this);
basic_rect_1 bounds(xfont* this, char* text, unsigned int text_size, float max_width, unsigned int& size);
basic_rect_1 bounds(xfont* this, char* text);
void restore_render_state();
void set_render_state(RwRaster* raster);
void init();
xModelInstance* load_model(unsigned int id);
void init_model_cache();
void tex_render(basic_rect_1& src, basic_rect_1& dst, basic_rect_1& clip, iColor_tag color);
unsigned char init_font_data(font_data& fd);
unsigned char reset_font_spacing(font_asset& a);
basic_rect_0 find_bounds(iColor_tag* bits, basic_rect_0& r, int pitch);

// render_fill_rect__FRC13basic_rect<f>10iColor_tag
// Start address: 0x1daf50
void render_fill_rect(basic_rect_1& bounds, iColor_tag color)
{
	float rcz;
	float nsz;
	type_49 vert;
	basic_rect_1 r;
}

// set_rect_vert__19@unnamed@xFont_cpp@FR13RwSky2DVertexfff10iColor_tagf
// Start address: 0x1db1b0
void set_rect_vert(RwSky2DVertex& vert, float x, float y, float z, iColor_tag c, float rcz)
{
}

// find_format_tag__8xtextboxFRC6substrRi
// Start address: 0x1db2b0
tag_type* find_format_tag(substr& s, int& index)
{
	int start;
	int end;
	tag_type& t;
	int c;
}

// register_tags__8xtextboxFPCQ28xtextbox8tag_typeUi
// Start address: 0x1db390
void register_tags(tag_type* t, unsigned int size)
{
	tag_type* s1;
	tag_type* s2;
	tag_type* end1;
	tag_type* end2;
	tag_type* d;
	int c;
}

// parse_tag_timer__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db5a0
void parse_tag_timer(jot& j, split_tag& ti)
{
	unsigned int id;
	xTimer* ta;
	type_60 buffer;
	unsigned int sec;
	unsigned int mn;
}

// parse_tag_pop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db750
void parse_tag_pop(split_tag& ti)
{
}

// parse_tag_insert_hash__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db790
void parse_tag_insert_hash(jot& j, split_tag& ti)
{
	xTextAsset* ta;
}

// parse_tag_insert__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db870
void parse_tag_insert(jot& j, split_tag& ti)
{
	unsigned int id;
	xTextAsset* ta;
}

// reset_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1db950
void reset_tag_tex()
{
}

// parse_tag_tex__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dba00
void parse_tag_tex(jot& a, xtextbox& tb, split_tag& ti)
{
	tex_tag_context& ttc;
	callback cb;
}

// render_tag_tex__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1dbe60
void render_tag_tex(jot& j, xtextbox& tb, float x, float y)
{
	tex_tag_context& ttc;
	basic_rect_1 dst;
}

// reset_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbf50
void reset_tag_model()
{
}

// parse_tag_model__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dbff0
void parse_tag_model(jot& a, xtextbox& tb, split_tag& ti)
{
	model_tag_context& mtc;
	callback cb;
}

// render_tag_model__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1dc280
void render_tag_model(jot& j, xtextbox& tb, float x, float y)
{
	model_tag_context& mtc;
	basic_rect_1 dst;
	xVec3 from;
	xVec3 to;
	xMat4x3 frame;
	float scale;
}

// parse_tag_page_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc490
void parse_tag_page_break(jot& a)
{
}

// parse_tag_word_break__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4b0
void parse_tag_word_break(jot& a)
{
}

// parse_tag_tab__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4d0
void parse_tag_tab(jot& a)
{
}

// parse_tag_newline__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc4f0
void parse_tag_newline(jot& a, xtextbox& tb)
{
}

// parse_tag_open_curly__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc600
void parse_tag_open_curly(jot& a, xtextbox& tb, split_tag& ti)
{
	char c;
}

// reset_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc710
void reset_tag_yjustify(jot& a)
{
	callback cb;
}

// parse_tag_yjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc720
void parse_tag_yjustify(jot& a, split_tag& ti)
{
	unsigned int& flags;
	callback cb;
}

// update_tag_reset_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8c0
void update_tag_reset_yjustify(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_yjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dc8e0
void update_tag_yjustify(jot& j, xtextbox& tb)
{
}

// reset_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc900
void reset_tag_xjustify(jot& a)
{
	callback cb;
}

// parse_tag_xjustify__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dc910
void parse_tag_xjustify(jot& a, split_tag& ti)
{
	unsigned int& flags;
	callback cb;
}

// update_tag_reset_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcab0
void update_tag_reset_xjustify(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_xjustify__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcad0
void update_tag_xjustify(jot& j, xtextbox& tb)
{
}

// reset_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcaf0
void reset_tag_wrap(jot& a)
{
	callback cb;
}

// parse_tag_wrap__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcb00
void parse_tag_wrap(jot& a, split_tag& ti)
{
	unsigned int& flags;
	callback cb;
}

// update_tag_reset_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc00
void update_tag_reset_wrap(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_wrap__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcc20
void update_tag_wrap(jot& j, xtextbox& tb)
{
}

// reset_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc40
void reset_tag_font(jot& a)
{
	callback cb;
}

// parse_tag_font__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcc50
void parse_tag_font(jot& a, split_tag& ti)
{
	unsigned int& id;
	callback cb;
}

// update_tag_reset_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcce0
void update_tag_reset_font(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_font__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dccf0
void update_tag_font(jot& j, xtextbox& tb)
{
}

// reset_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd00
void reset_tag_color(jot& a)
{
	callback cb;
}

// parse_tag_color__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcd10
void parse_tag_color(jot& a, xtextbox& tb, split_tag& ti)
{
	iColor_tag& color;
	unsigned int v;
	unsigned int temp;
	callback cb;
}

// update_tag_reset_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf50
void update_tag_reset_color(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_color__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcf80
void update_tag_color(jot& j, xtextbox& tb)
{
}

// reset_tag_all__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dcfb0
void reset_tag_all(jot& j)
{
	callback cb;
}

// update_tag_reset_all__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dcfc0
void update_tag_reset_all(xtextbox& tb, xtextbox& ctb)
{
}

// reset_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0a0
void reset_tag_yspace(jot& a)
{
	callback cb;
}

// parse_tag_yspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd0b0
void parse_tag_yspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd1f0
void update_tag_reset_yspace(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_yspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd200
void update_tag_yspace(jot& j, xtextbox& tb)
{
}

// reset_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd210
void reset_tag_xspace(jot& a)
{
	callback cb;
}

// parse_tag_xspace__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd220
void parse_tag_xspace(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd360
void update_tag_reset_xspace(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_xspace__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd370
void update_tag_xspace(jot& j, xtextbox& tb)
{
}

// reset_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd380
void reset_tag_tab_stop(jot& a)
{
	callback cb;
}

// parse_tag_tab_stop__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd390
void parse_tag_tab_stop(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4c0
void update_tag_reset_tab_stop(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_tab_stop__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd4d0
void update_tag_tab_stop(jot& j, xtextbox& tb)
{
}

// reset_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4e0
void reset_tag_right_indent(jot& a)
{
	callback cb;
}

// parse_tag_right_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd4f0
void parse_tag_right_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd630
void update_tag_reset_right_indent(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_right_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd640
void update_tag_right_indent(jot& j, xtextbox& tb)
{
}

// reset_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd650
void reset_tag_left_indent(jot& a)
{
	callback cb;
}

// parse_tag_left_indent__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd660
void parse_tag_left_indent(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7a0
void update_tag_reset_left_indent(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_left_indent__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd7b0
void update_tag_left_indent(jot& j, xtextbox& tb)
{
}

// reset_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7c0
void reset_tag_height(jot& a)
{
	callback cb;
}

// parse_tag_height__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd7d0
void parse_tag_height(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd900
void update_tag_reset_height(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_height__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dd910
void update_tag_height(jot& j, xtextbox& tb)
{
}

// reset_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd920
void reset_tag_width(jot& a)
{
	callback cb;
}

// parse_tag_width__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dd930
void parse_tag_width(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda60
void update_tag_reset_width(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_width__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dda70
void update_tag_width(jot& j, xtextbox& tb)
{
}

// reset_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda80
void reset_tag_blue(jot& a)
{
	callback cb;
}

// parse_tag_blue__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1dda90
void parse_tag_blue(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc30
void update_tag_reset_blue(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_blue__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1ddc40
void update_tag_blue(jot& j, xtextbox& tb)
{
}

// reset_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcb0
void reset_tag_green(jot& a)
{
	callback cb;
}

// parse_tag_green__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddcc0
void parse_tag_green(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde60
void update_tag_reset_green(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_green__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1dde70
void update_tag_green(jot& j, xtextbox& tb)
{
}

// reset_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddee0
void reset_tag_red(jot& a)
{
	callback cb;
}

// parse_tag_red__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1ddef0
void parse_tag_red(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de090
void update_tag_reset_red(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_red__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de0a0
void update_tag_red(jot& j, xtextbox& tb)
{
}

// reset_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de110
void reset_tag_alpha(jot& a)
{
	callback cb;
}

// parse_tag_alpha__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x1de120
void parse_tag_alpha(jot& a, xtextbox& tb, split_tag& ti)
{
	float& v;
	callback cb;
}

// update_tag_reset_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2c0
void update_tag_reset_alpha(xtextbox& tb, xtextbox& ctb)
{
}

// update_tag_alpha__19@unnamed@xFont_cpp@FRCQ28xtextbox3jotR8xtextboxRC8xtextbox
// Start address: 0x1de2d0
void update_tag_alpha(jot& j, xtextbox& tb)
{
}

// changed__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1de340
unsigned char changed(layout* this, xtextbox& ctb)
{
	unsigned int flags1;
	unsigned int flags2;
	int i;
	jot& j;
	unsigned int oldval;
	unsigned int val;
}

// yextent__Q28xtextbox6layoutCFfRiii
// Start address: 0x1de550
float yextent(layout* this, float max, int& size, int begin_jot, int end_jot)
{
	int begin_line;
	float top;
	int i;
	jot_line& line;
	jot_line& line;
}

// render__Q28xtextbox6layoutFRC8xtextboxii
// Start address: 0x1de690
void render(layout* this, xtextbox& ctb, int begin_jot, int end_jot)
{
	int begin_line;
	int i;
	jot& j;
	float top;
	unsigned int li;
	int line_last;
	float x;
	float y;
	int i;
	jot_line& line;
	unsigned int xj;
	jot& j;
}

// calc__Q28xtextbox6layoutFRC8xtextboxUi
// Start address: 0x1deba0
void calc(layout* this, xtextbox& ctb, unsigned int start_text)
{
	jot_line& first_line;
	type_36 text_stack;
	unsigned int text_stack_size;
	unsigned int text_index;
	char* s;
	char* end;
	jot& a;
	jot_line& line;
	jot_line& last_line;
	unsigned int i;
}

// fit_line__Q28xtextbox6layoutFv
// Start address: 0x1df1b0
unsigned char fit_line(layout* this)
{
	jot_line& line;
	int i;
}

// bound_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df330
void bound_line(layout* this, jot_line& line)
{
	unsigned int i;
	jot& a;
	unsigned int i;
	jot& a;
	float total_height;
}

// merge_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df460
void merge_line(layout* this, jot_line& line)
{
	unsigned int d;
	unsigned int i;
	jot& a1;
	jot& a2;
}

// trim_line__Q28xtextbox6layoutFRQ28xtextbox8jot_line
// Start address: 0x1df730
void trim_line(layout* this, jot_line& line)
{
	int i;
	jot& a;
	unsigned int i;
	jot& a;
}

// clear__Q28xtextbox6layoutFv
// Start address: 0x1df9b0
void clear(layout* this)
{
}

// refresh_end__Q28xtextbox6layoutFRC8xtextbox
// Start address: 0x1dfcd0
void refresh_end(layout* this, xtextbox& tb)
{
}

// refresh__Q28xtextbox6layoutFRC8xtextboxb
// Start address: 0x1dfdd0
void refresh(layout* this, xtextbox& tb, unsigned char force)
{
}

// clear_layout_cache__8xtextboxFv
// Start address: 0x1dff00
void clear_layout_cache()
{
	unsigned int index;
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPiUi
// Start address: 0x1dff60
unsigned int read_list(tag_entry& e, int* v, unsigned int vsize)
{
	unsigned int total;
	unsigned int i;
}

// read_list__8xtextboxFRCQ28xtextbox9tag_entryPfUi
// Start address: 0x1e0000
unsigned int read_list(tag_entry& e, float* v, unsigned int vsize)
{
	unsigned int total;
	unsigned int i;
}

// find_entry__8xtextboxFRCQ28xtextbox14tag_entry_listRC6substr
// Start address: 0x1e00a0
tag_entry* find_entry(tag_entry_list& el, substr& name)
{
	unsigned int i;
	tag_entry& e;
}

// read_tag__8xtextboxFRC6substr
// Start address: 0x1e0140
tag_entry_list read_tag(substr& s)
{
	unsigned int entries_used;
	substr it;
	substr delims;
	substr sub_delims;
	tag_entry& entry;
	char* d;
	substr& arg;
	char* d;
	tag_entry_list ret;
	type_22 arg_buffer;
	type_25 entry_buffer;
}

// yextent__8xtextboxCFfRiRCQ28xtextbox6layoutii
// Start address: 0x1e05e0
float yextent(float max, int& size, layout& l, int begin_jot, int end_jot)
{
}

// render__8xtextboxCFRQ28xtextbox6layoutii
// Start address: 0x1e05f0
void render(xtextbox* this, layout& l, int begin_jot, int end_jot)
{
}

// temp_layout__8xtextboxCFb
// Start address: 0x1e0600
layout& temp_layout(xtextbox* this, unsigned char cache)
{
	long cur_time;
	unsigned char refresh;
	unsigned int index;
	int min_used;
	unsigned int i;
	int used;
	tl_cache_entry& e;
}

// set_text__8xtextboxFPPCcPCUiUi
// Start address: 0x1e0960
void set_text(xtextbox* this, char** texts, unsigned int* text_sizes, unsigned int size)
{
	unsigned int i;
	unsigned int i;
}

// set_text__8xtextboxFPPCcUi
// Start address: 0x1e0a70
void set_text(xtextbox* this, char** texts, unsigned int size)
{
}

// set_text__8xtextboxFPCc
// Start address: 0x1e0a80
void set_text(xtextbox* this, char* text)
{
}

// text_render__8xtextboxFRCQ28xtextbox3jotRC8xtextboxff
// Start address: 0x1e0ad0
void text_render(jot& j, xtextbox& tb, float x, float y)
{
}

// start_layout__19@unnamed@xFont_cpp@FRC8xtextbox
// Start address: 0x1e0af0
void start_layout()
{
}

// load_model_args__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10model_argsRC6substr
// Start address: 0x1e0c10
void load_model_args(model_args& ma, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	unsigned int id;
}

// load_tex_args__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@8tex_argsRC6substr
// Start address: 0x1e1180
void load_tex_args(tex_args& ta, substr& s)
{
	tag_entry_list el;
	tag_entry* e;
	substr& name;
	unsigned int id;
	RwTexture* texture;
}

// parse_next_text_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1b20
char* parse_next_text_jot(jot& a, xtextbox& tb, char* text)
{
	char c;
}

// parse_next_tag_jot__19@unnamed@xFont_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxPCcUi
// Start address: 0x1e1d40
char* parse_next_tag_jot(jot& a, xtextbox& tb, xtextbox& ctb, char* text, unsigned int text_size)
{
	split_tag ti;
	unsigned int size;
}

// parse_split_tag__19@unnamed@xFont_cpp@FRQ28xtextbox9split_tag
// Start address: 0x1e1f50
unsigned int parse_split_tag(split_tag& ti)
{
	substr s;
}

// irender__5xfontCFPCcUiff
// Start address: 0x1e2340
void irender(xfont* this, char* text, unsigned int text_size, float x, float y)
{
	font_data& fd;
	basic_rect_1 bounds;
	unsigned int i;
	unsigned int charIndex;
}

// irender__5xfontCFPCcff
// Start address: 0x1e2600
void irender(xfont* this, char* text, float x, float y)
{
}

// stop_render__5xfontCFv
// Start address: 0x1e2610
void stop_render()
{
}

// start_render__5xfontCFv
// Start address: 0x1e26e0
void start_render(xfont* this)
{
}

// bounds__5xfontCFPCcUifRUi
// Start address: 0x1e2750
basic_rect_1 bounds(xfont* this, char* text, unsigned int text_size, float max_width, unsigned int& size)
{
	font_data& fd;
	basic_rect_1 r;
	char* s;
	unsigned int i;
	unsigned int charIndex;
	float dx;
}

// bounds__5xfontCFPCc
// Start address: 0x1e28c0
basic_rect_1 bounds(xfont* this, char* text)
{
	unsigned int size;
}

// restore_render_state__5xfontFv
// Start address: 0x1e28f0
void restore_render_state()
{
}

// set_render_state__5xfontFP8RwRaster
// Start address: 0x1e29a0
void set_render_state(RwRaster* raster)
{
}

// init__5xfontFv
// Start address: 0x1e2ac0
void init()
{
	unsigned int i;
	font_data& fd;
}

// load_model__19@unnamed@xFont_cpp@FUi
// Start address: 0x1e2b90
xModelInstance* load_model(unsigned int id)
{
	unsigned int oldest;
	unsigned int i;
	RpAtomic* mf;
	model_cache_entry& e;
	xModelInstance& model;
	unsigned int next_order;
}

// init_model_cache__19@unnamed@xFont_cpp@Fv
// Start address: 0x1e2cd0
void init_model_cache()
{
	void* data;
	model_pool& pool;
	xModelInstance& model;
	model_cache_entry& e;
}

// tex_render__19@unnamed@xFont_cpp@FRC13basic_rect<f>RC13basic_rect<f>RC13basic_rect<f>10iColor_tag
// Start address: 0x1e2e90
void tex_render(basic_rect_1& src, basic_rect_1& dst, basic_rect_1& clip, iColor_tag color)
{
	basic_rect_1 r;
	basic_rect_1 rt;
	RwSky2DVertex* vert;
}

// init_font_data__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@9font_data
// Start address: 0x1e35a0
unsigned char init_font_data(font_data& fd)
{
	font_asset& a;
	int height;
	unsigned char i;
	unsigned char c;
	unsigned int tail_index;
}

// reset_font_spacing__19@unnamed@xFont_cpp@FRQ219@unnamed@xFont_cpp@10font_asset
// Start address: 0x1e3ce0
unsigned char reset_font_spacing(font_asset& a)
{
	RwTexture* tex;
	basic_rect_0 char_bounds;
	type_32 baseline_count;
	int width;
	RwImage* image;
	iColor_tag* bits;
	int i;
	basic_rect_0 r;
	int baseline;
}

// find_bounds__19@unnamed@xFont_cpp@FPC10iColor_tagRC13basic_rect<i>i
// Start address: 0x1e3fb0
basic_rect_0 find_bounds(iColor_tag* bits, basic_rect_0& r, int pitch)
{
	int diff;
	iColor_tag* endp;
	iColor_tag* p;
	int pmode;
	int minx;
	int maxx;
	int miny;
	int maxy;
	int y;
	iColor_tag* endline;
	int x;
	basic_rect_0 b;
}

