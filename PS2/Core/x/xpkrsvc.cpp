typedef struct st_PACKER_READ_DATA;
typedef struct st_HIPLOADDATA;
typedef struct st_PACKER_ATOC_NODE;
typedef struct st_PACKER_LTOC_NODE;
typedef struct st_PACKER_ASSETTYPE;
typedef struct RwLLLink;
typedef struct st_PACKER_WRITE_DATA;
typedef struct st_PACKER_READ_FUNCS;
typedef struct st_XORDEREDARRAY;
typedef struct RwResEntry;
typedef struct st_PKR_ASSET_TOCINFO;
typedef enum en_LAYER_TYPE;
typedef enum en_READ_ASYNC_STATUS;
typedef struct st_HIPLOADFUNCS;
typedef enum en_GENERATE_ERROR;
typedef enum en_PKR_LAYER_LOAD_DEST;
typedef struct RwModuleInfo;

typedef void(*type_0)(void*, unsigned int);
typedef int(*type_1)(st_PACKER_READ_DATA*, unsigned int);
typedef void(*type_2)(void*, unsigned int, void*, char*);
typedef st_HIPLOADDATA*(*type_3)(char*, char*, int);
typedef int(*type_5)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef int(*type_6)(void*, void*);
typedef void(*type_7)(st_HIPLOADDATA*);
typedef unsigned int(*type_9)(st_HIPLOADDATA*);
typedef char*(*type_10)(st_PACKER_READ_DATA*, unsigned int);
typedef int(*type_11)(void*, void*);
typedef unsigned int(*type_13)(st_HIPLOADDATA*);
typedef unsigned int(*type_14)(st_PACKER_READ_DATA*);
typedef void(*type_15)(st_HIPLOADDATA*);
typedef int(*type_16)(st_PACKER_READ_DATA*, unsigned int, st_PKR_ASSET_TOCINFO*);
typedef int(*type_17)(st_HIPLOADDATA*, char*, int);
typedef int(*type_18)(unsigned int, en_GENERATE_ERROR, char*, char*);
typedef void(*type_19)(RwResEntry*);
typedef int(*type_20)(st_PACKER_READ_DATA*, unsigned int, int, st_PKR_ASSET_TOCINFO*);
typedef int(*type_21)(st_HIPLOADDATA*, short*, int);
typedef int(*type_22)(st_HIPLOADDATA*, int*, int);
typedef int(*type_23)(st_PACKER_READ_DATA*, unsigned int);
typedef int(*type_24)(void*, unsigned int, char*, char*);
typedef unsigned int(*type_25)(st_PACKER_READ_DATA*);
typedef int(*type_26)(st_HIPLOADDATA*, float*, int);
typedef void(*type_28)(st_PACKER_READ_DATA*);
typedef int(*type_29)(st_HIPLOADDATA*, char*);
typedef void*(*type_30)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef int(*type_31)(st_HIPLOADDATA*, int, int);
typedef void(*type_33)(st_HIPLOADDATA*, int);
typedef void*(*type_34)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef en_READ_ASYNC_STATUS(*type_36)(st_HIPLOADDATA*);
typedef void(*type_38)(RwResEntry*);
typedef st_PACKER_READ_DATA*(*type_40)(void*, char*, unsigned int, int*, st_PACKER_ASSETTYPE*);
typedef int(*type_41)(void*, unsigned int, void*, int);
typedef void(*type_43)(st_PACKER_READ_DATA*);
typedef int(*type_45)(st_PACKER_READ_DATA*, en_LAYER_TYPE);
typedef void*(*type_47)(void*, unsigned int, void*, int*, int*);
typedef unsigned int(*type_48)(st_PACKER_READ_DATA*, unsigned int);
typedef void(*type_49)(void*, unsigned int, void*);
typedef void*(*type_50)(st_PACKER_READ_DATA*, unsigned int, char*, void*);
typedef void*(*type_52)(st_PACKER_READ_DATA*, unsigned int, int, unsigned int*);
typedef int(*type_57)(st_PACKER_READ_DATA*, unsigned int);

typedef unsigned int type_4[4096];
typedef st_XORDEREDARRAY type_8[129];
typedef char type_12[32];
typedef st_PACKER_READ_DATA type_27[16];
typedef char type_32[32];
typedef char type_35[32];
typedef char type_37[256];
typedef char type_39[32];
typedef char type_42[32];
typedef char type_44[256];
typedef char type_46[256];
typedef char type_51[256];
typedef int type_53[129];
typedef char* type_54[11];
typedef char type_55[128];
typedef char type_56[128];

struct st_PACKER_READ_DATA
{
	st_PACKER_ASSETTYPE* types;
	void* userdata;
	unsigned int opts;
	unsigned int pkgver;
	int cltver;
	int subver;
	int compatver;
	st_HIPLOADDATA* pkg;
	unsigned int base_sector;
	int lockid;
	type_55 packfile;
	int asscnt;
	int laycnt;
	st_XORDEREDARRAY asstoc;
	st_XORDEREDARRAY laytoc;
	st_PACKER_ATOC_NODE* pool_anode;
	int pool_nextaidx;
	type_8 typelist;
	long time_made;
	long time_mod;
};

struct st_HIPLOADDATA
{
};

struct st_PACKER_ATOC_NODE
{
	unsigned int aid;
	unsigned int asstype;
	int d_off;
	int d_size;
	int d_pad;
	unsigned int d_chksum;
	int assalign;
	int infoflag;
	int loadflag;
	char* memloc;
	int x_size;
	int readcnt;
	int readrem;
	st_PACKER_ASSETTYPE* typeref;
	st_HIPLOADDATA* ownpkg;
	st_PACKER_READ_DATA* ownpr;
	type_12 basename;
};

struct st_PACKER_LTOC_NODE
{
	en_LAYER_TYPE laytyp;
	st_XORDEREDARRAY assref;
	int flg_ldstat;
	int danglecnt;
	unsigned int chksum;
	int laysize;
	char* laymem;
	char* laytru;
};

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_30 readXForm;
	type_34 writeXForm;
	type_41 assetLoaded;
	type_47 makeData;
	type_49 cleanup;
	type_0 assetUnloaded;
	type_2 writePeek;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

struct st_PACKER_WRITE_DATA
{
	st_PACKER_ASSETTYPE* types;
	void* userdata;
	int lockid;
	unsigned int pkropt;
	int cltver;
	type_37 packfile;
	int sectalign;
	int dassalign;
	st_XORDEREDARRAY asslist;
	st_XORDEREDARRAY laylist;
	int off_lg_asset;
	int off_lg_layer;
	int off_lg_xform;
	type_44 hdrfile;
	type_24 hdrfunc;
	type_18 generrf;
};

struct st_PACKER_READ_FUNCS
{
	unsigned int api_ver;
	type_40 Init;
	type_43 Done;
	type_45 LoadLayer;
	type_48 GetAssetSize;
	type_50 LoadAsset;
	type_52 AssetByType;
	type_57 AssetCount;
	type_1 IsAssetReady;
	type_5 SetActive;
	type_10 AssetName;
	type_14 GetBaseSector;
	type_16 GetAssetInfo;
	type_20 GetAssetInfoByType;
	type_23 PkgHasAsset;
	type_25 PkgTimeStamp;
	type_28 PkgDisconnect;
};

struct st_XORDEREDARRAY
{
	void** list;
	int cnt;
	int max;
	int warnlvl;
};

struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type_19 destroyNotify;
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

enum en_READ_ASYNC_STATUS
{
	HIP_RDSTAT_NONE = 0xffffffff,
	HIP_RDSTAT_INPROG,
	HIP_RDSTAT_SUCCESS,
	HIP_RDSTAT_FAILED,
	HIP_RDSTAT_NOBYPASS,
	HIP_RDSTAT_NOASYNC
};

struct st_HIPLOADFUNCS
{
	type_3 create;
	type_7 destroy;
	type_9 basesector;
	type_13 enter;
	type_15 exit;
	type_17 readBytes;
	type_21 readShorts;
	type_22 readLongs;
	type_26 readFloats;
	type_29 readString;
	type_31 setBypass;
	type_33 setSpot;
	type_36 pollRead;
};

enum en_GENERATE_ERROR
{
	PKR_GENERR_NONE,
	PKR_GENERR_PACKOPEN,
	PKR_GENERR_ASSETOPEN,
	PKR_GENERR_EMPTYASSET,
	PKR_GENERR_WRITEFAIL,
	PKR_GENERR_VIRTUAL,
	PKR_GENERR_DUPEASSET,
	PKR_GENERR_UNKNOWN
};

enum en_PKR_LAYER_LOAD_DEST
{
	PKR_LDDEST_SKIP,
	PKR_LDDEST_KEEPSTATIC,
	PKR_LDDEST_KEEPMALLOC,
	PKR_LDDEST_RWHANDOFF,
	PKR_LDDEST_NOMORE,
	PKR_LDDEST_FORCE = 0x7fffffff
};

struct RwModuleInfo
{
	int globalsOffset;
	int numInstances;
};

st_PACKER_READ_FUNCS g_pkr_read_funcmap_original;
st_PACKER_READ_FUNCS g_pkr_read_funcmap;
st_HIPLOADFUNCS* g_hiprf;
type_27 g_readdatainst;
unsigned int g_loadlock;
int pkr_sector_size;
int g_packinit;
int g_memalloc_pair;
int g_memalloc_runtot;
int g_memalloc_runfree;
type_54 g_strz_layername;
RwResEntry* g_RWarena_resEntry;
RwResEntry* g_RWarena_resOwner;
int g_RWarena_bufsize;
RwModuleInfo resourcesModule;
type_4 ourGlobals;
type_38 PKR_special_loadbuf_killed;
unsigned int gActiveHeap;
type_11 OrdTest_R_AssetID;
type_6 OrdComp_R_Asset;

void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, int amount, int align);
void PKR_special_loadbuf_killed();
void PKR_relmem(unsigned int id, int blksize, void* memptr, int isTemp);
void* PKR_getmem(unsigned int id, int amount, int align, int isTemp, char** memtru);
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr);
st_PACKER_ASSETTYPE* PKR_type2typeref(unsigned int type, st_PACKER_ASSETTYPE* typelist);
int LOD_r_STRM(st_HIPLOADDATA* pkg);
int LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode);
int LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int ValidatePlatform(char* plat, char* vid, char* lang, char* title);
int LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int OrdTest_R_AssetID(void* vkey, void* vitem);
int OrdComp_R_Asset(void* vkey, void* vitem);
int PKR_FRIEND_assetIsGameDup(unsigned int aid, st_PACKER_READ_DATA* skippr, int oursize, unsigned int ourtype, unsigned int chksum);
int PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, unsigned int aid);
int PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, unsigned int type, int idx, st_PKR_ASSET_TOCINFO* tocinfo);
int PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, unsigned int aid, st_PKR_ASSET_TOCINFO* tocinfo);
unsigned int PKR_GetBaseSector(st_PACKER_READ_DATA* pr);
char* PKR_AssetName(st_PACKER_READ_DATA* pr, unsigned int aid);
unsigned int PKRAssetIDFromInst(void* asset_inst);
void PKR_Disconnect(st_PACKER_READ_DATA* pr);
unsigned int PKR_getPackTimestamp(st_PACKER_READ_DATA* pr);
int PKR_IsAssetReady(st_PACKER_READ_DATA* pr, unsigned int aid);
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, unsigned int type, int idx, unsigned int* size);
int PKR_AssetCount(st_PACKER_READ_DATA* pr, unsigned int type);
unsigned int PKR_GetAssetSize(st_PACKER_READ_DATA* pr, unsigned int aid);
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, unsigned int aid);
int PKR_LoadLayer();
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, unsigned int aid);
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int dumpable_layer);
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode);
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode);
int PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer);
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer);
char* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer);
int PKR_LoadStep_Async();
int PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr);
int PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer);
void PKR_ReadDone(st_PACKER_READ_DATA* pr);
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, char* pkgfile, unsigned int opts, int* cltver, st_PACKER_ASSETTYPE* typelist);
int PKRLoadStep();
int PKRShutdown();
int PKRStartup();
st_PACKER_READ_FUNCS* PKRGetReadFuncs(int apiver);

// PKR_specialGet_loadbuf__FP19st_PACKER_READ_DATAii
// Start address: 0x1f7010
void* PKR_specialGet_loadbuf(st_PACKER_READ_DATA* pr, int amount, int align)
{
	void* da_mem;
}

// PKR_special_loadbuf_killed__FP10RwResEntry
// Start address: 0x1f70b0
void PKR_special_loadbuf_killed()
{
}

// PKR_relmem__FUiiPvUii
// Start address: 0x1f70c0
void PKR_relmem(unsigned int id, int blksize, void* memptr, int isTemp)
{
}

// PKR_getmem__FUiiUiiiPPc
// Start address: 0x1f7180
void* PKR_getmem(unsigned int id, int amount, int align, int isTemp, char** memtru)
{
	void* memptr;
}

// PKR_bld_typecnt__FP19st_PACKER_READ_DATA
// Start address: 0x1f7270
void PKR_bld_typecnt(st_PACKER_READ_DATA* pr)
{
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
	int i;
	int j;
	int idx;
	type_53 typcnt;
	st_XORDEREDARRAY* tmplist;
	unsigned int lasttype;
	int lasttidx;
}

// PKR_type2typeref__FUiP19st_PACKER_ASSETTYPE
// Start address: 0x1f7580
st_PACKER_ASSETTYPE* PKR_type2typeref(unsigned int type, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_ASSETTYPE* da_type;
	st_PACKER_ASSETTYPE* tmptype;
}

// LOD_r_STRM__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f75f0
int LOD_r_STRM(st_HIPLOADDATA* pkg)
{
	unsigned int cid;
}

// LOD_r_LHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f76a0
int LOD_r_LHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	unsigned int cid;
	int ival;
	en_LAYER_TYPE laytyp;
	int refcnt;
	int idx;
	int i;
	st_PACKER_LTOC_NODE* laynode;
	st_PACKER_ATOC_NODE* assnode;
}

// LOD_r_LTOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f78f0
int LOD_r_LTOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	unsigned int cid;
}

// LOD_r_ADBG__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAP19st_PACKER_ATOC_NODE
// Start address: 0x1f79c0
int LOD_r_ADBG(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr, st_PACKER_ATOC_NODE* assnode)
{
	int ival;
	type_46 tmpbuf;
}

// LOD_r_AHDR__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ac0
int LOD_r_AHDR(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	unsigned int cid;
	int ival;
	int isdup;
}

// LOD_r_ATOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7ce0
int LOD_r_ATOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	unsigned int cid;
}

// LOD_r_DICT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7db0
int LOD_r_DICT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	unsigned int cid;
}

// LOD_r_PLAT__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f7e80
int LOD_r_PLAT(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int result;
	int plattag;
	type_32 platname;
	type_35 vidname;
	type_39 langname;
	type_42 titlename;
	int n;
	int rc;
}

// ValidatePlatform__FP14st_HIPLOADDATAP19st_PACKER_READ_DATAiPcPcPcPc
// Start address: 0x1f8000
int ValidatePlatform(char* plat, char* vid, char* lang, char* title)
{
	type_56 fullname;
	int rc;
}

// LOD_r_PVER__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f82c0
int LOD_r_PVER(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int ver;
	int amt;
}

// LOD_r_PACK__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f8380
int LOD_r_PACK(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	unsigned int cid;
}

// OrdTest_R_AssetID__FPCvPv
// Start address: 0x1f85e0
int OrdTest_R_AssetID(void* vkey, void* vitem)
{
	int rc;
	unsigned int key;
}

// OrdComp_R_Asset__FPvPv
// Start address: 0x1f8620
int OrdComp_R_Asset(void* vkey, void* vitem)
{
	int rc;
}

// PKR_FRIEND_assetIsGameDup__FUiPC19st_PACKER_READ_DATAiUiUiPc
// Start address: 0x1f8670
int PKR_FRIEND_assetIsGameDup(unsigned int aid, st_PACKER_READ_DATA* skippr, int oursize, unsigned int ourtype, unsigned int chksum)
{
	int is_dup;
	st_PACKER_ATOC_NODE* tmp_ass;
	int i;
	int idx;
}

// PKR_PkgHasAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8840
int PKR_PkgHasAsset(st_PACKER_READ_DATA* pr, unsigned int aid)
{
	int rc;
	int idx;
}

// PKR_GetAssetInfoByType__FP19st_PACKER_READ_DATAUiiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f88d0
int PKR_GetAssetInfoByType(st_PACKER_READ_DATA* pr, unsigned int type, int idx, st_PKR_ASSET_TOCINFO* tocinfo)
{
	st_PACKER_ATOC_NODE* assnode;
	st_XORDEREDARRAY* typlist;
}

// PKR_GetAssetInfo__FP19st_PACKER_READ_DATAUiP20st_PKR_ASSET_TOCINFO
// Start address: 0x1f8a20
int PKR_GetAssetInfo(st_PACKER_READ_DATA* pr, unsigned int aid, st_PKR_ASSET_TOCINFO* tocinfo)
{
	int idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_GetBaseSector__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b00
unsigned int PKR_GetBaseSector(st_PACKER_READ_DATA* pr)
{
}

// PKR_AssetName__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8b10
char* PKR_AssetName(st_PACKER_READ_DATA* pr, unsigned int aid)
{
	char* da_name;
	int idx;
}

// PKRAssetIDFromInst__FPv
// Start address: 0x1f8b80
unsigned int PKRAssetIDFromInst(void* asset_inst)
{
}

// PKR_Disconnect__FP19st_PACKER_READ_DATA
// Start address: 0x1f8b90
void PKR_Disconnect(st_PACKER_READ_DATA* pr)
{
}

// PKR_getPackTimestamp__FP19st_PACKER_READ_DATA
// Start address: 0x1f8bd0
unsigned int PKR_getPackTimestamp(st_PACKER_READ_DATA* pr)
{
}

// PKR_IsAssetReady__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8be0
int PKR_IsAssetReady(st_PACKER_READ_DATA* pr, unsigned int aid)
{
	int is_ok;
	int idx;
}

// PKR_AssetByType__FP19st_PACKER_READ_DATAUiiPUi
// Start address: 0x1f8c60
void* PKR_AssetByType(st_PACKER_READ_DATA* pr, unsigned int type, int idx, unsigned int* size)
{
	st_XORDEREDARRAY* typlist;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_AssetCount__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d20
int PKR_AssetCount(st_PACKER_READ_DATA* pr, unsigned int type)
{
	int cnt;
}

// PKR_GetAssetSize__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8d90
unsigned int PKR_GetAssetSize(st_PACKER_READ_DATA* pr, unsigned int aid)
{
	int idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_LoadAsset__FP19st_PACKER_READ_DATAUiPCcPv
// Start address: 0x1f8e20
void* PKR_LoadAsset(st_PACKER_READ_DATA* pr, unsigned int aid)
{
}

// PKR_LoadLayer__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x1f8e30
int PKR_LoadLayer()
{
}

// PKR_FindAsset__FP19st_PACKER_READ_DATAUi
// Start address: 0x1f8e40
void* PKR_FindAsset(st_PACKER_READ_DATA* pr, unsigned int aid)
{
	int idx;
	st_PACKER_ATOC_NODE* assnode;
}

// PKR_xform_asset__FP19st_PACKER_ATOC_NODEi
// Start address: 0x1f8eb0
void PKR_xform_asset(st_PACKER_ATOC_NODE* assnode, int dumpable_layer)
{
	char* xformloc;
	st_PACKER_ASSETTYPE* atype;
}

// PKR_xformLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f8fe0
void PKR_xformLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int i;
	int will_be_dumped;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_updateLayerAssets__FP19st_PACKER_LTOC_NODE
// Start address: 0x1f9100
void PKR_updateLayerAssets(st_PACKER_LTOC_NODE* laynode)
{
	int i;
	st_PACKER_ATOC_NODE* tmpass;
	int lay_hip_pos;
}

// PKR_findNextLayerToLoad__FPP19st_PACKER_READ_DATAPP19st_PACKER_LTOC_NODE
// Start address: 0x1f91f0
int PKR_findNextLayerToLoad(st_PACKER_READ_DATA** work_on_pkg, st_PACKER_LTOC_NODE** next_layer)
{
	st_PACKER_READ_DATA* tmppr;
	st_PACKER_LTOC_NODE* tmplay;
	int i;
	int j;
}

// PKR_LayerMemRelease__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9300
void PKR_LayerMemRelease(st_PACKER_LTOC_NODE* layer)
{
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_LayerMemReserve__FP19st_PACKER_READ_DATAP19st_PACKER_LTOC_NODE
// Start address: 0x1f9420
char* PKR_LayerMemReserve(st_PACKER_READ_DATA* pr, st_PACKER_LTOC_NODE* layer)
{
	char* mem;
	en_PKR_LAYER_LOAD_DEST loaddest;
}

// PKR_LoadStep_Async__Fv
// Start address: 0x1f9550
int PKR_LoadStep_Async()
{
	int moretodo;
	int rc;
	en_READ_ASYNC_STATUS readstat;
	st_PACKER_ATOC_NODE* tmpass;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	en_PKR_LAYER_LOAD_DEST loaddest;
	st_PACKER_READ_DATA* curpr;
	st_PACKER_LTOC_NODE* asynlay;
}

// PKR_parse_TOC__FP14st_HIPLOADDATAP19st_PACKER_READ_DATA
// Start address: 0x1f9990
int PKR_parse_TOC(st_HIPLOADDATA* pkg, st_PACKER_READ_DATA* pr)
{
	int is_ok;
	unsigned int cid;
	int done;
}

// PKR_SetActive__FP19st_PACKER_READ_DATA13en_LAYER_TYPE
// Start address: 0x1f9b40
int PKR_SetActive(st_PACKER_READ_DATA* pr, en_LAYER_TYPE layer)
{
	int result;
	int rc;
	int i;
	int j;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
}

// PKR_ReadDone__FP19st_PACKER_READ_DATA
// Start address: 0x1f9cc0
void PKR_ReadDone(st_PACKER_READ_DATA* pr)
{
	int i;
	int j;
	int lockid;
	st_PACKER_ATOC_NODE* assnode;
	st_PACKER_LTOC_NODE* laynode;
	st_XORDEREDARRAY* tmplist;
}

// PKR_ReadInit__FPvPcUiPiP19st_PACKER_ASSETTYPE
// Start address: 0x1f9f50
st_PACKER_READ_DATA* PKR_ReadInit(void* userdata, char* pkgfile, unsigned int opts, int* cltver, st_PACKER_ASSETTYPE* typelist)
{
	st_PACKER_READ_DATA* pr;
	int i;
	int uselock;
	char* tocbuf_RAW;
	char* tocbuf_aligned;
}

// PKRLoadStep__Fi
// Start address: 0x1fa170
int PKRLoadStep()
{
	int more_todo;
}

// PKRShutdown__Fv
// Start address: 0x1fa180
int PKRShutdown()
{
}

// PKRStartup__Fv
// Start address: 0x1fa1a0
int PKRStartup()
{
}

// PKRGetReadFuncs__Fi
// Start address: 0x1fa2f0
st_PACKER_READ_FUNCS* PKRGetReadFuncs(int apiver)
{
}

