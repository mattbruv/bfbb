typedef struct xSerial;
typedef struct st_SERIAL_CLIENTINFO;
typedef struct st_XSAVEGAME_DATA;
typedef struct st_XSAVEGAME_READCONTEXT;
typedef enum en_SAVEGAME_MODE;
typedef struct xVec3;
typedef struct st_XSAVEGAME_WRITECONTEXT;
typedef struct st_SERIAL_PERCID_SIZE;
typedef struct st_XSERIAL_DATA_PRIV;
typedef struct st_XORDEREDARRAY;

typedef int(*type_0)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef int(*type_1)(unsigned int, xSerial*);
typedef int(*type_2)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int(*type_3)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef int(*type_5)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef int(*type_6)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int(*type_7)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef int(*type_10)(void*, st_XSAVEGAME_DATA*, int*, int*);
typedef int(*type_11)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_WRITECONTEXT*);
typedef int(*type_12)(void*, st_XSAVEGAME_DATA*, st_XSAVEGAME_READCONTEXT*, unsigned int, int);
typedef int(*type_14)(void*, void*);
typedef int(*type_15)(void*, void*);

typedef char type_4[9];
typedef int type_8[32];
typedef char type_9[9];
typedef int type_13[32];

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

struct st_SERIAL_CLIENTINFO
{
	unsigned int idtag;
	int* membuf;
	int trueoff;
	int actsize;
};

struct st_XSAVEGAME_DATA
{
};

struct st_XSAVEGAME_READCONTEXT
{
};

enum en_SAVEGAME_MODE
{
	XSG_MODE_LOAD = 0xa,
	XSG_MODE_SAVE
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct st_XSAVEGAME_WRITECONTEXT
{
};

struct st_SERIAL_PERCID_SIZE
{
	unsigned int idtag;
	int needsize;
};

struct st_XSERIAL_DATA_PRIV
{
	int flg_info;
	int* bitbuf;
	int buf_bytcnt;
	st_SERIAL_CLIENTINFO* cltbuf;
	st_SERIAL_CLIENTINFO* cltnext;
	st_XORDEREDARRAY cltlist;
};

struct st_XORDEREDARRAY
{
	void** list;
	int cnt;
	int max;
	int warnlvl;
};

int g_serinit;
st_XSERIAL_DATA_PRIV g_xserdata;
type_8 g_tbl_onbit;
type_13 g_tbl_clear;
type_12 xSER_xsgclt_ldproc_fill;
type_7 xSER_xsgclt_ldproc_clt;
type_3 xSER_xsgclt_ldproc_ver;
type_11 xSER_xsgclt_svproc_fill;
type_10 xSER_xsgclt_svinfo_fill;
type_6 xSER_xsgclt_svproc_clt;
type_5 xSER_xsgclt_svinfo_clt;
type_2 xSER_xsgclt_svproc_ver;
type_0 xSER_xsgclt_svinfo_ver;
type_14 xSER_ord_compare;
type_15 xSER_ord_test;
unsigned int gActiveHeap;

int xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
int xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int xSER_xsgclt_svinfo_fill(int* cur_space, int* max_fullgame);
int xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, unsigned int idtag);
int xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int xSER_xsgclt_svinfo_clt(void* cltdata, int* cur_space, int* max_fullgame);
int xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt);
int xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt);
int xSER_xsgclt_svinfo_ver(int* cur_space, int* max_fullgame);
int xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode);
st_SERIAL_CLIENTINFO* XSER_get_client(unsigned int idtag);
int xSER_ord_test(void* key, void* elt);
int xSER_ord_compare(void* e1, void* e2);
void xSER_init_buffers(int count, st_SERIAL_PERCID_SIZE* sizeinfo);
void xSerialWipeMainBuffer();
int rdbit(xSerial* this);
void wrbit(xSerial* this, int is_on);
int Read(xSerial* this, float* buf);
int Read(xSerial* this, unsigned int* buf);
int Read(xSerial* this, int* buf);
int Read(xSerial* this, short* buf);
int Read(xSerial* this, unsigned char* buf);
int Read_b7(xSerial* this, unsigned int* bits);
int Read_b1(xSerial* this, int* bits);
int Read(xSerial* this, char* buf, int elesize, int n);
int Write(xSerial* this, float data);
int Write(xSerial* this, unsigned int data);
int Write(xSerial* this, int data);
int Write(xSerial* this, short data);
int Write(xSerial* this, unsigned char data);
int Write_b7(xSerial* this, unsigned int bits);
int Write_b1(xSerial* this, int bits);
int Write(xSerial* this, char* data, int elesize, int n);
void setClient(xSerial* this, unsigned int idtag);
void* __dt(xSerial* this);
void* __ct(xSerial* this);
void xSerialTraverse(type_1 func);
int xSerialShutdown();
int xSerialStartup(int count, st_SERIAL_PERCID_SIZE* sizeinfo);

// xSER_xsgclt_ldproc_fill__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x202f40
int xSER_xsgclt_ldproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	type_4 filbuf;
}

// xSER_xsgclt_svproc_fill__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x202fb0
int xSER_xsgclt_svproc_fill(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	type_9 filbuf;
}

// xSER_xsgclt_svinfo_fill__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203000
int xSER_xsgclt_svinfo_fill(int* cur_space, int* max_fullgame)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int i;
	int tally;
	int size;
}

// xSER_xsgclt_ldproc_clt__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x203110
int xSER_xsgclt_ldproc_clt(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt, unsigned int idtag)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_svproc_clt__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203180
int xSER_xsgclt_svproc_clt(void* cltdata, st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_svinfo_clt__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x2031d0
int xSER_xsgclt_svinfo_clt(void* cltdata, int* cur_space, int* max_fullgame)
{
	st_SERIAL_CLIENTINFO* clt;
}

// xSER_xsgclt_ldproc_ver__FPvP17st_XSAVEGAME_DATAP24st_XSAVEGAME_READCONTEXTUii
// Start address: 0x2031f0
int xSER_xsgclt_ldproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_READCONTEXT* rctxt)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int ver;
}

// xSER_xsgclt_svproc_ver__FPvP17st_XSAVEGAME_DATAP25st_XSAVEGAME_WRITECONTEXT
// Start address: 0x203250
int xSER_xsgclt_svproc_ver(st_XSAVEGAME_DATA* xsg, st_XSAVEGAME_WRITECONTEXT* wctxt)
{
	int ver;
}

// xSER_xsgclt_svinfo_ver__FPvP17st_XSAVEGAME_DATAPiPi
// Start address: 0x203280
int xSER_xsgclt_svinfo_ver(int* cur_space, int* max_fullgame)
{
}

// xSerial_svgame_register__FP17st_XSAVEGAME_DATA16en_SAVEGAME_MODE
// Start address: 0x2032a0
int xSerial_svgame_register(st_XSAVEGAME_DATA* sgctxt, en_SAVEGAME_MODE mode)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int i;
}

// XSER_get_client__FUi
// Start address: 0x203400
st_SERIAL_CLIENTINFO* XSER_get_client(unsigned int idtag)
{
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	int idx;
}

// xSER_ord_test__FPCvPv
// Start address: 0x2034a0
int xSER_ord_test(void* key, void* elt)
{
	int rc;
	unsigned int idtag;
}

// xSER_ord_compare__FPvPv
// Start address: 0x2034e0
int xSER_ord_compare(void* e1, void* e2)
{
	int rc;
}

// xSER_init_buffers__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x203530
void xSER_init_buffers(int count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
	st_XSERIAL_DATA_PRIV* xsd;
	int i;
	int tally;
	int sicnt;
	st_SERIAL_PERCID_SIZE* sitmp;
	st_SERIAL_CLIENTINFO* tmp_clt;
}

// xSerialWipeMainBuffer__Fv
// Start address: 0x203740
void xSerialWipeMainBuffer()
{
}

// rdbit__7xSerialFv
// Start address: 0x203760
int rdbit(xSerial* this)
{
	st_SERIAL_CLIENTINFO* clt;
}

// wrbit__7xSerialFi
// Start address: 0x203810
void wrbit(xSerial* this, int is_on)
{
	st_SERIAL_CLIENTINFO* clt;
}

// Read__7xSerialFPf
// Start address: 0x2038f0
int Read(xSerial* this, float* buf)
{
}

// Read__7xSerialFPUi
// Start address: 0x203900
int Read(xSerial* this, unsigned int* buf)
{
}

// Read__7xSerialFPi
// Start address: 0x203910
int Read(xSerial* this, int* buf)
{
}

// Read__7xSerialFPs
// Start address: 0x203920
int Read(xSerial* this, short* buf)
{
}

// Read__7xSerialFPUc
// Start address: 0x203930
int Read(xSerial* this, unsigned char* buf)
{
}

// Read_b7__7xSerialFPUi
// Start address: 0x203940
int Read_b7(xSerial* this, unsigned int* bits)
{
}

// Read_b1__7xSerialFPi
// Start address: 0x203950
int Read_b1(xSerial* this, int* bits)
{
}

// Read__7xSerialFPcii
// Start address: 0x203960
int Read(xSerial* this, char* buf, int elesize, int n)
{
	int nbit;
	char* cptr;
	int* iptr;
	int bitval;
	int bidx;
	int i;
}

// Write__7xSerialFf
// Start address: 0x203b00
int Write(xSerial* this, float data)
{
}

// Write__7xSerialFUi
// Start address: 0x203b30
int Write(xSerial* this, unsigned int data)
{
}

// Write__7xSerialFi
// Start address: 0x203b60
int Write(xSerial* this, int data)
{
}

// Write__7xSerialFs
// Start address: 0x203b90
int Write(xSerial* this, short data)
{
}

// Write__7xSerialFUc
// Start address: 0x203bc0
int Write(xSerial* this, unsigned char data)
{
}

// Write_b7__7xSerialFUi
// Start address: 0x203bf0
int Write_b7(xSerial* this, unsigned int bits)
{
}

// Write_b1__7xSerialFi
// Start address: 0x203c20
int Write_b1(xSerial* this, int bits)
{
}

// Write__7xSerialFPcii
// Start address: 0x203c50
int Write(xSerial* this, char* data, int elesize, int n)
{
	int nbit;
	char* cptr;
	int* iptr;
	int bidx;
	int i;
}

// setClient__7xSerialFUi
// Start address: 0x203d90
void setClient(xSerial* this, unsigned int idtag)
{
}

// __dt__7xSerialFv
// Start address: 0x203de0
void* __dt(xSerial* this)
{
}

// __ct__7xSerialFv
// Start address: 0x203e30
void* __ct(xSerial* this)
{
}

// xSerialTraverse__FPFUiP7xSerial_i
// Start address: 0x203e40
void xSerialTraverse(type_1 func)
{
	int i;
	st_XSERIAL_DATA_PRIV* xsd;
	st_SERIAL_CLIENTINFO* clt;
	xSerial xser;
	int rc;
}

// xSerialShutdown__Fv
// Start address: 0x203f50
int xSerialShutdown()
{
}

// xSerialStartup__FiP21st_SERIAL_PERCID_SIZE
// Start address: 0x203f70
int xSerialStartup(int count, st_SERIAL_PERCID_SIZE* sizeinfo)
{
}

