typedef struct xJawDataTable;


typedef char type_0[16];
typedef char type_1[16];

struct xJawDataTable
{
	unsigned int soundHashID;
	unsigned int dataStart;
	unsigned int dataLength;
};

type_1 buffer;
type_0 buffer;

float xJaw_EvalData(void* data, float time);
void* xJaw_FindData(unsigned int soundID);

// xJaw_EvalData__FPvf
// Start address: 0x35d2c0
float xJaw_EvalData(void* data, float time)
{
	float lerp;
	int idx;
	int numdata;
	unsigned char* jawdata;
}

// xJaw_FindData__FUi
// Start address: 0x35d400
void* xJaw_FindData(unsigned int soundID)
{
	int i;
	int numJawTables;
	unsigned int j;
	void* data;
	unsigned int jawcount;
	xJawDataTable* tbl;
	void* rawdata;
}

