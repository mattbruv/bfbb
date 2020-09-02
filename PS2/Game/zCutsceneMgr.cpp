typedef struct RxPipelineNode;
typedef struct xParEmitter;
typedef struct _tagEmitOffsetPoint;
typedef struct xGridBound;
typedef struct xVec3;
typedef struct xSpline3;
typedef struct RpPolygon;
typedef struct RpWorld;
typedef struct RwObjectHasFrame;
typedef struct anim_coll_data;
typedef struct xAnimPlay;
typedef struct RwV3d;
typedef struct xBase;
typedef struct xParEmitterAsset;
typedef struct RpGeometry;
typedef struct tri_data_0;
typedef struct rxHeapFreeBlock;
typedef struct xAnimEffect;
typedef struct RwRaster;
typedef struct zEnt;
typedef struct RpVertexNormal;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xParGroup;
typedef struct XCSNNosey;
typedef struct xEntMotionMechData;
typedef struct xCutsceneMgr;
typedef struct RxNodeDefinition;
typedef struct RwTexCoords;
typedef struct xAnimSingle;
typedef struct xParEmitterPropsAsset;
typedef struct xJSPHeader;
typedef struct xAnimTable;
typedef struct xSerial;
typedef struct xAnimState;
typedef struct xCollis;
typedef struct xEntPenData;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpLight;
typedef struct RwRGBA;
typedef struct xCutsceneMgrAsset;
typedef struct RxPipeline;
typedef struct RpMeshHeader;
typedef struct RxPipelineCluster;
typedef struct RwResEntry;
typedef struct xCutscene;
typedef struct RxPipelineNodeParam;
typedef struct RwFrame;
typedef struct xEntCollis;
typedef struct xPEVCyl;
typedef struct xMemPool;
typedef struct _tagxPad;
typedef struct RxHeap;
typedef struct xQuat;
typedef struct RwBBox;
typedef struct zPlatform;
typedef struct xModelInstance;
typedef struct xCutsceneZbufferHack;
typedef struct xPortalAsset;
typedef struct xCutsceneInfo;
typedef struct zGlobals;
typedef struct xSurface;
typedef struct xEnt;
typedef struct xEntOrbitData;
typedef struct RpTriangle;
typedef struct xScene;
typedef struct xParInterp;
typedef struct RpAtomic;
typedef struct rxHeapBlockHeader;
typedef struct xMat4x3;
typedef struct _tagxRumble;
typedef struct xFFX;
typedef struct zAssetPickupTable;
typedef struct zPlatFMRunTime;
typedef struct xModelPool;
typedef struct RxPipelineRequiresCluster;
typedef struct zCutsceneMgr;
typedef struct xEntMotion;
typedef struct zGlobalSettings;
typedef struct zScene;
typedef struct xPlatformAsset;
typedef struct xGroup;
typedef struct xEntMotionAsset;
typedef struct xUpdateCullEnt;
typedef struct xPEEntBone;
typedef struct xMovePointAsset;
typedef struct xEntShadow;
typedef struct xGroupAsset;
typedef struct xAnimFile;
typedef struct zPlayerLassoInfo;
typedef struct xParSys;
typedef struct xVec4;
typedef struct xCoef3;
typedef struct zJumpParam;
typedef struct RpClump;
typedef struct zLedgeGrabParams;
typedef struct xAnimTransition;
typedef struct RwSurfaceProperties;
typedef struct xAnimTransitionList;
typedef struct xClumpCollBSPTree;
typedef struct RwMatrixTag;
typedef struct xModelTag;
typedef struct rxReq;
typedef struct xEntSplineData;
typedef struct zEntHangable;
typedef struct xLinkAsset;
typedef enum _zPlayerWallJumpState;
typedef struct xClumpCollBSPVertInfo;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPBranchNode;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct zParEmitter;
typedef enum RpWorldRenderOrder;
typedef struct xEntMotionPenData;
typedef struct xPECircle;
typedef struct xClumpCollBSPTriangle;
typedef struct _zPortal;
typedef struct RpMaterial;
typedef enum _tagRumbleType;
typedef struct RwCamera;
typedef enum RxNodeDefEditable;
typedef enum _zPlayerType;
typedef struct xUpdateCullGroup;
typedef struct xEnvAsset;
typedef struct xModelBucket;
typedef enum RxClusterValid;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct xEntMPData;
typedef struct xAnimMultiFile;
typedef struct xRot;
typedef struct zCutSceneNames;
typedef struct xEntBoulder;
typedef struct analog_data;
typedef struct xBaseAsset;
typedef struct RpWorldSector;
typedef struct xCutsceneData;
typedef struct RpMorphTarget;
typedef struct xMovePoint;
typedef struct xEntAsset;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagEmitSphere;
typedef struct xLightKit;
typedef struct xCutsceneTime;
typedef enum RwCameraProjection;
typedef struct xBound;
typedef enum RxClusterForcePresent;
typedef struct xEntMotionERData;
typedef struct xCylinder;
typedef union _class_0;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct iFogParams;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xUpdateCullMgr;
typedef struct xEntFrame;
typedef struct zPlayerCarryInfo;
typedef struct xCamera;
typedef struct zPlayerSettings;
typedef struct xEnv;
typedef struct _tagEmitRect;
typedef struct RwSphere;
typedef struct zLasso;
typedef struct xCutsceneBreak;
typedef struct iEnv;
typedef struct RwLLLink;
typedef struct RwTexDictionary;
typedef struct xShadowSimplePoly;
typedef struct xJSPNodeInfo;
typedef struct RxOutputSpec;
typedef struct xMat3x3;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct tri_data_1;
typedef struct xVec2;
typedef struct _class_1;
typedef struct RxClusterRef;
typedef struct xEntMotionOrbitData;
typedef struct RwObject;
typedef struct xCoef;
typedef struct xPEEntBound;
typedef struct xBBox;
typedef struct xLightKitLight;
typedef struct RxIoSpec;
typedef struct _tagEmitLine;
typedef struct xShadowSimpleCache;
typedef struct RpInterpolator;
typedef struct zCutsceneHack;
typedef struct RxNodeMethods;
typedef struct xCutsceneZbuffer;
typedef struct xAnimMultiFileBase;
typedef struct xEntDrive;
typedef struct xEntMechData;
typedef struct RwFrustumPlane;
typedef struct xEntMotionSplineData;
typedef struct _class_2;
typedef enum _tagPadState;
typedef struct _zEnv;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct xGlobals;
typedef struct RpMaterialList;
typedef struct xQCData;
typedef struct _tagEmitVolume;
typedef struct RxPacket;
typedef struct tag_iFile;
typedef struct xEntMotionMPData;
typedef struct xEntERData;
typedef enum RwFogType;
typedef struct RwRGBAReal;
typedef struct _tagPadAnalog;
typedef struct tag_xFile;
typedef struct RwLinkList;
typedef struct _tagiPad;

typedef RwCamera*(*type_0)(RwCamera*);
typedef int(*type_1)(RxPipelineNode*);
typedef void(*type_3)(xEnt*, xVec3*);
typedef RpClump*(*type_4)(RpClump*, void*);
typedef RwCamera*(*type_5)(RwCamera*);
typedef RwObjectHasFrame*(*type_7)(RwObjectHasFrame*);
typedef void(*type_10)(RxPipelineNode*);
typedef xBase*(*type_11)(unsigned int);
typedef void(*type_14)(xAnimPlay*, xAnimState*);
typedef char*(*type_21)(xBase*);
typedef int(*type_22)(RxPipelineNode*, RxPipeline*);
typedef int(*type_23)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_25)(xEnt*, xScene*, float, xEntCollis*);
typedef unsigned int(*type_26)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_27)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef char*(*type_28)(unsigned int);
typedef void(*type_29)(xAnimPlay*, xQuat*, xVec3*, int);
typedef unsigned int(*type_30)(void*, void*);
typedef unsigned int(*type_34)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef void(*type_35)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_40)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_41)(void*);
typedef RpAtomic*(*type_42)(RpAtomic*);
typedef int(*type_44)(RxNodeDefinition*);
typedef void(*type_46)(RxNodeDefinition*);
typedef int(*type_49)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_53)(xAnimTransition*, xAnimSingle*, void*);
typedef RpAtomic*(*type_62)(RpAtomic*);
typedef void(*type_69)(xAnimState*, xAnimSingle*, void*);
typedef RpWorldSector*(*type_72)(RpWorldSector*);
typedef RpMaterial*(*type_75)(RpMaterial*, void*);
typedef RpAtomic*(*type_81)(RpAtomic*, void*);
typedef void(*type_93)(xEnt*, xScene*, float);
typedef RpAtomic*(*type_94)(RpAtomic*, void*);
typedef void(*type_101)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_106)(xEnt*);
typedef void(*type_107)(xMemPool*, void*);
typedef void(*type_112)(RwResEntry*);

typedef unsigned int type_2[2];
typedef xModelTag type_6[4];
typedef char type_8[32];
typedef unsigned int type_9[2];
typedef RwTexCoords* type_12[8];
typedef zCutsceneHack type_13[58];
typedef float type_15[4];
typedef RpLight* type_16[2];
typedef unsigned char type_17[4];
typedef unsigned char type_18[3];
typedef char type_19[32];
typedef xCollis type_20[18];
typedef RwFrame* type_24[2];
typedef unsigned char type_31[3];
typedef unsigned char type_32[22];
typedef RwFrustumPlane type_33[6];
typedef float type_36[2];
typedef unsigned short type_37[3];
typedef unsigned char type_38[3];
typedef unsigned char type_39[22];
typedef RwV3d type_43[8];
typedef float type_45[12];
typedef float type_47[12];
typedef float type_48[12];
typedef char type_50[16];
typedef float type_51[12];
typedef float type_52[12];
typedef float type_54[12];
typedef char type_55[16];
typedef xVec3 type_56[60];
typedef char type_57[16];
typedef char type_58[16];
typedef float type_59[2];
typedef float type_60[22];
typedef unsigned char type_61[2];
typedef RwTexCoords* type_63[8];
typedef float type_64[22];
typedef unsigned int type_65[15];
typedef unsigned int type_66[15];
typedef float type_67[4];
typedef char type_68[64];
typedef xParInterp type_70[1];
typedef unsigned int type_71[15];
typedef xVec4 type_73[12];
typedef float type_74[15];
typedef float type_76[15];
typedef xVec3 type_77[5];
typedef zCutSceneNames type_78[14];
typedef unsigned int type_79[15];
typedef unsigned char type_80[5];
typedef analog_data type_82[2];
typedef unsigned int type_83[4];
typedef xParInterp type_84[4];
typedef unsigned char type_85[3];
typedef xParInterp type_86[4];
typedef xVec3 type_87[3];
typedef unsigned int type_88[2];
typedef unsigned char type_89[2];
typedef unsigned char type_90[2];
typedef float type_91[6];
typedef float type_92[4];
typedef float type_95[3];
typedef float type_96[16];
typedef float type_97[3];
typedef float type_98[2];
typedef unsigned int type_99[72];
typedef char type_100[4];
typedef xModelTag type_102[2];
typedef float type_103[3];
typedef unsigned char type_104[2];
typedef xBase* type_105[72];
typedef xEnt* type_108[111];
typedef char type_109[32];
typedef char type_110[32];
typedef unsigned short type_111[3];
typedef unsigned char type_113[2];
typedef xAnimMultiFileEntry type_114[1];
typedef char type_115[128];
typedef xVec3 type_116[4];
typedef xCutsceneZbuffer type_117[4];
typedef char type_118[128];
typedef unsigned char type_119[14];
typedef type_118 type_120[6];
typedef unsigned int type_121[2];
typedef RxCluster type_122[1];
typedef xModelInstance* type_123[14];

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
	type_31 emit_pad;
	type_38 rot;
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

struct xVec3
{
	float x;
	float y;
	float z;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_111 vertIndex;
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
	type_72 renderCallBack;
	RxPipeline* pipeline;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_7 sync;
};

struct anim_coll_data
{
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
	type_29 BeforeAnimMatrices;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_49 eventFunc;
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
	type_63 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_26 Callback;
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

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RwV2d
{
	float x;
	float y;
};

struct xParGroup
{
};

struct XCSNNosey
{
	void* userdata;
	int flg_nosey;
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

struct xCutsceneMgr : xBase
{
	xCutsceneMgrAsset* tasset;
	xCutscene* csn;
	unsigned int stop;
	xCutsceneZbufferHack* zhack;
	float oldfov;
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

struct RwTexCoords
{
	float u;
	float v;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_98 BilinearLerp;
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

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_70 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_84 color_birth;
	type_86 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
};

struct xJSPHeader
{
	type_100 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_14 BeforeEnter;
	type_69 StateCallback;
	type_29 BeforeAnimMatrices;
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

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
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

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xCutsceneMgrAsset : xBaseAsset
{
	unsigned int cutsceneAssetID;
	unsigned int flags;
	float interpSpeed;
	type_74 startTime;
	type_76 endTime;
	type_79 emitID;
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

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_112 destroyNotify;
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
	type_121 SndChannelReq;
	type_2 SndAssetID;
	type_9 SndHandle;
	XCSNNosey* cb_nosey;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_20 colls;
	type_25 post;
	type_27 depenq;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_107 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct _tagxPad
{
	type_32 value;
	type_39 last_value;
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
	type_60 up_tmr;
	type_64 down_tmr;
	type_82 analog;
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

struct xQuat
{
	xVec3 v;
	float s;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
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

struct xCutsceneZbufferHack
{
	char* name;
	type_117 times;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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
	type_57 SoundLeft;
	type_58 SoundRight;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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
	type_85 pad;
	void* moprops;
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
	type_93 update;
	type_93 endUpdate;
	type_3 bupdate;
	type_101 move;
	type_106 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_35 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct RpTriangle
{
	type_37 vertIndex;
	short matIndex;
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
	type_21 base2Name;
	type_28 id2Name;
};

struct xParInterp
{
	type_36 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_83 pad;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xFFX
{
};

struct zAssetPickupTable
{
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_45 tmrs;
	type_47 ttms;
	type_48 atms;
	type_51 dtms;
	type_52 vms;
	type_54 dss;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct zCutsceneMgr : xCutsceneMgr
{
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
	type_89 PowerUp;
	type_90 InitialPowerUp;
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
	type_99 baseCount;
	type_105 baseList;
	_zEnv* zen;
};

struct xPlatformAsset
{
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_30 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_59 radius;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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
	type_113 NumAnims;
	void** RawData;
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

struct xParSys
{
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_4 callback;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_56 tranTable;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_53 Conditional;
	type_53 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_67 wt;
};

struct rxReq
{
};

struct xEntSplineData
{
	int unknown;
};

struct zEntHangable
{
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_15 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct st_SERIAL_CLIENTINFO
{
};

struct zParEmitter : xParEmitter
{
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_61 pad;
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

struct _zPortal : xBase
{
	xPortalAsset* passet;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_0 beginUpdate;
	type_5 endUpdate;
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
	type_33 frustumPlanes;
	RwBBox frustumBoundBox;
	type_43 frustumCorners;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_109 name;
	type_110 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RpSector
{
	int type;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_114 Files;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct zCutSceneNames
{
	type_68 name;
	int played;
	int skipOK;
};

struct xEntBoulder
{
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_12 texCoords;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_104 pad;
	float delay;
	xSpline3* spl;
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xCutsceneTime
{
	float StartTime;
	float EndTime;
	unsigned int NumData;
	unsigned int ChunkIndex;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_18 pad;
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

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float ext_tm;
	float ext_wait_tm;
	float ret_tm;
	float ret_wait_tm;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

union _class_0
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_102 BubbleWandTag;
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
	type_6 HangPawTag;
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
	type_65 Inv_PatsSock;
	type_66 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_71 Inv_LevelPickups;
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
	type_88 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_108 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_119 sb_model_indices;
	type_123 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
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
	type_41 activateCB;
	type_41 deactivateCB;
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
	type_73 frustplane;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_91 MoveSpeed;
	type_95 AnimSneak;
	type_97 AnimWalk;
	type_103 AnimRun;
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
	type_17 talk_filter;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct RwSphere
{
	RwV3d center;
	float radius;
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
	type_77 lastRefs;
	type_80 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xCutsceneBreak
{
	float Time;
	int Index;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_16 light;
	type_24 light_frame;
	int memlvl;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xShadowSimplePoly
{
	type_87 vert;
	xVec3 norm;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct xVec2
{
	float x;
	float y;
};

struct _class_1
{
	xVec3* verts;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xCoef
{
	type_92 a;
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

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_96 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
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
	type_116 corner;
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

struct zCutsceneHack
{
	char* cinname;
	char* modelname;
	float radius;
	unsigned int tworoot;
	unsigned int noshadow;
	unsigned int alphaBits;
	type_42 renderCB;
};

struct RxNodeMethods
{
	type_40 nodeBody;
	type_44 nodeInit;
	type_46 nodeTerm;
	type_1 pipelineNodeInit;
	type_10 pipelineNodeTerm;
	type_22 pipelineNodeConfig;
	type_34 configMsgHandler;
};

struct xCutsceneZbuffer
{
	float start;
	float end;
	float nearPlane;
	float farPlane;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct xEntMotionSplineData
{
	int unknown;
};

struct _class_2
{
	float t;
	float u;
	float v;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_120 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_8 sceneStart;
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

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
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

struct tag_iFile
{
	unsigned int flags;
	type_115 path;
	int fd;
	int offset;
	int length;
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

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct tag_xFile
{
	type_19 relname;
	tag_iFile ps;
	void* user_data;
};

struct RwLinkList
{
	RwLLLink link;
};

struct _tagiPad
{
	int port;
};

type_50 buffer;
type_55 buffer;
type_13 cutsceneHackTable;
type_78 zCutSceneNamesTable;
int gCutsceneSkipOK;
int donpcfx;
unsigned char ents_hidden;
int s_atomicNumber;
zGlobals globals;
float gSkipTimeCutscene;
type_62 AtomicDefaultRenderCallBack;
type_94 HackAlphaCB;
type_81 HackBoundCB;
type_75 HackAlphaSetMaterialAlphaCB;
type_23 zCutsceneMgrEventCB;

void check_hide_entities();
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float dt);
void zCutsceneMgrUpdateFX(zCutsceneMgr* t);
void zCutsceneMgrFinishExit(xBase* to);
void zCutsceneMgrFinishLoad(xBase* to);
int zCutsceneMgrEventCB(xBase* to, unsigned int toEvent);
void zCutsceneMgrPlayStart(zCutsceneMgr* t);
void zCutSceneNamesTable_clearAll();
RpAtomic* HackAlphaCB(RpAtomic* atomic, void* data);
RpMaterial* HackAlphaSetMaterialAlphaCB(RpMaterial* material, void* data);
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data);
void zCutsceneMgrLoad(xSerial* s);
void zCutsceneMgrSave(xSerial* s);
void zCutsceneMgrInit(void* b, void* tasset);

// check_hide_entities__Fv
// Start address: 0x12fbb0
void check_hide_entities()
{
	zScene& scene;
	zEnt** it;
	zEnt** end;
	zEnt* ent;
	zEnt* ent;
}

// zCutsceneMgrUpdate__FP5xBaseP6xScenef
// Start address: 0x12fc90
void zCutsceneMgrUpdate(xBase* to, xScene* sc, float dt)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrUpdateFX__FP12zCutsceneMgrf
// Start address: 0x130000
void zCutsceneMgrUpdateFX(zCutsceneMgr* t)
{
	xCutsceneMgrAsset* a;
	xCutscene* csn;
	int i;
	zParEmitter* e;
}

// zCutsceneMgrFinishExit__FP5xBase
// Start address: 0x1300c0
void zCutsceneMgrFinishExit(xBase* to)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrFinishLoad__FP5xBase
// Start address: 0x130220
void zCutsceneMgrFinishLoad(xBase* to)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x1302f0
int zCutsceneMgrEventCB(xBase* to, unsigned int toEvent)
{
	zCutsceneMgr* t;
}

// zCutsceneMgrPlayStart__FP12zCutsceneMgr
// Start address: 0x130410
void zCutsceneMgrPlayStart(zCutsceneMgr* t)
{
	unsigned int i;
	unsigned int j;
	unsigned int cinid;
	unsigned int hackid;
}

// zCutSceneNamesTable_clearAll__Fv
// Start address: 0x1306b0
void zCutSceneNamesTable_clearAll()
{
	int i;
}

// HackAlphaCB__FP8RpAtomicPv
// Start address: 0x130730
RpAtomic* HackAlphaCB(RpAtomic* atomic, void* data)
{
	RpGeometry* pGeom;
}

// HackAlphaSetMaterialAlphaCB__FP10RpMaterialPv
// Start address: 0x130790
RpMaterial* HackAlphaSetMaterialAlphaCB(RpMaterial* material, void* data)
{
	RwRGBA new_col;
}

// HackBoundCB__FP8RpAtomicPv
// Start address: 0x1307f0
RpAtomic* HackBoundCB(RpAtomic* atomic, void* data)
{
}

// zCutsceneMgrLoad__FP12zCutsceneMgrP7xSerial
// Start address: 0x130830
void zCutsceneMgrLoad(xSerial* s)
{
	int i;
}

// zCutsceneMgrSave__FP12zCutsceneMgrP7xSerial
// Start address: 0x130890
void zCutsceneMgrSave(xSerial* s)
{
	int i;
}

// zCutsceneMgrInit__FPvPv
// Start address: 0x130910
void zCutsceneMgrInit(void* b, void* tasset)
{
}

