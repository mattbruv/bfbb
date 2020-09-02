typedef struct xIniSection;
typedef struct xIniFile;
typedef struct xIniValue;


typedef char type_0[256];
typedef char type_1[256];
typedef unsigned int type_2[4096];

struct xIniSection
{
	char* sec;
	int first;
	int count;
};

struct xIniFile
{
	int NumValues;
	int NumSections;
	xIniValue* Values;
	xIniSection* Sections;
	void* mem;
	type_0 name;
	type_1 pathname;
};

struct xIniValue
{
	char* tok;
	char* val;
};

type_2 ourGlobals;

char* xIniGetString(xIniFile* ini, char* tok, char* def);
float xIniGetFloat(xIniFile* ini, char* tok, float def);
int xIniGetInt(xIniFile* ini, char* tok, int def);
void xIniDestroy(xIniFile* ini);
xIniFile* xIniParse(char* buf, int len);

// xIniGetString__FP8xIniFilePcPc
// Start address: 0x1ec930
char* xIniGetString(xIniFile* ini, char* tok, char* def)
{
}

// xIniGetFloat__FP8xIniFilePcf
// Start address: 0x1eca00
float xIniGetFloat(xIniFile* ini, char* tok, float def)
{
}

// xIniGetInt__FP8xIniFilePci
// Start address: 0x1ecae0
int xIniGetInt(xIniFile* ini, char* tok, int def)
{
}

// xIniDestroy__FP8xIniFile
// Start address: 0x1ecbc0
void xIniDestroy(xIniFile* ini)
{
}

// xIniParse__FPci
// Start address: 0x1ecc10
xIniFile* xIniParse(char* buf, int len)
{
	int i;
	int ccr;
	int clf;
	int copen;
	int lastCRLF;
	char* c;
	char* lastLine;
	char* line;
	char* ltoken;
	xIniFile* ini;
}

