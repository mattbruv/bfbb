typedef struct sceGsDispEnv;
typedef struct RxObjSpace3DVertex;
typedef struct rwDMAReadCircuitOneTag;
typedef struct RwMatrixTag;
typedef struct tGS_DISPLAY2;
typedef struct xVec3;
typedef struct sceGsDrawEnv1;
typedef union sceGsTest;
typedef union sceGsDthe;
typedef struct rwDMA_flipData;
typedef struct sceGsDBuffDc;
typedef struct tGS_PMODE;
typedef union sceGsPrmodecont;
typedef struct tGS_DISPLAY1;
typedef union sceGsXyoffset;
typedef union sceGsColclamp;
typedef struct sceGsRgbaq;
typedef struct tGS_BGCOLOR;
typedef struct sceGsDrawEnv2;
typedef union sceGsXyz;
typedef struct RwV3d;
typedef struct RwRGBA;
typedef struct tGS_SMODE2;
typedef struct sceGifTag;
typedef struct tGS_DISPFB2;
typedef union sceGsScissor;
typedef union RxColorUnion;
typedef struct RwRaster;
typedef struct sceGsClear;
typedef union sceGsZbuf;
typedef union sceGsPrim;
typedef union sceGsFrame;
typedef struct tGS_DISPFB1;


typedef RxObjSpace3DVertex type_0[384];
typedef unsigned int type_1[4096];
typedef sceGsDispEnv type_2[2];
typedef sceGsDispEnv type_3[2];
typedef <unknown type (0xa510)>* type_4[4];

struct sceGsDispEnv
{
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
};

struct rwDMAReadCircuitOneTag
{
	tGS_DISPFB1 dispfb10;
	tGS_DISPLAY1 display10;
	tGS_DISPFB1 dispfb11;
	tGS_DISPLAY1 display11;
};

struct RwMatrixTag
{
	RwV3d right;
	unsigned int flags;
	RwV3d up;
	unsigned int pad1;
	RwV3d at;
	unsigned int pad2;
	RwV3d pos;
	unsigned int pad3;
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

struct xVec3
{
	float x;
	float y;
	float z;
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

struct rwDMA_flipData
{
	sceGsDBuffDc db;
	rwDMAReadCircuitOneTag tcaaDisp;
	type_2 disp1;
	rwDMAReadCircuitOneTag tcaaDisp1;
	type_4 dmaPkt;
};

struct sceGsDBuffDc
{
	type_3 disp;
	sceGifTag giftag0;
	sceGsDrawEnv1 draw01;
	sceGsDrawEnv2 draw02;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw11;
	sceGsDrawEnv2 draw12;
	sceGsClear clear1;
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

union sceGsPrmodecont
{
	unsigned long AC;
	unsigned long pad01;
};

struct tGS_DISPLAY1
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

struct sceGsDrawEnv2
{
	sceGsFrame frame2;
	unsigned long frame2addr;
	sceGsZbuf zbuf2;
	long zbuf2addr;
	sceGsXyoffset xyoffset2;
	long xyoffset2addr;
	sceGsScissor scissor2;
	long scissor2addr;
	sceGsPrmodecont prmodecont;
	long prmodecontaddr;
	sceGsColclamp colclamp;
	long colclampaddr;
	sceGsDthe dthe;
	long dtheaddr;
	sceGsTest test2;
	long test2addr;
};

union sceGsXyz
{
	unsigned long X;
	unsigned long Y;
	unsigned long Z;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
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

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct RwRaster
{
	RwRaster* parent;
	unsigned char* cpPixels;
	unsigned char* palette;
	int width;
	int height;
	int depth;
	int stride;
	short nOffsetX;
	short nOffsetY;
	unsigned char cType;
	unsigned char cFlags;
	unsigned char privateFlags;
	unsigned char cFormat;
	unsigned char* originalPixels;
	int originalWidth;
	int originalHeight;
	int originalStride;
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

struct tGS_DISPFB1
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

type_1 ourGlobals;
rwDMA_flipData _rwDMAFlipData;
<unknown type (0xa510)>* _rwDMAPktPtr;
long skyFrame_1;

void iDrawSetTEST2(int value);
void iDrawSetFBA1(int value);
void iDrawSetFBMSK(unsigned int abgr);

// iDrawSetTEST2__Fi
// Start address: 0x1a7e50
void iDrawSetTEST2(int value)
{
	unsigned long tmp;
}

// iDrawSetFBA1__Fi
// Start address: 0x1a7ed0
void iDrawSetFBA1(int value)
{
	unsigned long tmp;
}

// iDrawSetFBMSK__FUi
// Start address: 0x1a7f70
void iDrawSetFBMSK(unsigned int abgr)
{
	unsigned long tmp;
	unsigned long hi;
}

