typedef struct xVolumeAsset;
typedef struct xBase;
typedef struct xQCData;
typedef struct xBBox;
typedef struct xSerial;
typedef struct xLinkAsset;
typedef struct xVolume;
typedef struct xVec3;
typedef struct xBaseAsset;
typedef struct xBound;
typedef struct xMat4x3;
typedef struct xSphere;
typedef struct xCylinder;
typedef struct xBox;
typedef struct xMat3x3;

typedef int(*type_0)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef unsigned char type_1[3];
typedef float type_2[4];

struct xVolumeAsset : xBaseAsset
{
	unsigned int flags;
	xBound bound;
	float rot;
	float xpivot;
	float zpivot;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_0 eventFunc;
};

struct xQCData
{
	char xmin;
	char ymin;
	char zmin;
	char zmin_dup;
	char xmax;
	char ymax;
	char zmax;
	char zmax_dup;
	xVec3 min;
	xVec3 max;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xSerial
{
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

struct xVolume : xBase
{
	xVolumeAsset* asset;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
};

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type_1 pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct xCylinder
{
	xVec3 center;
	float r;
	float h;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
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


xBound* GetBound(xVolume* this);
void Load(xVolume* this, xSerial* s);
void Save(xVolume* this, xSerial* s);
void Reset(xVolume* this);
void Init(xVolume* this, xVolumeAsset* asset);

// GetBound__7xVolumeFv
// Start address: 0x2fe2f0
xBound* GetBound(xVolume* this)
{
}

// Load__7xVolumeFP7xSerial
// Start address: 0x2fe300
void Load(xVolume* this, xSerial* s)
{
}

// Save__7xVolumeFP7xSerial
// Start address: 0x2fe310
void Save(xVolume* this, xSerial* s)
{
}

// Reset__7xVolumeFv
// Start address: 0x2fe320
void Reset(xVolume* this)
{
}

// Init__7xVolumeFP12xVolumeAsset
// Start address: 0x2fe330
void Init(xVolume* this, xVolumeAsset* asset)
{
}

