typedef struct iSndFileInfo;
typedef struct xSndVoiceInfo;
typedef enum sound_category;
typedef struct _class_0;
typedef struct xVec3;
typedef struct _class_1;
typedef struct xMat4x3;
typedef struct st_PKR_ASSET_TOCINFO;
typedef struct st_PACKER_ASSETTYPE;
typedef struct SndInfo;
typedef struct iSndInfo;
typedef struct VAGheader;
typedef enum sound_listener_game_mode;
typedef struct xMat3x3;
typedef enum eSndWhereEnum;
typedef struct iSndVol;
typedef struct xSndGlobals;

typedef void(*type_0)(void*, unsigned int);
typedef void(*type_2)(void*, unsigned int, void*, char*);
typedef void(*type_4)(unsigned int, unsigned char);
typedef void*(*type_7)(void*, unsigned int, void*, unsigned int, unsigned int*);
typedef void*(*type_8)(void*, unsigned int, void*, void*, unsigned int, unsigned int*);
typedef int(*type_10)(void*, unsigned int, void*, int);
typedef void(*type_13)(unsigned int, unsigned char);
typedef void*(*type_15)(void*, unsigned int, void*, int*, int*);
typedef void(*type_19)(void*, unsigned int, void*);

typedef xSndVoiceInfo type_1[48];
typedef xMat4x3 type_3[2];
typedef unsigned int type_5[2];
typedef char* type_6[23];
typedef iSndFileInfo type_9[512];
typedef char type_11[16];
typedef char type_12[4];
typedef char type_14[16];
typedef VAGheader type_16[1];
typedef unsigned int type_17[1];
typedef char type_18[16];
typedef float type_20[5];

struct iSndFileInfo
{
	unsigned int ID;
	unsigned int assetID;
	unsigned short sample_rate;
	unsigned char is_streamed;
	union
	{
		_class_0 nonstream;
		_class_1 stream;
	};
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

struct _class_0
{
	unsigned int address;
	unsigned int size;
};

struct xVec3
{
	float x;
	float y;
	float z;
};

struct _class_1
{
	int file_index;
	unsigned int lsn;
	unsigned int data_size;
	unsigned short stream_interleave_size;
	unsigned short stream_interleave_count;
};

struct xMat4x3 : xMat3x3
{
	xVec3 pos;
	unsigned int pad3;
};

struct st_PKR_ASSET_TOCINFO
{
	unsigned int aid;
	st_PACKER_ASSETTYPE* typeref;
	unsigned int sector;
	unsigned int plus_offset;
	unsigned int size;
	void* mempos;
};

struct st_PACKER_ASSETTYPE
{
	unsigned int typetag;
	unsigned int tflags;
	int typalign;
	type_7 readXForm;
	type_8 writeXForm;
	type_10 assetLoaded;
	type_15 makeData;
	type_19 cleanup;
	type_0 assetUnloaded;
	type_2 writePeek;
};

struct SndInfo
{
	unsigned int num_effects;
	unsigned int num_streams;
	type_16 vagHeaders;
};

struct iSndInfo
{
	unsigned int flags;
	iSndVol vol;
	unsigned int pitch;
	int lastStreamBuffer;
};

struct VAGheader
{
	type_12 id;
	unsigned int version;
	unsigned int assetID;
	unsigned int data_size;
	unsigned int frequency;
	unsigned int streamInterleaveSize;
	unsigned int streamInterleaveCount;
	type_17 reserved2;
	type_18 name;
};

enum sound_listener_game_mode
{
	SND_LISTENER_MODE_PLAYER,
	SND_LISTENER_MODE_CAMERA
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

enum eSndWhereEnum
{
	eSndWhere_NA,
	eSndWhere_iSndSuspendCD,
	eSndWhere_iSndLoadFasterer,
	eSndWhere_UpdateVoiceStatus,
	eSndWhere_UpdateRecycleVoices,
	eSndWhere_UpdateDebugVoices,
	eSndWhere_Update3DSounds,
	eSndWhere_UpdateFireCallbacks,
	eSndWhere_UpdateFlushAsync,
	eSndWhere_DelayFrame,
	eSndWhere_PlayStart,
	eSndWhere_PlayTrigger,
	eSndWhere_PlaySndAsync,
	eSndWhere_PlaySndDone,
	eSndWhere_PlayExternalAsync,
	eSndWhere_PlayExternalWait,
	eSndWhere_PlayExternalDone,
	eSndWhere_PlayStream,
	eSndWhere_PlayStreamAsync,
	eSndWhere_PlayStreamDone,
	eSndWhere_StartStereo,
	eSndWhere_FindFreeVoice,
	eSndWhere_Pause
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
	type_20 categoryVolFader;
	type_1 voice;
	type_3 listenerMat;
	sound_listener_game_mode listenerMode;
	unsigned int suspendCD;
	xVec3 right;
	xVec3 up;
	xVec3 at;
	xVec3 pos;
};

type_11 buffer;
type_14 buffer;
type_6 gSndWhere_str;
eSndWhereEnum gSndWhere;
type_9 eeFiles;
int eeFileCount;
type_5 currentStatus;
type_13 externalCallback;
unsigned int currentSPUAddress;
xSndGlobals gSnd;

void iSndStereo(unsigned int stereo);
void iSndSetExternalCallback(type_4 callback);
void iSndLoadExternalData(unsigned int snd, void* data, int forceBuffer);
void iSndWaitForDeadSounds();
void iSndSetPitch(unsigned int snd, float pitch);
float iSndGetVol(unsigned int snd);
void iSndSetVol(unsigned int snd, float vol);
void iSndStop(unsigned int snd);
void iSndPause(unsigned int snd, unsigned int pause);
unsigned int iSndFindFreeVoice(unsigned int priority, unsigned int flags, unsigned int owner);
void iSndStartStereo(unsigned int id1, unsigned int id2, float pitch);
unsigned char iSndIsReady(unsigned int id);
unsigned int iSndPlay(xSndVoiceInfo* vp);
unsigned char iSndIsPlayingByHandle(unsigned int id);
unsigned char iSndIsPlaying(unsigned int assetID, unsigned int parid);
unsigned char iSndIsPlaying(unsigned int assetID);
void iSndUpdate();
iSndVol iSndCalcVol(xSndVoiceInfo* vp);
void iSndSetEnvironmentalEffect();
void iSndExit();
void iSndInitSceneLoaded();
void iSndLoadFasterer();
void iSndInit();
void iSndSuspendCD();
iSndFileInfo* iSndLookup(unsigned int id);

// iSndStereo__FUi
// Start address: 0x1b80c0
void iSndStereo(unsigned int stereo)
{
}

// iSndSetExternalCallback__FPFUib_v
// Start address: 0x1b80d0
void iSndSetExternalCallback(type_4 callback)
{
}

// iSndLoadExternalData__FUiPCvi
// Start address: 0x1b80e0
void iSndLoadExternalData(unsigned int snd, void* data, int forceBuffer)
{
	xSndVoiceInfo* vp;
	int i;
}

// iSndWaitForDeadSounds__Fv
// Start address: 0x1b81a0
void iSndWaitForDeadSounds()
{
	int i;
	int numdelay;
	unsigned long zombies;
	xSndVoiceInfo* vp;
}

// iSndSetPitch__FUif
// Start address: 0x1b8290
void iSndSetPitch(unsigned int snd, float pitch)
{
	int i;
}

// iSndGetVol__FUi
// Start address: 0x1b83e0
float iSndGetVol(unsigned int snd)
{
	xSndVoiceInfo* vp;
	int i;
}

// iSndSetVol__FUif
// Start address: 0x1b8470
void iSndSetVol(unsigned int snd, float vol)
{
	xSndVoiceInfo* vp;
	int i;
}

// iSndStop__FUi
// Start address: 0x1b8660
void iSndStop(unsigned int snd)
{
	int i;
}

// iSndPause__FUiUi
// Start address: 0x1b8720
void iSndPause(unsigned int snd, unsigned int pause)
{
	int i;
}

// iSndFindFreeVoice__FUiUiUi
// Start address: 0x1b87b0
unsigned int iSndFindFreeVoice(unsigned int priority, unsigned int flags, unsigned int owner)
{
	unsigned int i;
	unsigned int vlo;
	unsigned int vhi;
	unsigned int best;
	unsigned int bestpri;
	int bestvol;
	xSndVoiceInfo* vp;
	xSndVoiceInfo* begin;
	xSndVoiceInfo* end;
	xSndVoiceInfo* v;
	int volR;
	int L;
	int R;
}

// iSndStartStereo__FUiUif
// Start address: 0x1b8b40
void iSndStartStereo(unsigned int id1, unsigned int id2, float pitch)
{
	int v1;
	int v2;
}

// iSndIsReady__FUi
// Start address: 0x1b8d10
unsigned char iSndIsReady(unsigned int id)
{
	int v;
}

// iSndPlay__FP13xSndVoiceInfo
// Start address: 0x1b8d90
unsigned int iSndPlay(xSndVoiceInfo* vp)
{
	iSndVol nvol;
	unsigned int voice;
	iSndFileInfo* file;
	iSndFileInfo* file;
	unsigned char loop;
	unsigned char paused;
	unsigned int offset;
	unsigned int track;
	unsigned int numTracks;
}

// iSndIsPlayingByHandle__FUi
// Start address: 0x1b91f0
unsigned char iSndIsPlayingByHandle(unsigned int id)
{
	int i;
}

// iSndIsPlaying__FUiUi
// Start address: 0x1b9260
unsigned char iSndIsPlaying(unsigned int assetID, unsigned int parid)
{
	int i;
}

// iSndIsPlaying__FUi
// Start address: 0x1b92d0
unsigned char iSndIsPlaying(unsigned int assetID)
{
	int i;
}

// iSndUpdate__Fv
// Start address: 0x1b9330
void iSndUpdate()
{
	int i;
	xSndVoiceInfo* vp;
	unsigned char active;
	int i;
	xSndVoiceInfo* vp;
	iSndVol nvol;
	int i;
	xSndVoiceInfo* vp;
	int testBuffer;
}

// iSndCalcVol__FP13xSndVoiceInfo
// Start address: 0x1b95e0
iSndVol iSndCalcVol(xSndVoiceInfo* vp)
{
	float volL;
	float volR;
	xVec3 to;
	float pan;
	float volscale;
	float fadeRange;
	float tmp;
}

// iSndSetEnvironmentalEffect__F13isound_effect
// Start address: 0x1b98f0
void iSndSetEnvironmentalEffect()
{
}

// iSndExit__Fv
// Start address: 0x1b9900
void iSndExit()
{
}

// iSndInitSceneLoaded__Fv
// Start address: 0x1b9910
void iSndInitSceneLoaded()
{
}

// iSndLoadFasterer__Fv
// Start address: 0x1b9940
void iSndLoadFasterer()
{
	unsigned int size;
	int index;
	SndInfo* sndInfo;
	VAGheader* vagIterator;
	st_PKR_ASSET_TOCINFO xinfo;
	char* hipname;
	int fileIndex;
	unsigned int startSPUAddress;
	unsigned int totalToRead;
	int i;
	iSndFileInfo* file;
	int i;
	st_PKR_ASSET_TOCINFO xinfo;
	iSndFileInfo* file;
}

// iSndInit__Fv
// Start address: 0x1b9bb0
void iSndInit()
{
}

// iSndSuspendCD__FUi
// Start address: 0x1b9bc0
void iSndSuspendCD()
{
}

// iSndLookup__FUi
// Start address: 0x1b9bf0
iSndFileInfo* iSndLookup(unsigned int id)
{
	int i;
}

