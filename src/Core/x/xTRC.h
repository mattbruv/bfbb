#ifndef XTRC_H
#define XTRC_H

#include <types.h>
#include "../p2/iPad.h"

extern _tagTRCPadInfo gTrcPad[4];

void xTRCPad(int32 pad_id, _tagTRCState state);

#endif