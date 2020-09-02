typedef struct xFuncPiece;


typedef float type_0[0];
typedef int type_1[32];
typedef float type_2[5];

struct xFuncPiece
{
	type_2 coef;
	float end;
	int order;
	xFuncPiece* next;
};

int xmath_inited;
int xmath_exited;
unsigned int rndseed;
type_0 cosSinPolynomial;

void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float newZero);
void xFuncPiece_EndPoints(xFuncPiece* func, float pi, float pf, float fi, float ff);
float xFuncPiece_Eval(xFuncPiece* func, float param, xFuncPiece** iterator);
void xAccelStop(float& x, float& v, float a, float dt);
void xAccelMove(float& x, float& v, float a, float dt, float maxv);
float xAccelMoveTime(float dx, float a, float maxv);
void xAccelMove(float& x, float& v, float a, float dt, float endx, float maxv);
float xDangleClamp(float a);
float xAngleClampFast(float a);
float xAngleClamp(float a);
unsigned int xMathSolveCubic(float a, float b, float c, float d, float* x1, float* x2, float* x3);
unsigned int xMathSolveQuadratic(float a, float b, float c, float* x1, float* x2);
float xurand();
unsigned int xrand();
void xsrand(unsigned int seed);
float xatof(char* x);
void xMathExit();
void xMathInit();

// xFuncPiece_ShiftPiece__FP10xFuncPieceP10xFuncPiecef
// Start address: 0x1ed190
void xFuncPiece_ShiftPiece(xFuncPiece* shift, xFuncPiece* func, float newZero)
{
	int i;
	int j;
	xFuncPiece temp;
}

// xFuncPiece_EndPoints__FP10xFuncPieceffff
// Start address: 0x1ed2b0
void xFuncPiece_EndPoints(xFuncPiece* func, float pi, float pf, float fi, float ff)
{
	float xfinv;
}

// xFuncPiece_Eval__FP10xFuncPiecefPP10xFuncPiece
// Start address: 0x1ed2f0
float xFuncPiece_Eval(xFuncPiece* func, float param, xFuncPiece** iterator)
{
	float result;
	int i;
}

// xAccelStop__FRfRfff
// Start address: 0x1ed3a0
void xAccelStop(float& x, float& v, float a, float dt)
{
	unsigned int aa;
	float oldv;
}

// xAccelMove__FRfRffff
// Start address: 0x1ed4f0
void xAccelMove(float& x, float& v, float a, float dt, float maxv)
{
	unsigned int bn;
	unsigned int bp;
	unsigned int aa;
	unsigned int bn;
	unsigned int bp;
	unsigned int aa;
	float diff;
	float dv;
}

// xAccelMoveTime__Fffff
// Start address: 0x1ed630
float xAccelMoveTime(float dx, float a, float maxv)
{
	float time;
	float atime;
	float adist;
}

// xAccelMove__FRfRfffff
// Start address: 0x1ed6b0
void xAccelMove(float& x, float& v, float a, float dt, float endx, float maxv)
{
	float offset;
	float t1;
	float t2;
	float oldv;
	float dv;
	float newv;
	float adx;
	float diff;
	float dx;
}

// xDangleClamp__Ff
// Start address: 0x1ed9a0
float xDangleClamp(float a)
{
	float b;
}

// xAngleClampFast__Ff
// Start address: 0x1eda30
float xAngleClampFast(float a)
{
}

// xAngleClamp__Ff
// Start address: 0x1eda80
float xAngleClamp(float a)
{
	float b;
}

// xMathSolveCubic__FffffPfPfPf
// Start address: 0x1edad0
unsigned int xMathSolveCubic(float a, float b, float c, float d, float* x1, float* x2, float* x3)
{
	float arecip;
	float fA;
	float fB;
	float fOffset;
	float fDiscr;
	float fHalfB;
	float fTemp;
	float fDist;
	float fAngle;
	float fCos;
	float fSin;
}

// xMathSolveQuadratic__FfffPfPf
// Start address: 0x1ede80
unsigned int xMathSolveQuadratic(float a, float b, float c, float* x1, float* x2)
{
	float d;
	float dx;
	float p;
}

// xurand__Fv
// Start address: 0x1edf90
float xurand()
{
}

// xrand__Fv
// Start address: 0x1edff0
unsigned int xrand()
{
}

// xsrand__FUi
// Start address: 0x1ee010
void xsrand(unsigned int seed)
{
}

// xatof__FPCc
// Start address: 0x1ee020
float xatof(char* x)
{
}

// xMathExit__Fv
// Start address: 0x1ee030
void xMathExit()
{
}

// xMathInit__Fv
// Start address: 0x1ee050
void xMathInit()
{
}

