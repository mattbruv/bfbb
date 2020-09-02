typedef struct _sif_serve_data;
typedef struct HISRemoteVoiceTransStatusParameter;
typedef struct HISGetRequestDebugParameter;
typedef struct HISGetRequestStatusParameter;
typedef struct _sif_queue_data;
typedef struct HISGetRequestDebugReturn;
typedef struct HISLoadBlockAsyncReturn;
typedef struct HISFlushHostIOHandlesReturn;
typedef struct HISInitParameter;
typedef struct HISPauseVoiceParameter;
typedef struct HISGetSoundDebugVoiceReturn;
typedef struct HISDelayFrameParameter;
typedef struct HISGetRequestStatusReturn;
typedef struct HISRemoteBlockTransStatusParameter;
typedef struct HISGetRequestCountParameter;
typedef struct HISGetFileSizeParameter;
typedef struct HISSetVoicePitchParameter;
typedef struct HISSetVoiceVolumeParameter;
typedef struct HISPlaySoundParameter;
typedef struct HISPauseVoiceReturn;
typedef struct _sif_rpc_data;
typedef struct HISRemoteVoiceTransStatusReturn;
typedef struct HISGetSoundDebugVoiceParameter;
typedef struct HISDelayFrameReturn;
typedef struct HISSoundDebug;
typedef struct HISJoinStereoVoicesParameter;
typedef struct HISGetExternalStreamBufferParameter;
typedef struct HISInitReturn;
typedef struct HISPlayStreamReturn;
typedef struct HISSetVoiceVolumeReturn;
typedef struct HISPlaySoundReturn;
typedef struct HISGetRequestCountReturn;
typedef struct HISGetFileSizeReturn;
typedef struct HISResumeVoiceParameter;
typedef struct HISRemoteBlockTransStatusReturn;
typedef struct HISSetVoicePitchReturn;
typedef struct HISGetFirstValidRequestParameter;
typedef struct HISGetVoiceStatusParameter;
typedef struct HISGetSoundDebugParameter;
typedef struct HISResumeVoiceReturn;
typedef struct HISJoinStereoVoicesReturn;
typedef struct HISGetExternalStreamBufferReturn;
typedef enum HISMediaType;
typedef struct HISRemoteSetParamParameter;
typedef struct HISNullParameter;
typedef struct HISGetVersionParameter;
typedef struct HISGetFirstValidRequestReturn;
typedef struct _sif_client_data;
typedef struct HISRemoteSetParamReturn;
typedef struct HISSetMasterVolumeParameter;
typedef struct HISGetSoundDebugReturn;
typedef struct HISGetFreeRequestCountParameter;
typedef struct HISCancelRequestParameter;
typedef enum HISMemoryType;
typedef struct HISGetVoiceStatusReturn;
typedef struct HISFileIndexDebug;
typedef struct HISFlushHostIOHandlesParameter;
typedef struct HISPlayStreamParameter;
typedef struct HISStopVoiceParameter;
typedef struct HISNullReturn;
typedef struct HISRemoteVoiceTransParameter;
typedef struct HISSetMasterVolumeReturn;
typedef struct HISGetVersionReturn;
typedef struct HISCancelRequestReturn;
typedef struct HISGetFileIndexParameter;
typedef struct HISPlayExternalStreamParameter;
typedef enum HISStatus;
typedef struct HISGetFreeRequestCountReturn;
typedef struct HISStopVoiceReturn;
typedef struct HISGetFileIndexReturn;
typedef struct HISTestParameter;
typedef struct HISSoundDebugVoice;
typedef struct HISRemoteVoiceTransReturn;
typedef struct HISGetFileIndexDebugParameter;
typedef struct HISCloseRequestParameter;
typedef struct HISRemoteBlockTransParameter;
typedef struct HISGetFileIndexDebugReturn;
typedef struct HISPlayExternalStreamReturn;
typedef struct HISWaitForRequestParameter;
typedef struct HISCloseRequestReturn;
typedef struct HISRequestDebug;
typedef struct HISRemoteBlockTransReturn;
typedef union _class;
typedef struct HISTestReturn;
typedef struct HISLoadBlockAsyncParameter;
typedef struct HISWaitForRequestReturn;
typedef struct HISWaitForAllRequestsParameter;
typedef struct HISLoadExternalStreamParameter;
typedef struct HISWaitForAllRequestsReturn;
typedef struct HISLoadExternalStreamReturn;

typedef void(*type_19)(void*);
typedef void*(*type_61)(unsigned int, void*, int);

typedef char type_0[20];
typedef char type_1[17];
typedef char type_2[18];
typedef char type_3[44];
typedef char type_4[17];
typedef char type_5[20];
typedef char type_6[22];
typedef char type_7[36];
typedef char type_8[17];
typedef char type_9[20];
typedef char type_10[17];
typedef char type_11[17];
typedef char type_12[17];
typedef char type_13[48];
typedef char type_14[18];
typedef char type_15[20];
typedef char type_16[20];
typedef char type_17[17];
typedef char type_18[20];
typedef char type_20[20];
typedef char type_21[17];
typedef char type_22[20];
typedef char type_23[20];
typedef char type_24[17];
typedef char type_25[20];
typedef char type_26[20];
typedef char type_27[17];
typedef char type_28[48];
typedef char type_29[17];
typedef char type_30[20];
typedef unsigned int type_31[2];
typedef char type_32[17];
typedef char type_33[17];
typedef char type_34[20];
typedef char type_35[64];
typedef char type_36[17];
typedef char type_37[17];
typedef char type_38[20];
typedef char type_39[20];
typedef char type_40[20];
typedef char type_41[20];
typedef char type_42[20];
typedef char type_43[32];
typedef char type_44[48];
typedef char type_45[20];
typedef char type_46[32];
typedef char type_47[64];
typedef char type_48[76];
typedef char type_49[17];
typedef char type_50[17];
typedef char type_51[48];
typedef char type_52[20];
typedef char type_53[20];
typedef char type_54[20];
typedef char type_55[20];
typedef char type_56[17];
typedef char type_57[44];
typedef char type_58[36];
typedef char type_59[17];
typedef char type_60[20];
typedef char type_62[17];
typedef char type_63[17];
typedef char type_64[17];
typedef char type_65[20];
typedef char type_66[17];
typedef char type_67[84];
typedef char type_68[17];
typedef char type_69[20];
typedef char type_70[17];
typedef char type_71[24];
typedef char type_72[20];
typedef char type_73[17];
typedef char type_74[20];
typedef char type_75[17];
typedef char type_76[20];
typedef char type_77[17];
typedef char type_78[18];
typedef char type_79[24];
typedef char type_80[17];
typedef char type_81[17];
typedef char type_82[17];
typedef char type_83[20];

struct _sif_serve_data
{
	unsigned int command;
	type_61 func;
	void* buff;
	int size;
	type_61 cfunc;
	void* cbuff;
	int csize;
	_sif_client_data* client;
	void* paddr;
	unsigned int fno;
	void* receive;
	int rsize;
	int rmode;
	unsigned int rid;
	_sif_serve_data* link;
	_sif_serve_data* next;
	_sif_queue_data* base;
};

struct HISRemoteVoiceTransStatusParameter
{
	short channel;
	short flag;
};

struct HISGetRequestDebugParameter
{
	int requestID;
};

struct HISGetRequestStatusParameter
{
	int requestID;
};

struct _sif_queue_data
{
	int key;
	int active;
	_sif_serve_data* link;
	_sif_serve_data* start;
	_sif_serve_data* end;
	_sif_queue_data* next;
};

struct HISGetRequestDebugReturn
{
	HISRequestDebug requestDebug;
};

struct HISLoadBlockAsyncReturn
{
	int requestID;
};

struct HISFlushHostIOHandlesReturn
{
};

struct HISInitParameter
{
	HISMediaType mediaType;
};

struct HISPauseVoiceParameter
{
	unsigned short voice;
};

struct HISGetSoundDebugVoiceReturn
{
	HISSoundDebugVoice soundDebugVoice;
};

struct HISDelayFrameParameter
{
};

struct HISGetRequestStatusReturn
{
	HISStatus currentStatus;
};

struct HISRemoteBlockTransStatusParameter
{
	short channel;
	short flag;
};

struct HISGetRequestCountParameter
{
};

struct HISGetFileSizeParameter
{
	int fileIndex;
};

struct HISSetVoicePitchParameter
{
	unsigned short voice;
	unsigned short pitch;
};

struct HISSetVoiceVolumeParameter
{
	unsigned short voice;
	unsigned short leftVolume;
	unsigned short rightVolume;
};

struct HISPlaySoundParameter
{
	unsigned int address;
	unsigned short voice;
	unsigned short leftVolume;
	unsigned short rightVolume;
	unsigned short pitch;
	unsigned short attack;
	unsigned short release;
	unsigned char paused;
};

struct HISPauseVoiceReturn
{
};

struct _sif_rpc_data
{
	void* paddr;
	unsigned int pid;
	int tid;
	unsigned int mode;
};

struct HISRemoteVoiceTransStatusReturn
{
	unsigned int ret;
};

struct HISGetSoundDebugVoiceParameter
{
	int voice;
};

struct HISDelayFrameReturn
{
};

struct HISSoundDebug
{
	unsigned short leftVolume;
	unsigned short rightVolume;
};

struct HISJoinStereoVoicesParameter
{
	unsigned short voice1;
	unsigned short voice2;
};

struct HISGetExternalStreamBufferParameter
{
	int voice;
};

struct HISInitReturn
{
};

struct HISPlayStreamReturn
{
};

struct HISSetVoiceVolumeReturn
{
};

struct HISPlaySoundReturn
{
};

struct HISGetRequestCountReturn
{
	int count;
};

struct HISGetFileSizeReturn
{
	int size;
};

struct HISResumeVoiceParameter
{
	unsigned short voice;
};

struct HISRemoteBlockTransStatusReturn
{
	unsigned int ret;
};

struct HISSetVoicePitchReturn
{
};

struct HISGetFirstValidRequestParameter
{
};

struct HISGetVoiceStatusParameter
{
};

struct HISGetSoundDebugParameter
{
};

struct HISResumeVoiceReturn
{
};

struct HISJoinStereoVoicesReturn
{
};

struct HISGetExternalStreamBufferReturn
{
	int buffer;
};

enum HISMediaType
{
	HIS_MEDIA_CDROM,
	HIS_MEDIA_DVD,
	HIS_MEDIA_HOSTIO
};

struct HISRemoteSetParamParameter
{
	unsigned short reg;
	unsigned short value;
};

struct HISNullParameter
{
};

struct HISGetVersionParameter
{
};

struct HISGetFirstValidRequestReturn
{
	int request;
};

struct _sif_client_data
{
	_sif_rpc_data rpcd;
	unsigned int command;
	void* buff;
	void* cbuff;
	type_19 func;
	void* para;
	_sif_serve_data* serve;
};

struct HISRemoteSetParamReturn
{
};

struct HISSetMasterVolumeParameter
{
	unsigned short leftVolume;
	unsigned short rightVolume;
};

struct HISGetSoundDebugReturn
{
	HISSoundDebug soundDebug;
};

struct HISGetFreeRequestCountParameter
{
};

struct HISCancelRequestParameter
{
	int requestID;
};

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
};

struct HISGetVoiceStatusReturn
{
	type_31 status;
};

struct HISFileIndexDebug
{
	int logicalSectorNumber;
	int size;
	int sizeInSectors;
	type_44 name;
};

struct HISFlushHostIOHandlesParameter
{
};

struct HISPlayStreamParameter
{
	int fileIndex;
	int logicalSectorNumber;
	int dataSize;
	int blockSize;
	unsigned short voice;
	unsigned short leftVolume;
	unsigned short rightVolume;
	unsigned short pitch;
	unsigned short flags;
	unsigned short attack;
	unsigned short release;
	unsigned short interleaveSectors;
};

struct HISStopVoiceParameter
{
	unsigned short voice;
};

struct HISNullReturn
{
};

struct HISRemoteVoiceTransParameter
{
	short channel;
	unsigned short mode;
	unsigned char* m_addr;
	unsigned int s_addr;
	unsigned int size;
};

struct HISSetMasterVolumeReturn
{
};

struct HISGetVersionReturn
{
	int version;
};

struct HISCancelRequestReturn
{
	unsigned char success;
};

struct HISGetFileIndexParameter
{
	type_51 filename;
};

struct HISPlayExternalStreamParameter
{
	int blockSize;
	unsigned short voice;
	unsigned short leftVolume;
	unsigned short rightVolume;
	unsigned short pitch;
	unsigned short flags;
	unsigned short attack;
	unsigned short release;
};

enum HISStatus
{
	HIS_STATUS_INVALID_ID,
	HIS_STATUS_DONE,
	HIS_STATUS_IN_PROGRESS,
	HIS_STATUS_IN_QUEUE,
	HIS_STATUS_PARTIAL,
	HIS_STATUS_FAILED,
	HIS_STATUS_CANCELLED,
	HIS_STATUS_DMA_WAIT
};

struct HISGetFreeRequestCountReturn
{
	int count;
};

struct HISStopVoiceReturn
{
};

struct HISGetFileIndexReturn
{
	int index;
};

struct HISTestParameter
{
	int testValue;
	type_47 testString;
};

struct HISSoundDebugVoice
{
	unsigned int address;
	unsigned short leftVolume;
	unsigned short rightVolume;
	unsigned short pitch;
	unsigned short envelope;
	unsigned char kon;
	unsigned char koff;
	unsigned char endx;
	unsigned char external;
	unsigned char streaming;
	unsigned char reading;
	unsigned char readingBuffer;
	unsigned char byteMode;
	union
	{
		int currentSector;
		int currentOffset;
	};
	int sectorsLeft;
	int dataSize;
};

struct HISRemoteVoiceTransReturn
{
	int ret;
};

struct HISGetFileIndexDebugParameter
{
	int fileIndex;
};

struct HISCloseRequestParameter
{
	int requestID;
};

struct HISRemoteBlockTransParameter
{
	short channel;
	unsigned short mode;
	unsigned char* m_addr;
	unsigned int size;
	unsigned char* start_addr;
};

struct HISGetFileIndexDebugReturn
{
	HISFileIndexDebug fileIndexDebug;
};

struct HISPlayExternalStreamReturn
{
};

struct HISWaitForRequestParameter
{
};

struct HISCloseRequestReturn
{
	unsigned char success;
};

struct HISRequestDebug
{
	_class small;
	int destination;
	int currentPriority;
	int originalPriority;
	int fileIndex;
	int startSector;
	int sectorsToRead;
};

struct HISRemoteBlockTransReturn
{
	int ret;
};

union _class
{
	int nextRequest;
	HISStatus status;
	HISMemoryType destinationType;
};

struct HISTestReturn
{
	int returnValue;
};

struct HISLoadBlockAsyncParameter
{
	int fileIndex;
	int sourceBlock;
	int sourceSize;
	void* destinationAddress;
	HISMemoryType destinationType;
	int priority;
	int flags;
};

struct HISWaitForRequestReturn
{
};

struct HISWaitForAllRequestsParameter
{
};

struct HISLoadExternalStreamParameter
{
	unsigned short voice;
	unsigned short buffer;
	void* address;
};

struct HISWaitForAllRequestsReturn
{
};

struct HISLoadExternalStreamReturn
{
};

_sif_client_data clientData;
unsigned char asyncFire;

void HISRemoteSetParam(unsigned short reg, unsigned short value);
int HISRemoteVoiceTrans(short channel, unsigned short mode, unsigned char* m_addr, unsigned int s_addr, unsigned int size);
unsigned int HISRemoteBlockTransStatus(short channel, short flag);
int HISRemoteBlockTrans(short channel, unsigned short mode, unsigned char* m_addr, unsigned int size, unsigned char* start_addr);
int HISGetExternalStreamBuffer(int voice);
void HISLoadExternalStream(int voice, int buffer, void* address);
void HISSetMasterVolume(int leftVolume, int rightVolume);
void HISGetVoiceStatus(unsigned int* data);
void _HISBatchSoundCommandsNoWait(void* data, int size);
void HISBatchSoundCommands(void* data, int size);
void HISGetFileIndexDebug(int fileIndex, HISFileIndexDebug* fileIndexDebug);
int HISGetFirstValidRequest();
void HISGetRequestDebug(int requestID, HISRequestDebug* requestDebug);
void HISFlushHostIOHandles();
int HISGetFileSize(int fileIndex);
void HISWaitForRequest();
unsigned char HISCloseRequest(int requestID);
unsigned char HISCancelRequest(int requestID);
HISStatus HISGetRequestStatus(int requestID);
int HISLoadBlockAsync(int fileIndex, int sourceBlock, int sourceSize, void* destinationAddress, HISMemoryType destinationType, int priority, int flags);
int HISGetFileIndex(char* filename);
int HISGetVersion();
void HISInit(HISMediaType mediaType);
void HISInitStubs();

// HISRemoteSetParam__FUsUs
// Start address: 0x34a4d0
void HISRemoteSetParam(unsigned short reg, unsigned short value)
{
	type_18 inputBuffer;
	HISRemoteSetParamParameter* input;
	type_24 outputBuffer;
	HISRemoteSetParamReturn* output;
}

// HISRemoteVoiceTrans__FsUsPUcUiUi
// Start address: 0x34a580
int HISRemoteVoiceTrans(short channel, unsigned short mode, unsigned char* m_addr, unsigned int s_addr, unsigned int size)
{
	type_46 inputBuffer;
	HISRemoteVoiceTransParameter* input;
	type_54 outputBuffer;
	HISRemoteVoiceTransReturn* output;
}

// HISRemoteBlockTransStatus__Fss
// Start address: 0x34a670
unsigned int HISRemoteBlockTransStatus(short channel, short flag)
{
	type_15 inputBuffer;
	HISRemoteBlockTransStatusParameter* input;
	type_20 outputBuffer;
	HISRemoteBlockTransStatusReturn* output;
}

// HISRemoteBlockTrans__FsUsPUcUiPUc
// Start address: 0x34a720
int HISRemoteBlockTrans(short channel, unsigned short mode, unsigned char* m_addr, unsigned int size, unsigned char* start_addr)
{
	type_43 inputBuffer;
	HISRemoteBlockTransParameter* input;
	type_53 outputBuffer;
	HISRemoteBlockTransReturn* output;
}

// HISGetExternalStreamBuffer__Fi
// Start address: 0x34a810
int HISGetExternalStreamBuffer(int voice)
{
	type_23 inputBuffer;
	HISGetExternalStreamBufferParameter* input;
	type_30 outputBuffer;
	HISGetExternalStreamBufferReturn* output;
}

// HISLoadExternalStream__FiiPCv
// Start address: 0x34a8c0
void HISLoadExternalStream(int voice, int buffer, void* address)
{
	type_79 inputBuffer;
	HISLoadExternalStreamParameter* input;
	type_81 outputBuffer;
	HISLoadExternalStreamReturn* output;
}

// HISSetMasterVolume__Fii
// Start address: 0x34a980
void HISSetMasterVolume(int leftVolume, int rightVolume)
{
	type_22 inputBuffer;
	HISSetMasterVolumeParameter* input;
	type_29 outputBuffer;
	HISSetMasterVolumeReturn* output;
}

// HISGetVoiceStatus__FPUi
// Start address: 0x34aa30
void HISGetVoiceStatus(unsigned int* data)
{
	type_62 inputBuffer;
	HISGetVoiceStatusParameter* input;
	type_71 outputBuffer;
	HISGetVoiceStatusReturn* output;
	int i;
}

// _HISBatchSoundCommandsNoWait__FPCvi
// Start address: 0x34aaf0
void _HISBatchSoundCommandsNoWait(void* data, int size)
{
}

// HISBatchSoundCommands__FPCvi
// Start address: 0x34ab70
void HISBatchSoundCommands(void* data, int size)
{
}

// HISGetFileIndexDebug__FiP17HISFileIndexDebug
// Start address: 0x34abf0
void HISGetFileIndexDebug(int fileIndex, HISFileIndexDebug* fileIndexDebug)
{
	type_41 inputBuffer;
	HISGetFileIndexDebugParameter* input;
	type_48 outputBuffer;
	HISGetFileIndexDebugReturn* output;
}

// HISGetFirstValidRequest__Fv
// Start address: 0x34acf0
int HISGetFirstValidRequest()
{
	type_37 inputBuffer;
	HISGetFirstValidRequestParameter* input;
	type_40 outputBuffer;
	HISGetFirstValidRequestReturn* output;
}

// HISGetRequestDebug__FiP15HISRequestDebug
// Start address: 0x34ad80
void HISGetRequestDebug(int requestID, HISRequestDebug* requestDebug)
{
	type_83 inputBuffer;
	HISGetRequestDebugParameter* input;
	type_3 outputBuffer;
	HISGetRequestDebugReturn* output;
}

// HISFlushHostIOHandles__Fv
// Start address: 0x34ae70
void HISFlushHostIOHandles()
{
	type_82 inputBuffer;
	HISFlushHostIOHandlesParameter* input;
	type_1 outputBuffer;
	HISFlushHostIOHandlesReturn* output;
}

// HISGetFileSize__Fi
// Start address: 0x34af00
int HISGetFileSize(int fileIndex)
{
	type_69 inputBuffer;
	HISGetFileSizeParameter* input;
	type_76 outputBuffer;
	HISGetFileSizeReturn* output;
}

// HISWaitForRequest__Fv
// Start address: 0x34afb0
void HISWaitForRequest()
{
	type_70 inputBuffer;
	HISWaitForRequestParameter* input;
	type_77 outputBuffer;
	HISWaitForRequestReturn* output;
}

// HISCloseRequest__Fi
// Start address: 0x34b040
unsigned char HISCloseRequest(int requestID)
{
	type_42 inputBuffer;
	HISCloseRequestParameter* input;
	type_50 outputBuffer;
	HISCloseRequestReturn* output;
}

// HISCancelRequest__Fi
// Start address: 0x34b0f0
unsigned char HISCancelRequest(int requestID)
{
	type_25 inputBuffer;
	HISCancelRequestParameter* input;
	type_32 outputBuffer;
	HISCancelRequestReturn* output;
}

// HISGetRequestStatus__Fi
// Start address: 0x34b1a0
HISStatus HISGetRequestStatus(int requestID)
{
	type_0 inputBuffer;
	HISGetRequestStatusParameter* input;
	type_5 outputBuffer;
	HISGetRequestStatusReturn* output;
}

// HISLoadBlockAsync__FiiiPv13HISMemoryTypeii
// Start address: 0x34b250
int HISLoadBlockAsync(int fileIndex, int sourceBlock, int sourceSize, void* destinationAddress, HISMemoryType destinationType, int priority, int flags)
{
	type_57 inputBuffer;
	HISLoadBlockAsyncParameter* input;
	type_60 outputBuffer;
	HISLoadBlockAsyncReturn* output;
}

// HISGetFileIndex__FPCc
// Start address: 0x34b370
int HISGetFileIndex(char* filename)
{
	type_35 inputBuffer;
	HISGetFileIndexParameter* input;
	type_38 outputBuffer;
	HISGetFileIndexReturn* output;
}

// HISGetVersion__Fv
// Start address: 0x34b420
int HISGetVersion()
{
	type_27 inputBuffer;
	HISGetVersionParameter* input;
	type_34 outputBuffer;
	HISGetVersionReturn* output;
}

// HISInit__F12HISMediaType
// Start address: 0x34b4b0
void HISInit(HISMediaType mediaType)
{
	type_16 inputBuffer;
	HISInitParameter* input;
	type_21 outputBuffer;
	HISInitReturn* output;
}

// HISInitStubs__Fv
// Start address: 0x34b550
void HISInitStubs()
{
}

