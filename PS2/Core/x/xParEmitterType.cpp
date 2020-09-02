typedef struct xParEmitterAsset;
typedef struct xGridBound;
typedef struct xMat4x3;
typedef struct xParEmitter;
typedef struct RwObjectHasFrame;
typedef struct RwMatrixTag;
typedef struct xEnt;
typedef struct xParCmd;
typedef struct xModelInstance;
typedef struct xVec3;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xParSys;
typedef struct xPar;
typedef struct RxPipelineNodeTopSortData;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xParGroup;
typedef struct xBase;
typedef struct xEntCollis;
typedef struct RxNodeDefinition;
typedef struct xLinkAsset;
typedef struct xVolumeAsset;
typedef struct RpAtomic;
typedef struct RwTexture;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimFile;
typedef struct xParEmitterPropsAsset;
typedef struct xParCmdTex;
typedef struct xScene;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct _class_0;
typedef struct xAnimSingle;
typedef struct xPEVCyl;
typedef struct RxPipelineNodeParam;
typedef struct tri_data;
typedef struct xAnimState;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct xEntShadow;
typedef struct xQuat;
typedef struct xVec2;
typedef struct xParInterp;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xSurface;
typedef struct RpInterpolator;
typedef struct rxHeapBlockHeader;
typedef struct xAnimMultiFileBase;
typedef struct xAnimEffect;
typedef struct xAnimTransition;
typedef struct RxPipelineRequiresCluster;
typedef struct xFFX;
typedef struct xPEEntBone;
typedef struct xAnimPlay;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xAnimMultiFile;
typedef struct RwSurfaceProperties;
typedef struct RpMaterial;
typedef struct xModelPool;
typedef struct rxReq;
typedef struct xParCmdAsset;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct RpClump;
typedef struct xPECircle;
typedef struct xVolume;
typedef struct RpGeometry;
typedef struct xEntAsset;
typedef struct xEnv;
typedef enum RxNodeDefEditable;
typedef struct RpMorphTarget;
typedef struct xCollis;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xEntFrame;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagEmitSphere;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct xMemPool;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xShadowSimplePoly;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpTriangle;
typedef struct xBound;
typedef struct xBaseAsset;
typedef struct _tagEmitRect;
typedef struct _xMat2x2;
typedef struct xMat3x3;
typedef struct RwSphere;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct RwTexDictionary;
typedef struct RwResEntry;
typedef struct RxOutputSpec;
typedef struct xShadowSimpleCache;
typedef struct xPEEntBound;
typedef struct xAnimTransitionList;
typedef struct RxClusterRef;
typedef struct xModelTag;
typedef struct RpLight;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct _tagEmitLine;
typedef struct RxIoSpec;
typedef struct xQCData;
typedef struct xBBox;
typedef struct RxNodeMethods;
typedef struct xModelBucket;
typedef struct _tagEmitVolume;
typedef struct RxCluster;
typedef struct xParSysAsset;
typedef struct RxPacket;
typedef struct anim_coll_data;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct _tagEmitOffsetPoint;

typedef xBase*(*type_0)(unsigned int);
typedef void(*type_1)(xEnt*, xScene*, float, xEntCollis*);
typedef RwObjectHasFrame*(*type_2)(RwObjectHasFrame*);
typedef unsigned int(*type_3)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_4)(RxPipelineNode*);
typedef char*(*type_5)(xBase*);
typedef void(*type_6)(xEnt*, xVec3*, xMat4x3*);
typedef char*(*type_7)(unsigned int);
typedef int(*type_8)(RxPipelineNode*, RxPipeline*);
typedef void(*type_11)(void*, xParGroup*);
typedef unsigned int(*type_12)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_15)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_18)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_21)(RxNodeDefinition*);
typedef void(*type_22)(RxNodeDefinition*);
typedef unsigned int(*type_23)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_24)(RxPipelineNode*);
typedef void(*type_28)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_29)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpClump*(*type_30)(RpClump*, void*);
typedef void(*type_32)(xAnimPlay*, xAnimState*);
typedef void(*type_34)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef void(*type_46)(xEnt*, xScene*, float);
typedef void(*type_49)(xEnt*, xVec3*);
typedef void(*type_50)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_51)(xEnt*);
typedef void(*type_55)(xMemPool*, void*);
typedef void(*type_58)(RwResEntry*);

typedef unsigned char type_9[3];
typedef char type_10[16];
typedef float type_13[2];
typedef float type_14[2];
typedef unsigned char type_16[3];
typedef char type_17[16];
typedef unsigned char type_19[3];
typedef float type_20[4];
typedef float type_25[2];
typedef unsigned char type_26[2];
typedef xAnimMultiFileEntry type_27[1];
typedef unsigned char type_31[4];
typedef xParInterp type_33[1];
typedef unsigned char type_35[2];
typedef unsigned char type_36[2];
typedef float type_37[3];
typedef unsigned char type_38[3];
typedef xVec3 type_39[3];
typedef unsigned short type_40[3];
typedef unsigned int type_41[4];
typedef xParInterp type_43[4];
typedef float type_44[4];
typedef xParInterp type_45[4];
typedef float type_47[4];
typedef float type_48[16];
typedef RwTexCoords* type_52[8];
typedef float type_53[4];
typedef xVec3 type_54[4];
typedef char type_56[32];
typedef char type_57[32];
typedef RxCluster type_59[1];
typedef xCollis type_60[18];

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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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
	type_16 emit_pad;
	type_19 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_2 sync;
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
	type_46 update;
	type_46 endUpdate;
	type_49 bupdate;
	type_50 move;
	type_51 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_6 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xParCmd
{
	unsigned int flag;
	xParCmdAsset* tasset;
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

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xParSys : xBase
{
	xParSysAsset* tasset;
	unsigned int cmdCount;
	xParCmd* cmd;
	xParSys* parent;
	xParGroup* group;
	unsigned char visible;
	RwTexture* txtr_particle;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_31 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_35 m_texIdx;
	type_38 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_44 m_cvel;
	type_47 m_cfl;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct xParGroup
{
	xPar* m_root;
	xPar* m_dead;
	int m_num_of_particles;
	unsigned char m_alive;
	unsigned char m_killWhenDead;
	unsigned char m_active;
	unsigned char m_visible;
	unsigned char m_culled;
	unsigned char m_priority;
	unsigned char m_flags;
	unsigned char m_regidx;
	xParGroup* m_next;
	xParGroup* m_prev;
	type_11 draw;
	xParCmdTex* m_cmdTex;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_29 eventFunc;
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
	type_60 colls;
	type_1 post;
	type_3 depenq;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_20 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xVolumeAsset
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
	type_42 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_56 name;
	type_57 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_26 NumAnims;
	void** RawData;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_33 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_43 color_birth;
	type_45 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct xParCmdTex : xParCmdAsset
{
	float x1;
	float y1;
	float x2;
	float y2;
	unsigned char birthMode;
	unsigned char rows;
	unsigned char cols;
	unsigned char unit_count;
	float unit_width;
	float unit_height;
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
	type_0 resolvID;
	type_5 base2Name;
	type_7 id2Name;
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

struct _class_0
{
	xVec3* verts;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_13 BilinearLerp;
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

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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
	type_32 BeforeEnter;
	type_28 StateCallback;
	type_34 BeforeAnimMatrices;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_25 radius;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xVec2
{
	float x;
	float y;
};

struct xParInterp
{
	type_14 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct xSurface
{
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_41 pad;
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
	type_12 Callback;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_23 Conditional;
	type_23 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xFFX
{
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
	type_34 BeforeAnimMatrices;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_27 Files;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct rxReq
{
};

struct xParCmdAsset
{
	unsigned int type;
	unsigned char enabled;
	unsigned char mode;
	type_36 pad;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_30 callback;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
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
	type_52 texCoords;
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

struct xEnv
{
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct _tagEmitSphere
{
	float radius;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_55 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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

struct xShadowSimplePoly
{
	type_39 vert;
	xVec3 norm;
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

struct RpTriangle
{
	type_40 vertIndex;
	short matIndex;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_9 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct _xMat2x2
{
	xVec2 right;
	xVec2 up;
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

struct RwSphere
{
	RwV3d center;
	float radius;
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
	type_48 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_58 destroyNotify;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
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
	type_54 corner;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_53 wt;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct RxNodeMethods
{
	type_18 nodeBody;
	type_21 nodeInit;
	type_22 nodeTerm;
	type_24 pipelineNodeInit;
	type_4 pipelineNodeTerm;
	type_8 pipelineNodeConfig;
	type_15 configMsgHandler;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct xParSysAsset : xBaseAsset
{
	unsigned int type;
	unsigned int parentParSysID;
	unsigned int textureID;
	unsigned char parFlags;
	unsigned char priority;
	unsigned short maxPar;
	unsigned char renderFunc;
	unsigned char renderSrcBlendMode;
	unsigned char renderDstBlendMode;
	unsigned char cmdCount;
	unsigned int cmdSize;
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

struct anim_coll_data
{
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

type_10 buffer;
type_17 buffer;

void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, float dt, xEnt* ent);
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, float dt, xMat4x3& mat);
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat);
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent);
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent);
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, float dt, xEnt* ent);
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, float dt, xVolume* vol);
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, float dt, int subtype);
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, float dt);
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a);
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, float dt);

// xParEmitterEmitEntBound__FP4xParP16xParEmitterAssetfPC4xEnt
// Start address: 0x2fe390
void xParEmitterEmitEntBound(xPar* p, xParEmitterAsset* a, float dt, xEnt* ent)
{
	xPEEntBound& region;
	xMat4x3& mat;
	xVec3 offset;
}

// xParEmitterEmitEntBone__FP4xParP16xParEmitterAssetfRC7xMat4x3
// Start address: 0x2fee80
void xParEmitterEmitEntBone(xPar* p, xParEmitterAsset* a, float dt, xMat4x3& mat)
{
	xPEEntBone& region;
	xVec3 offset;
}

// xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC7xMat4x3
// Start address: 0x2ff5e0
void xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xMat4x3& mat)
{
}

// xParEmitterTransformEntBone__FR5xVec3R5xVec3RC16xParEmitterAssetRC4xEnt
// Start address: 0x2ff720
xMat4x3* xParEmitterTransformEntBone(xVec3& loc, xVec3& vel, xParEmitterAsset& a, xEnt& ent)
{
	xMat4x3& root_mat;
	xMat4x3* mat;
	xMat4x3 buffer_mat;
}

// xParEmitterEmitOCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x2ff8b0
void xParEmitterEmitOCircle(xPar* p, xParEmitterAsset* a, float dt)
{
	float rr;
}

// xParEmitterEmitOCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffa10
void xParEmitterEmitOCircleEdge(xPar* p, xParEmitterAsset* a, float dt)
{
}

// xParEmitterEmitVCylEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x2ffb60
void xParEmitterEmitVCylEdge(xPar* p, xParEmitterAsset* a, float dt)
{
	float ang;
	xVec2 dir;
	xVec2 offset;
	float deflect;
}

// xParEmitterEmitOffsetPoint__FP11xParEmitterP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2ffda0
void xParEmitterEmitOffsetPoint(xParEmitter* pe, xPar* p, xParEmitterAsset* a, xEnt* ent)
{
}

// xParEmitterEmitEntity__FP4xParP16xParEmitterAssetfP4xEnt
// Start address: 0x2fff40
void xParEmitterEmitEntity(xPar* p, xParEmitterAsset* a, float dt, xEnt* ent)
{
	unsigned int size;
	xModelInstance* model;
	xVec3 loc;
	unsigned int which;
	xModelInstance* model;
	unsigned int size;
}

// xParEmitterEmitVolume__FP4xParP16xParEmitterAssetfP7xVolume
// Start address: 0x3001c0
void xParEmitterEmitVolume(xPar* p, xParEmitterAsset* a, float dt, xVolume* vol)
{
	xBound* b;
}

// xParEmitterEmitSphereEdge__FP4xParP16xParEmitterAssetfi
// Start address: 0x3003b0
void xParEmitterEmitSphereEdge(xPar* p, xParEmitterAsset* a, float dt, int subtype)
{
	xVec3 dirvec;
	xVec3 offset;
	xMat3x3 mat_rot;
}

// xParEmitterEmitSphere__FP4xParP16xParEmitterAssetf
// Start address: 0x300730
void xParEmitterEmitSphere(xPar* p, xParEmitterAsset* a, float dt)
{
	float yaw;
	float pitch;
	xVec3 dir;
}

// xParEmitterEmitLine__FP4xParP16xParEmitterAssetf
// Start address: 0x3009f0
void xParEmitterEmitLine(xPar* p, xParEmitterAsset* a, float dt)
{
	xVec3 vec;
	float len;
	float rand_len;
	float yaw;
	float pitch;
	xVec3 dir;
	float rr;
}

// xParEmitterEmitRectEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x300d50
void xParEmitterEmitRectEdge(xPar* p, xParEmitterAsset* a, float dt)
{
	float rand;
}

// xParEmitterEmitRect__FP4xParP16xParEmitterAssetf
// Start address: 0x300f50
void xParEmitterEmitRect(xPar* p, xParEmitterAsset* a, float dt)
{
}

// xParEmitterEmitCircle__FP4xParP16xParEmitterAssetf
// Start address: 0x301100
void xParEmitterEmitCircle(xPar* p, xParEmitterAsset* a, float dt)
{
	float rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	float rr;
	float dt_radius;
}

// xParEmitterEmitCircleEdge__FP4xParP16xParEmitterAssetf
// Start address: 0x301390
void xParEmitterEmitCircleEdge(xPar* p, xParEmitterAsset* a, float dt)
{
	float rot_amount;
	_xMat2x2 rot_mat;
	xVec2 vec2;
	float dt_radius;
}

// xParEmitterAngleVariation__FP4xParP16xParEmitterAsset
// Start address: 0x301610
void xParEmitterAngleVariation(xPar* p, xParEmitterAsset* a)
{
	xMat3x3 mat_rot;
	float ang_debrisCone;
	type_37 ang;
}

// xParEmitterEmitPoint__FP4xParP16xParEmitterAssetf
// Start address: 0x301730
void xParEmitterEmitPoint(xPar* p, xParEmitterAsset* a, float dt)
{
}

