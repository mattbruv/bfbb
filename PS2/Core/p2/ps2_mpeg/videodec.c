typedef struct sceMpeg;
typedef struct VideoDec;
typedef union sceMpegCbData;
typedef struct TimeStamp;
typedef struct VoData;
typedef struct sceMpegCbDataTimeStamp;
typedef struct VoTag;
typedef struct sceIpuDmaEnv;
typedef enum sceMpegCbType;
typedef struct VoBuf;
typedef struct sceMpegCbDataError;
typedef struct sceMpegCbDataStr;
typedef struct ViBuf;

typedef int(*type_0)(sceMpeg*, sceMpegCbData*, void*);
typedef int(*type_2)(sceMpeg*, sceMpegCbDataTimeStamp*, void*);
typedef int(*type_6)(sceMpeg*, sceMpegCbData*, void*);
typedef int(*type_8)(sceMpeg*, sceMpegCbDataError*, void*);
typedef int(*type_9)(sceMpeg*, sceMpegCbData*, void*);
typedef int(*type_10)(sceMpeg*, sceMpegCbData*, void*);

typedef unsigned char type_1[1228800];
typedef int type_3[15];
typedef unsigned int type_4[29248];
typedef type_4 type_5[2];
typedef unsigned char type_7[4];

struct sceMpeg
{
	int width;
	int height;
	int frameCount;
	long pts;
	long dts;
	unsigned long flags;
	long pts2nd;
	long dts2nd;
	unsigned long flags2nd;
	void* sys;
};

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
};

union sceMpegCbData
{
	sceMpegCbType type;
	sceMpegCbDataError error;
	sceMpegCbDataTimeStamp ts;
	sceMpegCbDataStr str;
};

struct TimeStamp
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct VoData
{
	type_1 v;
};

struct sceMpegCbDataTimeStamp
{
	sceMpegCbType type;
	long pts;
	long dts;
};

struct VoTag
{
	int status;
	type_3 dummy;
	type_5 v;
};

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

enum sceMpegCbType
{
	sceMpegCbError,
	sceMpegCbNodata,
	sceMpegCbStopDMA,
	sceMpegCbRestartDMA,
	sceMpegCbBackground,
	sceMpegCbTimeStamp,
	sceMpegCbStr
};

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int write;
	int count;
	int size;
};

struct sceMpegCbDataError
{
	sceMpegCbType type;
	char* errMessage;
};

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
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

VideoDec videoDec;
VoBuf voBuf;
type_2 mpegTS;
type_0 mpegRestartDMA;
type_10 mpegStopDMA;
type_9 mpegNodata;
type_8 mpegError;

int mpegTS(sceMpegCbDataTimeStamp* cbts);
int mpegRestartDMA();
int mpegStopDMA();
int mpegNodata();
int mpegError(sceMpegCbDataError* cberror);
int decBs0(VideoDec* vd);
void videoDecMain(VideoDec* vd);
int videoDecIsFlushed(VideoDec* vd);
int videoDecFlush(VideoDec* vd);
int videoDecPutTs(VideoDec* vd, long pts_val, long dts_val, unsigned char* start, int len);
unsigned int videoDecGetState(VideoDec* vd);
void videoDecAbort(VideoDec* vd);
int videoDecDelete(VideoDec* vd);
void videoDecEndPut(VideoDec* vd, int size);
void videoDecBeginPut(VideoDec* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
int videoDecSetStream(VideoDec* vd, int strType, int ch, type_6 cb, void* data);
int videoDecCreate(VideoDec* vd, unsigned char* mpegWork, int mpegWorkSize, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int tagSize, TimeStamp* pts, int n_pts);

// mpegTS__FP7sceMpegP22sceMpegCbDataTimeStampPv
// Start address: 0x1bec60
int mpegTS(sceMpegCbDataTimeStamp* cbts)
{
	TimeStamp ts;
}

// mpegRestartDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1becb0
int mpegRestartDMA()
{
}

// mpegStopDMA__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bece0
int mpegStopDMA()
{
}

// mpegNodata__FP7sceMpegP13sceMpegCbDataPv
// Start address: 0x1bed10
int mpegNodata()
{
}

// mpegError__FP7sceMpegP18sceMpegCbDataErrorPv
// Start address: 0x1bed40
int mpegError(sceMpegCbDataError* cberror)
{
}

// decBs0__FP8VideoDec
// Start address: 0x1bed70
int decBs0(VideoDec* vd)
{
	VoData* voData;
	int ret;
	int status;
	int i;
	int image_w;
	int image_h;
}

// videoDecMain__FP8VideoDec
// Start address: 0x1bef40
void videoDecMain(VideoDec* vd)
{
}

// videoDecIsFlushed__FP8VideoDec
// Start address: 0x1befa0
int videoDecIsFlushed(VideoDec* vd)
{
}

// videoDecFlush__FP8VideoDec
// Start address: 0x1bf000
int videoDecFlush(VideoDec* vd)
{
	unsigned char* pd0;
	unsigned char* pd1;
	unsigned char* pd0Unc;
	unsigned char* pd1Unc;
	type_7 seq_end_code;
	int d0;
	int d1;
}

// videoDecPutTs__FP8VideoDecllPUci
// Start address: 0x1bf1b0
int videoDecPutTs(VideoDec* vd, long pts_val, long dts_val, unsigned char* start, int len)
{
	TimeStamp ts;
}

// videoDecGetState__FP8VideoDec
// Start address: 0x1bf1f0
unsigned int videoDecGetState(VideoDec* vd)
{
}

// videoDecAbort__FP8VideoDec
// Start address: 0x1bf200
void videoDecAbort(VideoDec* vd)
{
}

// videoDecDelete__FP8VideoDec
// Start address: 0x1bf210
int videoDecDelete(VideoDec* vd)
{
}

// videoDecEndPut__FP8VideoDeci
// Start address: 0x1bf250
void videoDecEndPut(VideoDec* vd, int size)
{
}

// videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi
// Start address: 0x1bf260
void videoDecBeginPut(VideoDec* vd, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
}

// videoDecSetStream__FP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv
// Start address: 0x1bf270
int videoDecSetStream(VideoDec* vd, int strType, int ch, type_6 cb, void* data)
{
}

// videoDecCreate__FP8VideoDecPUciP1P1iP9TimeStampi
// Start address: 0x1bf290
int videoDecCreate(VideoDec* vd, unsigned char* mpegWork, int mpegWorkSize, <unknown type (0xa510)>* data, <unknown type (0xa510)>* tag, int tagSize, TimeStamp* pts, int n_pts)
{
}

