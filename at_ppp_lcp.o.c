#include "at_ppp_lcp.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_3 = 0;
    *(uint *)uVar1 = uVar1;
    in_CY = SUB41(param_2 >> 0x1f,0);
    param_1 = (undefined4 *)(in_lr ^ (int)param_2 >> 0x20);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
    coprocessor_moveto(5,2,7,unaff_r11,in_cr6,in_cr8);
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr0,in_cr0);
  }
  else {
    coprocessor_moveto2(8,0xb,unaff_r7,param_1,in_cr0);
  }
  if (!in_OV) {
    param_3 = (in_lr << (unaff_r8 & 0xff)) + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    param_1 = (undefined4 *)(param_2 & unaff_r5);
  }
  if (!in_OV) {
    unaff_r10 = param_1[-4];
    unaff_r7 = param_1[-5];
    param_1 = param_1 + -7;
  }
  if (in_CY) {
    *(uint *)(param_3 + unaff_r4 * -0x100) = param_3;
  }
  if (!in_OV) {
    unaff_r10 = param_1[-3];
    unaff_r7 = param_1[-4];
    unaff_r6 = param_1[-5];
    param_1 = param_1 + -8;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r8;
    param_1[-3] = unaff_r7;
    param_1[-4] = unaff_r6;
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_3 = 0;
    *(uint *)uVar1 = uVar1;
    in_CY = SUB41(param_2 >> 0x1f,0);
    param_1 = (undefined4 *)(in_lr ^ (int)param_2 >> 0x20);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
    coprocessor_moveto(5,2,7,unaff_r11,in_cr6,in_cr8);
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr0,in_cr0);
  }
  else {
    coprocessor_moveto2(8,0xb,unaff_r7,param_1,in_cr0);
  }
  if (!in_OV) {
    param_3 = (in_lr << (unaff_r8 & 0xff)) + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    param_1 = (undefined4 *)(param_2 & unaff_r5);
  }
  if (!in_OV) {
    unaff_r10 = param_1[-4];
    unaff_r7 = param_1[-5];
    param_1 = param_1 + -7;
  }
  if (in_CY) {
    *(uint *)(param_3 + unaff_r4 * -0x100) = param_3;
  }
  if (!in_OV) {
    unaff_r10 = param_1[-3];
    unaff_r7 = param_1[-4];
    unaff_r6 = param_1[-5];
    param_1 = param_1 + -8;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r8;
    param_1[-3] = unaff_r7;
    param_1[-4] = unaff_r6;
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_3 = 0;
    *(uint *)uVar1 = uVar1;
    in_CY = SUB41(param_2 >> 0x1f,0);
    param_1 = (undefined4 *)(in_lr ^ (int)param_2 >> 0x20);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
    coprocessor_moveto(5,2,7,unaff_r11,in_cr6,in_cr8);
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr0,in_cr0);
  }
  else {
    coprocessor_moveto2(8,0xb,unaff_r7,param_1,in_cr0);
  }
  if (!in_OV) {
    param_3 = (in_lr << (unaff_r8 & 0xff)) + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    param_1 = (undefined4 *)(param_2 & unaff_r5);
  }
  if (!in_OV) {
    unaff_r10 = param_1[-4];
    unaff_r7 = param_1[-5];
    param_1 = param_1 + -7;
  }
  if (in_CY) {
    *(uint *)(param_3 + unaff_r4 * -0x100) = param_3;
  }
  if (!in_OV) {
    unaff_r10 = param_1[-3];
    unaff_r7 = param_1[-4];
    unaff_r6 = param_1[-5];
    param_1 = param_1 + -8;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r8;
    param_1[-3] = unaff_r7;
    param_1[-4] = unaff_r6;
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_3 = 0;
    *(uint *)uVar1 = uVar1;
    in_CY = SUB41(param_2 >> 0x1f,0);
    param_1 = (undefined4 *)(in_lr ^ (int)param_2 >> 0x20);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
    coprocessor_moveto(5,2,7,unaff_r11,in_cr6,in_cr8);
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr0,in_cr0);
  }
  else {
    coprocessor_moveto2(8,0xb,unaff_r7,param_1,in_cr0);
  }
  if (!in_OV) {
    param_3 = (in_lr << (unaff_r8 & 0xff)) + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    param_1 = (undefined4 *)(param_2 & unaff_r5);
  }
  if (!in_OV) {
    unaff_r10 = param_1[-4];
    unaff_r7 = param_1[-5];
    param_1 = param_1 + -7;
  }
  if (in_CY) {
    *(uint *)(param_3 + unaff_r4 * -0x100) = param_3;
  }
  if (!in_OV) {
    unaff_r10 = param_1[-3];
    unaff_r7 = param_1[-4];
    unaff_r6 = param_1[-5];
    param_1 = param_1 + -8;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r8;
    param_1[-3] = unaff_r7;
    param_1[-4] = unaff_r6;
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(undefined4 *param_1,uint param_2,uint param_3)

{
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    param_3 = 0;
    *(uint *)((uint)param_1 & param_2) = (uint)param_1 & param_2;
    in_CY = SUB41(param_2 >> 0x1f,0);
    param_1 = (undefined4 *)(in_lr ^ (int)param_2 >> 0x20);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
    coprocessor_moveto(5,2,7,unaff_r11,in_cr6,in_cr8);
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr0,in_cr0);
  }
  else {
    coprocessor_moveto2(8,0xb,unaff_r7,param_1,in_cr0);
  }
  if (!in_OV) {
    param_3 = (in_lr << (unaff_r8 & 0xff)) + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    param_1 = (undefined4 *)(param_2 & unaff_r5);
  }
  if (!in_OV) {
    unaff_r10 = param_1[-4];
    unaff_r7 = param_1[-5];
    param_1 = param_1 + -7;
  }
  if (in_CY) {
    *(uint *)(param_3 + unaff_r4 * -0x100) = param_3;
  }
  if (!in_OV) {
    unaff_r10 = param_1[-3];
    unaff_r7 = param_1[-4];
    unaff_r6 = param_1[-5];
    param_1 = param_1 + -8;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r8;
    param_1[-3] = unaff_r7;
    param_1[-4] = unaff_r6;
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(undefined4 *param_1,uint param_2,uint param_3)

{
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    param_3 = 0;
    *(undefined4 **)param_1 = param_1;
    in_CY = SUB41(param_2 >> 0x1f,0);
    param_1 = (undefined4 *)(in_lr ^ (int)param_2 >> 0x20);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
    coprocessor_moveto(5,2,7,unaff_r11,in_cr6,in_cr8);
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr0,in_cr0);
  }
  else {
    coprocessor_moveto2(8,0xb,unaff_r7,param_1,in_cr0);
  }
  if (!in_OV) {
    param_3 = (in_lr << (unaff_r8 & 0xff)) + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    param_1 = (undefined4 *)(param_2 & unaff_r5);
  }
  if (!in_OV) {
    unaff_r10 = param_1[-4];
    unaff_r7 = param_1[-5];
    param_1 = param_1 + -7;
  }
  if (in_CY) {
    *(uint *)(param_3 + unaff_r4 * -0x100) = param_3;
  }
  if (!in_OV) {
    unaff_r10 = param_1[-3];
    unaff_r7 = param_1[-4];
    unaff_r6 = param_1[-5];
    param_1 = param_1 + -8;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r8;
    param_1[-3] = unaff_r7;
    param_1[-4] = unaff_r6;
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(undefined4 *param_1,uint param_2,uint param_3)

{
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr8;
  
  if (in_ZR) {
    param_3 = 0;
    *(undefined4 **)param_1 = param_1;
    in_CY = SUB41(param_2 >> 0x1f,0);
    param_1 = (undefined4 *)(in_lr ^ (int)param_2 >> 0x20);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
    coprocessor_moveto(5,2,7,unaff_r11,in_cr6,in_cr8);
  }
  if (in_ZR) {
    coprocessor_function(6,0,0,in_cr0,in_cr0,in_cr0);
  }
  else {
    coprocessor_moveto2(8,0xb,unaff_r7,param_1,in_cr0);
  }
  if (!in_OV) {
    param_3 = (in_lr << (unaff_r8 & 0xff)) + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    param_1 = (undefined4 *)(param_2 & unaff_r5);
  }
  if (!in_OV) {
    unaff_r10 = param_1[-4];
    unaff_r7 = param_1[-5];
    param_1 = param_1 + -7;
  }
  if (in_CY) {
    *(uint *)(param_3 + unaff_r4 * -0x100) = param_3;
  }
  if (!in_OV) {
    unaff_r10 = param_1[-3];
    unaff_r7 = param_1[-4];
    unaff_r6 = param_1[-5];
    param_1 = param_1 + -8;
  }
  if (in_CY) {
    *param_1 = unaff_r10;
    param_1[-1] = unaff_r9;
    param_1[-2] = unaff_r8;
    param_1[-3] = unaff_r7;
    param_1[-4] = unaff_r6;
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00000190(void)

{
  FUN_00000190();
  return;
}



void FUN_000001fe(void)

{
  FUN_000001fe();
  return;
}



void FUN_00000218(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00000218();
  iVar1 = DAT_0000024c;
  *(undefined *)(iVar2 + 0x12) = 9;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(iVar1 + 4);
  *(undefined2 *)(iVar2 + 0x14) = 0x800;
  FUN_00000234(iVar2 + 0x16,*(undefined4 *)(iVar1 + 8));
  FUN_0000023a(iVar2);
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(DAT_00000250 + 6);
  return;
}



void FUN_00000234(void)

{
  int unaff_r5;
  
  FUN_00000234();
  FUN_0000023a();
  *(undefined2 *)(unaff_r5 + 6) = *(undefined2 *)(DAT_00000250 + 6);
  return;
}



void FUN_0000023a(void)

{
  int unaff_r5;
  
  FUN_0000023a();
  *(undefined2 *)(unaff_r5 + 6) = *(undefined2 *)(DAT_00000250 + 6);
  return;
}



void FUN_00000270(void)

{
  FUN_00000270();
  *(undefined4 *)(DAT_00000288 + 0x10) = *DAT_0000028c;
  return;
}



void FUN_00000784(void)

{
  FUN_00000784();
  return;
}



void FUN_000007b2(void)

{
  FUN_000007b2();
  return;
}



void FUN_000007bc(void)

{
  FUN_000007bc();
  return;
}



void FUN_000007c2(void)

{
  FUN_000007c2();
  return;
}



void FUN_000007cc(void)

{
  FUN_000007cc();
  return;
}



void FUN_000007d2(void)

{
  FUN_000007d2();
  return;
}



void FUN_000007e0(undefined4 param_1)

{
  FUN_000007e6(param_1,DAT_000007f8);
  FUN_000007ec(param_1);
  return;
}



void FUN_000007e6(void)

{
  FUN_000007e6();
  FUN_000007ec();
  return;
}



void FUN_000007ec(void)

{
  FUN_000007ec();
  return;
}



void FUN_00000800(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00000800();
  iVar1 = DAT_00000824;
  *(undefined *)(iVar2 + 0x12) = 5;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(iVar1 + 4);
  *(undefined2 *)(iVar2 + 0x14) = 0x400;
  FUN_00000814();
  *(undefined2 *)(iVar1 + 6) = *(undefined2 *)(DAT_00000828 + 6);
  return;
}



void FUN_00000814(void)

{
  int unaff_r4;
  
  FUN_00000814();
  *(undefined2 *)(unaff_r4 + 6) = *(undefined2 *)(DAT_00000828 + 6);
  return;
}



void FUN_0000084c(void)

{
  FUN_0000084c();
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
                    // WARNING: Could not recover jumptable at 0x00000884. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


