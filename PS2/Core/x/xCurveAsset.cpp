typedef struct xCurveAsset;
typedef enum xCurveType;
typedef enum xCurveClamp;



struct xCurveAsset
{
	xCurveType type;
	xCurveClamp clamp;
	float delta;
	int numPoints;
	float* points;
};

enum xCurveType
{
	xCVT_BAKED
};

enum xCurveClamp
{
	xCC_CONSTANT,
	xCC_CYCLE,
	xCC_OSCILLATE
};


float xCurveAssetEvaluate(xCurveAsset* curve_asset, float t);

// xCurveAssetEvaluate__FPC11xCurveAssetf
// Start address: 0x3ade50
float xCurveAssetEvaluate(xCurveAsset* curve_asset, float t)
{
	float max_t;
	float curve_length;
	int curve_shift;
	unsigned int last_point;
	float u;
}

