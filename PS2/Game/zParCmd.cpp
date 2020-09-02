typedef struct RpAtomic;
typedef struct RwObjectHasFrame;
typedef struct xAnimActiveEffect;
typedef struct xBBox;
typedef struct xParCmdKillDistance;
typedef struct xParCmd;
typedef struct xAnimFile;
typedef struct xBase;
typedef struct RxPipelineNode;
typedef struct rxHeapFreeBlock;
typedef struct xAnimSingle;
typedef struct RwRaster;
typedef struct xEntMotionOrbitData;
typedef struct xEntFrame;
typedef struct RxPipelineNodeTopSortData;
typedef struct RwV2d;
typedef struct xParGroup;
typedef struct _zEnv;
typedef struct RxNodeDefinition;
typedef struct xAnimState;
typedef struct xVec3;
typedef struct _tagPadAnalog;
typedef struct RpPolygon;
typedef struct xPar;
typedef struct xEnv;
typedef struct zEnt;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xUpdateCullMgr;
typedef struct RpMaterialList;
typedef struct RxPipeline;
typedef struct RxPipelineCluster;
typedef struct xParCmdTex;
typedef struct iEnv;
typedef struct _class_0;
typedef struct xJSPNodeInfo;
typedef struct RxPipelineNodeParam;
typedef struct xAnimMultiFileBase;
typedef struct xSurface;
typedef struct zJumpParam;
typedef struct RpMaterial;
typedef struct _tagEmitSphere;
typedef struct RxHeap;
typedef struct xEntAsset;
typedef struct xModelInstance;
typedef struct xAnimEffect;
typedef struct RwRGBA;
typedef struct xAnimTransition;
typedef struct RwBBox;
typedef struct xLightKit;
typedef struct xGroupAsset;
typedef struct _zPortal;
typedef struct xModelBucket;
typedef struct xQuat;
typedef struct xParCmdJet;
typedef struct xClumpCollBSPBranchNode;
typedef struct _tagiPad;
typedef struct RpWorld;
typedef struct xGridBound;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct xEnt;
typedef struct xEntMechData;
typedef struct rxHeapBlockHeader;
typedef struct xLinkAsset;
typedef struct xPortalAsset;
typedef struct RpClump;
typedef struct xEntMotionSplineData;
typedef struct RpGeometry;
typedef struct xAnimPlay;
typedef struct xVolume;
typedef struct RpWorldSector;
typedef struct RxPipelineRequiresCluster;
typedef struct xQCControl;
typedef struct xAnimMultiFile;
typedef struct xJSPHeader;
typedef struct RpMorphTarget;
typedef struct _tagEmitRect;
typedef struct xParCmdAsset;
typedef struct xParCmdApplyCamMat;
typedef struct zPlatform;
typedef struct xVec4;
typedef struct xScene;
typedef struct xCoef3;
typedef struct RpVertexNormal;
typedef struct xEntMotionMPData;
typedef struct zEntHangable;
typedef struct zGlobals;
typedef struct xEntERData;
typedef struct _tagxRumble;
typedef struct RwSurfaceProperties;
typedef struct RwMatrixTag;
typedef struct xMat4x3;
typedef struct xMovePoint;
typedef struct rxReq;
typedef struct zGlobalSettings;
typedef struct zCutsceneMgr;
typedef struct xParEmitterAsset;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct zAssetPickupTable;
typedef struct xShadowSimplePoly;
typedef struct RwResEntry;
typedef enum RxClusterValidityReq;
typedef struct xMovePointAsset;
typedef struct xLightKitLight;
typedef struct zPlayerLassoInfo;
typedef struct xPEEntBound;
typedef struct zScene;
typedef struct _tagEmitLine;
typedef struct xEnvAsset;
typedef struct _class_1;
typedef struct xVolumeAsset;
typedef struct zLedgeGrabParams;
typedef struct xGroup;
typedef struct xEntBoulder;
typedef struct xUpdateCullEnt;
typedef struct RpTriangle;
typedef enum RxNodeDefEditable;
typedef struct xEntMotionMechData;
typedef enum RxClusterValid;
typedef struct xAnimTable;
typedef struct xEntCollis;
typedef struct xRot;
typedef struct RpLight;
typedef enum _zPlayerWallJumpState;
typedef struct xEntPenData;
typedef struct xMemPool;
typedef struct xSpline3;
typedef struct xShadowSimpleCache;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct xEntDrive;
typedef enum _tagRumbleType;
typedef enum RwCameraProjection;
typedef enum _zPlayerType;
typedef enum RxClusterForcePresent;
typedef struct xEntOrbitData;
typedef struct xCylinder;
typedef struct xCollis;
typedef struct _tagEmitVolume;
typedef struct xParCmdDamagePlayer;
typedef struct xBox;
typedef struct analog_data;
typedef struct zPlatFMRunTime;
typedef struct RxClusterDefinition;
typedef struct xFFX;
typedef struct xEntMotion;
typedef struct xUpdateCullGroup;
typedef struct zLasso;
typedef struct xPlatformAsset;
typedef struct xModelPool;
typedef struct xBound;
typedef struct xEntMotionAsset;
typedef enum RpWorldRenderOrder;
typedef struct RwFrame;
typedef struct RwSphere;
typedef struct xAnimTransitionList;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;
typedef struct xEntShadow;
typedef struct RwTexDictionary;
typedef struct RwTexture;
typedef struct _tagEmitOffsetPoint;
typedef struct RpSector;
typedef struct RxOutputSpec;
typedef struct anim_coll_data;
typedef struct xEntSplineData;
typedef struct zPlayerCarryInfo;
typedef struct xMat3x3;
typedef struct zPlayerSettings;
typedef struct xBaseAsset;
typedef struct RxClusterRef;
typedef struct xEntMotionPenData;
typedef struct RwCamera;
typedef struct xCoef;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct tri_data_0;
typedef struct RxIoSpec;
typedef struct xClumpCollBSPVertInfo;
typedef struct xPEVCyl;
typedef struct xVec2;
typedef struct xCamera;
typedef struct xEntMPData;
typedef struct RxNodeMethods;
typedef struct zVolume;
typedef struct xClumpCollBSPTriangle;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct xModelTag;
typedef struct xEntMotionERData;
typedef struct RxCluster;
typedef struct xPEEntBone;
typedef struct _tagxPad;
typedef struct RxPacket;
typedef struct iFogParams;
typedef union _class_2;
typedef enum RwFogType;
typedef enum _tagPadState;
typedef struct RwRGBAReal;
typedef struct tri_data_1;
typedef struct xGlobals;
typedef struct RwLinkList;
typedef struct xAnimMultiFileEntry;
typedef struct xPECircle;
typedef struct RpInterpolator;
typedef struct xQCData;

typedef RwCamera*(*type_0)(RwCamera*);
typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef void(*type_3)(RxPipelineNode*);
typedef void(*type_7)(void*, xParGroup*);
typedef unsigned int(*type_8)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef int(*type_10)(RxPipelineNode*, RxPipeline*);
typedef void(*type_17)(xParCmd*, xParGroup*, float);
typedef unsigned int(*type_19)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_20)(xAnimTransition*, xAnimSingle*, void*);
typedef int(*type_22)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_24)(RxNodeDefinition*);
typedef void(*type_25)(RxNodeDefinition*);
typedef RpClump*(*type_28)(RpClump*, void*);
typedef int(*type_30)(RxPipelineNode*);
typedef void(*type_34)(xAnimState*, xAnimSingle*, void*);
typedef unsigned int(*type_39)(void*, void*);
typedef xBase*(*type_40)(unsigned int);
typedef char*(*type_43)(xBase*);
typedef void(*type_46)(void*);
typedef char*(*type_47)(unsigned int);
typedef void(*type_50)(xEnt*, xScene*, float);
typedef void(*type_51)(xAnimPlay*, xAnimState*);
typedef void(*type_52)(xParCmd*, xParGroup*, float);
typedef void(*type_54)(xEnt*, xVec3*);
typedef void(*type_56)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_57)(xEnt*, xScene*, float, xEntFrame*);
typedef RpAtomic*(*type_58)(RpAtomic*);
typedef void(*type_60)(xEnt*);
typedef void(*type_62)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_63)(xParCmd*, xParGroup*, float);
typedef int(*type_67)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_68)(xParCmd*, xParGroup*, float);
typedef unsigned int(*type_70)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_71)(xEnt*, xVec3*, xMat4x3*);
typedef void(*type_73)(xParCmd*, xParGroup*, float);
typedef void(*type_83)(xParCmd*, xParGroup*, float);
typedef void(*type_90)(xParCmd*, xParGroup*, float);
typedef RpWorldSector*(*type_91)(RpWorldSector*);
typedef RwCamera*(*type_92)(RwCamera*);
typedef void(*type_96)(xParCmd*, xParGroup*, float);
typedef void(*type_100)(xMemPool*, void*);
typedef void(*type_107)(RwResEntry*);

typedef xBase* type_2[72];
typedef float type_4[2];
typedef char type_5[128];
typedef type_5 type_6[6];
typedef unsigned char type_9[14];
typedef xModelTag type_11[4];
typedef float type_12[2];
typedef unsigned short type_13[3];
typedef char type_14[32];
typedef unsigned char type_15[4];
typedef xModelInstance* type_16[14];
typedef RwFrustumPlane type_18[6];
typedef unsigned char type_21[4];
typedef RwV3d type_23[8];
typedef unsigned char type_26[2];
typedef unsigned char type_27[2];
typedef xAnimMultiFileEntry type_29[1];
typedef char type_31[4];
typedef unsigned char type_32[3];
typedef unsigned char type_33[22];
typedef char type_35[16];
typedef unsigned char type_36[22];
typedef RwTexCoords* type_37[8];
typedef float type_38[4];
typedef float type_41[4];
typedef char type_42[16];
typedef xVec3 type_44[3];
typedef float type_45[4];
typedef float type_48[16];
typedef unsigned char type_49[3];
typedef unsigned char type_53[2];
typedef unsigned short type_55[3];
typedef xVec3 type_59[60];
typedef unsigned char type_61[2];
typedef xVec3 type_64[5];
typedef float type_65[22];
typedef unsigned char type_66[5];
typedef float type_69[22];
typedef unsigned int type_72[15];
typedef RpLight* type_74[2];
typedef unsigned int type_75[15];
typedef float type_76[12];
typedef RwFrame* type_77[2];
typedef unsigned int type_78[4];
typedef float type_79[12];
typedef unsigned int type_80[15];
typedef float type_81[12];
typedef unsigned char type_82[3];
typedef xVec3 type_84[4];
typedef float type_85[12];
typedef RwTexCoords* type_86[8];
typedef float type_87[12];
typedef analog_data type_88[2];
typedef float type_89[12];
typedef float type_93[4];
typedef unsigned char type_94[2];
typedef xCollis type_95[18];
typedef char type_97[64];
typedef unsigned char type_98[2];
typedef unsigned int type_99[2];
typedef unsigned char type_101[2];
typedef float type_102[6];
typedef zVolume* type_103[32];
typedef char type_104[32];
typedef float type_105[3];
typedef char type_106[32];
typedef float type_108[3];
typedef xModelTag type_109[2];
typedef xVec4 type_110[12];
typedef float type_111[3];
typedef xEnt* type_112[111];
typedef RxCluster type_113[1];
typedef float type_114[4];
typedef unsigned int type_115[72];

struct RpAtomic
{
	RwObjectHasFrame object;
	RwResEntry* repEntry;
	RpGeometry* geometry;
	RwSphere boundingSphere;
	RwSphere worldBoundingSphere;
	RpClump* clump;
	RwLLLink inClumpLink;
	type_58 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xParCmdKillDistance : xParCmdAsset
{
	float dSqr;
	unsigned int kill_greater_than;
};

struct xParCmd
{
	unsigned int flag;
	xParCmdAsset* tasset;
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
	type_27 NumAnims;
	void** RawData;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_67 eventFunc;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_12 BilinearLerp;
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

struct xEntMotionOrbitData
{
	xVec3 center;
	float w;
	float h;
	float period;
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
	type_7 draw;
	xParCmdTex* m_cmdTex;
};

struct _zEnv : xBase
{
	xEnvAsset* easset;
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
	type_51 BeforeEnter;
	type_34 StateCallback;
	type_62 BeforeAnimMatrices;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_13 vertIndex;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_15 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_26 m_texIdx;
	type_32 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_41 m_cvel;
	type_45 m_cfl;
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

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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
	type_46 activateCB;
	type_46 deactivateCB;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_74 light;
	type_77 light_frame;
	int memlvl;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
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
	type_82 pad;
	void* moprops;
};

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
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

struct _tagEmitSphere
{
	float radius;
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

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_8 Callback;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_20 Conditional;
	type_20 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xParCmdJet : xParCmdAsset
{
	xVec3 center;
	xVec3 acc;
	float gravity;
	float epsilon;
	float radiusSqr;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

struct _tagiPad
{
	int port;
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
	type_91 renderCallBack;
	RxPipeline* pipeline;
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
	type_50 update;
	type_50 endUpdate;
	type_54 bupdate;
	type_57 move;
	type_60 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_71 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_78 pad;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_38 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
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

struct xEntMotionSplineData
{
	int unknown;
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
	type_86 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_62 BeforeAnimMatrices;
};

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_37 texCoords;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
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

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_29 Files;
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

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct xParCmdAsset
{
	unsigned int type;
	unsigned char enabled;
	unsigned char mode;
	type_61 pad;
};

struct xParCmdApplyCamMat : xParCmdAsset
{
	xVec3 apply;
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

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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
	type_40 resolvID;
	type_43 base2Name;
	type_47 id2Name;
};

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct xEntMotionMPData
{
	unsigned int flags;
	unsigned int mp_id;
	float speed;
};

struct zEntHangable
{
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

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xMovePoint : xBase
{
	xMovePointAsset* asset;
	xVec3* pos;
	xMovePoint** nodes;
	xMovePoint* prev;
	unsigned int node_wt_sum;
	unsigned char on;
	type_53 pad;
	float delay;
	xSpline3* spl;
};

struct rxReq
{
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
	type_98 PowerUp;
	type_101 InitialPowerUp;
};

struct zCutsceneMgr
{
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

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
};

struct zAssetPickupTable
{
};

struct xShadowSimplePoly
{
	type_44 vert;
	xVec3 norm;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_107 destroyNotify;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_48 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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

struct xPEEntBound
{
	unsigned char flags;
	unsigned char type;
	unsigned char pad1;
	unsigned char pad2;
	float expand;
	float deflection;
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
	type_115 baseCount;
	type_2 baseList;
	_zEnv* zen;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
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

struct _class_1
{
	xVec3* verts;
};

struct xVolumeAsset : xBaseAsset
{
	unsigned int flags;
	xBound bound;
	float rot;
	float xpivot;
	float zpivot;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_59 tranTable;
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

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xEntBoulder
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_39 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct RpTriangle
{
	type_55 vertIndex;
	short matIndex;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_95 colls;
	type_56 post;
	type_70 depenq;
};

struct xRot
{
	xVec3 axis;
	float angle;
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

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_100 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
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
	type_84 corner;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
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
		tri_data_1 tri;
	};
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct xParCmdDamagePlayer : xParCmdAsset
{
	int damage;
	int granular;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct zPlatFMRunTime
{
	unsigned int flags;
	type_76 tmrs;
	type_79 ttms;
	type_81 atms;
	type_85 dtms;
	type_87 vms;
	type_89 dss;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct xFFX
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

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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
	type_64 lastRefs;
	type_66 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xPlatformAsset
{
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
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
	type_109 BubbleWandTag;
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
	type_11 HangPawTag;
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
	type_72 Inv_PatsSock;
	type_75 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_80 Inv_LevelPickups;
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
	type_99 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_112 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_9 sb_model_indices;
	type_16 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_4 radius;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_104 name;
	type_106 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct RpSector
{
	int type;
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

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_102 MoveSpeed;
	type_105 AnimSneak;
	type_108 AnimWalk;
	type_111 AnimRun;
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
	type_21 talk_filter;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xEntMotionPenData
{
	unsigned char flags;
	unsigned char plane;
	type_94 pad;
	float len;
	float range;
	float period;
	float phase;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_92 beginUpdate;
	type_0 endUpdate;
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
	type_18 frustumPlanes;
	RwBBox frustumBoundBox;
	type_23 frustumCorners;
};

struct xCoef
{
	type_93 a;
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

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct xVec2
{
	float x;
	float y;
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
	type_110 frustplane;
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

struct RxNodeMethods
{
	type_22 nodeBody;
	type_24 nodeInit;
	type_25 nodeTerm;
	type_30 pipelineNodeInit;
	type_3 pipelineNodeTerm;
	type_10 pipelineNodeConfig;
	type_19 configMsgHandler;
};

struct zVolume : xVolume
{
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_114 wt;
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

struct _tagxPad
{
	type_33 value;
	type_36 last_value;
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
	type_65 up_tmr;
	type_69 down_tmr;
	type_88 analog;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_113 clusters;
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

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_6 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_14 sceneStart;
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

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
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

type_35 buffer;
type_42 buffer;
type_103 sClipVolume;
int sClipVolumeTotal;
zGlobals globals;
xQCControl xqc_def_ctrl;
type_63 xParCmdKillDistance_Update;
type_17 xParCmdApplyCamMat_Update;
type_96 xParCmdDamagePlayer_Update;
type_90 xParCmdAnimalMagentism_Update;
type_83 xParCmdClipVolumes_Update;
type_73 xParCmdCustom_Update;
type_68 xParCmdPlayerCollision_Update;
type_52 xParCmdJet_Update;

void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdCustom_Grass_Update(xParGroup* ps, float dt);
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps);
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float dt);
void xParCmdPlayerCollision_Update();
void xParCmdClipVolumes_Update(xParGroup* ps);
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps);
void zParCmdFindClipVolumes();
void zParCmdInit();

// xParCmdCustom_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c150
void xParCmdCustom_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	float mdt;
	float rSqr;
	float oorSqr;
}

// xParCmdApplyCamMat_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c320
void xParCmdApplyCamMat_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdApplyCamMat* cmd;
	xMat4x3* mat;
	float mul;
}

// xParCmdCustom_Grass_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c480
void xParCmdCustom_Grass_Update(xParGroup* ps, float dt)
{
	xPar* p;
}

// xParCmdJet_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c560
void xParCmdJet_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xParCmdJet* cmd;
	float mdt;
	float rSqr;
	float oorSqr;
}

// xParCmdDamagePlayer_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c6b0
void xParCmdDamagePlayer_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdDamagePlayer* cmd;
	xBound* pbound;
	int last_idx;
	int i;
	xCollis collis;
	xBound bnd_fake;
}

// xParCmdAnimalMagentism_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18c870
void xParCmdAnimalMagentism_Update(xParCmd* c, xParGroup* ps, float dt)
{
	xPar* p;
	xVec3 pos;
	float mul;
	xVec3 vec;
	float dist;
}

// xParCmdPlayerCollision_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca10
void xParCmdPlayerCollision_Update()
{
}

// xParCmdClipVolumes_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18ca20
void xParCmdClipVolumes_Update(xParGroup* ps)
{
	xPar* p;
	int i;
	xCollis collis;
}

// xParCmdKillDistance_Update__FP7xParCmdP9xParGroupf
// Start address: 0x18cad0
void xParCmdKillDistance_Update(xParCmd* c, xParGroup* ps)
{
	xPar* p;
	xParCmdKillDistance* cmd;
	xVec3* camera_pos;
}

// zParCmdFindClipVolumes__Fv
// Start address: 0x18cbb0
void zParCmdFindClipVolumes()
{
	type_97 findname;
	zVolume* vol;
}

// zParCmdInit__Fv
// Start address: 0x18cc50
void zParCmdInit()
{
}

