#include "zEvent.h"

extern char* sEventTable[];

char* zEventName(unsigned int eventEnum) {
    return sEventTable[eventEnum];
}