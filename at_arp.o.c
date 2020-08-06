#include "at_arp.o.h"



void UndefinedInstruction(uint param_1,uint param_2,uint param_3)

{
  char **ppcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  char *pcVar5;
  uint unaff_r8;
  int unaff_r11;
  int in_lr;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r8 >> 0x11;
    *(uint *)uVar2 = uVar2;
    param_1 = unaff_r11 - (in_lr >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff));
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  iVar3 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar3 != 0) {
    iVar3 = 0;
    pcVar5 = *DAT_000000ec;
    while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar5 != '\0') && (iVar4 = FUN_00000060(pcVar5 + 10,param_1,4), iVar4 == 1))
      goto LAB_000000ce;
      pcVar5 = pcVar5 + 0xe;
      iVar3 = iVar3 + 1;
    }
    iVar3 = FUN_00000076(param_1,DAT_000000f0);
    if (iVar3 == 0) {
      iVar3 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar3 == 0) {
        return;
      }
      pcVar5 = *ppcVar1;
      iVar3 = 0;
      while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar5 != '\0') && (iVar4 = FUN_0000009c(pcVar5 + 4,param_2,6), iVar4 == 1))
        goto LAB_000000d8;
        pcVar5 = pcVar5 + 0xe;
        iVar3 = iVar3 + 1;
      }
    }
    iVar3 = FUN_000000b0(1);
    if (iVar3 != 0) {
      pcVar5 = *ppcVar1 + iVar3 * 0xe + -0xe;
      FUN_000000ca(pcVar5 + 10,param_1,4);
LAB_000000ce:
      FUN_000000d4(pcVar5 + 4,param_2,6);
LAB_000000d8:
      pcVar5[3] = *(char *)((int)ppcVar1 + 5);
      pcVar5[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar5 = '\x03';
    }
  }
  return;
}



void SupervisorCall(uint param_1,uint param_2,uint param_3)

{
  char **ppcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  char *pcVar5;
  uint unaff_r8;
  int unaff_r11;
  int in_lr;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r8 >> 0x11;
    *(uint *)uVar2 = uVar2;
    param_1 = unaff_r11 - (in_lr >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff));
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  iVar3 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar3 != 0) {
    iVar3 = 0;
    pcVar5 = *DAT_000000ec;
    while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar5 != '\0') && (iVar4 = FUN_00000060(pcVar5 + 10,param_1,4), iVar4 == 1))
      goto LAB_000000ce;
      pcVar5 = pcVar5 + 0xe;
      iVar3 = iVar3 + 1;
    }
    iVar3 = FUN_00000076(param_1,DAT_000000f0);
    if (iVar3 == 0) {
      iVar3 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar3 == 0) {
        return;
      }
      pcVar5 = *ppcVar1;
      iVar3 = 0;
      while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar5 != '\0') && (iVar4 = FUN_0000009c(pcVar5 + 4,param_2,6), iVar4 == 1))
        goto LAB_000000d8;
        pcVar5 = pcVar5 + 0xe;
        iVar3 = iVar3 + 1;
      }
    }
    iVar3 = FUN_000000b0(1);
    if (iVar3 != 0) {
      pcVar5 = *ppcVar1 + iVar3 * 0xe + -0xe;
      FUN_000000ca(pcVar5 + 10,param_1,4);
LAB_000000ce:
      FUN_000000d4(pcVar5 + 4,param_2,6);
LAB_000000d8:
      pcVar5[3] = *(char *)((int)ppcVar1 + 5);
      pcVar5[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar5 = '\x03';
    }
  }
  return;
}



void PrefetchAbort(uint param_1,uint param_2,uint param_3)

{
  char **ppcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  char *pcVar5;
  uint unaff_r8;
  int unaff_r11;
  int in_lr;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r8 >> 0x11;
    *(uint *)uVar2 = uVar2;
    param_1 = unaff_r11 - (in_lr >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff));
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  iVar3 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar3 != 0) {
    iVar3 = 0;
    pcVar5 = *DAT_000000ec;
    while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar5 != '\0') && (iVar4 = FUN_00000060(pcVar5 + 10,param_1,4), iVar4 == 1))
      goto LAB_000000ce;
      pcVar5 = pcVar5 + 0xe;
      iVar3 = iVar3 + 1;
    }
    iVar3 = FUN_00000076(param_1,DAT_000000f0);
    if (iVar3 == 0) {
      iVar3 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar3 == 0) {
        return;
      }
      pcVar5 = *ppcVar1;
      iVar3 = 0;
      while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar5 != '\0') && (iVar4 = FUN_0000009c(pcVar5 + 4,param_2,6), iVar4 == 1))
        goto LAB_000000d8;
        pcVar5 = pcVar5 + 0xe;
        iVar3 = iVar3 + 1;
      }
    }
    iVar3 = FUN_000000b0(1);
    if (iVar3 != 0) {
      pcVar5 = *ppcVar1 + iVar3 * 0xe + -0xe;
      FUN_000000ca(pcVar5 + 10,param_1,4);
LAB_000000ce:
      FUN_000000d4(pcVar5 + 4,param_2,6);
LAB_000000d8:
      pcVar5[3] = *(char *)((int)ppcVar1 + 5);
      pcVar5[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar5 = '\x03';
    }
  }
  return;
}



void DataAbort(uint param_1,uint param_2,uint param_3)

{
  char **ppcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  char *pcVar5;
  uint unaff_r8;
  int unaff_r11;
  int in_lr;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r8 >> 0x11;
    *(uint *)uVar2 = uVar2;
    param_1 = unaff_r11 - (in_lr >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff));
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  iVar3 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar3 != 0) {
    iVar3 = 0;
    pcVar5 = *DAT_000000ec;
    while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar5 != '\0') && (iVar4 = FUN_00000060(pcVar5 + 10,param_1,4), iVar4 == 1))
      goto LAB_000000ce;
      pcVar5 = pcVar5 + 0xe;
      iVar3 = iVar3 + 1;
    }
    iVar3 = FUN_00000076(param_1,DAT_000000f0);
    if (iVar3 == 0) {
      iVar3 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar3 == 0) {
        return;
      }
      pcVar5 = *ppcVar1;
      iVar3 = 0;
      while (iVar3 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar5 != '\0') && (iVar4 = FUN_0000009c(pcVar5 + 4,param_2,6), iVar4 == 1))
        goto LAB_000000d8;
        pcVar5 = pcVar5 + 0xe;
        iVar3 = iVar3 + 1;
      }
    }
    iVar3 = FUN_000000b0(1);
    if (iVar3 != 0) {
      pcVar5 = *ppcVar1 + iVar3 * 0xe + -0xe;
      FUN_000000ca(pcVar5 + 10,param_1,4);
LAB_000000ce:
      FUN_000000d4(pcVar5 + 4,param_2,6);
LAB_000000d8:
      pcVar5[3] = *(char *)((int)ppcVar1 + 5);
      pcVar5[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar5 = '\x03';
    }
  }
  return;
}



void NotUsed(uint param_1,uint param_2,uint param_3)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  uint unaff_r4;
  char *pcVar4;
  uint unaff_r8;
  int unaff_r11;
  int in_lr;
  bool in_ZR;
  
  if (in_ZR) {
    param_1 = param_1 & param_2;
    param_3 = param_1 & unaff_r8 >> 0x11;
    *(uint *)param_1 = param_1;
    param_1 = unaff_r11 - (in_lr >> ((unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff));
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  iVar2 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar4 = *DAT_000000ec;
    while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar4 != '\0') && (iVar3 = FUN_00000060(pcVar4 + 10,param_1,4), iVar3 == 1))
      goto LAB_000000ce;
      pcVar4 = pcVar4 + 0xe;
      iVar2 = iVar2 + 1;
    }
    iVar2 = FUN_00000076(param_1,DAT_000000f0);
    if (iVar2 == 0) {
      iVar2 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar2 == 0) {
        return;
      }
      pcVar4 = *ppcVar1;
      iVar2 = 0;
      while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar4 != '\0') && (iVar3 = FUN_0000009c(pcVar4 + 4,param_2,6), iVar3 == 1))
        goto LAB_000000d8;
        pcVar4 = pcVar4 + 0xe;
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = FUN_000000b0(1);
    if (iVar2 != 0) {
      pcVar4 = *ppcVar1 + iVar2 * 0xe + -0xe;
      FUN_000000ca(pcVar4 + 10,param_1,4);
LAB_000000ce:
      FUN_000000d4(pcVar4 + 4,param_2,6);
LAB_000000d8:
      pcVar4[3] = *(char *)((int)ppcVar1 + 5);
      pcVar4[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar4 = '\x03';
    }
  }
  return;
}



void IRQ(uint param_1,undefined4 param_2,uint param_3)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  uint unaff_r4;
  char *pcVar4;
  uint unaff_r8;
  int unaff_r11;
  int in_lr;
  bool in_ZR;
  
  if (in_ZR) {
    param_3 = param_1 & unaff_r8 >> 0x11;
    *(uint *)param_1 = param_1;
    param_1 = unaff_r11 - (in_lr >> ((unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff));
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  iVar2 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar4 = *DAT_000000ec;
    while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar4 != '\0') && (iVar3 = FUN_00000060(pcVar4 + 10,param_1,4), iVar3 == 1))
      goto LAB_000000ce;
      pcVar4 = pcVar4 + 0xe;
      iVar2 = iVar2 + 1;
    }
    iVar2 = FUN_00000076(param_1,DAT_000000f0);
    if (iVar2 == 0) {
      iVar2 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar2 == 0) {
        return;
      }
      pcVar4 = *ppcVar1;
      iVar2 = 0;
      while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar4 != '\0') && (iVar3 = FUN_0000009c(pcVar4 + 4,param_2,6), iVar3 == 1))
        goto LAB_000000d8;
        pcVar4 = pcVar4 + 0xe;
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = FUN_000000b0(1);
    if (iVar2 != 0) {
      pcVar4 = *ppcVar1 + iVar2 * 0xe + -0xe;
      FUN_000000ca(pcVar4 + 10,param_1,4);
LAB_000000ce:
      FUN_000000d4(pcVar4 + 4,param_2,6);
LAB_000000d8:
      pcVar4[3] = *(char *)((int)ppcVar1 + 5);
      pcVar4[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar4 = '\x03';
    }
  }
  return;
}



void FIQ(uint param_1,undefined4 param_2,uint param_3)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  uint unaff_r4;
  char *pcVar4;
  uint unaff_r8;
  int unaff_r11;
  int in_lr;
  bool in_ZR;
  
  if (in_ZR) {
    param_3 = param_1 & unaff_r8 >> 0x11;
    *(uint *)param_1 = param_1;
    param_1 = unaff_r11 - (in_lr >> ((unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff));
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  iVar2 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar4 = *DAT_000000ec;
    while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar4 != '\0') && (iVar3 = FUN_00000060(pcVar4 + 10,param_1,4), iVar3 == 1))
      goto LAB_000000ce;
      pcVar4 = pcVar4 + 0xe;
      iVar2 = iVar2 + 1;
    }
    iVar2 = FUN_00000076(param_1,DAT_000000f0);
    if (iVar2 == 0) {
      iVar2 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar2 == 0) {
        return;
      }
      pcVar4 = *ppcVar1;
      iVar2 = 0;
      while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar4 != '\0') && (iVar3 = FUN_0000009c(pcVar4 + 4,param_2,6), iVar3 == 1))
        goto LAB_000000d8;
        pcVar4 = pcVar4 + 0xe;
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = FUN_000000b0(1);
    if (iVar2 != 0) {
      pcVar4 = *ppcVar1 + iVar2 * 0xe + -0xe;
      FUN_000000ca(pcVar4 + 10,param_1,4);
LAB_000000ce:
      FUN_000000d4(pcVar4 + 4,param_2,6);
LAB_000000d8:
      pcVar4[3] = *(char *)((int)ppcVar1 + 5);
      pcVar4[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar4 = '\x03';
    }
  }
  return;
}



void FUN_00000042(void)

{
  char **ppcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 in_stack_00000008;
  
  iVar2 = FUN_00000042();
  ppcVar1 = DAT_000000ec;
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar4 = *DAT_000000ec;
    while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
      if ((*pcVar4 != '\0') && (iVar3 = FUN_00000060(pcVar4 + 10), iVar3 == 1)) goto LAB_000000ce;
      pcVar4 = pcVar4 + 0xe;
      iVar2 = iVar2 + 1;
    }
    iVar2 = FUN_00000076();
    if (iVar2 == 0) {
      iVar2 = FUN_00000082(DAT_000000f0 + 4);
      if (iVar2 == 0) {
        return;
      }
      pcVar4 = *ppcVar1;
      iVar2 = 0;
      while (iVar2 < (int)(uint)*(byte *)(ppcVar1 + 1)) {
        if ((*pcVar4 != '\0') && (iVar3 = FUN_0000009c(pcVar4 + 4,in_stack_00000008,6), iVar3 == 1))
        goto LAB_000000d8;
        pcVar4 = pcVar4 + 0xe;
        iVar2 = iVar2 + 1;
      }
    }
    iVar2 = FUN_000000b0(1);
    if (iVar2 != 0) {
      pcVar4 = *ppcVar1 + iVar2 * 0xe + -0xe;
      FUN_000000ca(pcVar4 + 10);
LAB_000000ce:
      FUN_000000d4(pcVar4 + 4,in_stack_00000008,6);
LAB_000000d8:
      pcVar4[3] = *(char *)((int)ppcVar1 + 5);
      pcVar4[2] = *(char *)((int)ppcVar1 + 6);
      *pcVar4 = '\x03';
    }
  }
  return;
}



void FUN_00000060(char *param_1)

{
  int iVar1;
  int iVar2;
  char *unaff_r4;
  char **unaff_r5;
  int unaff_r7;
  undefined4 in_stack_00000008;
  
  while (iVar1 = FUN_00000060(param_1), iVar1 != 1) {
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0xe;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(unaff_r5 + 1) <= unaff_r7) {
        iVar1 = FUN_00000076();
        if (iVar1 != 0) goto LAB_000000ae;
        iVar1 = FUN_00000082(DAT_000000f0 + 4);
        if (iVar1 == 0) {
          return;
        }
        unaff_r4 = *unaff_r5;
        iVar1 = 0;
        goto LAB_000000a8;
      }
    } while (*unaff_r4 == '\0');
    param_1 = param_1 + 0x18;
  }
LAB_000000ce:
  FUN_000000d4(unaff_r4 + 4,in_stack_00000008,6);
LAB_000000d8:
  unaff_r4[3] = *(char *)((int)unaff_r5 + 5);
  unaff_r4[2] = *(char *)((int)unaff_r5 + 6);
  *unaff_r4 = '\x03';
  return;
LAB_000000a8:
  if ((int)(uint)*(byte *)(unaff_r5 + 1) <= iVar1) goto LAB_000000ae;
  if ((*unaff_r4 != '\0') && (iVar2 = FUN_0000009c(unaff_r4 + 4,in_stack_00000008,6), iVar2 == 1))
  goto LAB_000000d8;
  unaff_r4 = unaff_r4 + 0xe;
  iVar1 = iVar1 + 1;
  goto LAB_000000a8;
LAB_000000ae:
  iVar1 = FUN_000000b0(1);
  if (iVar1 == 0) {
    return;
  }
  unaff_r4 = *unaff_r5 + iVar1 * 0xe + -0xe;
  FUN_000000ca(unaff_r4 + 10);
  goto LAB_000000ce;
}



void FUN_00000076(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char **unaff_r5;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_00000076();
  if (iVar1 == 0) {
    iVar1 = FUN_00000082(DAT_000000f0 + 4);
    if (iVar1 == 0) {
      return;
    }
    pcVar3 = *unaff_r5;
    iVar1 = 0;
    while (iVar1 < (int)(uint)*(byte *)(unaff_r5 + 1)) {
      if ((*pcVar3 != '\0') && (iVar2 = FUN_0000009c(pcVar3 + 4,in_stack_00000008,6), iVar2 == 1))
      goto LAB_000000d8;
      pcVar3 = pcVar3 + 0xe;
      iVar1 = iVar1 + 1;
    }
  }
  iVar1 = FUN_000000b0(1);
  if (iVar1 != 0) {
    pcVar3 = *unaff_r5 + iVar1 * 0xe + -0xe;
    FUN_000000ca(pcVar3 + 10);
    FUN_000000d4(pcVar3 + 4,in_stack_00000008,6);
LAB_000000d8:
    pcVar3[3] = *(char *)((int)unaff_r5 + 5);
    pcVar3[2] = *(char *)((int)unaff_r5 + 6);
    *pcVar3 = '\x03';
  }
  return;
}



void FUN_00000082(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char **unaff_r5;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_00000082();
  if (iVar1 != 0) {
    pcVar3 = *unaff_r5;
    iVar1 = 0;
    while (iVar1 < (int)(uint)*(byte *)(unaff_r5 + 1)) {
      if ((*pcVar3 != '\0') && (iVar2 = FUN_0000009c(pcVar3 + 4,in_stack_00000008,6), iVar2 == 1))
      goto LAB_000000d8;
      pcVar3 = pcVar3 + 0xe;
      iVar1 = iVar1 + 1;
    }
    iVar1 = FUN_000000b0(1);
    if (iVar1 != 0) {
      pcVar3 = *unaff_r5 + iVar1 * 0xe + -0xe;
      FUN_000000ca(pcVar3 + 10);
      FUN_000000d4(pcVar3 + 4,in_stack_00000008,6);
LAB_000000d8:
      pcVar3[3] = *(char *)((int)unaff_r5 + 5);
      pcVar3[2] = *(char *)((int)unaff_r5 + 6);
      *pcVar3 = '\x03';
    }
  }
  return;
}



void FUN_0000009c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *unaff_r4;
  int *unaff_r5;
  int unaff_r7;
  undefined4 param_7;
  
  do {
    iVar1 = FUN_0000009c(param_1,param_2,param_3);
    if (iVar1 == 1) {
LAB_000000d8:
      unaff_r4[3] = *(char *)((int)unaff_r5 + 5);
      unaff_r4[2] = *(char *)((int)unaff_r5 + 6);
      *unaff_r4 = '\x03';
      return;
    }
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0xe;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(unaff_r5 + 1) <= unaff_r7) {
        iVar1 = FUN_000000b0(1);
        if (iVar1 == 0) {
          return;
        }
        unaff_r4 = (char *)(*unaff_r5 + iVar1 * 0xe + -0xe);
        FUN_000000ca(unaff_r4 + 10);
        FUN_000000d4(unaff_r4 + 4,param_7,6);
        goto LAB_000000d8;
      }
    } while (*unaff_r4 == '\0');
    param_3 = 6;
    param_1 = param_1 + 0x12;
    param_2 = param_7;
  } while( true );
}



void FUN_000000b0(void)

{
  int iVar1;
  undefined *puVar2;
  int *unaff_r5;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_000000b0();
  if (iVar1 != 0) {
    puVar2 = (undefined *)(*unaff_r5 + iVar1 * 0xe + -0xe);
    FUN_000000ca(puVar2 + 10);
    FUN_000000d4(puVar2 + 4,in_stack_00000008,6);
    puVar2[3] = *(undefined *)((int)unaff_r5 + 5);
    puVar2[2] = *(undefined *)((int)unaff_r5 + 6);
    *puVar2 = 3;
  }
  return;
}



void FUN_000000ca(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  undefined4 param_7;
  
  FUN_000000ca();
  FUN_000000d4(unaff_r4 + 4,param_7,6);
  unaff_r4[3] = *(undefined *)(unaff_r5 + 5);
  unaff_r4[2] = *(undefined *)(unaff_r5 + 6);
  *unaff_r4 = 3;
  return;
}



void FUN_000000d4(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  
  FUN_000000d4();
  unaff_r4[3] = *(undefined *)(unaff_r5 + 5);
  unaff_r4[2] = *(undefined *)(unaff_r5 + 6);
  *unaff_r4 = 3;
  return;
}



void FUN_0000019c(char *param_1)

{
  int iVar1;
  int *unaff_r4;
  char *unaff_r5;
  undefined *puVar2;
  int unaff_r7;
  undefined4 in_stack_00000008;
  
  do {
    iVar1 = FUN_0000019c(param_1);
    if (iVar1 == 1) {
      return;
    }
    do {
      param_1 = unaff_r5;
      unaff_r5 = param_1 + 0xe;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(unaff_r4 + 1) <= unaff_r7) {
        iVar1 = FUN_000001b0();
        if (iVar1 == 0) {
          return;
        }
        iVar1 = FUN_000001bc();
        if (iVar1 == 0) {
          return;
        }
        iVar1 = FUN_000001c6(1);
        if (iVar1 == 0) {
          return;
        }
        FUN_000001d4(0);
        puVar2 = (undefined *)(*unaff_r4 + iVar1 * 0xe + -0xe);
        FUN_000001ea(puVar2 + 10);
        FUN_000001f4(puVar2 + 4,in_stack_00000008,6);
        puVar2[3] = *(undefined *)((int)unaff_r4 + 7);
        puVar2[2] = *(undefined *)((int)unaff_r4 + 6);
        *puVar2 = 3;
        return;
      }
    } while (*unaff_r5 == '\0');
    param_1 = param_1 + 0x18;
  } while( true );
}



void FUN_000001b0(void)

{
  int iVar1;
  int *unaff_r4;
  undefined *puVar2;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_000001b0();
  if (((iVar1 != 0) && (iVar1 = FUN_000001bc(), iVar1 != 0)) &&
     (iVar1 = FUN_000001c6(1), iVar1 != 0)) {
    FUN_000001d4(0);
    puVar2 = (undefined *)(*unaff_r4 + iVar1 * 0xe + -0xe);
    FUN_000001ea(puVar2 + 10);
    FUN_000001f4(puVar2 + 4,in_stack_00000008,6);
    puVar2[3] = *(undefined *)((int)unaff_r4 + 7);
    puVar2[2] = *(undefined *)((int)unaff_r4 + 6);
    *puVar2 = 3;
  }
  return;
}



void FUN_000001bc(void)

{
  int iVar1;
  int *unaff_r4;
  undefined *puVar2;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_000001bc();
  if ((iVar1 != 0) && (iVar1 = FUN_000001c6(1), iVar1 != 0)) {
    FUN_000001d4(0);
    puVar2 = (undefined *)(*unaff_r4 + iVar1 * 0xe + -0xe);
    FUN_000001ea(puVar2 + 10);
    FUN_000001f4(puVar2 + 4,in_stack_00000008,6);
    puVar2[3] = *(undefined *)((int)unaff_r4 + 7);
    puVar2[2] = *(undefined *)((int)unaff_r4 + 6);
    *puVar2 = 3;
  }
  return;
}



void FUN_000001c6(void)

{
  int iVar1;
  int *unaff_r4;
  undefined *puVar2;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_000001c6();
  if (iVar1 != 0) {
    FUN_000001d4(0);
    puVar2 = (undefined *)(*unaff_r4 + iVar1 * 0xe + -0xe);
    FUN_000001ea(puVar2 + 10);
    FUN_000001f4(puVar2 + 4,in_stack_00000008,6);
    puVar2[3] = *(undefined *)((int)unaff_r4 + 7);
    puVar2[2] = *(undefined *)((int)unaff_r4 + 6);
    *puVar2 = 3;
  }
  return;
}



void FUN_000001d4(void)

{
  int *unaff_r4;
  int unaff_r5;
  undefined *puVar1;
  undefined4 in_stack_00000008;
  
  FUN_000001d4();
  puVar1 = (undefined *)(*unaff_r4 + unaff_r5 * 0xe + -0xe);
  FUN_000001ea(puVar1 + 10);
  FUN_000001f4(puVar1 + 4,in_stack_00000008,6);
  puVar1[3] = *(undefined *)((int)unaff_r4 + 7);
  puVar1[2] = *(undefined *)((int)unaff_r4 + 6);
  *puVar1 = 3;
  return;
}



void FUN_000001ea(void)

{
  int unaff_r4;
  undefined *unaff_r5;
  undefined4 param_7;
  
  FUN_000001ea();
  FUN_000001f4(unaff_r5 + 4,param_7,6);
  unaff_r5[3] = *(undefined *)(unaff_r4 + 7);
  unaff_r5[2] = *(undefined *)(unaff_r4 + 6);
  *unaff_r5 = 3;
  return;
}



void FUN_000001f4(void)

{
  int unaff_r4;
  undefined *unaff_r5;
  
  FUN_000001f4();
  unaff_r5[3] = *(undefined *)(unaff_r4 + 7);
  unaff_r5[2] = *(undefined *)(unaff_r4 + 6);
  *unaff_r5 = 3;
  return;
}



undefined8 FUN_0000021c(void)

{
  byte **ppbVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar2 = FUN_0000021c();
  iVar4 = DAT_000002bc;
  if (iVar2 == 0) {
    pbVar3 = (byte *)FUN_00000228(DAT_000002bc + 4);
    if (pbVar3 == (byte *)0x0) goto LAB_000002a2;
    in_stack_00000004 = iVar4 + 4;
    in_stack_00000008 = 0;
  }
  ppbVar1 = DAT_000002c0;
  iVar4 = 0;
  pbVar3 = *DAT_000002c0;
  while (iVar4 < (int)(uint)*(byte *)(ppbVar1 + 1)) {
    if ((*pbVar3 != 0) && (iVar2 = FUN_00000250(pbVar3 + 10,in_stack_00000004,4), iVar2 == 1)) {
      if (*pbVar3 < 3) goto LAB_000002a0;
      if (pbVar3[1] == 1) {
        pbVar3[1] = 2;
      }
      goto LAB_000002a2;
    }
    pbVar3 = pbVar3 + 0xe;
    iVar4 = iVar4 + 1;
  }
  iVar4 = FUN_00000264(in_stack_00000008);
  if (iVar4 != 0) {
    FUN_00000272(0,in_stack_00000004,DAT_000002bc);
    pbVar3 = *ppbVar1 + iVar4 * 0xe + -0xe;
    FUN_00000288(pbVar3 + 10,in_stack_00000004,4);
    FUN_00000292(pbVar3 + 4,DAT_000002c4,6);
    pbVar3[2] = *(byte *)((int)ppbVar1 + 6);
    pbVar3[3] = *(byte *)((int)ppbVar1 + 7);
    *pbVar3 = 2;
  }
LAB_000002a0:
  pbVar3 = (byte *)0x0;
LAB_000002a2:
  return CONCAT44(pbVar3,in_stack_00000000);
}



undefined8 FUN_00000228(void)

{
  byte **ppbVar1;
  int iVar2;
  int unaff_r4;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 param_5;
  
  pbVar4 = (byte *)FUN_00000228();
  ppbVar1 = DAT_000002c0;
  if (pbVar4 != (byte *)0x0) {
    iVar3 = unaff_r4 + 4;
    iVar5 = 0;
    pbVar4 = *DAT_000002c0;
    while (iVar5 < (int)(uint)*(byte *)(ppbVar1 + 1)) {
      if ((*pbVar4 != 0) && (iVar2 = FUN_00000250(pbVar4 + 10,iVar3,4), iVar2 == 1)) {
        if (*pbVar4 < 3) goto LAB_000002a0;
        if (pbVar4[1] == 1) {
          pbVar4[1] = 2;
        }
        goto LAB_000002a2;
      }
      pbVar4 = pbVar4 + 0xe;
      iVar5 = iVar5 + 1;
    }
    iVar5 = FUN_00000264(0);
    if (iVar5 != 0) {
      FUN_00000272(0,iVar3,DAT_000002bc);
      pbVar4 = *ppbVar1 + iVar5 * 0xe + -0xe;
      FUN_00000288(pbVar4 + 10,iVar3,4);
      FUN_00000292(pbVar4 + 4,DAT_000002c4,6);
      pbVar4[2] = *(byte *)((int)ppbVar1 + 6);
      pbVar4[3] = *(byte *)((int)ppbVar1 + 7);
      *pbVar4 = 2;
    }
LAB_000002a0:
    pbVar4 = (byte *)0x0;
  }
LAB_000002a2:
  return CONCAT44(pbVar4,param_5);
}



undefined8
FUN_00000250(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  byte *unaff_r4;
  byte *pbVar2;
  int *unaff_r5;
  byte unaff_r6;
  int unaff_r7;
  
  do {
    iVar1 = FUN_00000250(param_1,param_2,param_3);
    if (iVar1 == 1) {
      if (*unaff_r4 < 3) {
LAB_000002a0:
        unaff_r4 = (byte *)0x0;
      }
      else {
        if (unaff_r4[1] == 1) {
          unaff_r4[1] = unaff_r6;
        }
      }
      return CONCAT44(unaff_r4,param_5);
    }
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0xe;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(unaff_r5 + 1) <= unaff_r7) {
        iVar1 = FUN_00000264(param_7);
        if (iVar1 != 0) {
          FUN_00000272(0,param_6,DAT_000002bc);
          pbVar2 = (byte *)(*unaff_r5 + iVar1 * 0xe + -0xe);
          FUN_00000288(pbVar2 + 10,param_6,4);
          FUN_00000292(pbVar2 + 4,DAT_000002c4,6);
          pbVar2[2] = *(byte *)((int)unaff_r5 + 6);
          pbVar2[3] = *(byte *)((int)unaff_r5 + 7);
          *pbVar2 = unaff_r6;
        }
        goto LAB_000002a0;
      }
    } while (*unaff_r4 == 0);
    param_3 = 4;
    param_1 = param_1 + 0x18;
    param_2 = param_6;
  } while( true );
}



ulonglong FUN_00000264(void)

{
  int iVar1;
  undefined *puVar2;
  int *unaff_r5;
  undefined unaff_r6;
  uint param_5;
  undefined4 param_6;
  
  iVar1 = FUN_00000264();
  if (iVar1 != 0) {
    FUN_00000272(0,param_6,DAT_000002bc);
    puVar2 = (undefined *)(*unaff_r5 + iVar1 * 0xe + -0xe);
    FUN_00000288(puVar2 + 10,param_6,4);
    FUN_00000292(puVar2 + 4,DAT_000002c4,6);
    puVar2[2] = *(undefined *)((int)unaff_r5 + 6);
    puVar2[3] = *(undefined *)((int)unaff_r5 + 7);
    *puVar2 = unaff_r6;
  }
  return (ulonglong)param_5;
}



ulonglong FUN_00000272(void)

{
  int unaff_r4;
  undefined *puVar1;
  int *unaff_r5;
  undefined unaff_r6;
  uint param_5;
  undefined4 param_6;
  
  FUN_00000272();
  puVar1 = (undefined *)(*unaff_r5 + unaff_r4 * 0xe + -0xe);
  FUN_00000288(puVar1 + 10,param_6,4);
  FUN_00000292(puVar1 + 4,DAT_000002c4,6);
  puVar1[2] = *(undefined *)((int)unaff_r5 + 6);
  puVar1[3] = *(undefined *)((int)unaff_r5 + 7);
  *puVar1 = unaff_r6;
  return (ulonglong)param_5;
}



ulonglong FUN_00000288(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  uint in_stack_00000000;
  
  FUN_00000288();
  FUN_00000292(unaff_r4 + 4,DAT_000002c4,6);
  unaff_r4[2] = *(undefined *)(unaff_r5 + 6);
  unaff_r4[3] = *(undefined *)(unaff_r5 + 7);
  *unaff_r4 = unaff_r6;
  return (ulonglong)in_stack_00000000;
}



ulonglong FUN_00000292(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  uint in_stack_00000000;
  
  FUN_00000292();
  unaff_r4[2] = *(undefined *)(unaff_r5 + 6);
  unaff_r4[3] = *(undefined *)(unaff_r5 + 7);
  *unaff_r4 = unaff_r6;
  return (ulonglong)in_stack_00000000;
}



undefined4 FUN_000002ce(void)

{
  int iVar1;
  int iVar2;
  undefined unaff_r5;
  
  iVar1 = FUN_000002ce();
  if (iVar1 != 0) {
    iVar1 = FUN_000002da();
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_000002ea(iVar1 + 10);
    if (iVar2 == 1) {
      *(undefined *)(iVar1 + 1) = unaff_r5;
    }
  }
  return 1;
}



undefined4 FUN_000002da(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined unaff_r5;
  
  iVar1 = FUN_000002da();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_000002ea(iVar1 + 10);
    if (iVar2 == 1) {
      *(undefined *)(iVar1 + 1) = unaff_r5;
    }
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 FUN_000002ea(void)

{
  int iVar1;
  int unaff_r4;
  undefined unaff_r5;
  
  iVar1 = FUN_000002ea();
  if (iVar1 == 1) {
    *(undefined *)(unaff_r4 + 1) = unaff_r5;
  }
  return 1;
}



undefined4 FUN_0000031c(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_r4;
  byte *unaff_r5;
  undefined *puVar3;
  int unaff_r7;
  
  do {
    iVar1 = FUN_0000031c(param_1);
    if (iVar1 == 1) {
      if (*unaff_r5 < 3) {
LAB_0000036e:
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      return uVar2;
    }
    do {
      param_1 = unaff_r5;
      unaff_r5 = param_1 + 0xe;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(unaff_r4 + 1) <= unaff_r7) {
        iVar1 = FUN_00000330(1);
        if (iVar1 != 0) {
          FUN_0000033e();
          puVar3 = (undefined *)(*unaff_r4 + iVar1 * 0xe + -0xe);
          FUN_00000354(puVar3 + 10,0,4);
          FUN_0000035e(puVar3 + 4);
          puVar3[2] = *(undefined *)((int)unaff_r4 + 6);
          puVar3[3] = *(undefined *)((int)unaff_r4 + 7);
          *puVar3 = 2;
        }
        goto LAB_0000036e;
      }
    } while (*unaff_r5 == 0);
    param_1 = param_1 + 0x12;
  } while( true );
}



undefined4 FUN_00000330(void)

{
  int iVar1;
  int *unaff_r4;
  undefined *puVar2;
  
  iVar1 = FUN_00000330();
  if (iVar1 != 0) {
    FUN_0000033e();
    puVar2 = (undefined *)(*unaff_r4 + iVar1 * 0xe + -0xe);
    FUN_00000354(puVar2 + 10,0,4);
    FUN_0000035e(puVar2 + 4);
    puVar2[2] = *(undefined *)((int)unaff_r4 + 6);
    puVar2[3] = *(undefined *)((int)unaff_r4 + 7);
    *puVar2 = 2;
  }
  return 0;
}



undefined4 FUN_0000033e(void)

{
  int *unaff_r4;
  int unaff_r5;
  undefined *puVar1;
  
  FUN_0000033e();
  puVar1 = (undefined *)(*unaff_r4 + unaff_r5 * 0xe + -0xe);
  FUN_00000354(puVar1 + 10,0,4);
  FUN_0000035e(puVar1 + 4);
  puVar1[2] = *(undefined *)((int)unaff_r4 + 6);
  puVar1[3] = *(undefined *)((int)unaff_r4 + 7);
  *puVar1 = 2;
  return 0;
}



undefined4 FUN_00000354(void)

{
  int unaff_r4;
  undefined *unaff_r5;
  
  FUN_00000354();
  FUN_0000035e(unaff_r5 + 4);
  unaff_r5[2] = *(undefined *)(unaff_r4 + 6);
  unaff_r5[3] = *(undefined *)(unaff_r4 + 7);
  *unaff_r5 = 2;
  return 0;
}



undefined4 FUN_0000035e(void)

{
  int unaff_r4;
  undefined *unaff_r5;
  
  FUN_0000035e();
  unaff_r5[2] = *(undefined *)(unaff_r4 + 6);
  unaff_r5[3] = *(undefined *)(unaff_r4 + 7);
  *unaff_r5 = 2;
  return 0;
}



void FUN_0000042c(void)

{
  int iVar1;
  int unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_0000042c();
  if (iVar1 != 0) {
    FUN_00000450(0);
                    // WARNING: Could not recover jumptable at 0x00000458. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00000450(unaff_r4 + 4,0,DAT_00000480);
  return;
}



void FUN_00000450(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000450();
                    // WARNING: Could not recover jumptable at 0x00000458. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



byte * FUN_0000049e(byte *param_1)

{
  int iVar1;
  byte *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  do {
    iVar1 = FUN_0000049e(param_1);
    if (iVar1 == 1) {
      return unaff_r4 + 4;
    }
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0xe;
      unaff_r5 = unaff_r5 + 1;
      if ((int)(uint)*(byte *)(unaff_r6 + 4) <= unaff_r5) {
        return (byte *)0;
      }
    } while (*unaff_r4 < 3);
    param_1 = param_1 + 0x18;
  } while( true );
}



undefined4 FUN_000004c6(void)

{
  byte **ppbVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int unaff_r5;
  
  iVar2 = FUN_000004c6();
  ppbVar1 = DAT_00000524;
  if (iVar2 == 0) {
    pbVar5 = *DAT_00000524;
    iVar2 = 0;
    while (iVar2 < (int)(uint)*(byte *)(ppbVar1 + 1)) {
      if ((2 < *pbVar5) && (iVar4 = FUN_000004f6(pbVar5 + 4,unaff_r5 + 4,6), iVar4 == 1)) {
        if (pbVar5 == (byte *)0xfffffff6) {
          return 0;
        }
        FUN_00000514();
        return 1;
      }
      pbVar5 = pbVar5 + 0xe;
      iVar2 = iVar2 + 1;
    }
  }
  else {
    iVar2 = FUN_000004d0();
    if (iVar2 != 0) {
      uVar3 = FUN_00000514(unaff_r5 + 4,iVar2,6);
      return uVar3;
    }
  }
  return 0;
}



undefined4 FUN_000004d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r5;
  
  iVar1 = FUN_000004d0();
  if (iVar1 != 0) {
    uVar2 = FUN_00000514(unaff_r5 + 4,iVar1,6);
    return uVar2;
  }
  return 0;
}



undefined4
FUN_000004f6(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  byte *unaff_r4;
  int unaff_r6;
  int unaff_r7;
  
  while (iVar1 = FUN_000004f6(param_1,param_2,param_3), iVar1 != 1) {
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0xe;
      unaff_r6 = unaff_r6 + 1;
      if ((int)(uint)*(byte *)(unaff_r7 + 4) <= unaff_r6) goto LAB_00000520;
    } while (*unaff_r4 < 3);
    param_3 = 6;
    param_1 = param_1 + 0x12;
    param_2 = param_5;
  }
  if (unaff_r4 == (byte *)0xfffffff6) {
LAB_00000520:
    uVar2 = 0;
  }
  else {
    FUN_00000514();
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 FUN_00000514(void)

{
  FUN_00000514();
  return 1;
}



undefined4 FUN_00000562(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00000562();
  if (((uVar1 == 0) || (uVar1 == 0xffffffff)) ||
     ((((*DAT_0000058c ^ uVar1) & DAT_0000058c[2]) == 0 && ((DAT_0000058c[2] | uVar1) == 0xffffffff)
      ))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_000005a6(void)

{
  FUN_000005a6();
  return;
}



void FUN_000005c8(void)

{
  FUN_000005c8();
  return;
}



void FUN_00000604(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  byte *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    iVar1 = FUN_00000604(param_1,param_2,param_3);
    if (iVar1 != 0) {
      FUN_0000063c(unaff_r4 + 10,param_5,4);
      return;
    }
    while( true ) {
      do {
        param_2 = unaff_r4;
        unaff_r4 = param_2 + 0xe;
        unaff_r7 = unaff_r7 + 1;
        if ((int)(uint)*(byte *)(unaff_r6 + 4) <= unaff_r7) {
          return;
        }
      } while (*unaff_r4 < 2);
      if (*(short *)(unaff_r5 + 6) == 0x900) break;
      iVar1 = FUN_0000061e(param_5,param_2 + 0x18,4);
      if (iVar1 == 1) {
        FUN_0000063c(param_2 + 0x12,param_6,6);
        if (param_2[0xf] == 2) {
          param_2[0xf] = 1;
        }
        param_2[0x11] = *(byte *)(unaff_r6 + 5);
        param_2[0x10] = *(byte *)(unaff_r6 + 6);
        *unaff_r4 = 3;
        return;
      }
    }
    param_3 = 6;
    param_2 = param_2 + 0x12;
    param_1 = param_6;
  } while( true );
}



void FUN_0000061e(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  byte *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    iVar1 = FUN_0000061e(param_1,param_2,param_3);
    if (iVar1 == 1) {
      FUN_0000063c(unaff_r4 + 4,param_6,6);
      if (unaff_r4[1] == 2) {
        unaff_r4[1] = 1;
      }
      unaff_r4[3] = *(byte *)(unaff_r6 + 5);
      unaff_r4[2] = *(byte *)(unaff_r6 + 6);
      *unaff_r4 = 3;
      return;
    }
    while( true ) {
      do {
        param_2 = unaff_r4;
        unaff_r4 = param_2 + 0xe;
        unaff_r7 = unaff_r7 + 1;
        if ((int)(uint)*(byte *)(unaff_r6 + 4) <= unaff_r7) {
          return;
        }
      } while (*unaff_r4 < 2);
      if (*(short *)(unaff_r5 + 6) != 0x900) break;
      iVar1 = FUN_00000604(param_6,param_2 + 0x12,6);
      if (iVar1 != 0) {
        FUN_0000063c(param_2 + 0x18,param_5,4);
        return;
      }
    }
    param_3 = 4;
    param_2 = param_2 + 0x18;
    param_1 = param_5;
  } while( true );
}



void FUN_0000063c(void)

{
  undefined *unaff_r4;
  int unaff_r6;
  
  FUN_0000063c();
  if (unaff_r4[1] == '\x02') {
    unaff_r4[1] = 1;
  }
  unaff_r4[3] = *(undefined *)(unaff_r6 + 5);
  unaff_r4[2] = *(undefined *)(unaff_r6 + 6);
  *unaff_r4 = 3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000069a(void)

{
  byte **ppbVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  byte *pbVar4;
  int iVar5;
  undefined4 in_stack_00000000;
  
  FUN_0000069a();
  iVar5 = _FUN_000006bc + -0x34;
  iVar2 = FUN_000006b0();
  if (iVar2 == 0) {
    iVar2 = FUN_000006ca();
    ppbVar1 = DAT_00000780;
    if (iVar2 != 0) {
      iVar2 = 0;
      pbVar4 = *DAT_00000780;
      while (iVar2 < (int)(uint)*(byte *)(ppbVar1 + 1)) {
        if ((2 < *pbVar4) && (iVar3 = FUN_000006e6(pbVar4 + 4,in_stack_00000000,6), iVar3 != 0)) {
          FUN_000006f6(pbVar4 + 10,iVar5,4);
          pbVar4[3] = *(byte *)((int)ppbVar1 + 5);
          pbVar4[2] = *(byte *)((int)ppbVar1 + 6);
          *pbVar4 = 3;
          return;
        }
        pbVar4 = pbVar4 + 0xe;
        iVar2 = iVar2 + 1;
      }
    }
  }
  else {
    FUN_000006bc(iVar5,in_stack_00000000);
    FUN_00000732(unaff_r4 + 0xdd,2);
  }
  return;
}



void FUN_000006b0(void)

{
  byte **ppbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 param_5;
  
  iVar2 = FUN_000006b0();
  if (iVar2 == 0) {
    iVar2 = FUN_000006ca();
    ppbVar1 = DAT_00000780;
    if (iVar2 != 0) {
      iVar2 = 0;
      pbVar4 = *DAT_00000780;
      while (iVar2 < (int)(uint)*(byte *)(ppbVar1 + 1)) {
        if ((2 < *pbVar4) && (iVar3 = FUN_000006e6(pbVar4 + 4,param_5,6), iVar3 != 0)) {
          FUN_000006f6(pbVar4 + 10);
          pbVar4[3] = *(byte *)((int)ppbVar1 + 5);
          pbVar4[2] = *(byte *)((int)ppbVar1 + 6);
          *pbVar4 = 3;
          return;
        }
        pbVar4 = pbVar4 + 0xe;
        iVar2 = iVar2 + 1;
      }
    }
  }
  else {
    FUN_000006bc();
    FUN_00000732();
  }
  return;
}



void FUN_000006bc(void)

{
  FUN_000006bc();
  FUN_00000732();
  return;
}



void FUN_000006ca(void)

{
  byte **ppbVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_stack_00000000;
  
  iVar2 = FUN_000006ca();
  ppbVar1 = DAT_00000780;
  if (iVar2 != 0) {
    iVar2 = 0;
    pbVar4 = *DAT_00000780;
    while (iVar2 < (int)(uint)*(byte *)(ppbVar1 + 1)) {
      if ((2 < *pbVar4) && (iVar3 = FUN_000006e6(pbVar4 + 4,in_stack_00000000,6), iVar3 != 0)) {
        FUN_000006f6(pbVar4 + 10);
        pbVar4[3] = *(byte *)((int)ppbVar1 + 5);
        pbVar4[2] = *(byte *)((int)ppbVar1 + 6);
        *pbVar4 = 3;
        return;
      }
      pbVar4 = pbVar4 + 0xe;
      iVar2 = iVar2 + 1;
    }
  }
  return;
}



void FUN_000006e6(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  byte *unaff_r4;
  int unaff_r6;
  int unaff_r7;
  
  do {
    iVar1 = FUN_000006e6(param_1,param_2,param_3);
    if (iVar1 != 0) {
      FUN_000006f6(unaff_r4 + 10);
      unaff_r4[3] = *(byte *)(unaff_r6 + 5);
      unaff_r4[2] = *(byte *)(unaff_r6 + 6);
      *unaff_r4 = 3;
      return;
    }
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0xe;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(unaff_r6 + 4) <= unaff_r7) {
        return;
      }
    } while (*unaff_r4 < 3);
    param_3 = 6;
    param_1 = param_1 + 0x12;
    param_2 = param_5;
  } while( true );
}



void FUN_000006f6(void)

{
  undefined *unaff_r4;
  int unaff_r6;
  
  FUN_000006f6();
  unaff_r4[3] = *(undefined *)(unaff_r6 + 5);
  unaff_r4[2] = *(undefined *)(unaff_r6 + 6);
  *unaff_r4 = 3;
  return;
}



void FUN_00000732(void)

{
  FUN_00000732();
  return;
}



void FUN_00000794(void)

{
  int iVar1;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_00000794();
  FUN_000007a4(iVar1 + 4,unaff_r5 + 8,6);
  FUN_000007b0(iVar1 + 10,DAT_0000081c,6);
  *(undefined2 *)(iVar1 + 0x10) = 0x608;
  *(undefined2 *)(iVar1 + 0x12) = 0x100;
  *(undefined2 *)(iVar1 + 0x14) = 8;
  *(undefined *)(iVar1 + 0x16) = 6;
  *(undefined *)(iVar1 + 0x17) = 4;
  *(ushort *)(iVar1 + 0x18) =
       (ushort)((uint)(unaff_r6 << 0x18) >> 0x10) | (ushort)((uint)(unaff_r6 << 8) >> 0x10);
  FUN_000007de(iVar1 + 0x24,unaff_r5 + 8,6);
  FUN_000007ec(iVar1 + 0x2a,unaff_r5 + 0xe,4);
  FUN_000007f8(iVar1 + 0x1a,DAT_0000081c,6);
  FUN_00000804(iVar1 + 0x20,DAT_00000820,4);
  FUN_0000080a(iVar1);
  FUN_00000810(iVar1);
  return;
}



void FUN_000007a4(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  FUN_000007a4();
  FUN_000007b0(unaff_r4 + 10,DAT_0000081c,6);
  *(undefined2 *)(unaff_r4 + 0x10) = 0x608;
  *(undefined2 *)(unaff_r4 + 0x12) = 0x100;
  *(undefined2 *)(unaff_r4 + 0x14) = 8;
  *(undefined *)(unaff_r4 + 0x16) = 6;
  *(undefined *)(unaff_r4 + 0x17) = 4;
  *(ushort *)(unaff_r4 + 0x18) =
       (ushort)((uint)(unaff_r6 << 0x18) >> 0x10) | (ushort)((uint)(unaff_r6 << 8) >> 0x10);
  FUN_000007de(unaff_r4 + 0x24);
  FUN_000007ec(unaff_r4 + 0x2a,unaff_r5 + 0xe,4);
  FUN_000007f8(unaff_r4 + 0x1a,DAT_0000081c,6);
  FUN_00000804(unaff_r4 + 0x20,DAT_00000820,4);
  FUN_0000080a();
  FUN_00000810();
  return;
}



void FUN_000007b0(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  FUN_000007b0();
  *(undefined2 *)(unaff_r4 + 0x10) = 0x608;
  *(undefined2 *)(unaff_r4 + 0x12) = 0x100;
  *(undefined2 *)(unaff_r4 + 0x14) = 8;
  *(undefined *)(unaff_r4 + 0x16) = 6;
  *(undefined *)(unaff_r4 + 0x17) = 4;
  *(ushort *)(unaff_r4 + 0x18) =
       (ushort)((uint)(unaff_r6 << 0x18) >> 0x10) | (ushort)((uint)(unaff_r6 << 8) >> 0x10);
  FUN_000007de(unaff_r4 + 0x24);
  FUN_000007ec(unaff_r4 + 0x2a,unaff_r5 + 0xe,4);
  FUN_000007f8(unaff_r4 + 0x1a,DAT_0000081c,6);
  FUN_00000804(unaff_r4 + 0x20,DAT_00000820,4);
  FUN_0000080a();
  FUN_00000810();
  return;
}



void FUN_000007de(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_000007de();
  FUN_000007ec(unaff_r4 + 0x2a,unaff_r5 + 0xe,4);
  FUN_000007f8(unaff_r4 + 0x1a,DAT_0000081c,6);
  FUN_00000804(unaff_r4 + 0x20,DAT_00000820,4);
  FUN_0000080a();
  FUN_00000810();
  return;
}



void FUN_000007ec(void)

{
  int unaff_r4;
  
  FUN_000007ec();
  FUN_000007f8(unaff_r4 + 0x1a,DAT_0000081c,6);
  FUN_00000804(unaff_r4 + 0x20,DAT_00000820,4);
  FUN_0000080a();
  FUN_00000810();
  return;
}



void FUN_000007f8(void)

{
  int unaff_r4;
  
  FUN_000007f8();
  FUN_00000804(unaff_r4 + 0x20,DAT_00000820,4);
  FUN_0000080a();
  FUN_00000810();
  return;
}



void FUN_00000804(void)

{
  FUN_00000804();
  FUN_0000080a();
  FUN_00000810();
  return;
}



void FUN_0000080a(void)

{
  FUN_0000080a();
  FUN_00000810();
  return;
}



void FUN_00000810(void)

{
  FUN_00000810();
  return;
}



void FUN_0000082e(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  iVar2 = FUN_0000082e();
  FUN_00000842(iVar2 + 4);
  FUN_0000084e(iVar2 + 10,DAT_000008cc,6);
  *(undefined2 *)(iVar2 + 0x10) = 0x608;
  uVar1 = 0x100;
  *(undefined2 *)(iVar2 + 0x12) = 0x100;
  *(undefined2 *)(iVar2 + 0x14) = 8;
  *(undefined *)(iVar2 + 0x16) = 6;
  *(undefined *)(iVar2 + 0x17) = 4;
  if (unaff_r5 != 0) {
    uVar1 = 0x800;
  }
  *(undefined2 *)(iVar2 + 0x18) = uVar1;
  FUN_0000087a(iVar2 + 0x1a,DAT_000008cc,6);
  if (unaff_r5 == 0) {
    unaff_r5 = DAT_000008d0;
  }
  FUN_0000088c(iVar2 + 0x24,unaff_r5,6);
  if (unaff_r6 == 0) {
    unaff_r6 = DAT_000008d0;
  }
  FUN_0000089e(iVar2 + 0x20,unaff_r6,4);
  if (unaff_r7 == 0) {
    unaff_r7 = DAT_000008d0;
  }
  FUN_000008b0(iVar2 + 0x2a,unaff_r7,4);
  FUN_000008b6(iVar2);
  FUN_000008bc(iVar2);
  return;
}



void FUN_00000842(void)

{
  undefined2 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000842();
  FUN_0000084e(unaff_r4 + 10,DAT_000008cc,6);
  *(undefined2 *)(unaff_r4 + 0x10) = 0x608;
  uVar1 = 0x100;
  *(undefined2 *)(unaff_r4 + 0x12) = 0x100;
  *(undefined2 *)(unaff_r4 + 0x14) = 8;
  *(undefined *)(unaff_r4 + 0x16) = 6;
  *(undefined *)(unaff_r4 + 0x17) = 4;
  if (unaff_r5 != 0) {
    uVar1 = 0x800;
  }
  *(undefined2 *)(unaff_r4 + 0x18) = uVar1;
  FUN_0000087a(unaff_r4 + 0x1a,DAT_000008cc,6);
  if (unaff_r5 == 0) {
    unaff_r5 = DAT_000008d0;
  }
  FUN_0000088c(unaff_r4 + 0x24,unaff_r5,6);
  if (unaff_r6 == 0) {
    unaff_r6 = DAT_000008d0;
  }
  FUN_0000089e(unaff_r4 + 0x20,unaff_r6,4);
  if (unaff_r7 == 0) {
    unaff_r7 = DAT_000008d0;
  }
  FUN_000008b0(unaff_r4 + 0x2a,unaff_r7,4);
  FUN_000008b6();
  FUN_000008bc();
  return;
}



void FUN_0000084e(void)

{
  undefined2 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  FUN_0000084e();
  *(undefined2 *)(unaff_r4 + 0x10) = 0x608;
  uVar1 = 0x100;
  *(undefined2 *)(unaff_r4 + 0x12) = 0x100;
  *(undefined2 *)(unaff_r4 + 0x14) = 8;
  *(undefined *)(unaff_r4 + 0x16) = 6;
  *(undefined *)(unaff_r4 + 0x17) = 4;
  if (unaff_r5 != 0) {
    uVar1 = 0x800;
  }
  *(undefined2 *)(unaff_r4 + 0x18) = uVar1;
  FUN_0000087a(unaff_r4 + 0x1a,DAT_000008cc,6);
  if (unaff_r5 == 0) {
    unaff_r5 = DAT_000008d0;
  }
  FUN_0000088c(unaff_r4 + 0x24,unaff_r5,6);
  if (unaff_r6 == 0) {
    unaff_r6 = DAT_000008d0;
  }
  FUN_0000089e(unaff_r4 + 0x20,unaff_r6,4);
  if (unaff_r7 == 0) {
    unaff_r7 = DAT_000008d0;
  }
  FUN_000008b0(unaff_r4 + 0x2a,unaff_r7,4);
  FUN_000008b6();
  FUN_000008bc();
  return;
}



void FUN_0000087a(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  FUN_0000087a();
  if (unaff_r5 == 0) {
    unaff_r5 = DAT_000008d0;
  }
  FUN_0000088c(unaff_r4 + 0x24,unaff_r5,6);
  if (unaff_r6 == 0) {
    unaff_r6 = DAT_000008d0;
  }
  FUN_0000089e(unaff_r4 + 0x20,unaff_r6,4);
  if (unaff_r7 == 0) {
    unaff_r7 = DAT_000008d0;
  }
  FUN_000008b0(unaff_r4 + 0x2a,unaff_r7,4);
  FUN_000008b6();
  FUN_000008bc();
  return;
}



void FUN_0000088c(void)

{
  int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  
  FUN_0000088c();
  if (unaff_r6 == 0) {
    unaff_r6 = DAT_000008d0;
  }
  FUN_0000089e(unaff_r4 + 0x20,unaff_r6,4);
  if (unaff_r7 == 0) {
    unaff_r7 = DAT_000008d0;
  }
  FUN_000008b0(unaff_r4 + 0x2a,unaff_r7,4);
  FUN_000008b6();
  FUN_000008bc();
  return;
}



void FUN_0000089e(void)

{
  int unaff_r4;
  int unaff_r7;
  
  FUN_0000089e();
  if (unaff_r7 == 0) {
    unaff_r7 = DAT_000008d0;
  }
  FUN_000008b0(unaff_r4 + 0x2a,unaff_r7,4);
  FUN_000008b6();
  FUN_000008bc();
  return;
}



void FUN_000008b0(void)

{
  FUN_000008b0();
  FUN_000008b6();
  FUN_000008bc();
  return;
}



void FUN_000008b6(void)

{
  FUN_000008b6();
  FUN_000008bc();
  return;
}



void FUN_000008bc(void)

{
  FUN_000008bc();
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
                    // WARNING: Could not recover jumptable at 0x00000904. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


