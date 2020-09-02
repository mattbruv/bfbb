typedef struct sceIpuDmaEnv;
typedef union sceGsScissor;
typedef struct ThreadParam;
typedef struct _tagPadAnalog;
typedef struct VoData;
typedef struct _tagiPad;
typedef union sceGsFrame;
typedef struct tGS_DISPLAY2;
typedef union sceGsPrim;
typedef enum sceMpegCbType;
typedef union sceGsZbuf;
typedef struct _tagxPad;
typedef struct VideoDec;
typedef struct ReadBuf;
typedef struct StrFile;
typedef struct _tagxRumble;
typedef struct sceGsClear;
typedef struct tGS_PMODE;
typedef struct VoTag;
typedef struct sceGsDispEnv;
typedef union sceGsDthe;
typedef enum _tagRumbleType;
typedef struct tGS_BGCOLOR;
typedef union sceGsTest;
typedef struct xVec2;
typedef struct sceGsDBuff;
typedef struct analog_data;
typedef struct TimeStamp;
typedef struct sceMpegCbDataStr;
typedef struct VoBuf;
typedef struct SpuStreamHeader;
typedef struct sceGsDrawEnv1;
typedef union sceGsPrmodecont;
typedef union sceGsColclamp;
typedef struct tGS_SMODE2;
typedef union sceGsXyoffset;
typedef struct ViBuf;
typedef struct sceMpeg;
typedef struct sceGsRgbaq;
typedef struct tGS_DISPFB2;
typedef struct SpuStreamBody;
typedef union sceGsXyz;
typedef struct AudioDec;
typedef enum _tagPadState;
typedef struct sceGifTag;

typedef void(*type_0)(void*);
typedef void(*type_5)(void*);
typedef void(*type_14)(VideoDec*);
typedef int(*type_16)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef int(*type_18)(sceMpeg*, sceMpegCbDataStr*, void*);
typedef int(*type_19)(int);
typedef int(*type_20)(int);

typedef unsigned char type_1[22];
typedef unsigned char type_2[22];
typedef unsigned char type_3[1228800];
typedef _tagxPad type_4[4];
typedef unsigned char type_6[327680];
typedef int type_7[15];
typedef unsigned int type_8[29248];
typedef type_8 type_9[2];
typedef float type_10[22];
typedef float type_11[22];
typedef sceGsDispEnv type_12[2];
typedef char type_13[4];
typedef analog_data type_15[2];
typedef char type_17[4];

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

union sceGsScissor
{
	unsigned long SCAX0;
	unsigned long pad11;
	unsigned long SCAX1;
	unsigned long pad27;
	unsigned long SCAY0;
	unsigned long pad43;
	unsigned long SCAY1;
	unsigned long pad59;
};

struct ThreadParam
{
	int status;
	type_0 entry;
	void* stack;
	int stackSize;
	void* gpReg;
	int initPriority;
	int currentPriority;
	unsigned int attr;
	unsigned int option;
	int waitType;
	int waitId;
	int wakeupCount;
};

struct _tagPadAnalog
{
	char x;
	char y;
};

struct VoData
{
	type_3 v;
};

struct _tagiPad
{
	int port;
};

union sceGsFrame
{
	unsigned long FBP;
	unsigned long pad09;
	unsigned long FBW;
	unsigned long pad22;
	unsigned long PSM;
	unsigned long pad30;
	unsigned long FBMSK;
};

struct tGS_DISPLAY2
{
	union
	{
		unsigned int DX;
		unsigned int DY;
		unsigned int MAGH;
		unsigned int MAGV;
		unsigned int p0;
	};
	union
	{
		unsigned int DW;
		unsigned int DH;
		unsigned int p1;
	};
};

union sceGsPrim
{
	unsigned long PRIM;
	unsigned long IIP;
	unsigned long TME;
	unsigned long FGE;
	unsigned long ABE;
	unsigned long AA1;
	unsigned long FST;
	unsigned long CTXT;
	unsigned long FIX;
	unsigned long pad11;
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

union sceGsZbuf
{
	unsigned long ZBP;
	unsigned long pad09;
	unsigned long PSM;
	unsigned long pad28;
	unsigned long ZMSK;
	unsigned long pad33;
};

struct _tagxPad
{
	type_1 value;
	type_2 last_value;
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
	type_10 up_tmr;
	type_11 down_tmr;
	type_15 analog;
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

struct ReadBuf
{
	type_6 data;
	int put;
	int count;
	int size;
};

struct StrFile
{
	int file;
	int size;
	int current;
};

struct _tagxRumble
{
	_tagRumbleType type;
	float seconds;
	_tagxRumble* next;
	short active;
	unsigned short fxflags;
};

struct sceGsClear
{
	sceGsTest testa;
	long testaaddr;
	sceGsPrim prim;
	long primaddr;
	sceGsRgbaq rgbaq;
	long rgbaqaddr;
	sceGsXyz xyz2a;
	long xyz2aaddr;
	sceGsXyz xyz2b;
	long xyz2baddr;
	sceGsTest testb;
	long testbaddr;
};

struct tGS_PMODE
{
	union
	{
		unsigned int EN1;
		unsigned int EN2;
		unsigned int CRTMD;
		unsigned int MMOD;
		unsigned int AMOD;
		unsigned int SLBG;
		unsigned int ALP;
		unsigned int p0;
	};
	unsigned int p1;
};

struct VoTag
{
	int status;
	type_7 dummy;
	type_9 v;
};

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

union sceGsDthe
{
	unsigned long DTHE;
	unsigned long pad01;
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

struct tGS_BGCOLOR
{
	union
	{
		unsigned int R;
		unsigned int G;
		unsigned int B;
		unsigned int p0;
	};
	unsigned int p1;
};

union sceGsTest
{
	unsigned long ATE;
	unsigned long ATST;
	unsigned long AREF;
	unsigned long AFAIL;
	unsigned long DATE;
	unsigned long DATM;
	unsigned long ZTE;
	unsigned long ZTST;
	unsigned long pad19;
};

struct xVec2
{
	float x;
	float y;
};

struct sceGsDBuff
{
	type_12 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
};

struct analog_data
{
	xVec2 offset;
	xVec2 dir;
	float mag;
	float ang;
};

struct TimeStamp
{
	long pts;
	long dts;
	int pos;
	int len;
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

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int write;
	int count;
	int size;
};

struct SpuStreamHeader
{
	type_13 id;
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
};

struct sceGsDrawEnv1
{
	sceGsFrame frame1;
	unsigned long frame1addr;
	sceGsZbuf zbuf1;
	long zbuf1addr;
	sceGsXyoffset xyoffset1;
	long xyoffset1addr;
	sceGsScissor scissor1;
	long scissor1addr;
	sceGsPrmodecont prmodecont;
	long prmodecontaddr;
	sceGsColclamp colclamp;
	long colclampaddr;
	sceGsDthe dthe;
	long dtheaddr;
	sceGsTest test1;
	long test1addr;
};

union sceGsPrmodecont
{
	unsigned long AC;
	unsigned long pad01;
};

union sceGsColclamp
{
	unsigned long CLAMP;
	unsigned long pad01;
};

struct tGS_SMODE2
{
	union
	{
		unsigned int INT;
		unsigned int FFMD;
		unsigned int DPMS;
		unsigned int p0;
	};
	unsigned int p1;
};

union sceGsXyoffset
{
	unsigned long OFX;
	unsigned long pad16;
	unsigned long OFY;
	unsigned long pad48;
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

struct sceGsRgbaq
{
	union
	{
		unsigned int R;
		unsigned int G;
		unsigned int B;
		unsigned int A;
	};
	float Q;
};

struct tGS_DISPFB2
{
	union
	{
		unsigned int FBP;
		unsigned int FBW;
		unsigned int PSM;
		unsigned int p0;
	};
	union
	{
		unsigned int DBX;
		unsigned int DBY;
		unsigned int p1;
	};
};

struct SpuStreamBody
{
	type_17 id;
	int size;
};

union sceGsXyz
{
	unsigned long X;
	unsigned long Y;
	unsigned long Z;
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

enum _tagPadState
{
	ePad_Disabled,
	ePad_DisabledError,
	ePad_Enabled,
	ePad_Missing,
	ePad_Total
};

struct sceGifTag
{
	union
	{
		unsigned long NLOOP;
		unsigned long EOP;
		unsigned long pad16;
		unsigned long id;
		unsigned long PRE;
		unsigned long PRIM;
		unsigned long FLG;
		unsigned long NREG;
	};
	union
	{
		unsigned long REGS0;
		unsigned long REGS1;
		unsigned long REGS2;
		unsigned long REGS3;
		unsigned long REGS4;
		unsigned long REGS5;
		unsigned long REGS6;
		unsigned long REGS7;
		unsigned long REGS8;
		unsigned long REGS9;
		unsigned long REGS10;
		unsigned long REGS11;
		unsigned long REGS12;
		unsigned long REGS13;
		unsigned long REGS14;
		unsigned long REGS15;
	};
};

VoData* voBufData;
VoTag* voBufTag;
<unknown type (0xa510)>* viBufTag;
unsigned char* mpegWork;
int mpegWorkSz;
char* defStack;
ReadBuf* readBufp;
unsigned char* audioBuff;
<unknown type (0xa510)>* viBufData;
char* videoDecStack;
TimeStamp* timeStamp;
int videoDecTh;
int defaultTh;
StrFile infile;
VideoDec videoDec;
AudioDec audioDec;
VoBuf voBuf;
int frd;
unsigned int controller_val;
int isWithAudio;
sceGsDBuff sony_db;
unsigned int skip_buttons;
unsigned int skip_time;
type_20 handler_endimage;
type_19 vblankHandler;
void* _gp;
type_14 videoDecMain;
type_5 defMain;
type_18 pcmCallback;
type_16 videoCallback;
type_4 mPad;

void ErrMessage(char* message);
void defMain();
int initAll(char* bsfilename);
void switchThread();
int readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file);
int ps2_mpeg_play(char* fname, char* work_area, int work_area_size, unsigned int buttons, float time);

// ErrMessage__FPc
// Start address: 0x1bcb80
void ErrMessage(char* message)
{
}

// defMain__FPv
// Start address: 0x1bcb90
void defMain()
{
}

// initAll__FPCc
// Start address: 0x1bcbb0
int initAll(char* bsfilename)
{
	ThreadParam th_param;
}

// switchThread__Fv
// Start address: 0x1bce10
void switchThread()
{
}

// readMpeg__FP8VideoDecP7ReadBufP7StrFile
// Start address: 0x1bce20
int readMpeg(VideoDec* vd, ReadBuf* rb, StrFile* file)
{
	unsigned char* put_ptr;
	unsigned char* get_ptr;
	int putsize;
	int getsize;
	int readrest;
	int writerest;
	int count;
	int proceed;
	int isStarted;
	long t0;
	long t1;
}

// ps2_mpeg_play__FPCcPciUif
// Start address: 0x1bd0c0
int ps2_mpeg_play(char* fname, char* work_area, int work_area_size, unsigned int buttons, float time)
{
	unsigned int i;
	char* ptr;
	char* extra_buf;
	char* bp;
}

