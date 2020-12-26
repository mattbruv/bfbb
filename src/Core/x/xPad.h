#ifndef XPAD_H
#define XPAD_H

#include <types.h>
#include "../p2/iPad.h"
#include "xVec3.h"

extern _tagxPad mPad[4];

void xPadAddRumble(int32 idx, _tagRumbleType type, float32 time, int32 replace, uint32 fxflags);
void xPadUpdate(int32, float32);

#endif