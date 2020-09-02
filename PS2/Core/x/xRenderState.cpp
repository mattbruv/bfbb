typedef struct RwTexture;
typedef struct RwLinkList;
typedef struct RwRaster;
typedef struct RwTexDictionary;
typedef struct RwObject;
typedef struct RwLLLink;


typedef int type_0[11];
typedef char type_1[16];
typedef char type_2[16];
typedef char type_3[32];
typedef char type_4[32];

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_3 name;
	type_4 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct RwLinkList
{
	RwLLLink link;
};

struct RwRaster
{
	RwRaster* parent;
	unsigned char* cpPixels;
	unsigned char* palette;
	int width;
	int height;
	int depth;
	int stride;
	short nOffsetX;
	short nOffsetY;
	unsigned char cType;
	unsigned char cFlags;
	unsigned char privateFlags;
	unsigned char cFormat;
	unsigned char* originalPixels;
	int originalWidth;
	int originalHeight;
	int originalStride;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct RwObject
{
	unsigned char type;
	unsigned char subType;
	unsigned char flags;
	unsigned char privateFlags;
	void* parent;
};

struct RwLLLink
{
	RwLLLink* next;
	RwLLLink* prev;
};

type_1 buffer;
type_2 buffer;
type_0 sBlendTable;

void xRenderStateSetDstBlendMode(int xmode);
void xRenderStateSetSrcBlendMode(int xmode);
void xRenderStateSetTexture(RwTexture* texture);

// xRenderStateSetDstBlendMode__Fi
// Start address: 0x301890
void xRenderStateSetDstBlendMode(int xmode)
{
}

// xRenderStateSetSrcBlendMode__Fi
// Start address: 0x3018b0
void xRenderStateSetSrcBlendMode(int xmode)
{
}

// xRenderStateSetTexture__FP9RwTexture
// Start address: 0x3018d0
void xRenderStateSetTexture(RwTexture* texture)
{
	RwRaster* raster;
}

