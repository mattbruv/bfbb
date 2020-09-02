typedef struct st_STRAN_SCENE;
typedef struct st_PACKER_READ_DATA;
typedef struct st_PACKER_ASSETTYPE;
typedef struct st_STRAN_DATA;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct st_PACKER_READ_FUNCS;
typedef enum en_LAYER_TYPE;

typedef unsigned int(*type_0)(st_PACKER_READ_DATA*, unsigned int);
typedef void(*type_1)(void*, unsigned int, void*);
typedef void*(*type_2)(st_PACKER_READ_DATA*, unsigned int, char*, void*);
typedef void*(*type_4)(st_PACKER_READ_DATA*, unsigned int, int, unsigned int*);
typedef void*(*type_5)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef void*(*type_6)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef int(*type_7)(st_PACKER_READ_DATA*, unsigned int);
typedef int(*type_8)(void*, unsigned int, void*, int);
typedef void*(*type_9)(void*, unsigned int, void*, int*, int*);
typedef int(*type_11)(st_PACKER_READ_DATA*, unsigned int);
typedef void(*type_12)(void*, unsigned int);
typedef void(*type_13)(void*, unsigned int, void*, char*);
typedef int(*type_14)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef char*(*type_15)(st_PACKER_READ_DATA*, unsigned int);
typedef unsigned int(*type_16)(st_PACKER_READ_DATA*);
typedef int(*type_18)(st_PACKER_READ_DATA*, unsigned int, st_PKR_ASSET_TOCINFO*);
typedef int(*type_19)(st_PACKER_READ_DATA*, unsigned int, int, st_PKR_ASSET_TOCINFO*);
typedef int(*type_21)(st_PACKER_READ_DATA*, unsigned int);
typedef unsigned int(*type_22)(st_PACKER_READ_DATA*);
typedef void(*type_23)(st_PACKER_READ_DATA*);
typedef int(*type_24)(void*, float);
typedef st_PACKER_READ_DATA*(*type_26)(void*, char*, unsigned int, int*, st_PACKER_ASSETTYPE*);
typedef void(*type_27)(st_PACKER_READ_DATA*);
typedef int(*type_29)(st_PACKER_READ_DATA*, en_LAYER_TYPE);

typedef char type_3[256];
typedef st_STRAN_SCENE type_10[16];
typedef char type_17[2];
typedef char type_20[64];
typedef char type_25[64];
typedef char type_28[16];
typedef char type_30[16];

struct st_STRAN_SCENE
{
	unsigned int scnid;
	int lockid;
	st_PACKER_READ_DATA* spkg;
	int isHOP;
	void* userdata;
	type_3 fnam;
};

struct st_PACKER_READ_DATA
{
};

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_5 readXForm;
	type_6 writeXForm;
	type_8 assetLoaded;
	type_9 makeData;
	type_1 cleanup;
	type_12 assetUnloaded;
	type_13 writePeek;
};

struct st_STRAN_DATA
{
	type_10 hipscn;
	unsigned int loadlock;
};

struct st_PKR_ASSET_TOCINFO
{
	unsigned int aid;
	st_PACKER_ASSETTYPE* typeref;
	unsigned int sector;
	unsigned int plus_offset;
	unsigned int size;
	void* mempos;
};

struct st_PACKER_READ_FUNCS
{
	unsigned int api_ver;
	type_26 Init;
	type_27 Done;
	type_29 LoadLayer;
	type_0 GetAssetSize;
	type_2 LoadAsset;
	type_4 AssetByType;
	type_7 AssetCount;
	type_11 IsAssetReady;
	type_14 SetActive;
	type_15 AssetName;
	type_16 GetBaseSector;
	type_18 GetAssetInfo;
	type_19 GetAssetInfoByType;
	type_21 PkgHasAsset;
	type_22 PkgTimeStamp;
	type_23 PkgDisconnect;
};

enum en_LAYER_TYPE
{
	PKR_LTYPE_ALL = 0xffffffff,
	PKR_LTYPE_DEFAULT,
	PKR_LTYPE_TEXTURE,
	PKR_LTYPE_BSP,
	PKR_LTYPE_MODEL,
	PKR_LTYPE_ANIMATION,
	PKR_LTYPE_VRAM,
	PKR_LTYPE_SRAM,
	PKR_LTYPE_SNDTOC,
	PKR_LTYPE_CUTSCENE,
	PKR_LTYPE_CUTSCENETOC,
	PKR_LTYPE_JSPINFO,
	PKR_LTYPE_NOMORE
};

type_28 buffer;
type_30 buffer;
int g_straninit;
st_STRAN_DATA g_xstdata;
st_PACKER_READ_FUNCS* g_pkrf;
st_PACKER_ASSETTYPE* g_typeHandlers;

st_STRAN_SCENE* XST_find_bySID(unsigned int sid, int findTheHOP);
st_STRAN_SCENE* XST_lock_next();
char* xST_xAssetID_HIPFullPath(unsigned int aid, unsigned int* sceneID);
char* xST_xAssetID_HIPFullPath(unsigned int aid);
int xSTGetAssetInfoByType(unsigned int type, int idx, st_PKR_ASSET_TOCINFO* ainfo);
int xSTGetAssetInfo(unsigned int aid, st_PKR_ASSET_TOCINFO* tocainfo);
void* xSTFindAssetByType(unsigned int type, int idx, unsigned int* size);
int xSTAssetCountByType(unsigned int type);
void* xSTFindAsset(unsigned int aid, unsigned int* size);
char* xSTAssetName(void* raw_HIP_asset);
char* xSTAssetName(unsigned int aid);
int xSTSwitchScene(unsigned int sid, void* userdata, type_24 progmon);
void xSTDisconnect(unsigned int sid, int flg_hiphop);
float xSTLoadStep();
void xSTUnLoadScene(unsigned int sid, int flg_hiphop);
int xSTQueueSceneAssets(unsigned int sid, int flg_hiphop);
int xSTPreLoadScene(unsigned int sid, void* userdata, int flg_hiphop);
int xSTShutdown();
int xSTStartup(st_PACKER_ASSETTYPE* handlers);

// XST_find_bySID__FUii
// Start address: 0x20c750
st_STRAN_SCENE* XST_find_bySID(unsigned int sid, int findTheHOP)
{
	st_STRAN_SCENE* da_sdata;
	int i;
}

// XST_lock_next__Fv
// Start address: 0x20c7e0
st_STRAN_SCENE* XST_lock_next()
{
	st_STRAN_SCENE* sdata;
	int i;
	int uselock;
}

// xST_xAssetID_HIPFullPath__FUiPUi
// Start address: 0x20c8a0
char* xST_xAssetID_HIPFullPath(unsigned int aid, unsigned int* sceneID)
{
	char* da_hipname;
	int rc;
	int i;
}

// xST_xAssetID_HIPFullPath__FUi
// Start address: 0x20c9f0
char* xST_xAssetID_HIPFullPath(unsigned int aid)
{
}

// xSTGetAssetInfoByType__FUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x20ca00
int xSTGetAssetInfoByType(unsigned int type, int idx, st_PKR_ASSET_TOCINFO* ainfo)
{
	int found;
	st_PKR_ASSET_TOCINFO tocinfo;
	int rc;
	int i;
	int sum;
	int cnt;
}

// xSTGetAssetInfo__FUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x20cc10
int xSTGetAssetInfo(unsigned int aid, st_PKR_ASSET_TOCINFO* tocainfo)
{
	int found;
	st_PKR_ASSET_TOCINFO tocinfo;
	int rc;
	int scncnt;
	int i;
}

// xSTFindAssetByType__FUiiPUi
// Start address: 0x20cdb0
void* xSTFindAssetByType(unsigned int type, int idx, unsigned int* size)
{
	void* memptr;
	int scncnt;
	int i;
	int sum;
	int cnt;
}

// xSTAssetCountByType__FUi
// Start address: 0x20cf40
int xSTAssetCountByType(unsigned int type)
{
	int sum;
	int cnt;
	int scncnt;
	int i;
}

// xSTFindAsset__FUiPUi
// Start address: 0x20d060
void* xSTFindAsset(unsigned int aid, unsigned int* size)
{
	void* memloc;
	int ready;
	int scncnt;
	int i;
	int rc;
}

// xSTAssetName__FPv
// Start address: 0x20d220
char* xSTAssetName(void* raw_HIP_asset)
{
	char* aname;
	unsigned int aid;
	int i;
}

// xSTAssetName__FUi
// Start address: 0x20d350
char* xSTAssetName(unsigned int aid)
{
	char* aname;
	int i;
}

// xSTSwitchScene__FUiPvPFPvf_i
// Start address: 0x20d470
int xSTSwitchScene(unsigned int sid, void* userdata, type_24 progmon)
{
	st_STRAN_SCENE* sdata;
	int rc;
	int i;
}

// xSTDisconnect__FUii
// Start address: 0x20d540
void xSTDisconnect(unsigned int sid, int flg_hiphop)
{
	st_STRAN_SCENE* sdata;
}

// xSTLoadStep__FUi
// Start address: 0x20d590
float xSTLoadStep()
{
	float pct;
	int rc;
}

// xSTUnLoadScene__FUii
// Start address: 0x20d5e0
void xSTUnLoadScene(unsigned int sid, int flg_hiphop)
{
	st_STRAN_SCENE* sdata;
	int cnt;
	int i;
}

// xSTQueueSceneAssets__FUii
// Start address: 0x20d810
int xSTQueueSceneAssets(unsigned int sid, int flg_hiphop)
{
	int result;
	st_STRAN_SCENE* sdata;
}

// xSTPreLoadScene__FUiPvi
// Start address: 0x20d880
int xSTPreLoadScene(unsigned int sid, void* userdata, int flg_hiphop)
{
	int result;
	st_STRAN_SCENE* sdata;
	int cltver;
}

// xSTShutdown__Fv
// Start address: 0x20dc70
int xSTShutdown()
{
}

// xSTStartup__FP19st_PACKER_ASSETTYPE
// Start address: 0x20dd40
int xSTStartup(st_PACKER_ASSETTYPE* handlers)
{
}

