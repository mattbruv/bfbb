typedef struct xCoef3;
typedef struct xVec3;
typedef struct xSpline3;
typedef struct xCoef;


typedef float type_0[4];
typedef xVec3 type_1[4];
typedef xVec3 type_2[4];
typedef float type_3[4];
typedef type_3 type_4[4];
typedef float type_5[3];
typedef float type_6[4];
typedef float type_7[4];
typedef type_7 type_8[7];
typedef unsigned int type_9[4096];
typedef xVec3 type_10[4];
typedef float type_11[2];
typedef float type_12[3];
typedef float type_13[4];
typedef type_13 type_14[4];
typedef float type_15[4];
typedef type_15 type_16[7];
typedef float type_17[4];
typedef float type_18[4];
typedef float type_19[4];
typedef type_19 type_20[4];
typedef float type_21[4];

struct xCoef3
{
	xCoef x;
	xCoef y;
	xCoef z;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct xSpline3
{
	unsigned short type;
	unsigned short flags;
	unsigned int N;
	unsigned int allocN;
	xVec3* points;
	float* time;
	xVec3* p12;
	xVec3* bctrl;
	float* knot;
	xCoef3* coef;
	unsigned int arcSample;
	float* arcLength;
};

struct xCoef
{
	type_18 a;
};

type_20 sBasisUniformBspline;
type_4 sBasisBezier;
type_14 sBasisHermite;
unsigned int gActiveHeap;
type_9 ourGlobals;

xSpline3* xSpline3_Bezier(xVec3* points, float* time, unsigned int numpoints, unsigned int numalloc, xVec3* p1, xVec3* p2);
xSpline3* AllocSpline3(xVec3* points, float* time, unsigned int numpoints, unsigned int numalloc, unsigned int flags, unsigned int type);
void xSpline3_ArcInit(xSpline3* spl, unsigned int sample);
float xSpline3_EvalArcApprox(xSpline3* spl, float s, unsigned int deriv, xVec3* o);
float ArcEvalIterate(xSpline3* spl, float s, unsigned int deriv, xVec3* o, unsigned int iterations);
void xSpline3_EvalSeg(xSpline3* spl, float u, unsigned int deriv, xVec3* o);
xCoef3* CoefSeg3(xSpline3* spl, unsigned int seg, xCoef3* tempCoef);
void EvalBspline3(xSpline3* spl, float u, unsigned int deriv, xVec3* o);
void BasisBspline(type_6* N, float* t);
void EvalCoef3(xCoef3* coef, float u, unsigned int deriv, xVec3* o);
float ArcLength3(xCoef3* coef, float ustart, float uend);
void Interpolate_Bspline(xVec3* data, xVec3* control, float* knots, unsigned int nodata);
void Tridiag_Solve(float* a, float* b, float* c, xVec3* d, xVec3* x, int n);

// xSpline3_Bezier__FP5xVec3PfUiUiP5xVec3P5xVec3
// Start address: 0x20ab00
xSpline3* xSpline3_Bezier(xVec3* points, float* time, unsigned int numpoints, unsigned int numalloc, xVec3* p1, xVec3* p2)
{
	xSpline3* spl;
	unsigned int i;
}

// AllocSpline3__FP5xVec3PfUiUiUiUi
// Start address: 0x20ac50
xSpline3* AllocSpline3(xVec3* points, float* time, unsigned int numpoints, unsigned int numalloc, unsigned int flags, unsigned int type)
{
	xSpline3* spl;
}

// xSpline3_ArcInit__FP8xSpline3Ui
// Start address: 0x20ada0
void xSpline3_ArcInit(xSpline3* spl, unsigned int sample)
{
	unsigned int i;
	unsigned int seg;
	float len;
	float arcsum;
	xCoef3 tempCoef;
	xCoef3* coef;
}

// xSpline3_EvalArcApprox__FP8xSpline3fUiP5xVec3
// Start address: 0x20af50
float xSpline3_EvalArcApprox(xSpline3* spl, float s, unsigned int deriv, xVec3* o)
{
}

// ArcEvalIterate__FP8xSpline3fUiP5xVec3Ui
// Start address: 0x20afa0
float ArcEvalIterate(xSpline3* spl, float s, unsigned int deriv, xVec3* o, unsigned int iterations)
{
	xCoef3* coef;
	xCoef3 tempCoef;
	float umin;
	float umax;
	float smin;
	float smax;
	float utest;
	float arctest;
	int min;
	int max;
	int test;
	int seg;
	int segmul;
}

// xSpline3_EvalSeg__FP8xSpline3fUiP5xVec3
// Start address: 0x20b2f0
void xSpline3_EvalSeg(xSpline3* spl, float u, unsigned int deriv, xVec3* o)
{
	xCoef3 tempCoef;
	unsigned int seg;
}

// CoefSeg3__FP8xSpline3UiP6xCoef3
// Start address: 0x20b660
xCoef3* CoefSeg3(xSpline3* spl, unsigned int seg, xCoef3* tempCoef)
{
	type_8 N;
}

// EvalBspline3__FP8xSpline3fUiP5xVec3
// Start address: 0x20bac0
void EvalBspline3(xSpline3* spl, float u, unsigned int deriv, xVec3* o)
{
	type_16 N;
	xCoef3 coef;
}

// BasisBspline__FPA4_fPf
// Start address: 0x20bcb0
void BasisBspline(type_6* N, float* t)
{
	unsigned int i;
	unsigned int k;
	unsigned int c;
	float d1;
	float d2;
	type_17 Ntemp;
}

// EvalCoef3__FP6xCoef3fUiP5xVec3
// Start address: 0x20bec0
void EvalCoef3(xCoef3* coef, float u, unsigned int deriv, xVec3* o)
{
}

// ArcLength3__FP6xCoef3ff
// Start address: 0x20c0b0
float ArcLength3(xCoef3* coef, float ustart, float uend)
{
	unsigned int i;
	float A;
	float B;
	float C;
	float D;
	float E;
	float h;
	float sum;
	float u;
}

// Interpolate_Bspline__FP5xVec3P5xVec3PfUi
// Start address: 0x20c290
void Interpolate_Bspline(xVec3* data, xVec3* control, float* knots, unsigned int nodata)
{
	unsigned int i;
	float* alpha;
	float* beta;
	float* gamma;
	float t1;
	float t2;
	float t3;
	float t4;
	float t5;
}

// Tridiag_Solve__FPfPfPfP5xVec3P5xVec3i
// Start address: 0x20c4b0
void Tridiag_Solve(float* a, float* b, float* c, xVec3* d, xVec3* x, int n)
{
	int j;
	float beta;
	float* gamma;
	xVec3* delta;
}

