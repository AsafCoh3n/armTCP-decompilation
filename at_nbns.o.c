#include "at_nbns.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4;
    *(uint *)uVar1 = uVar1;
    uVar1 = (unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_lr >> 0x20 - uVar1) & 1);
    param_1 = (uint *)(unaff_r11 & unaff_lr << uVar1);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (uint *)0x0;
  }
  if (in_ZR) {
    param_1 = (uint *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (uint)param_1 & param_4 << 2;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_3;
    *(uint **)(param_1 + -4) = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4;
    *(uint *)uVar1 = uVar1;
    uVar1 = (unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_lr >> 0x20 - uVar1) & 1);
    param_1 = (uint *)(unaff_r11 & unaff_lr << uVar1);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (uint *)0x0;
  }
  if (in_ZR) {
    param_1 = (uint *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (uint)param_1 & param_4 << 2;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_3;
    *(uint **)(param_1 + -4) = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4;
    *(uint *)uVar1 = uVar1;
    uVar1 = (unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_lr >> 0x20 - uVar1) & 1);
    param_1 = (uint *)(unaff_r11 & unaff_lr << uVar1);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (uint *)0x0;
  }
  if (in_ZR) {
    param_1 = (uint *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (uint)param_1 & param_4 << 2;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_3;
    *(uint **)(param_1 + -4) = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4;
    *(uint *)uVar1 = uVar1;
    uVar1 = (unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_lr >> 0x20 - uVar1) & 1);
    param_1 = (uint *)(unaff_r11 & unaff_lr << uVar1);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (uint *)0x0;
  }
  if (in_ZR) {
    param_1 = (uint *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (uint)param_1 & param_4 << 2;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_3;
    *(uint **)(param_1 + -4) = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = (uint)param_1 & param_2 & unaff_r4;
    *(uint *)uVar1 = uVar1;
    uVar1 = (unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_lr >> 0x20 - uVar1) & 1);
    param_1 = (uint *)(unaff_r11 & unaff_lr << uVar1);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (uint *)0x0;
  }
  if (in_ZR) {
    param_1 = (uint *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (uint)param_1 & param_4 << 2;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_3;
    *(uint **)(param_1 + -4) = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = (uint)param_1 & unaff_r4;
    *(uint *)uVar1 = uVar1;
    uVar1 = (unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_lr >> 0x20 - uVar1) & 1);
    param_1 = (uint *)(unaff_r11 & unaff_lr << uVar1);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (uint *)0x0;
  }
  if (in_ZR) {
    param_1 = (uint *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (uint)param_1 & param_4 << 2;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_3;
    *(uint **)(param_1 + -4) = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(uint *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint unaff_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  
  if (in_ZR) {
    uVar1 = (uint)param_1 & unaff_r4;
    *(uint *)uVar1 = uVar1;
    uVar1 = (unaff_r8 ^ uVar1 & unaff_r4 >> (uVar1 & 0xff)) & 0xff;
    in_CY = (bool)((byte)(unaff_lr >> 0x20 - uVar1) & 1);
    param_1 = (uint *)(unaff_r11 & unaff_lr << uVar1);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == (uint *)0x0;
  }
  if (in_ZR) {
    param_1 = (uint *)((uint)param_1 & param_3 & unaff_r8);
  }
  if (in_NG) {
                    // WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
  }
  if (in_CY) {
    param_3 = (uint)param_1 & param_4 << 2;
  }
  software_interrupt(0xfef7ff);
  if (in_CY) {
    *param_1 = unaff_lr;
    param_1[-1] = unaff_r11;
    param_1[-2] = unaff_r8;
    param_1[-3] = param_3;
    *(uint **)(param_1 + -4) = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



undefined4 FUN_000000aa(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  char *pcVar7;
  undefined2 *unaff_r4;
  uint uVar8;
  undefined4 in_stack_00000008;
  
  iVar4 = FUN_000000aa();
  uVar3 = DAT_0000016c;
  pcVar7 = (char *)((int)unaff_r4 + 0xd);
  uVar8 = 0;
  do {
    cVar2 = *pcVar7;
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 2;
    *(byte *)(iVar4 + uVar8) = *pcVar1 + 0xbfU | cVar2 * '\x10' + (char)uVar3;
    iVar5 = DAT_00000170;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x10);
  do {
    cVar2 = *(char *)(iVar4 + uVar8 + -1);
    if ((cVar2 != '\0') && (cVar2 != ' ')) break;
    uVar8 = uVar8 - 1;
  } while (uVar8 != 0);
  *(undefined *)(iVar4 + uVar8) = 0;
  FUN_000000ee(iVar4 + 0x14,*(undefined4 *)(iVar5 + 0xc));
  iVar5 = FUN_000000f8(iVar4,iVar4 + 0x14,uVar8 + 1);
  if (iVar5 == 1) {
    puVar6 = (undefined2 *)FUN_0000010a();
    *puVar6 = *unaff_r4;
    puVar6[1] = 0x85;
    puVar6[2] = 0;
    puVar6[3] = 0x100;
    puVar6[4] = 0;
    puVar6[5] = 0;
    uVar8 = (uint)*(byte *)(unaff_r4 + 6);
    FUN_00000130(puVar6 + 6,unaff_r4 + 6,uVar8 + 6);
    FUN_0000013c((int)puVar6 + uVar8 + 0x12,DAT_00000174,8);
    FUN_00000148((int)puVar6 + uVar8 + 0x1a,DAT_00000178,4);
    FUN_00000156((uint)*DAT_00000164,in_stack_00000008,0x89,puVar6);
  }
  FUN_0000015c(iVar4);
  return 1;
}



undefined4 FUN_000000ee(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *unaff_r4;
  undefined2 unaff_r7;
  uint uVar3;
  undefined4 in_stack_00000008;
  
  FUN_000000ee();
  iVar1 = FUN_000000f8();
  if (iVar1 == 1) {
    puVar2 = (undefined2 *)FUN_0000010a();
    *puVar2 = *unaff_r4;
    puVar2[1] = 0x85;
    puVar2[2] = unaff_r7;
    puVar2[3] = 0x100;
    puVar2[4] = unaff_r7;
    puVar2[5] = unaff_r7;
    uVar3 = (uint)*(byte *)(unaff_r4 + 6);
    FUN_00000130(puVar2 + 6,unaff_r4 + 6,uVar3 + 6);
    FUN_0000013c((int)puVar2 + uVar3 + 0x12,DAT_00000174,8);
    FUN_00000148((int)puVar2 + uVar3 + 0x1a,DAT_00000178,4);
    FUN_00000156((uint)*DAT_00000164,in_stack_00000008,0x89,puVar2);
  }
  FUN_0000015c();
  return 1;
}



undefined4 FUN_000000f8(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *unaff_r4;
  undefined2 unaff_r7;
  uint uVar3;
  undefined4 param_7;
  
  iVar1 = FUN_000000f8();
  if (iVar1 == 1) {
    puVar2 = (undefined2 *)FUN_0000010a();
    *puVar2 = *unaff_r4;
    puVar2[1] = 0x85;
    puVar2[2] = unaff_r7;
    puVar2[3] = 0x100;
    puVar2[4] = unaff_r7;
    puVar2[5] = unaff_r7;
    uVar3 = (uint)*(byte *)(unaff_r4 + 6);
    FUN_00000130(puVar2 + 6,unaff_r4 + 6,uVar3 + 6);
    FUN_0000013c((int)puVar2 + uVar3 + 0x12,DAT_00000174,8);
    FUN_00000148((int)puVar2 + uVar3 + 0x1a,DAT_00000178,4);
    FUN_00000156((uint)*DAT_00000164,param_7,0x89,puVar2);
  }
  FUN_0000015c();
  return 1;
}



undefined4 FUN_0000010a(void)

{
  undefined2 *puVar1;
  undefined2 *unaff_r4;
  undefined2 unaff_r7;
  uint uVar2;
  undefined4 in_stack_00000008;
  
  puVar1 = (undefined2 *)FUN_0000010a();
  *puVar1 = *unaff_r4;
  puVar1[1] = 0x85;
  puVar1[2] = unaff_r7;
  puVar1[3] = 0x100;
  puVar1[4] = unaff_r7;
  puVar1[5] = unaff_r7;
  uVar2 = (uint)*(byte *)(unaff_r4 + 6);
  FUN_00000130(puVar1 + 6,unaff_r4 + 6,uVar2 + 6);
  FUN_0000013c((int)puVar1 + uVar2 + 0x12,DAT_00000174,8);
  FUN_00000148((int)puVar1 + uVar2 + 0x1a,DAT_00000178,4);
  FUN_00000156((uint)*DAT_00000164,in_stack_00000008,0x89,puVar1);
  FUN_0000015c();
  return 1;
}



undefined4 FUN_00000130(void)

{
  int unaff_r5;
  int unaff_r7;
  undefined4 in_stack_00000008;
  
  FUN_00000130();
  FUN_0000013c(unaff_r5 + unaff_r7 + 0x12,DAT_00000174,8);
  FUN_00000148(unaff_r5 + unaff_r7 + 0x1a,DAT_00000178,4);
  FUN_00000156((uint)*DAT_00000164,in_stack_00000008,0x89);
  FUN_0000015c();
  return 1;
}



undefined4 FUN_0000013c(void)

{
  int unaff_r5;
  int unaff_r7;
  undefined4 in_stack_00000008;
  
  FUN_0000013c();
  FUN_00000148(unaff_r5 + unaff_r7 + 8,DAT_00000178,4);
  FUN_00000156((uint)*DAT_00000164,in_stack_00000008,0x89);
  FUN_0000015c();
  return 1;
}



undefined4 FUN_00000148(void)

{
  undefined4 param_7;
  
  FUN_00000148();
  FUN_00000156((uint)*DAT_00000164,param_7,0x89);
  FUN_0000015c();
  return 1;
}



undefined4 FUN_00000156(void)

{
  FUN_00000156();
  FUN_0000015c();
  return 1;
}



undefined4 FUN_0000015c(void)

{
  FUN_0000015c();
  return 1;
}


