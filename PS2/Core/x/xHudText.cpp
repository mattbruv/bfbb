typedef struct xtextbox;
typedef struct _class_0;
typedef struct split_tag;
typedef struct xTextAsset;
typedef struct tag_type;
typedef struct callback;
typedef struct motive_node;
typedef enum _enum_0;
typedef struct widget;
typedef enum _enum_1;
typedef struct ztextbox;
typedef struct xBase;
typedef struct text_widget;
typedef struct xVec3;
typedef struct render_context;
typedef union _class_1;
typedef struct RwRaster;
typedef struct substr;
typedef struct xBaseAsset;
typedef struct xfont;
typedef struct basic_rect;
typedef struct asset;
typedef struct _class_2;
typedef struct asset_type;
typedef struct _class_3;
typedef struct motive;
typedef struct xLinkAsset;
typedef struct color_type;
typedef struct xDynAsset;
typedef struct text_asset;
typedef struct jot;
typedef struct _class_4;
typedef struct _class_5;
typedef struct _class_6;
typedef struct _anon0;
typedef struct iColor_tag;
typedef struct _anon1;
typedef enum _enum_2;

typedef void(*type_0)(jot&, xtextbox&, xtextbox&);
typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef void(*type_2)(jot&, xtextbox&, xtextbox&, split_tag&);
typedef unsigned char(*type_4)(widget&, motive&, float);
typedef void(*type_7)(jot&, xtextbox&, float, float);

typedef char* type_3[16];
typedef float type_5[4];
typedef char type_6[16];
typedef char type_8[128];
typedef char type_9[16];

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

struct _class_0
{
	float left;
	float top;
	float right;
	float bottom;
};

struct split_tag
{
	substr tag;
	substr name;
	substr action;
	substr value;
};

struct xTextAsset
{
	unsigned int len;
};

struct tag_type
{
	substr name;
	type_2 parse_tag;
	type_2 reset_tag;
	void* context;
};

struct callback
{
	type_7 render;
	type_0 layout_update;
	type_0 render_update;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

enum _enum_0
{
	XJ_LEFT,
	XJ_CENTER,
	XJ_RIGHT
};

struct widget
{
	_class_5 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum_2 activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

enum _enum_1
{
	EX_UP,
	EX_CENTER,
	EX_DOWN,
	MAX_EX
};

struct ztextbox : xBase
{
	_class_1 flag;
	asset_type* asset;
	xtextbox tb;
	type_3 segments;
	unsigned int segments_size;
	ztextbox* next;
	ztextbox* prev;
	RwRaster* bgtex;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_1 eventFunc;
};

struct text_widget : widget
{
	type_8 text;
	xtextbox tb;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct render_context
{
	xVec3 loc;
	xVec3 size;
	xVec3 rot;
	float r;
	float g;
	float b;
	float a;
};

union _class_1
{
	unsigned char active;
	unsigned char dirty;
	unsigned char show_backdrop;
	unsigned char visible;
	unsigned char hack_invisible;
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

struct substr
{
	char* text;
	unsigned int size;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct _class_2
{
	unsigned int type;
	color_type color;
	unsigned int texture;
};

struct asset_type : xDynAsset
{
	unsigned int text;
	basic_rect bounds;
	unsigned int font;
	_class_4 size;
	_class_6 space;
	color_type color;
	_class_0 inset;
	_enum_0 xjustify;
	_enum_1 expand;
	float max_height;
	_class_2 backdrop;
};

struct _class_3
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

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_4 fp_update;
	void* context;
	unsigned char inverse;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_5 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct color_type
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct text_asset : asset
{
	unsigned int text_box;
	unsigned int text;
};

struct jot
{
	substr s;
	_class_3 flag;
	unsigned short context_size;
	void* context;
	basic_rect bounds;
	basic_rect render_bounds;
	callback* cb;
	tag_type* tag;
};

struct _class_4
{
	float width;
	float height;
};

struct _class_5
{
	unsigned char visible;
	unsigned char enabled;
};

struct _class_6
{
	float x;
	float y;
};

struct _anon0
{
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct _anon1
{
};

enum _enum_2
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_6 buffer;
type_9 buffer;
_anon0 __vt__Q24xhud11text_widget;
callback text_cb;
iColor_tag g_WHITE;
_anon1 __vt__Q24xhud6widget;

void render(text_widget* this);
void update(text_widget* this, float dt);
unsigned char is(text_widget* this, unsigned int id);
unsigned int type();
void destroy(text_widget* this);
void setup(text_widget* this);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud11text_widgetFv
// Start address: 0x3d5490
void render(text_widget* this)
{
	float x;
	float y;
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
	float floatA;
	unsigned char newA;
}

// update__Q24xhud11text_widgetFf
// Start address: 0x3d5660
void update(text_widget* this, float dt)
{
}

// is__Q24xhud11text_widgetCFUi
// Start address: 0x3d5840
unsigned char is(text_widget* this, unsigned int id)
{
	unsigned int myid;
	char @3835;
}

// type__Q24xhud11text_widgetCFv
// Start address: 0x3d58b0
unsigned int type()
{
}

// destroy__Q24xhud11text_widgetFv
// Start address: 0x3d58f0
void destroy(text_widget* this)
{
}

// setup__Q24xhud11text_widgetFv
// Start address: 0x3d5900
void setup(text_widget* this)
{
	text_asset& ta;
	ztextbox* ztb;
	xTextAsset* t;
	char* s;
	unsigned int len;
}

// load__Q24xhud11text_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x3d5c70
void load(xBase& data, xDynAsset& asset)
{
}

