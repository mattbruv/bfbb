typedef struct xSurface;
typedef struct xSerial;
typedef struct xLinkAsset;
typedef struct xEnt;
typedef struct xBase;

typedef int(*type_2)(xBase*, xBase*, unsigned int, float*, xBase*);

typedef unsigned char type_0[3];
typedef float type_1[4];

struct xSurface : xBase
{
	unsigned int idx;
	unsigned int type;
	union
	{
		unsigned int mat_idx;
		xEnt* ent;
		void* obj;
	};
	float friction;
	unsigned char state;
	type_0 pad;
	void* moprops;
};

struct xSerial
{
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

struct xEnt
{
};

struct xBase
{
	unsigned int id;
	unsigned char baseType;
	unsigned char linkCount;
	unsigned short baseFlags;
	xLinkAsset* link;
	type_2 eventFunc;
};

xSurface* surfs;
unsigned short nsurfs;
unsigned int gActiveHeap;

xSurface* xSurfaceGetByIdx(unsigned short n);
unsigned short xSurfaceGetNumSurfaces();
void xSurfaceReset();
void xSurfaceLoad(xSurface* ent, xSerial* s);
void xSurfaceSave(xSurface* ent, xSerial* s);
void xSurfaceExit();
void xSurfaceInit(unsigned short num_surfs);

// xSurfaceGetByIdx__FUs
// Start address: 0x20ed40
xSurface* xSurfaceGetByIdx(unsigned short n)
{
}

// xSurfaceGetNumSurfaces__Fv
// Start address: 0x20ed70
unsigned short xSurfaceGetNumSurfaces()
{
}

// xSurfaceReset__FP8xSurface
// Start address: 0x20ed80
void xSurfaceReset()
{
}

// xSurfaceLoad__FP8xSurfaceP7xSerial
// Start address: 0x20ed90
void xSurfaceLoad(xSurface* ent, xSerial* s)
{
}

// xSurfaceSave__FP8xSurfaceP7xSerial
// Start address: 0x20eda0
void xSurfaceSave(xSurface* ent, xSerial* s)
{
}

// xSurfaceExit__Fv
// Start address: 0x20edb0
void xSurfaceExit()
{
}

// xSurfaceInit__FUs
// Start address: 0x20edc0
void xSurfaceInit(unsigned short num_surfs)
{
	unsigned short i;
}

