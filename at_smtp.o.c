#include "at_smtp.o.h"



void UndefinedInstruction(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    uVar1 = (unaff_r8 ^ param_2 & unaff_r4 >> (param_2 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_r10 >> uVar1 - 1) & 1);
    param_1 = (int *)(unaff_r7 ^ unaff_r10 >> uVar1);
    in_ZR = param_1 == (int *)0x0;
  }
  if (in_ZR) {
    param_1 = (int *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 5;
  }
  do {
    uVar1 = FUN_00000048(unaff_r5,200);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}



void SupervisorCall(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    uVar1 = (unaff_r8 ^ param_2 & unaff_r4 >> (param_2 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_r10 >> uVar1 - 1) & 1);
    param_1 = (int *)(unaff_r7 ^ unaff_r10 >> uVar1);
    in_ZR = param_1 == (int *)0x0;
  }
  if (in_ZR) {
    param_1 = (int *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 5;
  }
  do {
    uVar1 = FUN_00000048(unaff_r5,200);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}



void PrefetchAbort(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    uVar1 = (unaff_r8 ^ param_2 & unaff_r4 >> (param_2 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_r10 >> uVar1 - 1) & 1);
    param_1 = (int *)(unaff_r7 ^ unaff_r10 >> uVar1);
    in_ZR = param_1 == (int *)0x0;
  }
  if (in_ZR) {
    param_1 = (int *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 5;
  }
  do {
    uVar1 = FUN_00000048(unaff_r5,200);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}



void DataAbort(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    uVar1 = (unaff_r8 ^ param_2 & unaff_r4 >> (param_2 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_r10 >> uVar1 - 1) & 1);
    param_1 = (int *)(unaff_r7 ^ unaff_r10 >> uVar1);
    in_ZR = param_1 == (int *)0x0;
  }
  if (in_ZR) {
    param_1 = (int *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 5;
  }
  do {
    uVar1 = FUN_00000048(unaff_r5,200);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}



void NotUsed(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_ZR) {
    param_2 = (uint)param_1 & param_2;
    *(uint *)param_2 = param_2;
    uVar1 = (unaff_r8 ^ param_2 & unaff_r4 >> (param_2 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_r10 >> uVar1 - 1) & 1);
    param_1 = (int *)(unaff_r7 ^ unaff_r10 >> uVar1);
    in_ZR = param_1 == (int *)0x0;
  }
  if (in_ZR) {
    param_1 = (int *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 5;
  }
  do {
    uVar1 = FUN_00000048(unaff_r5,200);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}



void IRQ(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_ZR) {
    *(int **)param_1 = param_1;
    uVar1 = (unaff_r8 ^ (uint)param_1 & unaff_r4 >> ((uint)param_1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_r10 >> uVar1 - 1) & 1);
    param_1 = (int *)(unaff_r7 ^ unaff_r10 >> uVar1);
    in_ZR = param_1 == (int *)0x0;
  }
  if (in_ZR) {
    param_1 = (int *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 5;
  }
  do {
    uVar1 = FUN_00000048(unaff_r5,200);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}



void FIQ(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  uint unaff_r7;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  bool in_CY;
  code *UNRECOVERED_JUMPTABLE;
  
  if (in_ZR) {
    *(int **)param_1 = param_1;
    uVar1 = (unaff_r8 ^ (uint)param_1 & unaff_r4 >> ((uint)param_1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_r10 >> uVar1 - 1) & 1);
    param_1 = (int *)(unaff_r7 ^ unaff_r10 >> uVar1);
    in_ZR = param_1 == (int *)0x0;
  }
  if (in_ZR) {
    param_1 = (int *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = (int)param_1 - 5;
  }
  do {
    uVar1 = FUN_00000048(unaff_r5,200);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}



void FUN_00000048(char *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    uVar1 = FUN_00000048(param_1,param_2);
    if (uVar1 == 1) {
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    else {
      iVar2 = FUN_00000054(unaff_r5,0xd0);
      if (iVar2 == 1) {
        uVar1 = 2;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000060(unaff_r5,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
        goto LAB_00000090;
      }
      iVar2 = FUN_0000006c(unaff_r5,0xe4);
      if (iVar2 == 1) {
        uVar1 = 8;
        goto LAB_00000090;
      }
      iVar2 = FUN_00000078(unaff_r5,0xf0);
      if (iVar2 == 1) {
        uVar1 = 0x10;
        goto LAB_00000090;
      }
    }
    while (*unaff_r5 != ' ') {
      if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
        if ((int)(unaff_r4 << 0x1e) < 0) {
          uVar3 = 2;
        }
        else {
          if ((unaff_r4 & 1) == 0) {
            if (unaff_r4 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = 6;
            }
          }
          else {
            uVar3 = 1;
          }
        }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)(uVar3);
        return;
      }
      unaff_r5 = unaff_r5 + 1;
    }
    param_1 = unaff_r5 + 1;
    param_2 = 200;
    unaff_r5 = param_1;
  } while( true );
}



void FUN_00000054(char *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  while( true ) {
    iVar2 = FUN_00000054(param_1,param_2);
    if (iVar2 == 1) {
      uVar1 = 2;
      goto LAB_00000090;
    }
    iVar2 = FUN_00000060(unaff_r5,0xd8);
    if (iVar2 == 1) {
      uVar1 = 4;
      goto LAB_00000090;
    }
    iVar2 = FUN_0000006c(unaff_r5,0xe4);
    if (iVar2 == 1) {
      uVar1 = 8;
      goto LAB_00000090;
    }
    iVar2 = FUN_00000078(unaff_r5,0xf0);
    if (iVar2 == 1) break;
    while( true ) {
      while (*unaff_r5 != ' ') {
        if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
          if ((int)(unaff_r4 << 0x1e) < 0) {
            uVar3 = 2;
          }
          else {
            if ((unaff_r4 & 1) == 0) {
              if (unaff_r4 == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = 6;
              }
            }
            else {
              uVar3 = 1;
            }
          }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
          (*UNRECOVERED_JUMPTABLE)(uVar3);
          return;
        }
        unaff_r5 = unaff_r5 + 1;
      }
      param_1 = unaff_r5 + 1;
      uVar1 = FUN_00000048(param_1,200);
      unaff_r5 = param_1;
      if (uVar1 != 1) break;
LAB_00000090:
      unaff_r4 = unaff_r4 | uVar1;
    }
    param_2 = 0xd0;
  }
  uVar1 = 0x10;
  goto LAB_00000090;
}



void FUN_00000060(char *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x00000060:
  iVar2 = FUN_00000060(param_1,param_2);
  if (iVar2 == 1) {
    uVar1 = 4;
    goto LAB_00000090;
  }
  iVar2 = FUN_0000006c(unaff_r5,0xe4);
  if (iVar2 == 1) {
    uVar1 = 8;
    goto LAB_00000090;
  }
  iVar2 = FUN_00000078(unaff_r5,0xf0);
  if (iVar2 == 1) {
    uVar1 = 0x10;
    goto LAB_00000090;
  }
LAB_0000009e:
  while (*unaff_r5 != ' ') {
    if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
      if ((int)(unaff_r4 << 0x1e) < 0) {
        uVar3 = 2;
      }
      else {
        if ((unaff_r4 & 1) == 0) {
          if (unaff_r4 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          uVar3 = 1;
        }
      }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(uVar3);
      return;
    }
    unaff_r5 = unaff_r5 + 1;
  }
  param_1 = unaff_r5 + 1;
  uVar1 = FUN_00000048(param_1,200);
  unaff_r5 = param_1;
  if (uVar1 != 1) {
    iVar2 = FUN_00000054(param_1,0xd0);
    if (iVar2 != 1) goto code_r0x0000005c;
    uVar1 = 2;
  }
LAB_00000090:
  unaff_r4 = unaff_r4 | uVar1;
  goto LAB_0000009e;
code_r0x0000005c:
  param_2 = 0xd8;
  goto code_r0x00000060;
}



void FUN_0000006c(char *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x0000006c:
  iVar2 = FUN_0000006c(param_1,param_2);
  if (iVar2 == 1) {
    uVar1 = 8;
    goto LAB_00000090;
  }
  iVar2 = FUN_00000078(unaff_r5,0xf0);
  if (iVar2 == 1) {
    uVar1 = 0x10;
    goto LAB_00000090;
  }
LAB_0000009e:
  while (*unaff_r5 != ' ') {
    if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
      if ((int)(unaff_r4 << 0x1e) < 0) {
        uVar3 = 2;
      }
      else {
        if ((unaff_r4 & 1) == 0) {
          if (unaff_r4 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          uVar3 = 1;
        }
      }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(uVar3);
      return;
    }
    unaff_r5 = unaff_r5 + 1;
  }
  param_1 = unaff_r5 + 1;
  uVar1 = FUN_00000048(param_1,200);
  unaff_r5 = param_1;
  if (uVar1 != 1) {
    iVar2 = FUN_00000054(param_1,0xd0);
    if (iVar2 == 1) {
      uVar1 = 2;
    }
    else {
      iVar2 = FUN_00000060(param_1,0xd8);
      if (iVar2 != 1) goto code_r0x00000068;
      uVar1 = 4;
    }
  }
LAB_00000090:
  unaff_r4 = unaff_r4 | uVar1;
  goto LAB_0000009e;
code_r0x00000068:
  param_2 = 0xe4;
  goto code_r0x0000006c;
}



void FUN_00000078(char *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r4;
  char *unaff_r5;
  char *unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x00000078:
  iVar2 = FUN_00000078(param_1,param_2);
  if (iVar2 == 1) {
    uVar1 = 0x10;
    goto LAB_00000090;
  }
LAB_0000009e:
  while (*unaff_r5 != ' ') {
    if ((*unaff_r5 == '\r') || (unaff_r5 == unaff_r6)) {
      if ((int)(unaff_r4 << 0x1e) < 0) {
        uVar3 = 2;
      }
      else {
        if ((unaff_r4 & 1) == 0) {
          if (unaff_r4 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          uVar3 = 1;
        }
      }
                    // WARNING: Could not recover jumptable at 0x000000b2. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(uVar3);
      return;
    }
    unaff_r5 = unaff_r5 + 1;
  }
  param_1 = unaff_r5 + 1;
  uVar1 = FUN_00000048(param_1,200);
  unaff_r5 = param_1;
  if (uVar1 != 1) {
    iVar2 = FUN_00000054(param_1,0xd0);
    if (iVar2 == 1) {
      uVar1 = 2;
    }
    else {
      iVar2 = FUN_00000060(param_1,0xd8);
      if (iVar2 == 1) {
        uVar1 = 4;
      }
      else {
        iVar2 = FUN_0000006c(param_1,0xe4);
        if (iVar2 != 1) goto code_r0x00000074;
        uVar1 = 8;
      }
    }
  }
LAB_00000090:
  unaff_r4 = unaff_r4 | uVar1;
  goto LAB_0000009e;
code_r0x00000074:
  param_2 = 0xf0;
  goto code_r0x00000078;
}



undefined4 FUN_0000010e(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_r4;
  undefined2 uVar3;
  int unaff_r5;
  undefined4 unaff_r6;
  
  uVar3 = (undefined2)unaff_r5;
  uVar1 = FUN_0000010e();
  if (uVar1 < 2) {
    if (unaff_r5 == 0) {
      uVar3 = 0x19;
    }
    FUN_0000012a(unaff_r4 + 4);
    *(undefined2 *)(unaff_r4 + 8) = uVar3;
    *(undefined4 *)(unaff_r4 + 0xc) = unaff_r6;
    *(undefined *)(unaff_r4 + 2) = 0;
    *(undefined4 *)(unaff_r4 + 0x10) = 0;
    *(undefined *)(unaff_r4 + 10) = 0;
    FUN_0000013c(1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0000012a(void)

{
  int unaff_r4;
  undefined2 unaff_r5;
  undefined4 unaff_r6;
  
  FUN_0000012a();
  *(undefined2 *)(unaff_r4 + 8) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0xc) = unaff_r6;
  *(undefined *)(unaff_r4 + 2) = 0;
  *(undefined4 *)(unaff_r4 + 0x10) = 0;
  *(undefined *)(unaff_r4 + 10) = 0;
  FUN_0000013c(1);
  return 1;
}



undefined4 FUN_0000013c(void)

{
  FUN_0000013c();
  return 1;
}



void FUN_00000148(void)

{
  undefined uVar1;
  
  FUN_00000150(DAT_0000016c,0,0x14);
  uVar1 = FUN_0000015c(2,0,0,DAT_00000170);
  *(undefined *)(DAT_0000016c + 1) = uVar1;
  return;
}



void FUN_00000150(void)

{
  undefined uVar1;
  
  FUN_00000150();
  uVar1 = FUN_0000015c(2,0,0,DAT_00000170);
  *(undefined *)(DAT_0000016c + 1) = uVar1;
  return;
}



void FUN_0000015c(void)

{
  undefined uVar1;
  
  uVar1 = FUN_0000015c();
  *(undefined *)(DAT_0000016c + 1) = uVar1;
  return;
}



void FUN_000001ae(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000001ae();
                    // WARNING: Could not recover jumptable at 0x00000286. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}



void FUN_0000021a(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000021a();
                    // WARNING: Could not recover jumptable at 0x00000286. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(1);
  return;
}



void FUN_0000028a(void)

{
  int iVar1;
  
  iVar1 = FUN_0000028a();
  if (iVar1 == 1) {
    FUN_0000021a(5);
    return;
  }
  FUN_0000021a(7);
  return;
}



void FUN_00000384(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined param_5)

{
  int extraout_r1;
  undefined4 in_cr0;
  undefined in_stack_00000044;
  
  FUN_00000384();
  coprocessor_loadlong(0,in_cr0,register0x00000054);
  FUN_00000398(DAT_00000480,extraout_r1 >> 10);
  FUN_0000039e(0);
  FUN_000003a6(1,*(undefined4 *)((param_3 >> 4) + 0xc));
  return;
}



void FUN_00000398(void)

{
  int unaff_r4;
  
  FUN_00000398();
  FUN_0000039e(0);
  FUN_000003a6(1,*(undefined4 *)(unaff_r4 + 0xc));
  return;
}



void FUN_0000039e(void)

{
  int unaff_r4;
  
  FUN_0000039e();
  FUN_000003a6(1,*(undefined4 *)(unaff_r4 + 0xc));
  return;
}



void FUN_000003a6(void)

{
  FUN_000003a6();
  return;
}



// WARNING: This is an inlined function

void switch8_r3(void)

{
  byte bVar1;
  uint in_r3;
  int in_lr;
  
  if (in_r3 < (uint)*(byte *)(in_lr + -1)) {
    bVar1 = *(byte *)(in_lr + in_r3);
  }
  else {
    bVar1 = *(byte *)(in_lr + (uint)*(byte *)(in_lr + -1));
  }
                    // WARNING: Could not recover jumptable at 0x000006d4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


