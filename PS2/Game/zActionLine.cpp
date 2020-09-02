typedef struct RwRGBA;
typedef struct RwV3d;
typedef struct _tagActionLine;
typedef struct xVec3;
typedef struct RwRaster;
typedef struct RwTexture;
typedef union RxColorUnion;
typedef struct RxObjSpace3DVertex;
typedef struct RwTexDictionary;
typedef struct xMat3x3;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwLinkList;


typedef xVec3 type_0[4];
typedef _tagActionLine* type_1[8];
typedef char type_2[16];
typedef RxObjSpace3DVertex type_3[4];
typedef char type_4[16];
typedef char type_5[32];
typedef char type_6[32];

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct _tagActionLine
{
	unsigned int flags;
	type_0 pos;
	float time_left;
};

struct xVec3
{
	float x;
	float y;
	float z;
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

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_5 name;
	type_6 mask;
	unsigned int filterAddressing;
	int refCount;
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xMat3x3
{
	xVec3 right;
	int flags;
	xVec3 up;
	unsigned int pad1;
	xVec3 at;
	unsigned int pad2;
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

struct RwLinkList
{
	RwLLLink link;
};

type_2 buffer;
type_4 buffer;
type_1 sActionLine;
RwRaster* sActionLineRaster;
unsigned int gActiveHeap;

void zActionLineRender();
void RenderActionLine(_tagActionLine* l);
void zActionLineUpdate(float seconds);
void zActionLineInit();

// zActionLineRender__Fv
// Start address: 0x1a41d0
void zActionLineRender()
{
	int i;
}

// RenderActionLine__FP14_tagActionLine
// Start address: 0x1a4250
void RenderActionLine(_tagActionLine* l)
{
	RxObjSpace3DVertex* vert;
	int i;
	RwRGBA* _col;
	type_3 sStripVert;
}

// zActionLineUpdate__Ff
// Start address: 0x1a4310
void zActionLineUpdate(float seconds)
{
	int i;
	_tagActionLine* l;
}

// zActionLineInit__Fv
// Start address: 0x1a4380
void zActionLineInit()
{
	RwTexture* tex;
}

