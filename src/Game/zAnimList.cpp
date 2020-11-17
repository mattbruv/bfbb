#include <types.h>
#include "../Core/x/xAnim.h"
#include "zAnimList.h"

extern int32 nals;
extern uint32* aids;
extern xAnimTable** atbls;
extern int32* anused;
extern int8* astnames[20];

uint32          AlwaysConditional(xAnimTransition *tran,xAnimSingle *single, void *param_3)    {
  return 1;
}

// func_8004E7E8
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListInit__Fv")

void zAnimListExit() {
  nals = 0;
  aids = NULL;
  atbls = NULL;
  anused = NULL;
}

#if 1
xAnimTable* zAnimListGetTable(uint32 id) {
  int32 i = 0;
  uint32* var1 = aids;
  int32 var2 = nals;
  if (nals > 0) {
    for (i = 0; var2 != 0; i++) {
      if (*var1 == id) {
        return atbls[i];
      }
      var1++;
      var2--;
    }
  }
  /*
  if (nals > 0) {
    while (var2 != 0) {
      if (*var1 == id) {
        return atbls[i];
      }
      var1++;
      i++;
      var2--;
    }
  }
  */

  return NULL;
}
#else
// func_8004EB5C
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListGetTable__FUi")
#endif

// func_8004EBA4
#pragma GLOBAL_ASM("asm/Game/zAnimList.s", "zAnimListGetNumUsed__FUi")
