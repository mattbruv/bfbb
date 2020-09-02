typedef struct xUpdateCullGroup;
typedef struct xLightKit;
typedef struct RxPipelineCluster;
typedef struct RwFrame;
typedef struct xMat4x3;
typedef struct xModelInstance;
typedef struct RxNodeDefinition;
typedef struct RpWorld;
typedef struct xAnimTransitionList;
typedef struct RxPipelineRequiresCluster;
typedef enum RwFogType;
typedef struct xBound;
typedef struct RwResEntry;
typedef struct iFogParams;
typedef struct xAnimTable;
typedef struct jot;
typedef struct iColor_tag;
typedef struct xEntBoulder;
typedef struct RxPacket;
typedef struct basic_rect;
typedef struct RwRGBAReal;
typedef struct xEnt;
typedef struct zPlatFMRunTime;
typedef enum _tagPadState;
typedef struct _class_0;
typedef struct RwObjectHasFrame;
typedef struct xAnimTransition;
typedef struct xScene;
typedef struct xVec3;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMovePointAsset;
typedef struct xBase;
typedef struct render_context;
typedef struct zEntHangable;
typedef struct RwLinkList;
typedef struct xGlobals;
typedef struct xGridBound;
typedef struct xAnimState;
typedef struct RxPipelineNode;
typedef struct RpSector;
typedef struct xJSPHeader;
typedef struct _tagxPad;
typedef struct RwMatrixTag;
typedef struct xPortalAsset;
typedef struct rxHeapFreeBlock;
typedef struct RwRaster;
typedef struct RwLLLink;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xEntShadow;
typedef struct widget_chunk;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct split_tag;
typedef struct callback;
typedef struct xEntMotionOrbitData;
typedef struct xtextbox;
typedef struct _zEnv;
typedef struct tag_type;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpAtomic;
typedef struct xAnimFile;
typedef enum _enum_0;
typedef struct _tagPadAnalog;
typedef struct xClumpCollBSPTree;
typedef struct RxPipeline;
typedef struct _class_1;
typedef struct RxPipelineNodeParam;
typedef struct xAnimSingle;
typedef struct RpVertexNormal;
typedef struct xUpdateCullMgr;
typedef struct xJSPNodeInfo;
typedef struct tri_data_0;
typedef struct xEnvAsset;
typedef struct RxHeap;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xLinkAsset;
typedef struct xQuat;
typedef struct xGroupAsset;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct widget;
typedef struct rxHeapBlockHeader;
typedef struct _tagiPad;
typedef struct RpInterpolator;
typedef struct motive;
typedef struct zUIFont;
typedef enum _enum_1;
typedef struct xAnimMultiFileBase;
typedef struct zUIAsset;
typedef struct xEntMechData;
typedef struct xEntDrive;
typedef struct xfont;
typedef struct xAnimEffect;
typedef struct xEntMotionSplineData;
typedef struct xEntCollis;
typedef struct zUIFontAsset;
typedef struct iEnv;
typedef struct ztextbox;
typedef struct substr;
typedef struct RpPolygon;
typedef struct _class_2;
typedef struct xAnimPlay;
typedef struct _zPortal;
typedef struct RpMaterialList;
typedef struct xVec4;
typedef struct xEntAsset;
typedef struct xCoef3;
typedef struct xSurface;
typedef struct zPlatform;
typedef struct RwSurfaceProperties;
typedef struct xAnimMultiFile;
typedef struct RpMaterial;
typedef struct xEntMotionMPData;
typedef struct zGlobals;
typedef struct xEntERData;
typedef struct xModelPool;
typedef union _class_3;
typedef struct _tagxRumble;
typedef struct xDynAsset;
typedef struct rxReq;
typedef struct xFFX;
typedef struct RpLight;
typedef struct zGlobalSettings;
typedef enum RxClusterValidityReq;
typedef struct zAssetPickupTable;
typedef struct zCutsceneMgr;
typedef struct _class_4;
typedef struct RpGeometry;
typedef struct RpWorldSector;
typedef struct zPlayerLassoInfo;
typedef struct zScene;
typedef struct _class_5;
typedef enum RxNodeDefEditable;
typedef struct zLedgeGrabParams;
typedef struct RpMorphTarget;
typedef enum RxClusterValid;
typedef struct tri_data_1;
typedef struct xGroup;
typedef struct xUpdateCullEnt;
typedef struct xEntMotionMechData;
typedef struct xRot;
typedef struct xMovePoint;
typedef enum _zPlayerWallJumpState;
typedef struct xEntPenData;
typedef struct xCollis;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct asset_type;
typedef struct xShadowSimplePoly;
typedef struct _zUI;
typedef struct asset;
typedef struct RpMeshHeader;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xEnv;
typedef struct xMemPool;
typedef struct xCylinder;
typedef enum _enum_2;
typedef enum _tagRumbleType;
typedef struct zComboReward;
typedef struct xEntOrbitData;
typedef enum _zPlayerType;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct RpTriangle;
typedef struct analog_data;
typedef struct xClumpCollBSPVertInfo;
typedef struct color_type;
typedef struct xSpline3;
typedef struct xEntMotion;
typedef struct xLightKitLight;
typedef struct xPlatformAsset;
typedef struct motive_node;
typedef struct xEntMotionAsset;
typedef struct zLasso;
typedef struct xShadowSimpleCache;
typedef struct xClumpCollBSPTriangle;
typedef struct RwSphere;
typedef struct RwTexDictionary;
typedef struct xEntFrame;
typedef struct zPlayerGlobals;
typedef struct zCheckPoint;
typedef struct RxOutputSpec;
typedef struct xBaseAsset;
typedef struct xMat3x3;
typedef struct _class_6;
typedef struct xEntSplineData;
typedef struct zPlayerCarryInfo;
typedef struct RxClusterRef;
typedef struct xModelTag;
typedef struct zPlayerSettings;
typedef struct RwCamera;
typedef struct RwObject;
typedef struct zEnt;
typedef struct xEntMotionPenData;
typedef struct xCoef;
typedef struct _class_7;
typedef struct RxIoSpec;
typedef struct zJumpParam;
typedef union _class_8;
typedef enum RpWorldRenderOrder;
typedef struct RwTexture;
typedef struct RxNodeMethods;
typedef struct xEntMPData;
typedef struct text_widget;
typedef struct xCamera;
typedef struct RwFrustumPlane;
typedef struct anim_coll_data;
typedef struct xVec2;
typedef struct xModelBucket;
typedef struct RwPlane;
typedef struct _class_9;
typedef struct xQCData;
typedef struct xTextAsset;
typedef struct xBBox;
typedef struct RxCluster;
typedef struct xEntMotionERData;

typedef void(*type_1)(xMemPool*, void*);
typedef void(*type_3)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_5)(void*);
typedef int(*type_7)(RxNodeDefinition*);
typedef unsigned int(*type_9)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_11)(RxNodeDefinition*);
typedef void(*type_12)(RwResEntry*);
typedef void(*type_16)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_19)(RwCamera*);
typedef xBase*(*type_20)(unsigned int);
typedef int(*type_21)(RxPipelineNode*);
typedef RwCamera*(*type_22)(RwCamera*);
typedef RwObjectHasFrame*(*type_23)(RwObjectHasFrame*);
typedef void(*type_26)(RxPipelineNode*);
typedef char*(*type_28)(xBase*);
typedef void(*type_30)(jot&, xtextbox&, float, float);
typedef char*(*type_32)(unsigned int);
typedef int(*type_33)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_34)(RpWorldSector*);
typedef void(*type_38)(jot&, xtextbox&, xtextbox&);
typedef unsigned int(*type_42)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef unsigned int(*type_48)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned char(*type_49)(widget&, motive&, float);
typedef int(*type_52)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_56)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef unsigned int(*type_57)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned char(*type_62)(widget&, motive&, float);
typedef void(*type_67)(xAnimState*, xAnimSingle*, void*);
typedef unsigned int(*type_68)(void*, void*);
typedef RpClump*(*type_71)(RpClump*, void*);
typedef void(*type_75)(xAnimPlay*, xAnimState*);
typedef int(*type_76)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_82)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_85)(xEnt*, xScene*, float);
typedef void(*type_87)(xEnt*, xVec3*);
typedef void(*type_92)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_93)(widget&, motive&);
typedef RpAtomic*(*type_94)(RpAtomic*);
typedef void(*type_96)(xEnt*);

typedef xCollis type_0[18];
typedef xModelTag type_2[2];
typedef float type_4[3];
typedef xVec4 type_6[12];
typedef float type_8[2];
typedef float type_10[2];
typedef float type_13[2];
typedef zComboReward type_14[16];
typedef RxCluster type_15[1];
typedef xEnt* type_17[111];
typedef float type_18[2];
typedef unsigned int type_24[72];
typedef char type_25[4];
typedef xBase* type_27[72];
typedef char type_29[128];
typedef type_29 type_31[6];
typedef unsigned char type_35[14];
typedef xModelTag type_36[4];
typedef unsigned char type_37[4];
typedef unsigned char type_39[4];
typedef xModelInstance* type_40[14];
typedef char type_41[32];
typedef unsigned short type_43[4];
typedef RwFrustumPlane type_44[6];
typedef unsigned short type_45[2];
typedef float type_46[2];
typedef zUIFont* type_47[1];
typedef unsigned short type_50[2];
typedef float type_51[2];
typedef unsigned char type_53[4];
typedef RwV3d type_54[8];
typedef unsigned char type_55[3];
typedef unsigned short type_58[3];
typedef char type_59[16];
typedef float type_60[4];
typedef unsigned char type_61[22];
typedef unsigned char type_63[2];
typedef unsigned char type_64[22];
typedef xAnimMultiFileEntry type_65[1];
typedef RpLight* type_66[2];
typedef RwFrame* type_69[2];
typedef char type_70[16];
typedef ztextbox* type_72[5];
typedef xVec3 type_73[60];
typedef RwTexCoords* type_74[8];
typedef xVec3 type_77[3];
typedef xVec3 type_78[5];
typedef float type_79[22];
typedef char* type_80[16];
typedef unsigned char type_81[5];
typedef float type_83[22];
typedef unsigned char type_84[2];
typedef unsigned int type_86[15];
typedef unsigned short type_88[3];
typedef unsigned int type_89[15];
typedef float type_90[12];
typedef unsigned int type_91[4];
typedef float type_95[12];
typedef float type_97[16];
typedef unsigned int type_98[15];
typedef float type_99[12];
typedef unsigned char type_100[3];
typedef float type_101[12];
typedef float type_102[12];
typedef analog_data type_103[2];
typedef float type_104[12];
typedef float type_105[4];
typedef unsigned char type_106[2];
typedef xVec3 type_107[4];
typedef RwTexCoords* type_108[8];
typedef unsigned char type_109[2];
typedef unsigned int type_110[2];
typedef float type_111[4];
typedef char type_112[32];
typedef unsigned char type_113[2];
typedef float type_114[6];
typedef char type_115[32];
typedef char type_116[128];
typedef unsigned int type_117[10];
typedef float type_118[3];
typedef float type_119[3];
typedef unsigned short type_120[2];

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

struct RxNodeDefinition
{
	char* name;
	RxNodeMethods nodeMethods;
	RxIoSpec io;
	unsigned int pipelineNodePrivateDataSize;
	RxNodeDefEditable editable;
	int InputPipesCnt;
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

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_55 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_12 destroyNotify;
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

struct jot
{
	substr s;
	_class_6 flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xEntBoulder
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
	type_15 clusters;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
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
	type_85 update;
	type_85 endUpdate;
	type_87 bupdate;
	type_92 move;
	type_96 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_16 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_90 tmrs;
	type_95 ttms;
	type_99 atms;
	type_101 dtms;
	type_102 vms;
	type_104 dss;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct _class_0
{
	float left;
	float top;
	float right;
	float bottom;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_23 sync;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_57 Conditional;
	type_57 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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
	type_20 resolvID;
	type_28 base2Name;
	type_32 id2Name;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_76 eventFunc;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float r;
	float g;
	float b;
	float a;
};

struct zEntHangable
{
};

struct RwLinkList
{
	RwLLLink link;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_31 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_41 sceneStart;
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
	type_75 BeforeEnter;
	type_67 StateCallback;
	type_82 BeforeAnimMatrices;
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

struct RpSector
{
	int type;
};

struct xJSPHeader
{
	type_25 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

struct _tagxPad
{
	type_61 value;
	type_64 last_value;
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
	type_79 up_tmr;
	type_83 down_tmr;
	type_103 analog;
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

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_51 radius;
};

struct widget_chunk : xBase
{
	text_widget w;
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

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct callback
{
	type_30 render;
	type_38 layout_update;
	type_38 render_update;
};

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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

struct _zEnv : xBase
{
	xEnvAsset* easset;
};

struct tag_type
{
	substr name;
	type_56 parse_tag;
	type_56 reset_tag;
	void* context;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_71 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_94 renderCallBack;
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
	type_63 NumAnims;
	void** RawData;
};

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct _class_1
{
	xVec3* verts;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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
	type_5 activateCB;
	type_5 deactivateCB;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct tri_data_0
{
	unsigned int index;
	float r;
	float d;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_60 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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

struct widget
{
	_class_4 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum_2 activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_91 pad;
};

struct _tagiPad
{
	int port;
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

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_62 fp_update;
	void* context;
	unsigned char inverse;
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

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct zUIAsset : xEntAsset
{
	unsigned int uiFlags;
	type_120 dim;
	unsigned int textureID;
	type_8 uva;
	type_10 uvb;
	type_13 uvc;
	type_18 uvd;
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

struct xfont
{
	unsigned int id;
	float width;
	float height;
	float space;
	iColor_tag color;
	basic_rect clip;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_42 Callback;
};

struct xEntMotionSplineData
{
	int unknown;
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
	type_0 colls;
	type_3 post;
	type_9 depenq;
};

struct zUIFontAsset : zUIAsset
{
	unsigned short uiFontFlags;
	unsigned char mode;
	unsigned char fontID;
	unsigned int textAssetID;
	type_37 bcolor;
	type_39 color;
	type_43 inset;
	type_45 space;
	type_50 cdim;
	unsigned int max_height;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_66 light;
	type_69 light_frame;
	int memlvl;
};

struct ztextbox : xBase
{
	_class_3 flag;
	asset_type* asset;
	xtextbox tb;
	type_80 segments;
	unsigned int segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
};

struct substr
{
	char* text;
	unsigned int size;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_58 vertIndex;
};

struct _class_2
{
	float t;
	float u;
	float v;
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
	type_82 BeforeAnimMatrices;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
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
	type_100 pad;
	void* moprops;
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

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_65 Files;
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

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
};

union _class_3
{
	unsigned char active;
	unsigned char dirty;
	unsigned char show_backdrop;
	unsigned char visible;
	unsigned char hack_invisible;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct rxReq
{
};

struct xFFX
{
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
	type_109 PowerUp;
	type_113 InitialPowerUp;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct zAssetPickupTable
{
};

struct zCutsceneMgr
{
};

struct _class_4
{
	unsigned char visible;
	unsigned char enabled;
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
	type_108 texCoords;
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
	type_74 texCoords;
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
	type_24 baseCount;
	type_27 baseList;
	_zEnv* zen;
};

struct _class_5
{
	unsigned int type;
	color_type color;
	unsigned int texture;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_73 tranTable;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_1 : tri_data_0
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_68 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_84 pad;
	float delay;
	xSpline3* spl;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

struct xEntPenData
{
	xVec3 top;
	float w;
	xMat4x3 omat;
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
		tri_data_0 tri;
	};
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

struct asset_type : xDynAsset
{
	unsigned int text;
	basic_rect bounds;
	unsigned int font;
	_class_7 size;
	_class_9 space;
	color_type color;
	_class_0 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float max_height;
	_class_5 backdrop;
};

struct xShadowSimplePoly
{
	type_77 vert;
	xVec3 norm;
};

struct _zUI : zEnt
{
	zUIAsset* sasset;
	unsigned int uiFlags;
	unsigned int uiButton;
	unsigned short preUpdateIndex;
	unsigned short updateIndex;
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_1 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

enum _enum_2
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
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

struct zComboReward
{
	int reward;
	char* textName;
	type_117 rewardList;
	unsigned int rewardNum;
	xTextAsset* textAsset;
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

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
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
	type_88 vertIndex;
	short matIndex;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct color_type
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_97 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct xPlatformAsset
{
};

struct motive_node
{
	motive m;
	motive_node* next;
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
	type_78 lastRefs;
	type_81 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
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
	type_107 corner;
};

struct xClumpCollBSPTriangle
{
	_class_8 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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
	type_2 BubbleWandTag;
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
	type_36 HangPawTag;
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
	type_86 Inv_PatsSock;
	type_89 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_98 Inv_LevelPickups;
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
	type_110 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_17 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_35 sb_model_indices;
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

struct zCheckPoint
{
	xVec3 pos;
	float rot;
	unsigned int initCamID;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct _class_6
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

struct xEntSplineData
{
	int unknown;
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
	type_111 wt;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_114 MoveSpeed;
	type_118 AnimSneak;
	type_119 AnimWalk;
	type_4 AnimRun;
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
	type_53 talk_filter;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_19 beginUpdate;
	type_22 endUpdate;
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
	type_44 frustumPlanes;
	RwBBox frustumBoundBox;
	type_54 frustumCorners;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_106 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct xCoef
{
	type_105 a;
};

struct _class_7
{
	float width;
	float height;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

union _class_8
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_112 name;
	type_115 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RxNodeMethods
{
	type_52 nodeBody;
	type_7 nodeInit;
	type_11 nodeTerm;
	type_21 pipelineNodeInit;
	type_26 pipelineNodeTerm;
	type_33 pipelineNodeConfig;
	type_48 configMsgHandler;
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

struct text_widget : widget
{
	type_116 text;
	xtextbox tb;
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
	type_6 frustplane;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct anim_coll_data
{
};

struct xVec2
{
	float x;
	float y;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct _class_9
{
	float x;
	float y;
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

struct xTextAsset
{
	unsigned int len;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xEntMotionERData
{
	xVec3 ret_pos;
	xVec3 ext_dpos;
	float ext_tm;
	float ext_wait_tm;
	float ret_tm;
	float ret_wait_tm;
};

type_59 buffer;
type_70 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
xVec3 sUnderCamPos;
type_14 comboReward;
widget_chunk* comboHUD;
type_72 sHideText;
type_47 sHideUIF;
float comboMaxTime;
float comboDisplayTime;
int comboPending;
int comboLastCounter;
int comboCounter;
float comboTimer;
type_93 zComboHideMessage;
type_49 delay_motive_update;
zGlobals globals;

void zCombo_Update(float dt);
void zCombo_HideImmediately();
void zComboHideMessage(widget& w);
void zCombo_Add(int points);
void zCombo_Setup();
void fillCombo(zComboReward* r);

// zCombo_Update__Ff
// Start address: 0x3d4c30
void zCombo_Update(float dt)
{
	int toShow;
	zComboReward* c;
	int i;
	int i;
}

// zCombo_HideImmediately__Fv
// Start address: 0x3d5060
void zCombo_HideImmediately()
{
}

// zComboHideMessage__FRQ24xhud6widgetRQ24xhud6motive
// Start address: 0x3d5080
void zComboHideMessage(widget& w)
{
}

// zCombo_Add__Fi
// Start address: 0x3d5090
void zCombo_Add(int points)
{
}

// zCombo_Setup__Fv
// Start address: 0x3d5100
void zCombo_Setup()
{
	int i;
	unsigned int id;
}

// fillCombo__FP12zComboReward
// Start address: 0x3d5380
void fillCombo(zComboReward* r)
{
	int rewardLeft;
	int j;
}

