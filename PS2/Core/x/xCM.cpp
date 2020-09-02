typedef struct xCMcredits;
typedef struct xCMpreset;
typedef struct xCMhunk;
typedef struct xCMtexture;
typedef struct _class;
typedef struct xCMheader;
typedef struct RwTexture;
typedef struct sxy;
typedef struct xLinkAsset;
typedef struct RwRaster;
typedef struct fade;
typedef struct jot;
typedef struct split_tag;
typedef struct xtextbox;
typedef struct callback;
typedef struct tag_type;
typedef struct xBase;
typedef struct RwTexDictionary;
typedef struct xfont;
typedef struct basic_rect;
typedef struct xCreditsData;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct substr;
typedef struct xColorUnpack;
typedef struct iColor_tag;
typedef struct RwLinkList;
typedef struct xCMtextbox;

typedef void(*type_2)(jot&, xtextbox&, float, float);
typedef void(*type_3)(jot&, xtextbox&, xtextbox&);
typedef int(*type_4)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_6)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef xCMtextbox type_0[2];
typedef float type_1[4];
typedef char* type_5[5];
typedef char type_7[32];
typedef char type_8[32];
typedef char type_9[16];
typedef char type_10[16];

struct xCMcredits
{
	unsigned int credits_size;
	float len;
	unsigned int flags;
	sxy in;
	sxy out;
	float scroll_rate;
	float lifetime;
	fade fin;
	fade fout;
	unsigned int num_presets;
};

struct xCMpreset
{
	unsigned short num;
	unsigned short align;
	float delay;
	float innerspace;
	type_0 box;
};

struct xCMhunk
{
	unsigned int hunk_size;
	unsigned int preset;
	float t0;
	float t1;
	char* text1;
	char* text2;
};

struct xCMtexture
{
	unsigned int assetID;
	iColor_tag color;
	float x;
	float y;
	float w;
	float h;
	RwTexture* texture;
	unsigned int pad;
};

struct _class
{
	union
	{
		unsigned char invisible;
		unsigned char ethereal;
		unsigned char merge;
		unsigned char word_break;
		unsigned char word_end;
		unsigned char line_break;
		unsigned char stop;
		unsigned char tab;
	};
	union
	{
		unsigned char insert;
		unsigned char dynamic;
		unsigned char page_break;
		unsigned char stateful;
	};
	unsigned short dummy;
};

struct xCMheader
{
	unsigned int magic;
	unsigned int version;
	unsigned int crdID;
	unsigned int state;
	float total_time;
	unsigned int total_size;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_7 name;
	type_8 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct sxy
{
	float x;
	float y;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_1 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
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

struct fade
{
	float start;
	float end;
};

struct jot
{
	substr s;
	_class flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct xtextbox
{
	xfont font;
	basic_rect bounds;
	unsigned int flags;
	float line_space;
	float tab_stop;
	float left_indent;
	float right_indent;
	callback* cb;
	void* context;
	char** texts;
	unsigned int* text_sizes;
	unsigned int texts_size;
	substr text;
	unsigned int text_hash;
};

struct callback
{
	type_2 render;
	type_3 layout_update;
	type_3 render_update;
};

struct tag_type
{
	substr name;
	type_6 parse_tag;
	type_6 reset_tag;
	void* context;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_4 eventFunc;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct xfont
{
	unsigned int id;
	float width;
	float height;
	float space;
	iColor_tag color;
	basic_rect clip;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct xCreditsData
{
	unsigned int dummy;
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

struct substr
{
	char* text;
	unsigned int size;
};

struct xColorUnpack
{
	unsigned char a;
	unsigned char b;
	unsigned char g;
	unsigned char r;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct RwLinkList
{
	RwLLLink link;
};

struct xCMtextbox
{
	unsigned int font;
	iColor_tag color;
	sxy char_size;
	sxy char_spacing;
	sxy box;
};

type_9 buffer;
type_10 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
type_5 preset_names;
float dtscale;
float credits_time;
xCreditsData* credits_data;
unsigned int credits_parentID;
callback text_cb;

void xCMstop();
void xCMstart(xCreditsData* data, xBase* parent);
void xCMrender();
void xCMupdate(float dt);
unsigned int xCMrender(float time, xCreditsData* data);
void xCMprep(xCreditsData* data);

// xCMstop__Fv
// Start address: 0x3d5cd0
void xCMstop()
{
}

// xCMstart__FP12xCreditsDatafP5xBase
// Start address: 0x3d5d10
void xCMstart(xCreditsData* data, xBase* parent)
{
}

// xCMrender__Fv
// Start address: 0x3d5d30
void xCMrender()
{
}

// xCMupdate__Ff
// Start address: 0x3d5d40
void xCMupdate(float dt)
{
}

// xCMrender__FfP12xCreditsData
// Start address: 0x3d5db0
unsigned int xCMrender(float time, xCreditsData* data)
{
	xCMheader* hdr;
	char* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
	float a;
	xCMpreset* preset;
	float nx;
	float ny;
	float x0;
	float x1;
	float y0;
	float y1;
	float ca;
	xCMtexture* tex;
	basic_rect bounds;
	xtextbox tb;
	unsigned int alignL;
	unsigned int alignR;
	basic_rect bounds;
	xtextbox tb;
	basic_rect bounds;
	xtextbox tb;
}

// xCMprep__FP12xCreditsData
// Start address: 0x3d7110
void xCMprep(xCreditsData* data)
{
	xCMheader* hdr;
	char* dp;
	xCMcredits* cp;
	xCMpreset* pp;
	xCMhunk* hp;
}

