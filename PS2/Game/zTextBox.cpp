typedef struct ztextbox;
typedef struct RwTexture;
typedef struct xBase;
typedef struct xDynAsset;
typedef struct asset_type;
typedef struct iColor_tag;
typedef struct RwRGBAReal;
typedef struct RwLinkList;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct _class_0;
typedef struct jot;
typedef struct RwSky2DVertex;
typedef struct RwV3d;
typedef struct xTextAsset;
typedef struct split_tag;
typedef struct RwRaster;
typedef struct xtextbox;
typedef struct xLinkAsset;
typedef struct callback;
typedef struct color_type;
typedef struct tag_type;
typedef struct xfont;
typedef struct xBaseAsset;
typedef struct _class_1;
typedef struct _class_2;
typedef struct _class_3;
typedef struct RwTexDictionary;
typedef struct substr;
typedef struct RwObject;
typedef struct RwLLLink;
typedef enum _enum_0;
typedef struct basic_rect;
typedef struct RwSky2DVertexFields;
typedef enum _enum_1;
typedef struct _class_4;
typedef union _class_5;

typedef int(*type_5)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_6)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_7)(ztextbox&);
typedef void(*type_8)(jot&, xtextbox&, float, float);
typedef void(*type_10)(jot&, xtextbox&, xtextbox&);
typedef void(*type_11)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef float type_0[4];
typedef <unknown type (0xa510)> type_1[4];
typedef tag_type type_2[1];
typedef char* type_3[16];
typedef unsigned int type_4[3];
typedef type_7 type_9[3];
typedef RwSky2DVertex type_12[6];
typedef char type_13[16];
typedef char type_14[16];
typedef unsigned int type_15[4096];
typedef char type_16[32];
typedef char type_17[32];

struct ztextbox : xBase
{
	_class_5 flag;
	asset_type* asset;
	xtextbox tb;
	type_3 segments;
	unsigned int segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
};

struct RwTexture
{
	RwRaster* raster;
	RwTexDictionary* dict;
	RwLLLink lInDictionary;
	type_16 name;
	type_17 mask;
	unsigned int filterAddressing;
	int refCount;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct asset_type : xDynAsset
{
	unsigned int text;
	basic_rect bounds;
	unsigned int font;
	_class_1 size;
	_class_2 space;
	color_type color;
	_class_3 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float max_height;
	_class_0 backdrop;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwLinkList
{
	RwLLLink link;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_1 qWords;
};

struct _class_0
{
	unsigned int type;
	color_type color;
	unsigned int texture;
};

struct jot
{
	substr s;
	_class_4 flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct xTextAsset
{
	unsigned int len;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
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

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_0 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct callback
{
	type_8 render;
	type_10 layout_update;
	type_10 render_update;
};

struct color_type
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct tag_type
{
	substr name;
	type_11 parse_tag;
	type_11 reset_tag;
	void* context;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct _class_1
{
	float width;
	float height;
};

struct _class_2
{
	float x;
	float y;
};

struct _class_3
{
	float left;
	float top;
	float right;
	float bottom;
};

struct RwTexDictionary
{
	RwObject object;
	RwLinkList texturesInDict;
	RwLLLink lInInstance;
};

struct substr
{
	char* text;
	unsigned int size;
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

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float camVertex_z;
	float u;
	float v;
	float recipZ;
	float pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float pad2;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct _class_4
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

union _class_5
{
	unsigned char active;
	unsigned char dirty;
	unsigned char show_backdrop;
	unsigned char visible;
	unsigned char hack_invisible;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_13 buffer;
type_14 buffer;
ztextbox* head_active;
type_9 render_bk_table;
type_2 new_tags;
unsigned int new_tags_size;
type_6 cb_dispatch;
type_15 ourGlobals;

void render_all();
void update_all();
void load(xBase& data, xDynAsset& asset);
void init();
void get_text(ztextbox* this, char* buffer, unsigned int buffer_size);
void refresh(ztextbox* this);
void clear_text(ztextbox* this);
void add_text(ztextbox* this, char* s);
void set_text(ztextbox* this, unsigned int id);
void set_text(ztextbox* this, char* s);
void deactivate(ztextbox* this);
void activate(ztextbox* this);
void render_backdrop(ztextbox* this);
void reset(ztextbox* this);
void load(ztextbox* this, asset_type& a);
int cb_dispatch(xBase* to, unsigned int event, float* argf);
void parse_tag_blahblah();
void init_textbox(ztextbox& e);
void render_bk_tex_wrap();
void render_bk_tex_scale(ztextbox& e);
void render_bk_fill(ztextbox& e);

// render_all__8ztextboxFv
// Start address: 0x3226a0
void render_all()
{
	ztextbox* it;
}

// update_all__8ztextboxFR6xScenef
// Start address: 0x322770
void update_all()
{
	ztextbox* it;
}

// load__8ztextboxFR5xBaseR9xDynAssetUi
// Start address: 0x3227a0
void load(xBase& data, xDynAsset& asset)
{
}

// init__8ztextboxFv
// Start address: 0x3227b0
void init()
{
}

// get_text__8ztextboxCFPcUi
// Start address: 0x3227e0
void get_text(ztextbox* this, char* buffer, unsigned int buffer_size)
{
	char** it;
	char** end;
	char* s;
	unsigned int len;
}

// refresh__8ztextboxFv
// Start address: 0x3228a0
void refresh(ztextbox* this)
{
}

// clear_text__8ztextboxFv
// Start address: 0x322900
void clear_text(ztextbox* this)
{
}

// add_text__8ztextboxFPCc
// Start address: 0x322920
void add_text(ztextbox* this, char* s)
{
}

// set_text__8ztextboxFUi
// Start address: 0x322970
void set_text(ztextbox* this, unsigned int id)
{
	xTextAsset* ta;
}

// set_text__8ztextboxFPCc
// Start address: 0x322a20
void set_text(ztextbox* this, char* s)
{
}

// deactivate__8ztextboxFv
// Start address: 0x322a80
void deactivate(ztextbox* this)
{
}

// activate__8ztextboxFv
// Start address: 0x322b10
void activate(ztextbox* this)
{
}

// render_backdrop__8ztextboxFv
// Start address: 0x322b80
void render_backdrop(ztextbox* this)
{
}

// reset__8ztextboxFv
// Start address: 0x322bd0
void reset(ztextbox* this)
{
}

// load__8ztextboxFRCQ28ztextbox10asset_type
// Start address: 0x322d40
void load(ztextbox* this, asset_type& a)
{
	RwTexture* tex;
}

// cb_dispatch__22@unnamed@zTextBox_cpp@FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x322df0
int cb_dispatch(xBase* to, unsigned int event, float* argf)
{
	ztextbox& e;
}

// parse_tag_blahblah__22@unnamed@zTextBox_cpp@FRQ28xtextbox3jotRC8xtextboxRC8xtextboxRCQ28xtextbox9split_tag
// Start address: 0x323170
void parse_tag_blahblah()
{
}

// init_textbox__22@unnamed@zTextBox_cpp@FR8ztextbox
// Start address: 0x323180
void init_textbox(ztextbox& e)
{
	asset_type& a;
	int lines;
	float minh;
	float maxh;
	float hmore;
	type_4 xjlookup;
}

// render_bk_tex_wrap__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x3233f0
void render_bk_tex_wrap()
{
}

// render_bk_tex_scale__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x323400
void render_bk_tex_scale(ztextbox& e)
{
	float rcz;
	float nsz;
	basic_rect r;
	type_12 vert;
}

// render_bk_fill__22@unnamed@zTextBox_cpp@FRC8ztextbox
// Start address: 0x323a20
void render_bk_fill(ztextbox& e)
{
	asset_type& a;
}

