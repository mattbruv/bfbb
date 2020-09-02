typedef struct xBase;
typedef struct xDynAsset;
typedef struct xfont;
typedef struct widget;
typedef struct _anon0;
typedef struct asset;
typedef struct font_meter_asset;
typedef enum _enum;
typedef struct xLinkAsset;
typedef struct font_meter_widget;
typedef struct color32u;
typedef struct motive_node;
typedef struct xVec3;
typedef struct font_context;
typedef struct render_context;
typedef struct xVec2;
typedef struct meter_asset;
typedef struct xBaseAsset;
typedef struct basic_rect;
typedef struct _anon1;
typedef struct _class_0;
typedef struct _anon2;
typedef struct motive;
typedef struct meter_widget;
typedef struct sound_queue;
typedef struct _class_1;
typedef struct iColor_tag;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef unsigned char(*type_5)(widget&, motive&, float);

typedef char type_1[16];
typedef char* type_2[3];
typedef char type_3[12];
typedef unsigned int type_4[5];
typedef float type_6[4];
typedef char type_7[16];

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
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

struct widget
{
	_class_1 flag;
	render_context rc;
	render_context start_rc;
	asset* a;
	_enum activity;
	motive_node* _motive_top;
	motive_node* _motive_temp;
	motive_node** _motive_temp_tail;
};

struct _anon0
{
};

struct asset : xDynAsset
{
	xVec3 loc;
	xVec3 size;
};

struct font_meter_asset : meter_asset
{
	font_context font;
	unsigned char counter_mode;
	unsigned char pad1;
	unsigned char pad2;
	unsigned char pad3;
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_6 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct font_meter_widget : meter_widget
{
	font_context font;
	font_context start_font;
	int precision;
	xVec2 offset;
	type_3 buffer;
	int last_value;
	xfont xf;
};

struct color32u
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

struct motive_node
{
	motive m;
	motive_node* next;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct font_context
{
	unsigned int id;
	int justify;
	float w;
	float h;
	float space;
	float drop_x;
	float drop_y;
	color32u c;
	color32u drop_c;
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

struct xVec2
{
	float x;
	float y;
};

struct meter_asset : asset
{
	float start_value;
	float min_value;
	float max_value;
	float increment_time;
	float decrement_time;
	_class_0 sound;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct basic_rect
{
	float x;
	float y;
	float w;
	float h;
};

struct _anon1
{
};

struct _class_0
{
	unsigned int start_increment;
	unsigned int increment;
	unsigned int start_decrement;
	unsigned int decrement;
};

struct _anon2
{
};

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_5 fp_update;
	void* context;
	unsigned char inverse;
};

struct meter_widget : widget
{
	meter_asset& res;
	float value;
	float min_value;
	float max_value;
	float end_value;
	float value_vel;
	float value_accel;
	float ping_delay;
	float pitch;
	sound_queue pings;
};

struct sound_queue
{
	type_4 _playing;
	int head;
	int tail;
};

struct _class_1
{
	unsigned char visible;
	unsigned char enabled;
};

struct iColor_tag
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_7 buffer;
type_1 buffer;
_anon2 __vt__Q24xhud17font_meter_widget;
_anon0 __vt__Q24xhud6widget;
_anon1 __vt__Q24xhud12meter_widget;

void render(font_meter_widget* this);
void update(font_meter_widget* this, float dt);
unsigned char is(font_meter_widget* this, unsigned int id);
unsigned int type();
void destroy(font_meter_widget* this);
void load(xBase& data, xDynAsset& asset);

// render__Q24xhud17font_meter_widgetFv
// Start address: 0x2996c0
void render(font_meter_widget* this)
{
	float x;
	float y;
}

// update__Q24xhud17font_meter_widgetFf
// Start address: 0x2997d0
void update(font_meter_widget* this, float dt)
{
	float a;
	int new_value;
	font_meter_asset& fma;
	basic_rect bounds;
	type_2 format_text;
}

// is__Q24xhud17font_meter_widgetCFUi
// Start address: 0x299a70
unsigned char is(font_meter_widget* this, unsigned int id)
{
	unsigned int myid;
	char @3845;
}

// type__Q24xhud17font_meter_widgetCFv
// Start address: 0x299ae0
unsigned int type()
{
}

// destroy__Q24xhud17font_meter_widgetFv
// Start address: 0x299b20
void destroy(font_meter_widget* this)
{
}

// load__Q24xhud17font_meter_widgetFR5xBaseR9xDynAssetUi
// Start address: 0x299b30
void load(xBase& data, xDynAsset& asset)
{
}

