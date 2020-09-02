typedef struct xCollis;
typedef struct xEnt;
typedef struct RpInterpolator;
typedef struct RxHeap;
typedef struct xModelInstance;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xUpdateCullEnt;
typedef struct _class_0;
typedef struct RxPipelineNode;
typedef struct xAnimTransitionList;
typedef struct zPlayerSettings;
typedef struct xBase;
typedef struct xQuat;
typedef struct xVec3;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct _tagxRumble;
typedef struct xAnimTable;
typedef struct zEnt;
typedef struct RxPipelineNodeTopSortData;
typedef struct xUpdateCullGroup;
typedef struct rxHeapBlockHeader;
typedef struct xEnv;
typedef struct xCamera;
typedef struct xAnimTransition;
typedef struct xEntCollis;
typedef struct RpPolygon;
typedef struct RxPipelineRequiresCluster;
typedef struct xEntAsset;
typedef struct cameraFX;
typedef struct RpMaterialList;
typedef struct xBaseAsset;
typedef struct xSweptSphere;
typedef struct xFFX;
typedef struct xJSPNodeInfo;
typedef struct xAnimState;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct zJumpParam;
typedef struct xBinaryCamera;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct _zEnv;
typedef struct xEntBoulder;
typedef enum _tagPadState;
typedef struct xClumpCollBSPBranchNode;
typedef struct zEntHangable;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct xEntFrame;
typedef struct RwMatrixTag;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef struct RpClump;
typedef struct xMat4x3;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xGlobals;
typedef struct rxReq;
typedef struct RpGeometry;
typedef struct zPlatform;
typedef struct xAnimSingle;
typedef struct RpWorldSector;
typedef struct xEnvAsset;
typedef struct RwRaster;
typedef struct xModelPool;
typedef struct xRay3;
typedef enum RxClusterValidityReq;
typedef struct _tagxPad;
typedef struct xQCData;
typedef struct zCutsceneMgr;
typedef struct RpMorphTarget;
typedef struct xJSPHeader;
typedef struct xShadowSimplePoly;
typedef struct xBound;
typedef struct xAnimMultiFileBase;
typedef struct zAssetPickupTable;
typedef struct RpVertexNormal;
typedef enum RxNodeDefEditable;
typedef struct _tagPadAnalog;
typedef enum RxClusterValid;
typedef struct xGroupAsset;
typedef struct rxHeapFreeBlock;
typedef struct xUpdateCullMgr;
typedef struct _tagiPad;
typedef struct xRot;
typedef struct xAnimEffect;
typedef struct RpMeshHeader;
typedef struct xEntBoulderAsset;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xLightKit;
typedef struct xScene;
typedef struct xLightKitLight;
typedef enum rxEmbeddedPacketState;
typedef struct xBBox;
typedef struct xSphere;
typedef struct xGrid;
typedef struct RpWorld;
typedef struct xShadowSimpleCache;
typedef struct tri_data_0;
typedef enum RwCameraProjection;
typedef struct xAnimMultiFile;
typedef enum RxClusterForcePresent;
typedef struct xCylinder;
typedef struct xAnimPlay;
typedef struct RwCamera;
typedef struct RpTriangle;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpLight;
typedef struct zLasso;
typedef struct xGridBound;
typedef struct iEnv;
typedef struct RwSphere;
typedef struct zGlobals;
typedef struct RwTexDictionary;
typedef struct _class_1;
typedef struct RxOutputSpec;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct xPortalAsset;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct xEntShadow;
typedef struct xLinkAsset;
typedef enum RpWorldRenderOrder;
typedef struct cameraFXTableEntry;
typedef struct RwObject;
typedef struct analog_data;
typedef struct RwLLLink;
typedef struct zLedgeGrabParams;
typedef struct RwFrame;
typedef struct RxIoSpec;
typedef struct anim_coll_data;
typedef struct RwTexture;
typedef struct xMemPool;
typedef struct RpSector;
typedef struct cameraFXZoom;
typedef enum _zPlayerWallJumpState;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xSurface;
typedef struct zone_data;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct xEntDrive;
typedef enum _tagRumbleType;
typedef struct RwPlane;
typedef enum _zPlayerType;
typedef struct xModelBucket;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct _zPortal;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct config;
typedef struct xModelTag;
typedef struct xClumpCollBSPTriangle;
typedef struct RwRGBAReal;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct RwObjectHasFrame;
typedef struct cameraFXShake;
typedef struct RwLinkList;
typedef struct zPlayerCarryInfo;
typedef struct iFogParams;
typedef struct RwV2d;
typedef struct tri_data_1;
typedef union _class_2;
typedef union xiMat4x3Union;
typedef struct xVec2;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_5)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_8)(void*);
typedef int(*type_9)(RxPipelineNode*, RxPipelineNodeParam*);
typedef xBase*(*type_11)(unsigned int);
typedef int(*type_13)(RxNodeDefinition*);
typedef char*(*type_15)(xBase*);
typedef void(*type_19)(RxNodeDefinition*);
typedef char*(*type_20)(unsigned int);
typedef int(*type_23)(RxPipelineNode*);
typedef void(*type_24)(RxPipelineNode*);
typedef int(*type_26)(RxPipelineNode*, RxPipeline*);
typedef unsigned int(*type_28)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RpClump*(*type_29)(RpClump*, void*);
typedef unsigned int(*type_38)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_41)(xEnt*, xScene*, float);
typedef void(*type_42)(xEnt*, xVec3*);
typedef void(*type_44)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_46)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_48)(xEnt*);
typedef void(*type_52)(xAnimState*, xAnimSingle*, void*);
typedef RpAtomic*(*type_53)(RpAtomic*);
typedef unsigned int(*type_54)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef unsigned int(*type_56)(void*, void*);
typedef void(*type_58)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_61)(cameraFX*, float, xMat4x3*, xMat4x3*);
typedef void(*type_63)(xAnimPlay*, xAnimState*);
typedef void(*type_64)(cameraFX*);
typedef RwCamera*(*type_67)(RwCamera*);
typedef void(*type_68)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef void(*type_69)(xAnimPlay*, xQuat*, xVec3*, int);
typedef RwCamera*(*type_71)(RwCamera*);
typedef void(*type_74)(xMemPool*, void*);
typedef RpWorldSector*(*type_78)(RpWorldSector*);
typedef void(*type_83)(RwResEntry*);
typedef RwObjectHasFrame*(*type_94)(RwObjectHasFrame*);

typedef float type_1[2];
typedef unsigned char type_2[2];
typedef unsigned int type_3[2];
typedef RwFrustumPlane type_4[6];
typedef unsigned char type_6[2];
typedef float type_7[6];
typedef float type_10[3];
typedef RwV3d type_12[8];
typedef unsigned int type_14[72];
typedef float type_16[3];
typedef xModelTag type_17[2];
typedef unsigned short type_18[3];
typedef xBase* type_21[72];
typedef float type_22[3];
typedef unsigned char type_25[2];
typedef xEnt* type_27[111];
typedef xVec3 type_30[3];
typedef char type_31[4];
typedef char type_32[128];
typedef type_32 type_33[6];
typedef RwTexCoords* type_34[8];
typedef float type_35[2];
typedef unsigned char type_36[14];
typedef xModelTag type_37[4];
typedef char type_39[32];
typedef xModelInstance* type_40[14];
typedef float type_43[16];
typedef cameraFX type_45[10];
typedef unsigned char type_47[2];
typedef xAnimMultiFileEntry type_49[1];
typedef unsigned char type_50[4];
typedef unsigned short type_51[3];
typedef unsigned int type_55[4];
typedef unsigned char type_57[22];
typedef xVec4 type_59[12];
typedef unsigned char type_60[22];
typedef xVec3 type_62[4];
typedef RpLight* type_65[2];
typedef RwFrame* type_66[2];
typedef RwTexCoords* type_70[8];
typedef xVec3 type_72[60];
typedef unsigned char type_73[3];
typedef xCollis type_75[18];
typedef float type_76[22];
typedef unsigned char type_77[3];
typedef char type_79[32];
typedef float type_80[22];
typedef float type_81[4];
typedef char type_82[32];
typedef unsigned int type_84[15];
typedef char type_85[16];
typedef unsigned int type_86[15];
typedef unsigned int type_87[15];
typedef xVec3 type_88[5];
typedef char type_89[16];
typedef RxCluster type_90[1];
typedef unsigned char type_91[5];
typedef cameraFXTableEntry type_92[3];
typedef analog_data type_93[2];
typedef float type_95[4];

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
		tri_data_0 tri;
	};
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
	type_41 update;
	type_41 endUpdate;
	type_42 bupdate;
	type_46 move;
	type_48 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_58 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_56 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct _class_0
{
	xVec3* verts;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_7 MoveSpeed;
	type_10 AnimSneak;
	type_16 AnimWalk;
	type_22 AnimRun;
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
	type_50 talk_filter;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_55 pad;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
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
	type_59 frustplane;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_38 Conditional;
	type_38 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_75 colls;
	type_44 post;
	type_54 depenq;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_18 vertIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct cameraFX
{
	int type;
	int flags;
	float elapsedTime;
	float maxTime;
	union
	{
		cameraFXShake shake;
		cameraFXZoom zoom;
	};
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xSweptSphere
{
	xVec3 start;
	xVec3 end;
	float radius;
	float dist;
	xiMat4x3Union basis;
	xiMat4x3Union invbasis;
	xBox box;
	xQCData qcd;
	float boxsize;
	float curdist;
	xVec3 contact;
	xVec3 polynorm;
	unsigned int oid;
	void* optr;
	xModelInstance* mptr;
	int hitIt;
	xVec3 worldPos;
	xVec3 worldContact;
	xVec3 worldNormal;
	xVec3 worldTangent;
	xVec3 worldPolynorm;
};

struct xFFX
{
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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
	type_63 BeforeEnter;
	type_52 StateCallback;
	type_69 BeforeAnimMatrices;
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

struct RpMaterial
{
	RwTexture* texture;
	RwRGBA color;
	RxPipeline* pipeline;
	RwSurfaceProperties surfaceProps;
	short refCount;
	short pad;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xBinaryCamera
{
	config cfg;
	xCamera* camera;
	xQuat cam_dir;
	xVec3* s1;
	xVec3* s2;
	float s2_radius;
	xVec2 stick_offset;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct xEntBoulder : xEnt
{
	xEntBoulderAsset* basset;
	xShadowSimpleCache simpShadow_embedded;
	xEntShadow entShadow_embedded;
	xVec3 localCenter;
	xVec3 vel;
	xVec3 rotVec;
	xVec3 force;
	xVec3 instForce;
	float angVel;
	float timeToLive;
	int hitpoints;
	float lastRolling;
	unsigned int rollingID;
	unsigned char collis_chk;
	unsigned char collis_pen;
	type_25 pad1;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct zEntHangable
{
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_47 NumAnims;
	void** RawData;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_29 callback;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_33 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_39 sceneStart;
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
	type_70 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct zPlatform
{
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_34 texCoords;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxPad
{
	type_57 value;
	type_60 last_value;
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
	type_76 up_tmr;
	type_80 down_tmr;
	type_93 analog;
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

struct zCutsceneMgr
{
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xJSPHeader
{
	type_31 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct xShadowSimplePoly
{
	type_30 vert;
	xVec3 norm;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_77 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct zAssetPickupTable
{
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagPadAnalog
{
	char x;
	char y;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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
	type_8 activateCB;
	type_8 deactivateCB;
};

struct _tagiPad
{
	int port;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_28 Callback;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xEntBoulderAsset
{
	float gravity;
	float mass;
	float bounce;
	float friction;
	float statFric;
	float maxVel;
	float maxAngVel;
	float stickiness;
	float bounceDamp;
	unsigned int flags;
	float killtimer;
	unsigned int hitpoints;
	unsigned int soundID;
	float volume;
	float minSoundVel;
	float maxSoundVel;
	float innerRadius;
	float outerRadius;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_83 destroyNotify;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_11 resolvID;
	type_15 base2Name;
	type_20 id2Name;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_43 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct xGrid
{
	unsigned char ingrid_id;
	type_73 pad;
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
	type_78 renderCallBack;
	RxPipeline* pipeline;
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
	type_62 corner;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_49 Files;
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
	type_69 BeforeAnimMatrices;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_67 beginUpdate;
	type_71 endUpdate;
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
	type_4 frustumPlanes;
	RwBBox frustumBoundBox;
	type_12 frustumCorners;
};

struct RpTriangle
{
	type_51 vertIndex;
	short matIndex;
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
	type_88 lastRefs;
	type_91 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_65 light;
	type_66 light_frame;
	int memlvl;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_2 PowerUp;
	type_6 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_14 baseCount;
	type_21 baseList;
	_zEnv* zen;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_1 radius;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_81 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct cameraFXTableEntry
{
	int type;
	type_61 func;
	type_64 funcKill;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_72 tranTable;
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

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct anim_coll_data
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_79 name;
	type_82 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_74 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RpSector
{
	int type;
};

struct cameraFXZoom
{
	float holdTime;
	float vel;
	float accel;
	float distance;
	unsigned int mode;
	float velCur;
	float distanceCur;
	float holdTimeCur;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct RxNodeMethods
{
	type_9 nodeBody;
	type_13 nodeInit;
	type_19 nodeTerm;
	type_23 pipelineNodeInit;
	type_24 pipelineNodeTerm;
	type_26 pipelineNodeConfig;
	type_5 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xSurface
{
};

struct zone_data
{
	float distance;
	float height;
	float height_focus;
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
	tri_data_1 tri;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_90 clusters;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct config
{
	zone_data zone_rest;
	zone_data zone_above;
	zone_data zone_below;
	float move_speed;
	float turn_speed;
	float stick_speed;
	float stick_yaw_vel;
	float max_yaw_vel;
	float margin_angle;
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_95 wt;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
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
	type_17 BubbleWandTag;
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
	type_37 HangPawTag;
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
	type_84 Inv_PatsSock;
	type_86 Inv_PatsSock_Max;
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
	type_3 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_27 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_36 sb_model_indices;
	type_40 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_94 sync;
};

struct cameraFXShake
{
	float magnitude;
	xVec3 dir;
	float cycleTime;
	float cycleMax;
	float dampen;
	float dampenRate;
	float rotate_magnitude;
	float radius;
	xVec3* epicenterP;
	xVec3 epicenter;
	xVec3* player;
};

struct RwLinkList
{
	RwLLLink link;
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

struct RwV2d
{
	float x;
	float y;
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

union xiMat4x3Union
{
	xMat4x3 xm;
	RwMatrixTag im;
};

struct xVec2
{
	float x;
	float y;
};

type_85 buffer;
type_89 buffer;
int sCamCollis;
int xcam_collis_owner_disable;
int xcam_do_collis;
float xcam_collis_radius;
float xcam_collis_stiffness;
RpAtomic* sInvisWallHack;
int s_nestlevel;
float gCameraLastFov;
xMat4x3 sCameraFXMatOld;
type_92 sCameraFXTable;
type_45 sCameraFX;
zGlobals globals;
xVec3 m_UnitAxisX;
xMat4x3 g_I3;
type_68 SweptSphereHitsCameraEnt;
xGrid colls_oso_grid;
xGrid colls_grid;

void update(xBinaryCamera* this, float dt);
void stop(xBinaryCamera* this);
void start(xBinaryCamera* this, xCamera& camera);
void init(xBinaryCamera* this);
void xCameraRotate(xCamera* cam, xVec3& v, float roll, float time, float accel, float decl);
void xCameraRotate(xCamera* cam, xMat3x3& m, float time, float accel, float decl);
void xCameraLookYPR(xCamera* cam, unsigned int flags, float yaw, float pitch, float roll, float tm, float tm_acc, float tm_dec);
void xCameraLook(xCamera* cam, unsigned int flags, xQuat* orn_goal, float tm, float tm_acc, float tm_dec);
void xCameraFOV(xCamera* cam, float fov, float maxSpeed, float dt);
void xCameraMove(xCamera* cam, xVec3& loc, float maxSpeed);
void xCameraMove(xCamera* cam, xVec3& loc);
void xCameraMove(xCamera* cam, unsigned int flags, float dgoal, float hgoal, float pgoal, float tm, float tm_acc, float tm_dec);
void xCameraDoCollisions(int do_collis, int owner);
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat);
void xCameraSetScene(xCamera* cam, xScene* sc);
void xCameraShowRaster(xCamera* cam);
void xCameraEnd(xCamera* cam, float seconds, int update_scrn_fx);
void xCameraFXEnd(xCamera* cam);
void xCameraFXUpdate(xCamera* cam, float dt);
void xCameraFXShakeUpdate(cameraFX* f, float dt, xMat4x3* m);
void xCameraFXShake(float maxTime, float magnitude, float cycleMax, float rotate_magnitude, float radius, xVec3* epicenter, xVec3* player);
void xCameraFXZoomUpdate(cameraFX* f, float dt, xMat4x3* m);
void xCameraFXBegin(xCamera* cam);
void xCameraBegin(xCamera* cam, int clear);
void xCameraUpdate(xCamera* cam, float dt);
void _xCameraUpdate(xCamera* cam, float dt);
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
void xCam_worldtocyl(float& d, float& h, float& p, xMat4x3* tgt_mat, xVec3* v, unsigned int flags);
void xCam_buildbasis(xCamera* cam);
void xCameraReset(xCamera* cam, float d, float h, float pitch);
void xCameraExit(xCamera* cam);
void xCameraInit(xCamera* cam, unsigned int width, unsigned int height);

// update__13xBinaryCameraFf
// Start address: 0x1c1220
void update(xBinaryCamera* this, float dt)
{
	xVec3& A;
	xVec3& B;
	xVec3& C;
	xVec3 CA;
	float dCA;
	float yaw_start;
	float yaw_end;
	xVec3 Q1;
	xVec3 Q2;
	float yaw_Q1;
	float yaw_Q2;
	float dyaw1;
	float dyaw2;
	float fov;
	float max_dyaw;
	float sstick;
	analog_data& stick;
	float yaw_diff;
	float max_yaw_diff;
	unsigned int bn;
	unsigned int bp;
	unsigned int aa;
	float d;
	float h;
	float hf;
	float s;
	float s;
	xVec3 end_loc;
	float sloc;
	xVec3 cam_loc;
	xVec3 heading;
	float heading_dist2;
	xQuat end_dir;
	xMat3x3 mat;
	float sdir;
	xMat3x3 mat;
}

// stop__13xBinaryCameraFv
// Start address: 0x1c1c50
void stop(xBinaryCamera* this)
{
}

// start__13xBinaryCameraFR7xCamera
// Start address: 0x1c1c60
void start(xBinaryCamera* this, xCamera& camera)
{
}

// init__13xBinaryCameraFv
// Start address: 0x1c1ca0
void init(xBinaryCamera* this)
{
}

// xCameraRotate__FP7xCameraRC5xVec3ffff
// Start address: 0x1c1cb0
void xCameraRotate(xCamera* cam, xVec3& v, float roll, float time, float accel, float decl)
{
}

// xCameraRotate__FP7xCameraRC7xMat3x3fff
// Start address: 0x1c1e50
void xCameraRotate(xCamera* cam, xMat3x3& m, float time, float accel, float decl)
{
	xVec3 eu;
}

// xCameraLookYPR__FP7xCameraUiffffff
// Start address: 0x1c2030
void xCameraLookYPR(xCamera* cam, unsigned int flags, float yaw, float pitch, float roll, float tm, float tm_acc, float tm_dec)
{
	float s;
}

// xCameraLook__FP7xCameraUiPC5xQuatfff
// Start address: 0x1c21b0
void xCameraLook(xCamera* cam, unsigned int flags, xQuat* orn_goal, float tm, float tm_acc, float tm_dec)
{
	float s;
}

// xCameraFOV__FP7xCamerafff
// Start address: 0x1c2370
void xCameraFOV(xCamera* cam, float fov, float maxSpeed, float dt)
{
	float speed;
	float currentFOV;
	float len;
}

// xCameraMove__FP7xCameraRC5xVec3f
// Start address: 0x1c2410
void xCameraMove(xCamera* cam, xVec3& loc, float maxSpeed)
{
}

// xCameraMove__FP7xCameraRC5xVec3
// Start address: 0x1c24f0
void xCameraMove(xCamera* cam, xVec3& loc)
{
}

// xCameraMove__FP7xCameraUiffffff
// Start address: 0x1c2540
void xCameraMove(xCamera* cam, unsigned int flags, float dgoal, float hgoal, float pgoal, float tm, float tm_acc, float tm_dec)
{
	float s;
}

// xCameraDoCollisions__Fii
// Start address: 0x1c2760
void xCameraDoCollisions(int do_collis, int owner)
{
}

// xCameraSetTargetOMatrix__FP7xCameraP7xMat4x3
// Start address: 0x1c27b0
void xCameraSetTargetOMatrix(xCamera* cam, xMat4x3* mat)
{
}

// xCameraSetTargetMatrix__FP7xCameraP7xMat4x3
// Start address: 0x1c27c0
void xCameraSetTargetMatrix(xCamera* cam, xMat4x3* mat)
{
}

// xCameraSetScene__FP7xCameraP6xScene
// Start address: 0x1c27d0
void xCameraSetScene(xCamera* cam, xScene* sc)
{
}

// xCameraShowRaster__FP7xCamera
// Start address: 0x1c27f0
void xCameraShowRaster(xCamera* cam)
{
}

// xCameraEnd__FP7xCamerafi
// Start address: 0x1c2800
void xCameraEnd(xCamera* cam, float seconds, int update_scrn_fx)
{
}

// xCameraFXEnd__FP7xCamera
// Start address: 0x1c2840
void xCameraFXEnd(xCamera* cam)
{
}

// xCameraFXUpdate__FP7xCameraf
// Start address: 0x1c2890
void xCameraFXUpdate(xCamera* cam, float dt)
{
	int i;
}

// xCameraFXShakeUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x1c29d0
void xCameraFXShakeUpdate(cameraFX* f, float dt, xMat4x3* m)
{
	float x;
	float y;
	float scale;
	float noise;
	xVec3 e;
}

// xCameraFXShake__FfffffP5xVec3P5xVec3
// Start address: 0x1c2c80
void xCameraFXShake(float maxTime, float magnitude, float cycleMax, float rotate_magnitude, float radius, xVec3* epicenter, xVec3* player)
{
}

// xCameraFXZoomUpdate__FP8cameraFXfPC7xMat4x3P7xMat4x3
// Start address: 0x1c2d40
void xCameraFXZoomUpdate(cameraFX* f, float dt, xMat4x3* m)
{
}

// xCameraFXBegin__FP7xCamera
// Start address: 0x1c2e90
void xCameraFXBegin(xCamera* cam)
{
}

// xCameraBegin__FP7xCamerai
// Start address: 0x1c2ee0
void xCameraBegin(xCamera* cam, int clear)
{
}

// xCameraUpdate__FP7xCameraf
// Start address: 0x1c2f20
void xCameraUpdate(xCamera* cam, float dt)
{
	int i;
	int num_updates;
	float sdt;
}

// _xCameraUpdate__FP7xCameraf
// Start address: 0x1c2fd0
void _xCameraUpdate(xCamera* cam, float dt)
{
	float wcvx;
	float wcvy;
	float wcvz;
	float m;
	float dcv;
	float hcv;
	float pcv;
	float tnext;
	float dtg;
	float htg;
	float ptg;
	float dsv;
	float hsv;
	float psv;
	float T_inv;
	float T_inv;
	float it;
	float ot;
	float T_inv;
	float dpv;
	float hpv;
	float ppv;
	float vax;
	float vay;
	float vaz;
	float s;
	float dtg;
	float dtg;
	float dtg;
	float htg;
	float htg;
	float htg;
	float ptg;
	float dphi;
	float dplo;
	float ptg;
	float ptg;
	xVec3 oeu;
	xVec3 eu;
	float m;
	float ycv;
	float pcv;
	float rcv;
	float tnext;
	float ytg;
	float ptg;
	float rtg;
	float ysv;
	float psv;
	float rsv;
	float T_inv;
	float T_inv;
	float it;
	float ot;
	float T_inv;
	float ypv;
	float ppv;
	float rpv;
	float vax;
	float vay;
	float vaz;
	float ytg;
	float ptg;
	float rtg;
	xQuat oq;
	xQuat qdiff_o_c;
	xRot rot_cv;
	xVec3 f;
	float atx;
	float aty;
	float atz;
	float dist;
	float dx__;
	float dz__;
	float dist2;
	float dist_inv;
	float mpx;
	float mpy;
	float mpz;
	float s;
	xMat3x3 des_mat;
	xMat3x3 latgt;
	float ang_dist;
	xQuat a;
	xQuat b;
	xQuat o;
	float s;
	xQuat desq;
	xQuat difq;
	xQuat newq;
	xSweptSphere sws;
	xVec3 tgtpos;
	xRay3 ray;
	float one_len;
	float stopdist;
	float last_dt;
}

// SweptSphereHitsCameraEnt__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1c4520
void SweptSphereHitsCameraEnt(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	xSweptSphere* sws;
	unsigned int result;
	float oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
	xModelInstance* collmod;
}

// xCam_worldtocyl__FRfRfRfPC7xMat4x3PC5xVec3Ui
// Start address: 0x1c4850
void xCam_worldtocyl(float& d, float& h, float& p, xMat4x3* tgt_mat, xVec3* v, unsigned int flags)
{
	float lx;
	float lz;
	float dx__;
	float dz__;
	float dist2;
	float dist_inv;
	float tgt_p;
}

// xCam_buildbasis__FP7xCamera
// Start address: 0x1c49a0
void xCam_buildbasis(xCamera* cam)
{
	float d2d;
	float dx__;
	float dz__;
	float dist2;
	float dist_inv;
}

// xCameraReset__FP7xCamerafff
// Start address: 0x1c4b60
void xCameraReset(xCamera* cam, float d, float h, float pitch)
{
	float goal_p;
}

// xCameraExit__FP7xCamera
// Start address: 0x1c4dd0
void xCameraExit(xCamera* cam)
{
}

// xCameraInit__FP7xCameraUiUi
// Start address: 0x1c4e10
void xCameraInit(xCamera* cam, unsigned int width, unsigned int height)
{
}

