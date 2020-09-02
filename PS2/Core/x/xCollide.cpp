typedef struct xSphere;
typedef struct xBox;
typedef struct RpLight;
typedef struct xAnimPlay;
typedef struct xEnt;
typedef struct RxHeap;
typedef struct xGridBound;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct xAnimState;
typedef struct xCollis;
typedef struct xAnimTransition;
typedef struct RxPipelineNode;
typedef struct xSweptSphere;
typedef struct RwFrame;
typedef struct xAnimSingle;
typedef struct RpPolygon;
typedef struct xQuat;
typedef struct _class_0;
typedef struct RpCollisionTriangle;
typedef struct RwV3d;
typedef struct RwTexCoords;
typedef struct RpMaterialList;
typedef struct xEntAsset;
typedef struct RxPipelineNodeTopSortData;
typedef struct xVec3;
typedef struct rxHeapBlockHeader;
typedef struct xParabola;
typedef struct xEnv;
typedef struct RpIntersection;
typedef struct xScene;
typedef struct xBaseAsset;
typedef struct RpWorldSector;
typedef struct xMat4x3;
typedef struct RpAtomic;
typedef struct RpMaterial;
typedef struct ParabolaCBData;
typedef struct RxPipelineRequiresCluster;
typedef struct xCapsule;
typedef struct xModelPool;
typedef struct xModelInstance;
typedef struct xConic;
typedef struct xMat3x3;
typedef struct xBound;
typedef struct xAnimEffect;
typedef struct RxPipeline;
typedef struct RpClump;
typedef struct RpGeometry;
typedef struct tri_data;
typedef struct xEntFrame;
typedef struct xVec4;
typedef struct RwSurfaceProperties;
typedef struct SweptSphereCollParam;
typedef struct RwMatrixTag;
typedef struct ConeDepen;
typedef struct RpMorphTarget;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct xQCData;
typedef struct rxReq;
typedef struct RpV3dGradient;
typedef struct xClumpCollBSPTree;
typedef struct RwRaster;
typedef enum RxClusterValidityReq;
typedef struct xClumpCollBSPTriangle;
typedef struct xShadowSimplePoly;
typedef struct RpVertexNormal;
typedef struct xAnimTable;
typedef struct xRay3;
typedef struct xClumpCollBSPVertInfo;
typedef struct xMemPool;
typedef struct xClumpCollBSPBranchNode;
typedef union IntersectionCallBack;
typedef struct xBBox;
typedef struct RpCollBSPLeafNode;
typedef struct RpMeshHeader;
typedef enum RxNodeDefEditable;
typedef struct RwResEntry;
typedef enum RxClusterValid;
typedef struct RpTriangle;
typedef struct xRot;
typedef struct rxHeapFreeBlock;
typedef struct xIsect;
typedef struct xLightKit;
typedef struct xLightKitLight;
typedef struct xAnimFile;
typedef struct xShadowSimpleCache;
typedef enum _xCollsIdx;
typedef enum rxEmbeddedPacketState;
typedef struct xEntCollis;
typedef struct xAnimTransitionList;
typedef enum RxClusterForcePresent;
typedef struct xSphereHitsModel_context;
typedef struct xCylinder;
typedef struct RpCollBSPBranchNode;
typedef struct xQCControl;
typedef struct CallBackParam;
typedef union _class_1;
typedef struct RxClusterDefinition;
typedef struct RpCollBSPTree;
typedef enum RpIntersectType;
typedef struct RwSphere;
typedef struct xVec2;
typedef struct xFFX;
typedef union RwSplitBits;
typedef struct xAnimMultiFile;
typedef struct RwTexDictionary;
typedef struct xGrid;
typedef struct iEnv;
typedef struct RxOutputSpec;
typedef enum RpWorldRenderOrder;
typedef union xiMat4x3Union;
typedef struct xLinkAsset;
typedef struct xJSPNodeInfo;
typedef struct xEntShadow;
typedef struct RxClusterRef;
typedef struct xSurface;
typedef struct RwTexture;
typedef struct RpSector;
typedef struct RwObject;
typedef struct anim_coll_data;
typedef struct RwLLLink;
typedef struct RxIoSpec;
typedef struct xModelBucket;
typedef struct RwLine;
typedef union RpIntersectData;
typedef struct RxNodeMethods;
typedef struct RxPipelineCluster;
typedef struct xBase;
typedef struct xJSPHeader;
typedef struct RxNodeDefinition;
typedef struct RpWorld;
typedef struct nodeInfo;
typedef struct RxCluster;
typedef struct xAnimMultiFileEntry;
typedef struct xAnimActiveEffect;
typedef struct RxPipelineNodeParam;
typedef struct RxPacket;
typedef struct xClumpCollV3dGradient;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef struct RwLinkList;
typedef struct xAnimMultiFileBase;
typedef struct _class_2;
typedef struct _class_3;
typedef struct RpInterpolator;

typedef int(*type_1)(int, int, void*);
typedef void(*type_7)(xAnimState*, xAnimSingle*, void*);
typedef unsigned int(*type_10)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_12)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_15)(RxNodeDefinition*);
typedef RpCollisionTriangle*(*type_16)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef void(*type_18)(RxNodeDefinition*);
typedef int(*type_20)(RxPipelineNode*);
typedef int(*type_21)(int, int, void*);
typedef void(*type_23)(RxPipelineNode*);
typedef void(*type_24)(xAnimPlay*, xAnimState*);
typedef int(*type_25)(RxPipelineNode*, RxPipeline*);
typedef RpClump*(*type_26)(RpClump*, void*);
typedef unsigned int(*type_27)(unsigned int, xAnimActiveEffect*, xAnimSingle*, void*);
typedef xBase*(*type_28)(unsigned int);
typedef int(*type_29)(xClumpCollBSPTriangle*, void*);
typedef void(*type_30)(xAnimPlay*, xQuat*, xVec3*, int);
typedef char*(*type_32)(xBase*);
typedef RpCollisionTriangle*(*type_34)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef char*(*type_35)(unsigned int);
typedef RpWorldSector*(*type_36)(RpIntersection*, RpWorldSector*, void*);
typedef RpAtomic*(*type_37)(RpIntersection*, RpWorldSector*, RpAtomic*, float, void*);
typedef void(*type_38)(xEnt*, xScene*, float);
typedef RpCollisionTriangle*(*type_40)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef void(*type_42)(xEnt*, xScene*, float, xEntCollis*);
typedef void(*type_43)(xEnt*, xVec3*);
typedef void(*type_46)(xEnt*, xScene*, float, xEntFrame*);
typedef RpAtomic*(*type_47)(RpAtomic*);
typedef void(*type_48)(xEnt*);
typedef unsigned int(*type_49)(xAnimTransition*, xAnimSingle*, void*);
typedef unsigned int(*type_50)(xEnt*, xEnt*, xScene*, float, xCollis*);
typedef void(*type_51)(xEnt*, xVec3*, xMat4x3*);
typedef int(*type_55)(xClumpCollBSPTriangle*, void*);
typedef int(*type_56)(xClumpCollBSPTriangle*, void*);
typedef RpCollisionTriangle*(*type_61)(RpIntersection*, RpCollisionTriangle*, float, void*);
typedef void(*type_62)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef void(*type_63)(xScene*, xRay3*, xQCData*, xEnt*, void*);
typedef RpWorldSector*(*type_64)(RpWorldSector*);
typedef int(*type_65)(xClumpCollBSPTriangle*, void*);
typedef void(*type_69)(xMemPool*, void*);
typedef void(*type_73)(RwResEntry*);
typedef RpCollisionTriangle*(*type_76)(RpIntersection*, RpCollisionTriangle*, float, void*);
typedef int(*type_83)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef RpCollisionTriangle*(*type_87)(RpIntersection*, RpWorldSector*, RpCollisionTriangle*, float, void*);
typedef RwObjectHasFrame*(*type_88)(RwObjectHasFrame*);

typedef xVec3 type_0[3];
typedef RpLight* type_2[2];
typedef unsigned char type_3[2];
typedef RwFrame* type_4[2];
typedef xAnimMultiFileEntry type_5[1];
typedef xVec3 type_6[3];
typedef float type_8[128];
typedef float type_9[3];
typedef unsigned short type_11[3];
typedef nodeInfo type_13[33];
typedef float type_14[3];
typedef xVec3 type_17[2];
typedef RwLine type_19[33];
typedef float type_22[5];
typedef xVec3 type_31[3];
typedef RwTexCoords* type_33[8];
typedef xVec3 type_39[3];
typedef float type_41[16];
typedef unsigned short type_44[3];
typedef xVec3 type_45[2];
typedef unsigned int type_52[4];
typedef xVec3 type_53[4];
typedef xVec3 type_54[4];
typedef RwTexCoords* type_57[8];
typedef xVec3 type_58[4];
typedef unsigned char type_59[3];
typedef xVec3 type_60[3];
typedef xCollis type_66[18];
typedef float type_67[4];
typedef char type_68[4];
typedef char type_70[32];
typedef xVec3 type_71[4];
typedef char type_72[32];
typedef xVec3 type_74[3];
typedef xVec3 type_75[5];
typedef unsigned char type_77[3];
typedef float type_78[6];
typedef float type_79[3];
typedef RxCluster type_80[1];
typedef type_79 type_81[3];
typedef xVec3 type_82[4];
typedef xVec3 type_84[2];
typedef xVec3 type_85[2];
typedef unsigned char type_86[4];
typedef float type_89[3];
typedef type_89 type_90[3];
typedef float type_91[2];
typedef float type_92[3];
typedef float type_93[2];
typedef xVec4 type_94[4];
typedef RwV3d* type_95[3];
typedef xVec3 type_96[8];

struct xSphere
{
	xVec3 center;
	float r;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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
	type_30 BeforeAnimMatrices;
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
	type_43 bupdate;
	type_46 move;
	type_48 render;
	xEntFrame* frame;
	xEntCollis* collis;
	xGridBound gridb;
	xBound bound;
	type_51 transl;
	xFFX* ffx;
	xEnt* driver;
	int driveMode;
	xShadowSimpleCache* simpShadow;
	xEntShadow* entShadow;
	anim_coll_data* anim_coll;
	void* user_data;
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
	type_7 StateCallback;
	type_30 BeforeAnimMatrices;
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

struct xAnimTransition
{
	xAnimTransition* Next;
	xAnimState* Dest;
	type_49 Conditional;
	type_49 Callback;
	unsigned int Flags;
	unsigned int UserFlags;
	float SrcTime;
	float DestTime;
	unsigned short Priority;
	unsigned short QueuePriority;
	float BlendRecip;
	unsigned short* BlendOffset;
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

struct xAnimSingle
{
	unsigned int SingleFlags;
	xAnimState* State;
	float Time;
	float CurrentSpeed;
	type_91 BilinearLerp;
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

struct RpPolygon
{
	unsigned short matIndex;
	type_11 vertIndex;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct _class_0
{
	float t;
	float u;
	float v;
};

struct RpCollisionTriangle
{
	RwV3d normal;
	RwV3d point;
	int index;
	type_95 vertices;
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

struct RxPipelineNodeTopSortData
{
	unsigned int numIns;
	unsigned int numInsVisited;
	rxReq* req;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct rxHeapBlockHeader
{
	rxHeapBlockHeader* prev;
	rxHeapBlockHeader* next;
	unsigned int size;
	rxHeapFreeBlock* freeEntry;
	type_52 pad;
};

struct xParabola
{
	xVec3 initPos;
	xVec3 initVel;
	float gravity;
	float minTime;
	float maxTime;
};

struct xEnv
{
	iEnv* geom;
	iEnv ienv;
	xLightKit* lightKit;
};

struct RpIntersection
{
	RpIntersectData t;
	RpIntersectType type;
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
	type_28 resolvID;
	type_32 base2Name;
	type_35 id2Name;
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
	type_33 texCoords;
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

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
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
	type_47 renderCallBack;
	RpInterpolator interpolator;
	unsigned short renderFrame;
	unsigned short pad;
	RwLinkList llWorldSectorsInAtomic;
	RxPipeline* pipeline;
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

struct ParabolaCBData
{
	xParabola* p;
	xVec3 N;
	float d;
	xCollis* colls;
};

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct xCapsule
{
	xVec3 start;
	xVec3 end;
	float r;
};

struct xModelPool
{
	xModelPool* Next;
	unsigned int NumMatrices;
	xModelInstance* List;
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
	_class_3 anim_coll;
};

struct xConic
{
	xMat4x3 basis;
	xMat4x3 invbasis;
	type_22 coef;
	xVec3 coneBasisCenter;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_59 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xAnimEffect
{
	xAnimEffect* Next;
	unsigned int Flags;
	float StartTime;
	float EndTime;
	type_27 Callback;
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

struct RpClump
{
	RwObject object;
	RwLinkList atomicList;
	RwLinkList lightList;
	RwLinkList cameraList;
	RwLLLink inWorldLink;
	type_26 callback;
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
	type_57 texCoords;
	RpMeshHeader* mesh;
	RwResEntry* repEntry;
	RpMorphTarget* morphTarget;
};

struct tri_data
{
	unsigned int index;
	float r;
	float d;
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

struct SweptSphereCollParam
{
	RpGeometry* geometry;
	xSweptSphere* sws;
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

struct ConeDepen
{
	xMat4x3 cullfrust;
	xMat4x3 circleBasis;
	xMat4x3 circleInvbasis;
	xConic conic;
	xVec3 start;
	float coneCos;
	float coneDist;
	float coneDist2;
	float coneRadius;
	float coneHeight;
	xVec3 axis;
	xVec3 coneRight;
	xVec3 coneAt;
	unsigned int numInterval;
	type_8 interval;
};

struct RpMorphTarget
{
	RpGeometry* parentGeom;
	RwSphere boundingSphere;
	RwV3d* verts;
	RwV3d* normals;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
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

struct rxReq
{
};

struct RpV3dGradient
{
	float dydx;
	float dzdx;
	float dxdy;
	float dzdy;
	float dxdz;
	float dydz;
};

struct xClumpCollBSPTree
{
	unsigned int numBranchNodes;
	xClumpCollBSPBranchNode* branchNodes;
	unsigned int numTriangles;
	xClumpCollBSPTriangle* triangles;
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

struct xClumpCollBSPTriangle
{
	_class_1 v;
	unsigned char flags;
	unsigned char platData;
	unsigned short matIndex;
};

struct xShadowSimplePoly
{
	type_31 vert;
	xVec3 norm;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

struct xClumpCollBSPVertInfo
{
	unsigned short atomIndex;
	unsigned short meshVertIndex;
};

struct xMemPool
{
	void* FreeList;
	unsigned short NextOffset;
	unsigned short Flags;
	void* UsedList;
	type_69 InitCB;
	void* Buffer;
	unsigned short Size;
	unsigned short NumRealloc;
	unsigned int Total;
};

struct xClumpCollBSPBranchNode
{
	unsigned int leftInfo;
	unsigned int rightInfo;
	float leftValue;
	float rightValue;
};

union IntersectionCallBack
{
	type_36 sectorCB;
	type_34 worldCB;
	type_37 atomicCB;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct RpCollBSPLeafNode
{
	unsigned short numPolygons;
	unsigned short firstPolygon;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_73 destroyNotify;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct RpTriangle
{
	type_44 vertIndex;
	short matIndex;
};

struct xRot
{
	xVec3 axis;
	float angle;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xIsect
{
	unsigned int flags;
	float penned;
	float contained;
	float lapped;
	xVec3 point;
	xVec3 norm;
	float dist;
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
	type_41 matrix;
	float radius;
	float angle;
	RpLight* platLight;
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
	type_3 NumAnims;
	void** RawData;
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

enum _xCollsIdx
{
	k_XCOLLS_IDX_FLOOR,
	k_XCOLLS_IDX_CEIL,
	k_XCOLLS_IDX_FRONT,
	k_XCOLLS_IDX_LEFT,
	k_XCOLLS_IDX_REAR,
	k_XCOLLS_IDX_RIGHT,
	k_XCOLLS_IDX_COUNT
};

enum rxEmbeddedPacketState
{
	rxPKST_PACKETLESS,
	rxPKST_UNUSED,
	rxPKST_INUSE,
	rxPKST_PENDING,
	rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 0x7fffffff
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
	type_66 colls;
	type_42 post;
	type_50 depenq;
};

struct xAnimTransitionList
{
	xAnimTransitionList* Next;
	xAnimTransition* T;
};

enum RxClusterForcePresent
{
	rxCLALLOWABSENT,
	rxCLFORCEPRESENT,
	rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 0x7fffffff
};

struct xSphereHitsModel_context
{
	xCollis* coll;
	RpIntersection localx;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct RpCollBSPBranchNode
{
	unsigned short type;
	unsigned char leftType;
	unsigned char rightType;
	unsigned short leftNode;
	unsigned short rightNode;
	float leftValue;
	float rightValue;
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

struct CallBackParam
{
	IntersectionCallBack u;
	void* data;
};

union _class_1
{
	xClumpCollBSPVertInfo i;
	RwV3d* p;
};

struct RxClusterDefinition
{
	char* name;
	unsigned int defaultStride;
	unsigned int defaultAttributes;
	char* attributeSet;
};

struct RpCollBSPTree
{
	unsigned int numLeafNodes;
	RpCollBSPBranchNode* branchNodes;
	RpCollBSPLeafNode* leafNodes;
	type_86 pad;
};

enum RpIntersectType
{
	rpINTERSECTNONE,
	rpINTERSECTLINE,
	rpINTERSECTPOINT,
	rpINTERSECTSPHERE,
	rpINTERSECTBOX,
	rpINTERSECTATOMIC,
	rpINTERSECTTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwSphere
{
	RwV3d center;
	float radius;
};

struct xVec2
{
	float x;
	float y;
};

struct xFFX
{
};

union RwSplitBits
{
	float nReal;
	int nInt;
	unsigned int nUInt;
};

struct xAnimMultiFile : xAnimMultiFileBase
{
	type_5 Files;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xGrid
{
	unsigned char ingrid_id;
	type_77 pad;
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

struct iEnv
{
	RpWorld* world;
	RpWorld* collision;
	RpWorld* fx;
	RpWorld* camera;
	xJSPHeader* jsp;
	type_2 light;
	type_4 light_frame;
	int memlvl;
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

union xiMat4x3Union
{
	xMat4x3 xm;
	RwMatrixTag im;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_67 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xJSPNodeInfo
{
	int originalMatIndex;
	int nodeFlags;
};

struct xEntShadow
{
	xVec3 pos;
	xVec3 vec;
	RpAtomic* shadowModel;
	float dst_cast;
	type_93 radius;
};

struct RxClusterRef
{
	RxClusterDefinition* clusterDef;
	RxClusterForcePresent forcePresent;
	unsigned int reserved;
};

struct xSurface
{
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_70 name;
	type_72 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct anim_coll_data
{
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct xModelBucket
{
	RpAtomic* Data;
	RpAtomic* OriginalData;
	xModelInstance* List;
	int ClipFlags;
	unsigned int PipeFlags;
};

struct RwLine
{
	RwV3d start;
	RwV3d end;
};

union RpIntersectData
{
	RwLine line;
	RwV3d point;
	RwSphere sphere;
	RwBBox box;
	void* object;
};

struct RxNodeMethods
{
	type_12 nodeBody;
	type_15 nodeInit;
	type_18 nodeTerm;
	type_20 pipelineNodeInit;
	type_23 pipelineNodeTerm;
	type_25 pipelineNodeConfig;
	type_10 configMsgHandler;
};

struct RxPipelineCluster
{
	RxClusterDefinition* clusterRef;
	unsigned int creationAttributes;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_83 eventFunc;
};

struct xJSPHeader
{
	type_68 idtag;
	unsigned int version;
	unsigned int jspNodeCount;
	RpClump* clump;
	xClumpCollBSPTree* colltree;
	xJSPNodeInfo* jspNodeList;
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
	type_64 renderCallBack;
	RxPipeline* pipeline;
};

struct nodeInfo
{
	unsigned int type;
	unsigned int index;
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
	type_80 clusters;
};

struct xClumpCollV3dGradient
{
	float dydx;
	float dzdx;
	float dxdy;
	float dzdy;
	float dxdz;
	float dydz;
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
	type_88 sync;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xAnimMultiFileBase
{
	unsigned int Count;
};

struct _class_2
{
	xVec3 norm;
	float D;
};

struct _class_3
{
	xVec3* verts;
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

char* g_xCollis_FMT;
xCapsule* cb_capsule;
float cb_dist;
int capsuleMethod;
xCapsule* cb_cap;
int xcollide_docam;
int sSweptSphereHitFound;
xMat4x3* sSwsModelMat;
int sSweptSphereEntFound;
unsigned char sSweptSphereCollType;
xEnt* sSweptSphereMover;
unsigned int sSweptSphereIgnoreMovers;
type_65 ConicDepenLeafNodeCB;
xMat4x3 g_I3;
unsigned char xClumpColl_FilterFlags;
type_62 SweptSphereHitsEntCB;
xGrid colls_oso_grid;
xGrid colls_grid;
xGrid npcs_grid;
RpMorphTarget anim_coll_old_mt;
type_1 SweptSphereModelCB;
int _rpCollisionGeometryDataOffset;
type_16 SweptSphereHitsEnvCB;
type_56 SweptSphereLeafNodeCB;
xQCControl xqc_def_ctrl;
xVec3 g_O3;
type_63 xCapsuleHitsEnt;
type_87 CapsuleEnvClosestToStartCB;
type_55 LeafNodeCapsuleIntersect;
type_40 CapsuleEnvClosestToLineCB;
type_76 CapsuleModelClosestToLineCB;
type_29 xParabolaEnvCB;
type_61 sphereHitsModelCB;

unsigned char xSphereHitsVCircle(xVec3& sc, float sr, xVec3& cc, float cr);
unsigned char xSphereHitsVCylinder(xVec3& sc, float sr, xVec3& cc, float cr, float ch);
unsigned char xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat);
unsigned char xSphereHitsBound(xSphere& o, xBound& b);
unsigned char xSphereHitsCapsule(xVec3& center, float radius, xVec3& v1, xVec3& v2, float width);
int xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType);
int xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType);
int xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType);
int xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType);
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data);
int xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat);
int SweptSphereModelCB(int numTriangles, int triOffset, void* data);
int xSweptSphereToEnv(xSweptSphere* sws, xEnv* env);
int SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data);
RpCollisionTriangle* SweptSphereHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, void* data);
int xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat);
int xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph);
int xSweptSphereToTriangle(xSweptSphere* sws, xVec3* v0, xVec3* v1, xVec3* v2);
void xSweptSphereGetResults(xSweptSphere* sws);
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, float radius);
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, float radius, RpV3dGradient* grad, type_21 callBack, void* data);
xVec3 xCollisTriHit(tri_data& tri, xModelInstance& model);
void xCollideCalcTri(tri_data& tri, xModelInstance& model, xVec3& center, xVec3& heading);
unsigned int xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll);
unsigned int Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB);
unsigned int xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll);
int xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls);
int xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data);
void xParabolaRecenter(xParabola* p, float newZeroT);
unsigned int xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll);
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, float dist, void* data);
unsigned int xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll);
unsigned int xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll);
unsigned int xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll);
void xCollideInit(xScene* sc);
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat);

// xSphereHitsVCircle__FRC5xVec3fRC5xVec3f
// Start address: 0x1c57f0
unsigned char xSphereHitsVCircle(xVec3& sc, float sr, xVec3& cc, float cr)
{
	float ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float max_xzdist;
}

// xSphereHitsVCylinder__FRC5xVec3fRC5xVec3ff
// Start address: 0x1c5920
unsigned char xSphereHitsVCylinder(xVec3& sc, float sr, xVec3& cc, float cr, float ch)
{
	float ydist;
	xVec2 xzloc1;
	xVec2 xzloc2;
	float max_xzdist;
}

// xOBBHitsOBB__FRC4xBoxRC7xMat4x3RC4xBoxRC7xMat4x3
// Start address: 0x1c5a80
unsigned char xOBBHitsOBB(xBox& a, xMat4x3& amat, xBox& b, xMat4x3& bmat)
{
	xVec3& asize;
	xVec3& bsize;
	xVec3 offset;
	xVec3 aoffset;
	xMat3x3 xmat;
	xMat3x3 axmat;
	float ar;
	float br;
	float r;
}

// xSphereHitsBound__FRC7xSphereRC6xBound
// Start address: 0x1c6550
unsigned char xSphereHitsBound(xSphere& o, xBound& b)
{
}

// xSphereHitsCapsule__FRC5xVec3fRC5xVec3RC5xVec3f
// Start address: 0x1c6870
unsigned char xSphereHitsCapsule(xVec3& center, float radius, xVec3& v1, xVec3& v2, float width)
{
	xVec3 d1;
	xVec3 d2;
	float r;
	float b;
	float q;
	float d;
	float r1;
	float r2;
}

// xSweptSphereToNonMoving__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6a60
int xSweptSphereToNonMoving(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType)
{
	int envcollfound;
	xRay3 ray;
	float one_len;
}

// xSweptSphereToNPC__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6c10
int xSweptSphereToNPC(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType)
{
	xRay3 ray;
	float one_len;
}

// xSweptSphereToStatDyn__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6d50
int xSweptSphereToStatDyn(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType)
{
	xRay3 ray;
	float one_len;
}

// xSweptSphereToScene__FP12xSweptSphereP6xSceneP4xEntUc
// Start address: 0x1c6ed0
int xSweptSphereToScene(xSweptSphere* sws, xScene* sc, xEnt* mover, unsigned char collType)
{
	int envcollfound;
	xRay3 ray;
	float one_len;
}

// SweptSphereHitsEntCB__FP6xSceneP5xRay3P7xQCDataP4xEntPv
// Start address: 0x1c70a0
void SweptSphereHitsEntCB(xRay3* ray, xQCData* qcd, xEnt* ent, void* data)
{
	xSweptSphere* sws;
	xMat4x3* m1;
	xMat4x3* m2;
	unsigned int result;
	float oldrad;
	xBox tmpbox;
	xBox tmpbox;
	xRay3 lr;
	xMat3x3 mn;
}

// xSweptSphereToModel__FP12xSweptSphereP8RpAtomicP11RwMatrixTag
// Start address: 0x1c75c0
int xSweptSphereToModel(xSweptSphere* sws, RpAtomic* model, RwMatrixTag* mat)
{
	xMat4x3 oldinvbasis;
	RpGeometry* geom;
	RwLine line;
	SweptSphereCollParam isData;
	RpV3dGradient grad;
	int i;
	int numT;
	RpTriangle* tri;
	RwV3d* vert;
}

// SweptSphereModelCB__FiiPv
// Start address: 0x1c79a0
int SweptSphereModelCB(int numTriangles, int triOffset, void* data)
{
	SweptSphereCollParam* isData;
	RpGeometry* geometry;
	xSweptSphere* sws;
	RwV3d* vertices;
	RpTriangle* triangles;
	int triSlot;
	unsigned short* triIndex;
	RpTriangle* tri;
}

// xSweptSphereToEnv__FP12xSweptSphereP4xEnv
// Start address: 0x1c7ab0
int xSweptSphereToEnv(xSweptSphere* sws, xEnv* env)
{
	RwLine line;
	xClumpCollV3dGradient grad;
	RpIntersection isx;
}

// SweptSphereLeafNodeCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x1c7ca0
int SweptSphereLeafNodeCB(xClumpCollBSPTriangle* triangles, void* data)
{
	xSweptSphere* sws;
	RwV3d* v1;
	RwV3d* v2;
}

// SweptSphereHitsEnvCB__FP14RpIntersectionP13RpWorldSectorP19RpCollisionTrianglefPv
// Start address: 0x1c7d50
RpCollisionTriangle* SweptSphereHitsEnvCB(RpWorldSector* sector, RpCollisionTriangle* tri, void* data)
{
	xSweptSphere* sws;
}

// xSweptSphereToBox__FP12xSweptSphereP4xBoxP7xMat4x3
// Start address: 0x1c7de0
int xSweptSphereToBox(xSweptSphere* sws, xBox* box, xMat4x3* mat)
{
	int i;
	xMat4x3 tmpmat;
	xMat4x3* boxinvbasis;
	float dx;
	float dy;
	float dz;
	float rad;
	float radsqr;
	float testdist;
	float invZ;
	xVec3 boxPos;
	xVec3 boxaX;
	xVec3 boxaY;
	xVec3 boxaZ;
	xVec3 boxNorm;
	xVec3 boxA1;
	xVec3 boxA2;
	int quadfound;
	float boxPlaneDepth;
	float daX;
	float daY;
	float daZ;
	float d1;
	float d2;
	float distzsqr;
	type_75 xform;
	int edge_contact_found;
	int vert_contact_found;
	float edge_contact_lerp;
	xVec3 pt;
	xVec3 cyl;
	xVec3 uu;
	float magNsqr;
	float dsqr;
	float ulen;
	float edgedot;
	float magCsqr;
	float distzsqr;
	float lerp;
	float invlerp;
}

// xSweptSphereToSphere__FP12xSweptSphereP7xSphere
// Start address: 0x1c89f0
int xSweptSphereToSphere(xSweptSphere* sws, xSphere* sph)
{
	float testdist;
	float distzsqr;
	float lerp;
}

// xSweptSphereToTriangle__FP12xSweptSphereP5xVec3P5xVec3P5xVec3
// Start address: 0x1c8b50
int xSweptSphereToTriangle(xSweptSphere* sws, xVec3* v0, xVec3* v1, xVec3* v2)
{
	int i;
	float rad;
	float raddist;
	float radsqr;
	float startdot;
	float enddot;
	float testdist;
	float invZ;
	type_54 xform;
	xVec3 xnorm;
	xVec3 contact;
	RwV3d vTmp;
	RwV3d vTmp2;
	float recipLength;
	float lengthSq;
	float _result;
	float contx;
	float conty;
	float p0x;
	float p0y;
	float p1x;
	float p1y;
	float p2x;
	float p2y;
	float dot0;
	float dot1;
	float dot2;
	int edge_contact_found;
	int vert_contact_found;
	float edge_contact_lerp;
	xVec3 pt;
	xVec3 cyl;
	xVec3 uu;
	float magNsqr;
	float dsqr;
	float ulen;
	float edgedot;
	float magCsqr;
	float distzsqr;
	float lerp;
	float invlerp;
}

// xSweptSphereGetResults__FP12xSweptSphere
// Start address: 0x1c9540
void xSweptSphereGetResults(xSweptSphere* sws)
{
}

// xSweptSpherePrepare__FP12xSweptSphereP5xVec3P5xVec3f
// Start address: 0x1c9830
void xSweptSpherePrepare(xSweptSphere* sws, xVec3* start, xVec3* end, float radius)
{
	float dx;
	float dy;
	float dz;
	float invmag;
	xCapsule tmpC;
}

// _rpCollBSPTreeForAllCapsuleLeafNodeIntersections__FP13RpCollBSPTreeP6RwLinefP13RpV3dGradientPFiiPv_iPv
// Start address: 0x1c9be0
RpCollBSPTree* _rpCollBSPTreeForAllCapsuleLeafNodeIntersections(RpCollBSPTree* tree, RwLine* line, float radius, RpV3dGradient* grad, type_21 callBack, void* data)
{
	int nStack;
	type_13 nodeStack;
	type_19 lineStack;
	RwLine currLine;
	RpCollBSPLeafNode* leaf;
	RpCollBSPBranchNode* branch;
	unsigned int branch_type;
	unsigned int branch_leftType;
	unsigned int branch_rightType;
	unsigned int branch_leftNode;
	unsigned int branch_rightNode;
	RwSplitBits lStart;
	RwSplitBits lEnd;
	RwSplitBits rStart;
	RwSplitBits rEnd;
	float delta;
	float delta;
	float delta;
	float delta;
}

// xCollisTriHit__FRCQ27xCollis8tri_dataRC14xModelInstance
// Start address: 0x1ca540
xVec3 xCollisTriHit(tri_data& tri, xModelInstance& model)
{
	xMat4x3& m;
	type_74 v;
	RpGeometry* geom;
	xVec3* verts;
	RpTriangle& t;
	int i;
	type_17 r;
	xVec3 d;
	xVec3 A;
}

// xCollideCalcTri__FRQ27xCollis8tri_dataRC14xModelInstanceRC5xVec3RC5xVec3
// Start address: 0x1cad70
void xCollideCalcTri(tri_data& tri, xModelInstance& model, xVec3& center, xVec3& heading)
{
	type_39 v;
	RpGeometry* geom;
	xVec3* verts;
	RpMorphTarget* mt;
	RpTriangle& t;
	int i;
	type_60 e;
	_class_2 plane;
	xVec3 p;
	float num;
	float denom;
	xVec3 b;
	xVec3 A;
	xVec3 B;
	xVec3 C;
	xVec3 AxB;
	xVec3 CxB;
	float len2;
	xVec3 d;
	xVec3 ad;
	xVec3 d;
	xVec3 ad;
}

// xBoxHitsObb__FPC4xBoxPC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x1cba80
unsigned int xBoxHitsObb(xBox* a, xBox* b, xMat4x3* mat, xCollis* coll)
{
}

// Mgc_BoxBoxTest__FPC4xBoxPC7xMat4x3PC4xBoxPC7xMat4x3
// Start address: 0x1cbaf0
unsigned int Mgc_BoxBoxTest(xBox* a, xMat4x3* matA, xBox* b, xMat4x3* matB)
{
	type_0 akA;
	type_6 akB;
	type_9 afEA;
	type_14 afEB;
	float _mag;
	float _mag;
	float _mag;
	float _mag;
	float _mag;
	float _mag;
	xVec3 centA;
	xVec3 centB;
	xVec3 kD;
	type_81 aafC;
	type_90 aafAbsC;
	type_92 afAD;
	float fR0;
	float fR1;
	float fR;
	float fR01;
}

// xBoxHitsSphere__FPC4xBoxPC7xSphereP7xCollis
// Start address: 0x1ccc40
unsigned int xBoxHitsSphere(xBox* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float scale;
}

// xParabolaHitsEnv__FP9xParabolaPC4xEnvP7xCollis
// Start address: 0x1ccde0
int xParabolaHitsEnv(xParabola* p, xEnv* env, xCollis* colls)
{
	RwBBox xb;
	float extremumT;
	float extremum;
	ParabolaCBData data;
}

// xParabolaEnvCB__FP21xClumpCollBSPTrianglePv
// Start address: 0x1cd120
int xParabolaEnvCB(xClumpCollBSPTriangle* triangles, void* data)
{
	ParabolaCBData* pd;
	xParabola* p;
	xCollis* colls;
	xVec3* v0;
	xVec3* v1;
	xVec3* v2;
	unsigned char tester;
	float a;
	float b;
	float c;
	float det;
	xVec3 N;
	float t1;
	float t2;
	float c1;
	float c2;
	float c0;
}

// xParabolaRecenter__FP9xParabolaf
// Start address: 0x1cd7b0
void xParabolaRecenter(xParabola* p, float newZeroT)
{
}

// xSphereHitsModel__FPC7xSpherePC14xModelInstanceP7xCollis
// Start address: 0x1cd840
unsigned int xSphereHitsModel(xSphere* b, xModelInstance* m, xCollis* coll)
{
	RpIntersection isx;
	xSphereHitsModel_context context;
	xMat4x3* mat;
	RwFrame* frame;
	float mscale;
	float mag2;
}

// sphereHitsModelCB__FP14RpIntersectionP19RpCollisionTrianglefPv
// Start address: 0x1cdcb0
RpCollisionTriangle* sphereHitsModelCB(RpCollisionTriangle* tri, float dist, void* data)
{
	xSphereHitsModel_context* context;
}

// xSphereHitsOBB_nu__FPC7xSpherePC4xBoxPC7xMat4x3P7xCollis
// Start address: 0x1cdcd0
unsigned int xSphereHitsOBB_nu(xSphere* s, xBox* b, xMat4x3* m, xCollis* coll)
{
	xSphere xfs;
	xVec3 scale;
	xMat4x3 mnormal;
	float len2;
	float len_inv;
	float len2;
	float len_inv;
	float len2;
	float len_inv;
	xBox sbox;
}

// xSphereHitsBox__FPC7xSpherePC4xBoxP7xCollis
// Start address: 0x1ce2c0
unsigned int xSphereHitsBox(xSphere* a, xBox* b, xCollis* coll)
{
	xIsect isx;
	float scale;
}

// xSphereHitsSphere__FPC7xSpherePC7xSphereP7xCollis
// Start address: 0x1ce460
unsigned int xSphereHitsSphere(xSphere* a, xSphere* b, xCollis* coll)
{
	xIsect isx;
	float scale;
	float scale;
}

// xCollideInit__FP6xScene
// Start address: 0x1ce670
void xCollideInit(xScene* sc)
{
}

// xCollideGetCollsIdx__FPC7xCollisPC5xVec3PC7xMat3x3
// Start address: 0x1ce680
_xCollsIdx xCollideGetCollsIdx(xCollis* coll, xVec3* tohit, xMat3x3* mat)
{
	float local_x;
	float local_z;
}

