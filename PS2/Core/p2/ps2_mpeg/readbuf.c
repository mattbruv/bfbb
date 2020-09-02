typedef struct ReadBuf;


typedef unsigned char type[327680];

struct ReadBuf
{
	type data;
	int put;
	int count;
	int size;
};


int readBufEndGet(ReadBuf* b, int size);
int readBufBeginGet(ReadBuf* b, unsigned char** ptr);
int readBufEndPut(ReadBuf* b, int size);
int readBufBeginPut(ReadBuf* b, unsigned char** ptr);
void readBufDelete();
void readBufCreate(ReadBuf* b);

// readBufEndGet__FP7ReadBufi
// Start address: 0x1bd820
int readBufEndGet(ReadBuf* b, int size)
{
}

// readBufBeginGet__FP7ReadBufPPUc
// Start address: 0x1bd870
int readBufBeginGet(ReadBuf* b, unsigned char** ptr)
{
}

// readBufEndPut__FP7ReadBufi
// Start address: 0x1bd8d0
int readBufEndPut(ReadBuf* b, int size)
{
}

// readBufBeginPut__FP7ReadBufPPUc
// Start address: 0x1bd960
int readBufBeginPut(ReadBuf* b, unsigned char** ptr)
{
	int size;
}

// readBufDelete__FP7ReadBuf
// Start address: 0x1bd9a0
void readBufDelete()
{
}

// readBufCreate__FP7ReadBuf
// Start address: 0x1bd9b0
void readBufCreate(ReadBuf* b)
{
}

