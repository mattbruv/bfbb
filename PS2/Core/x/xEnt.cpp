typedef struct xEnt;
typedef struct zFragAsset;
typedef struct xModelInstance;
typedef struct xScene;
typedef struct RwV3d;
typedef struct RxHeap;
typedef struct xCutsceneZbufferHack;
typedef struct xVec3;
typedef struct xEntFrame;
typedef struct xPortalAsset;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RxPipelineNode;
typedef struct RpClump;
typedef struct xGridBound;
typedef struct zSurfaceProps;
typedef enum _tagRumbleType;
typedef struct xEntAsset;
typedef enum _zPlayerType;
typedef struct xQuat;
typedef struct RpGeometry;
typedef struct RwTexCoords;
typedef struct zShrapnelAsset;
typedef struct xUpdateCullGroup;
typedef struct RpWorldSector;
typedef struct xCollis;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct xAnimState;
typedef struct iEnv;
typedef struct zSurfUVFX;
typedef struct xBase;
typedef struct analog_data;
typedef struct RpMorphTarget;
typedef struct xAnimTable;
typedef struct xAnimPlay;
typedef struct RxPipelineRequiresCluster;
typedef struct tag_iFile;
typedef struct _tagEmitSphere;
typedef struct xAnimFile;
typedef struct RpPolygon;
typedef struct xLightKit;
typedef struct zEnt;
typedef struct xAnimEffect;
typedef struct zEntDestructObjAsset;
typedef struct xLinkAsset;
typedef struct xJSPNodeInfo;
typedef struct xGroup;
typedef struct RpVertexNormal;
typedef struct xAnimSingle;
typedef struct RxPipeline;
typedef struct zJumpParam;
typedef struct zPlayerGlobals;
typedef struct XCSNNosey;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zCheckPoint;
typedef struct xCutsceneMgr;
typedef struct xEntCollis;
typedef struct zSurfAssetBase;
typedef struct xVec4;
typedef struct zEntHangable;
typedef struct RpMeshHeader;
typedef struct RwSurfaceProperties;
typedef struct xEnv;
typedef struct RwMatrixTag;
typedef struct xCutsceneMgrAsset;
typedef struct xMemPool;
typedef struct RwResEntry;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xClumpCollBSPBranchNode;
typedef struct zFrag;
typedef struct xCutscene;
typedef struct zPlayerCarryInfo;
typedef struct xVec2;
typedef struct rxReq;
typedef struct _tagEmitRect;
typedef struct xUpdateCullMgr;
typedef struct xShadowSimplePoly;
typedef struct zPlatform;
typedef struct RwRaster;
typedef struct zPlayerSettings;
typedef enum RxClusterValidityReq;
typedef struct zEntDestructObj;
typedef struct xJSPHeader;
typedef struct RwTexture;
typedef struct RpTriangle;
typedef struct xRay3;
typedef struct xCutsceneBreak;
typedef struct xSurface;
typedef struct xCamera;
typedef struct zCutsceneMgr;
typedef struct RpAtomic;
typedef struct xMat4x3;
typedef struct xSerial;
typedef struct zSurfMatFX;
typedef struct xUpdateCullEnt;
typedef struct RwCamera;
typedef enum RxNodeDefEditable;
typedef struct zAssetPickupTable;
typedef struct _zEnv;
typedef struct xModelPool;
typedef enum RxClusterValid;
typedef enum zFragType;
typedef struct anim_coll_data;
typedef struct xLightKitLight;
typedef struct xPEEntBound;
typedef struct rxHeapFreeBlock;
typedef struct xClumpCollBSPTree;
typedef struct xRot;
typedef struct zParEmitter;
typedef struct xEntBoulder;
typedef struct xShadowSimpleCache;
typedef struct _tagEmitLine;
typedef struct xFFX;
typedef struct xEnvAsset;
typedef struct xEntShadow;
typedef struct xAnimTransition;
typedef struct xAnimTransitionList;
typedef struct xBound;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagxRumble;
typedef struct xModelTag;
typedef enum RwCameraProjection;
typedef struct RpLight;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct iFogParams;
typedef struct xEntDrive;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef enum RpWorldRenderOrder;
typedef struct RpMaterial;
typedef struct xParEmitter;
typedef struct RpWorld;
typedef enum _tagPadState;
typedef struct tag_xFile;
typedef struct _tagEmitVolume;
typedef struct xQCData;
typedef struct xAnimMultiFile;
typedef struct RwSphere;
typedef struct xParEmitterAsset;
typedef struct RpSector;
typedef struct xGlobals;
typedef struct xGrid;
typedef struct zLasso;
typedef struct xModelBucket;
typedef struct xParGroup;
typedef struct RwTexDictionary;
typedef struct xParEmitterPropsAsset;
typedef struct RxOutputSpec;
typedef struct _tagxPad;
typedef struct zScene;
typedef struct xSFXAsset;
typedef struct xMat3x3;
typedef struct RwFrame;
typedef struct RxClusterRef;
typedef struct xCutsceneTime;
typedef struct RwObject;
typedef struct _tagEmitOffsetPoint;
typedef struct RwLLLink;
typedef struct _tagPadAnalog;
typedef struct xGroupAsset;
typedef struct RxIoSpec;
typedef struct tri_data_0;
typedef struct _tagiPad;
typedef struct xCutsceneInfo;
typedef struct zSurfTextureAnim;
typedef struct xCutsceneData;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xBaseAsset;
typedef struct xPEVCyl;
typedef struct RwPlane;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xParSys;
typedef struct xParInterp;
typedef struct RxCluster;
typedef struct zSurfacePropTexAnim;
typedef struct RxPipelineNodeParam;
typedef struct xGridIterator;
typedef struct _class_0;
typedef struct RxPacket;
typedef struct tri_data_1;
typedef struct xClumpCollBSPVertInfo;
typedef struct zGlobals;
typedef enum RwFogType;
typedef struct xClumpCollBSPTriangle;
typedef struct xPEEntBone;
typedef struct RwRGBAReal;
typedef struct zGlobalSettings;
typedef struct RpInterpolator;
typedef struct RwObjectHasFrame;
typedef struct xAnimMultiFileBase;
typedef struct RwLinkList;
typedef struct xCutsceneZbuffer;
typedef struct zPlayerLassoInfo;
typedef struct _zPortal;
typedef struct zLedgeGrabParams;
typedef struct zSurfacePropUVFX;
typedef struct zSurfColorFX;
typedef struct RwV2d;
typedef struct _class_1;
typedef struct RpMaterialList;
typedef struct xPECircle;
typedef enum _zPlayerWallJumpState;
typedef union _class_2;
typedef struct xBBox;

typedef void(*type_1)(zFrag*, zFragAsset*);
typedef void(*type_2)(xAnimState*, xAnimSingle*, void*);
typedef unsigned int(*type_8)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_10)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_11)(zShrapnelAsset*, xModelInstance*, xVec3*, type_1);
typedef RpClump*(*type_15)(RpClump*, void*);
typedef int(*type_17)(RxNodeDefinition*);
typedef void(*type_20)(RxNodeDefinition*);
typedef int(*type_22)(RxPipelineNode*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef void(*type_26)(RxPipelineNode*);
typedef unsigned int(*type_27)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_28)(RxPipelineNode*, RxPipeline*);
typedef xBase*(*type_32)(unsigned int);
typedef void(*type_33)(xAnimPlay*, xQuat*, xVec3*, int);
typedef char*(*type_37)(xBase*);
typedef char*(*type_39)(unsigned int);
typedef RpAtomic*(*type_44)(RpAtomic*);
typedef void(*type_45)(xEnt*, xScene*, float);
typedef void(*type_50)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_52)(xEnt*, xVec3*);
typedef void(*type_55)(xEnt*, xScene*, float, xEntFrame*);
typedef xEnt*(*type_58)(xEnt*, xScene*, void*);
typedef unsigned int(*type_59)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_60)(void*);
typedef void(*type_61)(xEnt*);
typedef unsigned int(*type_67)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_68)(xEnt*, xScene*, float, void*);
typedef void(*type_69)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_73)(zEntDestructObj&, void*);
typedef int(*type_82)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_83)(xEnt*, xScene*, float);
typedef xEnt*(*type_86)(xEnt*, xScene*, void*);
typedef RpWorldSector*(*type_88)(RpWorldSector*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void(*type_93)(xEnt*, xVec3*);
typedef RwCamera*(*type_100)(RwCamera*);
typedef void(*type_102)(xMemPool*, void*);
typedef void(*type_109)(RwResEntry*);
typedef void(*type_113)(xEnt*);
typedef void(*type_115)(xEnt*, xVec3*, xMat4x3*);
typedef unsigned int(*type_116)(void*, void*);
typedef RwObjectHasFrame*(*type_124)(RwObjectHasFrame*);
typedef void(*type_125)(xAnimPlay*, xAnimState*);
typedef void(*type_133)(zEntDestructObj&, void*);

typedef xAnimMultiFileEntry type_0[1];
typedef float type_3[22];
typedef float type_4[22];
typedef xCutsceneZbuffer type_5[4];
typedef RwFrustumPlane type_6[6];
typedef xParInterp type_7[1];
typedef unsigned int type_9[2];
typedef unsigned int type_12[15];
typedef unsigned int type_13[15];
typedef RwV3d type_14[8];
typedef unsigned int type_16[2];
typedef unsigned int type_18[15];
typedef char type_19[128];
typedef unsigned int type_21[2];
typedef RwTexCoords* type_23[8];
typedef unsigned int type_25[15];
typedef zSurfacePropTexAnim type_29[2];
typedef analog_data type_30[2];
typedef xParInterp type_31[4];
typedef zSurfacePropUVFX type_34[2];
typedef xParInterp type_35[4];
typedef xVec3 type_36[3];
typedef unsigned int type_38[72];
typedef char type_40[4];
typedef char type_41[32];
typedef xBase* type_42[72];
typedef unsigned short type_43[3];
typedef char type_46[80];
typedef unsigned char type_47[2];
typedef float type_48[16];
typedef unsigned char type_49[3];
typedef float type_51[4];
typedef unsigned int type_53[2];
typedef unsigned char type_54[2];
typedef float type_56[6];
typedef xVec4 type_57[12];
typedef float type_62[3];
typedef float type_63[3];
typedef char type_64[16];
typedef xModelTag type_65[2];
typedef float type_66[3];
typedef unsigned int type_70[4];
typedef char type_71[16];
typedef RwTexCoords* type_72[8];
typedef xEnt* type_74[111];
typedef zSurfTextureAnim type_75[2];
typedef xVec3 type_76[4];
typedef int type_77[2];
typedef float type_78[4];
typedef unsigned int type_79[2];
typedef type_77 type_80[3];
typedef type_80 type_81[4];
typedef zSurfUVFX type_84[2];
typedef RpLight* type_85[2];
typedef RwFrame* type_87[2];
typedef unsigned char type_89[3];
typedef char type_90[128];
typedef type_90 type_91[6];
typedef unsigned char type_94[3];
typedef unsigned char type_95[14];
typedef xModelTag type_96[4];
typedef unsigned char type_97[3];
typedef char type_98[32];
typedef xModelInstance* type_99[14];
typedef xCollis type_101[18];
typedef char type_103[80];
typedef unsigned char type_104[2];
typedef unsigned char type_105[4];
typedef char type_106[32];
typedef char type_107[32];
typedef float type_108[15];
typedef float type_110[2];
typedef float type_111[15];
typedef unsigned char type_112[3];
typedef unsigned int type_114[15];
typedef unsigned char type_117[22];
typedef unsigned char type_118[22];
typedef float type_119[2];
typedef unsigned char type_120[3];
typedef char type_121[16];
typedef RxCluster type_122[1];
typedef char type_123[16];
typedef float type_126[2];
typedef unsigned short type_127[3];
typedef xVec3 type_128[5];
typedef xVec3 type_129[60];
typedef float type_130[2];
typedef unsigned char type_131[5];
typedef unsigned char type_132[2];

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
	type_45 update;
	type_45 endUpdate;
	type_52 bupdate;
	type_55 move;
	type_61 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_69 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zFragAsset
{
	zFragType type;
	unsigned int id;
	type_79 parentID;
	float lifetime;
	float delay;
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
	type_32 resolvID;
	type_37 base2Name;
	type_39 id2Name;
};

struct RwV3d
{
	float x;
	float y;
	float z;
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

struct xCutsceneZbufferHack
{
	char* name;
	type_5 times;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_15 callback;
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

struct zSurfaceProps
{
	zSurfAssetBase* asset;
	unsigned int texanim_flags;
	type_29 texanim;
	unsigned int uvfx_flags;
	type_34 uvfx;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xQuat
{
	xVec3 v;
	float s;
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
	type_72 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct zShrapnelAsset
{
	int fassetCount;
	unsigned int shrapnelID;
	type_11 initCB;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_23 texCoords;
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
		tri_data_1 tri;
	};
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
	type_70 pad;
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
	type_24 BeforeEnter;
	type_2 StateCallback;
	type_33 BeforeAnimMatrices;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_85 light;
	type_87 light_frame;
	int memlvl;
};

struct zSurfUVFX
{
	int mode;
	float rot;
	float rot_spd;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_82 eventFunc;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_33 BeforeAnimMatrices;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct tag_iFile
{
	unsigned int flags;
	type_19 path;
	int fd;
	int offset;
	int length;
};

struct _tagEmitSphere
{
	float radius;
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
	type_132 NumAnims;
	void** RawData;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_127 vertIndex;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_27 Callback;
};

struct zEntDestructObjAsset
{
	float animSpeed;
	unsigned int initAnimState;
	unsigned int health;
	unsigned int spawnItemID;
	unsigned int dflags;
	unsigned char collType;
	unsigned char fxType;
	type_104 pad;
	float blast_radius;
	float blast_strength;
	unsigned int shrapnelID_destroy;
	unsigned int shrapnelID_hit;
	unsigned int sfx_destroy;
	unsigned int sfx_hit;
	unsigned int hitModel;
	unsigned int destroyModel;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_51 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_119 BilinearLerp;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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
	type_65 BubbleWandTag;
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
	type_96 HangPawTag;
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
	type_13 Inv_PatsSock;
	type_18 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_25 Inv_LevelPickups;
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
	type_53 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_74 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_95 sb_model_indices;
	type_99 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
};

struct st_SERIAL_CLIENTINFO
{
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
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
	type_101 colls;
	type_50 post;
	type_67 depenq;
};

struct zSurfAssetBase : xBaseAsset
{
	unsigned char game_damage_type;
	unsigned char game_sticky;
	unsigned char game_damage_flags;
	unsigned char surf_type;
	unsigned char phys_pad;
	unsigned char sld_start;
	unsigned char sld_stop;
	unsigned char phys_flags;
	float friction;
	zSurfMatFX matfx;
	zSurfColorFX colorfx;
	unsigned int texture_anim_flags;
	type_75 texture_anim;
	unsigned int uvfx_flags;
	type_84 uvfx;
	unsigned char on;
	type_89 surf_pad;
	float oob_delay;
	float walljump_scale_xz;
	float walljump_scale_y;
	float damage_timer;
	float damage_bounce;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct zEntHangable
{
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_108 startTime;
	type_111 endTime;
	type_114 emitID;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_102 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_109 destroyNotify;
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

struct zFrag
{
};

struct xCutscene
{
	xCutsceneInfo* Info;
	xCutsceneData* Data;
	unsigned int* TimeChunkOffs;
	unsigned int* Visibility;
	xCutsceneBreak* BreakList;
	xCutsceneTime* Play;
	xCutsceneTime* Stream;
	unsigned int Waiting;
	unsigned int BadReadPause;
	float BadReadSpeed;
	void* RawBuf;
	void* AlignBuf;
	float Time;
	float CamTime;
	unsigned int PlayIndex;
	unsigned int Ready;
	int DataLoading;
	unsigned int GotData;
	unsigned int ShutDownWait;
	float PlaybackSpeed;
	unsigned int Opened;
	tag_xFile File;
	int AsyncID;
	void* MemBuf;
	void* MemCurr;
	unsigned int SndStarted;
	unsigned int SndNumChannel;
	type_9 SndChannelReq;
	type_16 SndAssetID;
	type_21 SndHandle;
	XCSNNosey* cb_nosey;
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

struct xVec2
{
	float x;
	float y;
};

struct rxReq
{
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
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
	type_60 activateCB;
	type_60 deactivateCB;
};

struct xShadowSimplePoly
{
	type_36 vert;
	xVec3 norm;
};

struct zPlatform
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

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_56 MoveSpeed;
	type_62 AnimSneak;
	type_63 AnimWalk;
	type_66 AnimRun;
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
	type_105 talk_filter;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zEntDestructObj : zEnt
{
	zEntDestructObjAsset* dasset;
	unsigned int state;
	unsigned int healthCnt;
	float fx_timer;
	zParEmitter* fx_emitter;
	float respawn_timer;
	unsigned int throw_target;
	zShrapnelAsset* shrapnel_destroy;
	zShrapnelAsset* shrapnel_hit;
	xModelInstance* base_model;
	xModelInstance* hit_model;
	xModelInstance* destroy_model;
	type_73 destroy_notify;
	void* notify_context;
	xSFXAsset* sfx_destroy;
	xSFXAsset* sfx_hit;
};

struct xJSPHeader
{
	type_40 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_106 name;
	type_107 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpTriangle
{
	type_43 vertIndex;
	short matIndex;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

struct xCutsceneBreak
{
	float Time;
	int Index;
};

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
	type_112 pad;
	void* moprops;
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
	type_57 frustplane;
};

struct zCutsceneMgr : xCutsceneMgr
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
	type_44 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct zSurfMatFX
{
	unsigned int flags;
	unsigned int bumpmapID;
	unsigned int envmapID;
	float shininess;
	float bumpiness;
	unsigned int dualmapID;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_116 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_92 beginUpdate;
	type_100 endUpdate;
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
	type_6 frustumPlanes;
	RwBBox frustumBoundBox;
	type_14 frustumCorners;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zAssetPickupTable
{
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

enum zFragType
{
	eFragInactive,
	eFragGroup,
	eFragShrapnel,
	eFragParticle,
	eFragProjectile,
	eFragLightning,
	eFragSound,
	eFragShockwave,
	eFragCount,
	eFragForceSize = 0x7fffffff
};

struct anim_coll_data
{
	unsigned int flags;
	unsigned int bones;
	xMat4x3 old_mat;
	xMat4x3 new_mat;
	unsigned int verts_size;
	xVec3* verts;
	xVec3* normals;
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct zParEmitter : xParEmitter
{
};

struct xEntBoulder
{
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
	type_76 corner;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct xFFX
{
	unsigned int flags;
	type_68 doEffect;
	void* fdata;
	xFFX* next;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_126 radius;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_59 Conditional;
	type_59 Callback;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_78 wt;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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
	type_94 emit_pad;
	type_97 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
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
	type_88 renderCallBack;
	RxPipeline* pipeline;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct tag_xFile
{
	type_41 relname;
	tag_iFile ps;
	void* user_data;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_0 Files;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct RpSector
{
	int type;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_91 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_98 sceneStart;
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

struct xGrid
{
	unsigned char ingrid_id;
	type_120 pad;
	unsigned short nx;
	unsigned short nz;
	float minx;
	float minz;
	float maxx;
	float maxz;
	float csizex;
	float csizez;
	float inv_csizex;
	float inv_csizez;
	float maxr;
	xGridBound** cells;
	xGridBound* other;
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
	type_128 lastRefs;
	type_131 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xParGroup
{
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_7 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_31 color_birth;
	type_35 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagxPad
{
	type_117 value;
	type_118 last_value;
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
	type_3 up_tmr;
	type_4 down_tmr;
	type_30 analog;
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
	type_38 baseCount;
	type_42 baseList;
	_zEnv* zen;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
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

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct _tagiPad
{
	int port;
};

struct xCutsceneInfo
{
	unsigned int Magic;
	unsigned int AssetID;
	unsigned int NumData;
	unsigned int NumTime;
	unsigned int MaxModel;
	unsigned int MaxBufEven;
	unsigned int MaxBufOdd;
	unsigned int HeaderSize;
	unsigned int VisCount;
	unsigned int VisSize;
	unsigned int BreakCount;
	unsigned int pad;
	type_121 SoundLeft;
	type_123 SoundRight;
};

struct zSurfTextureAnim
{
	unsigned short pad;
	unsigned short mode;
	unsigned int group;
	float speed;
};

struct xCutsceneData
{
	unsigned int DataType;
	unsigned int AssetID;
	unsigned int ChunkSize;
	union
	{
		unsigned int FileOffset;
		void* DataPtr;
	};
};

struct RxNodeMethods
{
	type_10 nodeBody;
	type_17 nodeInit;
	type_20 nodeTerm;
	type_22 pipelineNodeInit;
	type_26 pipelineNodeTerm;
	type_28 pipelineNodeConfig;
	type_8 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct xParSys
{
};

struct xParInterp
{
	type_110 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct zSurfacePropTexAnim
{
	unsigned short mode;
	float speed;
	float frame;
	unsigned int group;
	int group_idx;
	xBase* group_ptr;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xGridIterator
{
	xGridBound** listhead;
	xGridBound* curcell;
	unsigned int delfound;
};

struct _class_0
{
	xVec3* verts;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_122 clusters;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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
	type_47 PowerUp;
	type_54 InitialPowerUp;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_124 sync;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_129 tranTable;
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

struct zSurfacePropUVFX
{
	int mode;
	float rot;
	float rot_spd;
	type_130 minmax_timer;
	xVec3 trans;
	xVec3 trans_spd;
	xVec3 scale;
	xVec3 scale_spd;
	xVec3 min;
	xVec3 max;
	xVec3 minmax_spd;
};

struct zSurfColorFX
{
	unsigned short flags;
	unsigned short mode;
	float speed;
};

struct RwV2d
{
	float x;
	float y;
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

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

type_64 buffer;
type_71 buffer;
char* g_xEnt_FMT;
float nsn_angle;
float sEntityTimePassed;
xBox all_ents_box;
int all_ents_box_init;
int setMaterialTextureRestore;
int sSetPipeline;
RxPipeline* oldPipe;
int xent_entent;
unsigned int gActiveHeap;
zGlobals globals;
xGrid npcs_grid;
xGrid colls_oso_grid;
xGrid colls_grid;
int gGridIterActive;
type_86 xEntCollCheckOneEntNoDepen;
type_133 stacked_owner_destroyed;
type_125 xAnimDefaultBeforeEnter;
xVec3 g_O3;
xScene* g_xSceneCur;
type_113 xEntRender;
type_83 xEntUpdate;
type_115 xEntDefaultTranslate;
type_93 xEntDefaultBoundUpdate;
xMat4x3 g_I3;

void xEntInitShadow(xEnt& ent, xEntShadow& shadow);
void xEntReposition(xEnt& ent, xMat4x3& mat);
unsigned char xEntValidType(unsigned char type);
void xEntAnimateCollision(xEnt& ent, unsigned char on);
xBox* xEntGetAllEntsBox();
void xEntSetNostepNormAngle(float angle);
void xEntCollideWalls(xEnt* p, xScene* sc, float dt);
void xEntCollideCeiling(xEnt* p, xScene* sc, float dt);
void xEntCollideFloor(xEnt* p, xScene* sc, float dt);
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data);
void xEntCollCheckNPCs(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckDyns(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckStats(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckByGrid(xEnt* p, xScene* sc, type_58 hitIt);
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, type_58 hitIt, xGrid* grid);
void xEntCollCheckEnv(xEnt* p, xScene* sc);
void xEntEndCollide(xEnt* ent, xScene* sc, float dt);
void xEntBeginCollide(xEnt* ent);
void xEntCollide(xEnt* ent, xScene* sc, float dt);
void xEntApplyPhysics(xEnt* ent, xScene* sc, float dt);
void xEntMove(xEnt* ent, xScene* sc, float dt);
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame);
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat);
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos);
void xEntEndUpdate(xEnt* ent, xScene* sc, float dt);
void xEntBeginUpdate(xEnt* ent, float dt);
void xEntUpdate(xEnt* ent, xScene* sc, float dt);
void xEntRender(xEnt* ent);
void xEntRestorePipeline(RpAtomic* model);
void xEntRestorePipeline(xModelInstance* model);
void xEntSetupPipeline(xSurface* surf, RpAtomic* model);
void xEntSetupPipeline(xModelInstance* model);
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel);
void xEntReset(xEnt* ent);
void xEntLoad(xEnt* ent, xSerial* s);
void xEntSave(xEnt* ent, xSerial* s);
void xEntSetup(xEnt* ent);
void stacked_owner_destroyed(void* context);
unsigned char collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float max_dist);
void xEntInitForType(xEnt* ent);
void xEntInit(xEnt* ent, xEntAsset* asset);
void xEntAddHittableFlag(xEnt* ent);
void xEntSceneExit();
void xEntSceneInit();
void xEntSetTimePassed(float sec);
void refresh(xEnt& ent);
void reset(xEnt& ent);

// xEntInitShadow__FR4xEntR10xEntShadow
// Start address: 0x1d0c30
void xEntInitShadow(xEnt& ent, xEntShadow& shadow)
{
}

// xEntReposition__FR4xEntRC7xMat4x3
// Start address: 0x1d0c80
void xEntReposition(xEnt& ent, xMat4x3& mat)
{
}

// xEntValidType__FUc
// Start address: 0x1d0f20
unsigned char xEntValidType(unsigned char type)
{
}

// xEntAnimateCollision__FR4xEntb
// Start address: 0x1d0f70
void xEntAnimateCollision(xEnt& ent, unsigned char on)
{
}

// xEntGetAllEntsBox__Fv
// Start address: 0x1d1010
xBox* xEntGetAllEntsBox()
{
}

// xEntSetNostepNormAngle__Ff
// Start address: 0x1d1020
void xEntSetNostepNormAngle(float angle)
{
}

// xEntCollideWalls__FP4xEntP6xScenef
// Start address: 0x1d1030
void xEntCollideWalls(xEnt* p, xScene* sc, float dt)
{
	xCollis* coll;
	xEnt* cent;
	unsigned char sidx;
	unsigned char idx;
	float sbr;
}

// xEntCollideCeiling__FP4xEntP6xScenef
// Start address: 0x1d1470
void xEntCollideCeiling(xEnt* p, xScene* sc, float dt)
{
	xCollis* coll;
	unsigned char idx;
	xCollis* ml;
	float sbr;
	xCollis* mf;
	xEnt* fent;
	float ceil_dist;
}

// xEntCollideFloor__FP4xEntP6xScenef
// Start address: 0x1d1730
void xEntCollideFloor(xEnt* p, xScene* sc, float dt)
{
	xCollis* coll;
	unsigned char idx;
	xCollis* ml;
	xVec3 motion;
	float mlen;
	int stepping;
	float sbr;
	xCollis* mf;
	xEnt* fent;
	float flr_dist;
	xEnt* fent;
}

// xEntCollCheckOneEntNoDepen__FP4xEntP6xScenePv
// Start address: 0x1d1bf0
xEnt* xEntCollCheckOneEntNoDepen(xEnt* ent, void* data)
{
	xEnt* p;
	xCollis* coll;
	unsigned int modl_coll;
	xBound tmp;
	xBound* bptr;
	unsigned char ncolls;
	xVec3* upper;
	xVec3* lower;
	unsigned char idx;
	float rsum;
	float dx;
	float dy;
	float dz;
	float hsqr;
}

// xEntCollCheckNPCs__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2120
void xEntCollCheckNPCs(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckDyns__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2170
void xEntCollCheckDyns(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckStats__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d21c0
void xEntCollCheckStats(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckNPCsByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2210
void xEntCollCheckNPCsByGrid(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckByGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEnt
// Start address: 0x1d2260
void xEntCollCheckByGrid(xEnt* p, xScene* sc, type_58 hitIt)
{
}

// xEntCollCheckOneGrid__FP4xEntP6xScenePFP4xEntP6xScenePv_P4xEntP5xGrid
// Start address: 0x1d22f0
void xEntCollCheckOneGrid(xEnt* p, xScene* sc, type_58 hitIt, xGrid* grid)
{
	xGridIterator it;
	int px;
	int pz;
	xGridBound* cell;
	float clcenterx;
	float clcenterz;
	int i;
	int _x;
	int _z;
	type_81 offs;
	int k;
}

// xEntCollCheckEnv__FP4xEntP6xScene
// Start address: 0x1d28b0
void xEntCollCheckEnv(xEnt* p, xScene* sc)
{
	xCollis* coll;
	unsigned char ncolls;
}

// xEntEndCollide__FP4xEntP6xScenef
// Start address: 0x1d2950
void xEntEndCollide(xEnt* ent, xScene* sc, float dt)
{
}

// xEntBeginCollide__FP4xEntP6xScenef
// Start address: 0x1d2980
void xEntBeginCollide(xEnt* ent)
{
	unsigned char idx;
	xCollis* coll;
}

// xEntCollide__FP4xEntP6xScenef
// Start address: 0x1d2ac0
void xEntCollide(xEnt* ent, xScene* sc, float dt)
{
	xCollis* coll;
	float h_dot_n;
	float depen_len;
}

// xEntApplyPhysics__FP4xEntP6xScenef
// Start address: 0x1d2e30
void xEntApplyPhysics(xEnt* ent, xScene* sc, float dt)
{
	xVec3 dposvel;
	float tfric;
	float tdrag;
	float dposXZ;
	float scaleXZ;
	float scaleY;
}

// xEntMove__FP4xEntP6xScenef
// Start address: 0x1d30f0
void xEntMove(xEnt* ent, xScene* sc, float dt)
{
	xEntFrame* dframe;
	xVec3 dpos;
	xMat4x3 invOldmat;
	xMat4x3 deltaMat;
}

// xEntMotionToMatrix__FP4xEntP9xEntFrame
// Start address: 0x1d3310
void xEntMotionToMatrix(xEnt* ent, xEntFrame* frame)
{
}

// xEntDefaultTranslate__FP4xEntP5xVec3P7xMat4x3
// Start address: 0x1d3600
void xEntDefaultTranslate(xEnt* ent, xVec3* dpos, xMat4x3* dmat)
{
}

// xEntDefaultBoundUpdate__FP4xEntP5xVec3
// Start address: 0x1d37c0
void xEntDefaultBoundUpdate(xEnt* ent, xVec3* pos)
{
	xBound* bound;
}

// xEntEndUpdate__FP4xEntP6xScenef
// Start address: 0x1d3840
void xEntEndUpdate(xEnt* ent, xScene* sc, float dt)
{
	xVec3* mpos;
	xVec3* upos;
}

// xEntBeginUpdate__FP4xEntP6xScenef
// Start address: 0x1d3950
void xEntBeginUpdate(xEnt* ent, float dt)
{
}

// xEntUpdate__FP4xEntP6xScenef
// Start address: 0x1d3a70
void xEntUpdate(xEnt* ent, xScene* sc, float dt)
{
}

// xEntRender__FP4xEnt
// Start address: 0x1d3c10
void xEntRender(xEnt* ent)
{
	int shadowOutside;
	xVec3 shadVec;
}

// xEntRestorePipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x1d3d80
void xEntRestorePipeline(RpAtomic* model)
{
}

// xEntRestorePipeline__FP14xModelInstance
// Start address: 0x1d3dd0
void xEntRestorePipeline(xModelInstance* model)
{
}

// xEntSetupPipeline__FP8xSurfaceP8RpAtomic
// Start address: 0x1d3e20
void xEntSetupPipeline(xSurface* surf, RpAtomic* model)
{
	zSurfaceProps* pp;
	xGroup* g;
	unsigned int texid;
	RwTexture* texptr;
	xGroup* g;
	unsigned int texid;
	RwTexture* texptr;
	RwTexture* texptr;
}

// xEntSetupPipeline__FP14xModelInstance
// Start address: 0x1d4020
void xEntSetupPipeline(xModelInstance* model)
{
}

// xEntLoadModel__FP4xEntP8RpAtomic
// Start address: 0x1d4030
xModelInstance* xEntLoadModel(xEnt* ent, RpAtomic* imodel)
{
	xModelInstance* model;
}

// xEntReset__FP4xEnt
// Start address: 0x1d40e0
void xEntReset(xEnt* ent)
{
	xMat4x3 frame;
	xModelInstance* minst;
	type_12 receive_models;
	char @4889;
}

// xEntLoad__FP4xEntP7xSerial
// Start address: 0x1d46e0
void xEntLoad(xEnt* ent, xSerial* s)
{
	int b;
}

// xEntSave__FP4xEntP7xSerial
// Start address: 0x1d4750
void xEntSave(xEnt* ent, xSerial* s)
{
}

// xEntSetup__FP4xEnt
// Start address: 0x1d47c0
void xEntSetup(xEnt* ent)
{
	xSurface* surf;
	xModelInstance* minst;
	int i;
	xLinkAsset* la;
	xEnt* dent;
}

// stacked_owner_destroyed__18@unnamed@xEnt_cpp@FR15zEntDestructObjPv
// Start address: 0x1d4bf0
void stacked_owner_destroyed(void* context)
{
}

// collide_downward__18@unnamed@xEnt_cpp@FR5xVec3RP4xEntR6xSceneR4xEntf
// Start address: 0x1d4c30
unsigned char collide_downward(xVec3& loc, xEnt&* hit, xScene& s, xEnt& ent, float max_dist)
{
	xRay3 ray;
	unsigned char old_bound_type;
	float old_bound_radius;
	xCollis coll;
}

// xEntInitForType__FP4xEnt
// Start address: 0x1d4e50
void xEntInitForType(xEnt* ent)
{
}

// xEntInit__FP4xEntP9xEntAsset
// Start address: 0x1d5070
void xEntInit(xEnt* ent, xEntAsset* asset)
{
}

// xEntAddHittableFlag__FP4xEnt
// Start address: 0x1d5180
void xEntAddHittableFlag(xEnt* ent)
{
	unsigned int i;
}

// xEntSceneExit__Fv
// Start address: 0x1d5260
void xEntSceneExit()
{
}

// xEntSceneInit__Fv
// Start address: 0x1d5270
void xEntSceneInit()
{
}

// xEntSetTimePassed__Ff
// Start address: 0x1d5280
void xEntSetTimePassed(float sec)
{
}

// refresh__Q218@unnamed@xEnt_cpp@9anim_collFR4xEnt
// Start address: 0x1d5290
void refresh(xEnt& ent)
{
	anim_coll_data& ac;
	xMat4x3& bone_mat;
}

// reset__Q218@unnamed@xEnt_cpp@9anim_collFR4xEnt
// Start address: 0x1d5400
void reset(xEnt& ent)
{
	xModelInstance& model;
	xMat4x3& mat;
	anim_coll_data& ac;
	xBox& box;
	xVec3 size;
	float max_size;
}

