#ifndef XSND_H
#define XSND_H

#include <types.h>

void xSndResume();
void xSndSuspend();
void xSndSetVol(uint32 snd, float32 vol);
void xSndSetPitch(uint32 snd, float32 pitch);

#endif