#include "at_ppp_ipcp.o.h"



void UndefinedInstruction(uint param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r4;
  undefined *puVar8;
  byte *unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r9;
  uint unaff_r10;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool in_shift_carry;
  undefined4 in_cr11;
  undefined4 in_cr13;
  code *UNRECOVERED_JUMPTABLE;
  undefined in_stack_00000018;
  
  if (in_ZR) {
    uVar7 = (uint)unaff_r8 & param_2 & param_2;
    param_2 = uVar7 & (int)unaff_r8 >> ((uint)unaff_r8 & 0xff);
    *(uint *)uVar7 = uVar7;
    uVar7 = ((uint)unaff_r8 ^ uVar7 & unaff_r4 >> (uVar7 & 0xff)) & 0xff;
    in_CY = (bool)((byte)((uint)unaff_r5 >> uVar7 - 1) & 1);
    param_1 = param_3 ^ (uint)unaff_r5 >> uVar7;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
    in_shift_carry = in_CY;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & (uint)unaff_r8;
    in_shift_carry = in_CY;
  }
  if (in_NG) {
    param_3 = param_3 - 0x3e0;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (!in_OV) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    unaff_r8[-1] = unaff_r10;
    *(uint **)(unaff_r8 + -2) = unaff_r9;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (in_ZR || in_NG != in_OV) {
    in_shift_carry = (bool)((byte)(param_2 >> 0xe) & 1);
    param_1 = param_1 & (int)param_2 >> 0xf;
  }
  cVar1 = (char)unaff_r6;
  if (in_ZR) {
    bVar2 = Absolute(cVar1 - (char)param_1);
    bVar3 = Absolute((char)(unaff_r6 >> 8) - (char)(param_1 >> 8));
    bVar4 = Absolute((char)(unaff_r6 >> 0x10) - (char)(param_1 >> 0x10));
    bVar5 = Absolute((char)(unaff_r6 >> 0x18) - (char)(param_1 >> 0x18));
    param_3 = param_1 + ((uint)bVar5 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar3 << 8 | (uint)bVar2)
    ;
  }
  else {
    coprocessor_load(5,in_cr13,unaff_r6);
  }
  if (!in_CY) {
    in_shift_carry = (bool)((byte)(param_1 >> (param_1 & 0xff) - 1) & 1);
    param_1 = in_lr & param_1 >> (param_1 & 0xff);
  }
  software_interrupt(0xfef7ff);
  if (in_ZR) {
    param_1 = unaff_r7 & unaff_r4;
    in_shift_carry = in_CY;
  }
  puVar9 = unaff_r8;
  if (!in_OV) {
    puVar9 = (uint *)((int)unaff_r8 + 1);
    param_3 = *unaff_r8;
  }
  if (in_ZR) {
    unaff_r7 = param_2 ^ 0xa80000;
    in_NG = (int)unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
    in_CY = in_shift_carry;
  }
  puVar10 = puVar9;
  if (!in_OV) {
    puVar10 = puVar9 + 0x81;
    param_3 = (uint)*(byte *)puVar9;
  }
  if (in_NG) {
    param_1 = 0x8630;
  }
  if (in_CY && !in_ZR) {
    param_1 = (uint)in_CY;
    in_CY = CARRY4((uint)puVar10,param_1);
    in_OV = SCARRY4((int)puVar10,param_1);
    param_1 = (int)puVar10 + param_1;
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + 0x103);
    param_3 = *unaff_r9;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(unaff_r6 >> 0x14) & 1);
    param_3 = (uint)puVar10 ^ unaff_r6 << 0xc;
  }
  if (!in_CY) {
    param_2 = (uint)puVar10 & (uint)unaff_r9 >> 0x1b;
  }
  *(char *)(unaff_r7 + 0x17) = cVar1;
  FUN_0000007e(param_1,param_2,param_3);
  iVar6 = DAT_000000c8;
  puVar8 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar8 = 0x81;
    *(char *)(unaff_r4 + 0x1d) = cVar1;
    FUN_00000098(unaff_r4 + 0x1e,iVar6 + 0xe,4);
    puVar8 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar6 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar8 = 0x83;
    puVar8[1] = cVar1;
    FUN_000000b2(puVar8 + 2,iVar6 + 0x12,4);
  }
  FUN_000000b8(unaff_r7);
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void SupervisorCall(uint param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r4;
  undefined *puVar8;
  byte *unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r9;
  uint unaff_r10;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool in_shift_carry;
  undefined4 in_cr11;
  undefined4 in_cr13;
  code *UNRECOVERED_JUMPTABLE;
  undefined in_stack_00000018;
  
  if (in_ZR) {
    uVar7 = (uint)unaff_r8 & param_2 & param_2;
    param_2 = uVar7 & (int)unaff_r8 >> ((uint)unaff_r8 & 0xff);
    *(uint *)uVar7 = uVar7;
    uVar7 = ((uint)unaff_r8 ^ uVar7 & unaff_r4 >> (uVar7 & 0xff)) & 0xff;
    in_CY = (bool)((byte)((uint)unaff_r5 >> uVar7 - 1) & 1);
    param_1 = param_3 ^ (uint)unaff_r5 >> uVar7;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
    in_shift_carry = in_CY;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & (uint)unaff_r8;
    in_shift_carry = in_CY;
  }
  if (in_NG) {
    param_3 = param_3 - 0x3e0;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (!in_OV) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    unaff_r8[-1] = unaff_r10;
    *(uint **)(unaff_r8 + -2) = unaff_r9;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (in_ZR || in_NG != in_OV) {
    in_shift_carry = (bool)((byte)(param_2 >> 0xe) & 1);
    param_1 = param_1 & (int)param_2 >> 0xf;
  }
  cVar1 = (char)unaff_r6;
  if (in_ZR) {
    bVar2 = Absolute(cVar1 - (char)param_1);
    bVar3 = Absolute((char)(unaff_r6 >> 8) - (char)(param_1 >> 8));
    bVar4 = Absolute((char)(unaff_r6 >> 0x10) - (char)(param_1 >> 0x10));
    bVar5 = Absolute((char)(unaff_r6 >> 0x18) - (char)(param_1 >> 0x18));
    param_3 = param_1 + ((uint)bVar5 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar3 << 8 | (uint)bVar2)
    ;
  }
  else {
    coprocessor_load(5,in_cr13,unaff_r6);
  }
  if (!in_CY) {
    in_shift_carry = (bool)((byte)(param_1 >> (param_1 & 0xff) - 1) & 1);
    param_1 = in_lr & param_1 >> (param_1 & 0xff);
  }
  software_interrupt(0xfef7ff);
  if (in_ZR) {
    param_1 = unaff_r7 & unaff_r4;
    in_shift_carry = in_CY;
  }
  puVar9 = unaff_r8;
  if (!in_OV) {
    puVar9 = (uint *)((int)unaff_r8 + 1);
    param_3 = *unaff_r8;
  }
  if (in_ZR) {
    unaff_r7 = param_2 ^ 0xa80000;
    in_NG = (int)unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
    in_CY = in_shift_carry;
  }
  puVar10 = puVar9;
  if (!in_OV) {
    puVar10 = puVar9 + 0x81;
    param_3 = (uint)*(byte *)puVar9;
  }
  if (in_NG) {
    param_1 = 0x8630;
  }
  if (in_CY && !in_ZR) {
    param_1 = (uint)in_CY;
    in_CY = CARRY4((uint)puVar10,param_1);
    in_OV = SCARRY4((int)puVar10,param_1);
    param_1 = (int)puVar10 + param_1;
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + 0x103);
    param_3 = *unaff_r9;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(unaff_r6 >> 0x14) & 1);
    param_3 = (uint)puVar10 ^ unaff_r6 << 0xc;
  }
  if (!in_CY) {
    param_2 = (uint)puVar10 & (uint)unaff_r9 >> 0x1b;
  }
  *(char *)(unaff_r7 + 0x17) = cVar1;
  FUN_0000007e(param_1,param_2,param_3);
  iVar6 = DAT_000000c8;
  puVar8 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar8 = 0x81;
    *(char *)(unaff_r4 + 0x1d) = cVar1;
    FUN_00000098(unaff_r4 + 0x1e,iVar6 + 0xe,4);
    puVar8 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar6 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar8 = 0x83;
    puVar8[1] = cVar1;
    FUN_000000b2(puVar8 + 2,iVar6 + 0x12,4);
  }
  FUN_000000b8(unaff_r7);
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void PrefetchAbort(uint param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r4;
  undefined *puVar8;
  byte *unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r9;
  uint unaff_r10;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool in_shift_carry;
  undefined4 in_cr11;
  undefined4 in_cr13;
  code *UNRECOVERED_JUMPTABLE;
  undefined in_stack_00000018;
  
  if (in_ZR) {
    uVar7 = (uint)unaff_r8 & param_2 & param_2;
    param_2 = uVar7 & (int)unaff_r8 >> ((uint)unaff_r8 & 0xff);
    *(uint *)uVar7 = uVar7;
    uVar7 = ((uint)unaff_r8 ^ uVar7 & unaff_r4 >> (uVar7 & 0xff)) & 0xff;
    in_CY = (bool)((byte)((uint)unaff_r5 >> uVar7 - 1) & 1);
    param_1 = param_3 ^ (uint)unaff_r5 >> uVar7;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
    in_shift_carry = in_CY;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & (uint)unaff_r8;
    in_shift_carry = in_CY;
  }
  if (in_NG) {
    param_3 = param_3 - 0x3e0;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (!in_OV) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    unaff_r8[-1] = unaff_r10;
    *(uint **)(unaff_r8 + -2) = unaff_r9;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (in_ZR || in_NG != in_OV) {
    in_shift_carry = (bool)((byte)(param_2 >> 0xe) & 1);
    param_1 = param_1 & (int)param_2 >> 0xf;
  }
  cVar1 = (char)unaff_r6;
  if (in_ZR) {
    bVar2 = Absolute(cVar1 - (char)param_1);
    bVar3 = Absolute((char)(unaff_r6 >> 8) - (char)(param_1 >> 8));
    bVar4 = Absolute((char)(unaff_r6 >> 0x10) - (char)(param_1 >> 0x10));
    bVar5 = Absolute((char)(unaff_r6 >> 0x18) - (char)(param_1 >> 0x18));
    param_3 = param_1 + ((uint)bVar5 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar3 << 8 | (uint)bVar2)
    ;
  }
  else {
    coprocessor_load(5,in_cr13,unaff_r6);
  }
  if (!in_CY) {
    in_shift_carry = (bool)((byte)(param_1 >> (param_1 & 0xff) - 1) & 1);
    param_1 = in_lr & param_1 >> (param_1 & 0xff);
  }
  software_interrupt(0xfef7ff);
  if (in_ZR) {
    param_1 = unaff_r7 & unaff_r4;
    in_shift_carry = in_CY;
  }
  puVar9 = unaff_r8;
  if (!in_OV) {
    puVar9 = (uint *)((int)unaff_r8 + 1);
    param_3 = *unaff_r8;
  }
  if (in_ZR) {
    unaff_r7 = param_2 ^ 0xa80000;
    in_NG = (int)unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
    in_CY = in_shift_carry;
  }
  puVar10 = puVar9;
  if (!in_OV) {
    puVar10 = puVar9 + 0x81;
    param_3 = (uint)*(byte *)puVar9;
  }
  if (in_NG) {
    param_1 = 0x8630;
  }
  if (in_CY && !in_ZR) {
    param_1 = (uint)in_CY;
    in_CY = CARRY4((uint)puVar10,param_1);
    in_OV = SCARRY4((int)puVar10,param_1);
    param_1 = (int)puVar10 + param_1;
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + 0x103);
    param_3 = *unaff_r9;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(unaff_r6 >> 0x14) & 1);
    param_3 = (uint)puVar10 ^ unaff_r6 << 0xc;
  }
  if (!in_CY) {
    param_2 = (uint)puVar10 & (uint)unaff_r9 >> 0x1b;
  }
  *(char *)(unaff_r7 + 0x17) = cVar1;
  FUN_0000007e(param_1,param_2,param_3);
  iVar6 = DAT_000000c8;
  puVar8 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar8 = 0x81;
    *(char *)(unaff_r4 + 0x1d) = cVar1;
    FUN_00000098(unaff_r4 + 0x1e,iVar6 + 0xe,4);
    puVar8 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar6 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar8 = 0x83;
    puVar8[1] = cVar1;
    FUN_000000b2(puVar8 + 2,iVar6 + 0x12,4);
  }
  FUN_000000b8(unaff_r7);
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void DataAbort(uint param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint unaff_r4;
  undefined *puVar8;
  byte *unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r9;
  uint unaff_r10;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool in_shift_carry;
  undefined4 in_cr11;
  undefined4 in_cr13;
  code *UNRECOVERED_JUMPTABLE;
  undefined in_stack_00000018;
  
  if (in_ZR) {
    uVar7 = (uint)unaff_r8 & param_2 & param_2;
    param_2 = uVar7 & (int)unaff_r8 >> ((uint)unaff_r8 & 0xff);
    *(uint *)uVar7 = uVar7;
    uVar7 = ((uint)unaff_r8 ^ uVar7 & unaff_r4 >> (uVar7 & 0xff)) & 0xff;
    in_CY = (bool)((byte)((uint)unaff_r5 >> uVar7 - 1) & 1);
    param_1 = param_3 ^ (uint)unaff_r5 >> uVar7;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
    in_shift_carry = in_CY;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & (uint)unaff_r8;
    in_shift_carry = in_CY;
  }
  if (in_NG) {
    param_3 = param_3 - 0x3e0;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (!in_OV) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    unaff_r8[-1] = unaff_r10;
    *(uint **)(unaff_r8 + -2) = unaff_r9;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (in_ZR || in_NG != in_OV) {
    in_shift_carry = (bool)((byte)(param_2 >> 0xe) & 1);
    param_1 = param_1 & (int)param_2 >> 0xf;
  }
  cVar1 = (char)unaff_r6;
  if (in_ZR) {
    bVar2 = Absolute(cVar1 - (char)param_1);
    bVar3 = Absolute((char)(unaff_r6 >> 8) - (char)(param_1 >> 8));
    bVar4 = Absolute((char)(unaff_r6 >> 0x10) - (char)(param_1 >> 0x10));
    bVar5 = Absolute((char)(unaff_r6 >> 0x18) - (char)(param_1 >> 0x18));
    param_3 = param_1 + ((uint)bVar5 << 0x18 | (uint)bVar4 << 0x10 | (uint)bVar3 << 8 | (uint)bVar2)
    ;
  }
  else {
    coprocessor_load(5,in_cr13,unaff_r6);
  }
  if (!in_CY) {
    in_shift_carry = (bool)((byte)(param_1 >> (param_1 & 0xff) - 1) & 1);
    param_1 = in_lr & param_1 >> (param_1 & 0xff);
  }
  software_interrupt(0xfef7ff);
  if (in_ZR) {
    param_1 = unaff_r7 & unaff_r4;
    in_shift_carry = in_CY;
  }
  puVar9 = unaff_r8;
  if (!in_OV) {
    puVar9 = (uint *)((int)unaff_r8 + 1);
    param_3 = *unaff_r8;
  }
  if (in_ZR) {
    unaff_r7 = param_2 ^ 0xa80000;
    in_NG = (int)unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
    in_CY = in_shift_carry;
  }
  puVar10 = puVar9;
  if (!in_OV) {
    puVar10 = puVar9 + 0x81;
    param_3 = (uint)*(byte *)puVar9;
  }
  if (in_NG) {
    param_1 = 0x8630;
  }
  if (in_CY && !in_ZR) {
    param_1 = (uint)in_CY;
    in_CY = CARRY4((uint)puVar10,param_1);
    in_OV = SCARRY4((int)puVar10,param_1);
    param_1 = (int)puVar10 + param_1;
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + 0x103);
    param_3 = *unaff_r9;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(unaff_r6 >> 0x14) & 1);
    param_3 = (uint)puVar10 ^ unaff_r6 << 0xc;
  }
  if (!in_CY) {
    param_2 = (uint)puVar10 & (uint)unaff_r9 >> 0x1b;
  }
  *(char *)(unaff_r7 + 0x17) = cVar1;
  FUN_0000007e(param_1,param_2,param_3);
  iVar6 = DAT_000000c8;
  puVar8 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar8 = 0x81;
    *(char *)(unaff_r4 + 0x1d) = cVar1;
    FUN_00000098(unaff_r4 + 0x1e,iVar6 + 0xe,4);
    puVar8 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar6 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar8 = 0x83;
    puVar8[1] = cVar1;
    FUN_000000b2(puVar8 + 2,iVar6 + 0x12,4);
  }
  FUN_000000b8(unaff_r7);
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void NotUsed(uint param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint unaff_r4;
  undefined *puVar8;
  byte *unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r9;
  uint unaff_r10;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool in_shift_carry;
  undefined4 in_cr11;
  undefined4 in_cr13;
  code *UNRECOVERED_JUMPTABLE;
  undefined in_stack_00000018;
  
  if (in_ZR) {
    param_1 = param_1 & param_2;
    param_2 = param_1 & (int)unaff_r8 >> ((uint)unaff_r8 & 0xff);
    *(uint *)param_1 = param_1;
    uVar1 = ((uint)unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)((uint)unaff_r5 >> uVar1 - 1) & 1);
    param_1 = param_3 ^ (uint)unaff_r5 >> uVar1;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
    in_shift_carry = in_CY;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & (uint)unaff_r8;
    in_shift_carry = in_CY;
  }
  if (in_NG) {
    param_3 = param_3 - 0x3e0;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (!in_OV) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    unaff_r8[-1] = unaff_r10;
    *(uint **)(unaff_r8 + -2) = unaff_r9;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (in_ZR || in_NG != in_OV) {
    in_shift_carry = (bool)((byte)(param_2 >> 0xe) & 1);
    param_1 = param_1 & (int)param_2 >> 0xf;
  }
  cVar2 = (char)unaff_r6;
  if (in_ZR) {
    bVar3 = Absolute(cVar2 - (char)param_1);
    bVar4 = Absolute((char)(unaff_r6 >> 8) - (char)(param_1 >> 8));
    bVar5 = Absolute((char)(unaff_r6 >> 0x10) - (char)(param_1 >> 0x10));
    bVar6 = Absolute((char)(unaff_r6 >> 0x18) - (char)(param_1 >> 0x18));
    param_3 = param_1 + ((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)bVar4 << 8 | (uint)bVar3)
    ;
  }
  else {
    coprocessor_load(5,in_cr13,unaff_r6);
  }
  if (!in_CY) {
    in_shift_carry = (bool)((byte)(param_1 >> (param_1 & 0xff) - 1) & 1);
    param_1 = in_lr & param_1 >> (param_1 & 0xff);
  }
  software_interrupt(0xfef7ff);
  if (in_ZR) {
    param_1 = unaff_r7 & unaff_r4;
    in_shift_carry = in_CY;
  }
  puVar9 = unaff_r8;
  if (!in_OV) {
    puVar9 = (uint *)((int)unaff_r8 + 1);
    param_3 = *unaff_r8;
  }
  if (in_ZR) {
    unaff_r7 = param_2 ^ 0xa80000;
    in_NG = (int)unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
    in_CY = in_shift_carry;
  }
  puVar10 = puVar9;
  if (!in_OV) {
    puVar10 = puVar9 + 0x81;
    param_3 = (uint)*(byte *)puVar9;
  }
  if (in_NG) {
    param_1 = 0x8630;
  }
  if (in_CY && !in_ZR) {
    param_1 = (uint)in_CY;
    in_CY = CARRY4((uint)puVar10,param_1);
    in_OV = SCARRY4((int)puVar10,param_1);
    param_1 = (int)puVar10 + param_1;
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + 0x103);
    param_3 = *unaff_r9;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(unaff_r6 >> 0x14) & 1);
    param_3 = (uint)puVar10 ^ unaff_r6 << 0xc;
  }
  if (!in_CY) {
    param_2 = (uint)puVar10 & (uint)unaff_r9 >> 0x1b;
  }
  *(char *)(unaff_r7 + 0x17) = cVar2;
  FUN_0000007e(param_1,param_2,param_3);
  iVar7 = DAT_000000c8;
  puVar8 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar8 = 0x81;
    *(char *)(unaff_r4 + 0x1d) = cVar2;
    FUN_00000098(unaff_r4 + 0x1e,iVar7 + 0xe,4);
    puVar8 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar7 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar8 = 0x83;
    puVar8[1] = cVar2;
    FUN_000000b2(puVar8 + 2,iVar7 + 0x12,4);
  }
  FUN_000000b8(unaff_r7);
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void IRQ(uint param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint unaff_r4;
  undefined *puVar8;
  byte *unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r9;
  uint unaff_r10;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool in_shift_carry;
  undefined4 in_cr11;
  undefined4 in_cr13;
  code *UNRECOVERED_JUMPTABLE;
  undefined in_stack_00000018;
  
  if (in_ZR) {
    param_2 = param_1 & (int)unaff_r8 >> ((uint)unaff_r8 & 0xff);
    *(uint *)param_1 = param_1;
    uVar1 = ((uint)unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)((uint)unaff_r5 >> uVar1 - 1) & 1);
    param_1 = param_3 ^ (uint)unaff_r5 >> uVar1;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
    in_shift_carry = in_CY;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & (uint)unaff_r8;
    in_shift_carry = in_CY;
  }
  if (in_NG) {
    param_3 = param_3 - 0x3e0;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (!in_OV) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    unaff_r8[-1] = unaff_r10;
    *(uint **)(unaff_r8 + -2) = unaff_r9;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (in_ZR || in_NG != in_OV) {
    in_shift_carry = (bool)((byte)(param_2 >> 0xe) & 1);
    param_1 = param_1 & (int)param_2 >> 0xf;
  }
  cVar2 = (char)unaff_r6;
  if (in_ZR) {
    bVar3 = Absolute(cVar2 - (char)param_1);
    bVar4 = Absolute((char)(unaff_r6 >> 8) - (char)(param_1 >> 8));
    bVar5 = Absolute((char)(unaff_r6 >> 0x10) - (char)(param_1 >> 0x10));
    bVar6 = Absolute((char)(unaff_r6 >> 0x18) - (char)(param_1 >> 0x18));
    param_3 = param_1 + ((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)bVar4 << 8 | (uint)bVar3)
    ;
  }
  else {
    coprocessor_load(5,in_cr13,unaff_r6);
  }
  if (!in_CY) {
    in_shift_carry = (bool)((byte)(param_1 >> (param_1 & 0xff) - 1) & 1);
    param_1 = in_lr & param_1 >> (param_1 & 0xff);
  }
  software_interrupt(0xfef7ff);
  if (in_ZR) {
    param_1 = unaff_r7 & unaff_r4;
    in_shift_carry = in_CY;
  }
  puVar9 = unaff_r8;
  if (!in_OV) {
    puVar9 = (uint *)((int)unaff_r8 + 1);
    param_3 = *unaff_r8;
  }
  if (in_ZR) {
    unaff_r7 = param_2 ^ 0xa80000;
    in_NG = (int)unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
    in_CY = in_shift_carry;
  }
  puVar10 = puVar9;
  if (!in_OV) {
    puVar10 = puVar9 + 0x81;
    param_3 = (uint)*(byte *)puVar9;
  }
  if (in_NG) {
    param_1 = 0x8630;
  }
  if (in_CY && !in_ZR) {
    param_1 = (uint)in_CY;
    in_CY = CARRY4((uint)puVar10,param_1);
    in_OV = SCARRY4((int)puVar10,param_1);
    param_1 = (int)puVar10 + param_1;
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + 0x103);
    param_3 = *unaff_r9;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(unaff_r6 >> 0x14) & 1);
    param_3 = (uint)puVar10 ^ unaff_r6 << 0xc;
  }
  if (!in_CY) {
    param_2 = (uint)puVar10 & (uint)unaff_r9 >> 0x1b;
  }
  *(char *)(unaff_r7 + 0x17) = cVar2;
  FUN_0000007e(param_1,param_2,param_3);
  iVar7 = DAT_000000c8;
  puVar8 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar8 = 0x81;
    *(char *)(unaff_r4 + 0x1d) = cVar2;
    FUN_00000098(unaff_r4 + 0x1e,iVar7 + 0xe,4);
    puVar8 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar7 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar8 = 0x83;
    puVar8[1] = cVar2;
    FUN_000000b2(puVar8 + 2,iVar7 + 0x12,4);
  }
  FUN_000000b8(unaff_r7);
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FIQ(uint param_1,uint param_2,uint param_3,uint param_4,undefined param_5)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint unaff_r4;
  undefined *puVar8;
  byte *unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  uint *unaff_r8;
  uint *puVar9;
  uint *puVar10;
  uint *unaff_r9;
  uint unaff_r10;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  bool in_shift_carry;
  undefined4 in_cr11;
  undefined4 in_cr13;
  code *UNRECOVERED_JUMPTABLE;
  undefined in_stack_00000018;
  
  if (in_ZR) {
    param_2 = param_1 & (int)unaff_r8 >> ((uint)unaff_r8 & 0xff);
    *(uint *)param_1 = param_1;
    uVar1 = ((uint)unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)((uint)unaff_r5 >> uVar1 - 1) & 1);
    param_1 = param_3 ^ (uint)unaff_r5 >> uVar1;
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
    in_shift_carry = in_CY;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & (uint)unaff_r8;
    in_shift_carry = in_CY;
  }
  if (in_NG) {
    param_3 = param_3 - 0x3e0;
    coprocessor_store(5,in_cr11,param_3);
  }
  if (!in_OV) {
    *(BADSPACEBASE **)unaff_r8 = register0x00000054;
    unaff_r8[-1] = unaff_r10;
    *(uint **)(unaff_r8 + -2) = unaff_r9;
    unaff_r8[-3] = param_4;
    unaff_r8[-4] = param_2;
    unaff_r8 = unaff_r8 + -5;
  }
  if (in_ZR || in_NG != in_OV) {
    in_shift_carry = (bool)((byte)(param_2 >> 0xe) & 1);
    param_1 = param_1 & (int)param_2 >> 0xf;
  }
  cVar2 = (char)unaff_r6;
  if (in_ZR) {
    bVar3 = Absolute(cVar2 - (char)param_1);
    bVar4 = Absolute((char)(unaff_r6 >> 8) - (char)(param_1 >> 8));
    bVar5 = Absolute((char)(unaff_r6 >> 0x10) - (char)(param_1 >> 0x10));
    bVar6 = Absolute((char)(unaff_r6 >> 0x18) - (char)(param_1 >> 0x18));
    param_3 = param_1 + ((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)bVar4 << 8 | (uint)bVar3)
    ;
  }
  else {
    coprocessor_load(5,in_cr13,unaff_r6);
  }
  if (!in_CY) {
    in_shift_carry = (bool)((byte)(param_1 >> (param_1 & 0xff) - 1) & 1);
    param_1 = in_lr & param_1 >> (param_1 & 0xff);
  }
  software_interrupt(0xfef7ff);
  if (in_ZR) {
    param_1 = unaff_r7 & unaff_r4;
    in_shift_carry = in_CY;
  }
  puVar9 = unaff_r8;
  if (!in_OV) {
    puVar9 = (uint *)((int)unaff_r8 + 1);
    param_3 = *unaff_r8;
  }
  if (in_ZR) {
    unaff_r7 = param_2 ^ 0xa80000;
    in_NG = (int)unaff_r7 < 0;
    in_ZR = unaff_r7 == 0;
    in_CY = in_shift_carry;
  }
  puVar10 = puVar9;
  if (!in_OV) {
    puVar10 = puVar9 + 0x81;
    param_3 = (uint)*(byte *)puVar9;
  }
  if (in_NG) {
    param_1 = 0x8630;
  }
  if (in_CY && !in_ZR) {
    param_1 = (uint)in_CY;
    in_CY = CARRY4((uint)puVar10,param_1);
    in_OV = SCARRY4((int)puVar10,param_1);
    param_1 = (int)puVar10 + param_1;
    in_ZR = param_1 == 0;
  }
  if (!in_OV) {
    unaff_r9 = (uint *)((int)unaff_r9 + 0x103);
    param_3 = *unaff_r9;
  }
  if (in_ZR) {
    in_CY = (bool)((byte)(unaff_r6 >> 0x14) & 1);
    param_3 = (uint)puVar10 ^ unaff_r6 << 0xc;
  }
  if (!in_CY) {
    param_2 = (uint)puVar10 & (uint)unaff_r9 >> 0x1b;
  }
  *(char *)(unaff_r7 + 0x17) = cVar2;
  FUN_0000007e(param_1,param_2,param_3);
  iVar7 = DAT_000000c8;
  puVar8 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar8 = 0x81;
    *(char *)(unaff_r4 + 0x1d) = cVar2;
    FUN_00000098(unaff_r4 + 0x1e,iVar7 + 0xe,4);
    puVar8 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar7 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar8 = 0x83;
    puVar8[1] = cVar2;
    FUN_000000b2(puVar8 + 2,iVar7 + 0x12,4);
  }
  FUN_000000b8(unaff_r7);
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_0000007e(void)

{
  int iVar1;
  int unaff_r4;
  undefined *puVar2;
  byte *unaff_r5;
  undefined unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000007e();
  iVar1 = DAT_000000c8;
  puVar2 = (undefined *)(unaff_r4 + 0x1c);
  if ((*unaff_r5 & 1) != 0) {
    *puVar2 = 0x81;
    *(undefined *)(unaff_r4 + 0x1d) = unaff_r6;
    FUN_00000098(unaff_r4 + 0x1e,iVar1 + 0xe,4);
    puVar2 = (undefined *)(unaff_r4 + 0x22);
  }
  iVar1 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *puVar2 = 0x83;
    puVar2[1] = unaff_r6;
    FUN_000000b2(puVar2 + 2,iVar1 + 0x12,4);
  }
  FUN_000000b8();
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000098(void)

{
  int iVar1;
  int unaff_r4;
  byte *unaff_r5;
  undefined unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000098();
  iVar1 = DAT_000000c8;
  if ((int)((uint)*unaff_r5 << 0x1e) < 0) {
    *(undefined *)(unaff_r4 + 6) = 0x83;
    *(undefined *)(unaff_r4 + 7) = unaff_r6;
    FUN_000000b2(unaff_r4 + 8,iVar1 + 0x12,4);
  }
  FUN_000000b8();
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000000b2(void)

{
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000000b2();
  FUN_000000b8();
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000000b8(void)

{
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000000b8();
  *(undefined2 *)(unaff_r5 + 4) = *(undefined2 *)(DAT_000000cc + 6);
                    // WARNING: Could not recover jumptable at 0x000000c6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_000000f4(void)

{
  FUN_000000f4();
  return;
}



void FUN_0000011a(void)

{
  undefined4 uVar1;
  
  FUN_0000011a();
  uVar1 = DAT_00000144;
  FUN_00000128(DAT_00000140 + 6,DAT_00000144,4);
  FUN_00000132(DAT_00000148,uVar1,0x14);
  return;
}



void FUN_00000128(void)

{
  FUN_00000128();
  FUN_00000132(DAT_00000148);
  return;
}



void FUN_00000132(void)

{
  FUN_00000132();
  return;
}



void FUN_00000426(void)

{
  FUN_00000426();
  FUN_0000042a();
  return;
}



void FUN_0000042a(void)

{
  FUN_0000042a();
  return;
}



void FUN_0000044e(void)

{
  FUN_0000044e();
  return;
}



void FUN_00000454(void)

{
  FUN_00000454();
  return;
}



void FUN_00000468(undefined4 param_1)

{
  FUN_0000046e(param_1,DAT_00000480);
  FUN_00000474(param_1);
  return;
}



void FUN_0000046e(void)

{
  FUN_0000046e();
  FUN_00000474();
  return;
}



void FUN_00000474(void)

{
  FUN_00000474();
  return;
}



void FUN_00000484(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_00000488(DAT_000004bc);
  uVar2 = FUN_00000492(DAT_000004bc + 8);
  uVar3 = uVar1 + 1 & ~uVar2;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (uVar3 == ~uVar2) {
    uVar3 = 1;
  }
  FUN_000004b0(DAT_000004c0,uVar1 & uVar2 | uVar3);
  return;
}



void FUN_00000488(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_00000488();
  uVar2 = FUN_00000492(DAT_000004bc + 8);
  uVar3 = uVar1 + 1 & ~uVar2;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  if (uVar3 == ~uVar2) {
    uVar3 = 1;
  }
  FUN_000004b0(DAT_000004c0,uVar1 & uVar2 | uVar3);
  return;
}



void FUN_00000492(void)

{
  uint uVar1;
  uint unaff_r4;
  uint uVar2;
  
  uVar1 = FUN_00000492();
  uVar2 = unaff_r4 + 1 & ~uVar1;
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  if (uVar2 == ~uVar1) {
    uVar2 = 1;
  }
  FUN_000004b0(DAT_000004c0,unaff_r4 & uVar1 | uVar2);
  return;
}



void FUN_000004b0(void)

{
  FUN_000004b0();
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
                    // WARNING: Could not recover jumptable at 0x000004e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


