typedef struct xQCData;
typedef struct xQCControl;
typedef struct xVec3;
typedef struct xBox;
typedef struct xBBox;
typedef struct xRay3;
typedef struct xMat4x3;
typedef struct xSphere;
typedef struct xCylinder;
typedef struct xLine3;
typedef struct xMat3x3;
typedef struct xBound;


typedef unsigned char type[3];

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

struct xQCControl
{
	float world_xmin;
	float world_ymin;
	float world_zmin;
	float world_xmax;
	float world_ymax;
	float world_zmax;
	float world_xsz;
	float world_ysz;
	float world_zsz;
	float scale_x;
	float scale_y;
	float scale_z;
	float center_x;
	float center_y;
	float center_z;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xBBox
{
	xVec3 center;
	xBox box;
};

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
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

struct xLine3
{
	xVec3 p1;
	xVec3 p2;
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

struct xBound
{
	xQCData qcd;
	unsigned char type;
	type pad;
	union
	{
		xSphere sph;
		xBBox box;
		xCylinder cyl;
	};
	xMat4x3* mat;
};

xQCControl xqc_def_ctrl;

void xQuickCullForEverything(xQCData* q);
void xQuickCullForOBB(xQCControl* ctrl, xQCData* q, xBox* b, xMat4x3* m);
void xQuickCullForBox(xQCControl* ctrl, xQCData* q, xBox* box);
void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, xSphere* s);
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r);
void xQuickCullForLine(xQCControl* ctrl, xQCData* q, xLine3* ln);
void xQuickCullCellForVec(xQCControl* ctrl, xQCData* c, xVec3* v);
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, xBound* b);
int xQuickCullIsects(xQCData* a, xQCData* b);
void xQuickCullInit(xQCControl* ctrl, xBox* box);
void xQuickCullInit(xQCControl* ctrl, float xmin, float ymin, float zmin, float xmax, float ymax, float zmax);

// xQuickCullForEverything__FP7xQCData
// Start address: 0x1fa330
void xQuickCullForEverything(xQCData* q)
{
}

// xQuickCullForOBB__FP10xQCControlP7xQCDataPC4xBoxPC7xMat4x3
// Start address: 0x1fa360
void xQuickCullForOBB(xQCControl* ctrl, xQCData* q, xBox* b, xMat4x3* m)
{
	xBox worldbox;
}

// xQuickCullForBox__FP10xQCControlP7xQCDataPC4xBox
// Start address: 0x1fa3b0
void xQuickCullForBox(xQCControl* ctrl, xQCData* q, xBox* box)
{
	xQCData a;
	xQCData b;
}

// xQuickCullForSphere__FP10xQCControlP7xQCDataPC7xSphere
// Start address: 0x1fa4a0
void xQuickCullForSphere(xQCControl* ctrl, xQCData* q, xSphere* s)
{
	xVec3 v1;
	xVec3 v2;
	float radius_adjusted;
	xQCData a;
	xQCData b;
}

// xQuickCullForRay__FP10xQCControlP7xQCDataPC5xRay3
// Start address: 0x1fa620
void xQuickCullForRay(xQCControl* ctrl, xQCData* q, xRay3* r)
{
	xLine3 ln;
	float len;
	xQCData a;
	xQCData b;
}

// xQuickCullForLine__FP10xQCControlP7xQCDataPC6xLine3
// Start address: 0x1fa840
void xQuickCullForLine(xQCControl* ctrl, xQCData* q, xLine3* ln)
{
	xQCData a;
	xQCData b;
}

// xQuickCullCellForVec__FP10xQCControlP7xQCDataPC5xVec3
// Start address: 0x1fa920
void xQuickCullCellForVec(xQCControl* ctrl, xQCData* c, xVec3* v)
{
}

// xQuickCullForBound__FP10xQCControlP7xQCDataPC6xBound
// Start address: 0x1faa60
void xQuickCullForBound(xQCControl* ctrl, xQCData* q, xBound* b)
{
}

// xQuickCullIsects__FPC7xQCDataPC7xQCData
// Start address: 0x1faae0
int xQuickCullIsects(xQCData* a, xQCData* b)
{
	int result;
}

// xQuickCullInit__FP10xQCControlPC4xBox
// Start address: 0x1fab10
void xQuickCullInit(xQCControl* ctrl, xBox* box)
{
}

// xQuickCullInit__FP10xQCControlffffff
// Start address: 0x1fab30
void xQuickCullInit(xQCControl* ctrl, float xmin, float ymin, float zmin, float xmax, float ymax, float zmax)
{
}

