typedef struct tag_xFile;
typedef struct tag_iFile;
typedef enum IFILE_READSECTOR_STATUS;
typedef enum HISMemoryType;
typedef enum HISStatus;
typedef struct HISFileIndexDebug;
typedef enum xFileDriveType;
typedef enum xFileDriveStatus;
typedef struct HISRequestDebug;
typedef union _class;
typedef struct AsyncRequest;

typedef void(*type_0)(tag_xFile*);
typedef void(*type_5)();

typedef AsyncRequest type_1[32];
typedef char* type_2[3];
typedef char type_3[256];
typedef char type_4[128];
typedef unsigned int type_6[4096];
typedef char type_7[48];
typedef char type_8[32];
typedef char type_9[256];
typedef char* type_10[9];

struct tag_xFile
{
	type_8 relname;
	tag_iFile ps;
	void* user_data;
};

struct tag_iFile
{
	unsigned int flags;
	type_4 path;
	int fd;
	int offset;
	int length;
};

enum IFILE_READSECTOR_STATUS
{
	IFILE_RDSTAT_NOOP,
	IFILE_RDSTAT_INPROG,
	IFILE_RDSTAT_DONE,
	IFILE_RDSTAT_FAIL,
	IFILE_RDSTAT_QUEUED,
	IFILE_RDSTAT_EXPIRED
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
};

enum HISStatus
{
	HIS_STATUS_INVALID_ID,
	HIS_STATUS_DONE,
	HIS_STATUS_IN_PROGRESS,
	HIS_STATUS_IN_QUEUE,
	HIS_STATUS_PARTIAL,
	HIS_STATUS_FAILED,
	HIS_STATUS_CANCELLED,
	HIS_STATUS_DMA_WAIT
};

struct HISFileIndexDebug
{
	int logicalSectorNumber;
	int size;
	int sizeInSectors;
	type_7 name;
};

enum xFileDriveType
{
	XFILE_DRIVE_CDVD,
	XFILE_DRIVE_CONSOLE_HD
};

enum xFileDriveStatus
{
	XFILE_TRAY_OPEN,
	XFILE_STOPPED,
	XFILE_SPINNING,
	XFILE_READING,
	XFILE_PAUSED,
	XFILE_SEEKING,
	XFILE_ERROR
};

struct HISRequestDebug
{
	_class small;
	int destination;
	int currentPriority;
	int originalPriority;
	int fileIndex;
	int startSector;
	int sectorsToRead;
};

union _class
{
	int nextRequest;
	HISStatus status;
	HISMemoryType destinationType;
};

struct AsyncRequest
{
	unsigned char inUse;
	int id;
	IFILE_READSECTOR_STATUS status;
	type_0 callback;
	tag_xFile* file;
	int framesLeft;
};

type_1 requests;
int num_open_files;
type_9 gHostPath;
int DVD;
type_6 ourGlobals;
type_5 iFileDebugMode;

void iFileAsyncService();
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int key, int* amtToFar);
void iFileReadStop();
int iFileReadAsync(tag_xFile* file, void* buf, unsigned int aSize, type_0 callback, int priority);
void iFileSetPath(char* path);
void iFileFullPath(char* relname, char* fullname);
unsigned int iFileGetSize(tag_xFile* file);
unsigned int iFileClose(tag_xFile* file);
unsigned int iFileRead(tag_xFile* file, void* buf, unsigned int size);
int iFileSeek(tag_xFile* file, int offset, int whence);
unsigned int iFileOpen(char* name, int flags, tag_xFile* file);
unsigned int* iFileLoad(char* name, unsigned int* buffer, unsigned int* size);
void iFileExit();
void iFileInit();
void iFileDebugMode();

// iFileAsyncService__Fv
// Start address: 0x1a9520
void iFileAsyncService()
{
	int i;
	HISStatus status;
}

// iFileReadAsyncStatus__FiPi
// Start address: 0x1a9650
IFILE_READSECTOR_STATUS iFileReadAsyncStatus(int key, int* amtToFar)
{
}

// iFileReadStop__Fv
// Start address: 0x1a96b0
void iFileReadStop()
{
	int i;
}

// iFileReadAsync__FP9tag_xFilePvUiPFP9tag_xFile_vi
// Start address: 0x1a9740
int iFileReadAsync(tag_xFile* file, void* buf, unsigned int aSize, type_0 callback, int priority)
{
	tag_iFile* ps;
	int i;
	int id;
}

// iFileSetPath__FPCc
// Start address: 0x1a9940
void iFileSetPath(char* path)
{
	unsigned int len;
}

// iFileFullPath__FPCcPc
// Start address: 0x1a99e0
void iFileFullPath(char* relname, char* fullname)
{
	type_3 temp;
}

// iFileGetSize__FP9tag_xFile
// Start address: 0x1a9aa0
unsigned int iFileGetSize(tag_xFile* file)
{
	int size;
	int pos;
	tag_iFile* ps;
	int rc;
}

// iFileClose__FP9tag_xFile
// Start address: 0x1a9ba0
unsigned int iFileClose(tag_xFile* file)
{
	tag_iFile* ps;
	int ret;
	int i;
}

// iFileRead__FP9tag_xFilePvUi
// Start address: 0x1a9cf0
unsigned int iFileRead(tag_xFile* file, void* buf, unsigned int size)
{
	tag_iFile* ps;
	int num;
}

// iFileSeek__FP9tag_xFileii
// Start address: 0x1a9dc0
int iFileSeek(tag_xFile* file, int offset, int whence)
{
	tag_iFile* ps;
	int position;
	int new_pos;
}

// iFileOpen__FPCciP9tag_xFile
// Start address: 0x1a9eb0
unsigned int iFileOpen(char* name, int flags, tag_xFile* file)
{
	tag_iFile* ps;
}

// iFileLoad__FPcPUiPUi
// Start address: 0x1a9fc0
unsigned int* iFileLoad(char* name, unsigned int* buffer, unsigned int* size)
{
	int index;
	int fileSize;
	int alignedSize;
}

// iFileExit__Fv
// Start address: 0x1aa0d0
void iFileExit()
{
}

// iFileInit__Fv
// Start address: 0x1aa0e0
void iFileInit()
{
	int hisVersion;
}

// iFileDebugMode__19@unnamed@iFile_cpp@Fv
// Start address: 0x1aa1e0
void iFileDebugMode()
{
	int id;
	HISRequestDebug requestDebug;
	HISFileIndexDebug fileIndexDebug;
	type_2 TYPES;
	type_10 STATUSES;
}

