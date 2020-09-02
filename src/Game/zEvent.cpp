#include "zEvent.h"

extern char* sEventTable[];
char* foo[] = {
    "testing",
    "FOOBAR",
    "peen1",
    "peenasdfajskdfklasdflkasjdf;lkjas;lfkads;fskjsljsldllad2",
    "peenj",
    "pee31",
    "peehhh",
    "pen1",
    "pe1",
};

char* zEventName(unsigned int eventEnum) {
    return sEventTable[eventEnum];
}