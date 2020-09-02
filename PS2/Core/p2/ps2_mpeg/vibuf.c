typedef struct sceIpuDmaEnv;
typedef struct ViBuf;
typedef struct TimeStamp;
typedef struct SemaParam;
typedef union QWORD;


typedef unsigned long type_0[2];
typedef unsigned int type_1[4];
typedef unsigned short type_2[8];
typedef unsigned char type_3[16];

struct sceIpuDmaEnv
{
	unsigned int d4madr;
	unsigned int d4tadr;
	unsigned int d4qwc;
	unsigned int d4chcr;
	unsigned int d3madr;
	unsigned int d3qwc;
	unsigned int d3chcr;
	unsigned int ipubp;
	unsigned int ipuctrl;
};

struct ViBuf
{
	<unknown type (0xa510)>* data;
	<unknown type (0xa510)>* tag;
	int n;
	int dmaStart;
	int dmaN;
	int readBytes;
	int buffSize;
	sceIpuDmaEnv env;
	int sema;
	int isActive;
	long totalBytes;
	TimeStamp* ts;
	int n_ts;
	int count_ts;
	int wt_ts;
};

struct TimeStamp
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct SemaParam
{
	int currentCount;
	int maxCount;
	int initCount;
	int numWaitThreads;
	unsigned int attr;
	unsigned int option;
};

union QWORD
{
	<unknown type (0xa510)> q;
	type_0 l;
	type_1 i;
	type_2 s;
	type_3 c;
};


int viBufGetTs(ViBuf* f, TimeStamp* ts);
int viBufPutTs(ViBuf* f, TimeStamp* ts);
int viBufModifyPts(ViBuf* f, TimeStamp* new_ts);
void viBufFlush(ViBuf* f);
int viBufCount(ViBuf* f);
int viBufDelete(ViBuf* f);
int viBufRestartDMA(ViBuf* f);
int viBufStopDMA(ViBuf* f);
int viBufAddDMA(ViBuf* f);
void viBufEndPut(ViBuf* f, int size);
void viBufBeginPut(ViBuf* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
int viBufReset(ViBuf* f);
int viBufCreate(ViBuf* f, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int size, TimeStamp* ts, int n_ts);

// viBufGetTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdb70
int viBufGetTs(ViBuf* f, TimeStamp* ts)
{
	unsigned int d4madr;
	unsigned int ipubp;
	int bp;
	int datasize;
	int isEnd;
	int tscount;
	int i;
	int rd;
}

// viBufPutTs__FP5ViBufP9TimeStamp
// Start address: 0x1bdd30
int viBufPutTs(ViBuf* f, TimeStamp* ts)
{
	int ret;
}

// viBufModifyPts__FP5ViBufP9TimeStamp
// Start address: 0x1bde70
int viBufModifyPts(ViBuf* f, TimeStamp* new_ts)
{
	TimeStamp* ts;
	int rd;
	int datasize;
	int loop;
}

// viBufFlush__FP5ViBuf
// Start address: 0x1bdfc0
void viBufFlush(ViBuf* f)
{
}

// viBufCount__FP5ViBuf
// Start address: 0x1be010
int viBufCount(ViBuf* f)
{
	int ret;
}

// viBufDelete__FP5ViBuf
// Start address: 0x1be060
int viBufDelete(ViBuf* f)
{
}

// viBufRestartDMA__FP5ViBuf
// Start address: 0x1be0f0
int viBufRestartDMA(ViBuf* f)
{
	int bp;
	unsigned int d4madr_next;
	unsigned int d4qwc_next;
	unsigned int d4tadr_next;
	unsigned int d4chcr_next;
}

// viBufStopDMA__FP5ViBuf
// Start address: 0x1be490
int viBufStopDMA(ViBuf* f)
{
}

// viBufAddDMA__FP5ViBuf
// Start address: 0x1be5e0
int viBufAddDMA(ViBuf* f)
{
	int i;
	int index;
	int last;
	unsigned int d4chcr;
	int isNewData;
	int consume;
	int read_start;
	int read_n;
}

// viBufEndPut__FP5ViBufi
// Start address: 0x1be8e0
void viBufEndPut(ViBuf* f, int size)
{
}

// viBufBeginPut__FP5ViBufPPUcPiPPUcPi
// Start address: 0x1be940
void viBufBeginPut(ViBuf* f, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	int es;
	int en;
}

// viBufReset__FP5ViBuf
// Start address: 0x1bea40
int viBufReset(ViBuf* f)
{
	int i;
}

// viBufCreate__FP5ViBufP1P1iP9TimeStampi
// Start address: 0x1bebe0
int viBufCreate(ViBuf* f, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int size, TimeStamp* ts, int n_ts)
{
	SemaParam param;
}

