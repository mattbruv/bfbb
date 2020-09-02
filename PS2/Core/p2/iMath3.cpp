typedef struct xIsect;
typedef struct xBox;
typedef struct xVec3;
typedef struct xTri3;
typedef struct xSphere;
typedef struct xCylinder;
typedef struct xRay3;
typedef struct xPlane;
typedef struct xMat4x3;
typedef struct xMat3x3;



struct xIsect
{
	unsigned int flags;
	float penned;
	float contained;
	float lapped;
	xVec3 point;
	xVec3 norm;
	float dist;
};

struct xBox
{
	xVec3 upper;
	xVec3 lower;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xTri3
{
	xVec3 p1;
	xVec3 p2;
	xVec3 p3;
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

struct xRay3
{
	xVec3 origin;
	xVec3 dir;
	float min_t;
	float max_t;
	int flags;
};

struct xPlane
{
	xVec3 norm;
	float d;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
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


void iBoxBoundVec(xBox* o, xBox* b, xVec3* v);
void iBoxInitBoundVec(xBox* b, xVec3* v);
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx);
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx);
unsigned int ClipPlane(float denom, float numer, float* t_in, float* t_out);
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx);
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx);
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx);
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v);
void iSphereInitBoundVec(xSphere* s, xVec3* v);
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx);
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx);
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx);
void iMath3Exit();
void iMath3Init();

// iBoxBoundVec__FP4xBoxPC4xBoxPC5xVec3
// Start address: 0x1ab2c0
void iBoxBoundVec(xBox* o, xBox* b, xVec3* v)
{
}

// iBoxInitBoundVec__FP4xBoxPC5xVec3
// Start address: 0x1ab3a0
void iBoxInitBoundVec(xBox* b, xVec3* v)
{
}

// iBoxIsectSphere__FPC4xBoxPC7xSphereP6xIsect
// Start address: 0x1ab3e0
void iBoxIsectSphere(xBox* box, xSphere* p, xIsect* isx)
{
	unsigned int xcode;
	unsigned int ycode;
	unsigned int zcode;
}

// iBoxIsectRay__FPC4xBoxPC5xRay3P6xIsect
// Start address: 0x1ab760
void iBoxIsectRay(xBox* b, xRay3* r, xIsect* isx)
{
	float t_in;
	float t_out;
}

// ClipPlane__FffPfPf
// Start address: 0x1ab9f0
unsigned int ClipPlane(float denom, float numer, float* t_in, float* t_out)
{
}

// iBoxIsectVec__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x1abad0
void iBoxIsectVec(xBox* b, xVec3* v, xIsect* isx)
{
}

// iBoxVecDist__FPC4xBoxPC5xVec3P6xIsect
// Start address: 0x1abb60
void iBoxVecDist(xBox* box, xVec3* v, xIsect* isx)
{
}

// iCylinderIsectVec__FPC9xCylinderPC5xVec3P6xIsect
// Start address: 0x1ac570
void iCylinderIsectVec(xCylinder* c, xVec3* v, xIsect* isx)
{
	float b;
}

// iSphereBoundVec__FP7xSpherePC7xSpherePC5xVec3
// Start address: 0x1ac5f0
void iSphereBoundVec(xSphere* o, xSphere* s, xVec3* v)
{
	float scale;
	xSphere temp;
	xSphere* tp;
	unsigned int usetemp;
}

// iSphereInitBoundVec__FP7xSpherePC5xVec3
// Start address: 0x1ac730
void iSphereInitBoundVec(xSphere* s, xVec3* v)
{
}

// iSphereIsectSphere__FPC7xSpherePC7xSphereP6xIsect
// Start address: 0x1ac760
void iSphereIsectSphere(xSphere* s, xSphere* p, xIsect* isx)
{
}

// iSphereIsectRay__FPC7xSpherePC5xRay3P6xIsect
// Start address: 0x1ac7e0
void iSphereIsectRay(xSphere* s, xRay3* r, xIsect* isx)
{
	float t_in;
	float t_out;
	unsigned int num;
}

// iSphereIsectVec__FPC7xSpherePC5xVec3P6xIsect
// Start address: 0x1ac9d0
void iSphereIsectVec(xSphere* s, xVec3* v, xIsect* isx)
{
}

// iMath3Exit__Fv
// Start address: 0x1aca40
void iMath3Exit()
{
}

// iMath3Init__Fv
// Start address: 0x1aca50
void iMath3Init()
{
}

