typedef struct tGS_BGCOLOR;
typedef struct VoData;
typedef union sceGsXyz;
typedef struct VoTag;
typedef struct tGS_SMODE2;
typedef struct sceGifTag;
typedef union sceGsScissor;
typedef struct VoBuf;
typedef struct tGS_DISPFB2;
typedef struct sceGsClear;
typedef union sceGsZbuf;
typedef union sceGsPrim;
typedef struct _sceDmaTag;
typedef union sceGsFrame;
typedef struct sceGsDispEnv;
typedef struct sceGsDBuff;
typedef struct tGS_DISPLAY2;
typedef struct sceGsDrawEnv1;
typedef union tD_CHCR;
typedef union sceGsTest;
typedef union sceGsDthe;
typedef struct sceDmaChan;
typedef struct sceGifPacket;
typedef union sceGsPrmodecont;
typedef struct tGS_PMODE;
typedef union sceGsXyoffset;
typedef union sceGsColclamp;
typedef struct sceGsRgbaq;


typedef unsigned int type_0[4];
typedef unsigned char type_1[1228800];
typedef unsigned int type_2[3];
typedef <unknown type (0xa510)> type_3[6];
typedef int type_4[15];
typedef unsigned int type_5[29248];
typedef type_5 type_6[2];
typedef unsigned int type_7[2];
typedef unsigned long type_8[2];
typedef unsigned long type_9[2];
typedef unsigned long type_10[2];
typedef sceGsDispEnv type_11[2];
typedef unsigned int type_12[3];
typedef unsigned int type_13[3];
typedef unsigned int type_14[3];
typedef unsigned int type_15[3];
typedef unsigned int type_16[3];
typedef unsigned int type_17[3];
typedef unsigned int type_18[4];

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

struct VoData
{
	type_1 v;
};

union sceGsXyz
{
	unsigned long X;
	unsigned long Y;
	unsigned long Z;
};

struct VoTag
{
	int status;
	type_4 dummy;
	type_6 v;
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

struct VoBuf
{
	VoData* data;
	VoTag* tag;
	int write;
	int count;
	int size;
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

union sceGsZbuf
{
	unsigned long ZBP;
	unsigned long pad09;
	unsigned long PSM;
	unsigned long pad28;
	unsigned long ZMSK;
	unsigned long pad33;
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

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	type_7 p;
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

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct sceGsDBuff
{
	type_11 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
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

union tD_CHCR
{
	unsigned int DIR;
	unsigned int p0;
	unsigned int MOD;
	unsigned int ASP;
	unsigned int TTE;
	unsigned int TIE;
	unsigned int STR;
	unsigned int p1;
	unsigned int TAG;
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

union sceGsDthe
{
	unsigned long DTHE;
	unsigned long pad01;
};

struct sceDmaChan
{
	tD_CHCR chcr;
	type_12 p0;
	void* madr;
	type_13 p1;
	unsigned int qwc;
	type_14 p2;
	_sceDmaTag* tadr;
	type_15 p3;
	void* as0;
	type_16 p4;
	void* as1;
	type_17 p5;
	type_18 p6;
	type_0 p7;
	void* sadr;
	type_2 p8;
};

struct sceGifPacket
{
	unsigned int* pCurrent;
	<unknown type (0xa510)>* pBase;
	<unknown type (0xa510)>* pDmaTag;
	unsigned long* pGifTag;
};

union sceGsPrmodecont
{
	unsigned long AC;
	unsigned long pad01;
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

union sceGsXyoffset
{
	unsigned long OFX;
	unsigned long pad16;
	unsigned long OFY;
	unsigned long pad48;
};

union sceGsColclamp
{
	unsigned long CLAMP;
	unsigned long pad01;
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

int isCountVblank;
int vblankCount;
int isFrameEnd;
int oddeven;
int handler_error;
type_3 _packetBase;
int frd;
VoBuf voBuf;
sceGsDBuff sony_db;

void endDisplay();
void startDisplay(int waitEven);
int handler_endimage();
int vblankHandler();
void setImageTag(unsigned int* tags, void* image, int index, int image_w, int image_h);
void clearGsMem(int r, int g, int b, int disp_width, int disp_height);

// endDisplay__Fv
// Start address: 0x1bc390
void endDisplay()
{
}

// startDisplay__Fi
// Start address: 0x1bc3a0
void startDisplay(int waitEven)
{
}

// handler_endimage__Fi
// Start address: 0x1bc3f0
int handler_endimage()
{
}

// vblankHandler__Fi
// Start address: 0x1bc430
int vblankHandler()
{
	sceDmaChan* dmaGif_loadimage;
	VoTag* tag;
}

// setImageTag__FPUiPviii
// Start address: 0x1bc610
void setImageTag(unsigned int* tags, void* image, int index, int image_w, int image_h)
{
	int mbx;
	int mby;
	int i;
	int j;
	sceGifPacket packet;
	type_8 giftag;
	type_9 giftag_eop;
	unsigned long* tag;
}

// clearGsMem__Fiiiii
// Start address: 0x1bc910
void clearGsMem(int r, int g, int b, int disp_width, int disp_height)
{
	type_10 giftag_clear;
	sceGifPacket packet;
	sceDmaChan* dmaGif;
}

