typedef struct substr;


typedef unsigned char type_0[32];
typedef unsigned char type_1[32];
typedef unsigned char type_2[32];

struct substr
{
	char* text;
	unsigned int size;
};


char* find_char(substr& s, substr& cs);
unsigned int atox(substr& s, unsigned int& read_size);
int icompare(substr& s1, substr& s2);
int imemcmp(void* d1, void* d2, unsigned int size);
int xStrParseFloatList(float* dest, char* strbuf, int max);
char* xStrupr(char* string);
int xStricmp(char* string1, char* string2);
char* xStrTokBuffer(char* string, char* control, void* buffer);
char* xStrTok(char* string, char* control, char** nextoken);
unsigned int xStrHashCat(unsigned int prefix, char* str);
unsigned int xStrHash(char* s, unsigned int size);
unsigned int xStrHash(char* str);

// find_char__FRC6substrRC6substr
// Start address: 0x20dda0
char* find_char(substr& s, substr& cs)
{
	char* p;
	char* d;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	char* s;
}

// atox__FRC6substrRUi
// Start address: 0x20e410
unsigned int atox(substr& s, unsigned int& read_size)
{
	char* p;
	unsigned int size;
	unsigned int total;
	unsigned int v;
}

// icompare__FRC6substrRC6substr
// Start address: 0x20e4e0
int icompare(substr& s1, substr& s2)
{
	unsigned int len;
}

// imemcmp__FPCvPCvUi
// Start address: 0x20e5a0
int imemcmp(void* d1, void* d2, unsigned int size)
{
	char* s1;
	char* s2;
	unsigned int i;
}

// xStrParseFloatList__FPfPCci
// Start address: 0x20e610
int xStrParseFloatList(float* dest, char* strbuf, int max)
{
	char* str;
	int index;
	int digits;
	int negate;
	char* numstart;
}

// xStrupr__FPc
// Start address: 0x20e820
char* xStrupr(char* string)
{
	char* p;
}

// xStricmp__FPCcPCc
// Start address: 0x20e880
int xStricmp(char* string1, char* string2)
{
	int result;
}

// xStrTokBuffer__FPCcPCcPv
// Start address: 0x20e980
char* xStrTokBuffer(char* string, char* control, void* buffer)
{
	char** nextoken;
	char* dest;
	unsigned char* str;
	unsigned char* ctrl;
	type_2 map;
	int count;
}

// xStrTok__FPcPCcPPc
// Start address: 0x20ead0
char* xStrTok(char* string, char* control, char** nextoken)
{
	unsigned char* str;
	unsigned char* ctrl;
	type_1 map;
	int count;
}

// xStrHashCat__FUiPCc
// Start address: 0x20ec10
unsigned int xStrHashCat(unsigned int prefix, char* str)
{
	unsigned int i;
	char c;
}

// xStrHash__FPCcUi
// Start address: 0x20ec70
unsigned int xStrHash(char* s, unsigned int size)
{
	unsigned int value;
	unsigned int i;
	char c;
}

// xStrHash__FPCc
// Start address: 0x20ece0
unsigned int xStrHash(char* str)
{
	unsigned int i;
	char c;
}

