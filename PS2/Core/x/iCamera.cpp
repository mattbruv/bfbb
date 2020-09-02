typedef struct xCollis;
typedef struct RpInterpolator;
typedef struct RxHeap;
typedef struct xLightKit;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct RwSky2DVertex;
typedef struct RxPipelineNode;
typedef struct analog_data;
typedef struct xQuat;
typedef struct RwRaster;
typedef struct xModelInstance;
typedef struct RwCamera;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct sceGifTag;
typedef struct xAnimMultiFile;
typedef struct xGroup;
typedef struct RpPolygon;
typedef struct RxPipelineRequiresCluster;
typedef union sceGsScissor;
typedef struct RpAtomic;
typedef struct RpMaterialList;
typedef struct RwMatrixTag;
typedef struct xBaseAsset;
typedef struct xJSPNodeInfo;
typedef struct RxPipeline;
typedef struct RpMaterial;
typedef struct sceGsDispEnv;
typedef struct tGS_SMODE2;
typedef struct xUpdateCullMgr;
typedef struct xClumpCollBSPBranchNode;
typedef struct xVec4;
typedef struct xVec3;
typedef struct RwSurfaceProperties;
typedef union sceGsPrim;
typedef union sceGsFrame;
typedef struct _class_0;
typedef struct RpClump;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xAnimTransitionList;
typedef union sceGsZbuf;
typedef struct rxReq;
typedef struct RpGeometry;
typedef struct xEntCollis;
typedef struct RpWorldSector;
typedef struct xEntAsset;
typedef struct xAnimTable;
typedef enum RxClusterValidityReq;
typedef struct xAnimTransition;
typedef struct xUpdateCullEnt;
typedef struct xFFX;
typedef struct tGS_DISPFB2;
typedef struct RpMorphTarget;
typedef struct xEnt;
typedef struct xJSPHeader;
typedef struct xBound;
typedef struct iFogParams;
typedef struct RpWorld;
typedef struct xMat4x3;
typedef struct RpVertexNormal;
typedef enum RxNodeDefEditable;
typedef enum RxClusterValid;
typedef struct xAnimState;
typedef struct _tagxRumble;
typedef struct xEntFrame;
typedef struct sceGsDrawEnv1;
typedef struct rxHeapFreeBlock;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct xRot;
typedef struct xUpdateCullGroup;
typedef struct RpMeshHeader;
typedef struct xClumpCollBSPTree;
typedef struct RwResEntry;
typedef struct xQCData;
typedef struct xAnimFile;
typedef enum rxEmbeddedPacketState;
typedef struct xBBox;
typedef struct xSphere;
typedef struct xCamera;
typedef struct xAnimSingle;
typedef struct xShadowSimplePoly;
typedef struct xEnv;
typedef struct xModelPool;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct iEnv;
typedef struct xCylinder;
typedef struct RpTriangle;
typedef enum _tagPadState;
typedef struct RwFrame;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xAnimMultiFileBase;
typedef struct xGlobals;
typedef struct sceGsDBuffDc;
typedef struct xLightKitLight;
typedef struct _tagxPad;
typedef struct xGridBound;
typedef struct xScene;
typedef struct RwSphere;
typedef struct xAnimEffect;
typedef struct xShadowSimpleCache;
typedef struct RwTexDictionary;
typedef struct RxOutputSpec;
typedef union sceGsDthe;
typedef struct _tagPadAnalog;
typedef struct RpLight;
typedef struct xGroupAsset;
typedef struct xAnimPlay;
typedef struct xMat3x3;
typedef union sceGsTest;
typedef struct RxClusterRef;
typedef struct xLinkAsset;
typedef struct _tagiPad;
typedef enum RpWorldRenderOrder;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct tGS_DISPLAY2;
typedef struct RxIoSpec;
typedef struct RwTexture;
typedef struct sceGsDrawEnv2;
typedef struct RpSector;
typedef struct RxNodeMethods;
typedef struct xMemPool;
typedef struct RxPipelineCluster;
typedef union sceGsPrmodecont;
typedef struct RwSky2DVertexFields;
typedef union sceGsColclamp;
typedef struct RwFrustumPlane;
typedef struct xEntShadow;
typedef struct RxNodeDefinition;
typedef struct RwPlane;
typedef struct anim_coll_data;
typedef union sceGsXyoffset;
typedef struct RxCluster;
typedef struct tri_data;
typedef struct RxPipelineNodeParam;
typedef struct xClumpCollBSPVertInfo;
typedef struct RxPacket;
typedef struct sceGsRgbaq;
typedef struct tGS_PMODE;
typedef enum RwFogType;
typedef struct xClumpCollBSPTriangle;
typedef struct xBase;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct xSurface;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct _class_1;
typedef struct xModelBucket;
typedef union sceGsXyz;
typedef struct RwV2d;
typedef union _class_2;
typedef struct sceGsClear;
typedef struct tGS_BGCOLOR;
typedef struct xVec2;
typedef enum _tagRumbleType;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_2)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_3)(RxPipelineNode*, RxPipelineNodeParam*);
typedef void(*type_4)(xAnimPlay*, xAnimState*);
typedef int(*type_6)(RxNodeDefinition*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef void(*type_10)(RxNodeDefinition*);
typedef void(*type_11)(xAnimPlay*, xQuat*, xVec3*, int);
typedef int(*type_13)(RxPipelineNode*);
typedef void(*type_14)(RxPipelineNode*);
typedef int(*type_15)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_17)(RpClump*, void*);
typedef void(*type_20)(void*);
typedef xBase*(*type_22)(unsigned int);
typedef unsigned int(*type_23)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef char*(*type_25)(xBase*);
typedef RpAtomic*(*type_26)(RpAtomic*);
typedef char*(*type_27)(unsigned int);
typedef void(*type_29)(xEnt*, xScene*, float);
typedef void(*type_33)(xEnt*, xVec3*);
typedef unsigned int(*type_35)(xAnimTransition*, xAnimSingle*, void*);
typedef void(*type_36)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_37)(xEnt*, xScene*, float, xEntFrame*);
typedef void(*type_39)(xEnt*);
typedef unsigned int(*type_46)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_49)(xEnt*, xVec3*, xMat4x3*);
typedef RwCamera*(*type_50)(RwCamera*);
typedef RwCamera*(*type_52)(RwCamera*);
typedef void(*type_54)(xMemPool*, void*);
typedef RpWorldSector*(*type_56)(RpWorldSector*);
typedef unsigned int(*type_61)(void*, void*);
typedef void(*type_63)(RwResEntry*);
typedef RwObjectHasFrame*(*type_66)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef RwV3d type_5[8];
typedef unsigned short type_8[3];
typedef float type_9[2];
typedef analog_data type_12[2];
typedef RwSky2DVertex type_16[4];
typedef char type_18[4];
typedef RwTexCoords* type_19[8];
typedef xVec3 type_21[3];
typedef unsigned short type_24[3];
typedef sceGsDispEnv type_28[2];
typedef float type_30[2];
typedef unsigned int type_31[4];
typedef xVec4 type_32[12];
typedef float type_34[16];
typedef char type_38[128];
typedef type_38 type_40[6];
typedef unsigned char type_41[2];
typedef unsigned int type_42[4096];
typedef xAnimMultiFileEntry type_43[1];
typedef RpLight* type_44[2];
typedef unsigned short type_45[6];
typedef char type_47[32];
typedef RwFrame* type_48[2];
typedef RwTexCoords* type_51[8];
typedef xVec3 type_53[4];
typedef unsigned char type_55[3];
typedef char type_57[32];
typedef unsigned char type_58[22];
typedef float type_59[4];
typedef char type_60[32];
typedef unsigned char type_62[22];
typedef xCollis type_64[18];
typedef RxCluster type_65[1];
typedef <unknown type (0xa510)> type_67[4];
typedef float type_68[22];
typedef float type_69[22];

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

struct xLightKit
{
	unsigned int tagID;
	unsigned int groupID;
	unsigned int lightCount;
	xLightKitLight* lightList;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
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

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct xQuat
{
	xVec3 v;
	float s;
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
	_class_0 anim_coll;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_50 beginUpdate;
	type_52 endUpdate;
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
	type_1 frustumPlanes;
	RwBBox frustumBoundBox;
	type_5 frustumCorners;
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
	type_31 pad;
};

struct sceGifTag
{
	union
	{
		unsigned long NLOOP;
		unsigned long EOP;
		unsigned long pad16;
		unsigned long id;
		unsigned long PRE;
		unsigned long PRIM;
		unsigned long FLG;
		unsigned long NREG;
	};
	union
	{
		unsigned long REGS0;
		unsigned long REGS1;
		unsigned long REGS2;
		unsigned long REGS3;
		unsigned long REGS4;
		unsigned long REGS5;
		unsigned long REGS6;
		unsigned long REGS7;
		unsigned long REGS8;
		unsigned long REGS9;
		unsigned long REGS10;
		unsigned long REGS11;
		unsigned long REGS12;
		unsigned long REGS13;
		unsigned long REGS14;
		unsigned long REGS15;
	};
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_43 Files;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_8 vertIndex;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

union sceGsScissor
{
	unsigned long SCAX0;
	unsigned long pad11;
	unsigned long SCAX1;
	unsigned long pad27;
	unsigned long SCAY0;
	unsigned long pad43;
	unsigned long SCAY1;
	unsigned long pad59;
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
	type_26 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
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

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct tGS_SMODE2
{
	union
	{
		unsigned int INT;
		unsigned int FFMD;
		unsigned int DPMS;
		unsigned int p0;
	};
	unsigned int p1;
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
	type_20 activateCB;
	type_20 deactivateCB;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
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

union sceGsPrim
{
	unsigned long PRIM;
	unsigned long IIP;
	unsigned long TME;
	unsigned long FGE;
	unsigned long ABE;
	unsigned long AA1;
	unsigned long FST;
	unsigned long CTXT;
	unsigned long FIX;
	unsigned long pad11;
};

union sceGsFrame
{
	unsigned long FBP;
	unsigned long pad09;
	unsigned long FBW;
	unsigned long pad22;
	unsigned long PSM;
	unsigned long pad30;
	unsigned long FBMSK;
};

struct _class_0
{
	xVec3* verts;
};

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_17 callback;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

union sceGsZbuf
{
	unsigned long ZBP;
	unsigned long pad09;
	unsigned long PSM;
	unsigned long pad28;
	unsigned long ZMSK;
	unsigned long pad33;
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
	type_51 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
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
	type_64 colls;
	type_36 post;
	type_46 depenq;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_19 texCoords;
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

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
};

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_35 Conditional;
	type_35 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_61 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
};

struct xFFX
{
};

struct tGS_DISPFB2
{
	union
	{
		unsigned int FBP;
		unsigned int FBW;
		unsigned int PSM;
		unsigned int p0;
	};
	union
	{
		unsigned int DBX;
		unsigned int DBY;
		unsigned int p1;
	};
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
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
	type_29 update;
	type_29 endUpdate;
	type_33 bupdate;
	type_37 move;
	type_39 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_49 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
};

struct xJSPHeader
{
	type_18 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_56 renderCallBack;
	RxPipeline* pipeline;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
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
	type_11 BeforeAnimMatrices;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
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

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	unsigned long frame1addr;
	sceGsZbuf zbuf1;
	long zbuf1addr;
	sceGsXyoffset xyoffset1;
	long xyoffset1addr;
	sceGsScissor scissor1;
	long scissor1addr;
	sceGsPrmodecont prmodecont;
	long prmodecontaddr;
	sceGsColclamp colclamp;
	long colclampaddr;
	sceGsDthe dthe;
	long dtheaddr;
	sceGsTest test1;
	long test1addr;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
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

struct xRot
{
	xVec3 axis;
	float angle;
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_63 destroyNotify;
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

struct xAnimFile
{
	xAnimFile* Next;
	char* Name;
	unsigned int ID;
	unsigned int FileFlags;
	float Duration;
	float TimeOffset;
	unsigned short BoneCount;
	type_41 NumAnims;
	void** RawData;
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
	type_32 frustplane;
};

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_30 BilinearLerp;
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

struct xShadowSimplePoly
{
	type_21 vert;
	xVec3 norm;
};

struct xEnv
{
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_44 light;
	type_48 light_frame;
	int memlvl;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct RpTriangle
{
	type_24 vertIndex;
	short matIndex;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_40 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_47 sceneStart;
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

struct sceGsDBuffDc
{
	type_28 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw01;
	sceGsDrawEnv2 draw02;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw11;
	sceGsDrawEnv2 draw12;
	sceGsClear clear1;
};

struct xLightKitLight
{
	unsigned int type;
	RwRGBAReal color;
	type_34 matrix;
	float radius;
	float angle;
	RpLight* platLight;
};

struct _tagxPad
{
	type_58 value;
	type_62 last_value;
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
	type_68 up_tmr;
	type_69 down_tmr;
	type_12 analog;
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
	type_22 resolvID;
	type_25 base2Name;
	type_27 id2Name;
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_23 Callback;
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
	type_53 corner;
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

union sceGsDthe
{
	unsigned long DTHE;
	unsigned long pad01;
};

struct _tagPadAnalog
{
	char x;
	char y;
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

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
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
	type_11 BeforeAnimMatrices;
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

union sceGsTest
{
	unsigned long ATE;
	unsigned long ATST;
	unsigned long AREF;
	unsigned long AFAIL;
	unsigned long DATE;
	unsigned long DATM;
	unsigned long ZTE;
	unsigned long ZTST;
	unsigned long pad19;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_59 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct _tagiPad
{
	int port;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
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

struct tGS_DISPLAY2
{
	union
	{
		unsigned int DX;
		unsigned int DY;
		unsigned int MAGH;
		unsigned int MAGV;
		unsigned int p0;
	};
	union
	{
		unsigned int DW;
		unsigned int DH;
		unsigned int p1;
	};
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_57 name;
	type_60 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct sceGsDrawEnv2
{
	sceGsFrame frame2;
	unsigned long frame2addr;
	sceGsZbuf zbuf2;
	long zbuf2addr;
	sceGsXyoffset xyoffset2;
	long xyoffset2addr;
	sceGsScissor scissor2;
	long scissor2addr;
	sceGsPrmodecont prmodecont;
	long prmodecontaddr;
	sceGsColclamp colclamp;
	long colclampaddr;
	sceGsDthe dthe;
	long dtheaddr;
	sceGsTest test2;
	long test2addr;
};

struct RpSector
{
	int type;
};

struct RxNodeMethods
{
	type_3 nodeBody;
	type_6 nodeInit;
	type_10 nodeTerm;
	type_13 pipelineNodeInit;
	type_14 pipelineNodeTerm;
	type_15 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_54 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

union sceGsPrmodecont
{
	unsigned long AC;
	unsigned long pad01;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float camVertex_z;
	float u;
	float v;
	float recipZ;
	float pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float pad2;
};

union sceGsColclamp
{
	unsigned long CLAMP;
	unsigned long pad01;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_9 radius;
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

struct anim_coll_data
{
};

union sceGsXyoffset
{
	unsigned long OFX;
	unsigned long pad16;
	unsigned long OFY;
	unsigned long pad48;
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

struct tri_data
{
	unsigned int index;
	float r;
	float d;
};

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
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
	type_65 clusters;
};

struct sceGsRgbaq
{
	union
	{
		unsigned int R;
		unsigned int G;
		unsigned int B;
		unsigned int A;
	};
	float Q;
};

struct tGS_PMODE
{
	union
	{
		unsigned int EN1;
		unsigned int EN2;
		unsigned int CRTMD;
		unsigned int MMOD;
		unsigned int AMOD;
		unsigned int SLBG;
		unsigned int ALP;
		unsigned int p0;
	};
	unsigned int p1;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
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
	type_66 sync;
};

struct xSurface
{
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_67 qWords;
};

struct _class_1
{
	float t;
	float u;
	float v;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

union sceGsXyz
{
	unsigned long X;
	unsigned long Y;
	unsigned long Z;
};

struct RwV2d
{
	float x;
	float y;
};

union _class_2
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct sceGsClear
{
	sceGsTest testa;
	long testaaddr;
	sceGsPrim prim;
	long primaddr;
	sceGsRgbaq rgbaq;
	long rgbaqaddr;
	sceGsXyz xyz2a;
	long xyz2aaddr;
	sceGsXyz xyz2b;
	long xyz2baddr;
	sceGsTest testb;
	long testbaddr;
};

struct tGS_BGCOLOR
{
	union
	{
		unsigned int R;
		unsigned int G;
		unsigned int B;
		unsigned int p0;
	};
	unsigned int p1;
};

struct xVec2
{
	float x;
	float y;
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

float sCameraNearClip;
float sCameraFarClip;
RwCamera* globalCamera;
RwCamera* sMainGameCamera;
float xCameraLastFov;
type_16 Vertex;
type_45 Index;
RwRaster* sBBraster;
RwCamera* sBBcamera;
unsigned int setup;
float xfactor;
float yfactor;
xGlobals* xglobals;
type_42 ourGlobals;
int skyCameraExt;
<unknown type (0xa510)>* _rwDMAPktPtr;
sceGsDBuffDc _rwDMAFlipData;
int skyFrameBit;

void iCameraSetFogRenderStates();
void iCameraUpdateFog(long t);
void iCameraSetFogParams(iFogParams* fp, float time);
void iCameraSetNearFarClip(float nearPlane, float farPlane);
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix);
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom);
void iCameraSetFOV(RwCamera* cam, float fov);
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos);
void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane);
void iCameraShowRaster(RwCamera* cam);
void iCameraEnd(RwCamera* cam);
void iCameraBegin(RwCamera* cam, int clear);
void iCameraDestroy(RwCamera* camera);
RwCamera* iCameraCreate(int width, int height, int mainGameCamera);

// iCameraSetFogRenderStates__Fv
// Start address: 0x35c2f0
void iCameraSetFogRenderStates()
{
	RwCamera* pCamera;
	iFogParams* pFogParams;
	unsigned int bite_me;
}

// iCameraUpdateFog__FP8RwCameral
// Start address: 0x35c3d0
void iCameraUpdateFog(long t)
{
	iFogParams* fa;
	iFogParams* fb;
	float a;
}

// iCameraSetFogParams__FP10iFogParamsf
// Start address: 0x35ca60
void iCameraSetFogParams(iFogParams* fp, float time)
{
}

// iCameraSetNearFarClip__Fff
// Start address: 0x35ccd0
void iCameraSetNearFarClip(float nearPlane, float farPlane)
{
}

// iCamGetViewMatrix__FP8RwCameraP7xMat4x3
// Start address: 0x35cd10
void iCamGetViewMatrix(RwCamera* camera, xMat4x3* view_matrix)
{
	RwMatrixTag* rw_view;
}

// iCameraAssignEnv__FP8RwCameraP4iEnv
// Start address: 0x35cdb0
void iCameraAssignEnv(RwCamera* camera, iEnv* env_geom)
{
}

// iCameraSetFOV__FP8RwCameraf
// Start address: 0x35cdf0
void iCameraSetFOV(RwCamera* cam, float fov)
{
	RwV2d vw;
}

// iCameraUpdatePos__FP8RwCameraP7xMat4x3
// Start address: 0x35ce70
void iCameraUpdatePos(RwCamera* cam, xMat4x3* pos)
{
	RwFrame* f;
	RwMatrixTag* m;
}

// iCameraFrustumPlanes__FP8RwCameraP5xVec4
// Start address: 0x35ced0
void iCameraFrustumPlanes(RwCamera* cam, xVec4* frustplane)
{
	RwFrustumPlane* rwPlane;
}

// iCameraShowRaster__FP8RwCamera
// Start address: 0x35d060
void iCameraShowRaster(RwCamera* cam)
{
}

// iCameraEnd__FP8RwCamera
// Start address: 0x35d070
void iCameraEnd(RwCamera* cam)
{
}

// iCameraBegin__FP8RwCamerai
// Start address: 0x35d0a0
void iCameraBegin(RwCamera* cam, int clear)
{
}

// iCameraDestroy__FP8RwCamera
// Start address: 0x35d120
void iCameraDestroy(RwCamera* camera)
{
	RpWorld* pWorld;
	RwRaster* raster;
	RwFrame* frame;
}

// iCameraCreate__Fiii
// Start address: 0x35d1f0
RwCamera* iCameraCreate(int width, int height, int mainGameCamera)
{
	RwV2d vw;
	RwCamera* camera;
}

