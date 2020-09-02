typedef struct st_XORDEREDARRAY;

typedef int(*type_0)(void*, void*);
typedef int(*type_1)(void*, void*);


struct st_XORDEREDARRAY
{
	void** list;
	int cnt;
	int max;
	int warnlvl;
};

unsigned int gActiveHeap;

void XOrdSort(st_XORDEREDARRAY* array, type_0 test);
int XOrdLookup(st_XORDEREDARRAY* array, void* key, type_1 test);
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, int index);
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, type_0 compare);
void XOrdAppend(st_XORDEREDARRAY* array, void* elt);
void XOrdDone(st_XORDEREDARRAY* array, int wasTempAlloc);
void XOrdReset(st_XORDEREDARRAY* array);
void XOrdInit(st_XORDEREDARRAY* array, int size, int tempAlloc);

// XOrdSort__FP16st_XORDEREDARRAYPFPvPv_i
// Start address: 0x1f2e80
void XOrdSort(st_XORDEREDARRAY* array, type_0 test)
{
	void** list;
	int num;
	int i;
	int j;
	int h;
	void* v;
}

// XOrdLookup__FP16st_XORDEREDARRAYPCvPFPCvPv_i
// Start address: 0x1f2ff0
int XOrdLookup(st_XORDEREDARRAY* array, void* key, type_1 test)
{
	int da_idx;
	int k0;
	int k1;
	int k;
	int v;
}

// XOrdRemove__FP16st_XORDEREDARRAYPvi
// Start address: 0x1f30d0
void* XOrdRemove(st_XORDEREDARRAY* array, void* elt, int index)
{
	int i;
}

// XOrdInsert__FP16st_XORDEREDARRAYPvPFPvPv_i
// Start address: 0x1f31e0
void XOrdInsert(st_XORDEREDARRAY* array, void* elt, type_0 compare)
{
	int i;
}

// XOrdAppend__FP16st_XORDEREDARRAYPv
// Start address: 0x1f32b0
void XOrdAppend(st_XORDEREDARRAY* array, void* elt)
{
}

// XOrdDone__FP16st_XORDEREDARRAYi
// Start address: 0x1f32e0
void XOrdDone(st_XORDEREDARRAY* array, int wasTempAlloc)
{
}

// XOrdReset__FP16st_XORDEREDARRAY
// Start address: 0x1f3330
void XOrdReset(st_XORDEREDARRAY* array)
{
}

// XOrdInit__FP16st_XORDEREDARRAYii
// Start address: 0x1f3340
void XOrdInit(st_XORDEREDARRAY* array, int size, int tempAlloc)
{
}

