typedef struct xVec3;
typedef struct RwObjectHasFrame;
typedef struct zGust;
typedef struct RpAtomic;
typedef struct RxPipeline;
typedef struct RxPipelineNode;
typedef struct xCollis;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPVertInfo;
typedef struct xClumpCollBSPBranchNode;
typedef struct xBase;
typedef struct zGustAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct RxNodeDefinition;
typedef struct zVolume;
typedef struct xClumpCollBSPTriangle;
typedef struct xScene;
typedef struct xAnimMultiFile;
typedef struct RpInterpolator;
typedef struct xModelInstance;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RxPipelineCluster;
typedef struct xSerial;
typedef struct RxPipelineNodeParam;
typedef struct _tagEmitVolume;
typedef struct RxHeap;
typedef struct _class_0;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct zParEmitter;
typedef struct xLinkAsset;
typedef struct xEnt;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct rxHeapBlockHeader;
typedef struct xParGroup;
typedef struct xModelPool;
typedef struct xAnimTransitionList;
typedef struct RpMaterial;
typedef struct zGustData;
typedef struct RxPipelineRequiresCluster;
typedef struct xAnimTable;
typedef struct xParEmitterAsset;
typedef union _class_1;
typedef struct xAnimTransition;
typedef struct xEntAsset;
typedef struct _tagEmitOffsetPoint;
typedef struct RpClump;
typedef struct xParEmitter;
typedef struct xParEmitterPropsAsset;
typedef struct RpGeometry;
typedef struct xAnimState;
typedef struct RpWorldSector;
typedef struct RwSurfaceProperties;
typedef struct xParSys;
typedef struct RwMatrixTag;
typedef struct RpMorphTarget;
typedef struct xBound;
typedef struct iEnv;
typedef struct rxReq;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xEntFrame;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xLightKit;
typedef struct RpVertexNormal;
typedef struct xJSPNodeInfo;
typedef struct xAnimFile;
typedef struct xPEVCyl;
typedef struct xAnimSingle;
typedef struct xQCData;
typedef struct xBBox;
typedef struct RpMeshHeader;
typedef struct xParInterp;
typedef struct xShadowSimplePoly;
typedef struct xMat4x3;
typedef struct RwResEntry;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xAnimMultiFileBase;
typedef struct xModelTag;
typedef struct xAnimEffect;
typedef struct RpTriangle;
typedef enum rxEmbeddedPacketState;
typedef struct xJSPHeader;
typedef struct xPEEntBone;
typedef struct xSphere;
typedef struct xLightKitLight;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xGridBound;
typedef struct xShadowSimpleCache;
typedef struct xAnimPlay;
typedef struct xEntCollis;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xClumpCollBSPTree;
typedef struct xEnv;
typedef struct RpLight;
typedef struct xPECircle;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef struct xBaseAsset;
typedef struct xFFX;
typedef struct xMat3x3;
typedef struct xSurface;
typedef struct RxClusterRef;
typedef struct RwTexture;
typedef struct RpWorld;
typedef struct RpSector;
typedef struct RwObject;
typedef struct xModelBucket;
typedef struct RwLLLink;
typedef struct _tagEmitSphere;
typedef struct xVolume;
typedef struct RxIoSpec;
typedef struct xEntShadow;
typedef struct xMemPool;
typedef struct anim_coll_data;
typedef struct xVolumeAsset;
typedef struct RxNodeMethods;
typedef struct RwFrame;
typedef struct _tagEmitRect;
typedef struct RxCluster;
typedef struct RxPacket;
typedef struct xPEEntBound;
typedef struct RwRGBAReal;
typedef struct _tagEmitLine;
typedef struct RwLinkList;
typedef struct tri_data;
typedef struct _class_2;
typedef struct xParEmitterCustomSettings;

typedef RpWorldSector*(*type_0)(RpWorldSector*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_2)(RxPipelineNode*);
typedef xBase*(*type_3)(unsigned int);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef int(*type_6)(RxPipelineNode*, RxPipeline*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef char*(*type_9)(xBase*);
typedef void(*type_10)(xAnimPlay*, xQuat*, xVec3*, int);
typedef char*(*type_12)(unsigned int);
typedef unsigned int(*type_14)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_16)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_17)(RxNodeDefinition*);
typedef void(*type_19)(RxNodeDefinition*);
typedef int(*type_21)(RxPipelineNode*);
typedef RpClump*(*type_23)(RpClump*, void*);
typedef unsigned int(*type_25)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_32)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_34)(xEnt*, xScene*, float);
typedef RpAtomic*(*type_35)(RpAtomic*);
typedef unsigned int(*type_36)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_37)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_38)(xEnt*, xVec3*);
typedef void(*type_40)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_41)(xEnt*);
typedef unsigned int(*type_46)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_47)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_53)(xMemPool*, void*);
typedef void(*type_60)(RwResEntry*);
typedef int(*type_61)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef unsigned char type_5[3];
typedef char type_8[16];
typedef float type_11[2];
typedef unsigned short type_13[3];
typedef char type_15[16];
typedef zGust* type_18[4];
typedef float type_20[4];
typedef float type_22[4];
typedef RwTexCoords* type_24[8];
typedef float type_26[2];
typedef xVec3 type_27[3];
typedef unsigned char type_28[3];
typedef float type_29[2];
typedef unsigned char type_30[3];
typedef unsigned short type_31[3];
typedef char type_33[4];
typedef float type_39[16];
typedef unsigned char type_42[2];
typedef xAnimMultiFileEntry type_43[1];
typedef float type_44[4];
typedef unsigned int type_45[4];
typedef xVec3 type_48[4];
typedef xParInterp type_49[1];
typedef RwTexCoords* type_50[8];
typedef unsigned char type_51[3];
typedef RpLight* type_52[2];
typedef RwFrame* type_54[2];
typedef char type_55[32];
typedef xCollis type_56[18];
typedef xParInterp type_57[4];
typedef char type_58[32];
typedef xParInterp type_59[4];
typedef RxCluster type_62[1];

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct zGust : xBase
{
	unsigned int flags;
	zGustAsset* asset;
	zVolume* volume;
	zVolume* fx_volume;
	float debris_timer;
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
	type_35 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_32 eventFunc;
};

struct zGustAsset : xBaseAsset
{
	unsigned int flags;
	unsigned int volumeID;
	unsigned int effectID;
	xVec3 vel;
	float fade;
	float partMod;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct zVolume : xVolume
{
};

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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
	type_9 base2Name;
	type_12 id2Name;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_43 Files;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xSerial
{
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct _class_0
{
	float t;
	float u;
	float v;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_13 vertIndex;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct zParEmitter : xParEmitter
{
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_22 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_34 update;
	type_34 endUpdate;
	type_38 bupdate;
	type_40 move;
	type_41 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_47 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_45 pad;
};

struct xParGroup
{
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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

struct zGustData
{
	unsigned int gust_on;
	type_18 g;
	type_20 lerp;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_36 Conditional;
	type_36 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_23 callback;
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
	type_28 emit_pad;
	type_30 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_49 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_57 color_birth;
	type_59 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
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
	type_50 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_7 StateCallback;
	type_10 BeforeAnimMatrices;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_24 texCoords;
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

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xParSys
{
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_51 pad;
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
	type_52 light;
	type_54 light_frame;
	int memlvl;
};

struct rxReq
{
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_42 NumAnims;
	void** RawData;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_29 BilinearLerp;
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xParInterp
{
	type_26 val;
	unsigned int interp;
	float freq;
	float oofreq;
};

struct xShadowSimplePoly
{
	type_27 vert;
	xVec3 norm;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_60 destroyNotify;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_44 wt;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_25 Callback;
};

struct RpTriangle
{
	type_31 vertIndex;
	short matIndex;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xJSPHeader
{
	type_33 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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

struct xSphere
{
	xVec3 center;
	float r;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_39 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_48 corner;
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
	type_56 colls;
	type_37 post;
	type_46 depenq;
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

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xFFX
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

struct xSurface
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_55 name;
	type_58 mask;
	unsigned int filterAddressing;
	int refCount;
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
	type_0 renderCallBack;
	RxPipeline* pipeline;
};

struct RpSector
{
	int type;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagEmitSphere
{
	float radius;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_11 radius;
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

struct anim_coll_data
{
};

struct xVolumeAsset : xBaseAsset
{
	unsigned int flags;
	xBound bound;
	float rot;
	float xpivot;
	float zpivot;
};

struct RxNodeMethods
{
	type_16 nodeBody;
	type_17 nodeInit;
	type_19 nodeTerm;
	type_21 pipelineNodeInit;
	type_2 pipelineNodeTerm;
	type_6 pipelineNodeConfig;
	type_14 configMsgHandler;
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

struct _tagEmitRect
{
	float x_len;
	float z_len;
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
	type_62 clusters;
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct RwLinkList
{
	RwLLLink link;
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

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_5 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

type_8 buffer;
type_15 buffer;
zGust* gusts;
unsigned short ngusts;
zParEmitter* sGustDustEmitter;
zParEmitter* sGustDebrisEmitter;
type_61 zGustEventCB;
unsigned int gActiveHeap;

void zGustUpdateFX(float seconds);
void UpdateGustFX(zGust* g, float seconds);
int zGustEventCB(xBase* to, unsigned int toEvent);
void zGustLoad(zGust* ent, xSerial* s);
void zGustSave(zGust* ent, xSerial* s);
void zGustUpdateEnt(xEnt* ent, float dt, void* gdata);
zGust* zGustGetGust(unsigned short n);
void zGustSetup();
void zGustInit();

// zGustUpdateFX__Ff
// Start address: 0x17f090
void zGustUpdateFX(float seconds)
{
	int i;
}

// UpdateGustFX__FP5zGustf
// Start address: 0x17f110
void UpdateGustFX(zGust* g, float seconds)
{
	xBBox* box;
	xParEmitterCustomSettings info;
	zParEmitter* e;
	int total_debris;
	int vol_area;
	int i;
}

// zGustEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x17f460
int zGustEventCB(xBase* to, unsigned int toEvent)
{
	zGust* g;
}

// zGustLoad__FP5zGustP7xSerial
// Start address: 0x17f530
void zGustLoad(zGust* ent, xSerial* s)
{
}

// zGustSave__FP5zGustP7xSerial
// Start address: 0x17f540
void zGustSave(zGust* ent, xSerial* s)
{
}

// zGustUpdateEnt__FP4xEntP6xScenefPv
// Start address: 0x17f550
void zGustUpdateEnt(xEnt* ent, float dt, void* gdata)
{
	unsigned int i;
	unsigned int j;
	unsigned int minidx;
	float minlerp;
	zGustData* data;
	xCollis coll;
	float lerpinc;
	xVec3* gvel;
	xVec3 dpos;
}

// zGustGetGust__FUs
// Start address: 0x17f8d0
zGust* zGustGetGust(unsigned short n)
{
}

// zGustSetup__Fv
// Start address: 0x17f900
void zGustSetup()
{
	unsigned short i;
}

// zGustInit__Fv
// Start address: 0x17f9c0
void zGustInit()
{
	unsigned short i;
	unsigned int size;
	zGustAsset* asset;
}

