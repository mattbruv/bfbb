typedef struct RwModuleInfo;
typedef struct skyFile;
typedef struct RwFileFunctions;
typedef struct RwSkyFSState;

typedef int(*type_0)(void*, long, int);
typedef int(*type_1)(void*);
typedef void*(*type_2)(char*, char*);
typedef int(*type_3)(void*);
typedef int(*type_4)(char*, void*);
typedef int(*type_8)(void*);
typedef int(*type_9)(char*);
typedef void*(*type_10)(void*, int, int);
typedef void*(*type_11)(char*, char*);
typedef int(*type_12)(void*);
typedef unsigned int(*type_13)(void*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_14)(void*, unsigned int, unsigned int, void*);
typedef unsigned int(*type_15)(void*, unsigned int, unsigned int, void*);
typedef int(*type_16)(void*);
typedef char*(*type_17)(char*, int, void*);
typedef int(*type_18)(char*, void*);
typedef int(*type_19)(void*, long, int);
typedef int(*type_20)(void*);
typedef unsigned int(*type_21)(void*, unsigned int, unsigned int, void*);
typedef int(*type_22)(char*);
typedef int(*type_23)(void*);
typedef char*(*type_25)(char*, int, void*);
typedef void*(*type_26)(void*, int, int);
typedef int(*type_27)(void*);

typedef char type_5[256];
typedef char type_6[256];
typedef unsigned int type_7[4096];
typedef unsigned char type_24[10240];

struct RwModuleInfo
{
	int globalsOffset;
	int numInstances;
};

struct skyFile
{
	int gdfs;
	int POS;
	int SOF;
	type_24 readBuffer;
	unsigned int bufferPos;
	int bufferValid;
};

struct RwFileFunctions
{
	type_9 rwfexist;
	type_11 rwfopen;
	type_12 rwfclose;
	type_14 rwfread;
	type_15 rwfwrite;
	type_17 rwfgets;
	type_18 rwfputs;
	type_20 rwfeof;
	type_0 rwfseek;
	type_1 rwfflush;
	type_3 rwftell;
};

struct RwSkyFSState
{
	int gdfsOpenFiles;
	type_6 SubDir;
	RwModuleInfo gdfsModuleInfo;
};

RwSkyFSState SkyFSState;
type_10 _rwSkyFSClose;
type_26 _rwSkyFSOpen;
type_7 ourGlobals;
type_8 skyFtell;
type_23 skyFflush;
type_19 skyFseek;
type_27 skyFeof;
type_4 skyFputs;
type_25 skyFgets;
type_21 skyFwrite;
type_13 skyFread;
type_16 skyFclose;
type_2 skyFopen;
type_22 skyFexist;

int SkyInstallFileSystem(char* subdir);
void* _rwSkyFSClose(void* instance);
void* _rwSkyFSOpen(void* instance, int offset);
int skyFflush();
int skyFeof(void* fptr);
int skyFputs(char* buffer, void* fptr);
char* skyFgets(char* buffer, int maxLen, void* fptr);
int skyFtell(void* fptr);
int skyFseek(void* fptr, long offset, int origin);
unsigned int skyFwrite(void* addr, unsigned int size, unsigned int count, void* fptr);
unsigned int skyFread(void* addr, unsigned int size, unsigned int count, void* fptr);
int skyFexist(char* name);
int skyFclose(void* fptr);
void* skyFopen(char* name, char* access);
void* trySkyFopen(char* fname, char* access);
int skyTransMode(char* access);

// 
// Start address: 0x1104a0
int SkyInstallFileSystem(char* subdir)
{
}

// _rwSkyFSClose__FPvii
// Start address: 0x110530
void* _rwSkyFSClose(void* instance)
{
	RwFileFunctions* FS;
}

// _rwSkyFSOpen__FPvii
// Start address: 0x1105f0
void* _rwSkyFSOpen(void* instance, int offset)
{
	RwFileFunctions* FS;
}

// skyFflush__FPv
// Start address: 0x110770
int skyFflush()
{
}

// skyFeof__FPv
// Start address: 0x110780
int skyFeof(void* fptr)
{
	skyFile* fp;
}

// skyFputs__FPCcPv
// Start address: 0x1107d0
int skyFputs(char* buffer, void* fptr)
{
	skyFile* fp;
	int i;
	int j;
}

// skyFgets__FPciPv
// Start address: 0x1108b0
char* skyFgets(char* buffer, int maxLen, void* fptr)
{
	skyFile* fp;
	int i;
	int numBytesRead;
}

// skyFtell__FPv
// Start address: 0x110a00
int skyFtell(void* fptr)
{
	skyFile* fp;
}

// skyFseek__FPvli
// Start address: 0x110a50
int skyFseek(void* fptr, long offset, int origin)
{
	skyFile* fp;
	int oldFPos;
	int bufStart;
	int noBuffer;
}

// skyFwrite__FPCvUiUiPv
// Start address: 0x110bf0
unsigned int skyFwrite(void* addr, unsigned int size, unsigned int count, void* fptr)
{
	int bytesWritten;
	skyFile* fp;
	int numBytesToWrite;
}

// skyFread__FPvUiUiPv
// Start address: 0x110cf0
unsigned int skyFread(void* addr, unsigned int size, unsigned int count, void* fptr)
{
	skyFile* fp;
	unsigned int numBytesToRead;
	int bytesRead;
	int bytesRead2;
}

// skyFexist__FPCc
// Start address: 0x110e30
int skyFexist(char* name)
{
	void* res;
}

// skyFclose__FPv
// Start address: 0x110ea0
int skyFclose(void* fptr)
{
	skyFile* fp;
}

// skyFopen__FPCcPCc
// Start address: 0x110f50
void* skyFopen(char* name, char* access)
{
	void* res;
}

// trySkyFopen__FPCcPCc
// Start address: 0x110f80
void* trySkyFopen(char* fname, char* access)
{
	skyFile* fp;
	int mode;
	type_5 name;
	char* nameptr;
}

// skyTransMode__FPCc
// Start address: 0x1111e0
int skyTransMode(char* access)
{
	int mode;
	char* r;
	char* w;
	char* a;
	char* plus;
	char* n;
	char* d;
}

