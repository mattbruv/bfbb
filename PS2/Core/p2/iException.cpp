typedef struct sceGpTextureArg;
typedef union sceGsTex1;
typedef union sceGsBitbltbuf;
typedef struct _sceDmaTag;
typedef union sceGsFrame;
typedef union sceGsPrim;
typedef struct _sceGpChain;
typedef union sceGsTrxpos;
typedef union sceGsZbuf;
typedef struct tGS_DISPLAY2;
typedef struct sceGpLoadImage;
typedef struct _sceGpAdc;
typedef struct sceGpAlphaEnv;
typedef struct sceGsClear;
typedef union sceGsTrxreg;
typedef struct sceGsSt;
typedef union sceGsClamp;
typedef union _sceGpReg;
typedef struct tGS_PMODE;
typedef union sceGsDthe;
typedef union sceGsTest;
typedef struct sceGsDispEnv;
typedef union sceGsUv;
typedef union sceGsTexa;
typedef struct tGS_BGCOLOR;
typedef union sceGsFba;
typedef union sceGsPrmodecont;
typedef union sceGsColclamp;
typedef struct sceGsDBuff;
typedef union sceGsXyoffset;
typedef struct sceGsDrawEnv1;
typedef struct sceGsRgbaq;
typedef union sceGsTex0;
typedef struct _sceGifPackAd;
typedef struct tGS_SMODE2;
typedef union sceGsFog;
typedef struct tGS_DISPFB2;
typedef union sceGsXyz;
typedef union sceGsAlpha;
typedef struct sceGifTag;
typedef struct sceGpPrimR;
typedef struct sceGsTexflush;
typedef struct sceGpTexEnv;
typedef struct xSysFontTbl;
typedef union sceGsPabe;
typedef union sceGsXyzf;
typedef union sceGsTrxdir;
typedef union sceGsScissor;


typedef _sceGpReg type_0[1];
typedef xSysFontTbl type_1[128];
typedef unsigned int type_2[2];
typedef unsigned int type_3[4096];
typedef char type_4[128];
typedef unsigned int type_5[2];
typedef sceGsDispEnv type_6[2];
typedef char type_7[128];
typedef char type_8[1024];
typedef char* type_9[14];
typedef char* type_10[32];

struct sceGpTextureArg
{
	short tbp;
	short tbw;
	short tpsm;
	short tx;
	short ty;
	short tw;
	short th;
	short cbp;
	short cpsm;
};

union sceGsTex1
{
	unsigned long LCM;
	unsigned long pad01;
	unsigned long MXL;
	unsigned long MMAG;
	unsigned long MMIN;
	unsigned long MTBA;
	unsigned long pad10;
	unsigned long L;
	unsigned long pad21;
	unsigned long K;
	unsigned long pad44;
};

union sceGsBitbltbuf
{
	unsigned long SBP;
	unsigned long pad14;
	unsigned long SBW;
	unsigned long pad22;
	unsigned long SPSM;
	unsigned long pad30;
	unsigned long DBP;
	unsigned long pad46;
	unsigned long DBW;
	unsigned long pad54;
	unsigned long DPSM;
	unsigned long pad62;
};

struct _sceDmaTag
{
	unsigned short qwc;
	unsigned char mark;
	unsigned char id;
	_sceDmaTag* next;
	type_2 p;
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

struct _sceGpChain
{
	<unknown type (0xa510)>* ot;
	<unknown type (0xa510)>* pKick;
	<unknown type (0xa510)>* pEnd;
	int resolution;
};

union sceGsTrxpos
{
	unsigned long SSAX;
	unsigned long pad11;
	unsigned long SSAY;
	unsigned long pad27;
	unsigned long DSAX;
	unsigned long pad43;
	unsigned long DSAY;
	unsigned long DIR;
	unsigned long pad61;
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

struct sceGpLoadImage
{
	_sceDmaTag dmacnt;
	sceGifTag giftag1;
	sceGsBitbltbuf bitbltbuf;
	long bitbltbufaddr;
	sceGsTrxpos trxpos;
	long trxposaddr;
	sceGsTrxreg trxreg;
	long trxregaddr;
	sceGsTrxdir trxdir;
	long trxdiraddr;
	sceGifTag giftag2;
	_sceDmaTag dmaref;
	_sceDmaTag dmanext;
	sceGifTag giftag3;
	sceGsTexflush texflush;
	long texflushaddr;
};

struct _sceGpAdc
{
	int ADC;
	int pad;
};

struct sceGpAlphaEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsAlpha alpha;
	long alphaaddr;
	sceGsPabe pabe;
	long pabeaddr;
	sceGsTexa texa;
	long texaaddr;
	sceGsFba fba;
	long fbaaddr;
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

union sceGsTrxreg
{
	unsigned long RRW;
	unsigned long pad12;
	unsigned long RRH;
	unsigned long pad44;
};

struct sceGsSt
{
	float S;
	float T;
};

union sceGsClamp
{
	unsigned long WMS;
	unsigned long WMT;
	unsigned long MINU;
	unsigned long MAXU;
	unsigned long MINV;
	unsigned long MAXV;
	unsigned long pad44;
};

union _sceGpReg
{
	sceGsPrim prim;
	sceGsRgbaq rgbaq;
	sceGsSt st;
	sceGsUv uv;
	sceGsXyzf xyzf;
	sceGsXyz xyz;
	sceGsTex0 tex0;
	sceGsClamp clamp;
	sceGsFog fog;
	_sceGpAdc adc;
	unsigned long ul;
	type_5 ui;
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

union sceGsDthe
{
	unsigned long DTHE;
	unsigned long pad01;
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

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

union sceGsUv
{
	unsigned long U;
	unsigned long pad14;
	unsigned long V;
	unsigned long pad30;
};

union sceGsTexa
{
	unsigned long TA0;
	unsigned long pad08;
	unsigned long AEM;
	unsigned long pad16;
	unsigned long TA1;
	unsigned long pad40;
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

union sceGsFba
{
	unsigned long FBA;
	unsigned long pad01;
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

struct sceGsDBuff
{
	type_6 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
};

union sceGsXyoffset
{
	unsigned long OFX;
	unsigned long pad16;
	unsigned long OFY;
	unsigned long pad48;
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

union sceGsTex0
{
	unsigned long TBP0;
	unsigned long TBW;
	unsigned long PSM;
	unsigned long TW;
	unsigned long TH;
	unsigned long TCC;
	unsigned long TFX;
	unsigned long CBP;
	unsigned long CPSM;
	unsigned long CSM;
	unsigned long CSA;
	unsigned long CLD;
};

struct _sceGifPackAd
{
	unsigned long DATA;
	unsigned long ADDR;
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

union sceGsFog
{
	unsigned long pad00;
	unsigned long F;
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

union sceGsXyz
{
	unsigned long X;
	unsigned long Y;
	unsigned long Z;
};

union sceGsAlpha
{
	unsigned long A;
	unsigned long B;
	unsigned long C;
	unsigned long D;
	unsigned long pad8;
	unsigned long FIX;
	unsigned long pad40;
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

struct sceGpPrimR
{
	_sceDmaTag dmanext;
	sceGifTag giftag1;
	_sceGifPackAd userreg;
	sceGifTag giftag2;
	type_0 reg;
};

struct sceGsTexflush
{
	unsigned long pad00;
};

struct sceGpTexEnv
{
	_sceDmaTag dmanext;
	sceGifTag giftag;
	sceGsTex1 tex1;
	long tex1addr;
	sceGsTex0 tex0;
	long tex0addr;
	sceGsClamp clamp;
	long clampaddr;
};

struct xSysFontTbl
{
	int x;
	int y;
};

union sceGsPabe
{
	unsigned long PABE;
	unsigned long pad01;
};

union sceGsXyzf
{
	unsigned long X;
	unsigned long Y;
	unsigned long Z;
	unsigned long F;
};

union sceGsTrxdir
{
	unsigned long XDR;
	unsigned long pad02;
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

type_1 xSysFontLookup;
type_3 xSysFontRGBA;
type_9 excep_table;
type_10 reg_table;
_sceGpChain sChain;
sceGpPrimR* sSprpac;
long iExceptionHangCurr;
long iExceptionHangCheck;
void* iExceptionHangAddr;
unsigned int sOldFreeSpace;
long sOldTime;

void iExceptionRwDMAInit();
void iExceptionInit();

// iExceptionRwDMAInit__Fv
// Start address: 0x3d7280
void iExceptionRwDMAInit()
{
}

// iExceptionInit__Fv
// Start address: 0x3d7290
void iExceptionInit()
{
}

