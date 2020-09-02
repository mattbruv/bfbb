#include "zRenderState.h"

extern void RwRenderStateSet(int arg1, int arg2);
extern void iCameraSetFogRenderStates();
// extern int* lbl__558_3[];
extern void (*lbl__558_3[])(void);

void zRenderStateInit() {
    sRS = SDRS_Unknown;
}

_SDRenderState zRenderStateCurrent() {
    return sRS;
}

void zRenderState(_SDRenderState next) {
    if (sRS != next) {
        // testing
        RwRenderStateSet(9, 2);
        iCameraSetFogRenderStates();
        RwRenderStateSet(12, 1);
        RwRenderStateSet(0x14, 1);
        RwRenderStateSet(2, 1);
        RwRenderStateSet(0xa, 5);
        RwRenderStateSet(0xb, 6);
        RwRenderStateSet(7, 2);
        RwRenderStateSet(8, 1);
        RwRenderStateSet(6, 1);

        switch (next)
        {
        case SDRS_Unknown:
            // RwRenderStateSet(4, 2);
            break;
        default:
            break;
        }
    }
}