#include "at_sntp.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_2 = uVar1 & (int)unaff_r8 >> 6;
    *(uint *)uVar1 = uVar1;
    param_1 = (uint *)((in_lr ^ param_2 >> ((unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff))
                       & param_3 & unaff_r8);
    unaff_r11 = unaff_r5 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  puVar2 = param_1;
  if (in_NG) {
    coprocessor_store(1,in_cr13,param_1);
    puVar2 = param_1 + -0x1f;
    coprocessor_store(8,in_cr4,param_1);
  }
  if (in_CY) {
    *puVar2 = in_lr;
    *(BADSPACEBASE **)(puVar2 + -1) = register0x00000054;
    puVar2[-2] = in_r12;
    puVar2[-3] = unaff_r11;
    puVar2[-4] = unaff_r8;
  }
  if (in_OV) {
    *(uint **)puVar2 = puVar2;
    puVar2[1] = param_2;
    puVar2[2] = unaff_r4;
    puVar2[3] = in_r12;
    puVar2[4] = in_lr;
    puVar2[5] = 0x54;
    puVar2 = puVar2 + 6;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r4 == unaff_r8 << 5;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr0,puVar2 + 0x29);
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_2 = uVar1 & (int)unaff_r8 >> 6;
    *(uint *)uVar1 = uVar1;
    param_1 = (uint *)((in_lr ^ param_2 >> ((unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff))
                       & param_3 & unaff_r8);
    unaff_r11 = unaff_r5 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  puVar2 = param_1;
  if (in_NG) {
    coprocessor_store(1,in_cr13,param_1);
    puVar2 = param_1 + -0x1f;
    coprocessor_store(8,in_cr4,param_1);
  }
  if (in_CY) {
    *puVar2 = in_lr;
    *(BADSPACEBASE **)(puVar2 + -1) = register0x00000054;
    puVar2[-2] = in_r12;
    puVar2[-3] = unaff_r11;
    puVar2[-4] = unaff_r8;
  }
  if (in_OV) {
    *(uint **)puVar2 = puVar2;
    puVar2[1] = param_2;
    puVar2[2] = unaff_r4;
    puVar2[3] = in_r12;
    puVar2[4] = in_lr;
    puVar2[5] = 0x54;
    puVar2 = puVar2 + 6;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r4 == unaff_r8 << 5;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr0,puVar2 + 0x29);
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_2 = uVar1 & (int)unaff_r8 >> 6;
    *(uint *)uVar1 = uVar1;
    param_1 = (uint *)((in_lr ^ param_2 >> ((unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff))
                       & param_3 & unaff_r8);
    unaff_r11 = unaff_r5 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  puVar2 = param_1;
  if (in_NG) {
    coprocessor_store(1,in_cr13,param_1);
    puVar2 = param_1 + -0x1f;
    coprocessor_store(8,in_cr4,param_1);
  }
  if (in_CY) {
    *puVar2 = in_lr;
    *(BADSPACEBASE **)(puVar2 + -1) = register0x00000054;
    puVar2[-2] = in_r12;
    puVar2[-3] = unaff_r11;
    puVar2[-4] = unaff_r8;
  }
  if (in_OV) {
    *(uint **)puVar2 = puVar2;
    puVar2[1] = param_2;
    puVar2[2] = unaff_r4;
    puVar2[3] = in_r12;
    puVar2[4] = in_lr;
    puVar2[5] = 0x54;
    puVar2 = puVar2 + 6;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r4 == unaff_r8 << 5;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr0,puVar2 + 0x29);
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2;
    param_2 = uVar1 & (int)unaff_r8 >> 6;
    *(uint *)uVar1 = uVar1;
    param_1 = (uint *)((in_lr ^ param_2 >> ((unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff))
                       & param_3 & unaff_r8);
    unaff_r11 = unaff_r5 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  puVar2 = param_1;
  if (in_NG) {
    coprocessor_store(1,in_cr13,param_1);
    puVar2 = param_1 + -0x1f;
    coprocessor_store(8,in_cr4,param_1);
  }
  if (in_CY) {
    *puVar2 = in_lr;
    *(BADSPACEBASE **)(puVar2 + -1) = register0x00000054;
    puVar2[-2] = in_r12;
    puVar2[-3] = unaff_r11;
    puVar2[-4] = unaff_r8;
  }
  if (in_OV) {
    *(uint **)puVar2 = puVar2;
    puVar2[1] = param_2;
    puVar2[2] = unaff_r4;
    puVar2[3] = in_r12;
    puVar2[4] = in_lr;
    puVar2[5] = 0x54;
    puVar2 = puVar2 + 6;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r4 == unaff_r8 << 5;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr0,puVar2 + 0x29);
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_ZR) {
    uVar1 = (uint)param_1 & param_2;
    param_2 = uVar1 & (int)unaff_r8 >> 6;
    *(uint *)uVar1 = uVar1;
    param_1 = (uint *)((in_lr ^ param_2 >> ((unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff))
                       & param_3 & unaff_r8);
    unaff_r11 = unaff_r5 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  puVar2 = param_1;
  if (in_NG) {
    coprocessor_store(1,in_cr13,param_1);
    puVar2 = param_1 + -0x1f;
    coprocessor_store(8,in_cr4,param_1);
  }
  if (in_CY) {
    *puVar2 = in_lr;
    *(BADSPACEBASE **)(puVar2 + -1) = register0x00000054;
    puVar2[-2] = in_r12;
    puVar2[-3] = unaff_r11;
    puVar2[-4] = unaff_r8;
  }
  if (in_OV) {
    *(uint **)puVar2 = puVar2;
    puVar2[1] = param_2;
    puVar2[2] = unaff_r4;
    puVar2[3] = in_r12;
    puVar2[4] = in_lr;
    puVar2[5] = 0x54;
    puVar2 = puVar2 + 6;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r4 == unaff_r8 << 5;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr0,puVar2 + 0x29);
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_ZR) {
    param_2 = (uint)param_1 & (int)unaff_r8 >> 6;
    *(uint **)param_1 = param_1;
    param_1 = (uint *)((in_lr ^ param_2 >>
                                ((unaff_r8 ^ (uint)param_1 & unaff_r4 >> ((uint)param_1 & 0xff)) &
                                0xff)) & param_3 & unaff_r8);
    unaff_r11 = unaff_r5 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  puVar1 = param_1;
  if (in_NG) {
    coprocessor_store(1,in_cr13,param_1);
    puVar1 = param_1 + -0x1f;
    coprocessor_store(8,in_cr4,param_1);
  }
  if (in_CY) {
    *puVar1 = in_lr;
    *(BADSPACEBASE **)(puVar1 + -1) = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = unaff_r8;
  }
  if (in_OV) {
    *(uint **)puVar1 = puVar1;
    puVar1[1] = param_2;
    puVar1[2] = unaff_r4;
    puVar1[3] = in_r12;
    puVar1[4] = in_lr;
    puVar1[5] = 0x54;
    puVar1 = puVar1 + 6;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r4 == unaff_r8 << 5;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr0,puVar1 + 0x29);
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint unaff_r4;
  uint unaff_r5;
  uint unaff_r8;
  uint unaff_r11;
  uint in_r12;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr4;
  undefined4 in_cr13;
  
  if (in_ZR) {
    param_2 = (uint)param_1 & (int)unaff_r8 >> 6;
    *(uint **)param_1 = param_1;
    param_1 = (uint *)((in_lr ^ param_2 >>
                                ((unaff_r8 ^ (uint)param_1 & unaff_r4 >> ((uint)param_1 & 0xff)) &
                                0xff)) & param_3 & unaff_r8);
    unaff_r11 = unaff_r5 &
                ((uint)param_1 >> (unaff_r5 & 0x1f) | (int)param_1 << 0x20 - (unaff_r5 & 0x1f));
  }
  puVar1 = param_1;
  if (in_NG) {
    coprocessor_store(1,in_cr13,param_1);
    puVar1 = param_1 + -0x1f;
    coprocessor_store(8,in_cr4,param_1);
  }
  if (in_CY) {
    *puVar1 = in_lr;
    *(BADSPACEBASE **)(puVar1 + -1) = register0x00000054;
    puVar1[-2] = in_r12;
    puVar1[-3] = unaff_r11;
    puVar1[-4] = unaff_r8;
  }
  if (in_OV) {
    *(uint **)puVar1 = puVar1;
    puVar1[1] = param_2;
    puVar1[2] = unaff_r4;
    puVar1[3] = in_r12;
    puVar1[4] = in_lr;
    puVar1[5] = 0x54;
    puVar1 = puVar1 + 6;
  }
  if (in_ZR || in_NG != in_OV) {
    in_ZR = unaff_r4 == unaff_r8 << 5;
  }
  if (!in_ZR) {
    coprocessor_store(0,in_cr0,puVar1 + 0x29);
  }
  software_interrupt(0xfef7ff);
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0000008c(void)

{
  int iVar1;
  undefined *unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_0000008c();
  if (iVar1 != 0) {
    FUN_0000009a(unaff_r4 + 6);
    FUN_000000a2((uint)(byte)unaff_r4[1],0);
    unaff_r4[2] = 3;
    *(ushort *)(unaff_r4 + 4) = (ushort)*(byte *)(DAT_000000cc + 8);
    *unaff_r4 = 1;
    iVar1 = FUN_000000b4();
    if (iVar1 == 0) {
      *(undefined2 *)(unaff_r4 + 4) = 1;
    }
    iVar1 = 1;
  }
                    // WARNING: Could not recover jumptable at 0x00000086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar1);
  return;
}



void FUN_0000009a(void)

{
  int iVar1;
  undefined *unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000009a();
  FUN_000000a2((uint)(byte)unaff_r4[1],0);
  unaff_r4[2] = 3;
  *(ushort *)(unaff_r4 + 4) = (ushort)*(byte *)(DAT_000000cc + 8);
  *unaff_r4 = 1;
  iVar1 = FUN_000000b4();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_r4 + 4) = 1;
  }
                    // WARNING: Could not recover jumptable at 0x00000086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(1);
  return;
}



void FUN_000000a2(void)

{
  int iVar1;
  undefined *unaff_r4;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_000000a2();
  unaff_r4[2] = 3;
  *(ushort *)(unaff_r4 + 4) = (ushort)*(byte *)(DAT_000000cc + 8);
  *unaff_r4 = 1;
  iVar1 = FUN_000000b4();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_r4 + 4) = 1;
  }
                    // WARNING: Could not recover jumptable at 0x00000086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(1);
  return;
}



void FUN_000000b4(void)

{
  int iVar1;
  int unaff_r4;
  undefined2 unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_000000b4();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_r4 + 4) = unaff_r5;
  }
                    // WARNING: Could not recover jumptable at 0x00000086. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(1);
  return;
}



void FUN_000000d0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  puVar1 = DAT_000000f0;
  *DAT_000000f0 = 0;
  puVar1[2] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  uVar2 = DAT_000000f4;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  uVar3 = FUN_000000e2(0,3,uVar2);
  puVar1[1] = uVar3;
  return;
}



void FUN_000000e2(void)

{
  undefined uVar1;
  int unaff_r4;
  
  uVar1 = FUN_000000e2();
  *(undefined *)(unaff_r4 + 1) = uVar1;
  return;
}



undefined4 FUN_000000f8(uint param_1,undefined4 param_2,int param_3,byte *param_4,uint param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar1 = DAT_00000180;
  if (((((uint)(byte)DAT_00000180[1] == param_1) && (param_3 == 0x7b)) && (0x2f < param_5)) &&
     ((iVar2 = FUN_00000116(param_2,DAT_00000180 + 6,4), iVar2 != 0 ||
      (iVar2 = FUN_00000120(pcVar1 + 6), iVar2 == 0)))) {
    iVar2 = DAT_00000184;
    if (*(char *)(DAT_00000184 + 4) == '\0') {
      if ((*pcVar1 != '\x01') || ((*param_4 & 7) != 4)) goto LAB_0000014c;
    }
    else {
      if ((*param_4 & 7) != 5) goto LAB_0000014c;
    }
    uVar3 = FUN_00000158(param_4 + 0x28);
    if (DAT_00000188 < uVar3) {
      iVar4 = uVar3 - DAT_00000188;
    }
    else {
      iVar4 = 0;
    }
    FUN_0000016c(iVar4,*(undefined4 *)(pcVar1 + 0xc));
    if (*(char *)(iVar2 + 4) == '\0') {
      FUN_00000176();
    }
    uVar5 = 1;
  }
  else {
LAB_0000014c:
    uVar5 = 0;
  }
  return uVar5;
}



undefined4 FUN_00000116(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *unaff_r4;
  byte *unaff_r5;
  
  iVar1 = FUN_00000116();
  if ((iVar1 != 0) || (iVar1 = FUN_00000120(unaff_r4 + 6), iVar1 == 0)) {
    iVar1 = DAT_00000184;
    if (*(char *)(DAT_00000184 + 4) == '\0') {
      if ((*unaff_r4 == '\x01') && ((*unaff_r5 & 7) == 4)) goto LAB_00000154;
    }
    else {
      if ((*unaff_r5 & 7) == 5) {
LAB_00000154:
        uVar2 = FUN_00000158(unaff_r5 + 0x28);
        if (DAT_00000188 < uVar2) {
          iVar3 = uVar2 - DAT_00000188;
        }
        else {
          iVar3 = 0;
        }
        FUN_0000016c(iVar3,*(undefined4 *)(unaff_r4 + 0xc));
        if (*(char *)(iVar1 + 4) == '\0') {
          FUN_00000176();
        }
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00000120(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *unaff_r4;
  byte *unaff_r5;
  
  iVar2 = FUN_00000120();
  iVar1 = DAT_00000184;
  if (iVar2 == 0) {
    if (*(char *)(DAT_00000184 + 4) == '\0') {
      if ((*unaff_r4 != '\x01') || ((*unaff_r5 & 7) != 4)) goto LAB_0000014c;
    }
    else {
      if ((*unaff_r5 & 7) != 5) goto LAB_0000014c;
    }
    uVar3 = FUN_00000158(unaff_r5 + 0x28);
    if (DAT_00000188 < uVar3) {
      iVar2 = uVar3 - DAT_00000188;
    }
    else {
      iVar2 = 0;
    }
    FUN_0000016c(iVar2,*(undefined4 *)(unaff_r4 + 0xc));
    if (*(char *)(iVar1 + 4) == '\0') {
      FUN_00000176();
    }
    uVar4 = 1;
  }
  else {
LAB_0000014c:
    uVar4 = 0;
  }
  return uVar4;
}



undefined4 FUN_00000158(void)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r6;
  
  uVar1 = FUN_00000158();
  if (DAT_00000188 < uVar1) {
    iVar2 = uVar1 - DAT_00000188;
  }
  else {
    iVar2 = 0;
  }
  FUN_0000016c(iVar2,*(undefined4 *)(unaff_r4 + 0xc));
  if (*(char *)(unaff_r6 + 4) == '\0') {
    FUN_00000176();
  }
  return 1;
}



undefined4 FUN_0000016c(void)

{
  int unaff_r6;
  
  FUN_0000016c();
  if (*(char *)(unaff_r6 + 4) == '\0') {
    FUN_00000176();
  }
  return 1;
}



undefined4 FUN_00000176(void)

{
  FUN_00000176();
  return 1;
}



void FUN_0000018c(void)

{
  char *pcVar1;
  short sVar2;
  
  pcVar1 = DAT_000001d8;
  if (*DAT_000001d8 != '\0') {
    if (*(short *)(DAT_000001d8 + 4) == 0) {
      *(undefined *)(DAT_000001dc + 0xe) = 1;
      if (pcVar1[2] == '\0') {
        FUN_000001cc(0,*(undefined4 *)(pcVar1 + 0xc));
        FUN_000001d0();
        return;
      }
      pcVar1[2] = pcVar1[2] + -1;
      FUN_000001b6();
      sVar2 = (ushort)*(byte *)(DAT_000001e0 + 8) << 1;
    }
    else {
      if ((*(byte *)(DAT_000001dc + 0xc) & 1) == 0) {
        return;
      }
      sVar2 = *(short *)(DAT_000001d8 + 4) + -1;
    }
    *(short *)(pcVar1 + 4) = sVar2;
  }
  return;
}



void FUN_000001b6(void)

{
  int unaff_r4;
  
  FUN_000001b6();
  *(short *)(unaff_r4 + 4) = (ushort)*(byte *)(DAT_000001e0 + 8) << 1;
  return;
}



void FUN_000001cc(void)

{
  FUN_000001cc();
  FUN_000001d0();
  return;
}



void FUN_000001d0(void)

{
  FUN_000001d0();
  return;
}



void FUN_000001e8(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_000001e8();
  FUN_000001f2(puVar1,0,0x30);
  *puVar1 = 0x1b;
  FUN_00000208((uint)*(byte *)(DAT_00000214 + 1),DAT_00000214 + 6,0x7b,puVar1);
  return;
}



void FUN_000001f2(void)

{
  undefined *unaff_r4;
  
  FUN_000001f2();
  *unaff_r4 = 0x1b;
  FUN_00000208((uint)*(byte *)(DAT_00000214 + 1),DAT_00000214 + 6,0x7b);
  return;
}



void FUN_00000208(void)

{
  FUN_00000208();
  return;
}



void FUN_00000218(void)

{
  undefined *puVar1;
  
  puVar1 = DAT_00000230;
  FUN_0000021e((uint)(byte)DAT_00000230[1]);
  *puVar1 = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  return;
}



void FUN_0000021e(void)

{
  undefined *unaff_r4;
  
  FUN_0000021e();
  *unaff_r4 = 0;
  *(undefined2 *)(unaff_r4 + 4) = 0;
  unaff_r4[2] = 0;
  return;
}


