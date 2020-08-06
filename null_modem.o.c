#include "null_modem.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(uint param_1,uint param_2,uint param_3)

{
  uint *unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    param_1 = unaff_r11 ^
              in_lr >> ((unaff_r8 ^ param_2 & (uint)unaff_r4 >> (param_2 & 0xff)) & 0xff);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = *(uint **)(param_1 - 0x905);
  }
  if (in_NG) {
    *unaff_r4 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(uint param_1,uint param_2,uint param_3)

{
  uint *unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    param_1 = unaff_r11 ^
              in_lr >> ((unaff_r8 ^ param_2 & (uint)unaff_r4 >> (param_2 & 0xff)) & 0xff);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = *(uint **)(param_1 - 0x905);
  }
  if (in_NG) {
    *unaff_r4 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(uint param_1,uint param_2,uint param_3)

{
  uint *unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    param_1 = unaff_r11 ^
              in_lr >> ((unaff_r8 ^ param_2 & (uint)unaff_r4 >> (param_2 & 0xff)) & 0xff);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = *(uint **)(param_1 - 0x905);
  }
  if (in_NG) {
    *unaff_r4 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(uint param_1,uint param_2,uint param_3)

{
  uint *unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
    param_1 = unaff_r11 ^
              in_lr >> ((unaff_r8 ^ param_2 & (uint)unaff_r4 >> (param_2 & 0xff)) & 0xff);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = *(uint **)(param_1 - 0x905);
  }
  if (in_NG) {
    *unaff_r4 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(uint param_1,uint param_2,uint param_3)

{
  uint *unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    param_1 = param_1 & param_2;
    *(uint *)param_1 = param_1;
    param_1 = unaff_r11 ^
              in_lr >> ((unaff_r8 ^ param_1 & (uint)unaff_r4 >> (param_1 & 0xff)) & 0xff);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = *(uint **)(param_1 - 0x905);
  }
  if (in_NG) {
    *unaff_r4 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(uint param_1,undefined4 param_2,uint param_3)

{
  uint *unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    *(uint *)param_1 = param_1;
    param_1 = unaff_r11 ^
              in_lr >> ((unaff_r8 ^ param_1 & (uint)unaff_r4 >> (param_1 & 0xff)) & 0xff);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = *(uint **)(param_1 - 0x905);
  }
  if (in_NG) {
    *unaff_r4 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(uint param_1,undefined4 param_2,uint param_3)

{
  uint *unaff_r4;
  uint unaff_r8;
  uint unaff_r11;
  uint in_lr;
  bool in_NG;
  bool in_ZR;
  char in_OV;
  
  if (in_ZR) {
    *(uint *)param_1 = param_1;
    param_1 = unaff_r11 ^
              in_lr >> ((unaff_r8 ^ param_1 & (uint)unaff_r4 >> (param_1 & 0xff)) & 0xff);
    in_NG = (int)param_1 < 0;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & param_3 & unaff_r8;
  }
  if (in_NG != (bool)in_OV) {
    unaff_r4 = *(uint **)(param_1 - 0x905);
  }
  if (in_NG) {
    *unaff_r4 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00000066(void)

{
  FUN_00000066();
  return;
}



void FUN_0000008c(void)

{
  FUN_0000008c();
  return;
}



uint FUN_000000e2(void)

{
  int iVar1;
  int unaff_r4;
  undefined unaff_r6;
  
  iVar1 = FUN_000000e2();
  if (iVar1 == 1) {
    FUN_0000010c();
    *(undefined *)(unaff_r4 + 4) = 0;
    *(undefined *)(unaff_r4 + 1) = unaff_r6;
  }
  return (uint)(iVar1 == 1);
}



uint FUN_000000f0(void)

{
  int iVar1;
  int unaff_r4;
  undefined unaff_r6;
  
  iVar1 = FUN_000000f0();
  if (iVar1 == 1) {
    FUN_00000102(0x140);
    FUN_00000106();
    *(undefined *)(unaff_r4 + 1) = unaff_r6;
  }
  return (uint)(iVar1 == 1);
}



undefined4 FUN_00000102(void)

{
  int unaff_r4;
  undefined unaff_r6;
  
  FUN_00000102();
  FUN_00000106();
  *(undefined *)(unaff_r4 + 1) = unaff_r6;
  return 1;
}



undefined4 FUN_00000106(void)

{
  int unaff_r4;
  undefined unaff_r6;
  
  FUN_00000106();
  *(undefined *)(unaff_r4 + 1) = unaff_r6;
  return 1;
}



undefined4 FUN_0000010c(void)

{
  int unaff_r4;
  undefined unaff_r6;
  
  FUN_0000010c();
  *(undefined *)(unaff_r4 + 4) = 0;
  *(undefined *)(unaff_r4 + 1) = unaff_r6;
  return 1;
}



void FUN_00000164(void)

{
  short sVar1;
  int unaff_r4;
  
  FUN_00000164();
  if (((*(short *)(unaff_r4 + 6) == 0) ||
      (sVar1 = *(short *)(unaff_r4 + 6) + -1, *(short *)(unaff_r4 + 6) = sVar1, sVar1 == 0)) &&
     (*(char *)(unaff_r4 + 1) == '\x05')) {
    FUN_0000017e();
  }
  return;
}



void FUN_0000017e(void)

{
  FUN_0000017e();
  return;
}



void FUN_0000018c(void)

{
  int iVar1;
  char cVar2;
  
  iVar1 = DAT_000001e0;
  if (*(char *)(DAT_000001e0 + 2) == '\0') {
    *(undefined *)(DAT_000001e0 + 1) = 5;
    *(undefined *)(iVar1 + 3) = 3;
    *(undefined *)(iVar1 + 4) = 1;
    *(undefined *)(iVar1 + 2) = 1;
  }
  else {
    if (*(char *)(DAT_000001e0 + 2) != '\x01') {
      return;
    }
    if (*(char *)(DAT_000001e0 + 4) != '\x01') {
      *(undefined *)(DAT_000001e0 + 1) = 4;
      *(undefined *)(iVar1 + 2) = 2;
      return;
    }
    cVar2 = *(char *)(DAT_000001e0 + 3) + -1;
    *(char *)(DAT_000001e0 + 3) = cVar2;
    if (cVar2 == '\0') {
      *(undefined *)(iVar1 + 1) = 1;
      return;
    }
  }
  FUN_000001be(0x1e4);
  *(short *)(iVar1 + 6) = (ushort)*(byte *)(DAT_000001ec + 8) * 3;
  return;
}



void FUN_000001be(void)

{
  int unaff_r4;
  
  FUN_000001be();
  *(short *)(unaff_r4 + 6) = (ushort)*(byte *)(DAT_000001ec + 8) * 3;
  return;
}



void FUN_000001f8(void)

{
  char *unaff_r4;
  
  while( true ) {
    FUN_000001f8();
    if (*unaff_r4 == '\0') break;
    unaff_r4 = unaff_r4 + 1;
  }
  return;
}


