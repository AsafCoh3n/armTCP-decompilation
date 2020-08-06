#include "at_ppp_pap.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  if (!in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  if (!in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  if (!in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  if (!in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(uint param_1,uint param_2)

{
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    *(uint *)(param_1 & param_2) = param_1 & param_2;
  }
  if (!in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void IRQ(undefined4 param_1)

{
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined4 *)param_1 = param_1;
  }
  if (!in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FIQ(undefined4 param_1)

{
  bool in_NG;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined4 *)param_1 = param_1;
  }
  if (!in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  return;
}



void FUN_0000004e(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = FUN_0000004e();
  uVar2 = uVar2 & 0xff;
  uVar4 = unaff_r6 + uVar2 + 6 & 0xff;
  iVar3 = FUN_00000062(uVar4 + 0xe);
  *(undefined *)(iVar3 + 0x12) = 1;
  *(undefined *)(iVar3 + 0x13) = *(undefined *)(DAT_000000b4 + 1);
  *(undefined2 *)(iVar3 + 0x14) = (short)((uVar4 << 0x18) >> 0x10);
  iVar1 = DAT_000000b0;
  *(undefined *)(iVar3 + 0x16) = (char)unaff_r6;
  FUN_00000088(iVar3 + 0x17,*(undefined4 *)(iVar1 + 0xc));
  iVar1 = DAT_000000b0;
  *(undefined *)(iVar3 + unaff_r6 + 0x17) = (char)uVar2;
  FUN_00000098(iVar3 + unaff_r6 + 0x18,*(undefined4 *)(iVar1 + 0x10),uVar2);
  FUN_0000009e(iVar3);
  *(undefined2 *)(DAT_000000b4 + 2) = *(undefined2 *)(DAT_000000b8 + 6);
                    // WARNING: Could not recover jumptable at 0x000000ae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000062(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar2 = FUN_00000062();
  *(undefined *)(iVar2 + 0x12) = 1;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(DAT_000000b4 + 1);
  *(ushort *)(iVar2 + 0x14) =
       (ushort)((uint)(unaff_r5 << 0x18) >> 0x10) | (ushort)((uint)(unaff_r5 << 8) >> 0x10);
  iVar1 = DAT_000000b0;
  *(undefined *)(iVar2 + 0x16) = (char)unaff_r6;
  FUN_00000088(iVar2 + 0x17,*(undefined4 *)(iVar1 + 0xc));
  iVar1 = DAT_000000b0;
  *(undefined *)(iVar2 + unaff_r6 + 0x17) = unaff_r7;
  FUN_00000098(iVar2 + unaff_r6 + 0x18,*(undefined4 *)(iVar1 + 0x10));
  FUN_0000009e(iVar2);
  *(undefined2 *)(DAT_000000b4 + 2) = *(undefined2 *)(DAT_000000b8 + 6);
                    // WARNING: Could not recover jumptable at 0x000000ae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000088(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000088();
  iVar1 = DAT_000000b0;
  *(undefined *)(unaff_r4 + unaff_r6 + 0x17) = unaff_r7;
  FUN_00000098(unaff_r4 + unaff_r6 + 0x18,*(undefined4 *)(iVar1 + 0x10));
  FUN_0000009e();
  *(undefined2 *)(DAT_000000b4 + 2) = *(undefined2 *)(DAT_000000b8 + 6);
                    // WARNING: Could not recover jumptable at 0x000000ae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000098(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000098();
  FUN_0000009e();
  *(undefined2 *)(DAT_000000b4 + 2) = *(undefined2 *)(DAT_000000b8 + 6);
                    // WARNING: Could not recover jumptable at 0x000000ae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0000009e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000009e();
  *(undefined2 *)(DAT_000000b4 + 2) = *(undefined2 *)(DAT_000000b8 + 6);
                    // WARNING: Could not recover jumptable at 0x000000ae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000000f0(void)

{
  FUN_000000f0();
  return;
}



void FUN_00000106(void)

{
  undefined uVar1;
  int iVar2;
  ushort *unaff_r4;
  ushort *unaff_r5;
  int unaff_r6;
  ushort unaff_r7;
  
  iVar2 = FUN_00000106();
  if ((iVar2 == 1) &&
     (iVar2 = FUN_00000114(*(undefined4 *)(unaff_r4 + 8),(int)unaff_r5 + unaff_r6 + 0x17),
     iVar2 == 1)) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
  }
  iVar2 = FUN_00000124((uint)*unaff_r5);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  *(undefined *)(iVar2 + 0x12) = uVar1;
  FUN_0000014a(iVar2 + 0x13,(int)unaff_r5 + 0x13,
               ((uint)unaff_r5[10] << 0x18 | (uint)unaff_r5[10] << 8) >> 0x10);
  FUN_00000150(iVar2);
  return;
}



void FUN_00000114(void)

{
  undefined uVar1;
  int iVar2;
  ushort *unaff_r4;
  ushort *unaff_r5;
  ushort unaff_r7;
  
  iVar2 = FUN_00000114();
  if (iVar2 == 1) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
  }
  iVar2 = FUN_00000124((uint)*unaff_r5);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  *(undefined *)(iVar2 + 0x12) = uVar1;
  FUN_0000014a(iVar2 + 0x13,(int)unaff_r5 + 0x13,
               ((uint)unaff_r5[10] << 0x18 | (uint)unaff_r5[10] << 8) >> 0x10);
  FUN_00000150(iVar2);
  return;
}



void FUN_00000124(void)

{
  undefined uVar1;
  int iVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  iVar2 = FUN_00000124();
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  *(undefined *)(iVar2 + 0x12) = uVar1;
  FUN_0000014a(iVar2 + 0x13,unaff_r5 + 0x13,
               ((uint)*(ushort *)(unaff_r5 + 0x14) << 0x18 | (uint)*(ushort *)(unaff_r5 + 0x14) << 8
               ) >> 0x10);
  FUN_00000150(iVar2);
  return;
}



void FUN_0000014a(void)

{
  FUN_0000014a();
  FUN_00000150();
  return;
}



void FUN_00000150(void)

{
  FUN_00000150();
  return;
}



void FUN_000001b8(void)

{
  FUN_000001b8();
  return;
}



void FUN_000001c2(void)

{
  FUN_000001c2();
  return;
}



void FUN_000001d4(undefined4 param_1)

{
  FUN_000001da(param_1,DAT_000001ec);
  FUN_000001e0(param_1);
  return;
}



void FUN_000001da(void)

{
  FUN_000001da();
  FUN_000001e0();
  return;
}



void FUN_000001e0(void)

{
  FUN_000001e0();
  return;
}



undefined4 FUN_000001f6(void)

{
  uint uVar1;
  undefined4 uVar2;
  byte *unaff_r4;
  
  uVar1 = FUN_000001f6();
  if ((uint)*unaff_r4 == uVar1) {
    uVar2 = FUN_0000020e();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_0000020e(void)

{
  FUN_0000020e();
  return;
}


