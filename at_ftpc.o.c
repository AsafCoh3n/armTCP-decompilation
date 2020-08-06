#include "at_ftpc.o.h"



void UndefinedInstruction(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r4 >> 0xc;
    *(uint *)uVar2 = uVar2;
  }
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046(*(int *)(DAT_00000054 + 0x14),param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void SupervisorCall(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r4 >> 0xc;
    *(uint *)uVar2 = uVar2;
  }
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046(*(int *)(DAT_00000054 + 0x14),param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void PrefetchAbort(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r4 >> 0xc;
    *(uint *)uVar2 = uVar2;
  }
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046(*(int *)(DAT_00000054 + 0x14),param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void DataAbort(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = uVar2 & unaff_r4 >> 0xc;
    *(uint *)uVar2 = uVar2;
  }
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046(*(int *)(DAT_00000054 + 0x14),param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void NotUsed(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint unaff_r4;
  bool in_ZR;
  
  if (in_ZR) {
    param_1 = param_1 & param_2;
    param_3 = param_1 & unaff_r4 >> 0xc;
    *(uint *)param_1 = param_1;
  }
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046(*(int *)(DAT_00000054 + 0x14),param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void IRQ(uint param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint unaff_r4;
  bool in_ZR;
  
  if (in_ZR) {
    param_3 = param_1 & unaff_r4 >> 0xc;
    *(uint *)param_1 = param_1;
  }
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046(*(int *)(DAT_00000054 + 0x14),param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void FIQ(uint param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint unaff_r4;
  bool in_ZR;
  
  if (in_ZR) {
    param_3 = param_1 & unaff_r4 >> 0xc;
    *(uint *)param_1 = param_1;
  }
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046(*(int *)(DAT_00000054 + 0x14),param_2,param_3);
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void FUN_0000003c(void)

{
  int iVar1;
  
  iVar1 = DAT_00000054;
  if (*(int *)(DAT_00000054 + 0x14) != 0) {
    FUN_00000046();
    *(undefined4 *)(iVar1 + 0x14) = 0;
  }
  return;
}



void FUN_00000046(void)

{
  int unaff_r4;
  
  FUN_00000046();
  *(undefined4 *)(unaff_r4 + 0x14) = 0;
  return;
}



undefined4 FUN_00000074(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined2 uVar4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined unaff_r7;
  undefined4 in_stack_00000004;
  
  uVar4 = (undefined2)unaff_r5;
  uVar2 = FUN_00000074();
  if ((uVar2 < 2) && (uVar2 = FUN_0000007e((uint)*(byte *)(unaff_r4 + 0xc)), uVar2 < 3)) {
    if (unaff_r5 == 0) {
      uVar4 = 0x15;
    }
    FUN_0000009c(unaff_r4 + 4,in_stack_00000004,4);
    *(undefined2 *)(unaff_r4 + 8) = uVar4;
    *(undefined *)(unaff_r4 + 0xd) = unaff_r7;
    *(undefined4 *)(unaff_r4 + 0x10) = unaff_r6;
    *(undefined4 *)(unaff_r4 + 0x14) = 0;
    *(undefined *)(unaff_r4 + 0xf) = 0;
    cVar1 = *(char *)(DAT_000000c8 + 1);
    if (cVar1 != '\0') {
      cVar1 = '\x04';
    }
    *(char *)(unaff_r4 + 2) = cVar1;
    FUN_000000ba(1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_0000007e(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined2 uVar4;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined unaff_r7;
  undefined4 param_6;
  
  uVar4 = (undefined2)unaff_r5;
  uVar2 = FUN_0000007e();
  if (uVar2 < 3) {
    if (unaff_r5 == 0) {
      uVar4 = 0x15;
    }
    FUN_0000009c(unaff_r4 + 4,param_6,4);
    *(undefined2 *)(unaff_r4 + 8) = uVar4;
    *(undefined *)(unaff_r4 + 0xd) = unaff_r7;
    *(undefined4 *)(unaff_r4 + 0x10) = unaff_r6;
    *(undefined4 *)(unaff_r4 + 0x14) = 0;
    *(undefined *)(unaff_r4 + 0xf) = 0;
    cVar1 = *(char *)(DAT_000000c8 + 1);
    if (cVar1 != '\0') {
      cVar1 = '\x04';
    }
    *(char *)(unaff_r4 + 2) = cVar1;
    FUN_000000ba(1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_0000009c(void)

{
  char cVar1;
  int unaff_r4;
  undefined2 unaff_r5;
  undefined4 unaff_r6;
  undefined unaff_r7;
  
  FUN_0000009c();
  *(undefined2 *)(unaff_r4 + 8) = unaff_r5;
  *(undefined *)(unaff_r4 + 0xd) = unaff_r7;
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r6;
  *(undefined4 *)(unaff_r4 + 0x14) = 0;
  *(undefined *)(unaff_r4 + 0xf) = 0;
  cVar1 = *(char *)(DAT_000000c8 + 1);
  if (cVar1 != '\0') {
    cVar1 = '\x04';
  }
  *(char *)(unaff_r4 + 2) = cVar1;
  FUN_000000ba(1);
  return 1;
}



undefined4 FUN_000000ba(void)

{
  FUN_000000ba();
  return 1;
}



void FUN_00000180(void)

{
  int iVar1;
  undefined uVar2;
  
  FUN_00000180();
  uVar2 = FUN_0000018c(2,0,0,DAT_000001ac);
  iVar1 = DAT_000001a8;
  *(undefined *)(DAT_000001a8 + 1) = uVar2;
  uVar2 = FUN_0000019c(7,0,0,DAT_000001b0);
  *(undefined *)(iVar1 + 0xc) = uVar2;
  return;
}



void FUN_0000018c(void)

{
  int iVar1;
  undefined uVar2;
  
  uVar2 = FUN_0000018c();
  iVar1 = DAT_000001a8;
  *(undefined *)(DAT_000001a8 + 1) = uVar2;
  uVar2 = FUN_0000019c(7,0,0,DAT_000001b0);
  *(undefined *)(iVar1 + 0xc) = uVar2;
  return;
}



void FUN_0000019c(void)

{
  undefined uVar1;
  int unaff_r4;
  
  uVar1 = FUN_0000019c();
  *(undefined *)(unaff_r4 + 0xc) = uVar1;
  return;
}



void FUN_000001e8(void)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000001e8();
                    // WARNING: Could not recover jumptable at 0x000003ce. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(0,in_stack_00000000,in_stack_00000004);
  return;
}



void FUN_000003c4(void)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000003c4();
                    // WARNING: Could not recover jumptable at 0x000003ce. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(0,in_stack_00000000,in_stack_00000004);
  return;
}



void FUN_000003d2(void)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000003d2();
                    // WARNING: Could not recover jumptable at 0x000003ce. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(1,in_stack_00000000,in_stack_00000004);
  return;
}



undefined4 FUN_0000040a(void)

{
  undefined uVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  char *pcVar5;
  char *unaff_r5;
  int unaff_r6;
  
  uVar1 = FUN_0000040a();
  *(undefined *)(unaff_r6 + 0xe) = uVar1;
  pcVar4 = (char *)(unaff_r4 + 3);
  if ((*(char *)(unaff_r4 + 3) == '-') && (pcVar4 < unaff_r5)) {
    do {
      if (unaff_r5 <= pcVar4) break;
      pcVar5 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar5 != '\n');
LAB_0000042a:
    pcVar5 = pcVar4 + 1;
    if (pcVar5 < unaff_r5) {
      uVar2 = FUN_00000432(pcVar5);
      if ((uVar2 == (uint)*(byte *)(unaff_r6 + 0xe)) && (pcVar4[4] != '-')) goto LAB_00000442;
      while ((pcVar4 = pcVar5, *pcVar5 != '\n' && (pcVar5 < unaff_r5))) {
        pcVar5 = pcVar5 + 1;
      }
      goto LAB_0000042a;
    }
    uVar3 = 0;
  }
  else {
LAB_00000442:
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 FUN_00000432(char *param_1)

{
  uint uVar1;
  char *unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  
  do {
    uVar1 = FUN_00000432(param_1);
    if ((uVar1 == (uint)*(byte *)(unaff_r6 + 0xe)) && (unaff_r4[3] != '-')) {
      return 1;
    }
    while ((*unaff_r4 != '\n' && (unaff_r4 < unaff_r5))) {
      unaff_r4 = unaff_r4 + 1;
    }
    param_1 = unaff_r4 + 1;
    unaff_r4 = param_1;
  } while (param_1 < unaff_r5);
  return 0;
}



void FUN_000004b4(void)

{
  int unaff_r6;
  
  FUN_000004b4();
  FUN_000004ba((uint)*(byte *)(unaff_r6 + 0xc));
  FUN_000004e2(1);
  return;
}



void FUN_000004ba(void)

{
  FUN_000004ba();
  FUN_000004e2(1);
  return;
}



void FUN_000004e2(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_000004e2();
                    // WARNING: Could not recover jumptable at 0x000004de. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(uVar1,in_stack_00000000,in_stack_00000004);
  return;
}



// WARNING: This is an inlined function

void FUN_000009a4(void)

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
                    // WARNING: Could not recover jumptable at 0x000009b8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


