



float range_limit(float v, float minv, float maxv);
float xabs(float v);
unsigned short range_limit(unsigned short v, unsigned short minv, unsigned short maxv);
float xSCurve(float t, float softness);
float xrmod(float ang);
unsigned int range_limit(unsigned int v, unsigned int minv, unsigned int maxv);
int range_limit(int v, int minv, int maxv);

// range_limit<f>__Ffff_f
// Start address: 0x1c4ee0
float range_limit(float v, float minv, float maxv)
{
}

// xabs__Ff
// Start address: 0x1c57e0
float xabs(float v)
{
}

// range_limit<Us>__FUsUsUs_Us
// Start address: 0x201080
unsigned short range_limit(unsigned short v, unsigned short minv, unsigned short maxv)
{
}

// xSCurve__Fff
// Start address: 0x2a81b0
float xSCurve(float t, float softness)
{
	float T2;
}

// xrmod__Ff
// Start address: 0x2ab4f0
float xrmod(float ang)
{
	float frac;
}

// range_limit<Ui>__FUiUiUi_Ui
// Start address: 0x33b130
unsigned int range_limit(unsigned int v, unsigned int minv, unsigned int maxv)
{
}

// range_limit<i>__Fiii_i
// Start address: 0x33b160
int range_limit(int v, int minv, int maxv)
{
}

