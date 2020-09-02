typedef struct RwRect;
typedef struct RwBBox;
typedef struct RwRGBA;
typedef struct RwSky2DVertex;
typedef struct RwV3d;
typedef struct DistortionParticle;
typedef struct RwCamera;
typedef struct xVec4;
typedef struct xVec3;
typedef struct RwMatrixTag;
typedef struct RwRaster;
typedef struct xMat4x3;
typedef enum RwCameraProjection;
typedef union RxColorUnion;
typedef struct _iMotionBlurData;
typedef struct RxObjSpace3DVertex;
typedef struct xMat3x3;
typedef struct RwObject;
typedef struct RwLLLink;
typedef struct RwSky2DVertexFields;
typedef struct RwFrustumPlane;
typedef struct RwPlane;
typedef struct RwRGBAReal;
typedef struct RwObjectHasFrame;
typedef union RwSky2DVertexAlignmentOverlay;
typedef struct RwV2d;
typedef struct tagiRenderInput;

typedef RwCamera*(*type_6)(RwCamera*);
typedef RwCamera*(*type_7)(RwCamera*);
typedef RwObjectHasFrame*(*type_8)(RwObjectHasFrame*);

typedef RwFrustumPlane type_0[6];
typedef RwV3d type_1[8];
typedef RwSky2DVertex type_2[4];
typedef unsigned short type_3[4];
typedef RwSky2DVertex type_4[4];
typedef unsigned short type_5[6];
typedef <unknown type (0xa510)> type_9[4];
typedef DistortionParticle type_10[100];

struct RwRect
{
	int x;
	int y;
	int w;
	int h;
};

struct RwBBox
{
	RwV3d sup;
	RwV3d inf;
};

struct RwRGBA
{
	unsigned char red;
	unsigned char green;
	unsigned char blue;
	unsigned char alpha;
};

struct RwSky2DVertex
{
	RwSky2DVertexAlignmentOverlay u;
};

struct RwV3d
{
	float x;
	float y;
	float z;
};

struct DistortionParticle
{
	xVec3 pos;
	unsigned int flags;
	xVec3 dir;
	float life;
	xVec3 vel;
	float death;
};

struct RwCamera
{
	RwObjectHasFrame object;
	RwCameraProjection projectionType;
	type_6 beginUpdate;
	type_7 endUpdate;
	RwMatrixTag viewMatrix;
	RwRaster* frameBuffer;
	RwRaster* zBuffer;
	RwV2d viewWindow;
	RwV2d recipViewWindow;
	RwV2d viewOffset;
	float nearPlane;
	float farPlane;
	float fogPlane;
	float zScale;
	float zShift;
	type_0 frustumPlanes;
	RwBBox frustumBoundBox;
	type_1 frustumCorners;
};

struct xVec4
{
	float x;
	float y;
	float z;
	float w;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct RwMatrixTag
{
	RwV3d right;
	unsigned int flags;
	RwV3d up;
	unsigned int pad1;
	RwV3d at;
	unsigned int pad2;
	RwV3d pos;
	unsigned int pad3;
};

struct RwRaster
{
	RwRaster* parent;
	unsigned char* cpPixels;
	unsigned char* palette;
	int width;
	int height;
	int depth;
	int stride;
	short nOffsetX;
	short nOffsetY;
	unsigned char cType;
	unsigned char cFlags;
	unsigned char privateFlags;
	unsigned char cFormat;
	unsigned char* originalPixels;
	int originalWidth;
	int originalHeight;
	int originalStride;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

enum RwCameraProjection
{
	rwNACAMERAPROJECTION,
	rwPERSPECTIVE,
	rwPARALLEL,
	rwCAMERAPROJECTIONFORCEENUMSIZEINT = 0x7fffffff
};

union RxColorUnion
{
	RwRGBA preLitColor;
	RwRGBA color;
};

struct _iMotionBlurData
{
	int motionBlurAlpha;
	RwRaster* motionBlurFrontBuffer;
	type_4 vertex;
	type_5 index;
	unsigned int w;
	unsigned int h;
};

struct RxObjSpace3DVertex
{
	RwV3d objVertex;
	RxColorUnion c;
	RwV3d objNormal;
	float u;
	float v;
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

struct RwSky2DVertexFields
{
	RwV3d scrVertex;
	float camVertex_z;
	float u;
	float v;
	float recipZ;
	float pad1;
	RwRGBAReal color;
	RwV3d objNormal;
	float pad2;
};

struct RwFrustumPlane
{
	RwPlane plane;
	unsigned char closestX;
	unsigned char closestY;
	unsigned char closestZ;
	unsigned char pad;
};

struct RwPlane
{
	RwV3d normal;
	float distance;
};

struct RwRGBAReal
{
	float red;
	float green;
	float blue;
	float alpha;
};

struct RwObjectHasFrame
{
	RwObject object;
	RwLLLink lFrame;
	type_8 sync;
};

union RwSky2DVertexAlignmentOverlay
{
	RwSky2DVertexFields els;
	type_9 qWords;
};

struct RwV2d
{
	float x;
	float y;
};

struct tagiRenderInput
{
	unsigned short* m_index;
	RxObjSpace3DVertex* m_vertex;
	float* m_vertexTZ;
	unsigned int m_mode;
	int m_vertexType;
	int m_vertexTypeSize;
	int m_indexCount;
	int m_vertexCount;
	xMat4x3 m_camViewMatrix;
	xVec4 m_camViewR;
	xVec4 m_camViewU;
};

unsigned int sMotionBlurEnabled;
_iMotionBlurData sMBD;
RxObjSpace3DVertex* Im3DBuffer;
unsigned int Im3DBufferPos;
unsigned int dplines;
int gNumDistortionParticles;
tagiRenderInput gRenderBuffer;
type_10 gDistortionParticles;
<unknown type (0xa510)>* _rwDMAPktPtr;
long skyAlpha_1;
long skyClamp_1;

void iScrFxDistortionRender(RwCamera* camera);
int iScrFxCameraDestroyed();
int iScrFxMotionBlurOpen(RwCamera* camera);
void iCameraOverlayRender(RwRaster* ras, RwRGBA col);
void iScrFxMotionBlurCreateImmediateModeData(RwCamera* camera, RwRect* rect);
void iScrFxCameraEndScene(RwCamera* pCamera);
void iScrFxCameraCreated(RwCamera* pCamera);
void iCameraSetBlurriness(float amount);
void iCameraMotionBlurActivate(unsigned int activate);
void iScrFxDrawBox(float x1, float y1, float x2, float y2, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha);
void iScrFxEnd();
void iScrFxBegin();
void iScrFxInit();

// iScrFxDistortionRender__FP8RwCamera
// Start address: 0x1b69c0
void iScrFxDistortionRender(RwCamera* camera)
{
	xVec3 at;
	DistortionParticle* dp;
	RwMatrixTag* mat;
	RwMatrixTag ptmat;
	RwMatrixTag tmp;
	RwMatrixTag invMtx;
	RwMatrixTag* matrix;
	int i;
	RxObjSpace3DVertex* Im3DBuffer;
	RxObjSpace3DVertex* imv;
	xVec3 a;
	xVec3 b;
	xVec3 c;
	xVec3 d;
	xVec3 sa;
	xVec3 sb;
	xVec3 sc;
	xVec3 sd;
	xVec3 mmsa;
	xVec3 mmsb;
	xVec3 mmsc;
	xVec3 mmsd;
}

// iScrFxCameraDestroyed__FP8RwCamera
// Start address: 0x1b7320
int iScrFxCameraDestroyed()
{
}

// iScrFxMotionBlurOpen__FP8RwCamera
// Start address: 0x1b7370
int iScrFxMotionBlurOpen(RwCamera* camera)
{
	RwRect rect;
}

// iCameraOverlayRender__FP8RwCameraP8RwRaster6RwRGBA
// Start address: 0x1b7480
void iCameraOverlayRender(RwRaster* ras, RwRGBA col)
{
	RwRect rect;
}

// iScrFxMotionBlurCreateImmediateModeData__FP8RwCameraP6RwRect
// Start address: 0x1b7900
void iScrFxMotionBlurCreateImmediateModeData(RwCamera* camera, RwRect* rect)
{
	float w;
	float h;
	float xSize;
	float U;
	float V;
	float u;
	RwSky2DVertex* ver;
	float nearz;
	float oocameraNearClipPlane;
	float wstep;
	float hstep;
	float ustep;
	float vstep;
}

// iScrFxCameraEndScene__FP8RwCamera
// Start address: 0x1b7ad0
void iScrFxCameraEndScene(RwCamera* pCamera)
{
}

// iScrFxCameraCreated__FP8RwCamera
// Start address: 0x1b7b30
void iScrFxCameraCreated(RwCamera* pCamera)
{
}

// iCameraSetBlurriness__Ff
// Start address: 0x1b7b90
void iCameraSetBlurriness(float amount)
{
}

// iCameraMotionBlurActivate__FUi
// Start address: 0x1b7c10
void iCameraMotionBlurActivate(unsigned int activate)
{
}

// iScrFxDrawBox__FffffUcUcUcUc
// Start address: 0x1b7c20
void iScrFxDrawBox(float x1, float y1, float x2, float y2, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
	type_3 indices;
	type_2 v;
}

// iScrFxEnd__Fv
// Start address: 0x1b7fc0
void iScrFxEnd()
{
}

// iScrFxBegin__Fv
// Start address: 0x1b8030
void iScrFxBegin()
{
}

// iScrFxInit__Fv
// Start address: 0x1b80b0
void iScrFxInit()
{
}

