#include "at_tftpc.o.h"



int UndefinedInstruction(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  bool in_ZR;
  
  uVar5 = (undefined2)param_2;
  if (in_ZR) {
    uVar3 = unaff_r8 & param_2 & param_2;
    param_3 = uVar3 & unaff_r4 >> 1;
    *(uint *)uVar3 = uVar3;
    param_1 = unaff_r6 - (unaff_r9 >> 0x20) & param_3 & unaff_r8;
  }
  pcVar1 = DAT_000000ac;
  if ((param_5 == 0) || (*DAT_000000ac != '\0')) {
    iVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar5 = 0x45;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    FUN_00000070(DAT_000000ac + 0xc,param_1,4);
    puVar2 = DAT_000000b0;
    *(undefined2 *)(pcVar1 + 0x10) = uVar5;
    *(int *)(pcVar1 + 0x18) = param_5;
    *(undefined2 *)(pcVar1 + 0x12) = *puVar2;
    pcVar1[2] = '\0';
    *(undefined2 *)(pcVar1 + 0x14) = 0;
    iVar4 = FUN_00000088(param_4,0xb4);
    *(int *)(pcVar1 + 0x1c) = iVar4;
    if (iVar4 != 0) {
      FUN_00000096((uint)(byte)pcVar1[1],0);
      FUN_0000009e(1,param_3);
      *pcVar1 = '\x02';
      iVar4 = 1;
    }
  }
  return iVar4;
}



int SupervisorCall(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  bool in_ZR;
  
  uVar5 = (undefined2)param_2;
  if (in_ZR) {
    uVar3 = unaff_r8 & param_2 & param_2;
    param_3 = uVar3 & unaff_r4 >> 1;
    *(uint *)uVar3 = uVar3;
    param_1 = unaff_r6 - (unaff_r9 >> 0x20) & param_3 & unaff_r8;
  }
  pcVar1 = DAT_000000ac;
  if ((param_5 == 0) || (*DAT_000000ac != '\0')) {
    iVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar5 = 0x45;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    FUN_00000070(DAT_000000ac + 0xc,param_1,4);
    puVar2 = DAT_000000b0;
    *(undefined2 *)(pcVar1 + 0x10) = uVar5;
    *(int *)(pcVar1 + 0x18) = param_5;
    *(undefined2 *)(pcVar1 + 0x12) = *puVar2;
    pcVar1[2] = '\0';
    *(undefined2 *)(pcVar1 + 0x14) = 0;
    iVar4 = FUN_00000088(param_4,0xb4);
    *(int *)(pcVar1 + 0x1c) = iVar4;
    if (iVar4 != 0) {
      FUN_00000096((uint)(byte)pcVar1[1],0);
      FUN_0000009e(1,param_3);
      *pcVar1 = '\x02';
      iVar4 = 1;
    }
  }
  return iVar4;
}



int PrefetchAbort(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  bool in_ZR;
  
  uVar5 = (undefined2)param_2;
  if (in_ZR) {
    uVar3 = unaff_r8 & param_2 & param_2;
    param_3 = uVar3 & unaff_r4 >> 1;
    *(uint *)uVar3 = uVar3;
    param_1 = unaff_r6 - (unaff_r9 >> 0x20) & param_3 & unaff_r8;
  }
  pcVar1 = DAT_000000ac;
  if ((param_5 == 0) || (*DAT_000000ac != '\0')) {
    iVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar5 = 0x45;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    FUN_00000070(DAT_000000ac + 0xc,param_1,4);
    puVar2 = DAT_000000b0;
    *(undefined2 *)(pcVar1 + 0x10) = uVar5;
    *(int *)(pcVar1 + 0x18) = param_5;
    *(undefined2 *)(pcVar1 + 0x12) = *puVar2;
    pcVar1[2] = '\0';
    *(undefined2 *)(pcVar1 + 0x14) = 0;
    iVar4 = FUN_00000088(param_4,0xb4);
    *(int *)(pcVar1 + 0x1c) = iVar4;
    if (iVar4 != 0) {
      FUN_00000096((uint)(byte)pcVar1[1],0);
      FUN_0000009e(1,param_3);
      *pcVar1 = '\x02';
      iVar4 = 1;
    }
  }
  return iVar4;
}



int DataAbort(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  bool in_ZR;
  
  uVar5 = (undefined2)param_2;
  if (in_ZR) {
    uVar3 = unaff_r8 & param_2 & param_2;
    param_3 = uVar3 & unaff_r4 >> 1;
    *(uint *)uVar3 = uVar3;
    param_1 = unaff_r6 - (unaff_r9 >> 0x20) & param_3 & unaff_r8;
  }
  pcVar1 = DAT_000000ac;
  if ((param_5 == 0) || (*DAT_000000ac != '\0')) {
    iVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar5 = 0x45;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    FUN_00000070(DAT_000000ac + 0xc,param_1,4);
    puVar2 = DAT_000000b0;
    *(undefined2 *)(pcVar1 + 0x10) = uVar5;
    *(int *)(pcVar1 + 0x18) = param_5;
    *(undefined2 *)(pcVar1 + 0x12) = *puVar2;
    pcVar1[2] = '\0';
    *(undefined2 *)(pcVar1 + 0x14) = 0;
    iVar4 = FUN_00000088(param_4,0xb4);
    *(int *)(pcVar1 + 0x1c) = iVar4;
    if (iVar4 != 0) {
      FUN_00000096((uint)(byte)pcVar1[1],0);
      FUN_0000009e(1,param_3);
      *pcVar1 = '\x02';
      iVar4 = 1;
    }
  }
  return iVar4;
}



int NotUsed(uint param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  bool in_ZR;
  
  uVar4 = (undefined2)param_2;
  if (in_ZR) {
    param_1 = param_1 & param_2;
    param_3 = param_1 & unaff_r4 >> 1;
    *(uint *)param_1 = param_1;
    param_1 = unaff_r6 - (unaff_r9 >> 0x20) & param_3 & unaff_r8;
  }
  pcVar1 = DAT_000000ac;
  if ((param_5 == 0) || (*DAT_000000ac != '\0')) {
    iVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar4 = 0x45;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    FUN_00000070(DAT_000000ac + 0xc,param_1,4);
    puVar2 = DAT_000000b0;
    *(undefined2 *)(pcVar1 + 0x10) = uVar4;
    *(int *)(pcVar1 + 0x18) = param_5;
    *(undefined2 *)(pcVar1 + 0x12) = *puVar2;
    pcVar1[2] = '\0';
    *(undefined2 *)(pcVar1 + 0x14) = 0;
    iVar3 = FUN_00000088(param_4,0xb4);
    *(int *)(pcVar1 + 0x1c) = iVar3;
    if (iVar3 != 0) {
      FUN_00000096((uint)(byte)pcVar1[1],0);
      FUN_0000009e(1,param_3);
      *pcVar1 = '\x02';
      iVar3 = 1;
    }
  }
  return iVar3;
}



int IRQ(uint param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  bool in_ZR;
  
  uVar4 = (undefined2)param_2;
  if (in_ZR) {
    param_3 = param_1 & unaff_r4 >> 1;
    *(uint *)param_1 = param_1;
    param_1 = unaff_r6 - (unaff_r9 >> 0x20) & param_3 & unaff_r8;
  }
  pcVar1 = DAT_000000ac;
  if ((param_5 == 0) || (*DAT_000000ac != '\0')) {
    iVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar4 = 0x45;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    FUN_00000070(DAT_000000ac + 0xc,param_1,4);
    puVar2 = DAT_000000b0;
    *(undefined2 *)(pcVar1 + 0x10) = uVar4;
    *(int *)(pcVar1 + 0x18) = param_5;
    *(undefined2 *)(pcVar1 + 0x12) = *puVar2;
    pcVar1[2] = '\0';
    *(undefined2 *)(pcVar1 + 0x14) = 0;
    iVar3 = FUN_00000088(param_4,0xb4);
    *(int *)(pcVar1 + 0x1c) = iVar3;
    if (iVar3 != 0) {
      FUN_00000096((uint)(byte)pcVar1[1],0);
      FUN_0000009e(1,param_3);
      *pcVar1 = '\x02';
      iVar3 = 1;
    }
  }
  return iVar3;
}



int FIQ(uint param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  char *pcVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int unaff_r4;
  int unaff_r6;
  uint unaff_r8;
  int unaff_r9;
  bool in_ZR;
  
  uVar4 = (undefined2)param_2;
  if (in_ZR) {
    param_3 = param_1 & unaff_r4 >> 1;
    *(uint *)param_1 = param_1;
    param_1 = unaff_r6 - (unaff_r9 >> 0x20) & param_3 & unaff_r8;
  }
  pcVar1 = DAT_000000ac;
  if ((param_5 == 0) || (*DAT_000000ac != '\0')) {
    iVar3 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar4 = 0x45;
    }
    if (param_4 == 0) {
      param_4 = param_3;
    }
    FUN_00000070(DAT_000000ac + 0xc,param_1,4);
    puVar2 = DAT_000000b0;
    *(undefined2 *)(pcVar1 + 0x10) = uVar4;
    *(int *)(pcVar1 + 0x18) = param_5;
    *(undefined2 *)(pcVar1 + 0x12) = *puVar2;
    pcVar1[2] = '\0';
    *(undefined2 *)(pcVar1 + 0x14) = 0;
    iVar3 = FUN_00000088(param_4,0xb4);
    *(int *)(pcVar1 + 0x1c) = iVar3;
    if (iVar3 != 0) {
      FUN_00000096((uint)(byte)pcVar1[1],0);
      FUN_0000009e(1,param_3);
      *pcVar1 = '\x02';
      iVar3 = 1;
    }
  }
  return iVar3;
}



int FUN_00000070(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined *unaff_r4;
  undefined2 unaff_r6;
  undefined4 unaff_r7;
  undefined4 in_stack_0000000c;
  
  FUN_00000070();
  puVar1 = DAT_000000b0;
  *(undefined2 *)(unaff_r4 + 0x10) = unaff_r6;
  *(undefined4 *)(unaff_r4 + 0x18) = unaff_r7;
  *(undefined2 *)(unaff_r4 + 0x12) = *puVar1;
  unaff_r4[2] = 0;
  *(undefined2 *)(unaff_r4 + 0x14) = 0;
  iVar2 = FUN_00000088();
  *(int *)(unaff_r4 + 0x1c) = iVar2;
  if (iVar2 != 0) {
    FUN_00000096((uint)(byte)unaff_r4[1],0);
    FUN_0000009e(1,in_stack_0000000c);
    *unaff_r4 = 2;
    iVar2 = 1;
  }
  return iVar2;
}



int FUN_00000088(void)

{
  int iVar1;
  undefined *unaff_r4;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_00000088();
  *(int *)(unaff_r4 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    FUN_00000096((uint)(byte)unaff_r4[1],0);
    FUN_0000009e(1,in_stack_0000000c);
    *unaff_r4 = 2;
    iVar1 = 1;
  }
  return iVar1;
}



undefined4 FUN_00000096(void)

{
  undefined *unaff_r4;
  undefined4 param_8;
  
  FUN_00000096();
  FUN_0000009e(1,param_8);
  *unaff_r4 = 2;
  return 1;
}



undefined4 FUN_0000009e(void)

{
  undefined *unaff_r4;
  
  FUN_0000009e();
  *unaff_r4 = 2;
  return 1;
}



void FUN_000000c0(void)

{
  undefined uVar1;
  
  FUN_000000c0();
  uVar1 = FUN_000000ca(0,3,DAT_000000dc);
  *(undefined *)(DAT_000000d8 + 1) = uVar1;
  return;
}



void FUN_000000ca(void)

{
  undefined uVar1;
  
  uVar1 = FUN_000000ca();
  *(undefined *)(DAT_000000d8 + 1) = uVar1;
  return;
}



undefined8 FUN_000000fc(void)

{
  int iVar1;
  uint uVar2;
  char *unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  uint uVar3;
  uint unaff_r7;
  undefined8 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  iVar1 = FUN_000000fc();
  if (iVar1 == 0) goto LAB_00000194;
  if ((uint)*(ushort *)(unaff_r4 + 0x10) == unaff_r7) {
LAB_00000148:
    if (3 < unaff_r6) {
      iVar1 = FUN_0000014e();
      if (*unaff_r4 == '\x01') {
        if (iVar1 == 5) {
          iVar1 = FUN_00000180(unaff_r5 + 2);
          if (iVar1 == 2) {
LAB_00000210:
            uVar4 = FUN_0000018e(2);
            return uVar4;
          }
          if (iVar1 != 3) goto LAB_00000214;
LAB_0000018c:
          FUN_0000018e(4);
          goto LAB_00000192;
        }
        if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
          unaff_r4[2] = unaff_r4[2] & 0xf7;
          if (iVar1 != 6) {
            *(undefined2 *)(unaff_r4 + 0x12) = 0x200;
            goto LAB_00000178;
          }
          iVar1 = FUN_0000019e();
          if (iVar1 != 1) goto LAB_00000276;
        }
        else {
LAB_00000178:
          if (iVar1 != 4) goto LAB_00000276;
          uVar2 = FUN_000001aa(unaff_r5 + 2);
          if ((uint)*(ushort *)(unaff_r4 + 0x14) == uVar2 + 1) goto LAB_00000272;
          if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar2) {
LAB_00000244:
            uVar4 = FUN_0000027a(0,0x290);
            return uVar4;
          }
        }
        *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
        unaff_r4[2] = unaff_r4[2] & 0xfe;
        FUN_000001cc(0);
        if ((int)((uint)(byte)unaff_r4[2] << 0x1e) < 0) {
LAB_000001d6:
          FUN_000001d8(0);
        }
      }
      else {
        if (*unaff_r4 != '\x02') {
LAB_00000276:
          FUN_0000027a(4,0x2ac);
LAB_00000214:
          uVar4 = FUN_0000018e(5);
          return uVar4;
        }
        if (iVar1 == 5) {
          iVar1 = FUN_000001fe(unaff_r5 + 2);
          if (iVar1 == 1) {
            uVar4 = FUN_0000018e(3);
            return uVar4;
          }
          if (iVar1 == 2) goto LAB_00000210;
          goto LAB_00000214;
        }
        if (-1 < (int)((uint)(byte)unaff_r4[2] << 0x1c)) {
LAB_000001f6:
          if (iVar1 != 3) goto LAB_00000276;
          uVar3 = unaff_r6 - 4 & 0xffff;
          uVar2 = FUN_00000234(unaff_r5 + 2);
          if ((uint)*(ushort *)(unaff_r4 + 0x14) == uVar2 + 1) goto LAB_00000272;
          if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar2) goto LAB_00000244;
          uVar2 = FUN_00000250(*(undefined4 *)(unaff_r4 + 0x1c),unaff_r5 + 4,uVar3);
          if (uVar2 != uVar3) {
            FUN_0000025c(3,0x2a0);
            goto LAB_0000018c;
          }
          FUN_00000262();
          if ((uint)*(ushort *)(unaff_r4 + 0x12) == uVar3) {
            *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
            goto LAB_00000272;
          }
          goto LAB_000001d6;
        }
        unaff_r4[2] = unaff_r4[2] & 0xf7;
        if (iVar1 != 6) {
          *(undefined2 *)(unaff_r4 + 0x12) = 0x200;
          *(undefined2 *)(unaff_r4 + 0x14) = 1;
          goto LAB_000001f6;
        }
        iVar1 = FUN_0000021c();
        if (iVar1 == 0) goto LAB_00000276;
        FUN_00000224();
        *(undefined2 *)(unaff_r4 + 0x14) = 1;
      }
LAB_00000272:
      iVar1 = 1;
      goto LAB_00000194;
    }
  }
  else {
    if (-1 < (int)((uint)(byte)unaff_r4[2] << 0x1d)) {
      unaff_r4[2] = unaff_r4[2] | 4;
      *(short *)(unaff_r4 + 0x10) = (short)unaff_r7;
      goto LAB_00000148;
    }
    iVar1 = FUN_00000112(0xe);
    FUN_0000011a(iVar1,5);
    FUN_00000122(iVar1 + 2,5);
    FUN_0000012a(iVar1 + 4,0x284);
    in_stack_00000000 = 0xe;
    FUN_0000013a((uint)(byte)unaff_r4[1],in_stack_00000004);
  }
LAB_00000192:
  iVar1 = 0;
LAB_00000194:
  return CONCAT44(iVar1,in_stack_00000000);
}



undefined8 FUN_00000112(void)

{
  int iVar1;
  int unaff_r4;
  undefined4 in_stack_00000004;
  
  iVar1 = FUN_00000112();
  FUN_0000011a(iVar1,5);
  FUN_00000122(iVar1 + 2,5);
  FUN_0000012a(iVar1 + 4,0x284);
  FUN_0000013a((uint)*(byte *)(unaff_r4 + 1),in_stack_00000004);
  return 0xe;
}



undefined8 FUN_0000011a(void)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 in_stack_00000004;
  
  FUN_0000011a();
  FUN_00000122(unaff_r5 + 2,5);
  FUN_0000012a(unaff_r5 + 4,0x284);
  FUN_0000013a((uint)*(byte *)(unaff_r4 + 1),in_stack_00000004);
  return 0xe;
}



undefined8 FUN_00000122(void)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 in_stack_00000004;
  
  FUN_00000122();
  FUN_0000012a(unaff_r5 + 4,0x284);
  FUN_0000013a((uint)*(byte *)(unaff_r4 + 1),in_stack_00000004);
  return 0xe;
}



undefined8 FUN_0000012a(void)

{
  int unaff_r4;
  undefined4 param_6;
  
  FUN_0000012a();
  FUN_0000013a((uint)*(byte *)(unaff_r4 + 1),param_6);
  return 0xe;
}



ulonglong FUN_0000013a(void)

{
  uint in_stack_00000000;
  
  FUN_0000013a();
  return (ulonglong)in_stack_00000000;
}



undefined4 FUN_0000014e(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar4;
  
  iVar1 = FUN_0000014e();
  if (*unaff_r4 != '\x01') {
    if (*unaff_r4 == '\x02') {
      if (iVar1 == 5) {
        iVar1 = FUN_000001fe(unaff_r5 + 2);
        if (iVar1 == 1) {
          uVar3 = FUN_0000018e(3);
          return uVar3;
        }
        if (iVar1 == 2) goto LAB_00000210;
        goto LAB_00000214;
      }
      if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
        unaff_r4[2] = unaff_r4[2] & 0xf7;
        if (iVar1 == 6) {
          iVar1 = FUN_0000021c();
          if (iVar1 != 0) {
            FUN_00000224();
            *(undefined2 *)(unaff_r4 + 0x14) = 1;
            return 1;
          }
          goto LAB_00000276;
        }
        *(undefined2 *)(unaff_r4 + 0x12) = 0x200;
        *(undefined2 *)(unaff_r4 + 0x14) = 1;
      }
      if (iVar1 == 3) {
        uVar4 = unaff_r6 - 4U & 0xffff;
        uVar2 = FUN_00000234(unaff_r5 + 2);
        if ((uint)*(ushort *)(unaff_r4 + 0x14) == uVar2 + 1) {
          return 1;
        }
        if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar2) goto LAB_00000244;
        uVar2 = FUN_00000250(*(undefined4 *)(unaff_r4 + 0x1c),unaff_r5 + 4,uVar4);
        if (uVar2 != uVar4) {
          FUN_0000025c(3,0x2a0);
LAB_0000018c:
          FUN_0000018e(4);
          return 0;
        }
        FUN_00000262();
        if ((uint)*(ushort *)(unaff_r4 + 0x12) == uVar4) {
          *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
          return 1;
        }
        goto LAB_000001d6;
      }
    }
LAB_00000276:
    FUN_0000027a(4,0x2ac);
LAB_00000214:
    uVar3 = FUN_0000018e(5);
    return uVar3;
  }
  if (iVar1 == 5) {
    iVar1 = FUN_00000180(unaff_r5 + 2);
    if (iVar1 == 2) {
LAB_00000210:
      uVar3 = FUN_0000018e(2);
      return uVar3;
    }
    if (iVar1 != 3) goto LAB_00000214;
    goto LAB_0000018c;
  }
  if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
    unaff_r4[2] = unaff_r4[2] & 0xf7;
    if (iVar1 != 6) {
      *(undefined2 *)(unaff_r4 + 0x12) = 0x200;
      goto LAB_00000178;
    }
    iVar1 = FUN_0000019e();
    if (iVar1 != 1) goto LAB_00000276;
  }
  else {
LAB_00000178:
    if (iVar1 != 4) goto LAB_00000276;
    uVar2 = FUN_000001aa(unaff_r5 + 2);
    if ((uint)*(ushort *)(unaff_r4 + 0x14) == uVar2 + 1) {
      return 1;
    }
    if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar2) {
LAB_00000244:
      uVar3 = FUN_0000027a(0,0x290);
      return uVar3;
    }
  }
  *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
  unaff_r4[2] = unaff_r4[2] & 0xfe;
  FUN_000001cc(0);
  if (-1 < (int)((uint)(byte)unaff_r4[2] << 0x1e)) {
    return 1;
  }
LAB_000001d6:
  FUN_000001d8(0);
  return 1;
}



ulonglong FUN_00000180(void)

{
  int iVar1;
  undefined8 uVar2;
  uint in_stack_00000000;
  
  iVar1 = FUN_00000180();
  if (iVar1 == 2) {
    uVar2 = FUN_0000018e(2);
    return uVar2;
  }
  if (iVar1 == 3) {
    FUN_0000018e(4);
    return (ulonglong)in_stack_00000000;
  }
  uVar2 = FUN_0000018e(5);
  return uVar2;
}



ulonglong FUN_0000018e(void)

{
  uint in_stack_00000000;
  
  FUN_0000018e();
  return (ulonglong)in_stack_00000000;
}



undefined4 FUN_0000019e(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  
  iVar1 = FUN_0000019e();
  if (iVar1 != 1) {
    FUN_0000027a(4,0x2ac);
    uVar2 = FUN_0000018e(5);
    return uVar2;
  }
  *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
  *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) & 0xfe;
  FUN_000001cc(0);
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1e) < 0) {
    FUN_000001d8(0);
  }
  return 1;
}



undefined8 FUN_000001aa(void)

{
  uint uVar1;
  int unaff_r4;
  undefined8 uVar2;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_000001aa();
  if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar1 + 1) {
    if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar1) {
      uVar2 = FUN_0000027a(0,0x290);
      return uVar2;
    }
    *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
    *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) & 0xfe;
    FUN_000001cc(0);
    if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1e) < 0) {
      FUN_000001d8(0);
    }
  }
  return CONCAT44(1,in_stack_00000000);
}



undefined8 FUN_000001cc(void)

{
  int unaff_r4;
  undefined4 in_stack_00000000;
  
  FUN_000001cc();
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1e) < 0) {
    FUN_000001d8(0);
  }
  return CONCAT44(1,in_stack_00000000);
}



undefined8 FUN_000001d8(void)

{
  undefined4 in_stack_00000000;
  
  FUN_000001d8();
  return CONCAT44(1,in_stack_00000000);
}



void FUN_000001fe(void)

{
  int iVar1;
  
  iVar1 = FUN_000001fe();
  if (iVar1 == 1) {
    FUN_0000018e(3);
    return;
  }
  if (iVar1 == 2) {
    FUN_0000018e(2);
    return;
  }
  FUN_0000018e(5);
  return;
}



undefined8 FUN_0000021c(void)

{
  int iVar1;
  int unaff_r4;
  undefined2 unaff_r7;
  undefined8 uVar2;
  undefined4 in_stack_00000000;
  
  iVar1 = FUN_0000021c();
  if (iVar1 != 0) {
    FUN_00000224();
    *(undefined2 *)(unaff_r4 + 0x14) = unaff_r7;
    return CONCAT44(1,in_stack_00000000);
  }
  FUN_0000027a(4,0x2ac);
  uVar2 = FUN_0000018e(5);
  return uVar2;
}



undefined8 FUN_00000224(void)

{
  int unaff_r4;
  undefined2 unaff_r7;
  undefined4 in_stack_00000000;
  
  FUN_00000224();
  *(undefined2 *)(unaff_r4 + 0x14) = unaff_r7;
  return CONCAT44(1,in_stack_00000000);
}



undefined4 FUN_00000234(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  
  uVar1 = FUN_00000234();
  if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar1 + 1) {
    if ((uint)*(ushort *)(unaff_r4 + 0x14) != uVar1) {
      uVar2 = FUN_0000027a(0,0x290);
      return uVar2;
    }
    uVar1 = FUN_00000250(*(undefined4 *)(unaff_r4 + 0x1c),unaff_r5 + 4);
    if (uVar1 != unaff_r6) {
      FUN_0000025c(3,0x2a0);
      FUN_0000018e(4);
      return 0;
    }
    FUN_00000262();
    if ((uint)*(ushort *)(unaff_r4 + 0x12) == unaff_r6) {
      *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
    }
    else {
      FUN_000001d8(0);
    }
  }
  return 1;
}



undefined8 FUN_00000250(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r6;
  undefined4 in_stack_00000000;
  
  uVar2 = FUN_00000250();
  if (uVar2 == unaff_r6) {
    FUN_00000262();
    if ((uint)*(ushort *)(unaff_r4 + 0x12) == unaff_r6) {
      *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
    }
    else {
      FUN_000001d8(0);
    }
    uVar1 = 1;
  }
  else {
    FUN_0000025c(3,0x2a0);
    FUN_0000018e(4);
    uVar1 = 0;
  }
  return CONCAT44(uVar1,in_stack_00000000);
}



ulonglong FUN_0000025c(void)

{
  uint in_stack_00000000;
  
  FUN_0000025c();
  FUN_0000018e(4);
  return (ulonglong)in_stack_00000000;
}



undefined8 FUN_00000262(void)

{
  int unaff_r4;
  uint unaff_r6;
  undefined4 in_stack_00000000;
  
  FUN_00000262();
  if ((uint)*(ushort *)(unaff_r4 + 0x12) == unaff_r6) {
    *(short *)(unaff_r4 + 0x14) = *(short *)(unaff_r4 + 0x14) + 1;
  }
  else {
    FUN_000001d8(0);
  }
  return CONCAT44(1,in_stack_00000000);
}



void FUN_0000027a(void)

{
  FUN_0000027a();
  FUN_0000018e(5);
  return;
}



undefined4
FUN_000002cc(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  char *unaff_r4;
  char *unaff_r5;
  
  do {
    iVar1 = FUN_000002cc(param_1,param_2);
    param_1 = unaff_r4;
    if (iVar1 == 1) {
      FUN_000002dc(unaff_r4 + 8,0x324);
      if ((uint)*(ushort *)(DAT_00000328 + 0x12) != param_5) {
        if (DAT_0000032c <= param_5 - 8) {
          return 0;
        }
        *(undefined2 *)(DAT_00000328 + 0x12) = (short)param_5;
      }
      return 1;
    }
    while (param_1 < unaff_r5) {
      if (*param_1 == '\0') {
        param_1 = param_1 + 1;
        break;
      }
      param_1 = param_1 + 1;
    }
    if (param_1 == unaff_r5) {
      return 1;
    }
    if (param_1 == (char *)0x0) {
      return 1;
    }
    param_2 = 0x31c;
    unaff_r4 = param_1;
  } while( true );
}



undefined4 FUN_000002dc(void)

{
  uint param_5;
  
  FUN_000002dc();
  if ((uint)*(ushort *)(DAT_00000328 + 0x12) != param_5) {
    if (DAT_0000032c <= param_5 - 8) {
      return 0;
    }
    *(undefined2 *)(DAT_00000328 + 0x12) = (short)param_5;
  }
  return 1;
}



void FUN_00000364(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined *unaff_r4;
  undefined2 unaff_r6;
  undefined4 unaff_r7;
  undefined4 param_8;
  
  FUN_00000364();
  puVar1 = DAT_000003a8;
  *(undefined2 *)(unaff_r4 + 0x10) = unaff_r6;
  *(undefined4 *)(unaff_r4 + 0x18) = unaff_r7;
  *(undefined2 *)(unaff_r4 + 0x12) = *puVar1;
  unaff_r4[2] = 0;
  *(undefined2 *)(unaff_r4 + 0x14) = 0;
  iVar2 = FUN_0000037c(param_8,0x3ac);
  *(int *)(unaff_r4 + 0x1c) = iVar2;
  if (iVar2 != 0) {
    FUN_0000038a((uint)(byte)unaff_r4[1],0);
    FUN_00000392(2);
    unaff_r4[2] = unaff_r4[2] | 1;
    *unaff_r4 = 1;
  }
  return;
}



void FUN_0000037c(void)

{
  int iVar1;
  undefined *unaff_r4;
  
  iVar1 = FUN_0000037c();
  *(int *)(unaff_r4 + 0x1c) = iVar1;
  if (iVar1 != 0) {
    FUN_0000038a((uint)(byte)unaff_r4[1],0);
    FUN_00000392(2);
    unaff_r4[2] = unaff_r4[2] | 1;
    *unaff_r4 = 1;
  }
  return;
}



void FUN_0000038a(void)

{
  undefined *unaff_r4;
  
  FUN_0000038a();
  FUN_00000392(2);
  unaff_r4[2] = unaff_r4[2] | 1;
  *unaff_r4 = 1;
  return;
}



void FUN_00000392(void)

{
  undefined *unaff_r4;
  
  FUN_00000392();
  unaff_r4[2] = unaff_r4[2] | 1;
  *unaff_r4 = 1;
  return;
}



void FUN_000003e0(void)

{
  int unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000003e0();
  FUN_000003f2((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 0xc,(uint)*(ushort *)(unaff_r4 + 0x10),
               *(undefined4 *)(unaff_r4 + 8));
  *(undefined2 *)(unaff_r4 + 4) = *(undefined2 *)(DAT_00000494 + 2);
                    // WARNING: Could not recover jumptable at 0x00000400. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000003f2(void)

{
  int unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000003f2();
  *(undefined2 *)(unaff_r4 + 4) = *(undefined2 *)(DAT_00000494 + 2);
                    // WARNING: Could not recover jumptable at 0x00000400. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0000041e(void)

{
  undefined *unaff_r4;
  undefined4 unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000041e();
  *(undefined4 *)(unaff_r4 + 0x1c) = unaff_r5;
  FUN_00000428(0);
  FUN_0000042e((uint)(byte)unaff_r4[1]);
  FUN_00000436((uint)(byte)unaff_r4[0x16],*(undefined4 *)(unaff_r4 + 0x18));
  *unaff_r4 = (char)unaff_r5;
                    // WARNING: Could not recover jumptable at 0x00000400. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000428(void)

{
  undefined *unaff_r4;
  undefined unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000428();
  FUN_0000042e((uint)(byte)unaff_r4[1]);
  FUN_00000436((uint)(byte)unaff_r4[0x16],*(undefined4 *)(unaff_r4 + 0x18));
  *unaff_r4 = unaff_r5;
                    // WARNING: Could not recover jumptable at 0x00000400. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0000042e(void)

{
  undefined *unaff_r4;
  undefined unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000042e();
  FUN_00000436((uint)(byte)unaff_r4[0x16],*(undefined4 *)(unaff_r4 + 0x18));
  *unaff_r4 = unaff_r5;
                    // WARNING: Could not recover jumptable at 0x00000400. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000436(void)

{
  undefined *unaff_r4;
  undefined unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000436();
  *unaff_r4 = unaff_r5;
                    // WARNING: Could not recover jumptable at 0x00000400. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000004a4(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_000004a4();
  FUN_000004b4((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 0xc,(uint)*(ushort *)(unaff_r4 + 0x10));
  FUN_000004bc();
  iVar1 = DAT_000004d4;
  *(undefined2 *)(unaff_r4 + 4) = *(undefined2 *)(DAT_000004d4 + 2);
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(iVar1 + 4);
  return;
}



void FUN_000004b4(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_000004b4();
  FUN_000004bc();
  iVar1 = DAT_000004d4;
  *(undefined2 *)(unaff_r4 + 4) = *(undefined2 *)(DAT_000004d4 + 2);
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(iVar1 + 4);
  return;
}



void FUN_000004bc(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_000004bc();
  iVar1 = DAT_000004d4;
  *(undefined2 *)(unaff_r4 + 4) = *(undefined2 *)(DAT_000004d4 + 2);
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(iVar1 + 4);
  return;
}



void FUN_000004dc(void)

{
  int iVar1;
  
  iVar1 = FUN_000004dc();
  FUN_000004e4(iVar1,4);
  FUN_000004ee(iVar1 + 2,(uint)*(ushort *)(DAT_00000500 + 0x14));
  FUN_000004f6(iVar1,4);
  return;
}



void FUN_000004e4(void)

{
  int unaff_r4;
  
  FUN_000004e4();
  FUN_000004ee(unaff_r4 + 2,(uint)*(ushort *)(DAT_00000500 + 0x14));
  FUN_000004f6();
  return;
}



void FUN_000004ee(void)

{
  FUN_000004ee();
  FUN_000004f6();
  return;
}



void FUN_000004f6(void)

{
  FUN_000004f6();
  return;
}



void FUN_0000050c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0000050c();
  uVar2 = iVar1 + 5U & 0xffff;
  iVar1 = FUN_00000518(uVar2);
  FUN_00000520(iVar1,5);
  FUN_00000528(iVar1 + 2);
  FUN_00000530(iVar1 + 4);
  FUN_00000538(iVar1,uVar2);
  return;
}



void FUN_00000518(void)

{
  int iVar1;
  
  iVar1 = FUN_00000518();
  FUN_00000520(iVar1,5);
  FUN_00000528(iVar1 + 2);
  FUN_00000530(iVar1 + 4);
  FUN_00000538(iVar1);
  return;
}



void FUN_00000520(void)

{
  int unaff_r4;
  
  FUN_00000520();
  FUN_00000528(unaff_r4 + 2);
  FUN_00000530(unaff_r4 + 4);
  FUN_00000538();
  return;
}



void FUN_00000528(void)

{
  int unaff_r4;
  
  FUN_00000528();
  FUN_00000530(unaff_r4 + 4);
  FUN_00000538();
  return;
}



void FUN_00000530(void)

{
  FUN_00000530();
  FUN_00000538();
  return;
}



void FUN_00000538(void)

{
  FUN_00000538();
  return;
}



void FUN_0000054c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = FUN_0000054c();
  iVar2 = FUN_00000556(iVar1 + 0x16U & 0xffff);
  FUN_0000055e();
  iVar3 = FUN_00000566(iVar2 + 2);
  iVar4 = FUN_00000570(iVar2 + iVar3 + 3,0x5b8);
  iVar1 = DAT_000005c0;
  uVar5 = iVar4 + iVar3 + 3 + 1;
  if (*(short *)(DAT_000005c0 + 0x12) != 0x200) {
    iVar3 = FUN_00000588(iVar2 + uVar5,0x5c4);
    iVar4 = iVar3 + uVar5 + 1;
    iVar3 = FUN_00000596(iVar2 + iVar4,0x5cc,(uint)*(ushort *)(iVar1 + 0x12));
    uVar5 = iVar3 + iVar4 + 1;
  }
  FUN_000005a4(iVar2,uVar5 & 0xffff);
  *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 8;
  return;
}



void FUN_00000556(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = FUN_00000556();
  FUN_0000055e();
  iVar3 = FUN_00000566(iVar2 + 2);
  iVar4 = FUN_00000570(iVar2 + iVar3 + 3,0x5b8);
  iVar1 = DAT_000005c0;
  uVar5 = iVar4 + iVar3 + 3 + 1;
  if (*(short *)(DAT_000005c0 + 0x12) != 0x200) {
    iVar3 = FUN_00000588(iVar2 + uVar5,0x5c4);
    iVar4 = iVar3 + uVar5 + 1;
    iVar3 = FUN_00000596(iVar2 + iVar4,0x5cc,(uint)*(ushort *)(iVar1 + 0x12));
    uVar5 = iVar3 + iVar4 + 1;
  }
  FUN_000005a4(iVar2,uVar5 & 0xffff);
  *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 8;
  return;
}



void FUN_0000055e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  
  FUN_0000055e();
  iVar2 = FUN_00000566(unaff_r5 + 2);
  iVar3 = FUN_00000570(unaff_r5 + iVar2 + 3,0x5b8);
  iVar1 = DAT_000005c0;
  iVar2 = iVar3 + iVar2 + 3 + 1;
  if (*(short *)(DAT_000005c0 + 0x12) != 0x200) {
    iVar3 = FUN_00000588(unaff_r5 + iVar2,0x5c4);
    FUN_00000596(unaff_r5 + iVar3 + iVar2 + 1,0x5cc,(uint)*(ushort *)(iVar1 + 0x12));
  }
  FUN_000005a4();
  *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 8;
  return;
}



void FUN_00000566(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  
  iVar2 = FUN_00000566();
  iVar3 = FUN_00000570(unaff_r5 + iVar2 + 3,0x5b8);
  iVar1 = DAT_000005c0;
  iVar2 = iVar3 + iVar2 + 3 + 1;
  if (*(short *)(DAT_000005c0 + 0x12) != 0x200) {
    iVar3 = FUN_00000588(unaff_r5 + iVar2,0x5c4);
    FUN_00000596(unaff_r5 + iVar3 + iVar2 + 1,0x5cc,(uint)*(ushort *)(iVar1 + 0x12));
  }
  FUN_000005a4();
  *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 8;
  return;
}



void FUN_00000570(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  
  iVar2 = FUN_00000570();
  iVar1 = DAT_000005c0;
  iVar2 = iVar2 + unaff_r4 + 1;
  if (*(short *)(DAT_000005c0 + 0x12) != 0x200) {
    iVar3 = FUN_00000588(unaff_r5 + iVar2,0x5c4);
    FUN_00000596(unaff_r5 + iVar3 + iVar2 + 1,0x5cc,(uint)*(ushort *)(iVar1 + 0x12));
  }
  FUN_000005a4();
  *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) | 8;
  return;
}



void FUN_00000588(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_00000588();
  FUN_00000596(unaff_r5 + iVar1 + unaff_r4 + 1,0x5cc,(uint)*(ushort *)(unaff_r6 + 0x12));
  FUN_000005a4();
  *(byte *)(unaff_r6 + 2) = *(byte *)(unaff_r6 + 2) | 8;
  return;
}



void FUN_00000596(void)

{
  int unaff_r6;
  
  FUN_00000596();
  FUN_000005a4();
  *(byte *)(unaff_r6 + 2) = *(byte *)(unaff_r6 + 2) | 8;
  return;
}



void FUN_000005a4(void)

{
  int unaff_r6;
  
  FUN_000005a4();
  *(byte *)(unaff_r6 + 2) = *(byte *)(unaff_r6 + 2) | 8;
  return;
}



void FUN_000005de(void)

{
  int unaff_r4;
  undefined2 unaff_r5;
  undefined4 unaff_r6;
  
  FUN_000005de();
  *(undefined4 *)(unaff_r4 + 8) = unaff_r6;
  *(undefined2 *)(unaff_r4 + 6) = unaff_r5;
  return;
}


