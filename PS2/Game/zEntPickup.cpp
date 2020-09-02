typedef struct RxPipelineNode;
typedef struct xAnimActiveEffect;
typedef struct zEntPickup;
typedef struct RpAtomic;
typedef struct xPlatformAsset;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct xParGroup;
typedef struct RpMaterialList;
typedef struct RwObjectHasFrame;
typedef struct xAnimPlay;
typedef struct xSerial;
typedef struct xFFX;
typedef struct xCoef3;
typedef struct xEntMotionAsset;
typedef struct xPEEntBone;
typedef struct xMovePointAsset;
typedef struct xEntBoulder;
typedef struct xAnimTransition;
typedef struct zLODTable;
typedef struct rxHeapFreeBlock;
typedef struct xModelPool;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpMaterial;
typedef struct xAnimMultiFile;
typedef struct RwV2d;
typedef struct xAnimState;
typedef struct xParEmitterAsset;
typedef struct xEntAsset;
typedef struct xModelBucket;
typedef struct RxNodeDefinition;
typedef struct xParSys;
typedef struct _tagKeyShake;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPTree;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpClump;
typedef struct xParEmitterPropsAsset;
typedef struct RpWorld;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xEnt;
typedef struct RpGeometry;
typedef struct xBase;
typedef struct xEntSplineData;
typedef struct xCounterAsset;
typedef struct RxPipelineNodeParam;
typedef struct RpWorldSector;
typedef struct _zPortal;
typedef struct xVec3;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxHeap;
typedef struct xClumpCollBSPBranchNode;
typedef struct _zUI;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct zParEmitter;
typedef struct RewardList;
typedef struct xMat4x3;
typedef struct xQuat;
typedef struct xEntFrame;
typedef struct RpMorphTarget;
typedef struct xEntMotionPenData;
typedef struct xPECircle;
typedef struct xClumpCollBSPTriangle;
typedef struct xPortalAsset;
typedef struct RpPolygon;
typedef struct _xCounter;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RwFrame;
typedef struct rxHeapBlockHeader;
typedef struct _tagxPad;
typedef struct xAnimEffect;
typedef struct xMovePoint;
typedef struct xEnvAsset;
typedef struct RpVertexNormal;
typedef struct xParCmdAsset;
typedef struct xParCmdTex;
typedef struct xEntPickupAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntMPData;
typedef struct zLasso;
typedef struct xShadowSimplePoly;
typedef struct ShinySparkly;
typedef struct xEntDrive;
typedef struct _tagxRumble;
typedef struct zPlatform;
typedef struct xEnv;
typedef struct zGlobals;
typedef struct xAnimTable;
typedef struct RpMeshHeader;
typedef struct RpLight;
typedef struct RwResEntry;
typedef struct xMemPool;
typedef struct zPlatFMRunTime;
typedef enum _CurrentPlayer;
typedef struct zGlobalSettings;
typedef struct zAssetPickup;
typedef struct xGroup;
typedef struct xLinkAsset;
typedef struct xVec4;
typedef struct _tagEmitSphere;
typedef struct xSpline3;
typedef struct xUpdateCullEnt;
typedef struct xCollis;
typedef struct xScene;
typedef struct zEntPickup_cbData;
typedef struct zAssetPickupTable;
typedef struct RwSurfaceProperties;
typedef struct xEntMotionERData;
typedef struct RwMatrixTag;
typedef struct zPlayerLassoInfo;
typedef union _class_0;
typedef struct zCutsceneMgr;
typedef struct RpTriangle;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct rxReq;
typedef struct zScene;
typedef struct zLedgeGrabParams;
typedef struct xParSysAsset;
typedef enum RxClusterValidityReq;
typedef struct xShadowSimpleCache;
typedef struct xPar;
typedef struct xEntCollis;
typedef enum _zPlayerWallJumpState;
typedef struct _tagEmitRect;
typedef struct xAnimFile;
typedef struct xBaseAsset;
typedef struct iEnv;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xRot;
typedef struct xAnimTransitionList;
typedef struct zEnt;
typedef struct xParCmd;
typedef struct zUIAsset;
typedef struct xJSPNodeInfo;
typedef enum _tagRumbleType;
typedef struct xModelTag;
typedef enum _zPlayerType;
typedef struct tri_data_0;
typedef struct xUpdateCullGroup;
typedef struct zPickupAuraInfo;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct xEntMotionOrbitData;
typedef struct RwTexture;
typedef struct analog_data;
typedef enum RwCameraProjection;
typedef enum RpWorldRenderOrder;
typedef enum RxClusterForcePresent;
typedef struct xPEEntBound;
typedef struct xCylinder;
typedef struct xBound;
typedef struct _tagEmitLine;
typedef struct xSurface;
typedef struct xBox;
typedef struct xParEmitterCustomSettings;
typedef struct RxClusterDefinition;
typedef struct xGrid;
typedef struct xJSPHeader;
typedef struct xVec2;
typedef struct RpSector;
typedef struct zCheckPoint;
typedef struct xEntShadow;
typedef struct zPlayerGlobals;
typedef struct xQCData;
typedef struct anim_coll_data;
typedef struct xBBox;
typedef struct xEntMechData;
typedef struct RwSphere;
typedef struct zPlayerCarryInfo;
typedef struct xEntMotionSplineData;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct RwTexDictionary;
typedef struct zPlayerSettings;
typedef struct RxOutputSpec;
typedef struct RwCamera;
typedef struct _tagEmitVolume;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct basic_rect;
typedef struct RwObject;
typedef struct xEntMotionMPData;
typedef struct RwLLLink;
typedef struct xEntERData;
typedef struct xGridBound;
typedef struct RxIoSpec;
typedef struct iFogParams;
typedef struct RxNodeMethods;
typedef struct xParEmitter;
typedef struct _tagEmitOffsetPoint;
typedef struct xQCControl;
typedef struct xAnimMultiFileEntry;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct _class_1;
typedef struct xEntMotionMechData;
typedef struct zJumpParam;
typedef struct tri_data_1;
typedef struct RxCluster;
typedef struct xEntPenData;
typedef enum _tagPadState;
typedef struct zEntHangable;
typedef struct RxPacket;
typedef struct xPEVCyl;
typedef struct xCoef;
typedef struct RpInterpolator;
typedef struct xGlobals;
typedef struct xAnimMultiFileBase;
typedef enum RwFogType;
typedef struct xEntOrbitData;
typedef struct iColor_tag;
typedef struct xParInterp;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef struct _class_2;
typedef struct xEntMotion;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int(*type_1)(RxPipelineNode*);
typedef unsigned int(*type_2)(xAnimTransition*, xAnimSingle*, void*);
typedef RwCamera*(*type_6)(RwCamera*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_11)(RxPipelineNode*);
typedef void(*type_20)(xAnimState*, xAnimSingle*, void*);
typedef int(*type_21)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef unsigned int(*type_30)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_34)(RxPipelineNode*, RxPipelineNodeParam*);
typedef unsigned int(*type_36)(void*, void*);
typedef int(*type_40)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_42)(RxNodeDefinition*);
typedef void(*type_44)(xAnimPlay*, xAnimState*);
typedef void(*type_46)(RxNodeDefinition*);
typedef void(*type_49)(void*, xParGroup*);
typedef void(*type_50)(void*);
typedef unsigned int(*type_51)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_54)(unsigned int);
typedef char*(*type_55)(xBase*);
typedef void(*type_56)(xAnimPlay*, xQuat*, xVec3*, int);
typedef char*(*type_57)(unsigned int);
typedef void(*type_59)(xEnt*, xScene*, float);
typedef RpAtomic*(*type_62)(RpAtomic*);
typedef void(*type_64)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_65)(xEnt*, xVec3*);
typedef void(*type_67)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_69)(xEnt*);
typedef int(*type_71)(xEnt*, void*);
typedef unsigned int(*type_75)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_77)(xEnt*, xVec3*, xMat4x3*);
typedef RpWorldSector*(*type_96)(RpWorldSector*);
typedef void(*type_112)(xMemPool*, void*);
typedef int(*type_119)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_120)(RwResEntry*);
typedef void(*type_126)(zEntPickup*, xScene*, float);

typedef char type_3[128];
typedef float type_4[12];
typedef type_3 type_5[6];
typedef unsigned short type_8[3];
typedef float type_9[4];
typedef float type_10[12];
typedef unsigned char type_12[3];
typedef unsigned int type_13[20];
typedef unsigned char type_14[14];
typedef xModelTag type_15[4];
typedef unsigned char type_16[2];
typedef char type_17[32];
typedef xAnimMultiFileEntry type_18[1];
typedef xModelInstance* type_19[14];
typedef xModelBucket** type_22[3];
typedef zEntPickup* type_23[10];
typedef type_23 type_24[5];
typedef float type_25[3];
typedef unsigned char type_26[4];
typedef unsigned short type_27[2];
typedef RwFrustumPlane type_29[6];
typedef float type_31[2];
typedef float type_32[2];
typedef unsigned char type_33[2];
typedef float type_35[2];
typedef RwV3d type_37[8];
typedef RwTexCoords* type_38[8];
typedef _tagKeyShake type_39[4];
typedef unsigned char type_41[22];
typedef float type_43[2];
typedef unsigned char type_45[22];
typedef float type_47[2];
typedef xVec3 type_48[3];
typedef xParInterp type_52[1];
typedef RewardList type_53[20];
typedef xVec3 type_58[5];
typedef unsigned short type_60[3];
typedef unsigned char type_61[5];
typedef float type_63[16];
typedef char type_66[16];
typedef xVec3 type_68[60];
typedef xParInterp type_70[4];
typedef xParInterp type_72[4];
typedef char type_73[16];
typedef float type_74[22];
typedef float type_76[22];
typedef unsigned int type_78[15];
typedef xVec3 type_79[4];
typedef unsigned char type_80[4];
typedef unsigned int type_81[15];
typedef unsigned char type_82[3];
typedef RwTexCoords* type_83[8];
typedef char type_84[512];
typedef unsigned int type_85[72];
typedef char type_86[4];
typedef unsigned int type_87[15];
typedef float type_88[4];
typedef xVec3 type_89[64];
typedef xBase* type_90[72];
typedef unsigned int type_91[4];
typedef unsigned char type_92[2];
typedef analog_data type_93[2];
typedef zPickupAuraInfo type_94[15];
typedef unsigned char type_95[3];
typedef unsigned char type_97[2];
typedef zLODTable type_98[5];
typedef ShinySparkly type_99[7];
typedef unsigned char type_100[3];
typedef xCollis type_101[18];
typedef float type_102[4];
typedef xVec4 type_103[12];
typedef float type_104[4];
typedef unsigned char type_105[2];
typedef unsigned int type_106[2];
typedef xVec3 type_107[64];
typedef unsigned char type_108[2];
typedef float type_109[6];
typedef float type_110[3];
typedef char type_111[512];
typedef float type_113[3];
typedef char type_114[32];
typedef xModelTag type_115[2];
typedef float type_116[3];
typedef char type_117[32];
typedef RpLight* type_118[2];
typedef RwFrame* type_121[2];
typedef float type_122[2];
typedef xEnt* type_123[111];
typedef float type_124[12];
typedef float type_125[4];
typedef float type_127[12];
typedef unsigned char type_128[3];
typedef unsigned char type_129[3];
typedef float type_130[2];
typedef xLightKitLight type_131[2];
typedef unsigned char type_132[2];
typedef float type_133[2];
typedef float type_134[12];
typedef unsigned char type_135[3];
typedef RxCluster type_136[1];
typedef float type_137[12];

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

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct zEntPickup : zEnt
{
	xShadowSimpleCache simpShadow_embedded;
	unsigned int state;
	zAssetPickup* p;
	void* anim;
	float animTime;
	float timer;
	float shake_timer;
	xVec3 shake_pos;
	int snackGateInfoDisplayed;
	float fx_timer;
	xPar* fx_par;
	zParEmitter* fx_emit;
	float fx_scale;
	xVec3 grab_pos;
	unsigned int flyflags;
	int flg_opts;
	xVec3 vel;
	xVec3 droppos;
	xBase* followTarget;
	xVec3 followOffset;
	xBase* dropParent;
	xEnt* useThisEntPos;
	xEntDrive drv;
	unsigned short pickupFlags;
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
	type_62 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct xPlatformAsset
{
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct _tagPadAnalog
{
	char x;
	char y;
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
	type_49 draw;
	xParCmdTex* m_cmdTex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_7 sync;
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
	type_56 BeforeAnimMatrices;
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

struct xFFX
{
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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

struct xEntBoulder
{
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_2 Conditional;
	type_2 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct zLODTable
{
	xModelBucket** baseBucket;
	float noRenderDist;
	type_22 lodBucket;
	type_25 lodDist;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	type_50 activateCB;
	type_50 deactivateCB;
};

struct _tagiPad
{
	int port;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_18 Files;
};

struct RwV2d
{
	float x;
	float y;
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
	type_44 BeforeEnter;
	type_20 StateCallback;
	type_56 BeforeAnimMatrices;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct _tagKeyShake
{
	xVec3 orig_pos;
	float shake_timer;
	float shake_it;
	_zUI* ui;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_122 BilinearLerp;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_28 callback;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_52 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_70 color_birth;
	type_72 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
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
	type_96 renderCallBack;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_59 update;
	type_59 endUpdate;
	type_65 bupdate;
	type_67 move;
	type_69 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_77 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_83 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_40 eventFunc;
};

struct xEntSplineData
{
	int unknown;
};

struct xCounterAsset : xBaseAsset
{
	short count;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_38 texCoords;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
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

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	unsigned int uiFlags;
	unsigned int uiButton;
	unsigned short preUpdateIndex;
	unsigned short updateIndex;
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

struct zParEmitter : xParEmitter
{
};

struct RewardList
{
	unsigned char active;
	float timer;
	xVec3* ppos;
	xVec3 pos;
	unsigned int num;
	unsigned int currRequest;
	type_13 pickups;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xQuat
{
	xVec3 v;
	float s;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_33 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct xClumpCollBSPTriangle
{
	_class_0 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_8 vertIndex;
};

struct _xCounter : xBase
{
	xCounterAsset* asset;
	short count;
	unsigned char state;
	unsigned char counterFlags;
};

struct RwTexCoords
{
	float u;
	float v;
};

struct RwV3d
{
	float x;
	float y;
	float z;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_91 pad;
};

struct _tagxPad
{
	type_41 value;
	type_45 last_value;
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
	type_74 up_tmr;
	type_76 down_tmr;
	type_93 analog;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_51 Callback;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_92 pad;
	float delay;
	xSpline3* spl;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xParCmdAsset
{
	unsigned int type;
	unsigned char enabled;
	unsigned char mode;
	type_132 pad;
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

struct xEntPickupAsset
{
	unsigned int pickupHash;
	unsigned short pickupFlags;
	unsigned short pickupValue;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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
	type_58 lastRefs;
	type_61 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xShadowSimplePoly
{
	type_48 vert;
	xVec3 norm;
};

struct ShinySparkly
{
	unsigned short pickupType;
	unsigned short pickupIndex;
	float radius;
	float std_rate;
	float fly_rate;
	unsigned char br;
	unsigned char bg;
	unsigned char bb;
	unsigned char ba;
	unsigned char dr;
	unsigned char dg;
	unsigned char db;
	unsigned char da;
	unsigned int envmapID;
	float shininess;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct zPlatform : zEnt
{
	xPlatformAsset* passet;
	xEntMotion motion;
	unsigned short state;
	unsigned short plat_flags;
	float tmr;
	int ctr;
	xMovePoint* src;
	xModelInstance* am;
	xModelInstance* bm;
	int moving;
	xEntDrive drv;
	zPlatFMRunTime* fmrt;
	float pauseMult;
	float pauseDelta;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_120 destroyNotify;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_112 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_124 tmrs;
	type_127 ttms;
	type_134 atms;
	type_137 dtms;
	type_4 vms;
	type_10 dss;
};

enum _CurrentPlayer
{
	eCurrentPlayerSpongeBob,
	eCurrentPlayerPatrick,
	eCurrentPlayerSandy,
	eCurrentPlayerCount
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
	type_105 PowerUp;
	type_108 InitialPowerUp;
};

struct zAssetPickup
{
	unsigned int pickupHash;
	unsigned char pickupType;
	unsigned char pickupIndex;
	unsigned short pickupFlags;
	unsigned int quantity;
	unsigned int modelID;
	unsigned int animID;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_9 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct _tagEmitSphere
{
	float radius;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_36 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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
		_class_2 tuv;
		tri_data_1 tri;
	};
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
	type_54 resolvID;
	type_55 base2Name;
	type_57 id2Name;
};

struct zEntPickup_cbData
{
	xScene* sc;
	float dt;
};

struct zAssetPickupTable
{
	unsigned int Magic;
	unsigned int Count;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct zCutsceneMgr
{
};

struct RpTriangle
{
	type_60 vertIndex;
	short matIndex;
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
	type_63 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct rxReq
{
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
	type_85 baseCount;
	type_90 baseList;
	_zEnv* zen;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_68 tranTable;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_79 corner;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_80 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_97 m_texIdx;
	type_100 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_102 m_cvel;
	type_104 m_cfl;
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
	type_64 post;
	type_75 depenq;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
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
	type_16 NumAnims;
	void** RawData;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_118 light;
	type_121 light_frame;
	int memlvl;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xParCmd
{
	unsigned int flag;
	xParCmdAsset* tasset;
};

struct zUIAsset : xEntAsset
{
	unsigned int uiFlags;
	type_27 dim;
	unsigned int textureID;
	type_32 uva;
	type_35 uvb;
	type_43 uvc;
	type_47 uvd;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_88 wt;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct zPickupAuraInfo
{
	float size;
	float yoffset;
	iColor_tag color;
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

struct st_SERIAL_CLIENTINFO
{
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_114 name;
	type_117 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_129 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
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
	type_12 pad;
	void* moprops;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_95 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xGrid
{
	unsigned char ingrid_id;
	type_82 pad;
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

struct xJSPHeader
{
	type_86 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xVec2
{
	float x;
	float y;
};

struct RpSector
{
	int type;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_133 radius;
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
	type_115 BubbleWandTag;
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
	type_15 HangPawTag;
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
	type_78 Inv_PatsSock;
	type_81 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_87 Inv_LevelPickups;
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
	type_106 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_123 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_14 sb_model_indices;
	type_19 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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

struct anim_coll_data
{
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct RwSphere
{
	RwV3d center;
	float radius;
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

struct xEntMotionSplineData
{
	int unknown;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_103 frustplane;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_109 MoveSpeed;
	type_110 AnimSneak;
	type_113 AnimWalk;
	type_116 AnimRun;
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
	type_26 talk_filter;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_6 endUpdate;
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
	type_29 frustumPlanes;
	RwBBox frustumBoundBox;
	type_37 frustumCorners;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
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

struct RxNodeMethods
{
	type_34 nodeBody;
	type_42 nodeInit;
	type_46 nodeTerm;
	type_1 pipelineNodeInit;
	type_11 pipelineNodeTerm;
	type_21 pipelineNodeConfig;
	type_30 configMsgHandler;
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
	type_128 emit_pad;
	type_135 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct _class_1
{
	xVec3* verts;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct tri_data_1
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

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct zEntHangable
{
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_136 clusters;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xCoef
{
	type_125 a;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_5 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_17 sceneStart;
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
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

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xParInterp
{
	type_130 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct _class_2
{
	float t;
	float u;
	float v;
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

type_66 buffer;
type_73 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
zParEmitter* gEmitShinySparkles;
float SPARKLE_MAX_RATE;
type_99 ShinySparklyTable;
unsigned int gEnableRewardsQueue;
float sSpatulaGrabbedSpinMult;
float sSpatulaGrabbedLife;
float sUnderwearFade;
RwMatrixTag sPickupOrientation;
type_24 rewardPickups;
type_53 sRewards;
type_98 sRewardLOD;
type_39 sKeyShake;
RpLight* sPickupDirectionalLight;
RpLight* sPickupAmbientLight;
xLightKit sPickupLightKit;
type_131 sPickupLightKitLight;
xEntFrame gPickupFrame;
xEntCollis gPickupCollis;
_xCounter* keyCounter;
zEntPickup* sSpatulaAlreadyGiven;
zEntPickup* sSpatulaBungeeDeferred;
type_94 zPickupAuraTable;
zGlobals globals;
unsigned int gPTankDisable;
int gSpongeBall;
unsigned char* giAnimScratch;
xQCControl xqc_def_ctrl;
_CurrentPlayer gCurrentPlayer;
type_71 CheckPickupAgainstPlayer;
xGrid colls_grid;
type_119 zEntPickupEventCB;
type_126 zEntPickup_Update;
xMat4x3 g_I3;

void zEntPickup_RewardPostSetup();
void zEntPickup_SpawnNRewards(unsigned int* pickups, unsigned int num);
void zEntPickup_SpawnNRewards(unsigned int* pickups, unsigned int num, xVec3* ppos);
void spawnNRewards(unsigned int* pickups, unsigned int num, xVec3* ppos);
void zEntPickup_SceneUpdate(float dt);
void zEntPickup_SceneReset();
void zEntPickup_SceneEnter();
unsigned int rewardRequest(unsigned int shinyType, xVec3* ppos);
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, unsigned int pcount, float dt);
void zEntPickup_RenderList(zEntPickup* plist, unsigned int pcount);
void zEntPickup_RenderOne(xEnt* ent);
void zEntPickup_Render(zEntPickup* plist, unsigned int pcount);
void zEntPickup_UpdateFX(zEntPickup* ent, float dt);
void zEntPickup_Drop(zEntPickup* ent);
void zEntPickup_FlushGrabbed();
void zEntPickup_Load(zEntPickup* ent, xSerial* s);
void zEntPickup_Save(zEntPickup* ent, xSerial* s);
void zEntPickup_Reset(zEntPickup* ent);
void zEntPickup_Update(zEntPickup* ent, xScene* sc, float dt);
void zEntPickup_GiveAllRewardsNow();
void collectPickup(zEntPickup* ent);
void zEntPickup_GivePickup(zEntPickup* ent);
int CheckPickupAgainstPlayer(xEnt* cbent);
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, float dt);
int zEntPickupEventCB(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget);
void zEntPickup_Setup();
void zEntPickup_Setup(zEntPickup* p);
void zEntPickup_ShinySparklyInit(RpAtomic* data);
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset);
void zEntPickupInit(void* ent, void* asset);
void zEntPickup_Startup();
void PickupFallPhysics(zEntPickup* ent, xScene* sc, float dt);

// zEntPickup_RewardPostSetup__Fv
// Start address: 0x138230
void zEntPickup_RewardPostSetup()
{
	int i;
	int j;
	zLODTable* lod;
}

// zEntPickup_SpawnNRewards__FPUiUi5xVec3
// Start address: 0x138330
void zEntPickup_SpawnNRewards(unsigned int* pickups, unsigned int num)
{
	xVec3 pos;
}

// zEntPickup_SpawnNRewards__FPUiUiP5xVec3
// Start address: 0x138370
void zEntPickup_SpawnNRewards(unsigned int* pickups, unsigned int num, xVec3* ppos)
{
	xVec3 pos;
}

// spawnNRewards__FPUiUiP5xVec35xVec3
// Start address: 0x1383b0
void spawnNRewards(unsigned int* pickups, unsigned int num, xVec3* ppos)
{
	xVec3 pos;
	int i;
	unsigned int j;
}

// zEntPickup_SceneUpdate__Ff
// Start address: 0x138570
void zEntPickup_SceneUpdate(float dt)
{
	int i;
	unsigned int ret;
	int i;
}

// zEntPickup_SceneReset__Fv
// Start address: 0x1389c0
void zEntPickup_SceneReset()
{
}

// zEntPickup_SceneEnter__Fv
// Start address: 0x1389e0
void zEntPickup_SceneEnter()
{
}

// rewardRequest__FUiP5xVec35xVec3
// Start address: 0x138a00
unsigned int rewardRequest(unsigned int shinyType, xVec3* ppos)
{
	xVec3 pos;
	int i;
	zEntPickup* p;
}

// zEntPickup_UpdateFlyToInterface__FP10zEntPickupUif
// Start address: 0x138b30
void zEntPickup_UpdateFlyToInterface(zEntPickup* ent, unsigned int pcount, float dt)
{
	unsigned int i;
	zPickupAuraInfo* ai;
	xVec3 pos;
	ShinySparkly* sp;
	int j;
	xParEmitterCustomSettings info;
	int i;
	ShinySparkly* sp;
	xVec3 pos;
	int count;
	type_107 plist;
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	int num_verts;
	int j;
	int n;
	xVec3* ent_pos;
	float ydist;
}

// zEntPickup_RenderList__FP10zEntPickupUi
// Start address: 0x139420
void zEntPickup_RenderList(zEntPickup* plist, unsigned int pcount)
{
	unsigned int i;
	RpAtomic* imodel;
	int shadowResult;
	xVec3 shadVec;
	RwFrame* frame;
	RwV3d vec_scale;
	int alpha;
	float dist2;
	float dx__;
	float dy__;
	float dz__;
}

// zEntPickup_RenderOne__FP4xEnt
// Start address: 0x139860
void zEntPickup_RenderOne(xEnt* ent)
{
	zEntPickup* pickup;
	RpAtomic* imodel;
	int shadowResult;
	xVec3 shadVec;
	RwFrame* frame;
	RwV3d vec_scale;
}

// zEntPickup_Render__FP10zEntPickupUi
// Start address: 0x139aa0
void zEntPickup_Render(zEntPickup* plist, unsigned int pcount)
{
	unsigned int i;
	RwMatrixTag* imat;
}

// zEntPickup_UpdateFX__FP10zEntPickupP6xScenef
// Start address: 0x139c70
void zEntPickup_UpdateFX(zEntPickup* ent, float dt)
{
	zPickupAuraInfo* ai;
	xVec3 pos;
	xParEmitterCustomSettings info;
	ShinySparkly* sp;
	int i;
	int i;
	ShinySparkly* sp;
	xVec3 pos;
	int count;
	type_89 plist;
	xVec3* pp;
	RpGeometry* geom;
	xVec3* verts;
	int num_verts;
	int j;
	int n;
}

// zEntPickup_Drop__FP10zEntPickup
// Start address: 0x13a580
void zEntPickup_Drop(zEntPickup* ent)
{
	float c;
	type_31 sol;
	unsigned int solcnt;
}

// zEntPickup_FlushGrabbed__Fv
// Start address: 0x13a720
void zEntPickup_FlushGrabbed()
{
	zScene* s;
	zEntPickup* it;
	zEntPickup* end;
}

// zEntPickup_Load__FP10zEntPickupP7xSerial
// Start address: 0x13a860
void zEntPickup_Load(zEntPickup* ent, xSerial* s)
{
	int is_a_dropper;
	unsigned int state;
	int coll;
}

// zEntPickup_Save__FP10zEntPickupP7xSerial
// Start address: 0x13aa70
void zEntPickup_Save(zEntPickup* ent, xSerial* s)
{
}

// zEntPickup_Reset__FP10zEntPickup
// Start address: 0x13aae0
void zEntPickup_Reset(zEntPickup* ent)
{
}

// zEntPickup_Update__FP10zEntPickupP6xScenef
// Start address: 0x13abd0
void zEntPickup_Update(zEntPickup* ent, xScene* sc, float dt)
{
	xEntFrame frame;
	float duration;
	xQuat* q0;
	xVec3* t0;
	xVec3* p;
	xVec3* player;
	xVec3* player;
	zEnt* plent;
	float distsqr;
	float dx__;
	float dy__;
	float dz__;
	float chkdist;
	xVec3* dest;
	xVec3* src;
	xVec3 vec;
	float mult;
	float distMult;
	float yvel;
	float ydiff;
	xVec3 dp;
	float vel2;
	float dx__;
	float dy__;
	float dz__;
}

// zEntPickup_GiveAllRewardsNow__Fv
// Start address: 0x13b6b0
void zEntPickup_GiveAllRewardsNow()
{
	unsigned int i;
	unsigned int j;
	unsigned int total;
}

// collectPickup__FP10zEntPickup
// Start address: 0x13b8f0
void collectPickup(zEntPickup* ent)
{
}

// zEntPickup_GivePickup__FP10zEntPickup
// Start address: 0x13bbd0
void zEntPickup_GivePickup(zEntPickup* ent)
{
}

// CheckPickupAgainstPlayer__FP4xEntPv
// Start address: 0x13bee0
int CheckPickupAgainstPlayer(xEnt* cbent)
{
	zEntPickup* ent;
	float distance;
	zEnt* plent;
	float distsqr;
	float dx__;
	float dy__;
	float dz__;
	float chkdist;
	int i;
	float dist2_1;
	float dist2_2;
	float dx__;
	float dy__;
	float dz__;
	float dx__;
	float dy__;
	float dz__;
	int i;
}

// zEntPickup_CheckAllPickupsAgainstPlayer__FP6xScenef
// Start address: 0x13c910
void zEntPickup_CheckAllPickupsAgainstPlayer(xScene* sc, float dt)
{
	zEntPickup_cbData cbdata;
}

// zEntPickupEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x13c960
int zEntPickupEventCB(xBase* to, unsigned int toEvent, float* toParam, xBase* toParamWidget)
{
	zEntPickup* p;
	xEntFrame frame;
}

// zEntPickup_Setup__Fv
// Start address: 0x13ce30
void zEntPickup_Setup()
{
	zScene* zsc;
	unsigned int i;
	unsigned int j;
	xBase* base;
	zEntPickup* p;
	xVec3* srcPos;
}

// zEntPickup_Setup__FP10zEntPickup
// Start address: 0x13d030
void zEntPickup_Setup(zEntPickup* p)
{
}

// zEntPickup_ShinySparklyInit__FP8RpAtomic
// Start address: 0x13d040
void zEntPickup_ShinySparklyInit(RpAtomic* data)
{
}

// zEntPickupInit__FP10zEntPickupP9xEntAsset
// Start address: 0x13d080
void zEntPickupInit(zEntPickup* ent, xEntAsset* asset)
{
	xEntPickupAsset* pickupAsset;
	unsigned int i;
	unsigned int tmpsize;
	zAssetPickup* ptbl;
	RpAtomic* modelData;
	void* animData;
	RxPipeline* fastAtmPipe;
	RxPipeline* fastMatPipe;
	ShinySparkly* sp;
	int i;
	RpAtomic* atom;
	int found;
	int i;
	type_84 name;
	int j;
}

// zEntPickupInit__FPvPv
// Start address: 0x13d4f0
void zEntPickupInit(void* ent, void* asset)
{
}

// zEntPickup_Startup__Fv
// Start address: 0x13d500
void zEntPickup_Startup()
{
	RwFrame* frame;
	RwRGBAReal black;
	RwRGBAReal white;
}

// PickupFallPhysics__FP10zEntPickupP6xScenef
// Start address: 0x13d670
void PickupFallPhysics(zEntPickup* ent, xScene* sc, float dt)
{
}

