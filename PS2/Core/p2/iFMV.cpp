typedef struct RwResEntry;
typedef struct RwLLLink;

typedef void(*type)(RwResEntry*);


struct RwResEntry
{
	RwLLLink link;
	int size;
	void* owner;
	RwResEntry** ownerRef;
	type destroyNotify;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};


unsigned int iFMVPlay(char* filename, unsigned int buttons, float time);

// iFMVPlay__FPcUifbb
// Start address: 0x1aa330
unsigned int iFMVPlay(char* filename, unsigned int buttons, float time)
{
	RwResEntry* repEntry;
	RwResEntry* repEntryOwner;
}

