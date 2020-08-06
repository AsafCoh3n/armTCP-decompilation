#include "at_ppp.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = (undefined4 *)(uVar1 & unaff_r8 >> 6);
    *(uint *)uVar1 = uVar1;
    param_1 = (undefined4 *)(unaff_r7 - (unaff_r10 >> 0x20) & (uint)param_3 & unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *param_2 = 0x44;
    *(BADSPACEBASE **)(param_2 + -1) = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = unaff_r5;
    param_2[-7] = unaff_r4;
  }
  if (in_CY) {
    *(undefined4 **)(in_lr + -4) = param_3;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 ^ unaff_r11 >> 6);
  }
  piVar3 = (int *)(uint)*(byte *)(unaff_r10 * 0x40000 + 0x54);
  if (in_NG) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)
              ((int)((ulonglong)((longlong)(int)unaff_r8 * (longlong)(short)param_3) >> 0x10) +
              unaff_r4);
  }
  if (in_CY) {
    unaff_r5 = -0x2ff4f840;
    unaff_r7 = 0x290020;
    unaff_r8 = 0x3a0c3011;
    unaff_r9 = (undefined4 *)0xfffef7ff;
    unaff_r11 = 0x74202000;
    in_r12 = 0x1c408820;
    register0x00000054 = (BADSPACEBASE *)0xe0058020;
    in_lr = 0x290020;
  }
  if (in_CY && !in_ZR) {
    *param_3 = 100;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r4;
    *(int **)(param_3 + -4) = piVar3;
    *(undefined4 **)(param_3 + -5) = param_1;
    param_3 = param_3 + -6;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (undefined4 *)(unaff_r11 & (int)param_1 >> 0xf);
  }
  if (in_ZR) {
    param_1 = unaff_r9;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (!in_OV) {
    *(undefined4 **)param_1 = param_3;
  }
  puVar2 = unaff_r9;
  if (!in_ZR) {
    coprocessor_moveto2(8,2,unaff_r8,param_1,in_cr0);
    puVar2 = param_1;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (in_CY && !in_ZR) {
    *puVar2 = 0x98;
    puVar2[-1] = in_lr;
    *(BADSPACEBASE **)(puVar2 + -2) = register0x00000054;
    *(int **)(puVar2 + -3) = piVar3;
    *(undefined4 **)(puVar2 + -4) = puVar2;
  }
  if (in_CY) {
    *piVar3 = in_lr;
    *(BADSPACEBASE **)(piVar3 + -1) = register0x00000054;
    piVar3[-2] = in_r12;
    piVar3[-3] = unaff_r11;
    *(undefined4 **)(piVar3 + -4) = unaff_r9;
    piVar3[-5] = 0;
    piVar3[-6] = unaff_r7;
    piVar3[-7] = unaff_r6;
    piVar3[-8] = unaff_r5;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = (undefined4 *)(uVar1 & unaff_r8 >> 6);
    *(uint *)uVar1 = uVar1;
    param_1 = (undefined4 *)(unaff_r7 - (unaff_r10 >> 0x20) & (uint)param_3 & unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *param_2 = 0x44;
    *(BADSPACEBASE **)(param_2 + -1) = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = unaff_r5;
    param_2[-7] = unaff_r4;
  }
  if (in_CY) {
    *(undefined4 **)(in_lr + -4) = param_3;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 ^ unaff_r11 >> 6);
  }
  piVar3 = (int *)(uint)*(byte *)(unaff_r10 * 0x40000 + 0x54);
  if (in_NG) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)
              ((int)((ulonglong)((longlong)(int)unaff_r8 * (longlong)(short)param_3) >> 0x10) +
              unaff_r4);
  }
  if (in_CY) {
    unaff_r5 = -0x2ff4f840;
    unaff_r7 = 0x290020;
    unaff_r8 = 0x3a0c3011;
    unaff_r9 = (undefined4 *)0xfffef7ff;
    unaff_r11 = 0x74202000;
    in_r12 = 0x1c408820;
    register0x00000054 = (BADSPACEBASE *)0xe0058020;
    in_lr = 0x290020;
  }
  if (in_CY && !in_ZR) {
    *param_3 = 100;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r4;
    *(int **)(param_3 + -4) = piVar3;
    *(undefined4 **)(param_3 + -5) = param_1;
    param_3 = param_3 + -6;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (undefined4 *)(unaff_r11 & (int)param_1 >> 0xf);
  }
  if (in_ZR) {
    param_1 = unaff_r9;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (!in_OV) {
    *(undefined4 **)param_1 = param_3;
  }
  puVar2 = unaff_r9;
  if (!in_ZR) {
    coprocessor_moveto2(8,2,unaff_r8,param_1,in_cr0);
    puVar2 = param_1;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (in_CY && !in_ZR) {
    *puVar2 = 0x98;
    puVar2[-1] = in_lr;
    *(BADSPACEBASE **)(puVar2 + -2) = register0x00000054;
    *(int **)(puVar2 + -3) = piVar3;
    *(undefined4 **)(puVar2 + -4) = puVar2;
  }
  if (in_CY) {
    *piVar3 = in_lr;
    *(BADSPACEBASE **)(piVar3 + -1) = register0x00000054;
    piVar3[-2] = in_r12;
    piVar3[-3] = unaff_r11;
    *(undefined4 **)(piVar3 + -4) = unaff_r9;
    piVar3[-5] = 0;
    piVar3[-6] = unaff_r7;
    piVar3[-7] = unaff_r6;
    piVar3[-8] = unaff_r5;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = (undefined4 *)(uVar1 & unaff_r8 >> 6);
    *(uint *)uVar1 = uVar1;
    param_1 = (undefined4 *)(unaff_r7 - (unaff_r10 >> 0x20) & (uint)param_3 & unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *param_2 = 0x44;
    *(BADSPACEBASE **)(param_2 + -1) = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = unaff_r5;
    param_2[-7] = unaff_r4;
  }
  if (in_CY) {
    *(undefined4 **)(in_lr + -4) = param_3;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 ^ unaff_r11 >> 6);
  }
  piVar3 = (int *)(uint)*(byte *)(unaff_r10 * 0x40000 + 0x54);
  if (in_NG) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)
              ((int)((ulonglong)((longlong)(int)unaff_r8 * (longlong)(short)param_3) >> 0x10) +
              unaff_r4);
  }
  if (in_CY) {
    unaff_r5 = -0x2ff4f840;
    unaff_r7 = 0x290020;
    unaff_r8 = 0x3a0c3011;
    unaff_r9 = (undefined4 *)0xfffef7ff;
    unaff_r11 = 0x74202000;
    in_r12 = 0x1c408820;
    register0x00000054 = (BADSPACEBASE *)0xe0058020;
    in_lr = 0x290020;
  }
  if (in_CY && !in_ZR) {
    *param_3 = 100;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r4;
    *(int **)(param_3 + -4) = piVar3;
    *(undefined4 **)(param_3 + -5) = param_1;
    param_3 = param_3 + -6;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (undefined4 *)(unaff_r11 & (int)param_1 >> 0xf);
  }
  if (in_ZR) {
    param_1 = unaff_r9;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (!in_OV) {
    *(undefined4 **)param_1 = param_3;
  }
  puVar2 = unaff_r9;
  if (!in_ZR) {
    coprocessor_moveto2(8,2,unaff_r8,param_1,in_cr0);
    puVar2 = param_1;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (in_CY && !in_ZR) {
    *puVar2 = 0x98;
    puVar2[-1] = in_lr;
    *(BADSPACEBASE **)(puVar2 + -2) = register0x00000054;
    *(int **)(puVar2 + -3) = piVar3;
    *(undefined4 **)(puVar2 + -4) = puVar2;
  }
  if (in_CY) {
    *piVar3 = in_lr;
    *(BADSPACEBASE **)(piVar3 + -1) = register0x00000054;
    piVar3[-2] = in_r12;
    piVar3[-3] = unaff_r11;
    *(undefined4 **)(piVar3 + -4) = unaff_r9;
    piVar3[-5] = 0;
    piVar3[-6] = unaff_r7;
    piVar3[-7] = unaff_r6;
    piVar3[-8] = unaff_r5;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = (undefined4 *)(uVar1 & unaff_r8 >> 6);
    *(uint *)uVar1 = uVar1;
    param_1 = (undefined4 *)(unaff_r7 - (unaff_r10 >> 0x20) & (uint)param_3 & unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *param_2 = 0x44;
    *(BADSPACEBASE **)(param_2 + -1) = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = unaff_r5;
    param_2[-7] = unaff_r4;
  }
  if (in_CY) {
    *(undefined4 **)(in_lr + -4) = param_3;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 ^ unaff_r11 >> 6);
  }
  piVar3 = (int *)(uint)*(byte *)(unaff_r10 * 0x40000 + 0x54);
  if (in_NG) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)
              ((int)((ulonglong)((longlong)(int)unaff_r8 * (longlong)(short)param_3) >> 0x10) +
              unaff_r4);
  }
  if (in_CY) {
    unaff_r5 = -0x2ff4f840;
    unaff_r7 = 0x290020;
    unaff_r8 = 0x3a0c3011;
    unaff_r9 = (undefined4 *)0xfffef7ff;
    unaff_r11 = 0x74202000;
    in_r12 = 0x1c408820;
    register0x00000054 = (BADSPACEBASE *)0xe0058020;
    in_lr = 0x290020;
  }
  if (in_CY && !in_ZR) {
    *param_3 = 100;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r4;
    *(int **)(param_3 + -4) = piVar3;
    *(undefined4 **)(param_3 + -5) = param_1;
    param_3 = param_3 + -6;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (undefined4 *)(unaff_r11 & (int)param_1 >> 0xf);
  }
  if (in_ZR) {
    param_1 = unaff_r9;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (!in_OV) {
    *(undefined4 **)param_1 = param_3;
  }
  puVar2 = unaff_r9;
  if (!in_ZR) {
    coprocessor_moveto2(8,2,unaff_r8,param_1,in_cr0);
    puVar2 = param_1;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (in_CY && !in_ZR) {
    *puVar2 = 0x98;
    puVar2[-1] = in_lr;
    *(BADSPACEBASE **)(puVar2 + -2) = register0x00000054;
    *(int **)(puVar2 + -3) = piVar3;
    *(undefined4 **)(puVar2 + -4) = puVar2;
  }
  if (in_CY) {
    *piVar3 = in_lr;
    *(BADSPACEBASE **)(piVar3 + -1) = register0x00000054;
    piVar3[-2] = in_r12;
    piVar3[-3] = unaff_r11;
    *(undefined4 **)(piVar3 + -4) = unaff_r9;
    piVar3[-5] = 0;
    piVar3[-6] = unaff_r7;
    piVar3[-7] = unaff_r6;
    piVar3[-8] = unaff_r5;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar1 = (uint)param_1 & (uint)param_2;
    param_3 = (undefined4 *)(uVar1 & unaff_r8 >> 6);
    *(uint *)uVar1 = uVar1;
    param_1 = (undefined4 *)(unaff_r7 - (unaff_r10 >> 0x20) & (uint)param_3 & unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *param_2 = 0x44;
    *(BADSPACEBASE **)(param_2 + -1) = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = unaff_r5;
    param_2[-7] = unaff_r4;
  }
  if (in_CY) {
    *(undefined4 **)(in_lr + -4) = param_3;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 ^ unaff_r11 >> 6);
  }
  piVar3 = (int *)(uint)*(byte *)(unaff_r10 * 0x40000 + 0x54);
  if (in_NG) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)
              ((int)((ulonglong)((longlong)(int)unaff_r8 * (longlong)(short)param_3) >> 0x10) +
              unaff_r4);
  }
  if (in_CY) {
    unaff_r5 = -0x2ff4f840;
    unaff_r7 = 0x290020;
    unaff_r8 = 0x3a0c3011;
    unaff_r9 = (undefined4 *)0xfffef7ff;
    unaff_r11 = 0x74202000;
    in_r12 = 0x1c408820;
    register0x00000054 = (BADSPACEBASE *)0xe0058020;
    in_lr = 0x290020;
  }
  if (in_CY && !in_ZR) {
    *param_3 = 100;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r4;
    *(int **)(param_3 + -4) = piVar3;
    *(undefined4 **)(param_3 + -5) = param_1;
    param_3 = param_3 + -6;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (undefined4 *)(unaff_r11 & (int)param_1 >> 0xf);
  }
  if (in_ZR) {
    param_1 = unaff_r9;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (!in_OV) {
    *(undefined4 **)param_1 = param_3;
  }
  puVar2 = unaff_r9;
  if (!in_ZR) {
    coprocessor_moveto2(8,2,unaff_r8,param_1,in_cr0);
    puVar2 = param_1;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (in_CY && !in_ZR) {
    *puVar2 = 0x98;
    puVar2[-1] = in_lr;
    *(BADSPACEBASE **)(puVar2 + -2) = register0x00000054;
    *(int **)(puVar2 + -3) = piVar3;
    *(undefined4 **)(puVar2 + -4) = puVar2;
  }
  if (in_CY) {
    *piVar3 = in_lr;
    *(BADSPACEBASE **)(piVar3 + -1) = register0x00000054;
    piVar3[-2] = in_r12;
    piVar3[-3] = unaff_r11;
    *(undefined4 **)(piVar3 + -4) = unaff_r9;
    piVar3[-5] = 0;
    piVar3[-6] = unaff_r7;
    piVar3[-7] = unaff_r6;
    piVar3[-8] = unaff_r5;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    param_3 = (undefined4 *)((uint)param_1 & unaff_r8 >> 6);
    *(undefined4 **)param_1 = param_1;
    param_1 = (undefined4 *)(unaff_r7 - (unaff_r10 >> 0x20) & (uint)param_3 & unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *param_2 = 0x44;
    *(BADSPACEBASE **)(param_2 + -1) = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = unaff_r5;
    param_2[-7] = unaff_r4;
  }
  if (in_CY) {
    *(undefined4 **)(in_lr + -4) = param_3;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 ^ unaff_r11 >> 6);
  }
  piVar2 = (int *)(uint)*(byte *)(unaff_r10 * 0x40000 + 0x54);
  if (in_NG) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)
              ((int)((ulonglong)((longlong)(int)unaff_r8 * (longlong)(short)param_3) >> 0x10) +
              unaff_r4);
  }
  if (in_CY) {
    unaff_r5 = -0x2ff4f840;
    unaff_r7 = 0x290020;
    unaff_r8 = 0x3a0c3011;
    unaff_r9 = (undefined4 *)0xfffef7ff;
    unaff_r11 = 0x74202000;
    in_r12 = 0x1c408820;
    register0x00000054 = (BADSPACEBASE *)0xe0058020;
    in_lr = 0x290020;
  }
  if (in_CY && !in_ZR) {
    *param_3 = 100;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r4;
    *(int **)(param_3 + -4) = piVar2;
    *(undefined4 **)(param_3 + -5) = param_1;
    param_3 = param_3 + -6;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (undefined4 *)(unaff_r11 & (int)param_1 >> 0xf);
  }
  if (in_ZR) {
    param_1 = unaff_r9;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (!in_OV) {
    *(undefined4 **)param_1 = param_3;
  }
  puVar1 = unaff_r9;
  if (!in_ZR) {
    coprocessor_moveto2(8,2,unaff_r8,param_1,in_cr0);
    puVar1 = param_1;
  }
  if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  software_interrupt(0xfef7ff);
  if (in_CY && !in_ZR) {
    *puVar1 = 0x98;
    puVar1[-1] = in_lr;
    *(BADSPACEBASE **)(puVar1 + -2) = register0x00000054;
    *(int **)(puVar1 + -3) = piVar2;
    *(undefined4 **)(puVar1 + -4) = puVar1;
  }
  if (in_CY) {
    *piVar2 = in_lr;
    *(BADSPACEBASE **)(piVar2 + -1) = register0x00000054;
    piVar2[-2] = in_r12;
    piVar2[-3] = unaff_r11;
    *(undefined4 **)(piVar2 + -4) = unaff_r9;
    piVar2[-5] = 0;
    piVar2[-6] = unaff_r7;
    piVar2[-7] = unaff_r6;
    piVar2[-8] = unaff_r5;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  uint unaff_r11;
  int in_r12;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    param_3 = (undefined4 *)((uint)param_1 & unaff_r8 >> 6);
    *(undefined4 **)param_1 = param_1;
    param_1 = (undefined4 *)(unaff_r7 - (unaff_r10 >> 0x20) & (uint)param_3 & unaff_r8);
  }
  if (in_CY && !in_ZR) {
    *param_2 = 0x44;
    *(BADSPACEBASE **)(param_2 + -1) = register0x00000054;
    param_2[-2] = in_r12;
    param_2[-3] = unaff_r10;
    param_2[-4] = unaff_r8;
    param_2[-5] = unaff_r6;
    param_2[-6] = unaff_r5;
    param_2[-7] = unaff_r4;
  }
  if (in_CY) {
    *(undefined4 **)(in_lr + -4) = param_3;
  }
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)((uint)param_1 ^ unaff_r11 >> 6);
  }
  piVar2 = (int *)(uint)*(byte *)(unaff_r10 * 0x40000 + 0x54);
  if (in_NG) {
    return;
  }
  if (in_ZR || in_NG != in_OV) {
    param_3 = (undefined4 *)
              ((int)((ulonglong)((longlong)(int)unaff_r8 * (longlong)(short)param_3) >> 0x10) +
              unaff_r4);
  }
  if (in_CY) {
    unaff_r5 = -0x2ff4f840;
    unaff_r7 = 0x290020;
    unaff_r8 = 0x3a0c3011;
    unaff_r9 = (undefined4 *)0xfffef7ff;
    unaff_r11 = 0x74202000;
    in_r12 = 0x1c408820;
    register0x00000054 = (BADSPACEBASE *)0xe0058020;
    in_lr = 0x290020;
  }
  if (in_CY && !in_ZR) {
    *param_3 = 100;
    param_3[-1] = in_lr;
    param_3[-2] = in_r12;
    param_3[-3] = unaff_r4;
    *(int **)(param_3 + -4) = piVar2;
    *(undefined4 **)(param_3 + -5) = param_1;
    param_3 = param_3 + -6;
  }
  if (in_ZR || in_NG != in_OV) {
    param_1 = (undefined4 *)(unaff_r11 & (int)param_1 >> 0xf);
  }
  if (in_ZR) {
    param_1 = unaff_r9;
  }
  if (in_CY) {
    software_interrupt(0xfef7ff);
    if (!in_OV) {
      *(undefined4 **)param_1 = param_3;
    }
    puVar1 = unaff_r9;
    if (!in_ZR) {
      coprocessor_moveto2(8,2,unaff_r8,param_1,in_cr0);
      puVar1 = param_1;
    }
    if (!in_CY) {
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
    software_interrupt(0xfef7ff);
    if (in_CY && !in_ZR) {
      *puVar1 = 0x98;
      puVar1[-1] = in_lr;
      *(BADSPACEBASE **)(puVar1 + -2) = register0x00000054;
      *(int **)(puVar1 + -3) = piVar2;
      *(undefined4 **)(puVar1 + -4) = puVar1;
    }
    if (in_CY) {
      *piVar2 = in_lr;
      *(BADSPACEBASE **)(piVar2 + -1) = register0x00000054;
      piVar2[-2] = in_r12;
      piVar2[-3] = unaff_r11;
      *(undefined4 **)(piVar2 + -4) = unaff_r9;
      piVar2[-5] = 0;
      piVar2[-6] = unaff_r7;
      piVar2[-7] = unaff_r6;
      piVar2[-8] = unaff_r5;
    }
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_000000ba(void)

{
  FUN_000000ba();
  return;
}



void FUN_000000d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = DAT_000000f0;
  uVar1 = *DAT_000000f0;
  if (-1 < (int)((uint)uVar1 << 0x13)) {
    *(undefined4 *)(DAT_000000f0 + 8) = param_3;
    *(undefined4 *)(puVar2 + 6) = param_2;
    *puVar2 = uVar1 | 0x2c0;
    FUN_000000e6();
  }
  return;
}



void FUN_000000e6(void)

{
  FUN_000000e6();
  return;
}



void FUN_000000fe(void)

{
  int iVar1;
  int unaff_r5;
  uint uVar2;
  
  iVar1 = FUN_000000fe();
  uVar2 = ((uint)*(ushort *)(unaff_r5 + 0x14) << 0x18 | (uint)*(ushort *)(unaff_r5 + 0x14) << 8) >>
          0x10;
  FUN_00000118(iVar1 + 0x16,unaff_r5 + 0x12,uVar2);
  *(undefined *)(iVar1 + 0x12) = 7;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 0x13);
  *(ushort *)(iVar1 + 0x14) =
       (ushort)((uVar2 + 4) * 0x1000000 >> 0x10) | (ushort)(uVar2 * 0x100 + 0x400 >> 0x10);
  FUN_0000013a(iVar1);
  FUN_00000140(iVar1);
  return;
}



void FUN_00000118(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  FUN_00000118();
  *(undefined *)(unaff_r4 + 0x12) = 7;
  *(undefined *)(unaff_r4 + 0x13) = *(undefined *)(unaff_r5 + 0x13);
  *(ushort *)(unaff_r4 + 0x14) =
       (ushort)((uint)((unaff_r6 + 4) * 0x1000000) >> 0x10) |
       (ushort)((uint)(unaff_r6 * 0x100 + 0x400) >> 0x10);
  FUN_0000013a();
  FUN_00000140();
  return;
}



void FUN_0000013a(void)

{
  FUN_0000013a();
  FUN_00000140();
  return;
}



void FUN_00000140(void)

{
  FUN_00000140();
  return;
}



void FUN_00000186(void)

{
  FUN_00000186();
  FUN_0000018a();
  FUN_0000018e();
  FUN_00000192();
  FUN_00000196();
  FUN_0000019a();
  return;
}



void FUN_0000018a(void)

{
  FUN_0000018a();
  FUN_0000018e();
  FUN_00000192();
  FUN_00000196();
  FUN_0000019a();
  return;
}



void FUN_0000018e(void)

{
  FUN_0000018e();
  FUN_00000192();
  FUN_00000196();
  FUN_0000019a();
  return;
}



void FUN_00000192(void)

{
  FUN_00000192();
  FUN_00000196();
  FUN_0000019a();
  return;
}



void FUN_00000196(void)

{
  FUN_00000196();
  FUN_0000019a();
  return;
}



void FUN_0000019a(void)

{
  FUN_0000019a();
  return;
}



void FUN_000001d0(void)

{
  FUN_000001d0();
  return;
}



void FUN_000001e8(void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort *unaff_r4;
  byte bVar5;
  int unaff_r6;
  ushort unaff_r7;
  
code_r0x000001e8:
  while( true ) {
    uVar2 = FUN_000001e8();
    if (uVar2 == 0xffffffff) {
      if ((*unaff_r4 & 1) == 0) {
        return;
      }
      if (unaff_r6 == 1) {
        unaff_r4[1] = *(ushort *)(DAT_000002c4 + 4);
        return;
      }
      if (unaff_r4[1] != 0) {
        return;
      }
      uVar2 = 0x7e;
      *unaff_r4 = *unaff_r4 & ~unaff_r7;
    }
    bVar5 = (byte)uVar2;
    uVar1 = *unaff_r4;
    unaff_r6 = 1;
    if ((uVar1 & 1) == 0) break;
    if (-1 < (int)((uint)uVar1 << 0x1d)) {
      *unaff_r4 = uVar1 | 4;
      iVar3 = FUN_0000021c(DAT_000002c0);
      *(int *)(unaff_r4 + 10) = iVar3;
      *(undefined2 *)(iVar3 + 2) = 10;
    }
    uVar1 = *unaff_r4;
    if ((int)((uint)uVar1 << 0x1e) < 0) {
      *unaff_r4 = uVar1 & ~unaff_r7;
      if (uVar2 == 0x7e) {
        *(undefined2 *)(*(int *)(unaff_r4 + 10) + 2) = 10;
        FUN_000001e8();
        return;
      }
      bVar5 = bVar5 ^ 0x20;
LAB_00000278:
      iVar3 = *(int *)(unaff_r4 + 10);
      uVar1 = *(ushort *)(iVar3 + 2);
      if ((uint)uVar1 < DAT_000002c0 - 2U) {
        *(short *)(iVar3 + 2) = uVar1 + 1;
        *(byte *)(iVar3 + (uint)uVar1 + 4) = bVar5;
        FUN_000001e8();
        return;
      }
    }
    else {
      if (uVar2 == 0x7d) {
        uVar1 = uVar1 | unaff_r7;
        goto LAB_00000290;
      }
      if (uVar2 != 0x7e) goto LAB_00000278;
      if (*(short *)(*(int *)(unaff_r4 + 10) + 2) != 10) {
        FUN_000002a2(*(int *)(unaff_r4 + 10),(uint)*(ushort *)(*(int *)(unaff_r4 + 10) + 2) + 2);
        **(undefined2 **)(unaff_r4 + 10) = (*(undefined2 **)(unaff_r4 + 10))[1];
        *unaff_r4 = *unaff_r4 & 0xfff8 | 8;
        return;
      }
    }
  }
  if (((int)((uint)uVar1 << 0x13) < 0) && (uVar2 == 0x7e)) {
    uVar4 = 1;
  }
  else {
    iVar3 = FUN_00000252(uVar2 & 0xff);
    if (iVar3 != 1) goto code_r0x000001e8;
    uVar1 = *unaff_r4;
    uVar4 = 0x1000;
  }
  uVar1 = uVar1 | uVar4;
LAB_00000290:
  *unaff_r4 = uVar1;
  FUN_000001e8();
  return;
}



void FUN_0000021c(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort *unaff_r4;
  byte bVar4;
  uint unaff_r5;
  int unaff_r6;
  ushort unaff_r7;
  
  do {
    iVar2 = FUN_0000021c(param_1);
    *(int *)(unaff_r4 + 10) = iVar2;
    *(undefined2 *)(iVar2 + 2) = 10;
    do {
      bVar4 = (byte)unaff_r5;
      uVar1 = *unaff_r4;
      if ((int)((uint)uVar1 << 0x1e) < 0) {
        *unaff_r4 = uVar1 & ~unaff_r7;
        if (unaff_r5 == 0x7e) {
          *(undefined2 *)(*(int *)(unaff_r4 + 10) + 2) = 10;
          FUN_000001e8();
          return;
        }
        bVar4 = bVar4 ^ 0x20;
LAB_00000278:
        iVar2 = *(int *)(unaff_r4 + 10);
        uVar1 = *(ushort *)(iVar2 + 2);
        if ((uint)uVar1 < DAT_000002c0 - 2U) {
          *(short *)(iVar2 + 2) = uVar1 + 1;
          *(byte *)(iVar2 + (uint)uVar1 + 4) = bVar4;
          FUN_000001e8();
          return;
        }
      }
      else {
        if (unaff_r5 == 0x7d) {
          uVar1 = uVar1 | unaff_r7;
LAB_00000290:
          *unaff_r4 = uVar1;
          FUN_000001e8();
          return;
        }
        if (unaff_r5 != 0x7e) goto LAB_00000278;
        if (*(short *)(*(int *)(unaff_r4 + 10) + 2) != 10) {
          FUN_000002a2(*(int *)(unaff_r4 + 10),(uint)*(ushort *)(*(int *)(unaff_r4 + 10) + 2) + 2);
          **(undefined2 **)(unaff_r4 + 10) = (*(undefined2 **)(unaff_r4 + 10))[1];
          *unaff_r4 = *unaff_r4 & 0xfff8 | 8;
          return;
        }
      }
code_r0x000001e8:
      unaff_r5 = FUN_000001e8();
      if (unaff_r5 == 0xffffffff) {
        if ((*unaff_r4 & 1) == 0) {
          return;
        }
        if (unaff_r6 == 1) {
          unaff_r4[1] = *(ushort *)(DAT_000002c4 + 4);
          return;
        }
        if (unaff_r4[1] != 0) {
          return;
        }
        unaff_r5 = 0x7e;
        *unaff_r4 = *unaff_r4 & ~unaff_r7;
      }
      uVar1 = *unaff_r4;
      unaff_r6 = 1;
      if ((uVar1 & 1) == 0) {
        if ((-1 < (int)((uint)uVar1 << 0x13)) || (unaff_r5 != 0x7e)) goto LAB_0000024e;
        uVar3 = 1;
        goto LAB_00000260;
      }
    } while ((int)((uint)uVar1 << 0x1d) < 0);
    *unaff_r4 = uVar1 | 4;
    param_1 = DAT_000002c0;
  } while( true );
LAB_0000024e:
  iVar2 = FUN_00000252(unaff_r5 & 0xff);
  if (iVar2 == 1) {
    uVar1 = *unaff_r4;
    uVar3 = 0x1000;
LAB_00000260:
    uVar1 = uVar1 | uVar3;
    goto LAB_00000290;
  }
  goto code_r0x000001e8;
}



void FUN_00000252(uint param_1)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort *unaff_r4;
  byte bVar4;
  int unaff_r6;
  ushort unaff_r7;
  
  do {
    iVar2 = FUN_00000252(param_1);
    if (iVar2 == 1) {
      uVar1 = *unaff_r4;
      uVar3 = 0x1000;
LAB_00000260:
      uVar1 = uVar1 | uVar3;
LAB_00000290:
      *unaff_r4 = uVar1;
      FUN_000001e8();
      return;
    }
    while( true ) {
      param_1 = FUN_000001e8();
      if (param_1 == 0xffffffff) {
        if ((*unaff_r4 & 1) == 0) {
          return;
        }
        if (unaff_r6 == 1) {
          unaff_r4[1] = *(ushort *)(DAT_000002c4 + 4);
          return;
        }
        if (unaff_r4[1] != 0) {
          return;
        }
        param_1 = 0x7e;
        *unaff_r4 = *unaff_r4 & ~unaff_r7;
      }
      bVar4 = (byte)param_1;
      uVar1 = *unaff_r4;
      unaff_r6 = 1;
      if ((uVar1 & 1) == 0) break;
      if (-1 < (int)((uint)uVar1 << 0x1d)) {
        *unaff_r4 = uVar1 | 4;
        iVar2 = FUN_0000021c(DAT_000002c0);
        *(int *)(unaff_r4 + 10) = iVar2;
        *(undefined2 *)(iVar2 + 2) = 10;
      }
      uVar1 = *unaff_r4;
      if ((int)((uint)uVar1 << 0x1e) < 0) {
        *unaff_r4 = uVar1 & ~unaff_r7;
        if (param_1 == 0x7e) {
          *(undefined2 *)(*(int *)(unaff_r4 + 10) + 2) = 10;
          FUN_000001e8();
          return;
        }
        bVar4 = bVar4 ^ 0x20;
LAB_00000278:
        iVar2 = *(int *)(unaff_r4 + 10);
        uVar1 = *(ushort *)(iVar2 + 2);
        if ((uint)uVar1 < DAT_000002c0 - 2U) {
          *(short *)(iVar2 + 2) = uVar1 + 1;
          *(byte *)(iVar2 + (uint)uVar1 + 4) = bVar4;
          FUN_000001e8();
          return;
        }
      }
      else {
        if (param_1 == 0x7d) {
          uVar1 = uVar1 | unaff_r7;
          goto LAB_00000290;
        }
        if (param_1 != 0x7e) goto LAB_00000278;
        if (*(short *)(*(int *)(unaff_r4 + 10) + 2) != 10) {
          FUN_000002a2(*(int *)(unaff_r4 + 10),(uint)*(ushort *)(*(int *)(unaff_r4 + 10) + 2) + 2);
          **(undefined2 **)(unaff_r4 + 10) = (*(undefined2 **)(unaff_r4 + 10))[1];
          *unaff_r4 = *unaff_r4 & 0xfff8 | 8;
          return;
        }
      }
    }
    if (((int)((uint)uVar1 << 0x13) < 0) && (param_1 == 0x7e)) {
      uVar3 = 1;
      goto LAB_00000260;
    }
    param_1 = param_1 & 0xff;
  } while( true );
}



void FUN_000002a2(void)

{
  ushort *unaff_r4;
  
  FUN_000002a2();
  **(undefined2 **)(unaff_r4 + 10) = (*(undefined2 **)(unaff_r4 + 10))[1];
  *unaff_r4 = *unaff_r4 & 0xfff8 | 8;
  return;
}



void FUN_0000036a(void)

{
  int iVar1;
  ushort *unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000036a();
  FUN_00000412(*(undefined4 *)(unaff_r4 + 10));
  iVar1 = DAT_0000043c;
  *unaff_r4 = *unaff_r4 & 0xfff7;
  unaff_r4[2] = *(ushort *)(iVar1 + 8);
                    // WARNING: Could not recover jumptable at 0x00000428. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000412(void)

{
  int iVar1;
  ushort *unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000412();
  iVar1 = DAT_0000043c;
  *unaff_r4 = *unaff_r4 & 0xfff7;
  unaff_r4[2] = *(ushort *)(iVar1 + 8);
                    // WARNING: Could not recover jumptable at 0x00000428. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined4 FUN_00000454(void)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  ushort *unaff_r4;
  uint unaff_r6;
  ushort *unaff_r7;
  
  iVar3 = FUN_00000454();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (((int)((uint)*unaff_r4 << 0x14) < 0) && (unaff_r6 < 0x100)) {
    iVar3 = 1;
  }
  if (((int)((uint)*unaff_r4 << 0x15) < 0) && (unaff_r6 != DAT_00000504)) {
    iVar3 = iVar3 + 2;
  }
  puVar4 = (ushort *)FUN_0000047a((uint)*unaff_r7 - iVar3);
  FUN_0000048a(puVar4 + 2,(int)unaff_r7 + iVar3 + 4,(uint)*unaff_r7 - iVar3);
  if (iVar3 == 0) {
    puVar4[8] = (ushort)((unaff_r6 << 0x18) >> 0x10) | (ushort)((unaff_r6 << 8) >> 0x10);
LAB_000004b6:
    *(undefined *)(puVar4 + 7) = 0xff;
    uVar1 = 3;
  }
  else {
    uVar1 = (undefined)unaff_r6;
    if (iVar3 == 1) {
      *(undefined *)(puVar4 + 8) = uVar1;
      goto LAB_000004b6;
    }
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined *)(puVar4 + 7) = uVar1;
      }
      goto LAB_000004cc;
    }
    *(char *)(puVar4 + 7) = (char)(unaff_r6 >> 8);
  }
  *(undefined *)((int)puVar4 + 0xf) = uVar1;
LAB_000004cc:
  uVar2 = FUN_000004d4(puVar4 + 7,(uint)*puVar4 - 10);
  puVar4[4] = ~uVar2;
  puVar4[1] = 9;
  iVar3 = DAT_00000500;
  *(undefined4 *)(puVar4 + 2) = 0;
  iVar5 = *(int *)(iVar3 + 0x18);
  if (iVar5 == 0) {
    *(ushort **)(iVar3 + 0x18) = puVar4;
  }
  else {
    do {
      iVar3 = iVar5;
      iVar5 = *(int *)(iVar3 + 4);
    } while (iVar5 != 0);
    *(ushort **)(iVar3 + 4) = puVar4;
  }
  return 1;
}



undefined4 FUN_0000047a(void)

{
  undefined uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int unaff_r5;
  int unaff_r6;
  ushort *unaff_r7;
  
  puVar3 = (ushort *)FUN_0000047a();
  FUN_0000048a(puVar3 + 2,(int)unaff_r7 + unaff_r5 + 4,(uint)*unaff_r7 - unaff_r5);
  if (unaff_r5 == 0) {
    puVar3[8] = (ushort)((uint)(unaff_r6 << 0x18) >> 0x10) | (ushort)((uint)(unaff_r6 << 8) >> 0x10)
    ;
LAB_000004b6:
    *(undefined *)(puVar3 + 7) = 0xff;
    uVar1 = 3;
  }
  else {
    uVar1 = (undefined)unaff_r6;
    if (unaff_r5 == 1) {
      *(undefined *)(puVar3 + 8) = uVar1;
      goto LAB_000004b6;
    }
    if (unaff_r5 != 2) {
      if (unaff_r5 == 3) {
        *(undefined *)(puVar3 + 7) = uVar1;
      }
      goto LAB_000004cc;
    }
    *(char *)(puVar3 + 7) = (char)((uint)unaff_r6 >> 8);
  }
  *(undefined *)((int)puVar3 + 0xf) = uVar1;
LAB_000004cc:
  uVar2 = FUN_000004d4(puVar3 + 7,(uint)*puVar3 - 10);
  puVar3[4] = ~uVar2;
  puVar3[1] = 9;
  iVar5 = DAT_00000500;
  *(undefined4 *)(puVar3 + 2) = 0;
  iVar4 = *(int *)(iVar5 + 0x18);
  if (iVar4 == 0) {
    *(ushort **)(iVar5 + 0x18) = puVar3;
  }
  else {
    do {
      iVar5 = iVar4;
      iVar4 = *(int *)(iVar5 + 4);
    } while (iVar4 != 0);
    *(ushort **)(iVar5 + 4) = puVar3;
  }
  return 1;
}



undefined4 FUN_0000048a(void)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  FUN_0000048a();
  if (unaff_r5 == 0) {
    unaff_r4[8] = (ushort)((uint)(unaff_r6 << 0x18) >> 0x10) |
                  (ushort)((uint)(unaff_r6 << 8) >> 0x10);
LAB_000004b6:
    *(undefined *)(unaff_r4 + 7) = 0xff;
    uVar1 = 3;
  }
  else {
    uVar1 = (undefined)unaff_r6;
    if (unaff_r5 == 1) {
      *(undefined *)(unaff_r4 + 8) = uVar1;
      goto LAB_000004b6;
    }
    if (unaff_r5 != 2) {
      if (unaff_r5 == 3) {
        *(undefined *)(unaff_r4 + 7) = uVar1;
      }
      goto LAB_000004cc;
    }
    *(char *)(unaff_r4 + 7) = (char)((uint)unaff_r6 >> 8);
  }
  *(undefined *)((int)unaff_r4 + 0xf) = uVar1;
LAB_000004cc:
  uVar2 = FUN_000004d4(unaff_r4 + 7,(uint)*unaff_r4 - 10);
  unaff_r4[4] = ~uVar2;
  unaff_r4[1] = 9;
  iVar4 = DAT_00000500;
  *(undefined4 *)(unaff_r4 + 2) = 0;
  iVar3 = *(int *)(iVar4 + 0x18);
  if (iVar3 == 0) {
    *(ushort **)(iVar4 + 0x18) = unaff_r4;
  }
  else {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar4 + 4);
    } while (iVar3 != 0);
    *(ushort **)(iVar4 + 4) = unaff_r4;
  }
  return 1;
}



undefined4 FUN_000004d4(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  
  uVar1 = FUN_000004d4();
  *(ushort *)(unaff_r4 + 8) = ~uVar1;
  *(undefined2 *)(unaff_r4 + 2) = 9;
  iVar3 = DAT_00000500;
  *(undefined4 *)(unaff_r4 + 4) = 0;
  iVar2 = *(int *)(iVar3 + 0x18);
  if (iVar2 == 0) {
    *(int *)(iVar3 + 0x18) = unaff_r4;
  }
  else {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 4);
    } while (iVar2 != 0);
    *(int *)(iVar3 + 4) = unaff_r4;
  }
  return 1;
}



void FUN_0000050a(void)

{
  FUN_0000050a();
  FUN_0000050e();
  FUN_00000512();
  FUN_00000516();
  *DAT_0000052c = *DAT_0000052c | 0x20;
  return;
}



void FUN_0000050e(void)

{
  FUN_0000050e();
  FUN_00000512();
  FUN_00000516();
  *DAT_0000052c = *DAT_0000052c | 0x20;
  return;
}



void FUN_00000512(void)

{
  FUN_00000512();
  FUN_00000516();
  *DAT_0000052c = *DAT_0000052c | 0x20;
  return;
}



void FUN_00000516(void)

{
  FUN_00000516();
  *DAT_0000052c = *DAT_0000052c | 0x20;
  return;
}



void FUN_0000054c(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *unaff_r4;
  uint unaff_r5;
  ushort *unaff_r6;
  uint unaff_r7;
  
  do {
    while( true ) {
      while( true ) {
        iVar3 = FUN_0000054c(param_1);
        if (iVar3 == 0) {
          unaff_r6[1] = (ushort)unaff_r5;
          *(undefined *)((int)unaff_r6 + 0xd) = (char)unaff_r7;
          return;
        }
        if (unaff_r5 != 6) break;
        param_1 = 0x7e;
        unaff_r5 = 7;
        unaff_r7 = param_1;
      }
      if (unaff_r5 == 7) {
        *(undefined4 *)(unaff_r4 + 0xc) = *(undefined4 *)(unaff_r6 + 2);
        FUN_000005dc();
        *(undefined *)(DAT_000005ec + 0xe) = 1;
        return;
      }
      bVar1 = *(byte *)((int)unaff_r6 + unaff_r5 + 4);
      param_1 = (uint)bVar1;
      if (((bVar1 == 0x7d) || (bVar1 == 0x7e)) ||
         ((bVar1 < 0x20 && ((*(uint *)(unaff_r4 + 4) & 1 << param_1) != 0)))) break;
LAB_000005ca:
      unaff_r5 = unaff_r5 + 1;
      unaff_r7 = param_1;
      if (*unaff_r6 <= unaff_r5) {
        unaff_r5 = 4;
      }
    }
    uVar2 = *unaff_r4;
    if ((int)((uint)uVar2 << 0x1b) < 0) {
      *unaff_r4 = uVar2 & 0xffef;
      param_1 = param_1 ^ 0x20;
      goto LAB_000005ca;
    }
    param_1 = 0x7d;
    *unaff_r4 = uVar2 | 0x10;
    unaff_r7 = param_1;
  } while( true );
}



void FUN_0000058a(void)

{
  int iVar1;
  undefined2 *unaff_r4;
  
  iVar1 = FUN_0000058a();
  if (iVar1 != 1) {
    FUN_00000592();
    if ((int)((uint)*(byte *)unaff_r4 << 0x1d) < 0) {
      FUN_0000059e(*(undefined4 *)(unaff_r4 + 10));
    }
    *unaff_r4 = 0;
    *(undefined *)(unaff_r4 + 3) = 0;
  }
  return;
}



void FUN_00000592(void)

{
  undefined2 *unaff_r4;
  
  FUN_00000592();
  if ((int)((uint)*(byte *)unaff_r4 << 0x1d) < 0) {
    FUN_0000059e(*(undefined4 *)(unaff_r4 + 10));
  }
  *unaff_r4 = 0;
  *(undefined *)(unaff_r4 + 3) = 0;
  return;
}



void FUN_0000059e(void)

{
  undefined2 *unaff_r4;
  
  FUN_0000059e();
  *unaff_r4 = 0;
  *(undefined *)(unaff_r4 + 3) = 0;
  return;
}



void FUN_000005dc(void)

{
  FUN_000005dc();
  *(undefined *)(DAT_000005ec + 0xe) = 1;
  return;
}


