typedef struct sceMpegCbDataStr;
typedef struct sceMpeg;
typedef struct sceIpuDmaEnv;
typedef struct ReadBuf;
typedef enum sceMpegCbType;
typedef struct TimeStamp;
typedef struct SpuStreamHeader;
typedef struct ViBuf;
typedef struct VideoDec;
typedef struct SpuStreamBody;
typedef struct AudioDec;


typedef unsigned char type_0[327680];
typedef char type_1[4];
typedef char type_2[4];

struct sceMpegCbDataStr
{
	sceMpegCbType type;
	unsigned char* header;
	unsigned char* data;
	unsigned int len;
	long pts;
	long dts;
};

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

struct ReadBuf
{
	type_0 data;
	int put;
	int count;
	int size;
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

struct TimeStamp
{
	long pts;
	long dts;
	int pos;
	int len;
};

struct SpuStreamHeader
{
	type_1 id;
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
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

struct VideoDec
{
	sceMpeg mpeg;
	ViBuf vibuf;
	unsigned int state;
	int sema;
	int hid_endimage;
	int hid_vblank;
};

struct SpuStreamBody
{
	type_2 id;
	int size;
};

struct AudioDec
{
	int state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	int hdrCount;
	unsigned char* data;
	int put;
	int count;
	int size;
	int totalBytes;
	int iopBuff;
	int iopBuffSize;
	int iopLastPos;
	int iopPausePos;
	int totalBytesSent;
	int iopZero;
};

AudioDec audioDec;
VideoDec videoDec;

int pcmCallback(sceMpegCbDataStr* str, void* data);
int videoCallback(sceMpegCbDataStr* str, void* data);

// pcmCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x1bd470
int pcmCallback(sceMpegCbDataStr* str, void* data)
{
	ReadBuf* rb;
	unsigned char* ps0;
	int s1;
	unsigned char* pd0;
	unsigned char* pd1;
	int d0;
	int d1;
	int len;
}

// videoCallback__FP7sceMpegP16sceMpegCbDataStrPv
// Start address: 0x1bd630
int videoCallback(sceMpegCbDataStr* str, void* data)
{
	ReadBuf* rb;
	int s0;
	int s1;
	unsigned char* pd0;
	unsigned char* pd1;
	unsigned char* pd0Unc;
	unsigned char* pd1Unc;
	int d0;
	int d1;
}

