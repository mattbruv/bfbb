typedef struct StrFile;
typedef enum HISStatus;



struct StrFile
{
	int file;
	int size;
	int current;
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


int strFileRead(StrFile* file, void* buff, int size);
int strFileClose();
int strFileOpen(StrFile* file, char* filename);

// strFileRead__FP7StrFilePvi
// Start address: 0x1bd9e0
int strFileRead(StrFile* file, void* buff, int size)
{
	int blocksToRead;
	int id;
	HISStatus status;
}

// strFileClose__FP7StrFile
// Start address: 0x1bdb10
int strFileClose()
{
}

// strFileOpen__FP7StrFilePc
// Start address: 0x1bdb20
int strFileOpen(StrFile* file, char* filename)
{
}

