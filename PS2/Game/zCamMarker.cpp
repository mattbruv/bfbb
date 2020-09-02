typedef struct xCamAsset;
typedef struct zCamMarker;
typedef struct xSerial;
typedef struct _tagxCamFollowAsset;
typedef struct xBase;
typedef struct xVec3;
typedef struct _tagxCamShoulderAsset;
typedef struct xLinkAsset;
typedef struct xBaseAsset;
typedef struct _tagp2CamStaticAsset;
typedef struct _tagp2CamStaticFollowAsset;
typedef enum _tagTransType;
typedef struct _tagxCamPathAsset;

typedef int(*type_1)(xBase*, xBase*, unsigned int, float*, xBase*);
typedef int(*type_4)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[4];
typedef unsigned int type_2[2];
typedef unsigned char type_3[3];

struct xCamAsset : xBaseAsset
{
	xVec3 pos;
	xVec3 at;
	xVec3 up;
	xVec3 right;
	xVec3 view_offset;
	short offset_start_frames;
	short offset_end_frames;
	float fov;
	float trans_time;
	_tagTransType trans_type;
	unsigned int flags;
	float fade_up;
	float fade_down;
	union
	{
		_tagxCamFollowAsset cam_follow;
		_tagxCamShoulderAsset cam_shoulder;
		_tagp2CamStaticAsset cam_static;
		_tagxCamPathAsset cam_path;
		_tagp2CamStaticFollowAsset cam_staticFollow;
	};
	unsigned int valid_flags;
	type_2 markerid;
	unsigned char cam_type;
	type_3 pad;
};

struct zCamMarker : xBase
{
	xCamAsset* asset;
};

struct xSerial
{
};

struct _tagxCamFollowAsset
{
	float rotation;
	float distance;
	float height;
	float rubber_band;
	float start_speed;
	float end_speed;
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

struct xVec3
{
	float x;
	float y;
	float z;
};

struct _tagxCamShoulderAsset
{
	float distance;
	float height;
	float realign_speed;
	float realign_delay;
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

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct _tagp2CamStaticAsset
{
	unsigned int unused;
};

struct _tagp2CamStaticFollowAsset
{
	float rubber_band;
};

enum _tagTransType
{
	eTransType_None,
	eTransType_Interp1,
	eTransType_Interp2,
	eTransType_Interp3,
	eTransType_Interp4,
	eTransType_Linear,
	eTransType_Interp1Rev,
	eTransType_Interp2Rev,
	eTransType_Interp3Rev,
	eTransType_Interp4Rev,
	eTransType_Total
};

struct _tagxCamPathAsset
{
	unsigned int assetID;
	float time_end;
	float time_delay;
};

type_4 zCamMarkerEventCB;

int zCamMarkerEventCB(xBase* to, unsigned int toEvent, float* toParam);
void zCamMarkerLoad(zCamMarker* m, xSerial* s);
void zCamMarkerSave(zCamMarker* m, xSerial* s);
void zCamMarkerInit(xBase* b, xCamAsset* asset);

// zCamMarkerEventCB__FP5xBaseP5xBaseUiPCfP5xBase
// Start address: 0x310910
int zCamMarkerEventCB(xBase* to, unsigned int toEvent, float* toParam)
{
}

// zCamMarkerLoad__FP10zCamMarkerP7xSerial
// Start address: 0x310990
void zCamMarkerLoad(zCamMarker* m, xSerial* s)
{
}

// zCamMarkerSave__FP10zCamMarkerP7xSerial
// Start address: 0x3109a0
void zCamMarkerSave(zCamMarker* m, xSerial* s)
{
}

// zCamMarkerInit__FP5xBaseP9xCamAsset
// Start address: 0x3109b0
void zCamMarkerInit(xBase* b, xCamAsset* asset)
{
}

