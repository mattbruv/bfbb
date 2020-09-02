typedef struct prof_info;

typedef int(*type)(int, void*, void*);


struct prof_info
{
	unsigned int addr;
	unsigned int len;
	unsigned int count;
};

int tim0_handler_id;
long tim0_high;
int sProfLevel;
char* sProfMap;
char** sProfFunc;
char** sProfFile;
unsigned int* sProfBin;
unsigned int sProfCount;
unsigned int pvsyncaddr;
prof_info* pip;
unsigned int pil;
unsigned int app_top;
unsigned int app_end;
unsigned int app_hits;
unsigned int kernel_hits;
unsigned int vsync_hits;
unsigned int scene_id;
unsigned int prof_enable;
unsigned int* profSampleBuffer;
unsigned int* profSampleStatic;
unsigned int profSampleSize;
float sGameTime;
type TimerHandler;

void iFuncProfileDump();
void iFuncProfileParse();
void iProfileClear(unsigned int sceneID);
void iTimeSetGame(float time);
void iTimeGameAdvance(float elapsed);
float iTimeDiffSec(long t0, long t1);
float iTimeDiffSec(long time);
long iTimeGet();
int TimerHandler(int ca);
void iTimeExit();
void iTimeInit();

// iFuncProfileDump__Fv
// Start address: 0x1bae40
void iFuncProfileDump()
{
}

// iFuncProfileParse__FPci
// Start address: 0x1bae50
void iFuncProfileParse()
{
}

// iProfileClear__FUi
// Start address: 0x1bae60
void iProfileClear(unsigned int sceneID)
{
	int i;
}

// iTimeSetGame__Ff
// Start address: 0x1baf10
void iTimeSetGame(float time)
{
}

// iTimeGameAdvance__Ff
// Start address: 0x1baf20
void iTimeGameAdvance(float elapsed)
{
}

// iTimeDiffSec__Fll
// Start address: 0x1baf30
float iTimeDiffSec(long t0, long t1)
{
}

// iTimeDiffSec__Fl
// Start address: 0x1baf80
float iTimeDiffSec(long time)
{
}

// iTimeGet__Fv
// Start address: 0x1bafd0
long iTimeGet()
{
	long high0;
	long low0;
	long high1;
	long low1;
}

// TimerHandler__FiPvPv
// Start address: 0x1bb010
int TimerHandler(int ca)
{
}

// iTimeExit__Fv
// Start address: 0x1bb070
void iTimeExit()
{
}

// iTimeInit__Fv
// Start address: 0x1bb0a0
void iTimeInit()
{
}

