typedef struct RxPipeline;
typedef struct xBase;
typedef struct RwCamera;
typedef struct RxHeap;
typedef struct RwRGBA;
typedef struct RwBBox;
typedef struct analog_data;
typedef struct RxPipelineNode;
typedef struct xVec3;
typedef struct xQuat;
typedef struct xGroup;
typedef struct xParGroup;
typedef struct RwTexCoords;
typedef struct RwV3d;
typedef struct RxPipelineNodeTopSortData;
typedef struct rxHeapBlockHeader;
typedef struct _tagClimate;
typedef struct _tagEmitVolume;
typedef struct xMat4x3;
typedef struct xParEmitterAsset;
typedef struct RxPipelineRequiresCluster;
typedef struct _tagWind;
typedef struct xLinkAsset;
typedef struct xBound;
typedef struct xParEmitterPropsAsset;
typedef struct xUpdateCullMgr;
typedef enum RpWorldRenderOrder;
typedef struct xScene;
typedef struct RpMaterial;
typedef struct xParSys;
typedef struct xVec4;
typedef struct _tagRain;
typedef struct RwSurfaceProperties;
typedef struct RwTexture;
typedef struct RwMatrixTag;
typedef struct _tagEmitOffsetPoint;
typedef struct rxHeapSuperBlockDescriptor;
typedef struct RpSector;
typedef struct rxReq;
typedef struct xUpdateCullEnt;
typedef struct RwRaster;
typedef struct xBaseAsset;
typedef enum RxClusterValidityReq;
typedef struct xParEmitter;
typedef struct RpWorldSector;
typedef enum RxNodeDefEditable;
typedef struct _tagxRumble;
typedef enum RxClusterValid;
typedef struct xUpdateCullGroup;
typedef struct xPEVCyl;
typedef struct RpWorld;
typedef struct rxHeapFreeBlock;
typedef struct xBBox;
typedef struct xQCData;
typedef struct xParInterp;
typedef enum rxEmbeddedPacketState;
typedef struct xSphere;
typedef enum RwCameraProjection;
typedef enum RxClusterForcePresent;
typedef struct xModelTag;
typedef struct xCylinder;
typedef enum _tagPadState;
typedef struct xPEEntBone;
typedef struct RwLLLink;
typedef struct xBox;
typedef struct RxClusterDefinition;
typedef struct xGlobals;
typedef struct xEnvAsset;
typedef struct _tagxPad;
typedef struct RpVertexNormal;
typedef struct RwTexDictionary;
typedef struct xGroupAsset;
typedef struct RxOutputSpec;
typedef struct _tagPadAnalog;
typedef struct xPECircle;
typedef struct zParEmitter;
typedef struct _tagiPad;
typedef struct xMat3x3;
typedef struct RxClusterRef;
typedef struct RwObject;
typedef struct xVec2;
typedef struct RxIoSpec;
typedef struct RpPolygon;
typedef struct RpMaterialList;
typedef struct RxNodeMethods;
typedef struct _tagEmitSphere;
typedef struct iFogParams;
typedef struct RxPipelineCluster;
typedef struct RwFrustumPlane;
typedef struct RxNodeDefinition;
typedef struct RwResEntry;
typedef struct RwPlane;
typedef struct RxCluster;
typedef struct RxPipelineNodeParam;
typedef struct _tagEmitRect;
typedef struct RxPacket;
typedef enum RwFogType;
typedef struct RwObjectHasFrame;
typedef struct RpMeshHeader;
typedef struct RwLinkList;
typedef struct xPEEntBound;
typedef struct _tagEmitLine;
typedef struct RwV2d;
typedef enum _tagRumbleType;
typedef struct xCamera;
typedef struct xParEmitterCustomSettings;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned int(*type_2)(RxPipelineNode*, unsigned int, unsigned int, void*);
typedef int(*type_4)(RxPipelineNode*, RxPipelineNodeParam*);
typedef int(*type_6)(RxNodeDefinition*);
typedef void(*type_8)(RxNodeDefinition*);
typedef int(*type_10)(RxPipelineNode*);
typedef void(*type_11)(RxPipelineNode*);
typedef int(*type_12)(RxPipelineNode*, RxPipeline*);
typedef RpWorldSector*(*type_13)(RpWorldSector*);
typedef void(*type_14)(void*);
typedef RwCamera*(*type_23)(RwCamera*);
typedef RwCamera*(*type_25)(RwCamera*);
typedef unsigned int(*type_28)(void*, void*);
typedef void(*type_33)(RwResEntry*);
typedef RwObjectHasFrame*(*type_39)(RwObjectHasFrame*);

typedef RwFrustumPlane type_1[6];
typedef unsigned char type_3[3];
typedef RwV3d type_5[8];
typedef xVec4 type_7[12];
typedef analog_data type_9[2];
typedef float type_15[2];
typedef unsigned char type_16[3];
typedef unsigned char type_17[3];
typedef unsigned int type_18[4];
typedef char type_19[128];
typedef float type_20[4];
typedef type_19 type_21[6];
typedef char type_22[32];
typedef unsigned short type_24[3];
typedef xParInterp type_26[1];
typedef unsigned char type_27[3];
typedef char type_29[32];
typedef unsigned char type_30[22];
typedef char type_31[32];
typedef unsigned char type_32[22];
typedef xParInterp type_34[4];
typedef xParInterp type_35[4];
typedef RwTexCoords* type_36[8];
typedef float type_37[4];
typedef RxCluster type_38[1];
typedef float type_40[22];
typedef float type_41[22];

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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_23 beginUpdate;
	type_25 endUpdate;
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

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xQuat
{
	xVec3 v;
	float s;
};

struct xGroup : xBase
{
	xGroupAsset* asset;
	xBase** item;
	unsigned int last_index;
	int flg_group;
};

struct xParGroup
{
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
	type_18 pad;
};

struct _tagClimate
{
	_tagRain rain;
	_tagWind wind;
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

struct RxPipelineRequiresCluster
{
	RxClusterDefinition* clusterDef;
	RxClusterValidityReq rqdOrOpt;
	unsigned int slotIndex;
};

struct _tagWind
{
	float strength;
	float angle;
	xVec3 dir;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_37 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_27 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xParEmitterPropsAsset : xBaseAsset
{
	unsigned int parSysID;
	union
	{
		xParInterp rate;
		type_26 value;
	};
	xParInterp life;
	xParInterp size_birth;
	xParInterp size_death;
	type_34 color_birth;
	type_35 color_death;
	xParInterp vel_scale;
	xParInterp vel_angle;
	xVec3 vel;
	unsigned int emit_limit;
	float emit_limit_reset_time;
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
	type_14 activateCB;
	type_14 deactivateCB;
};

enum RpWorldRenderOrder
{
	rpWORLDRENDERNARENDERORDER,
	rpWORLDRENDERFRONT2BACK,
	rpWORLDRENDERBACK2FRONT,
	rpWORLDRENDERORDERFORCEENUMSIZEINT = 0x7fffffff
};

struct xScene
{
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

struct _tagRain
{
	int rain;
	float strength;
	zParEmitter* rain_emitter;
	zParEmitter* snow_emitter;
};

struct RwSurfaceProperties
{
	float ambient;
	float specular;
	float diffuse;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_29 name;
	type_31 mask;
	unsigned int filterAddressing;
	int refCount;
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

struct _tagEmitOffsetPoint
{
	xVec3 offset;
};

struct rxHeapSuperBlockDescriptor
{
	void* start;
	unsigned int size;
	rxHeapSuperBlockDescriptor* next;
};

struct RpSector
{
	int type;
};

struct rxReq
{
};

struct xUpdateCullEnt
{
	unsigned short index;
	short groupIndex;
	type_28 cb;
	void* cbdata;
	xUpdateCullEnt* nextInGroup;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

enum RxClusterValidityReq
{
	rxCLREQ_DONTWANT,
	rxCLREQ_REQUIRED,
	rxCLREQ_OPTIONAL,
	rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 0x7fffffff
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
	type_17 rot;
	xModelTag tag;
	float oocull_distance_sqr;
	float distance_to_cull_sqr;
	void* attachTo;
	xParSys* parSys;
	void* emit_volume;
	xVec3 last_attach_loc;
};

struct RpWorldSector
{
	int type;
	RpPolygon* polygons;
	RwV3d* vertices;
	RpVertexNormal* normals;
	type_36 texCoords;
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

enum RxNodeDefEditable
{
	rxNODEDEFCONST,
	rxNODEDEFEDITABLE,
	rxNODEDEFEDITABLEFORCEENUMSIZEINT = 0x7fffffff
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

enum RxClusterValid
{
	rxCLVALID_NOCHANGE,
	rxCLVALID_VALID,
	rxCLVALID_INVALID,
	rxCLUSTERVALIDFORCEENUMSIZEINT = 0x7fffffff
};

struct xUpdateCullGroup
{
	unsigned int active;
	unsigned short startIndex;
	unsigned short endIndex;
	xGroup* groupObject;
};

struct xPEVCyl
{
	float height;
	float radius;
	float deflection;
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
	type_13 renderCallBack;
	RxPipeline* pipeline;
};

struct rxHeapFreeBlock
{
	unsigned int size;
	rxHeapBlockHeader* ptr;
};

struct xBBox
{
	xVec3 center;
	xBox box;
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

struct xParInterp
{
	type_15 val;
	unsigned int interp;
	float freq;
	float oofreq;
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

struct xModelTag
{
	xVec3 v;
	unsigned int matidx;
	type_20 wt;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
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

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
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

struct xGlobals
{
	xCamera camera;
	_tagxPad* pad0;
	_tagxPad* pad1;
	_tagxPad* pad2;
	_tagxPad* pad3;
	int profile;
	type_21 profFunc;
	xUpdateCullMgr* updateMgr;
	int sceneFirst;
	type_22 sceneStart;
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

struct _tagxPad
{
	type_30 value;
	type_32 last_value;
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
	type_40 up_tmr;
	type_41 down_tmr;
	type_9 analog;
};

struct RpVertexNormal
{
	char x;
	char y;
	char z;
	unsigned char pad;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xGroupAsset : xBaseAsset
{
	unsigned short itemCount;
	unsigned short groupFlags;
};

struct RxOutputSpec
{
	char* name;
	RxClusterValid* outputClusters;
	RxClusterValid allOtherClusters;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct xPECircle
{
	float radius;
	float deflection;
	xVec3 dir;
};

struct zParEmitter : xParEmitter
{
};

struct _tagiPad
{
	int port;
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

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct xVec2
{
	float x;
	float y;
};

struct RxIoSpec
{
	unsigned int numClustersOfInterest;
	RxClusterRef* clustersOfInterest;
	RxClusterValidityReq* inputRequirements;
	unsigned int numOutputs;
	RxOutputSpec* outputs;
};

struct RpPolygon
{
	unsigned short matIndex;
	type_24 vertIndex;
};

struct RpMaterialList
{
	RpMaterial** materials;
	int numMaterials;
	int space;
};

struct RxNodeMethods
{
	type_4 nodeBody;
	type_6 nodeInit;
	type_8 nodeTerm;
	type_10 pipelineNodeInit;
	type_11 pipelineNodeTerm;
	type_12 pipelineNodeConfig;
	type_2 configMsgHandler;
};

struct _tagEmitSphere
{
	float radius;
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

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_33 destroyNotify;
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

struct RxPipelineNodeParam
{
	void* dataParam;
	RxHeap* heap;
};

struct _tagEmitRect
{
	float x_len;
	float z_len;
};

struct RxPacket
{
	unsigned short flags;
	unsigned short numClusters;
	RxPipeline* pipeline;
	unsigned int* inputToClusterSlot;
	unsigned int* slotsContinue;
	RxPipelineCluster** slotClusterRefs;
	type_38 clusters;
};

enum RwFogType
{
	rwFOGTYPENAFOGTYPE,
	rwFOGTYPELINEAR,
	rwFOGTYPEEXPONENTIAL,
	rwFOGTYPEEXPONENTIAL2,
	rwFOGTYPEFORCEENUMSIZEINT = 0x7fffffff
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_39 sync;
};

struct RpMeshHeader
{
	unsigned int flags;
	unsigned short numMeshes;
	unsigned short serialNum;
	unsigned int totalIndicesInMesh;
	unsigned int firstMeshOffset;
};

struct RwLinkList
{
	RwLLLink link;
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

struct _tagEmitLine
{
	xVec3 pos1;
	xVec3 pos2;
	float radius;
};

struct RwV2d
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
	type_7 frustplane;
};

struct xParEmitterCustomSettings : xParEmitterPropsAsset
{
	unsigned int custom_flags;
	unsigned int attachToID;
	xVec3 pos;
	xVec3 vel;
	float vel_angle_variation;
	type_3 rot;
	unsigned char padding;
	float radius;
	float emit_interval_current;
	void* emit_volume;
};

_tagClimate* sClimate;
float snow_life;
xVec3 snow_vel;
xVec3 snow_dvel;
unsigned int gPTankDisable;
xGlobals* xglobals;
xMat4x3 g_I3;

void xClimateUpdate(_tagClimate* climate, float seconds);
void UpdateRain(_tagClimate* climate, float seconds);
void xClimateSetRain(float stre);
void xClimateSetSnow(float stre);
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset);
void xClimateInit(_tagClimate* climate);

// xClimateUpdate__FP11_tagClimatef
// Start address: 0x1c4f20
void xClimateUpdate(_tagClimate* climate, float seconds)
{
}

// UpdateRain__FP11_tagClimatef
// Start address: 0x1c4f30
void UpdateRain(_tagClimate* climate, float seconds)
{
	_tagRain* r;
	xParEmitterCustomSettings info;
	int total_rain_drops;
	int i;
	int total_snow_flakes;
	int i;
	float perc;
	int num;
	xVec3* pos;
	xVec3* vel;
	xVec3* pp;
	xVec3* vp;
	int i;
	float xx;
	float zz;
	float perc;
}

// xClimateSetRain__Ff
// Start address: 0x1c54a0
void xClimateSetRain(float stre)
{
}

// xClimateSetSnow__Ff
// Start address: 0x1c54c0
void xClimateSetSnow(float stre)
{
}

// xClimateInitAsset__FP11_tagClimateP9xEnvAsset
// Start address: 0x1c54e0
void xClimateInitAsset(_tagClimate* climate, xEnvAsset* easset)
{
	_tagWind* w;
}

// xClimateInit__FP11_tagClimate
// Start address: 0x1c5640
void xClimateInit(_tagClimate* climate)
{
}

