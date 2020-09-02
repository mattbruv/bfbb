typedef struct xAnimState;
typedef struct _tagEmitLine;
typedef struct xEntDrive;
typedef struct RpWorldSector;
typedef struct xBaseAsset;
typedef struct RpMorphTarget;
typedef struct RxHeap;
typedef struct xQCData;
typedef struct tagiRenderInput;
typedef struct xSurface;
typedef struct RwBBox;
typedef struct xPar;
typedef struct RwRGBA;
typedef struct xBase;
typedef struct xGridBound;
typedef struct RwTexture;
typedef struct RxPipelineNode;
typedef struct zJumpParam;
typedef struct xAnimEffect;
typedef struct xEntAsset;
typedef struct xUpdateCullMgr;
typedef struct xQuat;
typedef struct zPlayerCarryInfo;
typedef struct RpLight;
typedef struct xModelBucket;
typedef struct _zEnv;
typedef struct xCamera;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct xEntCollis;
typedef struct RxObjSpace3DVertex;
typedef struct RxPipelineNodeTopSortData;
typedef struct RpClump;
typedef struct rxHeapBlockHeader;
typedef struct zEntHangable;
typedef struct RpWorld;
typedef struct zPlayerSettings;
typedef struct RwRaster;
typedef struct xEnt;
typedef struct xClumpCollBSPTree;
typedef struct xAnimFile;
typedef struct RwFrame;
typedef struct RwCamera;
typedef struct RxPipelineRequiresCluster;
typedef struct zEnt;
typedef struct xModelInstance;
typedef struct xJSPNodeInfo;
typedef struct xParCmdTex;
typedef struct zPlatform;
typedef struct xEnvAsset;
typedef struct xUpdateCullEnt;
typedef struct xAnimTransition;
typedef struct _zPortal;
typedef struct xAnimTransitionList;
typedef struct xFFX;
typedef struct xEntFrame;
typedef struct xLightKit;
typedef struct RxPipeline;
typedef struct xParGroup;
typedef struct xParCmdAsset;
typedef struct zCutsceneMgr;
typedef struct xModelTag;
typedef struct RpSector;
typedef struct _tagEmitVolume;
typedef struct xMat4x3;
typedef struct xPortalAsset;
typedef struct xVec4;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef struct zAssetPickupTable;
typedef struct RwMatrixTag;
typedef struct iFogParams;
typedef struct RwLLLink;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xBound;
typedef struct _tagxRumble;
typedef struct xShadowSimplePoly;
typedef struct rxReq;
typedef struct xUpdateCullGroup;
typedef struct iEnv;
typedef struct xEntBoulder;
typedef struct xScene;
typedef enum RxClusterValidityReq;
typedef struct tri_data_0;
typedef struct xAnimMultiFile;
typedef struct RpVertexNormal;
typedef struct _tagEmitOffsetPoint;
typedef struct RpAtomic;
typedef struct xCollis;
typedef enum RxNodeDefEditable;
typedef struct xParEmitterAsset;
typedef struct xJSPHeader;
typedef enum RxClusterValid;
typedef struct xLightKitLight;
typedef struct tri_data_1;
typedef enum _tagPadState;
typedef struct RpInterpolator;
typedef struct rxHeapFreeBlock;
typedef struct xRot;
typedef struct xShadowSimpleCache;
typedef struct _class_0;
typedef struct RpMaterial;
typedef struct xGlobals;
typedef struct zParSys;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef struct _tagxPad;
typedef struct xAnimTable;
typedef enum RwCameraProjection;
typedef struct xPEVCyl;
typedef struct RpPolygon;
typedef enum RxClusterForcePresent;
typedef struct zLasso;
typedef struct xCylinder;
typedef struct RpMaterialList;
typedef union RxColorUnion;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xGroupAsset;
typedef struct _tagPadAnalog;
typedef struct _class_1;
typedef struct xParSysAsset;
typedef struct _tagiPad;
typedef struct xEnv;
typedef struct RwSphere;
typedef struct xAnimMultiFileEntry;
typedef struct xLinkAsset;
typedef struct RpGeometry;
typedef struct xAnimActiveEffect;
typedef struct xPEEntBone;
typedef struct xModelPool;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef struct xEntShadow;
typedef struct xClumpCollBSPVertInfo;
typedef struct xAnimSingle;
typedef struct xClumpCollBSPBranchNode;
typedef struct xMat3x3;
typedef struct anim_coll_data;
typedef struct RxClusterRef;
typedef struct xClumpCollBSPTriangle;
typedef struct RwObject;
typedef struct RxIoSpec;
typedef struct xAnimMultiFileBase;
typedef struct xPECircle;
typedef struct RpMeshHeader;
typedef struct RwResEntry;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct zGlobals;
typedef struct RxPipelineCluster;
typedef struct zGlobalSettings;
typedef struct xGroup;
typedef struct RwFrustumPlane;
typedef struct xAnimPlay;
typedef struct RpTriangle;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct zPlayerLassoInfo;
typedef struct xParCmd;
typedef union _class_2;
typedef struct xParSys;
typedef struct zScene;
typedef struct xVec2;
typedef struct RxCluster;
typedef struct _tagEmitSphere;
typedef struct zLedgeGrabParams;
typedef struct xBBox;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef enum _zPlayerWallJumpState;
typedef enum RwFogType;
typedef struct tagiRenderArrays;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef enum _tagRumbleType;
typedef struct _tagEmitRect;
typedef struct RwLinkList;
typedef enum _zPlayerType;
typedef enum RpWorldRenderOrder;
typedef struct analog_data;
typedef struct RwV2d;
typedef struct xPEEntBound;
typedef struct zCheckPoint;
typedef struct zPlayerGlobals;

typedef char*(*type_5)(xBase*);
typedef RpWorldSector*(*type_6)(RpWorldSector*);
typedef unsigned int(*type_9)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef char*(*type_10)(unsigned int);
typedef int(*type_11)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_14)(RxNodeDefinition*);
typedef void(*type_15)(RxNodeDefinition*);
typedef int(*type_17)(RxPipelineNode*);
typedef unsigned int(*type_18)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_19)(RxPipelineNode*);
typedef int(*type_23)(RxPipelineNode*, RxPipeline*);
typedef void(*type_28)(void*);
typedef void(*type_33)(xAnimPlay*, xAnimState*);
typedef void(*type_37)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_38)(xEnt*, xScene*, float);
typedef void(*type_41)(xAnimPlay*, xQuat*, xVec3*, int);
typedef void(*type_45)(void*, xParGroup*);
typedef void(*type_46)(xEnt*, xVec3*);
typedef void(*type_48)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_49)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_52)(xEnt*);
typedef unsigned int(*type_57)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_60)(xEnt*, xVec3*, xMat4x3*);
typedef xBase*(*type_68)(unsigned int);
typedef RpClump*(*type_69)(RpClump*, void*);
typedef unsigned int(*type_72)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef RwCamera*(*type_75)(RwCamera*);
typedef unsigned int(*type_77)(void*, void*);
typedef RwCamera*(*type_82)(RwCamera*);
typedef void(*type_84)(xMemPool*, void*);
typedef RpAtomic*(*type_89)(RpAtomic*);
typedef void(*type_91)(RwResEntry*);
typedef int(*type_96)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RwObjectHasFrame*(*type_102)(RwObjectHasFrame*);

typedef unsigned int type_0[72];
typedef unsigned int type_1[15];
typedef char type_2[4];
typedef unsigned short type_3[6];
typedef xBase* type_4[72];
typedef analog_data type_7[2];
typedef RwFrustumPlane type_8[6];
typedef unsigned char type_12[4];
typedef RwV3d type_13[8];
typedef unsigned char type_16[3];
typedef xVec4 type_20[12];
typedef RwRGBA type_21[8];
typedef unsigned char type_22[2];
typedef unsigned int type_24[2];
typedef unsigned char type_25[2];
typedef unsigned char type_26[2];
typedef float type_27[6];
typedef xVec3 type_29[3];
typedef unsigned char type_30[3];
typedef float type_31[3];
typedef float type_32[3];
typedef xModelTag type_34[2];
typedef float type_35[3];
typedef float type_36[4];
typedef RpLight* type_39[2];
typedef float type_40[4];
typedef RxObjSpace3DVertex type_42[4];
typedef float type_43[4];
typedef RwFrame* type_44[2];
typedef float type_47[16];
typedef unsigned char type_50[2];
typedef xEnt* type_51[111];
typedef unsigned short type_53[6];
typedef float type_54[256];
typedef char type_55[16];
typedef unsigned short type_56[3];
typedef char type_58[128];
typedef type_58 type_59[6];
typedef unsigned int type_61[4];
typedef char type_62[16];
typedef unsigned char type_63[14];
typedef xModelTag type_64[4];
typedef char type_65[32];
typedef xVec3 type_66[4];
typedef xModelInstance* type_67[14];
typedef unsigned char type_70[4];
typedef unsigned int type_71[4096];
typedef RwTexCoords* type_73[8];
typedef float type_74[2];
typedef RxObjSpace3DVertex type_76[4];
typedef unsigned char type_78[22];
typedef float type_79[4];
typedef xCollis type_80[18];
typedef unsigned char type_81[22];
typedef unsigned short type_83[6];
typedef unsigned short type_85[3];
typedef char type_86[32];
typedef xVec3 type_87[5];
typedef char type_88[32];
typedef unsigned char type_90[2];
typedef xAnimMultiFileEntry type_92[1];
typedef float type_93[0];
typedef unsigned char type_94[5];
typedef xVec3 type_95[60];
typedef float type_97[22];
typedef unsigned short type_98[960];
typedef RxCluster type_99[1];
typedef float type_100[22];
typedef RxObjSpace3DVertex type_101[480];
typedef float type_103[480];
typedef unsigned int type_104[15];
typedef float type_105[2];
typedef xVec3 type_106[4];
typedef RwTexCoords* type_107[8];
typedef RxObjSpace3DVertex type_108[4];
typedef unsigned int type_109[15];

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
	type_33 BeforeEnter;
	type_37 StateCallback;
	type_41 BeforeAnimMatrices;
};

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
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

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_73 texCoords;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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

struct tagiRenderInput
{
	unsigned short* m_index;
	RxObjSpace3DVertex* m_vertex;
	float* m_vertexTZ;
	unsigned int m_mode;
	int m_vertexType;
	int m_vertexTypeSize;
	int m_indexCount;
	int m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
};

struct xSurface
{
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct xPar
{
	xPar* m_next;
	xPar* m_prev;
	float m_lifetime;
	type_12 m_c;
	xVec3 m_pos;
	float m_size;
	xVec3 m_vel;
	float m_sizeVel;
	unsigned char m_flag;
	unsigned char m_mode;
	type_26 m_texIdx;
	type_30 m_rotdeg;
	unsigned char pad8;
	float totalLifespan;
	xParEmitterAsset* m_asset;
	type_40 m_cvel;
	type_43 m_cfl;
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
	type_96 eventFunc;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_86 name;
	type_88 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct zJumpParam
{
	float PeakHeight;
	float TimeGravChange;
	float TimeHold;
	float ImpulseVel;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_72 Callback;
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
	type_28 activateCB;
	type_28 deactivateCB;
};

struct xQuat
{
	xVec3 v;
	float s;
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

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
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
	type_20 frustplane;
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
	type_80 colls;
	type_48 post;
	type_57 depenq;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
};

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_69 callback;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_61 pad;
};

struct zEntHangable
{
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
	type_6 renderCallBack;
	RxPipeline* pipeline;
};

struct zPlayerSettings
{
	_zPlayerType pcType;
	type_27 MoveSpeed;
	type_31 AnimSneak;
	type_32 AnimWalk;
	type_35 AnimRun;
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
	type_70 talk_filter;
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
	type_38 update;
	type_38 endUpdate;
	type_46 bupdate;
	type_49 move;
	type_52 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_60 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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
	type_90 NumAnims;
	void** RawData;
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

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_75 beginUpdate;
	type_82 endUpdate;
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
	type_8 frustumPlanes;
	RwBBox frustumBoundBox;
	type_13 frustumCorners;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct zEnt : xEnt
{
	xAnimTable* atbl;
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

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct zPlatform
{
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

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_77 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_18 Conditional;
	type_18 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct _zPortal : xBase
{
	xPortalAsset* passet;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

struct xFFX
{
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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
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
	type_45 draw;
	xParCmdTex* m_cmdTex;
};

struct xParCmdAsset
{
	unsigned int type;
	unsigned char enabled;
	unsigned char mode;
	type_50 pad;
};

struct zCutsceneMgr
{
};

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_36 wt;
};

struct RpSector
{
	int type;
};

struct _tagEmitVolume
{
	unsigned int emit_volumeID;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xPortalAsset : xBaseAsset
{
	unsigned int assetCameraID;
	unsigned int assetMarkerID;
	float ang;
	unsigned int sceneID;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
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

struct zAssetPickupTable
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_16 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct xShadowSimplePoly
{
	type_29 vert;
	xVec3 norm;
};

struct rxReq
{
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_39 light;
	type_44 light_frame;
	int memlvl;
};

struct xEntBoulder
{
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
	type_68 resolvID;
	type_5 base2Name;
	type_10 id2Name;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct tri_data_0 : tri_data_1
{
	xVec3 loc;
	float yaw;
	xCollis* coll;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_92 Files;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct _tagEmitOffsetPoint
{
	xVec3 offset;
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
	type_89 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
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

struct xJSPHeader
{
	type_2 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_47 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct tri_data_1
{
	unsigned int index;
	float r;
	float d;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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
	type_66 corner;
};

struct _class_0
{
	xVec3* verts;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_59 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_65 sceneStart;
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

struct zParSys : xParSys
{
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

struct _tagxPad
{
	type_78 value;
	type_81 last_value;
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
	type_97 up_tmr;
	type_100 down_tmr;
	type_7 analog;
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

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_56 vertIndex;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
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
	type_87 lastRefs;
	type_94 reindex;
	xVec3 anchor;
	xModelTag tag;
	xModelInstance* model;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
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

struct _class_1
{
	float t;
	float u;
	float v;
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

struct _tagiPad
{
	int port;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xAnimMultiFileEntry
{
	unsigned int ID;
	xAnimFile* File;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_79 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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
	type_107 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct xAnimActiveEffect
{
	xAnimEffect* Effect;
	unsigned int Handle;
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

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_105 radius;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_74 BilinearLerp;
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

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

struct anim_coll_data
{
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xClumpCollBSPTriangle
{
	_class_2 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
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
	type_91 destroyNotify;
};

struct RxNodeMethods
{
	type_11 nodeBody;
	type_14 nodeInit;
	type_15 nodeTerm;
	type_17 pipelineNodeInit;
	type_19 pipelineNodeTerm;
	type_23 pipelineNodeConfig;
	type_9 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_84 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct zGlobals : xGlobals
{
	zPlayerGlobals player;
	zAssetPickupTable* pickupTable;
	zCutsceneMgr* cmgr;
	zScene* sceneCur;
	zScene* scenePreload;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
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
	type_22 PowerUp;
	type_25 InitialPowerUp;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
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
	type_41 BeforeAnimMatrices;
};

struct RpTriangle
{
	type_85 vertIndex;
	short matIndex;
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

struct RwPlane
{
	RwV3d normal;
	float distance;
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

struct xParCmd
{
	unsigned int flag;
	xParCmdAsset* tasset;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
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
	type_0 baseCount;
	type_4 baseList;
	_zEnv* zen;
};

struct xVec2
{
	float x;
	float y;
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

struct _tagEmitSphere
{
	float radius;
};

struct zLedgeGrabParams
{
	float animGrab;
	float zdist;
	type_95 tranTable;
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

struct xBBox
{
	xVec3 center;
	xBox box;
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
	type_99 clusters;
};

enum _zPlayerWallJumpState
{
	k_WALLJUMP_NOT,
	k_WALLJUMP_LAUNCH,
	k_WALLJUMP_FLIGHT,
	k_WALLJUMP_LAND
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct tagiRenderArrays
{
	type_98 m_index;
	type_101 m_vertex;
	type_103 m_vertexTZ;
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
	type_102 sync;
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

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct RwLinkList
{
	RwLLLink link;
};

enum _zPlayerType
{
	ePlayer_SB,
	ePlayer_Patrick,
	ePlayer_Sandy,
	ePlayer_MAXTYPES
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct RwV2d
{
	float x;
	float y;
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
	type_34 BubbleWandTag;
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
	type_64 HangPawTag;
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
	type_104 Inv_PatsSock;
	type_109 Inv_PatsSock_Max;
	unsigned int Inv_PatsSock_CurrentLevel;
	type_1 Inv_LevelPickups;
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
	type_24 TongueFlags;
	xVec3 RootUp;
	xVec3 RootUpTarget;
	zCheckPoint cp;
	unsigned int SlideTrackSliding;
	unsigned int SlideTrackCount;
	type_51 SlideTrackEnt;
	unsigned int SlideNotGroundedSinceSlide;
	xVec3 SlideTrackDir;
	xVec3 SlideTrackVel;
	float SlideTrackDecay;
	float SlideTrackLean;
	float SlideTrackLand;
	type_63 sb_model_indices;
	type_67 sb_models;
	unsigned int currentPlayer;
	xVec3 PredictRotate;
	xVec3 PredictTranslate;
	float PredictAngV;
	xVec3 PredictCurrDir;
	float PredictCurrVel;
	float KnockBackTimer;
	float KnockIntoAirTimer;
};

type_55 buffer;
type_62 buffer;
int gColorTableInit;
type_54 gColorTable;
RpAtomic* sParAtomic;
RpClump* sParClump;
RpMaterial* sParMaterial;
RwFrame* sParClumpFrame;
RwFrame* sParAtomicFrame;
RwTexture* sParTexture;
float sParEmitterWidth;
float sParEmitterLength;
float sParEmitterAngle;
float sParSize;
float sParGrowth;
float sParAspectRatio;
float sParFlightTime;
float sParMinSpeed;
float sParMaxSpeed;
float sParDamping;
RwV3d sParForce;
int sParStartColor;
int sParStartAlpha;
int sParEndColor;
int sParEndAlpha;
type_21 sParColors;
int sParAdded;
tagiRenderArrays gRenderArr;
tagiRenderInput gRenderBuffer;
type_93 cosSinPolynomial;
zGlobals globals;
type_71 ourGlobals;

void iParMgrRenderParSys_Flat(void* data, xParGroup* ps);
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps);
void iParMgrRenderParSys_Static();
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps);
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps);
void iRenderPushFlat(xPar* p, xParCmdTex* tex);
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex);
void iRenderSetCameraViewMatrix(xMat4x3* m);
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps);
void iParMgrRender();
void iParMgrUpdate();
void iParMgrInit();

// iParMgrRenderParSys_Flat__FPvP9xParGroup
// Start address: 0x1b0b60
void iParMgrRenderParSys_Flat(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
}

// iParMgrRenderParSys_Ground__FPvP9xParGroup
// Start address: 0x1b0c60
void iParMgrRenderParSys_Ground(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	xParCmdTex* tex;
	xPar* p;
	void* vertices;
	unsigned short* indices;
	int vertexCount;
	int indexCount;
	float size;
	type_106 vert;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	xMat3x3 groundmat;
	float angx;
	float angy;
	float angz;
	xVec3 zdir;
	xVec3 xdir;
	xVec3 centre;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	RwV3d _packed;
	float u1;
	float u2;
	float v1;
	float v2;
	unsigned short* src;
	unsigned short* dst;
	int i;
	type_76 v3d;
	type_83 i3d;
}

// iParMgrRenderParSys_Static__FPvP9xParGroup
// Start address: 0x1b15b0
void iParMgrRenderParSys_Static()
{
}

// iParMgrRenderParSys_QuadStreak__FPvP9xParGroup
// Start address: 0x1b15c0
void iParMgrRenderParSys_QuadStreak(void* data, xParGroup* ps)
{
	xPar* idx;
	RwTexture* texture;
	RwRaster* raster;
}

// iParMgrRenderParSys_InvStreak__FPvP9xParGroup
// Start address: 0x1b16d0
void iParMgrRenderParSys_InvStreak(void* data, xParGroup* ps)
{
	unsigned int transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	xPar* p;
	void* vertices;
	int vertexCount;
}

// iParMgrRenderParSys_Streak__FPvP9xParGroup
// Start address: 0x1b19b0
void iParMgrRenderParSys_Streak(void* data, xParGroup* ps)
{
	unsigned int transformFlags;
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	RxObjSpace3DVertex* v3d;
	xPar* p;
	void* vertices;
	int vertexCount;
}

// iRenderPushFlat__FP4xParP10xParCmdTex
// Start address: 0x1b1c90
void iRenderPushFlat(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	unsigned short* indices;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	float size;
	xMat3x3 groundmat;
	float yaw;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float u1;
	float u2;
	float v1;
	float v2;
	unsigned short* dst;
	type_42 v3d;
	type_53 i3d;
}

// iRenderPushQuadStreak__FP4xParP10xParCmdTex
// Start address: 0x1b21e0
void iRenderPushQuadStreak(xPar* p, xParCmdTex* tex)
{
	void* vertices;
	unsigned short* indices;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	float size;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	RwRGBA* _col;
	float u1;
	float u2;
	float v1;
	float v2;
	unsigned short* dst;
	type_108 v3d;
	type_3 i3d;
}

// iRenderSetCameraViewMatrix__FP7xMat4x3
// Start address: 0x1b26e0
void iRenderSetCameraViewMatrix(xMat4x3* m)
{
	RwMatrixTag* mat;
}

// iParMgrRenderParSys_Sprite__FPvP9xParGroup
// Start address: 0x1b28f0
void iParMgrRenderParSys_Sprite(void* data, xParGroup* ps)
{
	xPar* idx;
	zParSys* s;
	RwTexture* texture;
	RwRaster* raster;
	int indexCount;
	int vertexCount;
	unsigned short* i3d;
	RxObjSpace3DVertex* v3d;
	xParCmdTex* tex;
	unsigned int pivot;
	xVec3 offset;
	xVec3 temp_offset;
	xPar* p;
	float u1;
	float u2;
	float v1;
	float v2;
}

// iParMgrRender__Fv
// Start address: 0x1b30e0
void iParMgrRender()
{
}

// iParMgrUpdate__Ff
// Start address: 0x1b30f0
void iParMgrUpdate()
{
}

// iParMgrInit__Fv
// Start address: 0x1b3100
void iParMgrInit()
{
	int i;
}

