typedef struct tag_xFile;
typedef struct st_FILELOADINFO;
typedef struct st_BINIO_XTRADATA;
typedef enum en_FIOERRCODES;
typedef enum en_BIO_ASYNC_ERRCODES;
typedef struct tag_iFile;
typedef enum XFILE_READSECTOR_STATUS;

typedef void(*type_0)(st_FILELOADINFO*);
typedef int(*type_1)(st_FILELOADINFO*, int, char*, int, int);
typedef int(*type_2)(st_FILELOADINFO*, double*, int);
typedef int(*type_3)(st_FILELOADINFO*, int, char*, int, int);
typedef void(*type_4)(st_FILELOADINFO*);
typedef int(*type_5)(st_FILELOADINFO*, int, char*, int, int);
typedef en_BIO_ASYNC_ERRCODES(*type_6)(st_FILELOADINFO*);
typedef int(*type_7)(st_FILELOADINFO*, int, char*, int, int);
typedef int(*type_8)(st_FILELOADINFO*, int);
typedef en_BIO_ASYNC_ERRCODES(*type_10)(st_FILELOADINFO*);
typedef int(*type_11)(st_FILELOADINFO*, int);
typedef void(*type_13)(st_FILELOADINFO*);
typedef void(*type_14)(st_FILELOADINFO*, char*, int);
typedef int(*type_15)(st_FILELOADINFO*, char*, int);
typedef void(*type_16)(st_FILELOADINFO*);
typedef int(*type_17)(st_FILELOADINFO*, short*, int);
typedef int(*type_19)(st_FILELOADINFO*, int*, int);
typedef int(*type_20)(st_FILELOADINFO*, char*, int);
typedef int(*type_21)(st_FILELOADINFO*, float*, int);
typedef int(*type_22)(st_FILELOADINFO*, short*, int);
typedef int(*type_23)(st_FILELOADINFO*, double*, int);
typedef int(*type_25)(st_FILELOADINFO*, short*, int);
typedef int(*type_26)(st_FILELOADINFO*, int*, int);
typedef int(*type_27)(st_FILELOADINFO*, int*, int);
typedef int(*type_28)(st_FILELOADINFO*, float*, int);
typedef int(*type_29)(st_FILELOADINFO*, float*, int);
typedef int(*type_31)(st_FILELOADINFO*, double*, int);
typedef int(*type_32)(st_FILELOADINFO*, double*, int);
typedef int(*type_33)(st_FILELOADINFO*, short*, int);
typedef int(*type_34)(st_FILELOADINFO*, int);
typedef int(*type_36)(st_FILELOADINFO*, int);
typedef int(*type_37)(st_FILELOADINFO*, int*, int);
typedef void(*type_38)(tag_xFile*);
typedef void(*type_39)(st_FILELOADINFO*, char*, int);
typedef int(*type_40)(st_FILELOADINFO*, float*, int);

typedef st_FILELOADINFO type_9[8];
typedef st_BINIO_XTRADATA type_12[8];
typedef char type_18[128];
typedef char type_24[32];
typedef unsigned int type_30[3];
typedef tag_xFile type_35[8];

struct tag_xFile
{
	type_24 relname;
	tag_iFile ps;
	void* user_data;
};

struct st_FILELOADINFO
{
	type_13 destroy;
	type_15 readBytes;
	type_17 readMShorts;
	type_19 readMLongs;
	type_21 readMFloats;
	type_23 readMDoubles;
	type_25 readIShorts;
	type_27 readILongs;
	type_29 readIFloats;
	type_32 readIDoubles;
	type_34 skipBytes;
	type_36 seekSpot;
	type_39 setDoubleBuf;
	type_0 discardDblBuf;
	type_1 asyncIRead;
	type_3 asyncMRead;
	type_6 asyncReadStatus;
	unsigned int lockid;
	en_FIOERRCODES error;
	unsigned int basesector;
	void* privdata;
	void* xtradata;
	void* asyndata;
	int filesize;
	int remain;
	int position;
};

struct st_BINIO_XTRADATA
{
	char* dbl_buf;
	int dblbuf_size;
	int dbl_beg;
	int dbl_end;
	int dbl_amt;
	unsigned int fpos;
	char* asyn_data;
	int asyn_amt;
	int asyn_elesize;
	int asyn_ismot;
	en_BIO_ASYNC_ERRCODES asyn_status;
	type_30 pad;
	int gcaskey;
};

enum en_FIOERRCODES
{
	FIOERR_NONE,
	FIOERR_READFAIL,
	FIOERR_WRITEFAIL,
	FIOERR_SEEKFAIL,
	FIOERR_USERABORT
};

enum en_BIO_ASYNC_ERRCODES
{
	BINIO_ASYNC_FAIL = 0xffffffff,
	BINIO_ASYNC_NOOP,
	BINIO_ASYNC_INPROG,
	BINIO_ASYNC_DONE,
	BINIO_ASYNC_FORCEENUMSIZEINT = 0x7fffffff
};

struct tag_iFile
{
	unsigned int flags;
	type_18 path;
	int fd;
	int offset;
	int length;
};

enum XFILE_READSECTOR_STATUS
{
	XFILE_RDSTAT_NOOP,
	XFILE_RDSTAT_INPROG,
	XFILE_RDSTAT_DONE,
	XFILE_RDSTAT_FAIL,
	XFILE_RDSTAT_QUEUED,
	XFILE_RDSTAT_EXPIRED
};

unsigned int g_loadlock;
type_9 g_loadinst;
type_35 g_xfload;
type_12 g_xtraload;
st_BINIO_XTRADATA* g_async_context;
type_38 BFD_cb_GCP2_readasync;
type_16 DiscardBuffer;
type_14 SetBuffer;
type_11 ReadSeek;
type_8 SkipBytes;
type_10 AsyncReadStatus;
type_5 AsyncMRead;
type_7 AsyncIRead;
type_2 ReadIDoubles;
type_40 ReadIFloats;
type_37 ReadILongs;
type_33 ReadIShorts;
type_31 ReadMDoubles;
type_28 ReadMFloats;
type_26 ReadMLongs;
type_22 ReadMShorts;
type_20 ReadBytes;
type_4 LoadDestroy;

en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli);
int BFD_AsyncRead(st_FILELOADINFO* fli, int pos, void* data, int size, int n);
void BFD_cb_GCP2_readasync();
int BFD_read(void* data, int elesize, int elecnt, tag_xFile* bffp, void* xtradata);
tag_xFile* BFD_open(char* filename, char* mode, unsigned int lockid, void* xtradata);
void Swap8(char* d, int n);
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli);
int AsyncIRead(st_FILELOADINFO* fli, int offset, char* data, int size, int n);
int AsyncMRead(st_FILELOADINFO* fli, int offset, char* data, int size, int n);
int ReadIDoubles(st_FILELOADINFO* fli, double* data, int count);
int ReadIFloats(st_FILELOADINFO* fli, float* data, int count);
int ReadILongs(st_FILELOADINFO* fli, int* data, int count);
int ReadIShorts(st_FILELOADINFO* fli, short* data, int count);
int ReadMDoubles(st_FILELOADINFO* fli, double* data, int count);
int ReadMFloats(st_FILELOADINFO* fli, float* data, int count);
int ReadMLongs(st_FILELOADINFO* fli, int* data, int count);
int ReadMShorts(st_FILELOADINFO* fli, short* data, int count);
int ReadBytes(st_FILELOADINFO* fli, char* data, int count);
int ReadRaw(st_FILELOADINFO* fli, void* data, int size, int count);
void DiscardBuffer(st_FILELOADINFO* fli);
void SetBuffer(st_FILELOADINFO* fli, char* dblbuffer, int bufsize);
int ReadSeek(st_FILELOADINFO* fli, int pos);
int SkipBytes(st_FILELOADINFO* fli, int fwd);
void LoadDestroy(st_FILELOADINFO* fli);
st_FILELOADINFO* xBinioLoadCreate(char* filename);

// BFD_AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x1bf7c0
en_BIO_ASYNC_ERRCODES BFD_AsyncReadStatus(st_FILELOADINFO* fli)
{
	en_BIO_ASYNC_ERRCODES status;
	st_BINIO_XTRADATA* xtra;
	XFILE_READSECTOR_STATUS xrdstat;
	int amtsofar;
}

// BFD_AsyncRead__FP15st_FILELOADINFOiPviii
// Start address: 0x1bf890
int BFD_AsyncRead(st_FILELOADINFO* fli, int pos, void* data, int size, int n)
{
	tag_xFile* file;
	st_BINIO_XTRADATA* xtra;
	int result;
	int rc;
}

// BFD_cb_GCP2_readasync__FP9tag_xFile
// Start address: 0x1bf990
void BFD_cb_GCP2_readasync()
{
}

// BFD_read__FPviiP9tag_xFilePv
// Start address: 0x1bf9a0
int BFD_read(void* data, int elesize, int elecnt, tag_xFile* bffp, void* xtradata)
{
	st_BINIO_XTRADATA* xtra;
	char* dest;
	int readbeg;
	int refill;
	int remain;
	int actual;
	unsigned int holdpos;
	unsigned int safety;
	unsigned int numBytes;
}

// BFD_open__FPCcPCcUiiPv
// Start address: 0x1bfbf0
tag_xFile* BFD_open(char* filename, char* mode, unsigned int lockid, void* xtradata)
{
	tag_xFile* bffp;
	unsigned int orc;
	st_BINIO_XTRADATA* xtra;
	int xfflg;
}

// Swap8__FPci
// Start address: 0x1bfd00
void Swap8(char* d, int n)
{
	char t;
}

// AsyncReadStatus__FP15st_FILELOADINFO
// Start address: 0x1bfd70
en_BIO_ASYNC_ERRCODES AsyncReadStatus(st_FILELOADINFO* fli)
{
}

// AsyncIRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1bfd80
int AsyncIRead(st_FILELOADINFO* fli, int offset, char* data, int size, int n)
{
}

// AsyncMRead__FP15st_FILELOADINFOiPcii
// Start address: 0x1bfd90
int AsyncMRead(st_FILELOADINFO* fli, int offset, char* data, int size, int n)
{
}

// ReadIDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x1bfda0
int ReadIDoubles(st_FILELOADINFO* fli, double* data, int count)
{
	int act;
}

// ReadIFloats__FP15st_FILELOADINFOPfi
// Start address: 0x1bfdb0
int ReadIFloats(st_FILELOADINFO* fli, float* data, int count)
{
	int act;
}

// ReadILongs__FP15st_FILELOADINFOPii
// Start address: 0x1bfdc0
int ReadILongs(st_FILELOADINFO* fli, int* data, int count)
{
	int act;
}

// ReadIShorts__FP15st_FILELOADINFOPsi
// Start address: 0x1bfdd0
int ReadIShorts(st_FILELOADINFO* fli, short* data, int count)
{
	int act;
}

// ReadMDoubles__FP15st_FILELOADINFOPdi
// Start address: 0x1bfde0
int ReadMDoubles(st_FILELOADINFO* fli, double* data, int count)
{
	int act;
}

// ReadMFloats__FP15st_FILELOADINFOPfi
// Start address: 0x1bfe20
int ReadMFloats(st_FILELOADINFO* fli, float* data, int count)
{
	int act;
}

// ReadMLongs__FP15st_FILELOADINFOPii
// Start address: 0x1bfe90
int ReadMLongs(st_FILELOADINFO* fli, int* data, int count)
{
	int act;
}

// ReadMShorts__FP15st_FILELOADINFOPsi
// Start address: 0x1bff00
int ReadMShorts(st_FILELOADINFO* fli, short* data, int count)
{
	int act;
}

// ReadBytes__FP15st_FILELOADINFOPci
// Start address: 0x1bff60
int ReadBytes(st_FILELOADINFO* fli, char* data, int count)
{
	int act;
}

// ReadRaw__FP15st_FILELOADINFOPvii
// Start address: 0x1bff70
int ReadRaw(st_FILELOADINFO* fli, void* data, int size, int count)
{
	tag_xFile* file;
	int amt;
	int n;
}

// DiscardBuffer__FP15st_FILELOADINFO
// Start address: 0x1c0040
void DiscardBuffer(st_FILELOADINFO* fli)
{
}

// SetBuffer__FP15st_FILELOADINFOPci
// Start address: 0x1c0070
void SetBuffer(st_FILELOADINFO* fli, char* dblbuffer, int bufsize)
{
	st_BINIO_XTRADATA* xtra;
}

// ReadSeek__FP15st_FILELOADINFOi
// Start address: 0x1c00a0
int ReadSeek(st_FILELOADINFO* fli, int pos)
{
	tag_xFile* file;
}

// SkipBytes__FP15st_FILELOADINFOi
// Start address: 0x1c0150
int SkipBytes(st_FILELOADINFO* fli, int fwd)
{
	tag_xFile* file;
}

// LoadDestroy__FP15st_FILELOADINFO
// Start address: 0x1c0240
void LoadDestroy(st_FILELOADINFO* fli)
{
	tag_xFile* fp;
	unsigned int lockid;
}

// xBinioLoadCreate__FPCc
// Start address: 0x1c02c0
st_FILELOADINFO* xBinioLoadCreate(char* filename)
{
	st_FILELOADINFO* fli;
	tag_xFile* tmp_fp;
	int i;
	int uselock;
}

