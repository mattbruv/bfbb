typedef struct DoubleChar;
typedef union SJIS_STRUCT;


typedef char type_0[16];
typedef char type_1[10];
typedef type_1 type_2[6];
typedef unsigned short type_3[33];
typedef char type_4[0];
typedef unsigned int type_5[256];
typedef unsigned short type_6[33];
typedef unsigned short type_7[2];
typedef type_7 type_8[3];

struct DoubleChar
{
	unsigned char byte1;
	unsigned char byte2;
};

union SJIS_STRUCT
{
	unsigned short sjisChar;
	DoubleChar doubleChar;
};

int g_xutilinit;
int g_crc_needinit;
type_5 g_crc32_table;
type_8 ascii_table;
type_3 ascii_k_table;
type_6 ascii_special_table;
type_4 _ctype_;

void xUtil_wtadjust(float* wts, int cnt, float arbref);
int xUtil_yesno(float wt_yes);
unsigned char itoBCD(unsigned short dec);
unsigned char itoBCD(unsigned char dec);
unsigned char BCDtoi(unsigned char hex);
void strtosjis(unsigned char* string, unsigned char* dest);
unsigned int xUtil_crc_update(unsigned int crc_accum, char* data, int datasize);
unsigned int xUtil_crc_init();
char* xUtil_idtag2string(unsigned int srctag, int bufidx);
int xUtilShutdown();
int xUtilStartup();

// xUtil_wtadjust__FPfif
// Start address: 0x20fc00
void xUtil_wtadjust(float* wts, int cnt, float arbref)
{
	int i;
	float sum;
	float fac;
}

// xUtil_yesno__Ff
// Start address: 0x20fd20
int xUtil_yesno(float wt_yes)
{
}

// itoBCD__FUs
// Start address: 0x20fda0
unsigned char itoBCD(unsigned short dec)
{
	int ones;
}

// itoBCD__FUc
// Start address: 0x20fe00
unsigned char itoBCD(unsigned char dec)
{
	int ones;
}

// BCDtoi__FUc
// Start address: 0x20fe60
unsigned char BCDtoi(unsigned char hex)
{
	type_0 c;
}

// strtosjis__FPUcPUc
// Start address: 0x20fea0
void strtosjis(unsigned char* string, unsigned char* dest)
{
	int i;
	int sjis_code;
	int ascii_code;
	unsigned char stmp;
	unsigned char stmp2;
	unsigned char* dest2;
}

// xUtil_crc_update__FUiPci
// Start address: 0x2100d0
unsigned int xUtil_crc_update(unsigned int crc_accum, char* data, int datasize)
{
	int i;
	int j;
}

// xUtil_crc_init__Fv
// Start address: 0x2102c0
unsigned int xUtil_crc_init()
{
	int i;
	int j;
	unsigned int crc_accum;
}

// xUtil_idtag2string__FUii
// Start address: 0x210350
char* xUtil_idtag2string(unsigned int srctag, int bufidx)
{
	unsigned int tag;
	char* strptr;
	char* uc;
	int l;
	char t;
	type_2 buf;
}

// xUtilShutdown__Fv
// Start address: 0x210660
int xUtilShutdown()
{
}

// xUtilStartup__Fv
// Start address: 0x210680
int xUtilStartup()
{
}

