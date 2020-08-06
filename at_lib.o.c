#include "at_lib.o.h"



uint UndefinedInstruction(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r8;
  bool in_ZR;
  byte in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    uVar2 = uVar1 & unaff_r4 >> 1;
    *(uint *)uVar1 = uVar1;
    param_1 = ((uint)in_CY << 0x1f | unaff_r5 >> 1) - uVar2 & uVar2 & unaff_r8;
  }
  uVar1 = 0;
  while( true ) {
    if (*param_2 == 0) {
      return uVar1;
    }
    uVar2 = (uint)*param_2 << 0x10;
    uVar3 = 1;
    if (param_2[1] != 0) {
      uVar2 = uVar2 | (uint)param_2[1] << 8;
      uVar3 = 2;
      if (param_2[2] != 0) {
        uVar2 = uVar2 | param_2[2];
        uVar3 = 3;
      }
    }
    uVar1 = uVar1 + 4;
    FUN_0000006a(param_1,uVar2,uVar3);
    if (uVar3 < 3) break;
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
    if (0x4b < uVar1) {
      return uVar1;
    }
  }
  return uVar1;
}



uint SupervisorCall(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r8;
  bool in_ZR;
  byte in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    uVar2 = uVar1 & unaff_r4 >> 1;
    *(uint *)uVar1 = uVar1;
    param_1 = ((uint)in_CY << 0x1f | unaff_r5 >> 1) - uVar2 & uVar2 & unaff_r8;
  }
  uVar1 = 0;
  while( true ) {
    if (*param_2 == 0) {
      return uVar1;
    }
    uVar2 = (uint)*param_2 << 0x10;
    uVar3 = 1;
    if (param_2[1] != 0) {
      uVar2 = uVar2 | (uint)param_2[1] << 8;
      uVar3 = 2;
      if (param_2[2] != 0) {
        uVar2 = uVar2 | param_2[2];
        uVar3 = 3;
      }
    }
    uVar1 = uVar1 + 4;
    FUN_0000006a(param_1,uVar2,uVar3);
    if (uVar3 < 3) break;
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
    if (0x4b < uVar1) {
      return uVar1;
    }
  }
  return uVar1;
}



uint PrefetchAbort(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r8;
  bool in_ZR;
  byte in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    uVar2 = uVar1 & unaff_r4 >> 1;
    *(uint *)uVar1 = uVar1;
    param_1 = ((uint)in_CY << 0x1f | unaff_r5 >> 1) - uVar2 & uVar2 & unaff_r8;
  }
  uVar1 = 0;
  while( true ) {
    if (*param_2 == 0) {
      return uVar1;
    }
    uVar2 = (uint)*param_2 << 0x10;
    uVar3 = 1;
    if (param_2[1] != 0) {
      uVar2 = uVar2 | (uint)param_2[1] << 8;
      uVar3 = 2;
      if (param_2[2] != 0) {
        uVar2 = uVar2 | param_2[2];
        uVar3 = 3;
      }
    }
    uVar1 = uVar1 + 4;
    FUN_0000006a(param_1,uVar2,uVar3);
    if (uVar3 < 3) break;
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
    if (0x4b < uVar1) {
      return uVar1;
    }
  }
  return uVar1;
}



uint DataAbort(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r8;
  bool in_ZR;
  byte in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    uVar2 = uVar1 & unaff_r4 >> 1;
    *(uint *)uVar1 = uVar1;
    param_1 = ((uint)in_CY << 0x1f | unaff_r5 >> 1) - uVar2 & uVar2 & unaff_r8;
  }
  uVar1 = 0;
  while( true ) {
    if (*param_2 == 0) {
      return uVar1;
    }
    uVar2 = (uint)*param_2 << 0x10;
    uVar3 = 1;
    if (param_2[1] != 0) {
      uVar2 = uVar2 | (uint)param_2[1] << 8;
      uVar3 = 2;
      if (param_2[2] != 0) {
        uVar2 = uVar2 | param_2[2];
        uVar3 = 3;
      }
    }
    uVar1 = uVar1 + 4;
    FUN_0000006a(param_1,uVar2,uVar3);
    if (uVar3 < 3) break;
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
    if (0x4b < uVar1) {
      return uVar1;
    }
  }
  return uVar1;
}



uint NotUsed(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r8;
  bool in_ZR;
  byte in_CY;
  
  if (in_ZR) {
    param_1 = param_1 & (uint)param_2;
    uVar2 = param_1 & unaff_r4 >> 1;
    *(uint *)param_1 = param_1;
    param_1 = ((uint)in_CY << 0x1f | unaff_r5 >> 1) - uVar2 & uVar2 & unaff_r8;
  }
  uVar2 = 0;
  while( true ) {
    if (*param_2 == 0) {
      return uVar2;
    }
    uVar1 = (uint)*param_2 << 0x10;
    uVar3 = 1;
    if (param_2[1] != 0) {
      uVar1 = uVar1 | (uint)param_2[1] << 8;
      uVar3 = 2;
      if (param_2[2] != 0) {
        uVar1 = uVar1 | param_2[2];
        uVar3 = 3;
      }
    }
    uVar2 = uVar2 + 4;
    FUN_0000006a(param_1,uVar1,uVar3);
    if (uVar3 < 3) break;
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
    if (0x4b < uVar2) {
      return uVar2;
    }
  }
  return uVar2;
}



uint IRQ(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r8;
  bool in_ZR;
  byte in_CY;
  
  if (in_ZR) {
    uVar2 = param_1 & unaff_r4 >> 1;
    *(uint *)param_1 = param_1;
    param_1 = ((uint)in_CY << 0x1f | unaff_r5 >> 1) - uVar2 & uVar2 & unaff_r8;
  }
  uVar2 = 0;
  while( true ) {
    if (*param_2 == 0) {
      return uVar2;
    }
    uVar1 = (uint)*param_2 << 0x10;
    uVar3 = 1;
    if (param_2[1] != 0) {
      uVar1 = uVar1 | (uint)param_2[1] << 8;
      uVar3 = 2;
      if (param_2[2] != 0) {
        uVar1 = uVar1 | param_2[2];
        uVar3 = 3;
      }
    }
    uVar2 = uVar2 + 4;
    FUN_0000006a(param_1,uVar1,uVar3);
    if (uVar3 < 3) break;
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
    if (0x4b < uVar2) {
      return uVar2;
    }
  }
  return uVar2;
}



uint FIQ(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  uint unaff_r8;
  bool in_ZR;
  byte in_CY;
  
  if (in_ZR) {
    uVar2 = param_1 & unaff_r4 >> 1;
    *(uint *)param_1 = param_1;
    param_1 = ((uint)in_CY << 0x1f | unaff_r5 >> 1) - uVar2 & uVar2 & unaff_r8;
  }
  uVar2 = 0;
  while( true ) {
    if (*param_2 == 0) {
      return uVar2;
    }
    uVar1 = (uint)*param_2 << 0x10;
    uVar3 = 1;
    if (param_2[1] != 0) {
      uVar1 = uVar1 | (uint)param_2[1] << 8;
      uVar3 = 2;
      if (param_2[2] != 0) {
        uVar1 = uVar1 | param_2[2];
        uVar3 = 3;
      }
    }
    uVar2 = uVar2 + 4;
    FUN_0000006a(param_1,uVar1,uVar3);
    if (uVar3 < 3) break;
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
    if (0x4b < uVar2) {
      return uVar2;
    }
  }
  return uVar2;
}



uint FUN_0000006a(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  
  while( true ) {
    FUN_0000006a(param_1,param_2,param_3);
    if (unaff_r6 < 3) {
      return unaff_r5;
    }
    param_1 = unaff_r7 + 4;
    if (0x4b < unaff_r5) break;
    bVar1 = unaff_r4[3];
    if (bVar1 == 0) {
      return unaff_r5;
    }
    param_2 = (uint)bVar1 << 0x10;
    param_3 = 1;
    if (unaff_r4[4] != 0) {
      param_2 = param_2 | (uint)unaff_r4[4] << 8;
      param_3 = 2;
      if (unaff_r4[5] != 0) {
        param_2 = param_2 | unaff_r4[5];
        param_3 = 3;
      }
    }
    unaff_r5 = unaff_r5 + 4;
    unaff_r4 = unaff_r4 + 3;
    unaff_r6 = param_3;
    unaff_r7 = param_1;
  }
  return unaff_r5;
}



uint FUN_000000fe(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (param_3 == 0) {
      return uVar3;
    }
    iVar2 = 1;
    uVar1 = (uint)*param_2 << 0x10;
    if (1 < param_3) {
      iVar2 = 2;
      uVar1 = uVar1 | (uint)param_2[1] << 8;
      if (2 < param_3) {
        iVar2 = 3;
        uVar1 = uVar1 | param_2[2];
      }
    }
    param_3 = param_3 - iVar2;
    uVar3 = uVar3 + 4;
    FUN_0000012e(param_1,uVar1);
    param_2 = param_2 + 3;
    param_1 = param_1 + 4;
  } while (uVar3 < 0x4c);
  return uVar3;
}



uint FUN_0000012e(int param_1,uint param_2)

{
  int iVar1;
  uint unaff_r4;
  byte *unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  
  while( true ) {
    FUN_0000012e(param_1,param_2);
    param_1 = unaff_r7 + 4;
    if ((0x4b < unaff_r6) || (unaff_r4 == 0)) break;
    iVar1 = 1;
    param_2 = (uint)unaff_r5[3] << 0x10;
    if (1 < unaff_r4) {
      iVar1 = 2;
      param_2 = param_2 | (uint)unaff_r5[4] << 8;
      if (2 < unaff_r4) {
        iVar1 = 3;
        param_2 = param_2 | unaff_r5[5];
      }
    }
    unaff_r4 = unaff_r4 - iVar1;
    unaff_r6 = unaff_r6 + 4;
    unaff_r5 = unaff_r5 + 3;
    unaff_r7 = param_1;
  }
  return unaff_r6;
}



uint FUN_00000146(void)

{
  uint uVar1;
  
  uVar1 = FUN_00000146();
  return ((~uVar1 & 0xffff) << 0x18 | (~uVar1 & 0xffff) << 8) >> 0x10;
}



uint FUN_0000020c(void)

{
  uint uVar1;
  uint *unaff_r4;
  
  uVar1 = FUN_0000020c();
  return (uint)(((*unaff_r4 ^ uVar1) & unaff_r4[2]) == 0);
}



void FUN_00000258(byte *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  while (param_2 != 0) {
    uVar1 = FUN_0000026a((uint)*param_1,uVar1);
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return;
}



void FUN_0000026a(uint param_1,undefined4 param_2)

{
  byte *unaff_r4;
  int unaff_r5;
  
  while( true ) {
    param_2 = FUN_0000026a(param_1,param_2);
    unaff_r4 = unaff_r4 + 1;
    unaff_r5 = unaff_r5 + -1;
    if (unaff_r5 == 0) break;
    param_1 = (uint)*unaff_r4;
  }
  return;
}



void FUN_00000306(byte *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  while (*param_1 != 0) {
    uVar1 = FUN_00000312((uint)*param_1,uVar1);
    param_1 = param_1 + 1;
  }
  return;
}



void FUN_00000312(uint param_1,undefined4 param_2)

{
  byte *unaff_r4;
  
  do {
    param_2 = FUN_00000312(param_1,param_2);
    unaff_r4 = unaff_r4 + 1;
    param_1 = (uint)*unaff_r4;
  } while (*unaff_r4 != 0);
  return;
}


