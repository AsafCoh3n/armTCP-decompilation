#include "at_snmp.o.h"



void UndefinedInstruction
               (undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
               undefined param_5,undefined4 param_6,undefined4 param_7,code *UNRECOVERED_JUMPTABLE,
               undefined param_9)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  if (in_ZR) {
    uVar4 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = uVar4 & (uVar4 >> 10 | uVar4 << 0x16);
    *(uint *)uVar4 = uVar4;
    param_1 = (undefined4 *)
              (0x38U - ((int)param_3 >>
                       ((unaff_r8 ^ uVar4 & (uint)unaff_r4 >> (uVar4 & 0xff)) & 0xff)) & param_3 &
              unaff_r8);
    unaff_r11 = (uint)register0x00000054 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  else {
    *in_lr = 0x48;
    in_lr[-1] = unaff_r11;
    in_lr[-2] = unaff_r8;
    in_lr[-3] = param_4;
    *(undefined4 **)(in_lr + -4) = param_1;
  }
  if (in_NG) {
    param_3 = param_3 & 0xffff | 0x201c0000;
  }
  puVar6 = unaff_r4;
  if (!in_ZR) {
    in_lr = (undefined4 *)*unaff_r4;
    unaff_r11 = unaff_r4[-1];
    unaff_r5 = unaff_r4[-2];
    puVar6 = (undefined4 *)unaff_r4[-3];
    param_3 = unaff_r4[-4];
    param_2 = (undefined4 *)unaff_r4[-5];
    param_1 = (undefined4 *)unaff_r4[-6];
  }
  if (!in_OV) {
    in_CY = (bool)((byte)((uint)param_1 >> ((uint)param_1 & 0xff) - 1) & 1);
    param_3 = (uint)param_1 ^ (uint)param_1 >> ((uint)param_1 & 0xff);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  puVar5 = param_2;
  if (!in_ZR) {
    puVar5 = param_2 + 0x60;
    coprocessor_store(8,in_cr7,param_2);
  }
  if (!in_OV) {
    in_CY = param_1 <= (undefined4 *)((int)param_1 * 0x4000000);
    in_OV = SBORROW4((int)(undefined4 *)((int)param_1 * 0x4000000),(int)param_1);
    puVar5 = (undefined4 *)((int)param_1 * 0x3ffffff);
    in_NG = (int)puVar5 < 0;
    in_ZR = puVar5 == (undefined4 *)0x0;
  }
  if (!in_OV) {
    param_3 = unaff_r6 + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!in_OV) {
    uVar4 = (uint)param_1 >> 0x10 | (int)param_1 << 0x10;
    uVar1 = (int)param_1 + (uint)!in_CY;
    in_CY = uVar1 <= uVar4;
    in_OV = SBORROW4(uVar4,uVar1);
    unaff_r7 = uVar4 - uVar1;
    in_NG = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!in_ZR) {
    param_1 = param_1 + -0x62;
    coprocessor_load(8,in_cr7,param_1);
  }
  software_interrupt(0xfef7ff);
  if (!in_ZR) {
    coprocessor_store(8,in_cr7,param_1 + -0x60);
  }
  if (in_CY && !in_ZR) {
    puVar5 = (undefined4 *)(unaff_r8 + (int)puVar5 * 0x2000000 + (uint)in_CY);
  }
  if (!in_OV) {
    *puVar5 = 0x78;
    puVar5[-1] = unaff_r7;
    puVar5[-2] = unaff_r6;
    puVar5[-3] = unaff_r5;
    puVar5[-4] = param_4;
    *(undefined4 **)(puVar5 + -5) = param_1;
    puVar5 = puVar5 + -6;
  }
  if (in_ZR) {
    coprocessor_function(6,4,2,in_cr0,in_cr9,in_cr9);
  }
  if (!in_NG) {
    puVar5 = (undefined4 *)((int)puVar5 + -0x29);
  }
  if (in_CY) {
    *(undefined4 **)param_1 = in_lr;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = unaff_r5;
    param_1[-5] = param_4;
  }
  if (in_ZR == false) {
    if (in_NG == in_OV) {
      if (((param_1 != (undefined4 *)0x41) && (param_1 != (undefined4 *)0x42)) &&
         (param_1 != (undefined4 *)0x43)) goto LAB_000000e2;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_00000002) {
        if (param_1 != (undefined4 *)UndefinedInstruction) {
          if (param_1 != (undefined4 *)0x6) goto LAB_000000e2;
          goto LAB_000000ac;
        }
        uVar2 = FUN_000000a2(puVar6[5],puVar5,param_3);
        goto LAB_000000ae;
      }
    }
    uVar3 = FUN_000000dc();
    *(undefined2 *)(unaff_r5 + 2) = uVar3;
  }
  else {
LAB_000000ac:
    uVar2 = (ushort)*(byte *)((int)puVar6 + 0x13);
LAB_000000ae:
    *(ushort *)(unaff_r5 + 2) = uVar2;
    FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,puVar6[5]);
  }
LAB_000000e2:
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void SupervisorCall(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                   undefined param_5,undefined4 param_6,undefined4 param_7,
                   code *UNRECOVERED_JUMPTABLE,undefined param_9)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  if (in_ZR) {
    uVar4 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = uVar4 & (uVar4 >> 10 | uVar4 << 0x16);
    *(uint *)uVar4 = uVar4;
    param_1 = (undefined4 *)
              (0x38U - ((int)param_3 >>
                       ((unaff_r8 ^ uVar4 & (uint)unaff_r4 >> (uVar4 & 0xff)) & 0xff)) & param_3 &
              unaff_r8);
    unaff_r11 = (uint)register0x00000054 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  else {
    *in_lr = 0x48;
    in_lr[-1] = unaff_r11;
    in_lr[-2] = unaff_r8;
    in_lr[-3] = param_4;
    *(undefined4 **)(in_lr + -4) = param_1;
  }
  if (in_NG) {
    param_3 = param_3 & 0xffff | 0x201c0000;
  }
  puVar6 = unaff_r4;
  if (!in_ZR) {
    in_lr = (undefined4 *)*unaff_r4;
    unaff_r11 = unaff_r4[-1];
    unaff_r5 = unaff_r4[-2];
    puVar6 = (undefined4 *)unaff_r4[-3];
    param_3 = unaff_r4[-4];
    param_2 = (undefined4 *)unaff_r4[-5];
    param_1 = (undefined4 *)unaff_r4[-6];
  }
  if (!in_OV) {
    in_CY = (bool)((byte)((uint)param_1 >> ((uint)param_1 & 0xff) - 1) & 1);
    param_3 = (uint)param_1 ^ (uint)param_1 >> ((uint)param_1 & 0xff);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  puVar5 = param_2;
  if (!in_ZR) {
    puVar5 = param_2 + 0x60;
    coprocessor_store(8,in_cr7,param_2);
  }
  if (!in_OV) {
    in_CY = param_1 <= (undefined4 *)((int)param_1 * 0x4000000);
    in_OV = SBORROW4((int)(undefined4 *)((int)param_1 * 0x4000000),(int)param_1);
    puVar5 = (undefined4 *)((int)param_1 * 0x3ffffff);
    in_NG = (int)puVar5 < 0;
    in_ZR = puVar5 == (undefined4 *)0x0;
  }
  if (!in_OV) {
    param_3 = unaff_r6 + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!in_OV) {
    uVar4 = (uint)param_1 >> 0x10 | (int)param_1 << 0x10;
    uVar1 = (int)param_1 + (uint)!in_CY;
    in_CY = uVar1 <= uVar4;
    in_OV = SBORROW4(uVar4,uVar1);
    unaff_r7 = uVar4 - uVar1;
    in_NG = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!in_ZR) {
    param_1 = param_1 + -0x62;
    coprocessor_load(8,in_cr7,param_1);
  }
  software_interrupt(0xfef7ff);
  if (!in_ZR) {
    coprocessor_store(8,in_cr7,param_1 + -0x60);
  }
  if (in_CY && !in_ZR) {
    puVar5 = (undefined4 *)(unaff_r8 + (int)puVar5 * 0x2000000 + (uint)in_CY);
  }
  if (!in_OV) {
    *puVar5 = 0x78;
    puVar5[-1] = unaff_r7;
    puVar5[-2] = unaff_r6;
    puVar5[-3] = unaff_r5;
    puVar5[-4] = param_4;
    *(undefined4 **)(puVar5 + -5) = param_1;
    puVar5 = puVar5 + -6;
  }
  if (in_ZR) {
    coprocessor_function(6,4,2,in_cr0,in_cr9,in_cr9);
  }
  if (!in_NG) {
    puVar5 = (undefined4 *)((int)puVar5 + -0x29);
  }
  if (in_CY) {
    *(undefined4 **)param_1 = in_lr;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = unaff_r5;
    param_1[-5] = param_4;
  }
  if (in_ZR == false) {
    if (in_NG == in_OV) {
      if (((param_1 != (undefined4 *)0x41) && (param_1 != (undefined4 *)0x42)) &&
         (param_1 != (undefined4 *)0x43)) goto LAB_000000e2;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_00000002) {
        if (param_1 != (undefined4 *)UndefinedInstruction) {
          if (param_1 != (undefined4 *)0x6) goto LAB_000000e2;
          goto LAB_000000ac;
        }
        uVar2 = FUN_000000a2(puVar6[5],puVar5,param_3);
        goto LAB_000000ae;
      }
    }
    uVar3 = FUN_000000dc();
    *(undefined2 *)(unaff_r5 + 2) = uVar3;
  }
  else {
LAB_000000ac:
    uVar2 = (ushort)*(byte *)((int)puVar6 + 0x13);
LAB_000000ae:
    *(ushort *)(unaff_r5 + 2) = uVar2;
    FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,puVar6[5]);
  }
LAB_000000e2:
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void PrefetchAbort(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                  undefined param_5,undefined4 param_6,undefined4 param_7,
                  code *UNRECOVERED_JUMPTABLE,undefined param_9)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  if (in_ZR) {
    uVar4 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = uVar4 & (uVar4 >> 10 | uVar4 << 0x16);
    *(uint *)uVar4 = uVar4;
    param_1 = (undefined4 *)
              (0x38U - ((int)param_3 >>
                       ((unaff_r8 ^ uVar4 & (uint)unaff_r4 >> (uVar4 & 0xff)) & 0xff)) & param_3 &
              unaff_r8);
    unaff_r11 = (uint)register0x00000054 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  else {
    *in_lr = 0x48;
    in_lr[-1] = unaff_r11;
    in_lr[-2] = unaff_r8;
    in_lr[-3] = param_4;
    *(undefined4 **)(in_lr + -4) = param_1;
  }
  if (in_NG) {
    param_3 = param_3 & 0xffff | 0x201c0000;
  }
  puVar6 = unaff_r4;
  if (!in_ZR) {
    in_lr = (undefined4 *)*unaff_r4;
    unaff_r11 = unaff_r4[-1];
    unaff_r5 = unaff_r4[-2];
    puVar6 = (undefined4 *)unaff_r4[-3];
    param_3 = unaff_r4[-4];
    param_2 = (undefined4 *)unaff_r4[-5];
    param_1 = (undefined4 *)unaff_r4[-6];
  }
  if (!in_OV) {
    in_CY = (bool)((byte)((uint)param_1 >> ((uint)param_1 & 0xff) - 1) & 1);
    param_3 = (uint)param_1 ^ (uint)param_1 >> ((uint)param_1 & 0xff);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  puVar5 = param_2;
  if (!in_ZR) {
    puVar5 = param_2 + 0x60;
    coprocessor_store(8,in_cr7,param_2);
  }
  if (!in_OV) {
    in_CY = param_1 <= (undefined4 *)((int)param_1 * 0x4000000);
    in_OV = SBORROW4((int)(undefined4 *)((int)param_1 * 0x4000000),(int)param_1);
    puVar5 = (undefined4 *)((int)param_1 * 0x3ffffff);
    in_NG = (int)puVar5 < 0;
    in_ZR = puVar5 == (undefined4 *)0x0;
  }
  if (!in_OV) {
    param_3 = unaff_r6 + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!in_OV) {
    uVar4 = (uint)param_1 >> 0x10 | (int)param_1 << 0x10;
    uVar1 = (int)param_1 + (uint)!in_CY;
    in_CY = uVar1 <= uVar4;
    in_OV = SBORROW4(uVar4,uVar1);
    unaff_r7 = uVar4 - uVar1;
    in_NG = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!in_ZR) {
    param_1 = param_1 + -0x62;
    coprocessor_load(8,in_cr7,param_1);
  }
  software_interrupt(0xfef7ff);
  if (!in_ZR) {
    coprocessor_store(8,in_cr7,param_1 + -0x60);
  }
  if (in_CY && !in_ZR) {
    puVar5 = (undefined4 *)(unaff_r8 + (int)puVar5 * 0x2000000 + (uint)in_CY);
  }
  if (!in_OV) {
    *puVar5 = 0x78;
    puVar5[-1] = unaff_r7;
    puVar5[-2] = unaff_r6;
    puVar5[-3] = unaff_r5;
    puVar5[-4] = param_4;
    *(undefined4 **)(puVar5 + -5) = param_1;
    puVar5 = puVar5 + -6;
  }
  if (in_ZR) {
    coprocessor_function(6,4,2,in_cr0,in_cr9,in_cr9);
  }
  if (!in_NG) {
    puVar5 = (undefined4 *)((int)puVar5 + -0x29);
  }
  if (in_CY) {
    *(undefined4 **)param_1 = in_lr;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = unaff_r5;
    param_1[-5] = param_4;
  }
  if (in_ZR == false) {
    if (in_NG == in_OV) {
      if (((param_1 != (undefined4 *)0x41) && (param_1 != (undefined4 *)0x42)) &&
         (param_1 != (undefined4 *)0x43)) goto LAB_000000e2;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_00000002) {
        if (param_1 != (undefined4 *)UndefinedInstruction) {
          if (param_1 != (undefined4 *)0x6) goto LAB_000000e2;
          goto LAB_000000ac;
        }
        uVar2 = FUN_000000a2(puVar6[5],puVar5,param_3);
        goto LAB_000000ae;
      }
    }
    uVar3 = FUN_000000dc();
    *(undefined2 *)(unaff_r5 + 2) = uVar3;
  }
  else {
LAB_000000ac:
    uVar2 = (ushort)*(byte *)((int)puVar6 + 0x13);
LAB_000000ae:
    *(ushort *)(unaff_r5 + 2) = uVar2;
    FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,puVar6[5]);
  }
LAB_000000e2:
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void DataAbort(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
              undefined param_5,undefined4 param_6,undefined4 param_7,code *UNRECOVERED_JUMPTABLE,
              undefined param_9)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  if (in_ZR) {
    uVar4 = unaff_r8 & (uint)param_2 & (uint)param_2;
    param_3 = uVar4 & (uVar4 >> 10 | uVar4 << 0x16);
    *(uint *)uVar4 = uVar4;
    param_1 = (undefined4 *)
              (0x38U - ((int)param_3 >>
                       ((unaff_r8 ^ uVar4 & (uint)unaff_r4 >> (uVar4 & 0xff)) & 0xff)) & param_3 &
              unaff_r8);
    unaff_r11 = (uint)register0x00000054 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  else {
    *in_lr = 0x48;
    in_lr[-1] = unaff_r11;
    in_lr[-2] = unaff_r8;
    in_lr[-3] = param_4;
    *(undefined4 **)(in_lr + -4) = param_1;
  }
  if (in_NG) {
    param_3 = param_3 & 0xffff | 0x201c0000;
  }
  puVar6 = unaff_r4;
  if (!in_ZR) {
    in_lr = (undefined4 *)*unaff_r4;
    unaff_r11 = unaff_r4[-1];
    unaff_r5 = unaff_r4[-2];
    puVar6 = (undefined4 *)unaff_r4[-3];
    param_3 = unaff_r4[-4];
    param_2 = (undefined4 *)unaff_r4[-5];
    param_1 = (undefined4 *)unaff_r4[-6];
  }
  if (!in_OV) {
    in_CY = (bool)((byte)((uint)param_1 >> ((uint)param_1 & 0xff) - 1) & 1);
    param_3 = (uint)param_1 ^ (uint)param_1 >> ((uint)param_1 & 0xff);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  puVar5 = param_2;
  if (!in_ZR) {
    puVar5 = param_2 + 0x60;
    coprocessor_store(8,in_cr7,param_2);
  }
  if (!in_OV) {
    in_CY = param_1 <= (undefined4 *)((int)param_1 * 0x4000000);
    in_OV = SBORROW4((int)(undefined4 *)((int)param_1 * 0x4000000),(int)param_1);
    puVar5 = (undefined4 *)((int)param_1 * 0x3ffffff);
    in_NG = (int)puVar5 < 0;
    in_ZR = puVar5 == (undefined4 *)0x0;
  }
  if (!in_OV) {
    param_3 = unaff_r6 + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!in_OV) {
    uVar4 = (uint)param_1 >> 0x10 | (int)param_1 << 0x10;
    uVar1 = (int)param_1 + (uint)!in_CY;
    in_CY = uVar1 <= uVar4;
    in_OV = SBORROW4(uVar4,uVar1);
    unaff_r7 = uVar4 - uVar1;
    in_NG = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!in_ZR) {
    param_1 = param_1 + -0x62;
    coprocessor_load(8,in_cr7,param_1);
  }
  software_interrupt(0xfef7ff);
  if (!in_ZR) {
    coprocessor_store(8,in_cr7,param_1 + -0x60);
  }
  if (in_CY && !in_ZR) {
    puVar5 = (undefined4 *)(unaff_r8 + (int)puVar5 * 0x2000000 + (uint)in_CY);
  }
  if (!in_OV) {
    *puVar5 = 0x78;
    puVar5[-1] = unaff_r7;
    puVar5[-2] = unaff_r6;
    puVar5[-3] = unaff_r5;
    puVar5[-4] = param_4;
    *(undefined4 **)(puVar5 + -5) = param_1;
    puVar5 = puVar5 + -6;
  }
  if (in_ZR) {
    coprocessor_function(6,4,2,in_cr0,in_cr9,in_cr9);
  }
  if (!in_NG) {
    puVar5 = (undefined4 *)((int)puVar5 + -0x29);
  }
  if (in_CY) {
    *(undefined4 **)param_1 = in_lr;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = unaff_r5;
    param_1[-5] = param_4;
  }
  if (in_ZR == false) {
    if (in_NG == in_OV) {
      if (((param_1 != (undefined4 *)0x41) && (param_1 != (undefined4 *)0x42)) &&
         (param_1 != (undefined4 *)0x43)) goto LAB_000000e2;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_00000002) {
        if (param_1 != (undefined4 *)UndefinedInstruction) {
          if (param_1 != (undefined4 *)0x6) goto LAB_000000e2;
          goto LAB_000000ac;
        }
        uVar2 = FUN_000000a2(puVar6[5],puVar5,param_3);
        goto LAB_000000ae;
      }
    }
    uVar3 = FUN_000000dc();
    *(undefined2 *)(unaff_r5 + 2) = uVar3;
  }
  else {
LAB_000000ac:
    uVar2 = (ushort)*(byte *)((int)puVar6 + 0x13);
LAB_000000ae:
    *(ushort *)(unaff_r5 + 2) = uVar2;
    FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,puVar6[5]);
  }
LAB_000000e2:
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void NotUsed(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
            undefined param_5,undefined4 param_6,undefined4 param_7,code *UNRECOVERED_JUMPTABLE,
            undefined param_9)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  if (in_ZR) {
    uVar4 = (uint)param_1 & (uint)param_2;
    param_3 = uVar4 & (uVar4 >> 10 | uVar4 << 0x16);
    *(uint *)uVar4 = uVar4;
    param_1 = (undefined4 *)
              (0x38U - ((int)param_3 >>
                       ((unaff_r8 ^ uVar4 & (uint)unaff_r4 >> (uVar4 & 0xff)) & 0xff)) & param_3 &
              unaff_r8);
    unaff_r11 = (uint)register0x00000054 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  else {
    *in_lr = 0x48;
    in_lr[-1] = unaff_r11;
    in_lr[-2] = unaff_r8;
    in_lr[-3] = param_4;
    *(undefined4 **)(in_lr + -4) = param_1;
  }
  if (in_NG) {
    param_3 = param_3 & 0xffff | 0x201c0000;
  }
  puVar6 = unaff_r4;
  if (!in_ZR) {
    in_lr = (undefined4 *)*unaff_r4;
    unaff_r11 = unaff_r4[-1];
    unaff_r5 = unaff_r4[-2];
    puVar6 = (undefined4 *)unaff_r4[-3];
    param_3 = unaff_r4[-4];
    param_2 = (undefined4 *)unaff_r4[-5];
    param_1 = (undefined4 *)unaff_r4[-6];
  }
  if (!in_OV) {
    in_CY = (bool)((byte)((uint)param_1 >> ((uint)param_1 & 0xff) - 1) & 1);
    param_3 = (uint)param_1 ^ (uint)param_1 >> ((uint)param_1 & 0xff);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  puVar5 = param_2;
  if (!in_ZR) {
    puVar5 = param_2 + 0x60;
    coprocessor_store(8,in_cr7,param_2);
  }
  if (!in_OV) {
    in_CY = param_1 <= (undefined4 *)((int)param_1 * 0x4000000);
    in_OV = SBORROW4((int)(undefined4 *)((int)param_1 * 0x4000000),(int)param_1);
    puVar5 = (undefined4 *)((int)param_1 * 0x3ffffff);
    in_NG = (int)puVar5 < 0;
    in_ZR = puVar5 == (undefined4 *)0x0;
  }
  if (!in_OV) {
    param_3 = unaff_r6 + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!in_OV) {
    uVar4 = (uint)param_1 >> 0x10 | (int)param_1 << 0x10;
    uVar1 = (int)param_1 + (uint)!in_CY;
    in_CY = uVar1 <= uVar4;
    in_OV = SBORROW4(uVar4,uVar1);
    unaff_r7 = uVar4 - uVar1;
    in_NG = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!in_ZR) {
    param_1 = param_1 + -0x62;
    coprocessor_load(8,in_cr7,param_1);
  }
  software_interrupt(0xfef7ff);
  if (!in_ZR) {
    coprocessor_store(8,in_cr7,param_1 + -0x60);
  }
  if (in_CY && !in_ZR) {
    puVar5 = (undefined4 *)(unaff_r8 + (int)puVar5 * 0x2000000 + (uint)in_CY);
  }
  if (!in_OV) {
    *puVar5 = 0x78;
    puVar5[-1] = unaff_r7;
    puVar5[-2] = unaff_r6;
    puVar5[-3] = unaff_r5;
    puVar5[-4] = param_4;
    *(undefined4 **)(puVar5 + -5) = param_1;
    puVar5 = puVar5 + -6;
  }
  if (in_ZR) {
    coprocessor_function(6,4,2,in_cr0,in_cr9,in_cr9);
  }
  if (!in_NG) {
    puVar5 = (undefined4 *)((int)puVar5 + -0x29);
  }
  if (in_CY) {
    *(undefined4 **)param_1 = in_lr;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = unaff_r5;
    param_1[-5] = param_4;
  }
  if (in_ZR == false) {
    if (in_NG == in_OV) {
      if (((param_1 != (undefined4 *)0x41) && (param_1 != (undefined4 *)0x42)) &&
         (param_1 != (undefined4 *)0x43)) goto LAB_000000e2;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_00000002) {
        if (param_1 != (undefined4 *)UndefinedInstruction) {
          if (param_1 != (undefined4 *)0x6) goto LAB_000000e2;
          goto LAB_000000ac;
        }
        uVar2 = FUN_000000a2(puVar6[5],puVar5,param_3);
        goto LAB_000000ae;
      }
    }
    uVar3 = FUN_000000dc();
    *(undefined2 *)(unaff_r5 + 2) = uVar3;
  }
  else {
LAB_000000ac:
    uVar2 = (ushort)*(byte *)((int)puVar6 + 0x13);
LAB_000000ae:
    *(ushort *)(unaff_r5 + 2) = uVar2;
    FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,puVar6[5]);
  }
LAB_000000e2:
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void IRQ(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined param_5,
        undefined4 param_6,undefined4 param_7,code *UNRECOVERED_JUMPTABLE,undefined param_9)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  if (in_ZR) {
    param_3 = (uint)param_1 & ((uint)param_1 >> 10 | (int)param_1 << 0x16);
    *(undefined4 **)param_1 = param_1;
    param_1 = (undefined4 *)
              (0x38U - ((int)param_3 >>
                       ((unaff_r8 ^ (uint)param_1 & (uint)unaff_r4 >> ((uint)param_1 & 0xff)) & 0xff
                       )) & param_3 & unaff_r8);
    unaff_r11 = (uint)register0x00000054 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  else {
    *in_lr = 0x48;
    in_lr[-1] = unaff_r11;
    in_lr[-2] = unaff_r8;
    in_lr[-3] = param_4;
    *(undefined4 **)(in_lr + -4) = param_1;
  }
  if (in_NG) {
    param_3 = param_3 & 0xffff | 0x201c0000;
  }
  puVar6 = unaff_r4;
  if (!in_ZR) {
    in_lr = (undefined4 *)*unaff_r4;
    unaff_r11 = unaff_r4[-1];
    unaff_r5 = unaff_r4[-2];
    puVar6 = (undefined4 *)unaff_r4[-3];
    param_3 = unaff_r4[-4];
    param_2 = (undefined4 *)unaff_r4[-5];
    param_1 = (undefined4 *)unaff_r4[-6];
  }
  if (!in_OV) {
    in_CY = (bool)((byte)((uint)param_1 >> ((uint)param_1 & 0xff) - 1) & 1);
    param_3 = (uint)param_1 ^ (uint)param_1 >> ((uint)param_1 & 0xff);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  puVar5 = param_2;
  if (!in_ZR) {
    puVar5 = param_2 + 0x60;
    coprocessor_store(8,in_cr7,param_2);
  }
  if (!in_OV) {
    in_CY = param_1 <= (undefined4 *)((int)param_1 * 0x4000000);
    in_OV = SBORROW4((int)(undefined4 *)((int)param_1 * 0x4000000),(int)param_1);
    puVar5 = (undefined4 *)((int)param_1 * 0x3ffffff);
    in_NG = (int)puVar5 < 0;
    in_ZR = puVar5 == (undefined4 *)0x0;
  }
  if (!in_OV) {
    param_3 = unaff_r6 + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!in_OV) {
    uVar1 = (uint)param_1 >> 0x10 | (int)param_1 << 0x10;
    uVar2 = (int)param_1 + (uint)!in_CY;
    in_CY = uVar2 <= uVar1;
    in_OV = SBORROW4(uVar1,uVar2);
    unaff_r7 = uVar1 - uVar2;
    in_NG = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!in_ZR) {
    param_1 = param_1 + -0x62;
    coprocessor_load(8,in_cr7,param_1);
  }
  software_interrupt(0xfef7ff);
  if (!in_ZR) {
    coprocessor_store(8,in_cr7,param_1 + -0x60);
  }
  if (in_CY && !in_ZR) {
    puVar5 = (undefined4 *)(unaff_r8 + (int)puVar5 * 0x2000000 + (uint)in_CY);
  }
  if (!in_OV) {
    *puVar5 = 0x78;
    puVar5[-1] = unaff_r7;
    puVar5[-2] = unaff_r6;
    puVar5[-3] = unaff_r5;
    puVar5[-4] = param_4;
    *(undefined4 **)(puVar5 + -5) = param_1;
    puVar5 = puVar5 + -6;
  }
  if (in_ZR) {
    coprocessor_function(6,4,2,in_cr0,in_cr9,in_cr9);
  }
  if (!in_NG) {
    puVar5 = (undefined4 *)((int)puVar5 + -0x29);
  }
  if (in_CY) {
    *(undefined4 **)param_1 = in_lr;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = unaff_r5;
    param_1[-5] = param_4;
  }
  if (in_ZR == false) {
    if (in_NG == in_OV) {
      if (((param_1 != (undefined4 *)0x41) && (param_1 != (undefined4 *)0x42)) &&
         (param_1 != (undefined4 *)0x43)) goto LAB_000000e2;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_00000002) {
        if (param_1 != (undefined4 *)UndefinedInstruction) {
          if (param_1 != (undefined4 *)0x6) goto LAB_000000e2;
          goto LAB_000000ac;
        }
        uVar3 = FUN_000000a2(puVar6[5],puVar5,param_3);
        goto LAB_000000ae;
      }
    }
    uVar4 = FUN_000000dc();
    *(undefined2 *)(unaff_r5 + 2) = uVar4;
  }
  else {
LAB_000000ac:
    uVar3 = (ushort)*(byte *)((int)puVar6 + 0x13);
LAB_000000ae:
    *(ushort *)(unaff_r5 + 2) = uVar3;
    FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,puVar6[5]);
  }
LAB_000000e2:
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FIQ(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4,undefined param_5,
        undefined4 param_6,undefined4 param_7,code *UNRECOVERED_JUMPTABLE,undefined param_9)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 *unaff_r4;
  undefined4 *puVar6;
  uint unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint unaff_r8;
  uint unaff_r11;
  undefined4 in_r12;
  undefined4 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr7;
  undefined4 in_cr9;
  
  if (in_ZR) {
    param_3 = (uint)param_1 & ((uint)param_1 >> 10 | (int)param_1 << 0x16);
    *(undefined4 **)param_1 = param_1;
    param_1 = (undefined4 *)
              (0x38U - ((int)param_3 >>
                       ((unaff_r8 ^ (uint)param_1 & (uint)unaff_r4 >> ((uint)param_1 & 0xff)) & 0xff
                       )) & param_3 & unaff_r8);
    unaff_r11 = (uint)register0x00000054 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  else {
    *in_lr = 0x48;
    in_lr[-1] = unaff_r11;
    in_lr[-2] = unaff_r8;
    in_lr[-3] = param_4;
    *(undefined4 **)(in_lr + -4) = param_1;
  }
  if (in_NG) {
    param_3 = param_3 & 0xffff | 0x201c0000;
  }
  puVar6 = unaff_r4;
  if (!in_ZR) {
    in_lr = (undefined4 *)*unaff_r4;
    unaff_r11 = unaff_r4[-1];
    unaff_r5 = unaff_r4[-2];
    puVar6 = (undefined4 *)unaff_r4[-3];
    param_3 = unaff_r4[-4];
    param_2 = (undefined4 *)unaff_r4[-5];
    param_1 = (undefined4 *)unaff_r4[-6];
  }
  if (!in_OV) {
    in_CY = (bool)((byte)((uint)param_1 >> ((uint)param_1 & 0xff) - 1) & 1);
    param_3 = (uint)param_1 ^ (uint)param_1 >> ((uint)param_1 & 0xff);
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  puVar5 = param_2;
  if (!in_ZR) {
    puVar5 = param_2 + 0x60;
    coprocessor_store(8,in_cr7,param_2);
  }
  if (!in_OV) {
    in_CY = param_1 <= (undefined4 *)((int)param_1 * 0x4000000);
    in_OV = SBORROW4((int)(undefined4 *)((int)param_1 * 0x4000000),(int)param_1);
    puVar5 = (undefined4 *)((int)param_1 * 0x3ffffff);
    in_NG = (int)puVar5 < 0;
    in_ZR = puVar5 == (undefined4 *)0x0;
  }
  if (!in_OV) {
    param_3 = unaff_r6 + (uint)in_CY;
    in_CY = CARRY4((uint)param_1,param_3);
    in_OV = SCARRY4((int)param_1,param_3);
    param_3 = (int)param_1 + param_3;
    in_NG = (int)param_3 < 0;
    in_ZR = param_3 == 0;
  }
  if (!in_OV) {
    uVar1 = (uint)param_1 >> 0x10 | (int)param_1 << 0x10;
    uVar2 = (int)param_1 + (uint)!in_CY;
    in_CY = uVar2 <= uVar1;
    in_OV = SBORROW4(uVar1,uVar2);
    unaff_r7 = uVar1 - uVar2;
    in_NG = unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
  }
  if (!in_ZR) {
    param_1 = param_1 + -0x62;
    coprocessor_load(8,in_cr7,param_1);
  }
  software_interrupt(0xfef7ff);
  if (!in_ZR) {
    coprocessor_store(8,in_cr7,param_1 + -0x60);
  }
  if (in_CY && !in_ZR) {
    puVar5 = (undefined4 *)(unaff_r8 + (int)puVar5 * 0x2000000 + (uint)in_CY);
  }
  if (!in_OV) {
    *puVar5 = 0x78;
    puVar5[-1] = unaff_r7;
    puVar5[-2] = unaff_r6;
    puVar5[-3] = unaff_r5;
    puVar5[-4] = param_4;
    *(undefined4 **)(puVar5 + -5) = param_1;
    puVar5 = puVar5 + -6;
  }
  if (in_ZR) {
    coprocessor_function(6,4,2,in_cr0,in_cr9,in_cr9);
  }
  if (!in_NG) {
    puVar5 = (undefined4 *)((int)puVar5 + -0x29);
  }
  if (in_CY) {
    *(undefined4 **)param_1 = in_lr;
    *(BADSPACEBASE **)(param_1 + -1) = register0x00000054;
    param_1[-2] = in_r12;
    param_1[-3] = unaff_r11;
    param_1[-4] = unaff_r5;
    param_1[-5] = param_4;
  }
  if (in_ZR == false) {
    if (in_NG == in_OV) {
      if (((param_1 != (undefined4 *)0x41) && (param_1 != (undefined4 *)0x42)) &&
         (param_1 != (undefined4 *)0x43)) goto LAB_000000e2;
    }
    else {
      if (param_1 != (undefined4 *)&DAT_00000002) {
        if (param_1 != (undefined4 *)UndefinedInstruction) {
          if (param_1 != (undefined4 *)0x6) goto LAB_000000e2;
          goto LAB_000000ac;
        }
        uVar3 = FUN_000000a2(puVar6[5],puVar5,param_3);
        goto LAB_000000ae;
      }
    }
    uVar4 = FUN_000000dc();
    *(undefined2 *)(unaff_r5 + 2) = uVar4;
  }
  else {
LAB_000000ac:
    uVar3 = (ushort)*(byte *)((int)puVar6 + 0x13);
LAB_000000ae:
    *(ushort *)(unaff_r5 + 2) = uVar3;
    FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,puVar6[5]);
  }
LAB_000000e2:
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000000a2(void)

{
  undefined2 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_000000a2();
  *(undefined2 *)(unaff_r5 + 2) = uVar1;
  FUN_000000b6((uint)*(ushort *)(unaff_r5 + 6) + unaff_r6,*(undefined4 *)(unaff_r4 + 0x14));
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000000b6(void)

{
  int unaff_r5;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000000b6();
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000000dc(void)

{
  undefined2 uVar1;
  int unaff_r5;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_000000dc();
  *(undefined2 *)(unaff_r5 + 2) = uVar1;
  *(undefined *)((uint)*(ushort *)(unaff_r5 + 4) + unaff_r6 + 1) = *(undefined *)(unaff_r5 + 2);
  *(char *)(unaff_r6 + 1) = *(char *)(unaff_r6 + 1) + *(char *)(unaff_r5 + 2);
  *(short *)(unaff_r5 + 8) =
       *(short *)(unaff_r5 + 6) + *(short *)(unaff_r5 + 2) + *(short *)(unaff_r5 + 8);
                    // WARNING: Could not recover jumptable at 0x00000102. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000174(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 == '\x02') {
    iVar1 = FUN_000001b2(param_3);
  }
  else {
    iVar1 = FUN_00000184(param_3);
  }
  *(short *)(param_2 + 6) = (short)((uint)*(ushort *)(param_2 + 4) - iVar1);
  uVar2 = ((uint)*(ushort *)(param_2 + 4) - iVar1) - 2 & 0xffff;
  *(short *)(param_2 + 4) = (short)uVar2;
  *(char *)(param_1 + uVar2) = *param_2;
  *(undefined *)((uint)*(ushort *)(param_2 + 4) + param_1 + 1) = (char)iVar1;
  FUN_000001a6(param_1,param_2,param_3);
  return;
}



void FUN_00000184(void)

{
  int iVar1;
  uint uVar2;
  undefined *unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_00000184();
  *(short *)(unaff_r4 + 6) = (short)((uint)*(ushort *)(unaff_r4 + 4) - iVar1);
  uVar2 = ((uint)*(ushort *)(unaff_r4 + 4) - iVar1) - 2 & 0xffff;
  *(short *)(unaff_r4 + 4) = (short)uVar2;
  *(undefined *)(unaff_r5 + uVar2) = *unaff_r4;
  *(undefined *)((uint)*(ushort *)(unaff_r4 + 4) + unaff_r5 + 1) = (char)iVar1;
  FUN_000001a6();
  return;
}



void FUN_000001a6(void)

{
  FUN_000001a6();
  return;
}



void FUN_000001b2(void)

{
  int iVar1;
  uint uVar2;
  undefined *unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_000001b2();
  *(short *)(unaff_r4 + 6) = (short)((uint)*(ushort *)(unaff_r4 + 4) - iVar1);
  uVar2 = ((uint)*(ushort *)(unaff_r4 + 4) - iVar1) - 2 & 0xffff;
  *(short *)(unaff_r4 + 4) = (short)uVar2;
  *(undefined *)(unaff_r5 + uVar2) = *unaff_r4;
  *(undefined *)((uint)*(ushort *)(unaff_r4 + 4) + unaff_r5 + 1) = (char)iVar1;
  FUN_000001a6();
  return;
}



void FUN_000001e6(uint param_1)

{
  if ((int)param_1 < 0) {
    param_1 = ~param_1;
  }
  FUN_000001f0(param_1 << 1);
  return;
}



void FUN_000001f0(void)

{
  FUN_000001f0();
  return;
}



undefined8
FUN_0000021a(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int *unaff_r7;
  
  while (iVar1 = FUN_0000021a(param_1,param_2), iVar1 == 0) {
LAB_00000260:
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0x1c;
      unaff_r6 = unaff_r6 + 1;
      if (*unaff_r7 <= unaff_r6) goto LAB_0000026a;
    } while ((uint)*(byte *)(param_1 + 0x1d) < (uint)*(ushort *)(unaff_r5 + 2));
    param_2 = (uint)*(ushort *)(unaff_r5 + 6) + param_6;
    param_1 = param_1 + 0x1e;
  }
  uVar2 = (uint)*(ushort *)(unaff_r5 + 2);
  if (*(char *)(DAT_00000278 + 3) == -0x5f) {
    if (uVar2 == (uint)*(byte *)(unaff_r4 + 1)) {
      unaff_r6 = unaff_r6 + 1;
      if (unaff_r6 == *unaff_r7) {
LAB_0000026a:
        unaff_r6 = -1;
        goto LAB_0000025a;
      }
      unaff_r4 = unaff_r4 + 0x1c;
    }
    if (uVar2 < *(byte *)(unaff_r4 + 1)) {
      *(short *)(unaff_r5 + 0xc) =
           ((ushort)*(byte *)(unaff_r4 + 1) - *(ushort *)(unaff_r5 + 2)) +
           *(short *)(unaff_r5 + 0xc);
    }
  }
  else {
    if (uVar2 < (uint)*(byte *)(unaff_r4 + 1)) goto LAB_00000260;
  }
  *(short *)(unaff_r5 + 0xc) = *(short *)(unaff_r5 + 0xc) + (ushort)*(byte *)(unaff_r4 + 0x13);
LAB_0000025a:
  return CONCAT44(unaff_r6,param_5);
}



undefined4 FUN_000002a4(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_r4;
  
  uVar2 = FUN_000002a4();
  cVar1 = *(char *)(unaff_r4 + 0x13);
  if (cVar1 == '\x01') {
    **(undefined **)(unaff_r4 + 0x14) = (char)uVar2;
  }
  else {
    if (cVar1 == '\x02') {
      **(undefined2 **)(unaff_r4 + 0x14) = (short)uVar2;
    }
    else {
      if (cVar1 != '\x04') {
        return 0;
      }
      **(undefined4 **)(unaff_r4 + 0x14) = uVar2;
    }
  }
  return 1;
}



undefined4 FUN_000002e8(void)

{
  FUN_000002e8();
  return 1;
}



int FUN_0000037a(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_0000037a();
  iVar2 = 4;
  puVar3 = (undefined *)((uint)*(ushort *)(unaff_r6 + 6) + unaff_r5);
  do {
    if (iVar2 <= iVar1) {
      *puVar3 = (char)((uint)unaff_r4 >> 0x18);
      puVar3 = puVar3 + 1;
    }
    unaff_r4 = unaff_r4 << 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar1;
}



int FUN_000003a0(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  iVar2 = FUN_000003a0();
  iVar1 = 4;
  puVar3 = (undefined *)((uint)*(ushort *)(unaff_r6 + 6) + unaff_r5);
  do {
    if (iVar1 <= iVar2) {
      *puVar3 = (char)((uint)unaff_r4 >> 0x18);
      puVar3 = puVar3 + 1;
    }
    unaff_r4 = unaff_r4 << 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return iVar2;
}



void FUN_000003c8(void)

{
  undefined uVar1;
  int iVar2;
  undefined *unaff_r4;
  ushort *unaff_r5;
  undefined4 unaff_r6;
  
  uVar1 = FUN_000003c8();
  unaff_r4[8] = uVar1;
  iVar2 = FUN_000003d4(0,3,DAT_000003f8);
  *unaff_r4 = (char)iVar2;
  if (iVar2 != 0) {
    FUN_000003e0(iVar2,(uint)*unaff_r5);
  }
  *DAT_000003fc = unaff_r6;
  return;
}



void FUN_000003d4(void)

{
  int iVar1;
  undefined *unaff_r4;
  ushort *unaff_r5;
  undefined4 unaff_r6;
  
  iVar1 = FUN_000003d4();
  *unaff_r4 = (char)iVar1;
  if (iVar1 != 0) {
    FUN_000003e0(iVar1,(uint)*unaff_r5);
  }
  *DAT_000003fc = unaff_r6;
  return;
}



void FUN_000003e0(void)

{
  undefined4 unaff_r6;
  
  FUN_000003e0();
  *DAT_000003fc = unaff_r6;
  return;
}



undefined4 FUN_00000428(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar8;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  byte param_7;
  undefined param_11;
  undefined4 param_7_00;
  ushort uStack0000000a;
  ushort param_8;
  undefined4 param_8_00;
  ushort uStack0000000e;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar4 = FUN_00000428();
  if (iVar4 != 0) {
    param_11 = 2;
    iVar4 = FUN_0000043a();
    if ((iVar4 != 0) && (iVar4 = FUN_00000446(), iVar4 == 0)) {
      param_11 = 4;
      iVar4 = FUN_00000458();
      if (((iVar4 != 0) &&
          ((((uint)uStack0000000a == (uint)unaff_r4[8] &&
            (iVar4 = FUN_00000474((uint)uStack0000000e + unaff_r5,unaff_r4 + 9), iVar4 != 0)) &&
           (iVar4 = FUN_00000484(), uVar1 = param_8, iVar4 != 0)))) &&
         (((unaff_r4[3] = param_7, param_7 == 0xa0 || (param_7 == 0xa1)) || (param_7 == 0xa3)))) {
        param_11 = 2;
        iVar4 = FUN_000004b6();
        if (iVar4 != 0) {
          uVar5 = FUN_000004c2();
          *(undefined4 *)(unaff_r4 + 4) = uVar5;
          iVar4 = FUN_000004cc();
          if (((iVar4 != 0) && (iVar4 = FUN_000004d8(), uVar2 = uStack0000000e, iVar4 == 0)) &&
             ((iVar4 = FUN_000004ea(), iVar4 != 0 && (iVar4 = FUN_000004f6(), iVar4 == 0)))) {
            in_stack_0000001c = (uint)uStack0000000e;
            param_11 = 0x30;
            iVar4 = FUN_0000050e();
            if (iVar4 != 0) {
              param_5_00 = CONCAT11(unaff_r6,unaff_r6);
              param_5_01 = CONCAT22(uVar1,param_5_00);
              do {
                if (uStack00000012 <= param_9) {
                  if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
                    param_5_00 = CONCAT11(unaff_r6,param_5);
                    param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
                    iVar4 = FUN_000005d6((uint)uStack00000012);
                    FUN_000005e4(iVar4);
                    *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
                    *(undefined *)(iVar4 + (uint)uVar2) = param_5;
                    *(undefined *)(iVar4 + (uint)uStack0000000e) = bStack00000001;
                    bVar3 = *unaff_r4;
                  }
                  else {
                    param_10 = param_10 + uStack00000012 + 6;
                    if (0x5c0 < param_10) goto LAB_000005cc;
                    iVar4 = FUN_00000656();
                    iVar8 = 0;
                    param_9 = uStack0000000e + 9;
                    while (uVar7 = in_stack_0000001c, iVar8 < (int)(uint)bStack00000001) {
                      FUN_0000067c(iVar4,&stack0x00000008,
                                   (uint)*(ushort *)(&stack0x00000024 + iVar8 * 2));
                      iVar8 = iVar8 + 1;
                    }
                    param_7 = 0x30;
                    param_8 = uStack0000000e + 9;
                    FUN_00000696(iVar4,&stack0x00000008);
                    iVar8 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
                    uVar6 = (uint)param_8 - (iVar8 + 8) & 0xffff;
                    param_8 = (ushort)uVar6;
                    FUN_000006bc(uVar6 + iVar4,(uVar7 - (iVar8 + 8)) + unaff_r5 + 1);
                    param_7 = 0xa2;
                    FUN_000006ca(iVar4,&stack0x00000008);
                    uVar7 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
                    param_8 = (ushort)uVar7;
                    FUN_000006ea(uVar7 + iVar4,
                                 ((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
                    param_7 = 0x30;
                    FUN_000006f6(iVar4,&stack0x00000008);
                    if (param_8 != 0) {
                      FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
                    }
                    bVar3 = *DAT_00000728;
                  }
                  FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
                  return 1;
                }
                in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
                param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
                uVar7 = param_5_01 & 0xffff0000;
                param_5_01 = uVar7 | (uint)param_5_00;
                if (0x14 < in_stack_00000020) {
LAB_000005cc:
                  param_5_01 = CONCAT31(param_5_01._1_3_,1);
                  goto LAB_000005ce;
                }
                param_11 = 0x30;
                iVar4 = FUN_0000053c();
                if (iVar4 == 0) {
                  return 0;
                }
                param_11 = 6;
                iVar4 = FUN_0000054e();
                if (iVar4 == 0) {
                  return 0;
                }
                iVar4 = FUN_0000055a();
                if (iVar4 < 0) {
                  bVar3 = 2;
LAB_00000650:
                  param_5_01 = uVar7 | (uint)param_5_00 & 0xffffff00 | (uint)bVar3;
                  goto LAB_000005d2;
                }
                *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
                param_11 = unaff_r6;
                iVar8 = FUN_0000057a();
                if (iVar8 == 0) {
                  return 0;
                }
                if (unaff_r4[3] == 0xa3) {
                  in_stack_0000004c = iVar4 * 0x1c;
                  if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
                    bVar3 = 3;
                    goto LAB_00000650;
                  }
                  if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
                    bVar3 = 4;
                    goto LAB_00000650;
                  }
                  iVar4 = FUN_00000636();
                  if (iVar4 == 0) {
                    bVar3 = 5;
                    goto LAB_00000650;
                  }
                  if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
                    uVar5 = FUN_00000598(1);
                    return uVar5;
                  }
                }
                else {
                  if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
                    FUN_00000598(0);
                  }
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_0000043a(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar8;
  undefined uStack00000000;
  ushort uStack00000000_00;
  byte bStack00000001;
  uint uStack00000000_01;
  byte bStack00000008;
  undefined uStack00000009;
  undefined4 in_stack_00000008;
  ushort uStack0000000a;
  ushort uStack0000000c;
  undefined4 in_stack_0000000c;
  ushort uStack0000000e;
  ushort uStack00000010;
  undefined4 in_stack_00000010;
  ushort uStack00000012;
  ushort in_stack_00000014;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar4 = FUN_0000043a();
  if ((iVar4 != 0) && (iVar4 = FUN_00000446(), iVar4 == 0)) {
    uStack00000009 = 4;
    iVar4 = FUN_00000458();
    if (((iVar4 != 0) &&
        ((((uint)uStack0000000a == (uint)unaff_r4[8] &&
          (iVar4 = FUN_00000474((uint)uStack0000000e + unaff_r5,unaff_r4 + 9), iVar4 != 0)) &&
         (iVar4 = FUN_00000484(), uVar1 = uStack0000000c, iVar4 != 0)))) &&
       (((unaff_r4[3] = bStack00000008, bStack00000008 == 0xa0 || (bStack00000008 == 0xa1)) ||
        (bStack00000008 == 0xa3)))) {
      uStack00000009 = 2;
      iVar4 = FUN_000004b6();
      if (iVar4 != 0) {
        uVar5 = FUN_000004c2();
        *(undefined4 *)(unaff_r4 + 4) = uVar5;
        iVar4 = FUN_000004cc();
        if (((iVar4 != 0) && (iVar4 = FUN_000004d8(), uVar2 = uStack0000000e, iVar4 == 0)) &&
           ((iVar4 = FUN_000004ea(), iVar4 != 0 && (iVar4 = FUN_000004f6(), iVar4 == 0)))) {
          in_stack_0000001c = (uint)uStack0000000e;
          uStack00000009 = 0x30;
          iVar4 = FUN_0000050e();
          if (iVar4 != 0) {
            uStack00000000_00 = CONCAT11(unaff_r6,unaff_r6);
            uStack00000000_01 = CONCAT22(uVar1,uStack00000000_00);
            do {
              if (uStack00000012 <= uStack00000010) {
                if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
                  uStack00000000_00 = CONCAT11(unaff_r6,uStack00000000);
                  uStack00000000_01 = uStack00000000_01 & 0xffff0000 | (uint)uStack00000000_00;
LAB_000005d2:
                  iVar4 = FUN_000005d6((uint)uStack00000012);
                  FUN_000005e4(iVar4);
                  *(undefined *)(iVar4 + (uStack00000000_01 >> 0x10)) = 0xa2;
                  *(undefined *)(iVar4 + (uint)uVar2) = uStack00000000;
                  *(undefined *)(iVar4 + (uint)uStack0000000e) = bStack00000001;
                  bVar3 = *unaff_r4;
                }
                else {
                  in_stack_00000014 = in_stack_00000014 + uStack00000012 + 6;
                  if (0x5c0 < in_stack_00000014) goto LAB_000005cc;
                  iVar4 = FUN_00000656();
                  iVar8 = 0;
                  uStack00000010 = uStack0000000e + 9;
                  while (uVar7 = in_stack_0000001c, iVar8 < (int)(uint)bStack00000001) {
                    FUN_0000067c(iVar4,&stack0x00000008,
                                 (uint)*(ushort *)(&stack0x00000024 + iVar8 * 2));
                    iVar8 = iVar8 + 1;
                  }
                  bStack00000008 = 0x30;
                  uStack0000000c = uStack0000000e + 9;
                  FUN_00000696(iVar4,&stack0x00000008);
                  iVar8 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
                  uVar6 = (uint)uStack0000000c - (iVar8 + 8) & 0xffff;
                  uStack0000000c = (ushort)uVar6;
                  FUN_000006bc(uVar6 + iVar4,(uVar7 - (iVar8 + 8)) + unaff_r5 + 1);
                  bStack00000008 = 0xa2;
                  FUN_000006ca(iVar4,&stack0x00000008);
                  uVar7 = (uint)uStack0000000c - ((uint)DAT_00000728[8] + 5) & 0xffff;
                  uStack0000000c = (ushort)uVar7;
                  FUN_000006ea(uVar7 + iVar4,
                               ((uStack00000000_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) +
                               unaff_r5);
                  bStack00000008 = 0x30;
                  FUN_000006f6(iVar4,&stack0x00000008);
                  if (uStack0000000c != 0) {
                    FUN_0000070c(iVar4,(uint)uStack0000000c + iVar4,
                                 (uint)uStack00000010 - (uint)uStack0000000c);
                  }
                  bVar3 = *DAT_00000728;
                }
                FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
                return 1;
              }
              in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
              uStack00000000_00 = CONCAT11((char)in_stack_00000020,uStack00000000);
              uVar7 = uStack00000000_01 & 0xffff0000;
              uStack00000000_01 = uVar7 | (uint)uStack00000000_00;
              if (0x14 < in_stack_00000020) {
LAB_000005cc:
                uStack00000000_01 = CONCAT31(uStack00000000_01._1_3_,1);
                goto LAB_000005ce;
              }
              uStack00000009 = 0x30;
              iVar4 = FUN_0000053c();
              if (iVar4 == 0) {
                return 0;
              }
              uStack00000009 = 6;
              iVar4 = FUN_0000054e();
              if (iVar4 == 0) {
                return 0;
              }
              iVar4 = FUN_0000055a();
              if (iVar4 < 0) {
                bVar3 = 2;
LAB_00000650:
                uStack00000000_01 = uVar7 | (uint)uStack00000000_00 & 0xffffff00 | (uint)bVar3;
                goto LAB_000005d2;
              }
              *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
              uStack00000009 = unaff_r6;
              iVar8 = FUN_0000057a();
              if (iVar8 == 0) {
                return 0;
              }
              if (unaff_r4[3] == 0xa3) {
                in_stack_0000004c = iVar4 * 0x1c;
                if (bStack00000008 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
                  bVar3 = 3;
                  goto LAB_00000650;
                }
                if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
                  bVar3 = 4;
                  goto LAB_00000650;
                }
                iVar4 = FUN_00000636();
                if (iVar4 == 0) {
                  bVar3 = 5;
                  goto LAB_00000650;
                }
                if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
                  uVar5 = FUN_00000598(1);
                  return uVar5;
                }
              }
              else {
                if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
                  FUN_00000598(0);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00000446(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar8;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  byte param_7;
  undefined param_11;
  undefined4 param_7_00;
  ushort uStack0000000a;
  ushort param_8;
  undefined4 param_8_00;
  ushort uStack0000000e;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar4 = FUN_00000446();
  if (iVar4 == 0) {
    param_11 = 4;
    iVar4 = FUN_00000458();
    if (((((iVar4 != 0) && ((uint)uStack0000000a == (uint)unaff_r4[8])) &&
         (iVar4 = FUN_00000474((uint)uStack0000000e + unaff_r5,unaff_r4 + 9), iVar4 != 0)) &&
        (iVar4 = FUN_00000484(), uVar1 = param_8, iVar4 != 0)) &&
       (((unaff_r4[3] = param_7, param_7 == 0xa0 || (param_7 == 0xa1)) || (param_7 == 0xa3)))) {
      param_11 = 2;
      iVar4 = FUN_000004b6();
      if (iVar4 != 0) {
        uVar5 = FUN_000004c2();
        *(undefined4 *)(unaff_r4 + 4) = uVar5;
        iVar4 = FUN_000004cc();
        if (((iVar4 != 0) && (iVar4 = FUN_000004d8(), uVar2 = uStack0000000e, iVar4 == 0)) &&
           ((iVar4 = FUN_000004ea(), iVar4 != 0 && (iVar4 = FUN_000004f6(), iVar4 == 0)))) {
          in_stack_0000001c = (uint)uStack0000000e;
          param_11 = 0x30;
          iVar4 = FUN_0000050e();
          if (iVar4 != 0) {
            param_5_00 = CONCAT11(unaff_r6,unaff_r6);
            param_5_01 = CONCAT22(uVar1,param_5_00);
            do {
              if (uStack00000012 <= param_9) {
                if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
                  param_5_00 = CONCAT11(unaff_r6,param_5);
                  param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
                  iVar4 = FUN_000005d6((uint)uStack00000012);
                  FUN_000005e4(iVar4);
                  *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
                  *(undefined *)(iVar4 + (uint)uVar2) = param_5;
                  *(undefined *)(iVar4 + (uint)uStack0000000e) = bStack00000001;
                  bVar3 = *unaff_r4;
                }
                else {
                  param_10 = param_10 + uStack00000012 + 6;
                  if (0x5c0 < param_10) goto LAB_000005cc;
                  iVar4 = FUN_00000656();
                  iVar8 = 0;
                  param_9 = uStack0000000e + 9;
                  while (uVar7 = in_stack_0000001c, iVar8 < (int)(uint)bStack00000001) {
                    FUN_0000067c(iVar4,&stack0x00000008,
                                 (uint)*(ushort *)(&stack0x00000024 + iVar8 * 2));
                    iVar8 = iVar8 + 1;
                  }
                  param_7 = 0x30;
                  param_8 = uStack0000000e + 9;
                  FUN_00000696(iVar4,&stack0x00000008);
                  iVar8 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
                  uVar6 = (uint)param_8 - (iVar8 + 8) & 0xffff;
                  param_8 = (ushort)uVar6;
                  FUN_000006bc(uVar6 + iVar4,(uVar7 - (iVar8 + 8)) + unaff_r5 + 1);
                  param_7 = 0xa2;
                  FUN_000006ca(iVar4,&stack0x00000008);
                  uVar7 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
                  param_8 = (ushort)uVar7;
                  FUN_000006ea(uVar7 + iVar4,
                               ((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
                  param_7 = 0x30;
                  FUN_000006f6(iVar4,&stack0x00000008);
                  if (param_8 != 0) {
                    FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
                  }
                  bVar3 = *DAT_00000728;
                }
                FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
                return 1;
              }
              in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
              param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
              uVar7 = param_5_01 & 0xffff0000;
              param_5_01 = uVar7 | (uint)param_5_00;
              if (0x14 < in_stack_00000020) {
LAB_000005cc:
                param_5_01 = CONCAT31(param_5_01._1_3_,1);
                goto LAB_000005ce;
              }
              param_11 = 0x30;
              iVar4 = FUN_0000053c();
              if (iVar4 == 0) {
                return 0;
              }
              param_11 = 6;
              iVar4 = FUN_0000054e();
              if (iVar4 == 0) {
                return 0;
              }
              iVar4 = FUN_0000055a();
              if (iVar4 < 0) {
                bVar3 = 2;
LAB_00000650:
                param_5_01 = uVar7 | (uint)param_5_00 & 0xffffff00 | (uint)bVar3;
                goto LAB_000005d2;
              }
              *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
              param_11 = unaff_r6;
              iVar8 = FUN_0000057a();
              if (iVar8 == 0) {
                return 0;
              }
              if (unaff_r4[3] == 0xa3) {
                in_stack_0000004c = iVar4 * 0x1c;
                if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
                  bVar3 = 3;
                  goto LAB_00000650;
                }
                if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
                  bVar3 = 4;
                  goto LAB_00000650;
                }
                iVar4 = FUN_00000636();
                if (iVar4 == 0) {
                  bVar3 = 5;
                  goto LAB_00000650;
                }
                if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
                  uVar5 = FUN_00000598(1);
                  return uVar5;
                }
              }
              else {
                if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
                  FUN_00000598(0);
                }
              }
            } while( true );
          }
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00000458(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar8;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  byte param_7;
  undefined uStack00000009;
  undefined4 param_7_00;
  ushort param_11;
  ushort param_8;
  undefined4 param_8_00;
  ushort param_12;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar4 = FUN_00000458();
  if (((((iVar4 != 0) && ((uint)param_11 == (uint)unaff_r4[8])) &&
       (iVar4 = FUN_00000474((uint)param_12 + unaff_r5,unaff_r4 + 9), iVar4 != 0)) &&
      (iVar4 = FUN_00000484(), uVar1 = param_8, iVar4 != 0)) &&
     (((unaff_r4[3] = param_7, param_7 == 0xa0 || (param_7 == 0xa1)) || (param_7 == 0xa3)))) {
    uStack00000009 = 2;
    iVar4 = FUN_000004b6();
    if (iVar4 != 0) {
      uVar5 = FUN_000004c2();
      *(undefined4 *)(unaff_r4 + 4) = uVar5;
      iVar4 = FUN_000004cc();
      if (((iVar4 != 0) && (iVar4 = FUN_000004d8(), uVar2 = param_12, iVar4 == 0)) &&
         ((iVar4 = FUN_000004ea(), iVar4 != 0 && (iVar4 = FUN_000004f6(), iVar4 == 0)))) {
        in_stack_0000001c = (uint)param_12;
        uStack00000009 = 0x30;
        iVar4 = FUN_0000050e();
        if (iVar4 != 0) {
          param_5_00 = CONCAT11(unaff_r6,unaff_r6);
          param_5_01 = CONCAT22(uVar1,param_5_00);
          do {
            if (uStack00000012 <= param_9) {
              if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
                param_5_00 = CONCAT11(unaff_r6,param_5);
                param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
                iVar4 = FUN_000005d6((uint)uStack00000012);
                FUN_000005e4(iVar4);
                *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
                *(undefined *)(iVar4 + (uint)uVar2) = param_5;
                *(undefined *)(iVar4 + (uint)param_12) = bStack00000001;
                bVar3 = *unaff_r4;
              }
              else {
                param_10 = param_10 + uStack00000012 + 6;
                if (0x5c0 < param_10) goto LAB_000005cc;
                iVar4 = FUN_00000656();
                iVar8 = 0;
                param_9 = param_12 + 9;
                while (uVar7 = in_stack_0000001c, iVar8 < (int)(uint)bStack00000001) {
                  FUN_0000067c(iVar4,&stack0x00000008,
                               (uint)*(ushort *)(&stack0x00000024 + iVar8 * 2));
                  iVar8 = iVar8 + 1;
                }
                param_7 = 0x30;
                param_8 = param_12 + 9;
                FUN_00000696(iVar4,&stack0x00000008);
                iVar8 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
                uVar6 = (uint)param_8 - (iVar8 + 8) & 0xffff;
                param_8 = (ushort)uVar6;
                FUN_000006bc(uVar6 + iVar4,(uVar7 - (iVar8 + 8)) + unaff_r5 + 1);
                param_7 = 0xa2;
                FUN_000006ca(iVar4,&stack0x00000008);
                uVar7 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
                param_8 = (ushort)uVar7;
                FUN_000006ea(uVar7 + iVar4,
                             ((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
                param_7 = 0x30;
                FUN_000006f6(iVar4,&stack0x00000008);
                if (param_8 != 0) {
                  FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
                }
                bVar3 = *DAT_00000728;
              }
              FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
              return 1;
            }
            in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
            param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
            uVar7 = param_5_01 & 0xffff0000;
            param_5_01 = uVar7 | (uint)param_5_00;
            if (0x14 < in_stack_00000020) {
LAB_000005cc:
              param_5_01 = CONCAT31(param_5_01._1_3_,1);
              goto LAB_000005ce;
            }
            uStack00000009 = 0x30;
            iVar4 = FUN_0000053c();
            if (iVar4 == 0) {
              return 0;
            }
            uStack00000009 = 6;
            iVar4 = FUN_0000054e();
            if (iVar4 == 0) {
              return 0;
            }
            iVar4 = FUN_0000055a();
            if (iVar4 < 0) {
              bVar3 = 2;
LAB_00000650:
              param_5_01 = uVar7 | (uint)param_5_00 & 0xffffff00 | (uint)bVar3;
              goto LAB_000005d2;
            }
            *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
            uStack00000009 = unaff_r6;
            iVar8 = FUN_0000057a();
            if (iVar8 == 0) {
              return 0;
            }
            if (unaff_r4[3] == 0xa3) {
              in_stack_0000004c = iVar4 * 0x1c;
              if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
                bVar3 = 3;
                goto LAB_00000650;
              }
              if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
                bVar3 = 4;
                goto LAB_00000650;
              }
              iVar4 = FUN_00000636();
              if (iVar4 == 0) {
                bVar3 = 5;
                goto LAB_00000650;
              }
              if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
                uVar5 = FUN_00000598(1);
                return uVar5;
              }
            }
            else {
              if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
                FUN_00000598(0);
              }
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00000474(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar8;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  byte param_7;
  undefined param_11;
  ushort param_8;
  undefined4 param_8_00;
  ushort uStack0000000e;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar4 = FUN_00000474();
  if (((iVar4 != 0) && (iVar4 = FUN_00000484(), uVar1 = param_8, iVar4 != 0)) &&
     ((unaff_r4[3] = param_7, param_7 == 0xa0 || ((param_7 == 0xa1 || (param_7 == 0xa3)))))) {
    param_11 = 2;
    iVar4 = FUN_000004b6();
    if (iVar4 != 0) {
      uVar5 = FUN_000004c2();
      *(undefined4 *)(unaff_r4 + 4) = uVar5;
      iVar4 = FUN_000004cc();
      if ((((iVar4 != 0) && (iVar4 = FUN_000004d8(), uVar2 = uStack0000000e, iVar4 == 0)) &&
          (iVar4 = FUN_000004ea(), iVar4 != 0)) && (iVar4 = FUN_000004f6(), iVar4 == 0)) {
        in_stack_0000001c = (uint)uStack0000000e;
        param_11 = 0x30;
        iVar4 = FUN_0000050e();
        if (iVar4 != 0) {
          param_5_00 = CONCAT11(unaff_r6,unaff_r6);
          param_5_01 = CONCAT22(uVar1,param_5_00);
          do {
            if (uStack00000012 <= param_9) {
              if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
                param_5_00 = CONCAT11(unaff_r6,param_5);
                param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
                iVar4 = FUN_000005d6((uint)uStack00000012);
                FUN_000005e4(iVar4);
                *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
                *(undefined *)(iVar4 + (uint)uVar2) = param_5;
                *(undefined *)(iVar4 + (uint)uStack0000000e) = bStack00000001;
                bVar3 = *unaff_r4;
              }
              else {
                param_10 = param_10 + uStack00000012 + 6;
                if (0x5c0 < param_10) goto LAB_000005cc;
                iVar4 = FUN_00000656();
                iVar8 = 0;
                param_9 = uStack0000000e + 9;
                while (uVar7 = in_stack_0000001c, iVar8 < (int)(uint)bStack00000001) {
                  FUN_0000067c(iVar4,&stack0x00000008,
                               (uint)*(ushort *)(&stack0x00000024 + iVar8 * 2));
                  iVar8 = iVar8 + 1;
                }
                param_7 = 0x30;
                param_8 = uStack0000000e + 9;
                FUN_00000696(iVar4,&stack0x00000008);
                iVar8 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
                uVar6 = (uint)param_8 - (iVar8 + 8) & 0xffff;
                param_8 = (ushort)uVar6;
                FUN_000006bc(uVar6 + iVar4,(uVar7 - (iVar8 + 8)) + unaff_r5 + 1);
                param_7 = 0xa2;
                FUN_000006ca(iVar4,&stack0x00000008);
                uVar7 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
                param_8 = (ushort)uVar7;
                FUN_000006ea(uVar7 + iVar4,
                             ((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
                param_7 = 0x30;
                FUN_000006f6(iVar4,&stack0x00000008);
                if (param_8 != 0) {
                  FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
                }
                bVar3 = *DAT_00000728;
              }
              FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
              return 1;
            }
            in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
            param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
            uVar7 = param_5_01 & 0xffff0000;
            param_5_01 = uVar7 | (uint)param_5_00;
            if (0x14 < in_stack_00000020) {
LAB_000005cc:
              param_5_01 = CONCAT31(param_5_01._1_3_,1);
              goto LAB_000005ce;
            }
            param_11 = 0x30;
            iVar4 = FUN_0000053c();
            if (iVar4 == 0) {
              return 0;
            }
            param_11 = 6;
            iVar4 = FUN_0000054e();
            if (iVar4 == 0) {
              return 0;
            }
            iVar4 = FUN_0000055a();
            if (iVar4 < 0) {
              bVar3 = 2;
LAB_00000650:
              param_5_01 = uVar7 | (uint)param_5_00 & 0xffffff00 | (uint)bVar3;
              goto LAB_000005d2;
            }
            *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
            param_11 = unaff_r6;
            iVar8 = FUN_0000057a();
            if (iVar8 == 0) {
              return 0;
            }
            if (unaff_r4[3] == 0xa3) {
              in_stack_0000004c = iVar4 * 0x1c;
              if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
                bVar3 = 3;
                goto LAB_00000650;
              }
              if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
                bVar3 = 4;
                goto LAB_00000650;
              }
              iVar4 = FUN_00000636();
              if (iVar4 == 0) {
                bVar3 = 5;
                goto LAB_00000650;
              }
              if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
                uVar5 = FUN_00000598(1);
                return uVar5;
              }
            }
            else {
              if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
                FUN_00000598(0);
              }
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_00000484(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar8;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  byte param_7;
  undefined uStack00000009;
  ushort param_8;
  undefined4 param_8_00;
  ushort uStack0000000e;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  uint param_12;
  uint param_13;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar4 = FUN_00000484();
  uVar1 = param_8;
  if ((iVar4 != 0) &&
     (((unaff_r4[3] = param_7, param_7 == 0xa0 || (param_7 == 0xa1)) || (param_7 == 0xa3)))) {
    uStack00000009 = 2;
    iVar4 = FUN_000004b6();
    if (iVar4 != 0) {
      uVar5 = FUN_000004c2();
      *(undefined4 *)(unaff_r4 + 4) = uVar5;
      iVar4 = FUN_000004cc();
      if (((iVar4 != 0) && (iVar4 = FUN_000004d8(), uVar2 = uStack0000000e, iVar4 == 0)) &&
         ((iVar4 = FUN_000004ea(), iVar4 != 0 && (iVar4 = FUN_000004f6(), iVar4 == 0)))) {
        param_12 = (uint)uStack0000000e;
        uStack00000009 = 0x30;
        iVar4 = FUN_0000050e();
        if (iVar4 != 0) {
          param_5_00 = CONCAT11(unaff_r6,unaff_r6);
          param_5_01 = CONCAT22(uVar1,param_5_00);
          do {
            if (uStack00000012 <= param_9) {
              if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
                param_5_00 = CONCAT11(unaff_r6,param_5);
                param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
                iVar4 = FUN_000005d6((uint)uStack00000012);
                FUN_000005e4(iVar4);
                *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
                *(undefined *)(iVar4 + (uint)uVar2) = param_5;
                *(undefined *)(iVar4 + (uint)uStack0000000e) = bStack00000001;
                bVar3 = *unaff_r4;
              }
              else {
                param_10 = param_10 + uStack00000012 + 6;
                if (0x5c0 < param_10) goto LAB_000005cc;
                iVar4 = FUN_00000656();
                iVar8 = 0;
                param_9 = uStack0000000e + 9;
                while (uVar7 = param_12, iVar8 < (int)(uint)bStack00000001) {
                  FUN_0000067c(iVar4,&stack0x00000008,
                               (uint)*(ushort *)(&stack0x00000024 + iVar8 * 2));
                  iVar8 = iVar8 + 1;
                }
                param_7 = 0x30;
                param_8 = uStack0000000e + 9;
                FUN_00000696(iVar4,&stack0x00000008);
                iVar8 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
                uVar6 = (uint)param_8 - (iVar8 + 8) & 0xffff;
                param_8 = (ushort)uVar6;
                FUN_000006bc(uVar6 + iVar4,(uVar7 - (iVar8 + 8)) + unaff_r5 + 1);
                param_7 = 0xa2;
                FUN_000006ca(iVar4,&stack0x00000008);
                uVar7 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
                param_8 = (ushort)uVar7;
                FUN_000006ea(uVar7 + iVar4,
                             ((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
                param_7 = 0x30;
                FUN_000006f6(iVar4,&stack0x00000008);
                if (param_8 != 0) {
                  FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
                }
                bVar3 = *DAT_00000728;
              }
              FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
              return 1;
            }
            param_13 = (uint)bStack00000001 + 1 & 0xff;
            param_5_00 = CONCAT11((char)param_13,param_5);
            uVar7 = param_5_01 & 0xffff0000;
            param_5_01 = uVar7 | (uint)param_5_00;
            if (0x14 < param_13) {
LAB_000005cc:
              param_5_01 = CONCAT31(param_5_01._1_3_,1);
              goto LAB_000005ce;
            }
            uStack00000009 = 0x30;
            iVar4 = FUN_0000053c();
            if (iVar4 == 0) {
              return 0;
            }
            uStack00000009 = 6;
            iVar4 = FUN_0000054e();
            if (iVar4 == 0) {
              return 0;
            }
            iVar4 = FUN_0000055a();
            if (iVar4 < 0) {
              bVar3 = 2;
LAB_00000650:
              param_5_01 = uVar7 | (uint)param_5_00 & 0xffffff00 | (uint)bVar3;
              goto LAB_000005d2;
            }
            *(undefined2 *)((int)&stack0x00000020 + param_13 * 2 + 2) = (short)iVar4;
            uStack00000009 = unaff_r6;
            iVar8 = FUN_0000057a();
            if (iVar8 == 0) {
              return 0;
            }
            if (unaff_r4[3] == 0xa3) {
              in_stack_0000004c = iVar4 * 0x1c;
              if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
                bVar3 = 3;
                goto LAB_00000650;
              }
              if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
                bVar3 = 4;
                goto LAB_00000650;
              }
              iVar4 = FUN_00000636();
              if (iVar4 == 0) {
                bVar3 = 5;
                goto LAB_00000650;
              }
              if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
                uVar5 = FUN_00000598(1);
                return uVar5;
              }
            }
            else {
              if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
                FUN_00000598(0);
              }
            }
          } while( true );
        }
      }
    }
  }
  return 0;
}



undefined4 FUN_000004b6(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar7;
  undefined uStack00000000;
  ushort uStack00000000_00;
  byte bStack00000001;
  uint in_stack_00000000;
  undefined3 uStack00000001;
  byte in_stack_00000008;
  undefined uStack00000009;
  ushort uStack0000000c;
  undefined4 in_stack_0000000c;
  ushort uStack0000000e;
  ushort uStack00000010;
  undefined4 in_stack_00000010;
  ushort uStack00000012;
  ushort in_stack_00000014;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar3 = FUN_000004b6();
  if (iVar3 != 0) {
    uVar4 = FUN_000004c2();
    *(undefined4 *)(unaff_r4 + 4) = uVar4;
    iVar3 = FUN_000004cc();
    if ((((iVar3 != 0) && (iVar3 = FUN_000004d8(), uVar1 = uStack0000000e, iVar3 == 0)) &&
        (iVar3 = FUN_000004ea(), iVar3 != 0)) && (iVar3 = FUN_000004f6(), iVar3 == 0)) {
      in_stack_0000001c = (uint)uStack0000000e;
      uStack00000009 = 0x30;
      iVar3 = FUN_0000050e();
      if (iVar3 != 0) {
        uStack00000000_00 = CONCAT11(unaff_r6,unaff_r6);
        in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
        do {
          if (uStack00000012 <= uStack00000010) {
            if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
              uStack00000000_00 = CONCAT11(unaff_r6,uStack00000000);
              in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
LAB_000005d2:
              iVar3 = FUN_000005d6((uint)uStack00000012);
              FUN_000005e4(iVar3);
              *(undefined *)(iVar3 + (in_stack_00000000 >> 0x10)) = 0xa2;
              *(undefined *)(iVar3 + (uint)uVar1) = uStack00000000;
              *(undefined *)(iVar3 + (uint)uStack0000000e) = bStack00000001;
              bVar2 = *unaff_r4;
            }
            else {
              in_stack_00000014 = in_stack_00000014 + uStack00000012 + 6;
              if (0x5c0 < in_stack_00000014) goto LAB_000005cc;
              iVar3 = FUN_00000656();
              iVar7 = 0;
              uStack00000010 = uStack0000000e + 9;
              while (uVar6 = in_stack_0000001c, iVar7 < (int)(uint)bStack00000001) {
                FUN_0000067c(iVar3,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar7 * 2))
                ;
                iVar7 = iVar7 + 1;
              }
              in_stack_00000008 = 0x30;
              uStack0000000c = uStack0000000e + 9;
              FUN_00000696(iVar3,&stack0x00000008);
              iVar7 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
              uVar5 = (uint)uStack0000000c - (iVar7 + 8) & 0xffff;
              uStack0000000c = (ushort)uVar5;
              FUN_000006bc(uVar5 + iVar3,(uVar6 - (iVar7 + 8)) + unaff_r5 + 1);
              in_stack_00000008 = 0xa2;
              FUN_000006ca(iVar3,&stack0x00000008);
              uVar6 = (uint)uStack0000000c - ((uint)DAT_00000728[8] + 5) & 0xffff;
              uStack0000000c = (ushort)uVar6;
              FUN_000006ea(uVar6 + iVar3,
                           ((in_stack_00000000 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
              in_stack_00000008 = 0x30;
              FUN_000006f6(iVar3,&stack0x00000008);
              if (uStack0000000c != 0) {
                FUN_0000070c(iVar3,(uint)uStack0000000c + iVar3,
                             (uint)uStack00000010 - (uint)uStack0000000c);
              }
              bVar2 = *DAT_00000728;
            }
            FUN_00000720((uint)bVar2,in_stack_00000058,in_stack_0000005c,iVar3);
            return 1;
          }
          in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
          uStack00000000_00 = CONCAT11((char)in_stack_00000020,uStack00000000);
          uVar6 = in_stack_00000000 & 0xffff0000;
          in_stack_00000000 = uVar6 | (uint)uStack00000000_00;
          if (0x14 < in_stack_00000020) {
LAB_000005cc:
            in_stack_00000000 = CONCAT31(uStack00000001,1);
            goto LAB_000005ce;
          }
          uStack00000009 = 0x30;
          iVar3 = FUN_0000053c();
          if (iVar3 == 0) {
            return 0;
          }
          uStack00000009 = 6;
          iVar3 = FUN_0000054e();
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = FUN_0000055a();
          if (iVar3 < 0) {
            bVar2 = 2;
LAB_00000650:
            in_stack_00000000 = uVar6 | (uint)uStack00000000_00 & 0xffffff00 | (uint)bVar2;
            goto LAB_000005d2;
          }
          *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar3;
          uStack00000009 = unaff_r6;
          iVar7 = FUN_0000057a();
          if (iVar7 == 0) {
            return 0;
          }
          if (unaff_r4[3] == 0xa3) {
            in_stack_0000004c = iVar3 * 0x1c;
            if (in_stack_00000008 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
              bVar2 = 3;
              goto LAB_00000650;
            }
            if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
              bVar2 = 4;
              goto LAB_00000650;
            }
            iVar3 = FUN_00000636();
            if (iVar3 == 0) {
              bVar2 = 5;
              goto LAB_00000650;
            }
            if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
              uVar4 = FUN_00000598(1);
              return uVar4;
            }
          }
          else {
            if (*(int *)(iVar3 * 0x1c + DAT_0000072c + 0x18) != 0) {
              FUN_00000598(0);
            }
          }
        } while( true );
      }
    }
  }
  return 0;
}



undefined4 FUN_000004c2(void)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar7;
  undefined uStack00000000;
  ushort uStack00000000_00;
  byte bStack00000001;
  uint in_stack_00000000;
  undefined3 uStack00000001;
  byte in_stack_00000008;
  undefined uStack00000009;
  ushort uStack0000000c;
  undefined4 in_stack_0000000c;
  ushort uStack0000000e;
  ushort uStack00000010;
  undefined4 in_stack_00000010;
  ushort uStack00000012;
  ushort in_stack_00000014;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  uVar3 = FUN_000004c2();
  *(undefined4 *)(unaff_r4 + 4) = uVar3;
  iVar4 = FUN_000004cc();
  if ((((iVar4 != 0) && (iVar4 = FUN_000004d8(), uVar1 = uStack0000000e, iVar4 == 0)) &&
      (iVar4 = FUN_000004ea(), iVar4 != 0)) && (iVar4 = FUN_000004f6(), iVar4 == 0)) {
    in_stack_0000001c = (uint)uStack0000000e;
    uStack00000009 = 0x30;
    iVar4 = FUN_0000050e();
    if (iVar4 != 0) {
      uStack00000000_00 = CONCAT11(unaff_r6,unaff_r6);
      in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
      do {
        if (uStack00000012 <= uStack00000010) {
          if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
            uStack00000000_00 = CONCAT11(unaff_r6,uStack00000000);
            in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
LAB_000005d2:
            iVar4 = FUN_000005d6((uint)uStack00000012);
            FUN_000005e4(iVar4);
            *(undefined *)(iVar4 + (in_stack_00000000 >> 0x10)) = 0xa2;
            *(undefined *)(iVar4 + (uint)uVar1) = uStack00000000;
            *(undefined *)(iVar4 + (uint)uStack0000000e) = bStack00000001;
            bVar2 = *unaff_r4;
          }
          else {
            in_stack_00000014 = in_stack_00000014 + uStack00000012 + 6;
            if (0x5c0 < in_stack_00000014) goto LAB_000005cc;
            iVar4 = FUN_00000656();
            iVar7 = 0;
            uStack00000010 = uStack0000000e + 9;
            while (uVar6 = in_stack_0000001c, iVar7 < (int)(uint)bStack00000001) {
              FUN_0000067c(iVar4,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar7 * 2));
              iVar7 = iVar7 + 1;
            }
            in_stack_00000008 = 0x30;
            uStack0000000c = uStack0000000e + 9;
            FUN_00000696(iVar4,&stack0x00000008);
            iVar7 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
            uVar5 = (uint)uStack0000000c - (iVar7 + 8) & 0xffff;
            uStack0000000c = (ushort)uVar5;
            FUN_000006bc(uVar5 + iVar4,(uVar6 - (iVar7 + 8)) + unaff_r5 + 1);
            in_stack_00000008 = 0xa2;
            FUN_000006ca(iVar4,&stack0x00000008);
            uVar6 = (uint)uStack0000000c - ((uint)DAT_00000728[8] + 5) & 0xffff;
            uStack0000000c = (ushort)uVar6;
            FUN_000006ea(uVar6 + iVar4,
                         ((in_stack_00000000 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
            in_stack_00000008 = 0x30;
            FUN_000006f6(iVar4,&stack0x00000008);
            if (uStack0000000c != 0) {
              FUN_0000070c(iVar4,(uint)uStack0000000c + iVar4,
                           (uint)uStack00000010 - (uint)uStack0000000c);
            }
            bVar2 = *DAT_00000728;
          }
          FUN_00000720((uint)bVar2,in_stack_00000058,in_stack_0000005c,iVar4);
          return 1;
        }
        in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
        uStack00000000_00 = CONCAT11((char)in_stack_00000020,uStack00000000);
        uVar6 = in_stack_00000000 & 0xffff0000;
        in_stack_00000000 = uVar6 | (uint)uStack00000000_00;
        if (0x14 < in_stack_00000020) {
LAB_000005cc:
          in_stack_00000000 = CONCAT31(uStack00000001,1);
          goto LAB_000005ce;
        }
        uStack00000009 = 0x30;
        iVar4 = FUN_0000053c();
        if (iVar4 == 0) {
          return 0;
        }
        uStack00000009 = 6;
        iVar4 = FUN_0000054e();
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = FUN_0000055a();
        if (iVar4 < 0) {
          bVar2 = 2;
LAB_00000650:
          in_stack_00000000 = uVar6 | (uint)uStack00000000_00 & 0xffffff00 | (uint)bVar2;
          goto LAB_000005d2;
        }
        *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
        uStack00000009 = unaff_r6;
        iVar7 = FUN_0000057a();
        if (iVar7 == 0) {
          return 0;
        }
        if (unaff_r4[3] == 0xa3) {
          in_stack_0000004c = iVar4 * 0x1c;
          if (in_stack_00000008 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
            bVar2 = 3;
            goto LAB_00000650;
          }
          if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
            bVar2 = 4;
            goto LAB_00000650;
          }
          iVar4 = FUN_00000636();
          if (iVar4 == 0) {
            bVar2 = 5;
            goto LAB_00000650;
          }
          if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
            uVar3 = FUN_00000598(1);
            return uVar3;
          }
        }
        else {
          if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
            FUN_00000598(0);
          }
        }
      } while( true );
    }
  }
  return 0;
}



undefined4 FUN_000004cc(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar7;
  undefined uStack00000000;
  ushort uStack00000000_00;
  byte bStack00000001;
  uint in_stack_00000000;
  undefined3 uStack00000001;
  byte in_stack_00000008;
  undefined uStack00000009;
  ushort uStack0000000c;
  undefined4 in_stack_0000000c;
  ushort uStack0000000e;
  ushort uStack00000010;
  undefined4 in_stack_00000010;
  ushort uStack00000012;
  ushort in_stack_00000014;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar3 = FUN_000004cc();
  if ((((iVar3 != 0) && (iVar3 = FUN_000004d8(), uVar1 = uStack0000000e, iVar3 == 0)) &&
      (iVar3 = FUN_000004ea(), iVar3 != 0)) && (iVar3 = FUN_000004f6(), iVar3 == 0)) {
    in_stack_0000001c = (uint)uStack0000000e;
    uStack00000009 = 0x30;
    iVar3 = FUN_0000050e();
    if (iVar3 != 0) {
      uStack00000000_00 = CONCAT11(unaff_r6,unaff_r6);
      in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
      do {
        if (uStack00000012 <= uStack00000010) {
          if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
            uStack00000000_00 = CONCAT11(unaff_r6,uStack00000000);
            in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
LAB_000005d2:
            iVar3 = FUN_000005d6((uint)uStack00000012);
            FUN_000005e4(iVar3);
            *(undefined *)(iVar3 + (in_stack_00000000 >> 0x10)) = 0xa2;
            *(undefined *)(iVar3 + (uint)uVar1) = uStack00000000;
            *(undefined *)(iVar3 + (uint)uStack0000000e) = bStack00000001;
            bVar2 = *unaff_r4;
          }
          else {
            in_stack_00000014 = in_stack_00000014 + uStack00000012 + 6;
            if (0x5c0 < in_stack_00000014) goto LAB_000005cc;
            iVar3 = FUN_00000656();
            iVar7 = 0;
            uStack00000010 = uStack0000000e + 9;
            while (uVar6 = in_stack_0000001c, iVar7 < (int)(uint)bStack00000001) {
              FUN_0000067c(iVar3,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar7 * 2));
              iVar7 = iVar7 + 1;
            }
            in_stack_00000008 = 0x30;
            uStack0000000c = uStack0000000e + 9;
            FUN_00000696(iVar3,&stack0x00000008);
            iVar7 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
            uVar5 = (uint)uStack0000000c - (iVar7 + 8) & 0xffff;
            uStack0000000c = (ushort)uVar5;
            FUN_000006bc(uVar5 + iVar3,(uVar6 - (iVar7 + 8)) + unaff_r5 + 1);
            in_stack_00000008 = 0xa2;
            FUN_000006ca(iVar3,&stack0x00000008);
            uVar6 = (uint)uStack0000000c - ((uint)DAT_00000728[8] + 5) & 0xffff;
            uStack0000000c = (ushort)uVar6;
            FUN_000006ea(uVar6 + iVar3,
                         ((in_stack_00000000 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
            in_stack_00000008 = 0x30;
            FUN_000006f6(iVar3,&stack0x00000008);
            if (uStack0000000c != 0) {
              FUN_0000070c(iVar3,(uint)uStack0000000c + iVar3,
                           (uint)uStack00000010 - (uint)uStack0000000c);
            }
            bVar2 = *DAT_00000728;
          }
          FUN_00000720((uint)bVar2,in_stack_00000058,in_stack_0000005c,iVar3);
          return 1;
        }
        in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
        uStack00000000_00 = CONCAT11((char)in_stack_00000020,uStack00000000);
        uVar6 = in_stack_00000000 & 0xffff0000;
        in_stack_00000000 = uVar6 | (uint)uStack00000000_00;
        if (0x14 < in_stack_00000020) {
LAB_000005cc:
          in_stack_00000000 = CONCAT31(uStack00000001,1);
          goto LAB_000005ce;
        }
        uStack00000009 = 0x30;
        iVar3 = FUN_0000053c();
        if (iVar3 == 0) {
          return 0;
        }
        uStack00000009 = 6;
        iVar3 = FUN_0000054e();
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_0000055a();
        if (iVar3 < 0) {
          bVar2 = 2;
LAB_00000650:
          in_stack_00000000 = uVar6 | (uint)uStack00000000_00 & 0xffffff00 | (uint)bVar2;
          goto LAB_000005d2;
        }
        *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar3;
        uStack00000009 = unaff_r6;
        iVar7 = FUN_0000057a();
        if (iVar7 == 0) {
          return 0;
        }
        if (unaff_r4[3] == 0xa3) {
          in_stack_0000004c = iVar3 * 0x1c;
          if (in_stack_00000008 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
            bVar2 = 3;
            goto LAB_00000650;
          }
          if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
            bVar2 = 4;
            goto LAB_00000650;
          }
          iVar3 = FUN_00000636();
          if (iVar3 == 0) {
            bVar2 = 5;
            goto LAB_00000650;
          }
          if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
            uVar4 = FUN_00000598(1);
            return uVar4;
          }
        }
        else {
          if (*(int *)(iVar3 * 0x1c + DAT_0000072c + 0x18) != 0) {
            FUN_00000598(0);
          }
        }
      } while( true );
    }
  }
  return 0;
}



undefined4 FUN_000004d8(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar7;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  undefined3 uStack00000001;
  byte param_7;
  undefined uStack00000009;
  ushort param_8;
  undefined4 param_8_00;
  ushort param_11;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar3 = FUN_000004d8();
  uVar1 = param_11;
  if (((iVar3 == 0) && (iVar3 = FUN_000004ea(), iVar3 != 0)) && (iVar3 = FUN_000004f6(), iVar3 == 0)
     ) {
    in_stack_0000001c = (uint)param_11;
    uStack00000009 = 0x30;
    iVar3 = FUN_0000050e();
    if (iVar3 != 0) {
      param_5_00 = CONCAT11(unaff_r6,unaff_r6);
      param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
      do {
        if (uStack00000012 <= param_9) {
          if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
            param_5_00 = CONCAT11(unaff_r6,param_5);
            param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
            iVar3 = FUN_000005d6((uint)uStack00000012);
            FUN_000005e4(iVar3);
            *(undefined *)(iVar3 + (param_5_01 >> 0x10)) = 0xa2;
            *(undefined *)(iVar3 + (uint)uVar1) = param_5;
            *(undefined *)(iVar3 + (uint)param_11) = bStack00000001;
            bVar2 = *unaff_r4;
          }
          else {
            param_10 = param_10 + uStack00000012 + 6;
            if (0x5c0 < param_10) goto LAB_000005cc;
            iVar3 = FUN_00000656();
            iVar7 = 0;
            param_9 = param_11 + 9;
            while (uVar6 = in_stack_0000001c, iVar7 < (int)(uint)bStack00000001) {
              FUN_0000067c(iVar3,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar7 * 2));
              iVar7 = iVar7 + 1;
            }
            param_7 = 0x30;
            param_8 = param_11 + 9;
            FUN_00000696(iVar3,&stack0x00000008);
            iVar7 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
            uVar5 = (uint)param_8 - (iVar7 + 8) & 0xffff;
            param_8 = (ushort)uVar5;
            FUN_000006bc(uVar5 + iVar3,(uVar6 - (iVar7 + 8)) + unaff_r5 + 1);
            param_7 = 0xa2;
            FUN_000006ca(iVar3,&stack0x00000008);
            uVar6 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
            param_8 = (ushort)uVar6;
            FUN_000006ea(uVar6 + iVar3,
                         ((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
            param_7 = 0x30;
            FUN_000006f6(iVar3,&stack0x00000008);
            if (param_8 != 0) {
              FUN_0000070c(iVar3,(uint)param_8 + iVar3,(uint)param_9 - (uint)param_8);
            }
            bVar2 = *DAT_00000728;
          }
          FUN_00000720((uint)bVar2,in_stack_00000058,in_stack_0000005c,iVar3);
          return 1;
        }
        in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
        param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
        uVar6 = param_5_01 & 0xffff0000;
        param_5_01 = uVar6 | (uint)param_5_00;
        if (0x14 < in_stack_00000020) {
LAB_000005cc:
          param_5_01 = CONCAT31(uStack00000001,1);
          goto LAB_000005ce;
        }
        uStack00000009 = 0x30;
        iVar3 = FUN_0000053c();
        if (iVar3 == 0) {
          return 0;
        }
        uStack00000009 = 6;
        iVar3 = FUN_0000054e();
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = FUN_0000055a();
        if (iVar3 < 0) {
          bVar2 = 2;
LAB_00000650:
          param_5_01 = uVar6 | (uint)param_5_00 & 0xffffff00 | (uint)bVar2;
          goto LAB_000005d2;
        }
        *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar3;
        uStack00000009 = unaff_r6;
        iVar7 = FUN_0000057a();
        if (iVar7 == 0) {
          return 0;
        }
        if (unaff_r4[3] == 0xa3) {
          in_stack_0000004c = iVar3 * 0x1c;
          if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
            bVar2 = 3;
            goto LAB_00000650;
          }
          if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
            bVar2 = 4;
            goto LAB_00000650;
          }
          iVar3 = FUN_00000636();
          if (iVar3 == 0) {
            bVar2 = 5;
            goto LAB_00000650;
          }
          if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
            uVar4 = FUN_00000598(1);
            return uVar4;
          }
        }
        else {
          if (*(int *)(iVar3 * 0x1c + DAT_0000072c + 0x18) != 0) {
            FUN_00000598(0);
          }
        }
      } while( true );
    }
  }
  return 0;
}



undefined4 FUN_000004ea(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar6;
  undefined uStack00000000;
  ushort uStack00000000_00;
  byte bStack00000001;
  uint in_stack_00000000;
  undefined3 uStack00000001;
  uint in_stack_00000004;
  byte in_stack_00000008;
  undefined uStack00000009;
  ushort uStack0000000c;
  undefined4 in_stack_0000000c;
  ushort uStack0000000e;
  ushort uStack00000010;
  undefined4 in_stack_00000010;
  ushort uStack00000012;
  ushort in_stack_00000014;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar2 = FUN_000004ea();
  if ((iVar2 != 0) && (iVar2 = FUN_000004f6(), iVar2 == 0)) {
    in_stack_0000001c = (uint)uStack0000000e;
    uStack00000009 = 0x30;
    iVar2 = FUN_0000050e();
    if (iVar2 != 0) {
      uStack00000000_00 = CONCAT11(unaff_r6,unaff_r6);
      in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
      do {
        if (uStack00000012 <= uStack00000010) {
          if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
            uStack00000000_00 = CONCAT11(unaff_r6,uStack00000000);
            in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
LAB_000005d2:
            iVar2 = FUN_000005d6((uint)uStack00000012);
            FUN_000005e4(iVar2);
            *(undefined *)(iVar2 + (in_stack_00000000 >> 0x10)) = 0xa2;
            *(undefined *)(iVar2 + (in_stack_00000004 & 0xffff)) = uStack00000000;
            *(undefined *)(iVar2 + (uint)uStack0000000e) = bStack00000001;
            bVar1 = *unaff_r4;
          }
          else {
            in_stack_00000014 = in_stack_00000014 + uStack00000012 + 6;
            if (0x5c0 < in_stack_00000014) goto LAB_000005cc;
            iVar2 = FUN_00000656();
            iVar6 = 0;
            uStack00000010 = uStack0000000e + 9;
            while (uVar5 = in_stack_0000001c, iVar6 < (int)(uint)bStack00000001) {
              FUN_0000067c(iVar2,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar6 * 2));
              iVar6 = iVar6 + 1;
            }
            in_stack_00000008 = 0x30;
            uStack0000000c = uStack0000000e + 9;
            FUN_00000696(iVar2,&stack0x00000008);
            iVar6 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
            uVar4 = (uint)uStack0000000c - (iVar6 + 8) & 0xffff;
            uStack0000000c = (ushort)uVar4;
            FUN_000006bc(uVar4 + iVar2,(uVar5 - (iVar6 + 8)) + unaff_r5 + 1);
            in_stack_00000008 = 0xa2;
            FUN_000006ca(iVar2,&stack0x00000008);
            uVar5 = (uint)uStack0000000c - ((uint)DAT_00000728[8] + 5) & 0xffff;
            uStack0000000c = (ushort)uVar5;
            FUN_000006ea(uVar5 + iVar2,
                         ((in_stack_00000000 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
            in_stack_00000008 = 0x30;
            FUN_000006f6(iVar2,&stack0x00000008);
            if (uStack0000000c != 0) {
              FUN_0000070c(iVar2,(uint)uStack0000000c + iVar2,
                           (uint)uStack00000010 - (uint)uStack0000000c);
            }
            bVar1 = *DAT_00000728;
          }
          FUN_00000720((uint)bVar1,in_stack_00000058,in_stack_0000005c,iVar2);
          return 1;
        }
        in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
        uStack00000000_00 = CONCAT11((char)in_stack_00000020,uStack00000000);
        uVar5 = in_stack_00000000 & 0xffff0000;
        in_stack_00000000 = uVar5 | (uint)uStack00000000_00;
        if (0x14 < in_stack_00000020) {
LAB_000005cc:
          in_stack_00000000 = CONCAT31(uStack00000001,1);
          goto LAB_000005ce;
        }
        uStack00000009 = 0x30;
        iVar2 = FUN_0000053c();
        if (iVar2 == 0) {
          return 0;
        }
        uStack00000009 = 6;
        iVar2 = FUN_0000054e();
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_0000055a();
        if (iVar2 < 0) {
          bVar1 = 2;
LAB_00000650:
          in_stack_00000000 = uVar5 | (uint)uStack00000000_00 & 0xffffff00 | (uint)bVar1;
          goto LAB_000005d2;
        }
        *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar2;
        uStack00000009 = unaff_r6;
        iVar6 = FUN_0000057a();
        if (iVar6 == 0) {
          return 0;
        }
        if (unaff_r4[3] == 0xa3) {
          in_stack_0000004c = iVar2 * 0x1c;
          if (in_stack_00000008 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
            bVar1 = 3;
            goto LAB_00000650;
          }
          if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
            bVar1 = 4;
            goto LAB_00000650;
          }
          iVar2 = FUN_00000636();
          if (iVar2 == 0) {
            bVar1 = 5;
            goto LAB_00000650;
          }
          if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
            uVar3 = FUN_00000598(1);
            return uVar3;
          }
        }
        else {
          if (*(int *)(iVar2 * 0x1c + DAT_0000072c + 0x18) != 0) {
            FUN_00000598(0);
          }
        }
      } while( true );
    }
  }
  return 0;
}



undefined4 FUN_000004f6(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar6;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  undefined3 uStack00000001;
  uint param_6;
  byte param_7;
  undefined param_12;
  ushort param_8;
  undefined4 param_8_00;
  ushort param_13;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  uint param_14;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar2 = FUN_000004f6();
  if (iVar2 == 0) {
    param_14 = (uint)param_13;
    param_12 = 0x30;
    iVar2 = FUN_0000050e();
    if (iVar2 != 0) {
      param_5_00 = CONCAT11(unaff_r6,unaff_r6);
      param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
      do {
        if (uStack00000012 <= param_9) {
          if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
            param_5_00 = CONCAT11(unaff_r6,param_5);
            param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
            iVar2 = FUN_000005d6((uint)uStack00000012);
            FUN_000005e4(iVar2);
            *(undefined *)(iVar2 + (param_5_01 >> 0x10)) = 0xa2;
            *(undefined *)(iVar2 + (param_6 & 0xffff)) = param_5;
            *(undefined *)(iVar2 + (uint)param_13) = bStack00000001;
            bVar1 = *unaff_r4;
          }
          else {
            param_10 = param_10 + uStack00000012 + 6;
            if (0x5c0 < param_10) goto LAB_000005cc;
            iVar2 = FUN_00000656();
            iVar6 = 0;
            param_9 = param_13 + 9;
            while (uVar5 = param_14, iVar6 < (int)(uint)bStack00000001) {
              FUN_0000067c(iVar2,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar6 * 2));
              iVar6 = iVar6 + 1;
            }
            param_7 = 0x30;
            param_8 = param_13 + 9;
            FUN_00000696(iVar2,&stack0x00000008);
            iVar6 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
            uVar4 = (uint)param_8 - (iVar6 + 8) & 0xffff;
            param_8 = (ushort)uVar4;
            FUN_000006bc(uVar4 + iVar2,(uVar5 - (iVar6 + 8)) + unaff_r5 + 1);
            param_7 = 0xa2;
            FUN_000006ca(iVar2,&stack0x00000008);
            uVar5 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
            param_8 = (ushort)uVar5;
            FUN_000006ea(uVar5 + iVar2,
                         ((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
            param_7 = 0x30;
            FUN_000006f6(iVar2,&stack0x00000008);
            if (param_8 != 0) {
              FUN_0000070c(iVar2,(uint)param_8 + iVar2,(uint)param_9 - (uint)param_8);
            }
            bVar1 = *DAT_00000728;
          }
          FUN_00000720((uint)bVar1,in_stack_00000058,in_stack_0000005c,iVar2);
          return 1;
        }
        in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
        param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
        uVar5 = param_5_01 & 0xffff0000;
        param_5_01 = uVar5 | (uint)param_5_00;
        if (0x14 < in_stack_00000020) {
LAB_000005cc:
          param_5_01 = CONCAT31(uStack00000001,1);
          goto LAB_000005ce;
        }
        param_12 = 0x30;
        iVar2 = FUN_0000053c();
        if (iVar2 == 0) {
          return 0;
        }
        param_12 = 6;
        iVar2 = FUN_0000054e();
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_0000055a();
        if (iVar2 < 0) {
          bVar1 = 2;
LAB_00000650:
          param_5_01 = uVar5 | (uint)param_5_00 & 0xffffff00 | (uint)bVar1;
          goto LAB_000005d2;
        }
        *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar2;
        param_12 = unaff_r6;
        iVar6 = FUN_0000057a();
        if (iVar6 == 0) {
          return 0;
        }
        if (unaff_r4[3] == 0xa3) {
          in_stack_0000004c = iVar2 * 0x1c;
          if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
            bVar1 = 3;
            goto LAB_00000650;
          }
          if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
            bVar1 = 4;
            goto LAB_00000650;
          }
          iVar2 = FUN_00000636();
          if (iVar2 == 0) {
            bVar1 = 5;
            goto LAB_00000650;
          }
          if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
            uVar3 = FUN_00000598(1);
            return uVar3;
          }
        }
        else {
          if (*(int *)(iVar2 * 0x1c + DAT_0000072c + 0x18) != 0) {
            FUN_00000598(0);
          }
        }
      } while( true );
    }
  }
  return 0;
}



undefined4 FUN_0000050e(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar7;
  undefined param_5;
  ushort param_5_00;
  byte param_11;
  uint param_5_01;
  undefined3 param_11_00;
  uint param_6;
  byte param_7;
  undefined uStack00000009;
  undefined4 param_7_00;
  ushort param_8;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar4 = FUN_0000050e();
  if (iVar4 == 0) {
    return 0;
  }
  param_5_00 = CONCAT11(unaff_r6,unaff_r6);
  param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
  do {
    if (uStack00000012 <= param_9) {
      if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
        param_5_00 = CONCAT11(unaff_r6,param_5);
        param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
        iVar4 = FUN_000005d6((uint)uStack00000012);
        FUN_000005e4(iVar4);
        *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
        *(undefined *)(iVar4 + (param_6 & 0xffff)) = param_5;
        *(undefined *)(iVar4 + (param_6 >> 0x10)) = param_11;
        bVar3 = *unaff_r4;
      }
      else {
        param_10 = param_10 + uStack00000012 + 6;
        if (0x5c0 < param_10) goto LAB_000005cc;
        iVar4 = FUN_00000656();
        uVar1 = (short)(param_6 >> 0x10) + 9;
        iVar7 = 0;
        param_9 = uVar1;
        while (iVar2 = in_stack_0000001c, iVar7 < (int)(uint)param_11) {
          FUN_0000067c(iVar4,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar7 * 2));
          iVar7 = iVar7 + 1;
        }
        param_7 = 0x30;
        param_8 = uVar1;
        FUN_00000696(iVar4,&stack0x00000008);
        iVar7 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
        uVar6 = (uint)param_8 - (iVar7 + 8) & 0xffff;
        param_8 = (ushort)uVar6;
        FUN_000006bc(uVar6 + iVar4,(iVar2 - (iVar7 + 8)) + unaff_r5 + 1);
        param_7 = 0xa2;
        FUN_000006ca(iVar4,&stack0x00000008);
        uVar6 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
        param_8 = (ushort)uVar6;
        FUN_000006ea(uVar6 + iVar4,((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
        param_7 = 0x30;
        FUN_000006f6(iVar4,&stack0x00000008);
        if (param_8 != 0) {
          FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
        }
        bVar3 = *DAT_00000728;
      }
      FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
      return 1;
    }
    in_stack_00000020 = (uint)param_11 + 1 & 0xff;
    param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
    uVar6 = param_5_01 & 0xffff0000;
    param_5_01 = uVar6 | (uint)param_5_00;
    if (0x14 < in_stack_00000020) {
LAB_000005cc:
      param_5_01 = CONCAT31(param_11_00,1);
      goto LAB_000005ce;
    }
    uStack00000009 = 0x30;
    iVar4 = FUN_0000053c();
    if (iVar4 == 0) {
      return 0;
    }
    uStack00000009 = 6;
    iVar4 = FUN_0000054e();
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_0000055a();
    if (iVar4 < 0) {
      bVar3 = 2;
LAB_00000650:
      param_5_01 = uVar6 | (uint)param_5_00 & 0xffffff00 | (uint)bVar3;
      goto LAB_000005d2;
    }
    *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
    uStack00000009 = unaff_r6;
    iVar7 = FUN_0000057a();
    if (iVar7 == 0) {
      return 0;
    }
    if (unaff_r4[3] == 0xa3) {
      in_stack_0000004c = iVar4 * 0x1c;
      if (param_7 != (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
        bVar3 = 3;
        goto LAB_00000650;
      }
      if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
        bVar3 = 4;
        goto LAB_00000650;
      }
      iVar4 = FUN_00000636();
      if (iVar4 == 0) {
        bVar3 = 5;
        goto LAB_00000650;
      }
      if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
        uVar5 = FUN_00000598(1);
        return uVar5;
      }
    }
    else {
      if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
        FUN_00000598(0);
      }
    }
  } while( true );
}



undefined4 FUN_0000053c(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  undefined3 uStack00000001;
  uint param_6;
  byte param_7;
  undefined param_11;
  undefined4 param_7_00;
  ushort param_8;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  do {
    iVar4 = FUN_0000053c();
    if (iVar4 == 0) {
      return 0;
    }
    param_11 = 6;
    iVar4 = FUN_0000054e();
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_0000055a();
    if (iVar4 < 0) {
      bVar3 = 2;
LAB_00000650:
      param_5_01 = param_5_01 & 0xffffff00 | (uint)bVar3;
LAB_000005d2:
      iVar4 = FUN_000005d6((uint)uStack00000012);
      FUN_000005e4(iVar4);
      *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
      *(undefined *)(iVar4 + (param_6 & 0xffff)) = param_5;
      *(undefined *)(iVar4 + (param_6 >> 0x10)) = bStack00000001;
      bVar3 = *unaff_r4;
      goto LAB_0000071c;
    }
    *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
    param_11 = unaff_r6;
    iVar5 = FUN_0000057a();
    if (iVar5 == 0) {
      return 0;
    }
    if (unaff_r4[3] == 0xa3) {
      in_stack_0000004c = iVar4 * 0x1c;
      if (param_7 == (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
        if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
          bVar3 = 4;
        }
        else {
          iVar4 = FUN_00000636();
          if (iVar4 != 0) {
            if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
              uVar6 = FUN_00000598(1);
              return uVar6;
            }
            goto LAB_0000059c;
          }
          bVar3 = 5;
        }
      }
      else {
        bVar3 = 3;
      }
      goto LAB_00000650;
    }
    if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
      FUN_00000598(0);
    }
LAB_0000059c:
    if (uStack00000012 <= param_9) {
      if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
        param_5_00 = CONCAT11(unaff_r6,param_5);
        param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
        goto LAB_000005d2;
      }
      param_10 = param_10 + uStack00000012 + 6;
      if (0x5c0 < param_10) goto LAB_000005cc;
      iVar4 = FUN_00000656();
      uVar1 = (short)(param_6 >> 0x10) + 9;
      iVar5 = 0;
      param_9 = uVar1;
      while (iVar2 = in_stack_0000001c, iVar5 < (int)(uint)bStack00000001) {
        FUN_0000067c(iVar4,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar5 * 2));
        iVar5 = iVar5 + 1;
      }
      param_7 = 0x30;
      param_8 = uVar1;
      FUN_00000696(iVar4,&stack0x00000008);
      iVar5 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
      uVar7 = (uint)param_8 - (iVar5 + 8) & 0xffff;
      param_8 = (ushort)uVar7;
      FUN_000006bc(uVar7 + iVar4,(iVar2 - (iVar5 + 8)) + unaff_r5 + 1);
      param_7 = 0xa2;
      FUN_000006ca(iVar4,&stack0x00000008);
      uVar7 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
      param_8 = (ushort)uVar7;
      FUN_000006ea(uVar7 + iVar4,((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
      param_7 = 0x30;
      FUN_000006f6(iVar4,&stack0x00000008);
      if (param_8 != 0) {
        FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
      }
      bVar3 = *DAT_00000728;
LAB_0000071c:
      FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
      return 1;
    }
    in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
    param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
    param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
    if (0x14 < in_stack_00000020) {
LAB_000005cc:
      param_5_01 = CONCAT31(uStack00000001,1);
      goto LAB_000005ce;
    }
    param_11 = 0x30;
  } while( true );
}



undefined4 FUN_0000054e(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  undefined uStack00000000;
  ushort uStack00000000_00;
  byte bStack00000001;
  uint in_stack_00000000;
  undefined3 uStack00000001;
  uint in_stack_00000004;
  byte bStack00000008;
  undefined uStack00000009;
  undefined4 in_stack_00000008;
  ushort in_stack_0000000c;
  ushort uStack00000010;
  undefined4 in_stack_00000010;
  ushort uStack00000012;
  ushort in_stack_00000014;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  do {
    iVar4 = FUN_0000054e();
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_0000055a();
    if (iVar4 < 0) {
      bVar3 = 2;
LAB_00000650:
      in_stack_00000000 = in_stack_00000000 & 0xffffff00 | (uint)bVar3;
LAB_000005d2:
      iVar4 = FUN_000005d6((uint)uStack00000012);
      FUN_000005e4(iVar4);
      *(undefined *)(iVar4 + (in_stack_00000000 >> 0x10)) = 0xa2;
      *(undefined *)(iVar4 + (in_stack_00000004 & 0xffff)) = uStack00000000;
      *(undefined *)(iVar4 + (in_stack_00000004 >> 0x10)) = bStack00000001;
      bVar3 = *unaff_r4;
      goto LAB_0000071c;
    }
    *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar4;
    uStack00000009 = unaff_r6;
    iVar5 = FUN_0000057a();
    if (iVar5 == 0) {
      return 0;
    }
    if (unaff_r4[3] == 0xa3) {
      in_stack_0000004c = iVar4 * 0x1c;
      if (bStack00000008 == (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
        if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
          bVar3 = 4;
        }
        else {
          iVar4 = FUN_00000636();
          if (iVar4 != 0) {
            if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
              uVar6 = FUN_00000598(1);
              return uVar6;
            }
            goto LAB_0000059c;
          }
          bVar3 = 5;
        }
      }
      else {
        bVar3 = 3;
      }
      goto LAB_00000650;
    }
    if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
      FUN_00000598(0);
    }
LAB_0000059c:
    if (uStack00000012 <= uStack00000010) {
      if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
        uStack00000000_00 = CONCAT11(unaff_r6,uStack00000000);
        in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
        goto LAB_000005d2;
      }
      in_stack_00000014 = in_stack_00000014 + uStack00000012 + 6;
      if (0x5c0 < in_stack_00000014) goto LAB_000005cc;
      iVar4 = FUN_00000656();
      uVar1 = (short)(in_stack_00000004 >> 0x10) + 9;
      iVar5 = 0;
      uStack00000010 = uVar1;
      while (iVar2 = in_stack_0000001c, iVar5 < (int)(uint)bStack00000001) {
        FUN_0000067c(iVar4,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar5 * 2));
        iVar5 = iVar5 + 1;
      }
      bStack00000008 = 0x30;
      in_stack_0000000c = uVar1;
      FUN_00000696(iVar4,&stack0x00000008);
      iVar5 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
      uVar7 = (uint)in_stack_0000000c - (iVar5 + 8) & 0xffff;
      in_stack_0000000c = (ushort)uVar7;
      FUN_000006bc(uVar7 + iVar4,(iVar2 - (iVar5 + 8)) + unaff_r5 + 1);
      bStack00000008 = 0xa2;
      FUN_000006ca(iVar4,&stack0x00000008);
      uVar7 = (uint)in_stack_0000000c - ((uint)DAT_00000728[8] + 5) & 0xffff;
      in_stack_0000000c = (ushort)uVar7;
      FUN_000006ea(uVar7 + iVar4,
                   ((in_stack_00000000 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
      bStack00000008 = 0x30;
      FUN_000006f6(iVar4,&stack0x00000008);
      if (in_stack_0000000c != 0) {
        FUN_0000070c(iVar4,(uint)in_stack_0000000c + iVar4,
                     (uint)uStack00000010 - (uint)in_stack_0000000c);
      }
      bVar3 = *DAT_00000728;
LAB_0000071c:
      FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
      return 1;
    }
    in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
    uStack00000000_00 = CONCAT11((char)in_stack_00000020,uStack00000000);
    in_stack_00000000 = in_stack_00000000 & 0xffff0000 | (uint)uStack00000000_00;
    if (0x14 < in_stack_00000020) {
LAB_000005cc:
      in_stack_00000000 = CONCAT31(uStack00000001,1);
      goto LAB_000005ce;
    }
    uStack00000009 = 0x30;
    iVar4 = FUN_0000053c();
    if (iVar4 == 0) {
      return 0;
    }
    uStack00000009 = 6;
  } while( true );
}



undefined4 FUN_0000055a(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  undefined3 uStack00000001;
  uint param_6;
  byte param_7;
  undefined param_11;
  undefined4 param_7_00;
  ushort param_8;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  int in_stack_0000001c;
  uint param_12;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  do {
    iVar4 = FUN_0000055a();
    if (iVar4 < 0) {
      bVar3 = 2;
LAB_00000650:
      param_5_01 = param_5_01 & 0xffffff00 | (uint)bVar3;
LAB_000005d2:
      iVar4 = FUN_000005d6((uint)uStack00000012);
      FUN_000005e4(iVar4);
      *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
      *(undefined *)(iVar4 + (param_6 & 0xffff)) = param_5;
      *(undefined *)(iVar4 + (param_6 >> 0x10)) = bStack00000001;
      bVar3 = *unaff_r4;
      goto LAB_0000071c;
    }
    *(undefined2 *)((int)&stack0x00000020 + param_12 * 2 + 2) = (short)iVar4;
    param_11 = unaff_r6;
    iVar5 = FUN_0000057a();
    if (iVar5 == 0) {
      return 0;
    }
    if (unaff_r4[3] == 0xa3) {
      in_stack_0000004c = iVar4 * 0x1c;
      if (param_7 == (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
        if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
          bVar3 = 4;
        }
        else {
          iVar4 = FUN_00000636();
          if (iVar4 != 0) {
            if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
              uVar6 = FUN_00000598(1);
              return uVar6;
            }
            goto LAB_0000059c;
          }
          bVar3 = 5;
        }
      }
      else {
        bVar3 = 3;
      }
      goto LAB_00000650;
    }
    if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) {
      FUN_00000598(0);
    }
LAB_0000059c:
    if (uStack00000012 <= param_9) {
      if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
        param_5_00 = CONCAT11(unaff_r6,param_5);
        param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
        goto LAB_000005d2;
      }
      param_10 = param_10 + uStack00000012 + 6;
      if (0x5c0 < param_10) goto LAB_000005cc;
      iVar4 = FUN_00000656();
      uVar1 = (short)(param_6 >> 0x10) + 9;
      iVar5 = 0;
      param_9 = uVar1;
      while (iVar2 = in_stack_0000001c, iVar5 < (int)(uint)bStack00000001) {
        FUN_0000067c(iVar4,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar5 * 2));
        iVar5 = iVar5 + 1;
      }
      param_7 = 0x30;
      param_8 = uVar1;
      FUN_00000696(iVar4,&stack0x00000008);
      iVar5 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
      uVar7 = (uint)param_8 - (iVar5 + 8) & 0xffff;
      param_8 = (ushort)uVar7;
      FUN_000006bc(uVar7 + iVar4,(iVar2 - (iVar5 + 8)) + unaff_r5 + 1);
      param_7 = 0xa2;
      FUN_000006ca(iVar4,&stack0x00000008);
      uVar7 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
      param_8 = (ushort)uVar7;
      FUN_000006ea(uVar7 + iVar4,((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
      param_7 = 0x30;
      FUN_000006f6(iVar4,&stack0x00000008);
      if (param_8 != 0) {
        FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
      }
      bVar3 = *DAT_00000728;
LAB_0000071c:
      FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
      return 1;
    }
    param_12 = (uint)bStack00000001 + 1 & 0xff;
    param_5_00 = CONCAT11((char)param_12,param_5);
    param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
    if (0x14 < param_12) {
LAB_000005cc:
      param_5_01 = CONCAT31(uStack00000001,1);
      goto LAB_000005ce;
    }
    param_11 = 0x30;
    iVar4 = FUN_0000053c();
    if (iVar4 == 0) {
      return 0;
    }
    param_11 = 6;
    iVar4 = FUN_0000054e();
    if (iVar4 == 0) {
      return 0;
    }
  } while( true );
}



undefined4 FUN_0000057a(void)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar7;
  int unaff_r7;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  undefined3 uStack00000001;
  uint param_6;
  byte param_7;
  undefined uStack00000009;
  undefined4 param_7_00;
  ushort param_8;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int param_11;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  do {
    iVar4 = FUN_0000057a();
    if (iVar4 == 0) {
      return 0;
    }
    if (unaff_r4[3] == 0xa3) {
      param_11 = unaff_r7 * 0x1c;
      if (param_7 == (*(byte *)(DAT_0000072c + param_11) & 0x7f)) {
        if ((int)((uint)*(byte *)(DAT_0000072c + param_11) << 0x18) < 0) {
          bVar3 = 4;
        }
        else {
          iVar4 = FUN_00000636();
          if (iVar4 != 0) {
            if (*(int *)(param_11 + DAT_0000072c + 0x18) != 0) {
              uVar5 = FUN_00000598(1);
              return uVar5;
            }
            goto LAB_0000059c;
          }
          bVar3 = 5;
        }
      }
      else {
        bVar3 = 3;
      }
LAB_00000650:
      param_5_01 = param_5_01 & 0xffffff00 | (uint)bVar3;
LAB_000005d2:
      iVar4 = FUN_000005d6((uint)uStack00000012);
      FUN_000005e4(iVar4);
      *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
      *(undefined *)(iVar4 + (param_6 & 0xffff)) = param_5;
      *(undefined *)(iVar4 + (param_6 >> 0x10)) = bStack00000001;
      bVar3 = *unaff_r4;
      goto LAB_0000071c;
    }
    if (*(int *)(unaff_r7 * 0x1c + DAT_0000072c + 0x18) != 0) {
      FUN_00000598(0);
    }
LAB_0000059c:
    if (uStack00000012 <= param_9) {
      if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
        param_5_00 = CONCAT11(unaff_r6,param_5);
        param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
        goto LAB_000005d2;
      }
      param_10 = param_10 + uStack00000012 + 6;
      if (0x5c0 < param_10) goto LAB_000005cc;
      iVar4 = FUN_00000656();
      uVar1 = (short)(param_6 >> 0x10) + 9;
      iVar7 = 0;
      param_9 = uVar1;
      while (iVar2 = in_stack_0000001c, iVar7 < (int)(uint)bStack00000001) {
        FUN_0000067c(iVar4,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar7 * 2));
        iVar7 = iVar7 + 1;
      }
      param_7 = 0x30;
      param_8 = uVar1;
      FUN_00000696(iVar4,&stack0x00000008);
      iVar7 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
      uVar6 = (uint)param_8 - (iVar7 + 8) & 0xffff;
      param_8 = (ushort)uVar6;
      FUN_000006bc(uVar6 + iVar4,(iVar2 - (iVar7 + 8)) + unaff_r5 + 1);
      param_7 = 0xa2;
      FUN_000006ca(iVar4,&stack0x00000008);
      uVar6 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
      param_8 = (ushort)uVar6;
      FUN_000006ea(uVar6 + iVar4,((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
      param_7 = 0x30;
      FUN_000006f6(iVar4,&stack0x00000008);
      if (param_8 != 0) {
        FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
      }
      bVar3 = *DAT_00000728;
LAB_0000071c:
      FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
      return 1;
    }
    in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
    param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
    param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
    if (0x14 < in_stack_00000020) {
LAB_000005cc:
      param_5_01 = CONCAT31(uStack00000001,1);
      goto LAB_000005ce;
    }
    uStack00000009 = 0x30;
    iVar4 = FUN_0000053c();
    if (iVar4 == 0) {
      return 0;
    }
    uStack00000009 = 6;
    iVar4 = FUN_0000054e();
    if (iVar4 == 0) {
      return 0;
    }
    unaff_r7 = FUN_0000055a();
    if (unaff_r7 < 0) {
      bVar3 = 2;
      goto LAB_00000650;
    }
    *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)unaff_r7;
    uStack00000009 = unaff_r6;
  } while( true );
}



undefined4 FUN_00000598(undefined4 param_1)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar7;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  uint param_5_01;
  undefined3 uStack00000001;
  uint param_6;
  byte param_7;
  undefined uStack00000009;
  undefined4 param_7_00;
  ushort param_8;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  int param_12;
  uint param_13;
  int in_stack_0000004c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
code_r0x00000598:
  FUN_00000598(param_1);
LAB_0000059c:
  if (uStack00000012 <= param_9) {
    if (DAT_00000728[3] == 0xa3) {
LAB_000005ce:
      param_5_00 = CONCAT11(unaff_r6,param_5);
      param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
LAB_000005d2:
      iVar4 = FUN_000005d6((uint)uStack00000012);
      FUN_000005e4(iVar4);
      *(undefined *)(iVar4 + (param_5_01 >> 0x10)) = 0xa2;
      *(undefined *)(iVar4 + (param_6 & 0xffff)) = param_5;
      *(undefined *)(iVar4 + (param_6 >> 0x10)) = bStack00000001;
      bVar3 = *unaff_r4;
    }
    else {
      param_10 = param_10 + uStack00000012 + 6;
      if (0x5c0 < param_10) goto LAB_000005cc;
      iVar4 = FUN_00000656();
      uVar1 = (short)(param_6 >> 0x10) + 9;
      iVar7 = 0;
      param_9 = uVar1;
      while (iVar2 = param_12, iVar7 < (int)(uint)bStack00000001) {
        FUN_0000067c(iVar4,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar7 * 2));
        iVar7 = iVar7 + 1;
      }
      param_7 = 0x30;
      param_8 = uVar1;
      FUN_00000696(iVar4,&stack0x00000008);
      iVar7 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
      uVar6 = (uint)param_8 - (iVar7 + 8) & 0xffff;
      param_8 = (ushort)uVar6;
      FUN_000006bc(uVar6 + iVar4,(iVar2 - (iVar7 + 8)) + unaff_r5 + 1);
      param_7 = 0xa2;
      FUN_000006ca(iVar4,&stack0x00000008);
      uVar6 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
      param_8 = (ushort)uVar6;
      FUN_000006ea(uVar6 + iVar4,((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
      param_7 = 0x30;
      FUN_000006f6(iVar4,&stack0x00000008);
      if (param_8 != 0) {
        FUN_0000070c(iVar4,(uint)param_8 + iVar4,(uint)param_9 - (uint)param_8);
      }
      bVar3 = *DAT_00000728;
    }
    FUN_00000720((uint)bVar3,in_stack_00000058,in_stack_0000005c,iVar4);
    return 1;
  }
  param_13 = (uint)bStack00000001 + 1 & 0xff;
  param_5_00 = CONCAT11((char)param_13,param_5);
  uVar6 = param_5_01 & 0xffff0000;
  param_5_01 = uVar6 | (uint)param_5_00;
  if (0x14 < param_13) {
LAB_000005cc:
    param_5_01 = CONCAT31(uStack00000001,1);
    goto LAB_000005ce;
  }
  uStack00000009 = 0x30;
  iVar4 = FUN_0000053c();
  if (iVar4 == 0) {
    return 0;
  }
  uStack00000009 = 6;
  iVar4 = FUN_0000054e();
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_0000055a();
  if (iVar4 < 0) {
    bVar3 = 2;
  }
  else {
    *(undefined2 *)((int)&stack0x00000020 + param_13 * 2 + 2) = (short)iVar4;
    uStack00000009 = unaff_r6;
    iVar7 = FUN_0000057a();
    if (iVar7 == 0) {
      return 0;
    }
    if (unaff_r4[3] != 0xa3) {
      if (*(int *)(iVar4 * 0x1c + DAT_0000072c + 0x18) != 0) goto code_r0x00000596;
      goto LAB_0000059c;
    }
    in_stack_0000004c = iVar4 * 0x1c;
    if (param_7 == (*(byte *)(DAT_0000072c + in_stack_0000004c) & 0x7f)) {
      if ((int)((uint)*(byte *)(DAT_0000072c + in_stack_0000004c) << 0x18) < 0) {
        bVar3 = 4;
        goto LAB_00000650;
      }
      iVar4 = FUN_00000636();
      if (iVar4 != 0) {
        if (*(int *)(in_stack_0000004c + DAT_0000072c + 0x18) != 0) {
          uVar5 = FUN_00000598(1);
          return uVar5;
        }
        goto LAB_0000059c;
      }
      bVar3 = 5;
    }
    else {
      bVar3 = 3;
    }
  }
LAB_00000650:
  param_5_01 = uVar6 | (uint)param_5_00 & 0xffffff00 | (uint)bVar3;
  goto LAB_000005d2;
code_r0x00000596:
  param_1 = 0;
  goto code_r0x00000598;
}



undefined4 FUN_000005d6(void)

{
  int iVar1;
  byte *unaff_r4;
  undefined param_5;
  undefined uStack00000001;
  uint param_5_00;
  uint param_6;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar1 = FUN_000005d6();
  FUN_000005e4(iVar1);
  *(undefined *)(iVar1 + (param_5_00 >> 0x10)) = 0xa2;
  *(undefined *)(iVar1 + (param_6 & 0xffff)) = param_5;
  *(undefined *)(iVar1 + (param_6 >> 0x10)) = uStack00000001;
  FUN_00000720((uint)*unaff_r4,in_stack_00000058,in_stack_0000005c,iVar1);
  return 1;
}



undefined4 FUN_000005e4(void)

{
  byte *unaff_r4;
  int unaff_r6;
  undefined param_5_00;
  undefined uStack00000001;
  uint param_5;
  uint param_6;
  undefined4 param_13;
  undefined4 in_stack_0000005c;
  
  FUN_000005e4();
  *(undefined *)(unaff_r6 + (param_5 >> 0x10)) = 0xa2;
  *(undefined *)(unaff_r6 + (param_6 & 0xffff)) = param_5_00;
  *(undefined *)(unaff_r6 + (param_6 >> 0x10)) = uStack00000001;
  FUN_00000720((uint)*unaff_r4,param_13,in_stack_0000005c);
  return 1;
}



undefined4 FUN_00000636(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *unaff_r4;
  int unaff_r5;
  undefined unaff_r6;
  int iVar6;
  undefined param_5;
  ushort param_5_00;
  byte bStack00000001;
  undefined3 uStack00000001;
  uint param_5_01;
  uint param_6;
  ushort uStack00000006;
  byte param_7;
  undefined uStack00000009;
  undefined4 param_7_00;
  ushort param_8;
  ushort param_9;
  undefined4 param_9_00;
  ushort uStack00000012;
  ushort param_10;
  int in_stack_0000001c;
  uint in_stack_00000020;
  int param_11;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  do {
    iVar3 = FUN_00000636();
    if (iVar3 == 0) {
      bVar2 = 5;
      goto LAB_00000650;
    }
    if (*(int *)(param_11 + DAT_0000072c + 0x18) != 0) {
      uVar4 = FUN_00000598(1);
      return uVar4;
    }
LAB_0000059c:
    if (uStack00000012 <= param_9) {
      if (DAT_00000728[3] != 0xa3) {
        param_10 = param_10 + uStack00000012 + 6;
        if (param_10 < 0x5c1) {
          iVar3 = FUN_00000656();
          iVar6 = 0;
          param_9 = uStack00000006 + 9;
          while (iVar1 = in_stack_0000001c, iVar6 < (int)(uint)bStack00000001) {
            FUN_0000067c(iVar3,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar6 * 2));
            iVar6 = iVar6 + 1;
          }
          param_7 = 0x30;
          param_8 = uStack00000006 + 9;
          FUN_00000696(iVar3,&stack0x00000008);
          iVar6 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
          uVar5 = (uint)param_8 - (iVar6 + 8) & 0xffff;
          param_8 = (ushort)uVar5;
          FUN_000006bc(uVar5 + iVar3,(iVar1 - (iVar6 + 8)) + unaff_r5 + 1);
          param_7 = 0xa2;
          FUN_000006ca(iVar3,&stack0x00000008);
          uVar5 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
          param_8 = (ushort)uVar5;
          FUN_000006ea(uVar5 + iVar3,((param_5_01 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5
                      );
          param_7 = 0x30;
          FUN_000006f6(iVar3,&stack0x00000008);
          if (param_8 != 0) {
            FUN_0000070c(iVar3,(uint)param_8 + iVar3,(uint)param_9 - (uint)param_8);
          }
          bVar2 = *DAT_00000728;
          goto LAB_0000071c;
        }
        goto LAB_000005cc;
      }
LAB_000005ce:
      param_5_00 = CONCAT11(unaff_r6,param_5);
      param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
      goto LAB_000005d2;
    }
    in_stack_00000020 = (uint)bStack00000001 + 1 & 0xff;
    param_5_00 = CONCAT11((char)in_stack_00000020,param_5);
    param_5_01 = param_5_01 & 0xffff0000 | (uint)param_5_00;
    if (0x14 < in_stack_00000020) {
LAB_000005cc:
      param_5_01 = CONCAT31(uStack00000001,1);
      goto LAB_000005ce;
    }
    uStack00000009 = 0x30;
    iVar3 = FUN_0000053c();
    if (iVar3 == 0) {
      return 0;
    }
    uStack00000009 = 6;
    iVar3 = FUN_0000054e();
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_0000055a();
    if (iVar3 < 0) {
      bVar2 = 2;
      goto LAB_00000650;
    }
    *(undefined2 *)((int)&stack0x00000020 + in_stack_00000020 * 2 + 2) = (short)iVar3;
    uStack00000009 = unaff_r6;
    iVar6 = FUN_0000057a();
    if (iVar6 == 0) {
      return 0;
    }
    if (unaff_r4[3] != 0xa3) {
      if (*(int *)(iVar3 * 0x1c + DAT_0000072c + 0x18) != 0) {
        FUN_00000598(0);
      }
      goto LAB_0000059c;
    }
    param_11 = iVar3 * 0x1c;
    if (param_7 != (*(byte *)(DAT_0000072c + param_11) & 0x7f)) {
      bVar2 = 3;
      goto LAB_00000650;
    }
    if ((int)((uint)*(byte *)(DAT_0000072c + param_11) << 0x18) < 0) {
      bVar2 = 4;
LAB_00000650:
      param_5_01 = param_5_01 & 0xffffff00 | (uint)bVar2;
LAB_000005d2:
      iVar3 = FUN_000005d6((uint)uStack00000012);
      FUN_000005e4(iVar3);
      *(undefined *)(iVar3 + (param_5_01 >> 0x10)) = 0xa2;
      *(undefined *)(iVar3 + (param_6 & 0xffff)) = param_5;
      *(undefined *)(iVar3 + (uint)uStack00000006) = bStack00000001;
      bVar2 = *unaff_r4;
LAB_0000071c:
      FUN_00000720((uint)bVar2,in_stack_00000058,in_stack_0000005c,iVar3);
      return 1;
    }
  } while( true );
}



undefined4 FUN_00000656(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r5;
  int iVar5;
  uint param_5;
  undefined4 param_6;
  undefined param_7;
  ushort param_8;
  ushort param_9;
  int param_12;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar3 = FUN_00000656();
  uVar1 = (short)((uint)param_6 >> 0x10) + 9;
  iVar5 = 0;
  param_9 = uVar1;
  while (iVar2 = param_12, iVar5 < (int)(param_5 >> 8 & 0xff)) {
    FUN_0000067c(iVar3,&stack0x00000008,(uint)*(ushort *)(&stack0x00000024 + iVar5 * 2));
    iVar5 = iVar5 + 1;
  }
  param_7 = 0x30;
  param_8 = uVar1;
  FUN_00000696(iVar3,&stack0x00000008);
  iVar5 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
  uVar4 = (uint)param_8 - (iVar5 + 8) & 0xffff;
  param_8 = (ushort)uVar4;
  FUN_000006bc(uVar4 + iVar3,(iVar2 - (iVar5 + 8)) + unaff_r5 + 1);
  param_7 = 0xa2;
  FUN_000006ca(iVar3,&stack0x00000008);
  uVar4 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
  param_8 = (ushort)uVar4;
  FUN_000006ea(uVar4 + iVar3,((param_5 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
  param_7 = 0x30;
  FUN_000006f6(iVar3,&stack0x00000008);
  if (param_8 != 0) {
    FUN_0000070c(iVar3,(uint)param_8 + iVar3,(uint)param_9 - (uint)param_8);
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c,iVar3);
  return 1;
}



undefined4 FUN_0000067c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  uint param_5;
  uint param_6;
  int param_11;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  do {
    FUN_0000067c();
    unaff_r6 = unaff_r6 + 1;
  } while (unaff_r6 < unaff_r7);
  FUN_00000696();
  iVar1 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
  uVar2 = (param_6 & 0xffff) - (iVar1 + 8) & 0xffff;
  FUN_000006bc(uVar2 + unaff_r4,(param_11 - (iVar1 + 8)) + unaff_r5 + 1);
  FUN_000006ca();
  uVar2 = uVar2 - ((uint)DAT_00000728[8] + 5) & 0xffff;
  FUN_000006ea(uVar2 + unaff_r4,((param_5 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
  FUN_000006f6();
  if ((short)uVar2 != 0) {
    FUN_0000070c();
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_00000696(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint in_stack_00000000;
  ushort in_stack_0000000c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  FUN_00000696();
  iVar1 = FUN_0000069e(*(undefined4 *)(DAT_00000728 + 4));
  uVar2 = (uint)in_stack_0000000c - (iVar1 + 8) & 0xffff;
  FUN_000006bc(uVar2 + unaff_r4,(unaff_r6 - (iVar1 + 8)) + unaff_r5 + 1);
  FUN_000006ca();
  uVar2 = uVar2 - ((uint)DAT_00000728[8] + 5) & 0xffff;
  FUN_000006ea(uVar2 + unaff_r4,
               ((in_stack_00000000 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
  FUN_000006f6();
  if ((short)uVar2 != 0) {
    FUN_0000070c();
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_0000069e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint param_5;
  ushort param_8;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  iVar1 = FUN_0000069e();
  uVar2 = (uint)param_8 - (iVar1 + 8) & 0xffff;
  FUN_000006bc(uVar2 + unaff_r4,(unaff_r6 - (iVar1 + 8)) + unaff_r5 + 1);
  FUN_000006ca();
  uVar2 = uVar2 - ((uint)DAT_00000728[8] + 5) & 0xffff;
  FUN_000006ea(uVar2 + unaff_r4,((param_5 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
  FUN_000006f6();
  if ((short)uVar2 != 0) {
    FUN_0000070c();
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_000006bc(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  uint param_5;
  ushort in_stack_0000000c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  FUN_000006bc();
  FUN_000006ca();
  uVar1 = (uint)in_stack_0000000c - ((uint)DAT_00000728[8] + 5) & 0xffff;
  FUN_000006ea(uVar1 + unaff_r4,((param_5 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
  FUN_000006f6();
  if ((short)uVar1 != 0) {
    FUN_0000070c();
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_000006ca(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  uint param_5;
  ushort param_8;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  FUN_000006ca();
  uVar1 = (uint)param_8 - ((uint)DAT_00000728[8] + 5) & 0xffff;
  FUN_000006ea(uVar1 + unaff_r4,((param_5 >> 0x10) - ((uint)DAT_00000728[8] + 5)) + unaff_r5);
  FUN_000006f6();
  if ((short)uVar1 != 0) {
    FUN_0000070c();
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_000006ea(void)

{
  short in_stack_0000000c;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  FUN_000006ea();
  FUN_000006f6();
  if (in_stack_0000000c != 0) {
    FUN_0000070c();
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_000006f6(void)

{
  short param_8;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  FUN_000006f6();
  if (param_8 != 0) {
    FUN_0000070c();
  }
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_0000070c(void)

{
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  
  FUN_0000070c();
  FUN_00000720((uint)*DAT_00000728,in_stack_00000058,in_stack_0000005c);
  return 1;
}



undefined4 FUN_00000720(void)

{
  FUN_00000720();
  return 1;
}



uint FUN_00000764(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00000764();
  if (iVar2 < 0x13) {
    FUN_0000077c(DAT_00000790);
    iVar1 = DAT_00000790;
    *(undefined *)(DAT_00000790 + -1) = (char)iVar2;
    *(undefined *)(iVar1 + iVar2) = 0;
  }
  return (uint)(iVar2 < 0x13);
}



undefined4 FUN_0000077c(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_0000077c();
  iVar1 = DAT_00000790;
  *(undefined *)(DAT_00000790 + -1) = (char)unaff_r4;
  *(undefined *)(iVar1 + unaff_r4) = 0;
  return 1;
}



undefined4
FUN_000007a8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined param_6,ushort param_7,ushort param_8,ushort param_9,int param_10,
            undefined4 param_11,int param_11_00,uint param_12,undefined4 param_13)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_r4;
  ushort *unaff_r5;
  int unaff_r6;
  uint uVar7;
  int *unaff_r7;
  int iVar8;
  ushort uStack00000006;
  undefined2 uStack0000000a;
  ushort uStack0000000e;
  
  while (iVar4 = FUN_000007a8(param_1,param_2,param_3), iVar4 != 1) {
    unaff_r4 = unaff_r4 + 1;
    if (*unaff_r7 <= unaff_r4) break;
    param_3 = 9;
    param_2 = unaff_r6 + 0x1d;
    param_1 = 0x9c4;
    unaff_r6 = unaff_r6 + 0x1c;
  }
  if ((unaff_r4 != *unaff_r7) && (param_12 < 7)) {
    if (param_12 < 6) {
      param_13 = 0;
    }
    uVar7 = 0;
    if (unaff_r5 != (ushort *)0x0) {
      uVar2 = *unaff_r5;
      uVar7 = (uint)uVar2;
      unaff_r5 = unaff_r5 + 1;
      if (0x14 < uVar2) {
        return 0;
      }
      iVar4 = 0;
      while (iVar4 < (int)uVar7) {
        if (*unaff_r7 <= (int)(uint)unaff_r5[iVar4]) {
          return 0;
        }
        iVar4 = iVar4 + 1;
      }
    }
    if (param_11_00 == 0) {
      param_11_00 = DAT_000009d0;
    }
    iVar4 = 0;
    param_9 = 0;
    while (iVar4 < (int)uVar7) {
      iVar8 = (uint)unaff_r5[iVar4] * 0x1c + DAT_000009bc;
      param_9 = param_9 + *(byte *)(iVar8 + 1) + (ushort)*(byte *)(iVar8 + 0x13) + 6;
      if (*(int *)(iVar8 + 0x18) != 0) {
        FUN_00000828(0);
      }
      iVar4 = iVar4 + 1;
    }
    param_10 = unaff_r4 * 0x1c + DAT_000009bc;
    iVar4 = (uint)DAT_000009d4[8] + (uint)*(byte *)(param_10 + 0x13) + 0x25;
    uStack0000000e = (ushort)iVar4;
    uVar5 = (uint)param_9 + iVar4 & 0xffff;
    param_9 = (ushort)uVar5;
    if (uVar5 < 0x5c1) {
      iVar4 = FUN_00000868();
      iVar8 = 0;
      param_8 = uStack0000000e;
      while (iVar8 < (int)uVar7) {
        FUN_00000880(iVar4,&param_6,(uint)unaff_r5[iVar8]);
        iVar8 = iVar8 + 1;
      }
      param_6 = 0x30;
      param_7 = uStack0000000e;
      FUN_00000898(iVar4,&param_6);
      param_6 = 0x43;
      FUN_000008aa(iVar4,&param_6,*DAT_000009d8);
      param_6 = 2;
      FUN_000008ba(iVar4,&param_6,param_13);
      FUN_000008c4(iVar4,&param_6,param_12);
      iVar8 = iVar4 + 1;
      uVar7 = (uint)param_7 - 6 & 0xffff;
      param_7 = (ushort)uVar7;
      *(undefined *)(iVar4 + uVar7) = 0x40;
      *(undefined *)(uVar7 + iVar8) = 4;
      uVar6 = FUN_000008e6(param_11_00);
      FUN_000008f6((uint)param_7 + iVar4 + 2,uVar6,4);
      bVar1 = *(byte *)(param_10 + 0x13);
      uStack00000006 = (ushort)bVar1;
      uVar7 = (uint)param_7 - (uint)bVar1;
      uStack0000000a = (undefined2)uVar7;
      uVar5 = uVar7 - 2 & 0xffff;
      param_7 = (ushort)uVar5;
      *(undefined *)(iVar4 + uVar5) = 6;
      *(byte *)(uVar5 + iVar8) = bVar1;
      FUN_0000092c((uVar7 & 0xffff) + iVar4,*(undefined4 *)(param_10 + 0x14),(uint)uStack00000006);
      param_6 = 0xa4;
      FUN_0000093a(iVar4,&param_6);
      pbVar3 = DAT_000009d4;
      uVar7 = (uint)param_7 - (uint)DAT_000009d4[8];
      uStack0000000a = (undefined2)uVar7;
      uVar5 = uVar7 - 2 & 0xffff;
      param_7 = (ushort)uVar5;
      *(undefined *)(iVar4 + uVar5) = 4;
      *(byte *)(uVar5 + iVar8) = pbVar3[8];
      FUN_00000968((uVar7 & 0xffff) + iVar4,pbVar3 + 9,(uint)pbVar3[8]);
      param_6 = 2;
      FUN_00000978(iVar4,&param_6,0);
      param_6 = 0x30;
      FUN_00000986(iVar4,&param_6);
      if (param_7 != 0) {
        FUN_0000099c(iVar4,(uint)param_7 + iVar4,(uint)param_8 - (uint)param_7);
      }
      FUN_000009b2((uint)*pbVar3,param_11_00,(uint)*(ushort *)(DAT_000009d0 + -2),iVar4);
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00000828(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int iVar7;
  undefined param_6;
  ushort uStack00000006;
  ushort param_7;
  undefined2 uStack0000000a;
  ushort param_8;
  ushort uStack0000000e;
  ushort param_9;
  int param_10;
  undefined4 param_12;
  undefined4 param_13;
  undefined4 in_stack_00000024;
  
  do {
    FUN_00000828(param_1);
    do {
      unaff_r7 = unaff_r7 + 1;
      if (unaff_r6 <= unaff_r7) {
        param_10 = unaff_r4 * 0x1c + DAT_000009bc;
        iVar3 = (uint)DAT_000009d4[8] + (uint)*(byte *)(param_10 + 0x13) + 0x25;
        uStack0000000e = (ushort)iVar3;
        uVar4 = (uint)param_9 + iVar3 & 0xffff;
        param_9 = (ushort)uVar4;
        if (uVar4 < 0x5c1) {
          iVar3 = FUN_00000868();
          iVar7 = 0;
          param_8 = uStack0000000e;
          while (iVar7 < unaff_r6) {
            FUN_00000880(iVar3,&stack0x00000004,(uint)*(ushort *)(unaff_r5 + iVar7 * 2));
            iVar7 = iVar7 + 1;
          }
          param_6 = 0x30;
          param_7 = uStack0000000e;
          FUN_00000898(iVar3,&stack0x00000004);
          param_6 = 0x43;
          FUN_000008aa(iVar3,&stack0x00000004,*DAT_000009d8);
          param_6 = 2;
          FUN_000008ba(iVar3,&stack0x00000004,in_stack_00000024);
          FUN_000008c4(iVar3,&stack0x00000004,param_13);
          iVar7 = iVar3 + 1;
          uVar4 = (uint)param_7 - 6 & 0xffff;
          param_7 = (ushort)uVar4;
          *(undefined *)(iVar3 + uVar4) = 0x40;
          *(undefined *)(uVar4 + iVar7) = 4;
          uVar5 = FUN_000008e6(param_12);
          FUN_000008f6((uint)param_7 + iVar3 + 2,uVar5,4);
          bVar1 = *(byte *)(param_10 + 0x13);
          uStack00000006 = (ushort)bVar1;
          uVar4 = (uint)param_7 - (uint)bVar1;
          uStack0000000a = (undefined2)uVar4;
          uVar6 = uVar4 - 2 & 0xffff;
          param_7 = (ushort)uVar6;
          *(undefined *)(iVar3 + uVar6) = 6;
          *(byte *)(uVar6 + iVar7) = bVar1;
          FUN_0000092c((uVar4 & 0xffff) + iVar3,*(undefined4 *)(param_10 + 0x14),
                       (uint)uStack00000006);
          param_6 = 0xa4;
          FUN_0000093a(iVar3,&stack0x00000004);
          pbVar2 = DAT_000009d4;
          uVar4 = (uint)param_7 - (uint)DAT_000009d4[8];
          uStack0000000a = (undefined2)uVar4;
          uVar6 = uVar4 - 2 & 0xffff;
          param_7 = (ushort)uVar6;
          *(undefined *)(iVar3 + uVar6) = 4;
          *(byte *)(uVar6 + iVar7) = pbVar2[8];
          FUN_00000968((uVar4 & 0xffff) + iVar3,pbVar2 + 9,(uint)pbVar2[8]);
          param_6 = 2;
          FUN_00000978(iVar3,&stack0x00000004,0);
          param_6 = 0x30;
          FUN_00000986(iVar3,&stack0x00000004);
          if (param_7 != 0) {
            FUN_0000099c(iVar3,(uint)param_7 + iVar3,(uint)param_8 - (uint)param_7);
          }
          FUN_000009b2((uint)*pbVar2,param_12,(uint)*(ushort *)(DAT_000009d0 + -2),iVar3);
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
        return uVar5;
      }
      iVar3 = (uint)*(ushort *)(unaff_r5 + unaff_r7 * 2) * 0x1c + DAT_000009bc;
      param_9 = param_9 + *(byte *)(iVar3 + 1) + (ushort)*(byte *)(iVar3 + 0x13) + 6;
    } while (*(int *)(iVar3 + 0x18) == 0);
    param_1 = 0;
  } while( true );
}



undefined4 FUN_00000868(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r5;
  int unaff_r6;
  int iVar7;
  undefined param_6;
  ushort uStack00000006;
  ushort param_7;
  undefined2 uStack0000000a;
  ushort param_8;
  undefined4 param_8_00;
  ushort param_11;
  int param_10;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  iVar3 = FUN_00000868();
  iVar7 = 0;
  param_8 = param_11;
  while (iVar7 < unaff_r6) {
    FUN_00000880(iVar3,&stack0x00000004,(uint)*(ushort *)(unaff_r5 + iVar7 * 2));
    iVar7 = iVar7 + 1;
  }
  param_6 = 0x30;
  param_7 = param_11;
  FUN_00000898(iVar3,&stack0x00000004);
  param_6 = 0x43;
  FUN_000008aa(iVar3,&stack0x00000004,*DAT_000009d8);
  param_6 = 2;
  FUN_000008ba(iVar3,&stack0x00000004,in_stack_00000024);
  FUN_000008c4(iVar3,&stack0x00000004,in_stack_00000020);
  iVar7 = iVar3 + 1;
  uVar5 = (uint)param_7 - 6 & 0xffff;
  param_7 = (ushort)uVar5;
  *(undefined *)(iVar3 + uVar5) = 0x40;
  *(undefined *)(uVar5 + iVar7) = 4;
  uVar4 = FUN_000008e6(in_stack_0000001c);
  FUN_000008f6((uint)param_7 + iVar3 + 2,uVar4,4);
  bVar1 = *(byte *)(param_10 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar5 = (uint)param_7 - (uint)bVar1;
  uStack0000000a = (undefined2)uVar5;
  uVar6 = uVar5 - 2 & 0xffff;
  param_7 = (ushort)uVar6;
  *(undefined *)(iVar3 + uVar6) = 6;
  *(byte *)(uVar6 + iVar7) = bVar1;
  FUN_0000092c((uVar5 & 0xffff) + iVar3,*(undefined4 *)(param_10 + 0x14),(uint)uStack00000006);
  param_6 = 0xa4;
  FUN_0000093a(iVar3,&stack0x00000004);
  pbVar2 = DAT_000009d4;
  uVar5 = (uint)param_7 - (uint)DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar5;
  uVar6 = uVar5 - 2 & 0xffff;
  param_7 = (ushort)uVar6;
  *(undefined *)(iVar3 + uVar6) = 4;
  *(byte *)(uVar6 + iVar7) = pbVar2[8];
  FUN_00000968((uVar5 & 0xffff) + iVar3,pbVar2 + 9,(uint)pbVar2[8]);
  param_6 = 2;
  FUN_00000978(iVar3,&stack0x00000004,0);
  param_6 = 0x30;
  FUN_00000986(iVar3,&stack0x00000004);
  if (param_7 != 0) {
    FUN_0000099c(iVar3,(uint)param_7 + iVar3,(uint)param_8 - (uint)param_7);
  }
  FUN_000009b2((uint)*pbVar2,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2),iVar3);
  return 1;
}



undefined4 FUN_00000880(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  int unaff_r6;
  int iVar6;
  int unaff_r7;
  ushort uStack00000006;
  undefined2 uStack0000000a;
  uint param_8;
  int param_10;
  undefined4 in_stack_0000001c;
  
  do {
    FUN_00000880();
    unaff_r7 = unaff_r7 + 1;
  } while (unaff_r7 < unaff_r6);
  FUN_00000898();
  FUN_000008aa();
  FUN_000008ba();
  FUN_000008c4();
  iVar6 = unaff_r4 + 1;
  uVar4 = (param_8 >> 0x10) - 6 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 0x40;
  *(undefined *)(uVar4 + iVar6) = 4;
  uVar3 = FUN_000008e6(in_stack_0000001c);
  FUN_000008f6(uVar4 + unaff_r4 + 2,uVar3,4);
  bVar1 = *(byte *)(param_10 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar4 = uVar4 - bVar1;
  uStack0000000a = (undefined2)uVar4;
  uVar5 = uVar4 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar5) = 6;
  *(byte *)(uVar5 + iVar6) = bVar1;
  FUN_0000092c((uVar4 & 0xffff) + unaff_r4,*(undefined4 *)(param_10 + 0x14),(uint)uStack00000006);
  FUN_0000093a();
  pbVar2 = DAT_000009d4;
  uVar5 = uVar5 - DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar5;
  uVar4 = uVar5 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 4;
  *(byte *)(uVar4 + iVar6) = pbVar2[8];
  FUN_00000968((uVar5 & 0xffff) + unaff_r4,pbVar2 + 9,(uint)pbVar2[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar4 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar2,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_00000898(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  ushort uStack00000006;
  ushort in_stack_00000008;
  undefined2 uStack0000000a;
  int in_stack_00000014;
  undefined4 in_stack_0000001c;
  
  FUN_00000898();
  FUN_000008aa();
  FUN_000008ba();
  FUN_000008c4();
  iVar6 = unaff_r4 + 1;
  uVar4 = (uint)in_stack_00000008 - 6 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 0x40;
  *(undefined *)(uVar4 + iVar6) = 4;
  uVar3 = FUN_000008e6(in_stack_0000001c);
  FUN_000008f6(uVar4 + unaff_r4 + 2,uVar3,4);
  bVar1 = *(byte *)(in_stack_00000014 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar4 = uVar4 - bVar1;
  uStack0000000a = (undefined2)uVar4;
  uVar5 = uVar4 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar5) = 6;
  *(byte *)(uVar5 + iVar6) = bVar1;
  FUN_0000092c((uVar4 & 0xffff) + unaff_r4,*(undefined4 *)(in_stack_00000014 + 0x14),
               (uint)uStack00000006);
  FUN_0000093a();
  pbVar2 = DAT_000009d4;
  uVar5 = uVar5 - DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar5;
  uVar4 = uVar5 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 4;
  *(byte *)(uVar4 + iVar6) = pbVar2[8];
  FUN_00000968((uVar5 & 0xffff) + unaff_r4,pbVar2 + 9,(uint)pbVar2[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar4 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar2,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_000008aa(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  ushort uStack00000006;
  ushort param_7;
  undefined2 uStack0000000a;
  int param_10;
  undefined4 in_stack_0000001c;
  
  FUN_000008aa();
  FUN_000008ba();
  FUN_000008c4();
  iVar6 = unaff_r4 + 1;
  uVar4 = (uint)param_7 - 6 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 0x40;
  *(undefined *)(uVar4 + iVar6) = 4;
  uVar3 = FUN_000008e6(in_stack_0000001c);
  FUN_000008f6(uVar4 + unaff_r4 + 2,uVar3,4);
  bVar1 = *(byte *)(param_10 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar4 = uVar4 - bVar1;
  uStack0000000a = (undefined2)uVar4;
  uVar5 = uVar4 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar5) = 6;
  *(byte *)(uVar5 + iVar6) = bVar1;
  FUN_0000092c((uVar4 & 0xffff) + unaff_r4,*(undefined4 *)(param_10 + 0x14),(uint)uStack00000006);
  FUN_0000093a();
  pbVar2 = DAT_000009d4;
  uVar5 = uVar5 - DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar5;
  uVar4 = uVar5 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 4;
  *(byte *)(uVar4 + iVar6) = pbVar2[8];
  FUN_00000968((uVar5 & 0xffff) + unaff_r4,pbVar2 + 9,(uint)pbVar2[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar4 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar2,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_000008ba(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  ushort uStack00000006;
  ushort param_7;
  undefined2 uStack0000000a;
  int param_10;
  undefined4 in_stack_0000001c;
  
  FUN_000008ba();
  FUN_000008c4();
  iVar6 = unaff_r4 + 1;
  uVar4 = (uint)param_7 - 6 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 0x40;
  *(undefined *)(uVar4 + iVar6) = 4;
  uVar3 = FUN_000008e6(in_stack_0000001c);
  FUN_000008f6(uVar4 + unaff_r4 + 2,uVar3,4);
  bVar1 = *(byte *)(param_10 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar4 = uVar4 - bVar1;
  uStack0000000a = (undefined2)uVar4;
  uVar5 = uVar4 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar5) = 6;
  *(byte *)(uVar5 + iVar6) = bVar1;
  FUN_0000092c((uVar4 & 0xffff) + unaff_r4,*(undefined4 *)(param_10 + 0x14),(uint)uStack00000006);
  FUN_0000093a();
  pbVar2 = DAT_000009d4;
  uVar5 = uVar5 - DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar5;
  uVar4 = uVar5 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 4;
  *(byte *)(uVar4 + iVar6) = pbVar2[8];
  FUN_00000968((uVar5 & 0xffff) + unaff_r4,pbVar2 + 9,(uint)pbVar2[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar4 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar2,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_000008c4(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  int iVar6;
  ushort uStack00000006;
  ushort param_7;
  undefined2 uStack0000000a;
  int param_10;
  undefined4 param_11;
  
  FUN_000008c4();
  iVar6 = unaff_r4 + 1;
  uVar4 = (uint)param_7 - 6 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 0x40;
  *(undefined *)(uVar4 + iVar6) = 4;
  uVar3 = FUN_000008e6(param_11);
  FUN_000008f6(uVar4 + unaff_r4 + 2,uVar3,4);
  bVar1 = *(byte *)(param_10 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar4 = uVar4 - bVar1;
  uStack0000000a = (undefined2)uVar4;
  uVar5 = uVar4 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar5) = 6;
  *(byte *)(uVar5 + iVar6) = bVar1;
  FUN_0000092c((uVar4 & 0xffff) + unaff_r4,*(undefined4 *)(param_10 + 0x14),(uint)uStack00000006);
  FUN_0000093a();
  pbVar2 = DAT_000009d4;
  uVar5 = uVar5 - DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar5;
  uVar4 = uVar5 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 4;
  *(byte *)(uVar4 + iVar6) = pbVar2[8];
  FUN_00000968((uVar5 & 0xffff) + unaff_r4,pbVar2 + 9,(uint)pbVar2[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar4 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar2,param_11,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_000008e6(void)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r4;
  int unaff_r6;
  undefined unaff_r7;
  ushort uStack00000006;
  ushort param_7;
  undefined2 uStack0000000a;
  int in_stack_00000014;
  undefined4 in_stack_0000001c;
  
  uVar3 = FUN_000008e6();
  FUN_000008f6((uint)param_7 + unaff_r4 + 2,uVar3,4);
  bVar1 = *(byte *)(in_stack_00000014 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar4 = (uint)param_7 - (uint)bVar1;
  uStack0000000a = (undefined2)uVar4;
  uVar5 = uVar4 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar5) = 6;
  *(byte *)(uVar5 + unaff_r6) = bVar1;
  FUN_0000092c((uVar4 & 0xffff) + unaff_r4,*(undefined4 *)(in_stack_00000014 + 0x14),
               (uint)uStack00000006);
  FUN_0000093a();
  pbVar2 = DAT_000009d4;
  uVar5 = uVar5 - DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar5;
  uVar4 = uVar5 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = unaff_r7;
  *(byte *)(uVar4 + unaff_r6) = pbVar2[8];
  FUN_00000968((uVar5 & 0xffff) + unaff_r4,pbVar2 + 9,(uint)pbVar2[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar4 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar2,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_000008f6(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r4;
  int unaff_r6;
  undefined unaff_r7;
  ushort uStack00000006;
  ushort param_7;
  undefined2 uStack0000000a;
  int param_10;
  undefined4 param_12;
  
  FUN_000008f6();
  bVar1 = *(byte *)(param_10 + 0x13);
  uStack00000006 = (ushort)bVar1;
  uVar3 = (uint)param_7 - (uint)bVar1;
  uStack0000000a = (undefined2)uVar3;
  uVar4 = uVar3 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar4) = 6;
  *(byte *)(uVar4 + unaff_r6) = bVar1;
  FUN_0000092c((uVar3 & 0xffff) + unaff_r4,*(undefined4 *)(param_10 + 0x14),(uint)uStack00000006);
  FUN_0000093a();
  pbVar2 = DAT_000009d4;
  uVar4 = uVar4 - DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar4;
  uVar3 = uVar4 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar3) = unaff_r7;
  *(byte *)(uVar3 + unaff_r6) = pbVar2[8];
  FUN_00000968((uVar4 & 0xffff) + unaff_r4,pbVar2 + 9,(uint)pbVar2[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar3 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar2,param_12,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_0000092c(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r4;
  int unaff_r6;
  undefined unaff_r7;
  ushort in_stack_00000008;
  undefined2 uStack0000000a;
  undefined4 in_stack_0000001c;
  
  FUN_0000092c();
  FUN_0000093a();
  pbVar1 = DAT_000009d4;
  uVar2 = (uint)in_stack_00000008 - (uint)DAT_000009d4[8];
  uStack0000000a = (undefined2)uVar2;
  uVar3 = uVar2 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar3) = unaff_r7;
  *(byte *)(uVar3 + unaff_r6) = pbVar1[8];
  FUN_00000968((uVar2 & 0xffff) + unaff_r4,pbVar1 + 9,(uint)pbVar1[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar3 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar1,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_0000093a(void)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r4;
  int unaff_r6;
  undefined unaff_r7;
  ushort param_7;
  undefined2 param_11;
  undefined4 in_stack_0000001c;
  
  FUN_0000093a();
  pbVar1 = DAT_000009d4;
  uVar2 = (uint)param_7 - (uint)DAT_000009d4[8];
  param_11 = (undefined2)uVar2;
  uVar3 = uVar2 - 2 & 0xffff;
  *(undefined *)(unaff_r4 + uVar3) = unaff_r7;
  *(byte *)(uVar3 + unaff_r6) = pbVar1[8];
  FUN_00000968((uVar2 & 0xffff) + unaff_r4,pbVar1 + 9,(uint)pbVar1[8]);
  FUN_00000978();
  FUN_00000986();
  if ((short)uVar3 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*pbVar1,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_00000968(void)

{
  byte *unaff_r5;
  short in_stack_00000008;
  undefined4 in_stack_0000001c;
  
  FUN_00000968();
  FUN_00000978();
  FUN_00000986();
  if (in_stack_00000008 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*unaff_r5,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_00000978(void)

{
  byte *unaff_r5;
  short in_stack_00000008;
  undefined4 in_stack_0000001c;
  
  FUN_00000978();
  FUN_00000986();
  if (in_stack_00000008 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*unaff_r5,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_00000986(void)

{
  byte *unaff_r5;
  short param_7;
  undefined4 in_stack_0000001c;
  
  FUN_00000986();
  if (param_7 != 0) {
    FUN_0000099c();
  }
  FUN_000009b2((uint)*unaff_r5,in_stack_0000001c,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_0000099c(void)

{
  byte *unaff_r5;
  undefined4 param_11;
  
  FUN_0000099c();
  FUN_000009b2((uint)*unaff_r5,param_11,(uint)*(ushort *)(DAT_000009d0 + -2));
  return 1;
}



undefined4 FUN_000009b2(void)

{
  FUN_000009b2();
  return 1;
}


