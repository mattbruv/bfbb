typedef struct xVec3;
typedef enum sound_category;
typedef struct AudioDec;
typedef struct xMat4x3;
typedef struct xMat3x3;
typedef struct iSndInfo;
typedef struct SpuStreamHeader;
typedef enum sound_listener_game_mode;
typedef struct xSndVoiceInfo;
typedef struct sceSifDmaData;
typedef struct SpuStreamBody;
typedef struct iSndVol;
typedef struct xSndGlobals;


typedef float type_0[5];
typedef xSndVoiceInfo type_1[48];
typedef xMat4x3 type_2[2];
typedef char type_3[4];
typedef char type_4[4];
typedef char type_5[2048];

struct xVec3
{
	float x;
	float y;
	float z;
};

enum sound_category
{
	SND_CAT_INVALID = 0xffffffff,
	SND_CAT_GAME,
	SND_CAT_DIALOG,
	SND_CAT_MUSIC,
	SND_CAT_CUTSCENE,
	SND_CAT_UI,
	SND_CAT_NUM_CATEGORIES
};

struct AudioDec
{
	int state;
	SpuStreamHeader sshd;
	SpuStreamBody ssbd;
	int hdrCount;
	unsigned char* data;
	int put;
	int count;
	int size;
	int totalBytes;
	int iopBuff;
	int iopBuffSize;
	int iopLastPos;
	int iopPausePos;
	int totalBytesSent;
	int iopZero;
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

struct iSndInfo
{
	unsigned int flags;
	iSndVol vol;
	unsigned int pitch;
	int lastStreamBuffer;
};

struct SpuStreamHeader
{
	type_3 id;
	int size;
	int type;
	int rate;
	int ch;
	int interSize;
	int loopStart;
	int loopEnd;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
};

struct xSndVoiceInfo
{
	unsigned int assetID;
	unsigned int sndID;
	unsigned int parentID;
	xVec3* parentPos;
	int internalID;
	unsigned int flags;
	unsigned short pad;
	unsigned short priority;
	float vol;
	float pitch;
	unsigned int sample_rate;
	unsigned int deadct;
	sound_category category;
	xVec3 actualPos;
	xVec3 playPos;
	float innerRadius2;
	float outerRadius2;
	unsigned int lock_owner;
	iSndInfo ps;
};

struct sceSifDmaData
{
	unsigned int data;
	unsigned int addr;
	unsigned int size;
	unsigned int mode;
};

struct SpuStreamBody
{
	type_4 id;
	int size;
};

struct iSndVol
{
	short volL;
	short volR;
};

struct xSndGlobals
{
	unsigned int stereo;
	unsigned int SndCount;
	type_0 categoryVolFader;
	type_1 voice;
	type_2 listenerMat;
	sound_listener_game_mode listenerMode;
	unsigned int suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_5 _0_buf;
xSndGlobals gSnd;

int sendToIOP2area(int pd0, int d0, int pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1);
int audioDecSendToIOP(AudioDec* ad);
int audioDecIsPreset(AudioDec* ad);
void audioDecEndPut(AudioDec* ad, int size);
void audioDecBeginPut(AudioDec* ad, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1);
void audioDecReset(AudioDec* ad);
void audioDecStart(AudioDec* ad);
int audioDecDelete(AudioDec* ad);
int audioDecCreate(AudioDec* ad, unsigned char* buff, int buffSize, int iopBuffSize);

// sendToIOP2area__FiiiiPUciPUci
// Start address: 0x1bb9e0
int sendToIOP2area(int pd0, int d0, int pd1, int d1, unsigned char* ps0, int s0, unsigned char* ps1, int s1)
{
	int diff;
}

// audioDecSendToIOP__FP8AudioDec
// Start address: 0x1bbd10
int audioDecSendToIOP(AudioDec* ad)
{
	int pd0;
	int pd1;
	int d0;
	int d1;
	unsigned char* ps0;
	int s1;
	int count_sent;
	int countAdj;
	int pos;
}

// audioDecIsPreset__FP8AudioDec
// Start address: 0x1bbf10
int audioDecIsPreset(AudioDec* ad)
{
}

// audioDecEndPut__FP8AudioDeci
// Start address: 0x1bbf30
void audioDecEndPut(AudioDec* ad, int size)
{
	int hdr_add;
}

// audioDecBeginPut__FP8AudioDecPPUcPiPPUcPi
// Start address: 0x1bbfc0
void audioDecBeginPut(AudioDec* ad, unsigned char** ptr0, int* len0, unsigned char** ptr1, int* len1)
{
	int len;
}

// audioDecReset__FP8AudioDec
// Start address: 0x1bc080
void audioDecReset(AudioDec* ad)
{
}

// audioDecStart__FP8AudioDec
// Start address: 0x1bc130
void audioDecStart(AudioDec* ad)
{
}

// audioDecDelete__FP8AudioDec
// Start address: 0x1bc1a0
int audioDecDelete(AudioDec* ad)
{
}

// audioDecCreate__FP8AudioDecPUcii
// Start address: 0x1bc1e0
int audioDecCreate(AudioDec* ad, unsigned char* buff, int buffSize, int iopBuffSize)
{
}

