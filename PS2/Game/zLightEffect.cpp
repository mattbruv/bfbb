typedef struct iLight;
typedef struct xLinkAsset;
typedef struct RwObjectHasFrame;
typedef struct RpLight;
typedef struct _zLight;
typedef struct _xFColor;
typedef struct xVec3;
typedef struct xBase;
typedef struct zLightAsset;
typedef struct xSphere;
typedef struct xBaseAsset;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwRGBAReal;
typedef struct RwLinkList;

typedef RwObjectHasFrame*(*type_1)(RwObjectHasFrame*);
typedef int(*type_3)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef float type_0[4];
typedef float type_2[4];
typedef unsigned char type_4[2];

struct iLight
{
	unsigned int type;
	RpLight* hw;
	xSphere sph;
	float radius_sq;
	_xFColor color;
	xVec3 dir;
	float coneangle;
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

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_1 sync;
};

struct RpLight
{
	RwObjectHasFrame object;
	float radius;
	RwRGBAReal color;
	float minusCosAngle;
	RwLinkList WorldSectorsInLight;
	RwLLLink inWorld;
	unsigned short lightFrame;
	unsigned short pad;
};

struct _zLight : xBase
{
	unsigned int flags;
	zLightAsset* tasset;
	iLight light;
	xBase* attached_to;
	int true_idx;
	float* reg;
	int effect_idx;
};

struct _xFColor
{
	float r;
	float g;
	float b;
	float a;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_3 eventFunc;
};

struct zLightAsset : xBaseAsset
{
	unsigned char lightType;
	unsigned char lightEffect;
	type_4 lightPad;
	unsigned int lightFlags;
	type_0 lightColor;
	xVec3 lightDir;
	float lightConeAngle;
	xSphere lightSphere;
	unsigned int attachID;
};

struct xSphere
{
	xVec3 center;
	float r;
};

struct xBaseAsset
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
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


void zLightEffectCauldron(_zLight* zlight, float seconds);
void zLightEffectInitCauldron(_zLight* zlight);
void zLightEffectRandomColFast();
void zLightEffectRandomCol();
void zLightEffectRandomColSlow();
void zLightEffectHalfDimFast();
void zLightEffectHalfDim();
void zLightEffectHalfDimSlow();
void zLightEffectDimFast();
void zLightEffectDim();
void zLightEffectDimSlow();
void zLightEffectStrobeFast();
void zLightEffectStrobe();
void zLightEffectStrobeSlow();
void zLightEffectFlickerErratic(_zLight* zlight, float seconds);
void zLightEffectFlickerSlow(_zLight* zlight, float seconds);
void zLightEffectFlicker(_zLight* zlight, float seconds);
void EffectFlicker(_zLight* zlight, float seconds, float min, float rnd);
void zLightEffectInitFlicker(_zLight* zlight);
void zLightEffectInitRandomCol();
void zLightEffectInitHalfDim();
void zLightEffectInitDim();
void zLightEffectInitStrobe();

// zLightEffectCauldron__FP7_zLightf
// Start address: 0x180e10
void zLightEffectCauldron(_zLight* zlight, float seconds)
{
	iLight* l;
	float* reg;
	float amount;
}

// zLightEffectInitCauldron__FP7_zLight
// Start address: 0x181090
void zLightEffectInitCauldron(_zLight* zlight)
{
}

// zLightEffectRandomColFast__FP7_zLightf
// Start address: 0x1810a0
void zLightEffectRandomColFast()
{
}

// zLightEffectRandomCol__FP7_zLightf
// Start address: 0x1810b0
void zLightEffectRandomCol()
{
}

// zLightEffectRandomColSlow__FP7_zLightf
// Start address: 0x1810c0
void zLightEffectRandomColSlow()
{
}

// zLightEffectHalfDimFast__FP7_zLightf
// Start address: 0x1810d0
void zLightEffectHalfDimFast()
{
}

// zLightEffectHalfDim__FP7_zLightf
// Start address: 0x1810e0
void zLightEffectHalfDim()
{
}

// zLightEffectHalfDimSlow__FP7_zLightf
// Start address: 0x1810f0
void zLightEffectHalfDimSlow()
{
}

// zLightEffectDimFast__FP7_zLightf
// Start address: 0x181100
void zLightEffectDimFast()
{
}

// zLightEffectDim__FP7_zLightf
// Start address: 0x181110
void zLightEffectDim()
{
}

// zLightEffectDimSlow__FP7_zLightf
// Start address: 0x181120
void zLightEffectDimSlow()
{
}

// zLightEffectStrobeFast__FP7_zLightf
// Start address: 0x181130
void zLightEffectStrobeFast()
{
}

// zLightEffectStrobe__FP7_zLightf
// Start address: 0x181140
void zLightEffectStrobe()
{
}

// zLightEffectStrobeSlow__FP7_zLightf
// Start address: 0x181150
void zLightEffectStrobeSlow()
{
}

// zLightEffectFlickerErratic__FP7_zLightf
// Start address: 0x181160
void zLightEffectFlickerErratic(_zLight* zlight, float seconds)
{
}

// zLightEffectFlickerSlow__FP7_zLightf
// Start address: 0x181180
void zLightEffectFlickerSlow(_zLight* zlight, float seconds)
{
}

// zLightEffectFlicker__FP7_zLightf
// Start address: 0x1811b0
void zLightEffectFlicker(_zLight* zlight, float seconds)
{
}

// EffectFlicker__FP7_zLightfff
// Start address: 0x1811e0
void EffectFlicker(_zLight* zlight, float seconds, float min, float rnd)
{
	iLight* l;
	float* reg;
}

// zLightEffectInitFlicker__FP7_zLight
// Start address: 0x1814e0
void zLightEffectInitFlicker(_zLight* zlight)
{
}

// zLightEffectInitRandomCol__FP7_zLight
// Start address: 0x1814f0
void zLightEffectInitRandomCol()
{
}

// zLightEffectInitHalfDim__FP7_zLight
// Start address: 0x181500
void zLightEffectInitHalfDim()
{
}

// zLightEffectInitDim__FP7_zLight
// Start address: 0x181510
void zLightEffectInitDim()
{
}

// zLightEffectInitStrobe__FP7_zLight
// Start address: 0x181520
void zLightEffectInitStrobe()
{
}

