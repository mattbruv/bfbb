typedef struct RpGeometry;
typedef struct xEnt;
typedef struct xEntAsset;
typedef struct RxPipelineNodeParam;
typedef enum _tagPadState;
typedef struct xMat4x3;
typedef struct RpClump;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct RxPipelineNode;
typedef struct xAnimPlay;
typedef struct RpMorphTarget;
typedef struct xQuat;
typedef struct xEntMotion;
typedef struct xAnimEffect;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xScene;
typedef struct RxPipelineNodeTopSortData;
typedef struct xMovePointAsset;
typedef struct rxHeapBlockHeader;
typedef struct xMovePoint;
typedef struct xEntFrame;
typedef struct xAnimSingle;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntPenData;
typedef struct xAnimState;
typedef struct xEntMotionOrbitData;
typedef struct xEnv;
typedef struct xAnimTable;
typedef struct xEntMPData;
typedef struct xEntMotionPenData;
typedef struct RpMeshHeader;
typedef struct RxPipeline;
typedef struct xLinkAsset;
typedef struct _tagPadAnalog;
typedef struct xMemPool;
typedef struct _tagiPad;
typedef struct xCollis;
typedef struct xVec3;
typedef struct xModelInstance;
typedef struct xShadowSimplePoly;
typedef struct RwSurfaceProperties;
typedef struct xEntMotionMechData;
typedef struct RwMatrixTag;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpTriangle;
typedef struct rxReq;
typedef struct RpAtomic;
typedef struct RwRaster;
typedef struct xEntMechData;
typedef enum RxClusterValidityReq;
typedef struct xEntMotionSplineData;
typedef struct xModelPool;
typedef struct xBaseAsset;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct RwResEntry;
typedef struct _tagxPad;
typedef struct xCoef3;
typedef struct xShadowSimpleCache;
typedef enum RxNodeDefEditable;
typedef struct xEntCollis;
typedef enum RxClusterValid;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct _tagxRumble;
typedef struct RpLight;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xBound;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct RpMaterial;
typedef struct xSurface;
typedef struct xVec2;
typedef struct xBox;
typedef struct xFFX;
typedef struct xAnimMultiFile;
typedef struct RwTexture;
typedef struct RxClusterDefinition;
typedef struct xQCData;
typedef struct xModelBucket;
typedef struct xBBox;
typedef struct RwSphere;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef enum _tagRumbleType;
typedef struct xMat3x3;
typedef struct xEntOrbitData;
typedef struct RxClusterRef;
typedef struct xGridBound;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xSpline3;
typedef struct analog_data;
typedef struct xEntMotionAsset;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxNodeDefinition;
typedef struct xCoef;
typedef struct xEntSplineData;
typedef struct _class_0;
typedef struct tri_data;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct RpInterpolator;
typedef struct xAnimMultiFileBase;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xEntMotionERData;

typedef int(*type_0)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_2)(RpClump*, void*);
typedef unsigned int(*type_3)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_5)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_6)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_7)(xAnimPlay*, xAnimState*);
typedef int(*type_8)(RxNodeDefinition*);
typedef void(*type_9)(RxNodeDefinition*);
typedef unsigned int(*type_10)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_11)(RxPipelineNode*);
typedef xBase*(*type_12)(unsigned int);
typedef void(*type_13)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_14)(RxPipelineNode*);
typedef char*(*type_16)(xBase*);
typedef char*(*type_17)(unsigned int);
typedef RpAtomic*(*type_19)(RpAtomic*);
typedef void(*type_20)(xEnt*, xScene*, float);
typedef void(*type_22)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_23)(xEnt*, xVec3*);
typedef void(*type_24)(xEnt*, xScene*, float, xEntFrame*);
typedef unsigned int(*type_25)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_26)(xEnt*);
typedef unsigned int(*type_29)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_30)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_31)();
typedef void(*type_34)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_40)(xMemPool*, void*);
typedef void(*type_45)(RwResEntry*);
typedef RwObjectHasFrame*(*type_52)(RwObjectHasFrame*);

typedef char type_1[16];
typedef char type_4[16];
typedef xVec3 type_15[3];
typedef unsigned short type_18[3];
typedef float type_21[16];
typedef unsigned char type_27[22];
typedef unsigned char type_28[22];
typedef RwTexCoords* type_32[8];
typedef xVec3 type_33[4];
typedef unsigned int type_35[4];
typedef float type_36[22];
typedef float type_37[22];
typedef unsigned char type_38[2];
typedef xCollis type_39[18];
typedef char type_41[32];
typedef float type_42[4];
typedef analog_data type_43[2];
typedef char type_44[32];
typedef float type_46[2];
typedef unsigned char type_47[2];
typedef unsigned char type_48[3];
typedef RxCluster type_49[1];
typedef float type_50[4];
typedef float type_51[2];
typedef unsigned char type_53[2];
typedef xAnimMultiFileEntry type_54[1];

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
	type_32 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_20 update;
	type_20 endUpdate;
	type_23 bupdate;
	type_24 move;
	type_26 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_30 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_2 callback;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
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
	type_13 BeforeAnimMatrices;
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

struct xEntMotion
{
	xEntMotionAsset* asset;
	unsigned char type;
	unsigned char pad;
	unsigned short flags;
	float t;
	float tmr;
	float d;
	union
	{
		xEntERData er;
		xEntOrbitData orb;
		xEntSplineData spl;
		xEntMPData mp;
		xEntMechData mech;
		xEntPenData pen;
	};
	xEnt* owner;
	xEnt* target;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_10 Callback;
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
	type_12 resolvID;
	type_16 base2Name;
	type_17 id2Name;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xMovePointAsset : xBaseAsset
{
	xVec3 pos;
	unsigned short wt;
	unsigned char on;
	unsigned char bezIndex;
	unsigned char flg_props;
	unsigned char pad;
	unsigned short numPoints;
	float delay;
	float zoneRadius;
	float arenaRadius;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_35 pad;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_38 pad;
	float delay;
	xSpline3* spl;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_46 BilinearLerp;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
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
	type_7 BeforeEnter;
	type_34 StateCallback;
	type_13 BeforeAnimMatrices;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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

struct xEntMPData
{
	float curdist;
	float speed;
	xMovePoint* dest;
	xMovePoint* src;
	xSpline3* spl;
	float dist;
	unsigned int padalign;
	xQuat aquat;
	xQuat bquat;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_47 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_50 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_40 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct _tagiPad
{
	int port;
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

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xShadowSimplePoly
{
	type_15 vert;
	xVec3 norm;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xEntMotionMechData
{
	unsigned char type;
	unsigned char flags;
	unsigned char sld_axis;
	unsigned char rot_axis;
	float sld_dist;
	float sld_tm;
	float sld_acc_tm;
	float sld_dec_tm;
	float rot_dist;
	float rot_tm;
	float rot_acc_tm;
	float rot_dec_tm;
	float ret_delay;
	float post_ret_delay;
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

struct RpTriangle
{
	type_18 vertIndex;
	short matIndex;
};

struct rxReq
{
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
	type_19 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct xEntMechData
{
	xVec3 apos;
	xVec3 bpos;
	xVec3 dir;
	float arot;
	float brot;
	float ss;
	float sr;
	int state;
	float tsfd;
	float trfd;
	float tsbd;
	float trbd;
	float* rotptr;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionSplineData
{
	int unknown;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_21 matrix;
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
	type_53 NumAnims;
	void** RawData;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_45 destroyNotify;
};

struct _tagxPad
{
	type_27 value;
	type_28 last_value;
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
	type_36 up_tmr;
	type_37 down_tmr;
	type_43 analog;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_33 corner;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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
	type_39 colls;
	type_22 post;
	type_29 depenq;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_25 Conditional;
	type_25 Callback;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct xEntERData
{
	xVec3 a;
	xVec3 b;
	xVec3 dir;
	float et;
	float wet;
	float rt;
	float wrt;
	float p;
	float brt;
	float ert;
	int state;
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
	type_48 pad;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct xSurface
{
};

struct xVec2
{
	float x;
	float y;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xFFX
{
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_54 Files;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_41 name;
	type_44 mask;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_51 radius;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
};

struct xEntOrbitData
{
	xVec3 orig;
	xVec3 c;
	float a;
	float b;
	float p;
	float w;
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

struct xSpline3
{
	unsigned short type;
	unsigned short flags;
	unsigned int N;
	unsigned int allocN;
	xVec3* points;
	float* time;
	xVec3* p12;
	xVec3* bctrl;
	float* knot;
	xCoef3* coef;
	unsigned int arcSample;
	float* arcLength;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xEntMotionAsset
{
	unsigned char type;
	unsigned char use_banking;
	unsigned short flags;
	union
	{
		xEntMotionERData er;
		xEntMotionOrbitData orb;
		xEntMotionSplineData spl;
		xEntMotionMPData mp;
		xEntMotionMechData mech;
		xEntMotionPenData pen;
	};
};

struct RxNodeMethods
{
	type_6 nodeBody;
	type_8 nodeInit;
	type_9 nodeTerm;
	type_11 pipelineNodeInit;
	type_14 pipelineNodeTerm;
	type_0 pipelineNodeConfig;
	type_3 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
};

struct xCoef
{
	type_42 a;
};

struct xEntSplineData
{
	int unknown;
};

struct _class_0
{
	xVec3* verts;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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
	type_49 clusters;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_52 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float ext_tm;
	float ext_wait_tm;
	float ret_tm;
	float ret_wait_tm;
};

xEntMotion** dbg_xems;
unsigned short dbg_num;
unsigned short dbg_num_allocd;
short dbg_idx;
type_1 buffer;
type_4 buffer;
_tagxPad* gDebugPad;
xScene* g_xSceneCur;
unsigned int gActiveHeap;
type_31 xEntMotionDebugCB;

void xEntMotionDebugIPad(xEntMotion* xem);
void xEntMotionDebugDraw(xEntMotion* xem);
void xEntMotionDebugWrite(xEntMotion* xem);
void xEntMotionDebugCB();
void xEntMotionDebugExit();
void xEntMotionDebugInit(unsigned short num_xems);
void xEntMotionTranslate(xEntMotion* motion, xVec3* dpos, xMat4x3* dmat);
void xEntMechReverse(xEntMotion* motion);
void xEntMechForward(xEntMotion* motion);
unsigned int xEntRotMove(xEntMotion* motion, float dt, xEntFrame* frame);
unsigned int xEntSldMove(xEntMotion* motion, float dt, xEntFrame* frame);
void xEntMechMove(xEntMotion* motion, xScene* sc, float dt, xEntFrame* frame);
void xEntPenMove(xEntMotion* motion, float dt, xEntFrame* frame);
void xEntMPMove(xEntMotion* motion, xScene* sc, float dt, xEntFrame* frame);
void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev);
void xEntOrbitMove(xEntMotion* motion, float dt, xEntFrame* frame);
void xEntERMove(xEntMotion* motion, float dt, xEntFrame* frame);
void xEntMotionMove(xEntMotion* motion, xScene* sc, float dt, xEntFrame* frame);
void xEntMotionReset(xEntMotion* motion, xScene* sc);
void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset);

// xEntMotionDebugIPad__FP10xEntMotion
// Start address: 0x1d6e60
void xEntMotionDebugIPad(xEntMotion* xem)
{
}

// xEntMotionDebugDraw__FPC10xEntMotion
// Start address: 0x1d6f70
void xEntMotionDebugDraw(xEntMotion* xem)
{
	xMovePoint* xmp;
	unsigned short idx;
	xMovePoint* omp;
	unsigned short jdx;
}

// xEntMotionDebugWrite__FPC10xEntMotion
// Start address: 0x1d70e0
void xEntMotionDebugWrite(xEntMotion* xem)
{
	char* gps;
}

// xEntMotionDebugCB__Fv
// Start address: 0x1d7bf0
void xEntMotionDebugCB()
{
	xEntMotion* xem;
}

// xEntMotionDebugExit__Fv
// Start address: 0x1d7c50
void xEntMotionDebugExit()
{
}

// xEntMotionDebugInit__FUs
// Start address: 0x1d7c70
void xEntMotionDebugInit(unsigned short num_xems)
{
}

// xEntMotionTranslate__FP10xEntMotionPC5xVec3P7xMat4x3
// Start address: 0x1d7cd0
void xEntMotionTranslate(xEntMotion* motion, xVec3* dpos, xMat4x3* dmat)
{
}

// xEntMechReverse__FP10xEntMotion
// Start address: 0x1d83d0
void xEntMechReverse(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
}

// xEntMechForward__FP10xEntMotion
// Start address: 0x1d84f0
void xEntMechForward(xEntMotion* motion)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
}

// xEntRotMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8610
unsigned int xEntRotMove(xEntMotion* motion, float dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	unsigned int last;
	float tmradj;
	float rem;
	float speed;
	xEnt* ownr;
	xEntAsset* easst;
}

// xEntSldMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8900
unsigned int xEntSldMove(xEntMotion* motion, float dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	unsigned int last;
	float tmradj;
	float rem;
	float speed;
}

// xEntMechMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8b40
void xEntMechMove(xEntMotion* motion, xScene* sc, float dt, xEntFrame* frame)
{
	xEntMechData* mech;
	xEntMotionMechData* mkasst;
	unsigned int last;
}

// xEntPenMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8e70
void xEntPenMove(xEntMotion* motion, float dt, xEntFrame* frame)
{
	xEntPenData* pen;
	xEntMotionPenData* aspen;
	float th;
	float dangle;
	float newt;
	float rem;
	xMat4x3 delta_mat;
}

// xEntMPMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d8fb0
void xEntMPMove(xEntMotion* motion, xScene* sc, float dt, xEntFrame* frame)
{
	xEntMPData* mp;
	float newdist;
	xMovePoint* prev;
	float qdot;
	xVec3 tgt;
	xVec3 dir;
	xVec3 bank;
	xQuat quat;
	xQuat qold;
	xMat3x3 tmpmat;
	float u;
	xVec3 gravity;
}

// xEntMPGetNext__FP10xEntMotionP10xMovePointP6xScene
// Start address: 0x1d9950
void xEntMPGetNext(xEntMotion* motion, xMovePoint* prev)
{
	xEntMPData* mp;
	xVec3 tempdir;
	xMat3x3 mat;
}

// xEntOrbitMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9ab0
void xEntOrbitMove(xEntMotion* motion, float dt, xEntFrame* frame)
{
	float th;
	float u;
	float newt;
	float rem;
}

// xEntERMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9c00
void xEntERMove(xEntMotion* motion, float dt, xEntFrame* frame)
{
	float newt;
	float rem;
	float scale;
	float rem;
	float scale;
}

// xEntMotionMove__FP10xEntMotionP6xScenefP9xEntFrame
// Start address: 0x1d9eb0
void xEntMotionMove(xEntMotion* motion, xScene* sc, float dt, xEntFrame* frame)
{
}

// xEntMotionReset__FP10xEntMotionP6xScene
// Start address: 0x1d9fa0
void xEntMotionReset(xEntMotion* motion, xScene* sc)
{
	xEntMotionPenData* aspen;
	xMat3x3 pshrot;
	xMat3x3* modlrot;
	xVec3* modlpos;
	xEnt* ownr;
	xEntMotionMechData* mkasst;
	xEntMechData* mech;
	float drot;
}

// xEntMotionInit__FP10xEntMotionP4xEntP15xEntMotionAsset
// Start address: 0x1da4f0
void xEntMotionInit(xEntMotion* motion, xEnt* owner, xEntMotionAsset* asset)
{
	xEntMotionMechData* mkasst;
}

