typedef enum HISMemoryType;
typedef enum HISStatus;


typedef char type[4096];

enum HISMemoryType
{
	HIS_MEMORY_EE,
	HIS_MEMORY_IOP,
	HIS_MEMORY_SPU
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

type asyncRequestBuffers;
char* asyncRequestBuffer;
int asyncRequestCurrent;

void HISFlushAsyncRequestsNoWait();
void HISFlushAsyncRequests();
void HISPlayExternalStreamAsync(int voice, int leftVolume, int rightVolume, int pitch, int flags, int attack, int release, int blockSize);
void HISJoinStereoVoicesAsync(int voice1, int voice2);
void HISResumeVoiceAsync(int voice);
void HISPauseVoiceAsync(int voice);
void HISStopVoiceAsync(int voice);
void HISSetVoicePitchAsync(int voice, int pitch);
void HISSetVoiceVolumeAsync(int voice, int leftVolume, int rightVolume);
void HISPlayStreamAsync(int voice, int leftVolume, int rightVolume, int pitch, int fileIndex, int logicalSectorNumber, int dataSize, int flags, int attack, int release, int blockSize, int interleaveSectors);
void HISPlaySoundAsync(int voice, int leftVolume, int rightVolume, int pitch, unsigned int address, int attack, int release, unsigned char paused);
HISStatus HISLoadBlock(int fileIndex, int sourceBlock, int sourceSize, void* destinationAddress, HISMemoryType destinationType, int priority, int flags);

// HISFlushAsyncRequestsNoWait__Fv
// Start address: 0x34b5a0
void HISFlushAsyncRequestsNoWait()
{
}

// HISFlushAsyncRequests__Fv
// Start address: 0x34b600
void HISFlushAsyncRequests()
{
}

// HISPlayExternalStreamAsync__Fiiiiiiii
// Start address: 0x34b630
void HISPlayExternalStreamAsync(int voice, int leftVolume, int rightVolume, int pitch, int flags, int attack, int release, int blockSize)
{
}

// HISJoinStereoVoicesAsync__Fii
// Start address: 0x34b690
void HISJoinStereoVoicesAsync(int voice1, int voice2)
{
}

// HISResumeVoiceAsync__Fi
// Start address: 0x34b6d0
void HISResumeVoiceAsync(int voice)
{
}

// HISPauseVoiceAsync__Fi
// Start address: 0x34b710
void HISPauseVoiceAsync(int voice)
{
}

// HISStopVoiceAsync__Fi
// Start address: 0x34b750
void HISStopVoiceAsync(int voice)
{
}

// HISSetVoicePitchAsync__Fii
// Start address: 0x34b790
void HISSetVoicePitchAsync(int voice, int pitch)
{
}

// HISSetVoiceVolumeAsync__Fiii
// Start address: 0x34b7d0
void HISSetVoiceVolumeAsync(int voice, int leftVolume, int rightVolume)
{
}

// HISPlayStreamAsync__Fiiiiiiiiiiii
// Start address: 0x34b810
void HISPlayStreamAsync(int voice, int leftVolume, int rightVolume, int pitch, int fileIndex, int logicalSectorNumber, int dataSize, int flags, int attack, int release, int blockSize, int interleaveSectors)
{
}

// HISPlaySoundAsync__FiiiiUiiib
// Start address: 0x34b890
void HISPlaySoundAsync(int voice, int leftVolume, int rightVolume, int pitch, unsigned int address, int attack, int release, unsigned char paused)
{
}

// HISLoadBlock__FiiiPv13HISMemoryTypeii
// Start address: 0x34b8f0
HISStatus HISLoadBlock(int fileIndex, int sourceBlock, int sourceSize, void* destinationAddress, HISMemoryType destinationType, int priority, int flags)
{
	int id;
	HISStatus status;
}

