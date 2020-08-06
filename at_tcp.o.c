#include "at_tcp.o.h"



void UndefinedInstruction(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    unaff_r4 = uVar1 & unaff_r8 << 9;
    *(uint *)uVar1 = uVar1;
    uVar1 = param_3 >> 1;
    in_CY = 0xffffffc7 < uVar1;
    in_OV = SCARRY4(uVar1,0x38);
    param_1 = (undefined4 *)(uVar1 + 0x38);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = 0x44;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r4;
  }
  if (!in_NG) {
    if (in_CY) {
      register0x00000054 = (BADSPACEBASE *)(unaff_r4 + 0x90000000);
    }
    if (in_OV) {
      *unaff_r9 = in_lr;
      *(undefined4 **)(unaff_r9 + -1) = unaff_r9;
      unaff_r9[-2] = unaff_r8;
      unaff_r9[-3] = unaff_r6;
      unaff_r9[-4] = unaff_r4;
    }
    if (!in_ZR) {
      *(BADSPACEBASE **)in_r12 = register0x00000054;
      *(int *)(in_r12 + -4) = in_r12;
      *(int *)(in_r12 + -8) = unaff_r11;
      *(undefined4 *)(in_r12 + -0xc) = unaff_r6;
      *(uint *)(in_r12 + -0x10) = param_3;
    }
    software_interrupt(0xfef7ff);
    if (in_ZR) {
      *(uint *)(unaff_r11 * -0xff) = param_2;
      software_interrupt(0xf070f);
      software_interrupt(0x70707);
    }
    FUN_0000006e(param_3,1);
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)((undefined *)register0x00000054 + 4))(1);
    return;
  }
  return;
}



void SupervisorCall(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    unaff_r4 = uVar1 & unaff_r8 << 9;
    *(uint *)uVar1 = uVar1;
    uVar1 = param_3 >> 1;
    in_CY = 0xffffffc7 < uVar1;
    in_OV = SCARRY4(uVar1,0x38);
    param_1 = (undefined4 *)(uVar1 + 0x38);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = 0x44;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r4;
  }
  if (!in_NG) {
    if (in_CY) {
      register0x00000054 = (BADSPACEBASE *)(unaff_r4 + 0x90000000);
    }
    if (in_OV) {
      *unaff_r9 = in_lr;
      *(undefined4 **)(unaff_r9 + -1) = unaff_r9;
      unaff_r9[-2] = unaff_r8;
      unaff_r9[-3] = unaff_r6;
      unaff_r9[-4] = unaff_r4;
    }
    if (!in_ZR) {
      *(BADSPACEBASE **)in_r12 = register0x00000054;
      *(int *)(in_r12 + -4) = in_r12;
      *(int *)(in_r12 + -8) = unaff_r11;
      *(undefined4 *)(in_r12 + -0xc) = unaff_r6;
      *(uint *)(in_r12 + -0x10) = param_3;
    }
    software_interrupt(0xfef7ff);
    if (in_ZR) {
      *(uint *)(unaff_r11 * -0xff) = param_2;
      software_interrupt(0xf070f);
      software_interrupt(0x70707);
    }
    FUN_0000006e(param_3,1);
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)((undefined *)register0x00000054 + 4))(1);
    return;
  }
  return;
}



void PrefetchAbort(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    unaff_r4 = uVar1 & unaff_r8 << 9;
    *(uint *)uVar1 = uVar1;
    uVar1 = param_3 >> 1;
    in_CY = 0xffffffc7 < uVar1;
    in_OV = SCARRY4(uVar1,0x38);
    param_1 = (undefined4 *)(uVar1 + 0x38);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = 0x44;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r4;
  }
  if (!in_NG) {
    if (in_CY) {
      register0x00000054 = (BADSPACEBASE *)(unaff_r4 + 0x90000000);
    }
    if (in_OV) {
      *unaff_r9 = in_lr;
      *(undefined4 **)(unaff_r9 + -1) = unaff_r9;
      unaff_r9[-2] = unaff_r8;
      unaff_r9[-3] = unaff_r6;
      unaff_r9[-4] = unaff_r4;
    }
    if (!in_ZR) {
      *(BADSPACEBASE **)in_r12 = register0x00000054;
      *(int *)(in_r12 + -4) = in_r12;
      *(int *)(in_r12 + -8) = unaff_r11;
      *(undefined4 *)(in_r12 + -0xc) = unaff_r6;
      *(uint *)(in_r12 + -0x10) = param_3;
    }
    software_interrupt(0xfef7ff);
    if (in_ZR) {
      *(uint *)(unaff_r11 * -0xff) = param_2;
      software_interrupt(0xf070f);
      software_interrupt(0x70707);
    }
    FUN_0000006e(param_3,1);
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)((undefined *)register0x00000054 + 4))(1);
    return;
  }
  return;
}



void DataAbort(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    unaff_r4 = uVar1 & unaff_r8 << 9;
    *(uint *)uVar1 = uVar1;
    uVar1 = param_3 >> 1;
    in_CY = 0xffffffc7 < uVar1;
    in_OV = SCARRY4(uVar1,0x38);
    param_1 = (undefined4 *)(uVar1 + 0x38);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = 0x44;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r4;
  }
  if (!in_NG) {
    if (in_CY) {
      register0x00000054 = (BADSPACEBASE *)(unaff_r4 + 0x90000000);
    }
    if (in_OV) {
      *unaff_r9 = in_lr;
      *(undefined4 **)(unaff_r9 + -1) = unaff_r9;
      unaff_r9[-2] = unaff_r8;
      unaff_r9[-3] = unaff_r6;
      unaff_r9[-4] = unaff_r4;
    }
    if (!in_ZR) {
      *(BADSPACEBASE **)in_r12 = register0x00000054;
      *(int *)(in_r12 + -4) = in_r12;
      *(int *)(in_r12 + -8) = unaff_r11;
      *(undefined4 *)(in_r12 + -0xc) = unaff_r6;
      *(uint *)(in_r12 + -0x10) = param_3;
    }
    software_interrupt(0xfef7ff);
    if (in_ZR) {
      *(uint *)(unaff_r11 * -0xff) = param_2;
      software_interrupt(0xf070f);
      software_interrupt(0x70707);
    }
    FUN_0000006e(param_3,1);
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)((undefined *)register0x00000054 + 4))(1);
    return;
  }
  return;
}



void NotUsed(undefined4 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    uVar1 = (uint)param_1 & param_2;
    unaff_r4 = uVar1 & unaff_r8 << 9;
    *(uint *)uVar1 = uVar1;
    uVar1 = param_3 >> 1;
    in_CY = 0xffffffc7 < uVar1;
    in_OV = SCARRY4(uVar1,0x38);
    param_1 = (undefined4 *)(uVar1 + 0x38);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = 0x44;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r4;
  }
  if (!in_NG) {
    if (in_CY) {
      register0x00000054 = (BADSPACEBASE *)(unaff_r4 + 0x90000000);
    }
    if (in_OV) {
      *unaff_r9 = in_lr;
      *(undefined4 **)(unaff_r9 + -1) = unaff_r9;
      unaff_r9[-2] = unaff_r8;
      unaff_r9[-3] = unaff_r6;
      unaff_r9[-4] = unaff_r4;
    }
    if (!in_ZR) {
      *(BADSPACEBASE **)in_r12 = register0x00000054;
      *(int *)(in_r12 + -4) = in_r12;
      *(int *)(in_r12 + -8) = unaff_r11;
      *(undefined4 *)(in_r12 + -0xc) = unaff_r6;
      *(uint *)(in_r12 + -0x10) = param_3;
    }
    software_interrupt(0xfef7ff);
    if (in_ZR) {
      *(uint *)(unaff_r11 * -0xff) = param_2;
      software_interrupt(0xf070f);
      software_interrupt(0x70707);
    }
    FUN_0000006e(param_3,1);
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)((undefined *)register0x00000054 + 4))(1);
    return;
  }
  return;
}



void IRQ(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    unaff_r4 = (uint)param_1 & unaff_r8 << 9;
    *(undefined4 **)param_1 = param_1;
    uVar1 = param_3 >> 1;
    in_CY = 0xffffffc7 < uVar1;
    in_OV = SCARRY4(uVar1,0x38);
    param_1 = (undefined4 *)(uVar1 + 0x38);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = 0x44;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r4;
  }
  if (!in_NG) {
    if (in_CY) {
      register0x00000054 = (BADSPACEBASE *)(unaff_r4 + 0x90000000);
    }
    if (in_OV) {
      *unaff_r9 = in_lr;
      *(undefined4 **)(unaff_r9 + -1) = unaff_r9;
      unaff_r9[-2] = unaff_r8;
      unaff_r9[-3] = unaff_r6;
      unaff_r9[-4] = unaff_r4;
    }
    if (!in_ZR) {
      *(BADSPACEBASE **)in_r12 = register0x00000054;
      *(int *)(in_r12 + -4) = in_r12;
      *(int *)(in_r12 + -8) = unaff_r11;
      *(undefined4 *)(in_r12 + -0xc) = unaff_r6;
      *(uint *)(in_r12 + -0x10) = param_3;
    }
    software_interrupt(0xfef7ff);
    if (in_ZR) {
      *(undefined4 *)(unaff_r11 * -0xff) = param_2;
      software_interrupt(0xf070f);
      software_interrupt(0x70707);
    }
    FUN_0000006e(param_3,1);
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)((undefined *)register0x00000054 + 4))(1);
    return;
  }
  return;
}



void FIQ(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint unaff_r4;
  undefined4 unaff_r6;
  uint unaff_r8;
  undefined4 *unaff_r9;
  undefined4 unaff_r10;
  int unaff_r11;
  int in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_ZR) {
    unaff_r4 = (uint)param_1 & unaff_r8 << 9;
    *(undefined4 **)param_1 = param_1;
    uVar1 = param_3 >> 1;
    in_CY = 0xffffffc7 < uVar1;
    in_OV = SCARRY4(uVar1,0x38);
    param_1 = (undefined4 *)(uVar1 + 0x38);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (undefined4 *)0x0;
  }
  if (in_ZR) {
    param_1 = (undefined4 *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_CY) {
    *param_1 = 0x44;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r8;
    param_1[-5] = unaff_r4;
  }
  if (!in_NG) {
    if (in_CY) {
      register0x00000054 = (BADSPACEBASE *)(unaff_r4 + 0x90000000);
    }
    if (in_OV) {
      *unaff_r9 = in_lr;
      *(undefined4 **)(unaff_r9 + -1) = unaff_r9;
      unaff_r9[-2] = unaff_r8;
      unaff_r9[-3] = unaff_r6;
      unaff_r9[-4] = unaff_r4;
    }
    if (!in_ZR) {
      *(BADSPACEBASE **)in_r12 = register0x00000054;
      *(int *)(in_r12 + -4) = in_r12;
      *(int *)(in_r12 + -8) = unaff_r11;
      *(undefined4 *)(in_r12 + -0xc) = unaff_r6;
      *(uint *)(in_r12 + -0x10) = param_3;
    }
    software_interrupt(0xfef7ff);
    if (in_ZR) {
      *(undefined4 *)(unaff_r11 * -0xff) = param_2;
      software_interrupt(0xf070f);
      software_interrupt(0x70707);
    }
    FUN_0000006e(param_3,1);
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)((undefined *)register0x00000054 + 4))(1);
    return;
  }
  return;
}



void FUN_0000006e(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000006e();
                    // WARNING: Could not recover jumptable at 0x00000078. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(1);
  return;
}



undefined4 FUN_000000dc(void)

{
  int unaff_r4;
  
  FUN_000000dc();
  *(int *)(unaff_r4 + 0x18) = *(int *)(unaff_r4 + 0x18) + 1;
  FUN_00000148();
  FUN_000000f8();
  return 1;
}



undefined4 FUN_000000f8(void)

{
  FUN_000000f8();
  return 1;
}



undefined4 FUN_00000148(void)

{
  FUN_00000148();
  FUN_000000f8();
  return 1;
}



undefined4 FUN_0000016e(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  char *pcVar4;
  uint unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  undefined4 in_stack_00000008;
  
  uVar1 = (undefined2)unaff_r5;
  iVar2 = FUN_0000016e();
  if (iVar2 == 0) {
    return 0;
  }
  if ((unaff_r7 == 0) ||
     (pcVar4 = (char *)(*unaff_r6 + unaff_r4 * 0x44 + -0x44),
     -1 < (int)((uint)(byte)pcVar4[1] << 0x1e))) {
LAB_0000019e:
    uVar3 = 0;
  }
  else {
    if (*pcVar4 == '\x01') {
      if (unaff_r5 == 0) {
        uVar1 = FUN_000001ac();
      }
      *(undefined2 *)(pcVar4 + 10) = uVar1;
    }
    else {
      if ((*pcVar4 != '\x02') || ((unaff_r5 != 0 && ((uint)*(ushort *)(pcVar4 + 10) != unaff_r5))))
      goto LAB_0000019e;
    }
    FUN_000001ba(pcVar4 + 4,in_stack_00000008,4);
    *(short *)(pcVar4 + 8) = (short)unaff_r7;
    pcVar4[2] = '\0';
    *(undefined2 *)(pcVar4 + 0xc) = 0x218;
    *(undefined2 *)(pcVar4 + 0x36) = *(undefined2 *)((int)unaff_r6 + 0x12);
    *(short *)(pcVar4 + 0x2c) = (short)PTR_DAT_00000208;
    *(undefined2 *)(pcVar4 + 0x32) = 0x860;
    *(undefined2 *)(pcVar4 + 0x34) = 0xffff;
    pcVar4[0x17] = '\0';
    *(undefined2 *)(pcVar4 + 0x2e) = 0;
    *(undefined2 *)(pcVar4 + 0x30) = *(undefined2 *)((int)unaff_r6 + 6);
    uVar3 = FUN_000001e4();
    *(undefined4 *)(pcVar4 + 0x18) = uVar3;
    *(undefined4 *)(pcVar4 + 0x1c) = uVar3;
    *(undefined4 *)(pcVar4 + 0x38) = 0;
    *(undefined4 *)(pcVar4 + 0x20) = uVar3;
    FUN_000001f4(pcVar4,2);
    FUN_000001fc(pcVar4,4);
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 FUN_000001ac(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r6;
  undefined2 unaff_r7;
  undefined4 param_7;
  
  uVar1 = FUN_000001ac();
  *(undefined2 *)(unaff_r4 + 10) = uVar1;
  FUN_000001ba(unaff_r4 + 4,param_7,4);
  *(undefined2 *)(unaff_r4 + 8) = unaff_r7;
  *(undefined *)(unaff_r4 + 2) = 0;
  *(undefined2 *)(unaff_r4 + 0xc) = 0x218;
  *(undefined2 *)(unaff_r4 + 0x36) = *(undefined2 *)(unaff_r6 + 0x12);
  *(undefined2 *)(unaff_r4 + 0x2c) = (short)PTR_DAT_00000208;
  *(undefined2 *)(unaff_r4 + 0x32) = 0x860;
  *(undefined2 *)(unaff_r4 + 0x34) = 0xffff;
  *(undefined *)(unaff_r4 + 0x17) = 0;
  *(undefined2 *)(unaff_r4 + 0x2e) = 0;
  *(undefined2 *)(unaff_r4 + 0x30) = *(undefined2 *)(unaff_r6 + 6);
  uVar2 = FUN_000001e4();
  *(undefined4 *)(unaff_r4 + 0x18) = uVar2;
  *(undefined4 *)(unaff_r4 + 0x1c) = uVar2;
  *(undefined4 *)(unaff_r4 + 0x38) = 0;
  *(undefined4 *)(unaff_r4 + 0x20) = uVar2;
  FUN_000001f4();
  FUN_000001fc();
  return 1;
}



undefined4 FUN_000001ba(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r6;
  undefined2 unaff_r7;
  
  FUN_000001ba();
  *(undefined2 *)(unaff_r4 + 8) = unaff_r7;
  *(undefined *)(unaff_r4 + 2) = 0;
  *(undefined2 *)(unaff_r4 + 0xc) = 0x218;
  *(undefined2 *)(unaff_r4 + 0x36) = *(undefined2 *)(unaff_r6 + 0x12);
  *(undefined2 *)(unaff_r4 + 0x2c) = (short)PTR_DAT_00000208;
  *(undefined2 *)(unaff_r4 + 0x32) = 0x860;
  *(undefined2 *)(unaff_r4 + 0x34) = 0xffff;
  *(undefined *)(unaff_r4 + 0x17) = 0;
  *(undefined2 *)(unaff_r4 + 0x2e) = 0;
  *(undefined2 *)(unaff_r4 + 0x30) = *(undefined2 *)(unaff_r6 + 6);
  uVar1 = FUN_000001e4();
  *(undefined4 *)(unaff_r4 + 0x18) = uVar1;
  *(undefined4 *)(unaff_r4 + 0x1c) = uVar1;
  *(undefined4 *)(unaff_r4 + 0x38) = 0;
  *(undefined4 *)(unaff_r4 + 0x20) = uVar1;
  FUN_000001f4();
  FUN_000001fc();
  return 1;
}



undefined4 FUN_000001e4(void)

{
  undefined4 uVar1;
  int unaff_r4;
  undefined4 unaff_r5;
  
  uVar1 = FUN_000001e4();
  *(undefined4 *)(unaff_r4 + 0x18) = uVar1;
  *(undefined4 *)(unaff_r4 + 0x1c) = uVar1;
  *(undefined4 *)(unaff_r4 + 0x38) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x20) = uVar1;
  FUN_000001f4();
  FUN_000001fc();
  return 1;
}



undefined4 FUN_000001f4(void)

{
  FUN_000001f4();
  FUN_000001fc();
  return 1;
}



undefined4 FUN_000001fc(void)

{
  FUN_000001fc();
  return 1;
}



int FUN_00000232(void)

{
  int iVar1;
  
  iVar1 = FUN_00000232();
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 2) = 0x36;
    iVar1 = iVar1 + 0x3a;
  }
  return iVar1;
}



undefined4 FUN_000002c4(void)

{
  FUN_000002c4();
  return 0;
}



void FUN_00000316(void)

{
  FUN_00000316();
  return;
}



undefined4 FUN_000003b8(void)

{
  FUN_000003b8();
  return 1;
}



byte * FUN_00000400(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  byte *unaff_r4;
  char *pcVar3;
  ushort *unaff_r5;
  char **unaff_r6;
  int unaff_r7;
  
  do {
    iVar1 = FUN_00000400(param_1,param_2,param_3);
    if (iVar1 == 1) {
      return unaff_r4;
    }
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0x44;
      unaff_r7 = unaff_r7 + -1;
      if (unaff_r7 < 1) {
        if (((*(byte *)((int)unaff_r5 + 0xd) & 0x15) == 0) &&
           ((int)((uint)*(byte *)((int)unaff_r5 + 0xd) << 0x1e) < 0)) {
          uVar2 = (uint)*(byte *)(unaff_r6 + 1);
          pcVar3 = *unaff_r6;
          while (0 < (int)uVar2) {
            if ((*pcVar3 == '\x02') &&
               (((uint)unaff_r5[1] << 0x18 | (uint)unaff_r5[1] << 8) >> 0x10 ==
                (uint)*(ushort *)(pcVar3 + 10))) {
              FUN_00000446(pcVar3 + 4,param_5,4);
              *(ushort *)(pcVar3 + 8) =
                   (ushort)(((uint)*unaff_r5 << 0x18) >> 0x10) |
                   (ushort)(((uint)*unaff_r5 << 8) >> 0x10);
              return (byte *)pcVar3;
            }
            uVar2 = uVar2 - 1;
            pcVar3 = pcVar3 + 0x44;
          }
        }
        return (byte *)0;
      }
    } while (((*unaff_r4 < 3) ||
             (((uint)*unaff_r5 << 0x18 | (uint)*unaff_r5 << 8) >> 0x10 !=
              (uint)*(ushort *)(param_1 + 0x4c))) ||
            (((uint)unaff_r5[1] << 0x18 | (uint)unaff_r5[1] << 8) >> 0x10 !=
             (uint)*(ushort *)(param_1 + 0x4e)));
    param_3 = 4;
    param_1 = param_1 + 0x48;
    param_2 = param_5;
  } while( true );
}



void FUN_00000446(void)

{
  int unaff_r4;
  ushort *unaff_r5;
  
  FUN_00000446();
  *(ushort *)(unaff_r4 + 8) =
       (ushort)(((uint)*unaff_r5 << 0x18) >> 0x10) | (ushort)(((uint)*unaff_r5 << 8) >> 0x10);
  return;
}



void FUN_000005c4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000005c4();
                    // WARNING: Could not recover jumptable at 0x000005cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000007fc(int param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  while (FUN_000007fc(param_1), uVar2 = DAT_00000850, unaff_r6 != 0) {
    param_1 = unaff_r6;
    unaff_r6 = *(int *)(unaff_r6 + 4);
  }
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1c) < 0) {
    if (unaff_r5 - *(int *)(unaff_r4 + 0x20) < 0) {
      return;
    }
    *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) & 0xf7;
    uVar3 = *(undefined2 *)(unaff_r4 + 0x34);
  }
  else {
    uVar1 = *(ushort *)(unaff_r4 + 0x32);
    if ((uint)*(ushort *)(unaff_r4 + 0x34) < (uint)uVar1) {
      uVar4 = FUN_00000838((uint)*(ushort *)(unaff_r4 + 0xc) * (uint)*(ushort *)(unaff_r4 + 0xc));
    }
    else {
      uVar4 = (uint)*(ushort *)(unaff_r4 + 0xc);
    }
    uVar4 = uVar4 + (uint)uVar1;
    uVar3 = (undefined2)uVar4;
    if (uVar2 < uVar4) {
      uVar3 = (undefined2)uVar2;
    }
  }
  *(undefined2 *)(unaff_r4 + 0x32) = uVar3;
  return;
}



void FUN_00000838(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r4;
  uint unaff_r5;
  int unaff_r6;
  
  iVar2 = FUN_00000838();
  uVar1 = (undefined2)(iVar2 + unaff_r6);
  if (unaff_r5 < (uint)(iVar2 + unaff_r6)) {
    uVar1 = (undefined2)unaff_r5;
  }
  *(undefined2 *)(unaff_r4 + 0x32) = uVar1;
  return;
}



void FUN_000008a6(void)

{
  FUN_000008a6();
  return;
}



void FUN_00000c68(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000c68();
                    // WARNING: Could not recover jumptable at 0x0000099c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000d54(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000d54();
                    // WARNING: Could not recover jumptable at 0x0000099c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000d92(void)

{
  int unaff_r4;
  
  while (FUN_00000d92(), unaff_r4 != 0) {
    unaff_r4 = *(int *)(unaff_r4 + 4);
  }
  return;
}



void FUN_00000dbc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x3c);
  do {
    if (iVar7 == 0) {
LAB_00000e0e:
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        *(int *)(param_1 + 0x1c) = iVar5;
        FUN_00000e1a(param_1,0x11);
      }
      *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfb;
      return;
    }
    if (*(short *)(iVar7 + 0xe) == 0) {
      if (iVar7 != 0) {
        uVar6 = (uint)*(byte *)(DAT_00000e54 + 5) - (uint)*(byte *)(param_1 + 0x16);
        if (7 < uVar6) {
          uVar6 = 7;
        }
        uVar3 = *(ushort *)(param_1 + 0x30);
        *(undefined2 *)(param_1 + 0x12) =
             (short)(((int)*(short *)(param_1 + 0x2e) >> 3) + (uint)uVar3 << uVar6);
        *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_1 + 0xe);
        bVar2 = *(byte *)(param_1 + 2);
        *(byte *)(param_1 + 2) = bVar2 | 0x80;
        iVar8 = *(int *)(iVar7 + 4);
        if ((iVar8 == 0) && ((bVar2 & 1) == 0)) {
          *(byte *)(param_1 + 2) = bVar2 & 0xfb | 0x80;
        }
        uVar4 = *(ushort *)(iVar7 + 0xc);
        *(int *)(iVar7 + 8) = iVar5;
        FUN_00000e42(param_1,iVar7,(uint)uVar4 | 0x8000,(uint)uVar3,param_4);
        *(int *)(iVar7 + 4) = iVar8;
        *(ushort *)(iVar7 + 0xc) = uVar4;
        *(ushort *)(iVar7 + 0xe) = uVar4;
        *(undefined4 *)(iVar7 + 8) = 0;
        return;
      }
      goto LAB_00000e0e;
    }
    puVar1 = (ushort *)(iVar7 + 0xc);
    iVar7 = *(int *)(iVar7 + 4);
    iVar5 = (uint)*puVar1 + iVar5;
  } while( true );
}



void FUN_00000e1a(void)

{
  int unaff_r4;
  byte unaff_r6;
  
  FUN_00000e1a();
  *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) & unaff_r6;
  return;
}



void FUN_00000e42(void)

{
  int unaff_r5;
  undefined2 unaff_r6;
  undefined4 unaff_r7;
  
  FUN_00000e42();
  *(undefined4 *)(unaff_r5 + 4) = unaff_r7;
  *(undefined2 *)(unaff_r5 + 0xc) = unaff_r6;
  *(undefined2 *)(unaff_r5 + 0xe) = unaff_r6;
  *(undefined4 *)(unaff_r5 + 8) = 0;
  return;
}



undefined4 FUN_00000e82(void)

{
  FUN_00000e82();
  return 1;
}



void FUN_00000eee(void)

{
  FUN_00000eee();
  return;
}



undefined4 FUN_00000f50(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000f50();
  bVar1 = *(byte *)(unaff_r4 + 2);
  *(byte *)(unaff_r4 + 2) = bVar1 | 0x20;
  if ((int)((uint)bVar1 << 0x1d) < 0) {
    *(int *)(unaff_r4 + 0x1c) = *(int *)(unaff_r4 + 0x1c) + unaff_r6;
  }
  else {
    *(byte *)(unaff_r4 + 2) = bVar1 & 0xfd | 0xa0;
    FUN_00000f70();
    *(short *)(unaff_r4 + 0x12) = (*(short *)(unaff_r4 + 0x2e) >> 3) + *(short *)(unaff_r4 + 0x30);
    *(undefined *)(unaff_r4 + 0x16) = *(undefined *)(unaff_r7 + 5);
    *(undefined2 *)(unaff_r4 + 0x10) = *(undefined2 *)(unaff_r4 + 0xe);
  }
  *(undefined4 *)(unaff_r5 + 4) = 0;
  puVar2 = DAT_00000fcc;
  *(undefined2 *)(unaff_r5 + 0xc) = (short)unaff_r6;
  *(undefined2 *)(unaff_r5 + 0xe) = 0;
  *(undefined4 *)(unaff_r5 + 8) = *puVar2;
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1d) < 0) {
    *(undefined4 *)(unaff_r5 + 8) = 0;
  }
  iVar4 = *(int *)(unaff_r4 + 0x3c);
  if (*(int *)(unaff_r4 + 0x3c) == 0) {
    *(int *)(unaff_r4 + 0x3c) = unaff_r5;
  }
  else {
    do {
      iVar3 = iVar4;
      iVar4 = *(int *)(iVar3 + 4);
    } while (iVar4 != 0);
    *(int *)(iVar3 + 4) = unaff_r5;
  }
  return 1;
}



undefined4 FUN_00000f70(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  undefined2 unaff_r6;
  int unaff_r7;
  
  FUN_00000f70();
  *(short *)(unaff_r4 + 0x12) = (*(short *)(unaff_r4 + 0x2e) >> 3) + *(short *)(unaff_r4 + 0x30);
  *(undefined *)(unaff_r4 + 0x16) = *(undefined *)(unaff_r7 + 5);
  *(undefined2 *)(unaff_r4 + 0x10) = *(undefined2 *)(unaff_r4 + 0xe);
  *(undefined4 *)(unaff_r5 + 4) = 0;
  puVar1 = DAT_00000fcc;
  *(undefined2 *)(unaff_r5 + 0xc) = unaff_r6;
  *(undefined2 *)(unaff_r5 + 0xe) = 0;
  *(undefined4 *)(unaff_r5 + 8) = *puVar1;
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1d) < 0) {
    *(undefined4 *)(unaff_r5 + 8) = 0;
  }
  iVar3 = *(int *)(unaff_r4 + 0x3c);
  if (*(int *)(unaff_r4 + 0x3c) == 0) {
    *(int *)(unaff_r4 + 0x3c) = unaff_r5;
  }
  else {
    do {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar2 + 4);
    } while (iVar3 != 0);
    *(int *)(iVar2 + 4) = unaff_r5;
  }
  return 1;
}



undefined4 FUN_00000f8c(void)

{
  FUN_00000f8c();
  return 0;
}



void FUN_00000fd8(void)

{
  undefined2 *puVar1;
  int unaff_r4;
  uint unaff_r6;
  
  puVar1 = (undefined2 *)FUN_00000fd8();
  *puVar1 = 0;
  puVar1[2] = *(undefined2 *)(unaff_r4 + 10);
  puVar1[3] = *(undefined2 *)(unaff_r4 + 8);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(unaff_r4 + 0x1c);
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x19) < 0) {
    *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) & 0xbf;
    *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + -1;
  }
  if ((unaff_r6 & 3) != 0) {
    *(int *)(unaff_r4 + 0x1c) = *(int *)(unaff_r4 + 0x1c) + 1;
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(unaff_r4 + 0x38);
  if (((int)(unaff_r6 << 0x1d) < 0) && (-1 < (int)(unaff_r6 << 0x1b))) {
    *(undefined4 *)(puVar1 + 6) = 0;
  }
  puVar1[8] = *(undefined2 *)(unaff_r4 + 0x36);
  *(char *)(puVar1 + 9) = (char)unaff_r6;
  *(undefined *)((int)puVar1 + 0x13) = *(undefined *)(unaff_r4 + 3);
  *(undefined *)(unaff_r4 + 0x14) = 0;
  FUN_00001028(puVar1,unaff_r4 + 4);
  FUN_0000102e(puVar1);
  return;
}



void FUN_00001028(void)

{
  FUN_00001028();
  FUN_0000102e();
  return;
}



void FUN_0000102e(void)

{
  FUN_0000102e();
  return;
}



void FUN_00001080(void)

{
  FUN_00001080();
  return;
}



void FUN_00001098(void)

{
  undefined uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  ushort *unaff_r5;
  
  puVar2 = (undefined2 *)FUN_00001098();
  *puVar2 = 0;
  puVar2[2] = (ushort)(((uint)unaff_r5[1] << 0x18) >> 0x10) |
              (ushort)(((uint)unaff_r5[1] << 8) >> 0x10);
  puVar2[3] = (ushort)(((uint)*unaff_r5 << 0x18) >> 0x10) | (ushort)(((uint)*unaff_r5 << 8) >> 0x10)
  ;
  uVar3 = FUN_000010be(unaff_r5 + 4);
  *(undefined4 *)(puVar2 + 4) = uVar3;
  uVar3 = FUN_000010c6(unaff_r5 + 2);
  *(undefined4 *)(puVar2 + 6) = uVar3;
  if ((*(byte *)((int)unaff_r5 + 0xd) & 0x12) == 0) {
    uVar1 = 0x14;
  }
  else {
    uVar1 = 4;
    *(undefined4 *)(puVar2 + 6) = 0;
  }
  *(undefined *)(puVar2 + 9) = uVar1;
  puVar2[8] = 0;
  *(undefined *)((int)puVar2 + 0x13) = 0;
  FUN_000010e6(puVar2);
  FUN_000010ec(puVar2);
  return;
}



void FUN_000010be(void)

{
  undefined uVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  
  uVar2 = FUN_000010be();
  *(undefined4 *)(unaff_r4 + 8) = uVar2;
  uVar2 = FUN_000010c6(unaff_r5 + 4);
  *(undefined4 *)(unaff_r4 + 0xc) = uVar2;
  if ((*(byte *)(unaff_r5 + 0xd) & 0x12) == 0) {
    uVar1 = 0x14;
  }
  else {
    uVar1 = 4;
    *(undefined4 *)(unaff_r4 + 0xc) = unaff_r6;
  }
  *(undefined *)(unaff_r4 + 0x12) = uVar1;
  *(undefined2 *)(unaff_r4 + 0x10) = (short)unaff_r6;
  *(undefined *)(unaff_r4 + 0x13) = (char)unaff_r6;
  FUN_000010e6();
  FUN_000010ec();
  return;
}



void FUN_000010c6(void)

{
  undefined uVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  
  uVar2 = FUN_000010c6();
  *(undefined4 *)(unaff_r4 + 0xc) = uVar2;
  if ((*(byte *)(unaff_r5 + 0xd) & 0x12) == 0) {
    uVar1 = 0x14;
  }
  else {
    uVar1 = 4;
    *(undefined4 *)(unaff_r4 + 0xc) = unaff_r6;
  }
  *(undefined *)(unaff_r4 + 0x12) = uVar1;
  *(undefined2 *)(unaff_r4 + 0x10) = (short)unaff_r6;
  *(undefined *)(unaff_r4 + 0x13) = (char)unaff_r6;
  FUN_000010e6();
  FUN_000010ec();
  return;
}



void FUN_000010e6(void)

{
  FUN_000010e6();
  FUN_000010ec();
  return;
}



void FUN_000010ec(void)

{
  FUN_000010ec();
  return;
}



void FUN_000011ae(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  FUN_000011ae();
  FUN_000011b8(unaff_r5 + 8,*(undefined4 *)(unaff_r4 + 6));
  *(undefined *)(unaff_r5 + 0xc) = 0x50;
  *(undefined *)(unaff_r5 + 0xd) = *(undefined *)(unaff_r4 + 9);
  *(ushort *)(unaff_r5 + 0xe) =
       (ushort)(((uint)unaff_r4[8] << 0x18) >> 0x10) | (ushort)(((uint)unaff_r4[8] << 8) >> 0x10);
  *(undefined2 *)(unaff_r5 + 0x10) = 0;
  *(undefined2 *)(unaff_r5 + 0x12) = 0;
  unaff_r4[1] = *unaff_r4;
  if ((int)((uint)*(byte *)(unaff_r4 + 9) << 0x1e) < 0) {
    unaff_r4[0x1d] = (ushort)DAT_0000125c;
    unaff_r4[0x1e] =
         (ushort)(((uint)*(byte *)(DAT_00001260 + 0x10) << 0x18) >> 0x10) |
         (ushort)(((uint)*(ushort *)(DAT_00001260 + 0x10) << 8) >> 0x10);
    *(undefined *)(unaff_r5 + 0xc) = 0x60;
    *unaff_r4 = 4;
  }
  *unaff_r4 = *unaff_r4 + 0x14;
  uVar1 = FUN_00001204();
  FUN_0000120c(uVar1,4,0);
  uVar1 = FUN_00001216();
  uVar1 = FUN_0000121e(6,uVar1);
  FUN_00001228((uint)*unaff_r4,uVar1);
  uVar2 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar2 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar2 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_000011b8(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  FUN_000011b8();
  *(undefined *)(unaff_r5 + 0xc) = 0x50;
  *(undefined *)(unaff_r5 + 0xd) = *(undefined *)(unaff_r4 + 9);
  *(ushort *)(unaff_r5 + 0xe) =
       (ushort)(((uint)unaff_r4[8] << 0x18) >> 0x10) | (ushort)(((uint)unaff_r4[8] << 8) >> 0x10);
  *(undefined2 *)(unaff_r5 + 0x10) = 0;
  *(undefined2 *)(unaff_r5 + 0x12) = 0;
  unaff_r4[1] = *unaff_r4;
  if ((int)((uint)*(byte *)(unaff_r4 + 9) << 0x1e) < 0) {
    unaff_r4[0x1d] = (ushort)DAT_0000125c;
    unaff_r4[0x1e] =
         (ushort)(((uint)*(byte *)(DAT_00001260 + 0x10) << 0x18) >> 0x10) |
         (ushort)(((uint)*(ushort *)(DAT_00001260 + 0x10) << 8) >> 0x10);
    *(undefined *)(unaff_r5 + 0xc) = 0x60;
    *unaff_r4 = 4;
  }
  *unaff_r4 = *unaff_r4 + 0x14;
  uVar1 = FUN_00001204();
  FUN_0000120c(uVar1,4,0);
  uVar1 = FUN_00001216();
  uVar1 = FUN_0000121e(6,uVar1);
  FUN_00001228((uint)*unaff_r4,uVar1);
  uVar2 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar2 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar2 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_00001204(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  uVar1 = FUN_00001204();
  FUN_0000120c(uVar1,4,0);
  uVar1 = FUN_00001216();
  uVar1 = FUN_0000121e(6,uVar1);
  FUN_00001228((uint)*unaff_r4,uVar1);
  uVar2 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar2 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar2 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_0000120c(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  FUN_0000120c();
  uVar1 = FUN_00001216();
  uVar1 = FUN_0000121e(6,uVar1);
  FUN_00001228((uint)*unaff_r4,uVar1);
  uVar2 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar2 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar2 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_00001216(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  uVar1 = FUN_00001216();
  uVar1 = FUN_0000121e(6,uVar1);
  FUN_00001228((uint)*unaff_r4,uVar1);
  uVar2 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar2 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar2 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_0000121e(void)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  uVar1 = FUN_0000121e();
  FUN_00001228((uint)*unaff_r4,uVar1);
  uVar2 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar2 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar2 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_00001228(void)

{
  uint uVar1;
  int unaff_r5;
  
  FUN_00001228();
  uVar1 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar1 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar1 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_00001232(void)

{
  uint uVar1;
  int unaff_r5;
  
  uVar1 = FUN_00001232();
  *(ushort *)(unaff_r5 + 0x10) =
       (ushort)(((~uVar1 & 0xffff) << 0x18) >> 0x10) | (ushort)(((~uVar1 & 0xffff) << 8) >> 0x10);
  FUN_00001252();
  return;
}



void FUN_00001252(void)

{
  FUN_00001252();
  return;
}



// WARNING: This is an inlined function

void FUN_00001294(void)

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
                    // WARNING: Could not recover jumptable at 0x000012a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


