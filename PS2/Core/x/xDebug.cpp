typedef struct _class;
typedef struct xSB;
typedef struct jot;
typedef struct split_tag;
typedef struct xtextbox;
typedef struct callback;
typedef struct tag_type;
typedef struct xfont;
typedef struct basic_rect;
typedef struct iColor_tag;
typedef struct substr;

typedef void(*type_0)(jot&, xtextbox&, float, float);
typedef void(*type_1)(jot&, xtextbox&, xtextbox&);
typedef void(*type_4)(jot&, xtextbox&, xtextbox&, split_tag&);

typedef char type_2[16];
typedef char type_3[16];
typedef char type_5[32];
typedef type_5 type_6[35];
typedef unsigned int type_7[4096];

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

struct xSB
{
	char* buf;
	unsigned int max;
	char* cur;
	char* disp;
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
	type_0 render;
	type_1 layout_update;
	type_1 render_update;
};

struct tag_type
{
	substr name;
	type_4 parse_tag;
	type_4 reset_tag;
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

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct substr
{
	char* text;
	unsigned int size;
};

type_2 buffer;
type_3 buffer;
basic_rect screen_bounds;
basic_rect default_adjust;
type_6 xStatsFieldName;
unsigned int gFrameCount;
callback text_cb;
iColor_tag g_WHITE;
type_7 ourGlobals;

void xDebugTimestampScreen();
void xDebugExit();
void xDebugUpdate();
void xDebugInit();
int xDebugModeAdd();
void xprintf();

// xDebugTimestampScreen__Fv
// Start address: 0x1d0bb0
void xDebugTimestampScreen()
{
}

// xDebugExit__Fv
// Start address: 0x1d0bc0
void xDebugExit()
{
}

// xDebugUpdate__Fv
// Start address: 0x1d0bd0
void xDebugUpdate()
{
}

// xDebugInit__Fv
// Start address: 0x1d0be0
void xDebugInit()
{
}

// xDebugModeAdd__FPCcPFv_v
// Start address: 0x1d0bf0
int xDebugModeAdd()
{
}

// xprintf__FPCce
// Start address: 0x1d0c00
void xprintf()
{
}

