typedef struct st_XSAVEGAME_CLIENT;
typedef struct XSGAutoData;
typedef struct st_XSAVEGAME_DATA;
typedef enum en_SAVEGAME_MODE;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef enum en_XSGASYNC_STATUS;
typedef enum en_ASYNC_OPSTAT;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct st_ISGSESSION;
typedef enum en_ASYNC_OPERR;
typedef enum en_XSG_TGT_NAME_FORMAT;
typedef struct st_XSAVEGAME_LEADER;
typedef enum en_XSG_WHYFAIL;
typedef enum en_CHGCODE;
typedef struct st_XSG_SHORTLABEL;

typedef int(*type_2)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef int(*type_4)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int(*type_7)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef int(*type_10)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef int(*type_11)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int(*type_12)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef void(*type_17)(void*, en_CHGCODE);
typedef void(*type_20)(void*, en_CHGCODE);

typedef char type_0[64];
typedef char type_1[32];
typedef char type_3[64];
typedef st_XSG_SHORTLABEL type_5[32];
typedef char type_6[116];
typedef char type_8[256];
typedef st_XSAVEGAME_CLIENT type_9[128];
typedef char type_13[64];
typedef char type_14[2];
typedef char type_15[32];
typedef st_XSAVEGAME_LEADER type_16[3];
typedef char type_18[64];
typedef char type_19[32];
typedef char type_21[256];
typedef char type_22[23];

struct st_XSAVEGAME_CLIENT
{
	unsigned int idtag;
	type_10 cltinfo;
	type_11 cltproc;
	type_12 cltload;
	void* cltdata;
	int needamt;
	int maxamt;
	int realamt;
	char* buf_sizepos;
	char* buf_maxpos;
	int blokact;
	int blokmax;
	char* blokpos;
	char* readpos;
	int readamt;
	int readremain;
};

struct XSGAutoData
{
	int flg_autodata;
	int lastTarg;
	int lastGame;
	int lastPhysicalSlot;
	st_ISGSESSION* isg_monitor;
};

struct st_XSAVEGAME_DATA
{
	int gfile_idx;
	en_SAVEGAME_MODE mode;
	unsigned int stage;
	int gslot;
	type_3 label;
	int progress;
	int thumbIconIdx;
	long playtime;
	char* membuf;
	int memsize;
	char* buf_curpos;
	char* buf_sizespot;
	char* buf_cksmspot;
	int totamt;
	unsigned int chksum;
	unsigned int upd_tally;
	int cltneed;
	int cltmax;
	int chdrneed;
	int stkcnt;
	type_9 cltstk;
	st_XSAVEGAME_CLIENT dfltloadclt;
	unsigned int file_chksum;
	unsigned int read_chksum;
	int readsize;
	char* loadbuf;
	int loadsize;
	char* walkpos;
	int walkremain;
	st_ISGSESSION* isgsess;
};

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

struct st_XSAVEGAME_READCONTEXT
{
};

enum en_XSGASYNC_STATUS
{
	XSG_ASTAT_NOOP,
	XSG_ASTAT_INPROG,
	XSG_ASTAT_SUCCESS,
	XSG_ASTAT_FAILED
};

enum en_ASYNC_OPSTAT
{
	ISG_OPSTAT_FAILURE = 0xffffffff,
	ISG_OPSTAT_INPROG,
	ISG_OPSTAT_SUCCESS
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct st_ISGSESSION
{
};

enum en_ASYNC_OPERR
{
	ISG_OPERR_NONE,
	ISG_OPERR_NOOPER,
	ISG_OPERR_MULTIOPER,
	ISG_OPERR_INITFAIL,
	ISG_OPERR_GAMEDIR,
	ISG_OPERR_NOCARD,
	ISG_OPERR_NOROOM,
	ISG_OPERR_DAMAGE,
	ISG_OPERR_CORRUPT,
	ISG_OPERR_OTHER,
	ISG_OPERR_SVNOSPACE,
	ISG_OPERR_SVINIT,
	ISG_OPERR_SVWRITE,
	ISG_OPERR_SVOPEN,
	ISG_OPERR_LDINIT,
	ISG_OPERR_LDREAD,
	ISG_OPERR_LDOPEN,
	ISG_OPERR_TGTERR,
	ISG_OPERR_TGTREM,
	ISG_OPERR_TGTPREP,
	ISG_OPERR_UNKNOWN,
	ISG_OPERR_NOMORE
};

enum en_XSG_TGT_NAME_FORMAT
{
	XSG_NAMFMT_BASIC,
	XSG_NAMFMT_SYMBOLS,
	XSG_NAMFMT_PROPER,
	XSG_NAMFMT_PHYSSLOT,
	XSG_NAMFMT_PHYSICAL
};

struct st_XSAVEGAME_LEADER
{
	type_18 gameLabel;
	int progress;
	long gametime;
	char thumbIconIdx;
};

enum en_XSG_WHYFAIL
{
	XSG_WHYERR_NONE,
	XSG_WHYERR_NOCARD,
	XSG_WHYERR_NOROOM,
	XSG_WHYERR_DAMAGE,
	XSG_WHYERR_CARDYANKED,
	XSG_WHYERR_OTHER,
	XSG_WHYERR_NOMORE
};

enum en_CHGCODE
{
	ISG_CHG_NONE,
	ISG_CHG_TARGET,
	ISG_CHG_GAMELIST
};

struct st_XSG_SHORTLABEL
{
	char* msglong;
	char* msgshort;
};

int g_xsginit;
st_XSAVEGAME_DATA g_xsgdata;
type_16 g_leaders;
type_5 g_msglabels;
XSGAutoData g_autodata;
type_17 ASG_ISG_changed;
type_4 xSG_cb_leader_svproc;
type_2 xSG_cb_leader_svinfo;
type_7 xSG_cb_leader_load;
type_20 xSG_cb_ISGChange;

void ASG_ISG_changed(en_CHGCODE what);
void Discard(XSGAutoData* this);
int SetCache(XSGAutoData* this, int targ, int game, int physicalSlot);
int IsValid(XSGAutoData* this);
XSGAutoData* xSGAutoSave_GetCache();
int xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata);
int xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata);
int xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata);
void xSG_cb_ISGChange(en_CHGCODE what);
int xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata);
int xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt);
int xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata);
int xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata);
int xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata);
int xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata);
int xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata);
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float* buff, int n);
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, unsigned int* buff, int n);
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int* buff, int n);
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff, int n);
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff, int elesiz, int n);
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float* data, int n);
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, unsigned int* data, int n);
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int* data, int n);
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data, int n);
int xSGWriteStrLen(char* str);
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data, int elesiz, int n);
int xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt);
int xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt);
int xSG_cb_leader_svinfo(int* cur_space, int* max_fullgame);
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int block, en_XSG_WHYFAIL* whyFail, char* errmsg);
int xSGWrapup(st_XSAVEGAME_DATA* xsgdata);
int xSGProcess(st_XSAVEGAME_DATA* xsgdata);
int xSGSetup(st_XSAVEGAME_DATA* xsgdata, int gidx, char* label, int progress, long playtime, int thumbIconIdx);
int xSGSetup(st_XSAVEGAME_DATA* xsgdata);
int xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, unsigned int clttag, void* cltdata, type_12 loadfunc);
int xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, unsigned int clttag, void* cltdata, type_10 infofunc, type_11 procfunc);
int xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int gidx);
int xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int gidx);
char* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int gidx);
char* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int gidx);
int xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int gidx);
int xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int gidx);
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int gidx);
unsigned char xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int index);
int xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int tidx, int fsize, int slotidx, int* bytesNeeded, int* availOnDisk, int* needFile);
int xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int tidx, int fsize, int slotidx, int* bytesNeeded, int* availOnDisk, int* needFile);
int xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int tidx);
int xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int tidx);
int xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int tidx, int* canRecover);
int xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int tidx, int* badEncode);
int xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int tidx);
int xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int* max);
int xSGDone(st_XSAVEGAME_DATA* xsgdata);
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode);
int xSGShutdown();
int xSGStartup();

// ASG_ISG_changed__FPv10en_CHGCODE
// Start address: 0x1fac30
void ASG_ISG_changed(en_CHGCODE what)
{
	XSGAutoData* asg;
}

// Discard__11XSGAutoDataFv
// Start address: 0x1fac90
void Discard(XSGAutoData* this)
{
}

// SetCache__11XSGAutoDataFiii
// Start address: 0x1face0
int SetCache(XSGAutoData* this, int targ, int game, int physicalSlot)
{
}

// IsValid__11XSGAutoDataFv
// Start address: 0x1fadb0
int IsValid(XSGAutoData* this)
{
}

// xSGAutoSave_GetCache__Fv
// Start address: 0x1fae10
XSGAutoData* xSGAutoSave_GetCache()
{
}

// xSG_ld_flipload__FP17st_XSAVEGAME_DATA
// Start address: 0x1fae20
int xSG_ld_flipload(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
	int rc;
	int i;
	st_XSAVEGAME_CLIENT* clt;
}

// xSG_ld_findcltblk__FP17st_XSAVEGAME_DATA
// Start address: 0x1faf20
int xSG_ld_findcltblk(st_XSAVEGAME_DATA* xsgdata)
{
	int ival;
	unsigned int tag;
	int maxamt;
	int actamt;
	st_XSAVEGAME_CLIENT* clt;
	int i;
	int found;
	int rc;
	st_XSAVEGAME_CLIENT* dfltclt;
}

// xSG_ld_readhead__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb1f0
int xSG_ld_readhead(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
	int ival;
}

// xSG_cb_ISGChange__FPv10en_CHGCODE
// Start address: 0x1fb2d0
void xSG_cb_ISGChange(en_CHGCODE what)
{
	XSGAutoData* asg;
}

// xSG_sv_commit__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb330
int xSG_sv_commit(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
	int rc;
	char* name;
	type_13 browselabel;
}

// xSG_smem_cltclose__FP17st_XSAVEGAME_DATAP19st_XSAVEGAME_CLIENT
// Start address: 0x1fb430
int xSG_smem_cltclose(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_CLIENT* clt)
{
	char* last_bufpos;
}

// xSG_smem_blkclose__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb500
int xSG_smem_blkclose(st_XSAVEGAME_DATA* xsgdata)
{
	char* last_bufpos;
}

// xSG_sv_flipproc__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb580
int xSG_sv_flipproc(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
	int rc;
	int i;
	st_XSAVEGAME_CLIENT* clt;
	char bfill;
	int needfill;
}

// xSG_sv_prepdest__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb750
int xSG_sv_prepdest(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
}

// xSG_sv_flipinfo__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb7f0
int xSG_sv_flipinfo(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
	int i;
	int rc;
	st_XSAVEGAME_CLIENT* clt;
	int cltamt;
	int cltmax;
}

// xSG_grab_leaders__FP17st_XSAVEGAME_DATA
// Start address: 0x1fb910
int xSG_grab_leaders(st_XSAVEGAME_DATA* xsgdata)
{
	int num_found;
	int i;
	type_6 readbuf;
	int rc;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPfi
// Start address: 0x1fbb20
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, float* buff, int n)
{
	int cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPUii
// Start address: 0x1fbb30
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, unsigned int* buff, int n)
{
	int cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPii
// Start address: 0x1fbb40
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, int* buff, int n)
{
	int cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPci
// Start address: 0x1fbb50
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff, int n)
{
	int cnt;
}

// xSGReadData__FP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTPcii
// Start address: 0x1fbb60
int xSGReadData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_READCONTEXT* rctxt, char* buff, int elesiz, int n)
{
	int cnt;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPfi
// Start address: 0x1fbc80
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, float* data, int n)
{
	int cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPUii
// Start address: 0x1fbc90
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, unsigned int* data, int n)
{
	int cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPii
// Start address: 0x1fbca0
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, int* data, int n)
{
	int cnt;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPci
// Start address: 0x1fbcb0
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data, int n)
{
	int cnt;
}

// xSGWriteStrLen__FPCc
// Start address: 0x1fbcc0
int xSGWriteStrLen(char* str)
{
	int len;
}

// xSGWriteData__FP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXTPcii
// Start address: 0x1fbcf0
int xSGWriteData(st_XSAVEGAME_DATA* xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt, char* data, int elesiz, int n)
{
	int cnt;
	st_XSAVEGAME_CLIENT* clt;
	int is_ok;
	void* mcprc;
}

// xSG_cb_leader_load__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x1fbe40
int xSG_cb_leader_load(st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_15 fundata;
	st_XSAVEGAME_LEADER discard;
}

// xSG_cb_leader_svproc__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x1fbef0
int xSG_cb_leader_svproc(void* cltdata, st_XSAVEGAME_DATA* original_xsgdata, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_XSAVEGAME_DATA* xsg;
	st_XSAVEGAME_LEADER leader;
	type_22 fundata;
}

// xSG_cb_leader_svinfo__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x1fbfe0
int xSG_cb_leader_svinfo(int* cur_space, int* max_fullgame)
{
}

// xSGAsyncStatus__FP17st_XSAVEGAME_DATAiP14en_XSG_WHYFAILPc
// Start address: 0x1fc000
en_XSGASYNC_STATUS xSGAsyncStatus(st_XSAVEGAME_DATA* xsgdata, int block, en_XSG_WHYFAIL* whyFail, char* errmsg)
{
	en_XSGASYNC_STATUS xstat;
	en_ASYNC_OPSTAT istat;
	en_ASYNC_OPERR whyerr;
	en_XSG_WHYFAIL con;
}

// xSGWrapup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc160
int xSGWrapup(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
	int rc;
}

// xSGProcess__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc340
int xSGProcess(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
	int rc;
}

// xSGSetup__FP17st_XSAVEGAME_DATAiPcili
// Start address: 0x1fc580
int xSGSetup(st_XSAVEGAME_DATA* xsgdata, int gidx, char* label, int progress, long playtime, int thumbIconIdx)
{
	int result;
	int rc;
}

// xSGSetup__FP17st_XSAVEGAME_DATA
// Start address: 0x1fc700
int xSGSetup(st_XSAVEGAME_DATA* xsgdata)
{
}

// xSGAddLoadClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii_i
// Start address: 0x1fc720
int xSGAddLoadClient(st_XSAVEGAME_DATA* xsgdata, unsigned int clttag, void* cltdata, type_12 loadfunc)
{
	int result;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGAddSaveClient__FP17st_XSAVEGAME_DATAUiPvPFPvP17st_XSAVEGAME_DATAPiPi_iPFPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT_i
// Start address: 0x1fc860
int xSGAddSaveClient(st_XSAVEGAME_DATA* xsgdata, unsigned int clttag, void* cltdata, type_10 infofunc, type_11 procfunc)
{
	int result;
	st_XSAVEGAME_CLIENT* clt;
}

// xSGGameProgress__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc950
int xSGGameProgress(st_XSAVEGAME_DATA* xsgdata, int gidx)
{
	int idx_thum;
}

// xSGGameThumbIndex__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fc9f0
int xSGGameThumbIndex(st_XSAVEGAME_DATA* xsgdata, int gidx)
{
	int idx_thum;
}

// xSGGameLabel__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fca90
char* xSGGameLabel(st_XSAVEGAME_DATA* xsgdata, int gidx)
{
	char* da_name;
	st_XSAVEGAME_LEADER* lead;
}

// xSGGameModDate__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcb30
char* xSGGameModDate(st_XSAVEGAME_DATA* xsgdata, int gidx)
{
	char* date;
	type_1 da_date;
}

// xSGGameSize__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcc30
int xSGGameSize(st_XSAVEGAME_DATA* xsgdata, int gidx)
{
	int size;
}

// xSGGameIsEmpty__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcd00
int xSGGameIsEmpty(st_XSAVEGAME_DATA* xsgdata, int gidx)
{
}

// xSGGameSet__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcde0
void xSGGameSet(st_XSAVEGAME_DATA* xsgdata, int gidx)
{
}

// xSGCheckMemoryCard__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fcdf0
unsigned char xSGCheckMemoryCard(st_XSAVEGAME_DATA* xsgdata, int index)
{
}

// xSGTgtHaveRoomStartup__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fce00
int xSGTgtHaveRoomStartup(st_XSAVEGAME_DATA* xsgdata, int tidx, int fsize, int slotidx, int* bytesNeeded, int* availOnDisk, int* needFile)
{
	int isroom;
	type_21 fname;
}

// xSGTgtHaveRoom__FP17st_XSAVEGAME_DATAiiiPiPiPi
// Start address: 0x1fcf00
int xSGTgtHaveRoom(st_XSAVEGAME_DATA* xsgdata, int tidx, int fsize, int slotidx, int* bytesNeeded, int* availOnDisk, int* needFile)
{
	int isroom;
	type_8 fname;
}

// xSGTgtHasGameDir__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd000
int xSGTgtHasGameDir(st_XSAVEGAME_DATA* xsgdata, int tidx)
{
	int rc;
}

// xSGTgtSelect__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd070
int xSGTgtSelect(st_XSAVEGAME_DATA* xsgdata, int tidx)
{
	int result;
}

// xSGTgtFormatTgt__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd100
int xSGTgtFormatTgt(st_XSAVEGAME_DATA* xsgdata, int tidx, int* canRecover)
{
	int result;
}

// xSGTgtIsFormat__FP17st_XSAVEGAME_DATAiPi
// Start address: 0x1fd110
int xSGTgtIsFormat(st_XSAVEGAME_DATA* xsgdata, int tidx, int* badEncode)
{
	int result;
	int rc;
}

// xSGTgtPhysSlotIdx__FP17st_XSAVEGAME_DATAi
// Start address: 0x1fd1a0
int xSGTgtPhysSlotIdx(st_XSAVEGAME_DATA* xsgdata, int tidx)
{
}

// xSGTgtCount__FP17st_XSAVEGAME_DATAPi
// Start address: 0x1fd1b0
int xSGTgtCount(st_XSAVEGAME_DATA* xsgdata, int* max)
{
	int cnt;
}

// xSGDone__FP17st_XSAVEGAME_DATA
// Start address: 0x1fd1c0
int xSGDone(st_XSAVEGAME_DATA* xsgdata)
{
	int result;
}

// xSGInit__F16en_SAVEGAME_MODE
// Start address: 0x1fd2e0
st_XSAVEGAME_DATA* xSGInit(en_SAVEGAME_MODE mode)
{
	st_XSAVEGAME_DATA* xsgdata;
}

// xSGShutdown__Fv
// Start address: 0x1fd3e0
int xSGShutdown()
{
}

// xSGStartup__Fv
// Start address: 0x1fd420
int xSGStartup()
{
}

