typedef struct VU0Block;


typedef VU0Block type[8];

struct VU0Block
{
	int parent;
	unsigned int size;
	void* address;
	unsigned int lru;
};

type blocks;
unsigned int lru;

void iVU0Reset();

// iVU0Reset__Fv
// Start address: 0x378830
void iVU0Reset()
{
	int i;
}

