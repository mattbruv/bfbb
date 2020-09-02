typedef struct xMemArea_tag;
typedef struct xMemInfo_tag;



struct xMemArea_tag
{
	unsigned int addr;
	unsigned int size;
	unsigned int flags;
};

struct xMemInfo_tag
{
	xMemArea_tag system;
	xMemArea_tag stack;
	xMemArea_tag DRAM;
	xMemArea_tag SRAM;
};

unsigned int StackBase;
unsigned int StackSize;
xMemInfo_tag gMemInfo;
char _stack;
char _heap_size;
char _stack_size;
char _end;
char _memtop;
char __data_start;

void iMemExit();
void iMemInit();

// iMemExit__Fv
// Start address: 0x1aca60
void iMemExit()
{
}

// iMemInit__Fv
// Start address: 0x1aca90
void iMemInit()
{
	unsigned int MemBase;
	unsigned int MemTop;
	unsigned int HeapBase;
	unsigned int malloc_max;
	void* p;
}

