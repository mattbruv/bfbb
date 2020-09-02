typedef struct motive_node;
typedef struct widget;
typedef struct xBase;
typedef struct xBaseAsset;
typedef struct render_context;
typedef struct meter_asset;
typedef struct meter_widget;
typedef struct basic_rect;
typedef struct asset;
typedef struct xVec3;
typedef struct _class_0;
typedef struct motive;
typedef struct xLinkAsset;
typedef struct _anon0;
typedef struct _class_1;
typedef struct xDynAsset;
typedef struct _anon1;
typedef enum _enum;
typedef struct sound_queue;

typedef unsigned char(*type_1)(widget&, motive&, float);
typedef int(*type_5)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef unsigned int type_0[5];
typedef float type_2[4];
typedef char type_3[16];
typedef char type_4[16];

struct motive_node
{
	motive m;
	motive_node* next;
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

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_5 eventFunc;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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

struct meter_asset : asset
{
	float start_value;
	float min_value;
	float max_value;
	float increment_time;
	float decrement_time;
	_class_0 sound;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct _class_0
{
	unsigned int start_increment;
	unsigned int increment;
	unsigned int start_decrement;
	unsigned int decrement;
};

struct motive
{
	float* value;
	float delta;
	float start_delta;
	float max_offset;
	float offset;
	float accel;
	type_1 fp_update;
	void* context;
	unsigned char inverse;
};

struct xLinkAsset
{
	unsigned short srcEvent;
	unsigned short dstEvent;
	unsigned int dstAssetID;
	type_2 param;
	unsigned int paramWidgetAssetID;
	unsigned int chkAssetID;
};

struct _anon0
{
};

struct _class_1
{
	unsigned char visible;
	unsigned char enabled;
};

struct xDynAsset : xBaseAsset
{
	unsigned int type;
	unsigned short version;
	unsigned short handle;
};

struct _anon1
{
};

enum _enum
{
	ACT_NONE,
	ACT_SHOW,
	ACT_HIDE,
	MAX_ACT
};

struct sound_queue
{
	type_0 _playing;
	int head;
	int tail;
};

basic_rect screen_bounds;
basic_rect default_adjust;
type_3 buffer;
type_4 buffer;
_anon0 __vt__Q24xhud12meter_widget;
_anon1 __vt__Q24xhud6widget;

void updater(meter_widget* this, float dt);
unsigned char is(meter_widget* this, unsigned int id);
unsigned int type();
void destruct(meter_widget* this);
void* __ct(meter_widget* this, meter_asset& a);
void set_value_immediate(meter_widget* this, float v);
void set_value(meter_widget* this, float v);

// updater__Q24xhud12meter_widgetFf
// Start address: 0x299cb0
void updater(meter_widget* this, float dt)
{
	float old_value;
	float pitch;
	float min_ping_time;
	float pitch;
	float min_ping_time;
}

// is__Q24xhud12meter_widgetCFUi
// Start address: 0x29a050
unsigned char is(meter_widget* this, unsigned int id)
{
	unsigned int myid;
	char @3750;
}

// type__Q24xhud12meter_widgetCFv
// Start address: 0x29a0c0
unsigned int type()
{
}

// destruct__Q24xhud12meter_widgetFv
// Start address: 0x29a100
void destruct(meter_widget* this)
{
}

// __ct__Q24xhud12meter_widgetFRCQ24xhud11meter_asset
// Start address: 0x29a110
void* __ct(meter_widget* this, meter_asset& a)
{
}

// set_value_immediate__Q24xhud12meter_widgetFf
// Start address: 0x29a190
void set_value_immediate(meter_widget* this, float v)
{
}

// set_value__Q24xhud12meter_widgetFf
// Start address: 0x29a1a0
void set_value(meter_widget* this, float v)
{
	float dvalue;
	float sign;
}

