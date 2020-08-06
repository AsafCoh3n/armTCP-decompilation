#include "at_tftp.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = (undefined4 *)(uVar2 & in_r12 << 0x11);
    *(uint *)uVar2 = uVar2;
    iVar1 = unaff_r11 >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff);
    in_OV = SBORROW4(unaff_r8,iVar1);
    param_1 = unaff_r8 - iVar1;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & (uint)param_3 & unaff_r8;
  }
  if (!in_OV) {
    *param_3 = 0x44;
    param_3[-1] = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -2) = register0x00000054;
    param_3[-3] = param_2;
    param_3[-4] = param_1;
  }
  if (!in_ZR) {
    coprocessor_moveto2(7,7,unaff_r4,param_1,in_cr0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = (undefined4 *)(uVar2 & in_r12 << 0x11);
    *(uint *)uVar2 = uVar2;
    iVar1 = unaff_r11 >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff);
    in_OV = SBORROW4(unaff_r8,iVar1);
    param_1 = unaff_r8 - iVar1;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & (uint)param_3 & unaff_r8;
  }
  if (!in_OV) {
    *param_3 = 0x44;
    param_3[-1] = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -2) = register0x00000054;
    param_3[-3] = param_2;
    param_3[-4] = param_1;
  }
  if (!in_ZR) {
    coprocessor_moveto2(7,7,unaff_r4,param_1,in_cr0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = (undefined4 *)(uVar2 & in_r12 << 0x11);
    *(uint *)uVar2 = uVar2;
    iVar1 = unaff_r11 >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff);
    in_OV = SBORROW4(unaff_r8,iVar1);
    param_1 = unaff_r8 - iVar1;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & (uint)param_3 & unaff_r8;
  }
  if (!in_OV) {
    *param_3 = 0x44;
    param_3[-1] = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -2) = register0x00000054;
    param_3[-3] = param_2;
    param_3[-4] = param_1;
  }
  if (!in_ZR) {
    coprocessor_moveto2(7,7,unaff_r4,param_1,in_cr0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    uVar2 = unaff_r8 & param_2 & param_2;
    param_3 = (undefined4 *)(uVar2 & in_r12 << 0x11);
    *(uint *)uVar2 = uVar2;
    iVar1 = unaff_r11 >> ((unaff_r8 ^ uVar2 & unaff_r4 >> (uVar2 & 0xff)) & 0xff);
    in_OV = SBORROW4(unaff_r8,iVar1);
    param_1 = unaff_r8 - iVar1;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & (uint)param_3 & unaff_r8;
  }
  if (!in_OV) {
    *param_3 = 0x44;
    param_3[-1] = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -2) = register0x00000054;
    param_3[-3] = param_2;
    param_3[-4] = param_1;
  }
  if (!in_ZR) {
    coprocessor_moveto2(7,7,unaff_r4,param_1,in_cr0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(uint param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    param_1 = param_1 & param_2;
    param_3 = (undefined4 *)(param_1 & in_r12 << 0x11);
    *(uint *)param_1 = param_1;
    iVar1 = unaff_r11 >> ((unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff);
    in_OV = SBORROW4(unaff_r8,iVar1);
    param_1 = unaff_r8 - iVar1;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & (uint)param_3 & unaff_r8;
  }
  if (!in_OV) {
    *param_3 = 0x44;
    param_3[-1] = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -2) = register0x00000054;
    param_3[-3] = param_2;
    param_3[-4] = param_1;
  }
  if (!in_ZR) {
    coprocessor_moveto2(7,7,unaff_r4,param_1,in_cr0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    param_3 = (undefined4 *)(param_1 & in_r12 << 0x11);
    *(uint *)param_1 = param_1;
    iVar1 = unaff_r11 >> ((unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff);
    in_OV = SBORROW4(unaff_r8,iVar1);
    param_1 = unaff_r8 - iVar1;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & (uint)param_3 & unaff_r8;
  }
  if (!in_OV) {
    *param_3 = 0x44;
    param_3[-1] = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -2) = register0x00000054;
    param_3[-3] = param_2;
    param_3[-4] = param_1;
  }
  if (!in_ZR) {
    coprocessor_moveto2(7,7,unaff_r4,param_1,in_cr0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r8;
  int unaff_r11;
  int in_r12;
  undefined4 unaff_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr0;
  
  if (in_ZR) {
    param_3 = (undefined4 *)(param_1 & in_r12 << 0x11);
    *(uint *)param_1 = param_1;
    iVar1 = unaff_r11 >> ((unaff_r8 ^ param_1 & unaff_r4 >> (param_1 & 0xff)) & 0xff);
    in_OV = SBORROW4(unaff_r8,iVar1);
    param_1 = unaff_r8 - iVar1;
    in_ZR = param_1 == 0;
  }
  if (in_ZR) {
    param_1 = param_1 & (uint)param_3 & unaff_r8;
  }
  if (!in_OV) {
    *param_3 = 0x44;
    param_3[-1] = unaff_lr;
    *(BADSPACEBASE **)(param_3 + -2) = register0x00000054;
    param_3[-3] = param_2;
    param_3[-4] = param_1;
  }
  if (!in_ZR) {
    coprocessor_moveto2(7,7,unaff_r4,param_1,in_cr0);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00000070(void)

{
  int iVar1;
  undefined *unaff_r4;
  int unaff_r7;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_00000070();
  iVar1 = FUN_0000007a(iVar1 + 5U & 0xffff);
  FUN_00000082(iVar1,5);
  FUN_0000008a(iVar1 + 2,in_stack_0000000c);
  FUN_00000092(iVar1 + 4);
  FUN_000000a6((uint)(byte)unaff_r4[1],unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8),iVar1);
  FUN_000000ac();
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_0000007a(void)

{
  int iVar1;
  undefined *unaff_r4;
  int unaff_r7;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_0000007a();
  FUN_00000082(iVar1,5);
  FUN_0000008a(iVar1 + 2,in_stack_0000000c);
  FUN_00000092(iVar1 + 4);
  FUN_000000a6((uint)(byte)unaff_r4[1],unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8),iVar1);
  FUN_000000ac();
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_00000082(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  int unaff_r7;
  undefined4 param_8;
  
  FUN_00000082();
  FUN_0000008a(unaff_r5 + 2,param_8);
  FUN_00000092(unaff_r5 + 4);
  FUN_000000a6((uint)(byte)unaff_r4[1],unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  FUN_000000ac();
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_0000008a(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  FUN_0000008a();
  FUN_00000092(unaff_r5 + 4);
  FUN_000000a6((uint)(byte)unaff_r4[1],unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  FUN_000000ac();
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_00000092(void)

{
  undefined *unaff_r4;
  int unaff_r7;
  
  FUN_00000092();
  FUN_000000a6((uint)(byte)unaff_r4[1],unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  FUN_000000ac();
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_000000a6(void)

{
  undefined *unaff_r4;
  int unaff_r7;
  
  FUN_000000a6();
  FUN_000000ac();
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_000000ac(void)

{
  undefined *unaff_r4;
  int unaff_r7;
  
  FUN_000000ac();
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_000000b2(void)

{
  undefined *unaff_r4;
  int unaff_r7;
  
  FUN_000000b2();
  if (*(char *)(unaff_r7 + 9) == '\0') {
    FUN_000000be((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_000000be(void)

{
  undefined *unaff_r4;
  
  FUN_000000be();
  *unaff_r4 = 0;
  return;
}



void FUN_000000d8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_000000de(4);
  FUN_000000e6(iVar1,4);
  FUN_000000ee(iVar1 + 2,(uint)*(ushort *)(param_1 + 0xc));
  FUN_000000fe((uint)*(byte *)(param_1 + 1),param_1 + 4,(uint)*(ushort *)(param_1 + 8),iVar1,4);
  *(undefined *)(param_1 + 0xe) = *(undefined *)(DAT_00000110 + 8);
  return;
}



void FUN_000000de(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_000000de();
  FUN_000000e6(iVar1,4);
  FUN_000000ee(iVar1 + 2,(uint)*(ushort *)(unaff_r4 + 0xc));
  FUN_000000fe((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8),iVar1);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000110 + 8);
  return;
}



void FUN_000000e6(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_000000e6();
  FUN_000000ee(unaff_r5 + 2,(uint)*(ushort *)(unaff_r4 + 0xc));
  FUN_000000fe((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000110 + 8);
  return;
}



void FUN_000000ee(void)

{
  int unaff_r4;
  
  FUN_000000ee();
  FUN_000000fe((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000110 + 8);
  return;
}



void FUN_000000fe(void)

{
  int unaff_r4;
  
  FUN_000000fe();
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000110 + 8);
  return;
}



void FUN_0000011a(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_0000011a();
  FUN_00000122(iVar1,6);
  FUN_0000012a(iVar1 + 2,0x15c);
  FUN_00000136(iVar1 + 10,0x164,(uint)*(ushort *)(unaff_r4 + 10));
  FUN_0000014a((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8),iVar1);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000168 + 8);
  return;
}



void FUN_00000122(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_00000122();
  FUN_0000012a(unaff_r5 + 2,0x15c);
  FUN_00000136(unaff_r5 + 10,0x164,(uint)*(ushort *)(unaff_r4 + 10));
  FUN_0000014a((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000168 + 8);
  return;
}



void FUN_0000012a(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_0000012a();
  FUN_00000136(unaff_r5 + 10,0x164,(uint)*(ushort *)(unaff_r4 + 10));
  FUN_0000014a((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000168 + 8);
  return;
}



void FUN_00000136(void)

{
  int unaff_r4;
  
  FUN_00000136();
  FUN_0000014a((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000168 + 8);
  return;
}



void FUN_0000014a(void)

{
  int unaff_r4;
  
  FUN_0000014a();
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(DAT_00000168 + 8);
  return;
}



void FUN_00000176(void)

{
  int unaff_r4;
  
  FUN_00000176();
  *(undefined4 *)(unaff_r4 + 0x18) = 0;
  return;
}



uint FUN_00000184(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_stack_00000000;
  
  iVar3 = *DAT_000001c4;
  iVar2 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(DAT_000001c4 + 1) <= iVar2) {
      return 0;
    }
    if ((uint)*(byte *)(iVar3 + 1) == param_1) break;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 0x1c;
  }
  if ((iVar2 + 1U & 0xff) == 0) {
    return 0;
  }
  if (in_stack_00000000 < 4) {
    return 0;
  }
  uVar1 = FUN_000001b8();
  return uVar1 & 0xffff;
}



uint FUN_000001b8(void)

{
  uint uVar1;
  
  uVar1 = FUN_000001b8();
  return uVar1 & 0xffff;
}



void FUN_000001d2(void)

{
  int unaff_r4;
  
  FUN_000001d2();
  *(undefined4 *)(unaff_r4 + 0x14) = 0;
  return;
}



void FUN_000001ee(void)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  int *unaff_r4;
  int iVar4;
  
  FUN_000001ee();
  iVar3 = FUN_000001f8(0,3,DAT_0000023c);
  iVar1 = DAT_00000240;
  *(undefined *)(DAT_00000240 + 1) = (char)iVar3;
  if (iVar3 != 0) {
    FUN_00000206(iVar3,(uint)*(ushort *)((int)unaff_r4 + 6));
  }
  iVar4 = *unaff_r4;
  iVar3 = 1;
  while (iVar3 <= (int)(uint)*(byte *)(unaff_r4 + 1)) {
    if (*(char *)((int)unaff_r4 + 9) == '\0') {
      uVar2 = FUN_00000220(0,3,DAT_00000244);
    }
    else {
      uVar2 = *(undefined *)(iVar1 + 1);
    }
    iVar3 = iVar3 + 1;
    *(undefined *)(iVar4 + 1) = uVar2;
    iVar4 = iVar4 + 0x1c;
  }
  return;
}



void FUN_000001f8(void)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  int *unaff_r4;
  int iVar4;
  
  iVar3 = FUN_000001f8();
  iVar1 = DAT_00000240;
  *(undefined *)(DAT_00000240 + 1) = (char)iVar3;
  if (iVar3 != 0) {
    FUN_00000206(iVar3,(uint)*(ushort *)((int)unaff_r4 + 6));
  }
  iVar4 = *unaff_r4;
  iVar3 = 1;
  while (iVar3 <= (int)(uint)*(byte *)(unaff_r4 + 1)) {
    if (*(char *)((int)unaff_r4 + 9) == '\0') {
      uVar2 = FUN_00000220(0,3,DAT_00000244);
    }
    else {
      uVar2 = *(undefined *)(iVar1 + 1);
    }
    iVar3 = iVar3 + 1;
    *(undefined *)(iVar4 + 1) = uVar2;
    iVar4 = iVar4 + 0x1c;
  }
  return;
}



void FUN_00000206(void)

{
  undefined uVar1;
  int *unaff_r4;
  int iVar2;
  int unaff_r6;
  int iVar3;
  
  FUN_00000206();
  iVar3 = *unaff_r4;
  iVar2 = 1;
  while (iVar2 <= (int)(uint)*(byte *)(unaff_r4 + 1)) {
    if (*(char *)((int)unaff_r4 + 9) == '\0') {
      uVar1 = FUN_00000220(0,3,DAT_00000244);
    }
    else {
      uVar1 = *(undefined *)(unaff_r6 + 1);
    }
    iVar2 = iVar2 + 1;
    *(undefined *)(iVar3 + 1) = uVar1;
    iVar3 = iVar3 + 0x1c;
  }
  return;
}



void FUN_00000220(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    uVar1 = FUN_00000220(param_1,param_2,param_3);
    while( true ) {
      unaff_r5 = unaff_r5 + 1;
      *(undefined *)(unaff_r7 + 1) = (char)uVar1;
      unaff_r7 = unaff_r7 + 0x1c;
      if ((int)(uint)*(byte *)(unaff_r4 + 4) < unaff_r5) {
        return;
      }
      if (*(char *)(unaff_r4 + 9) == '\0') break;
      uVar1 = (uint)*(byte *)(unaff_r6 + 1);
    }
    param_2 = 3;
    param_1 = 0;
    param_3 = DAT_00000244;
  } while( true );
}



void FUN_00000258(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  
  FUN_00000258();
  FUN_0000025e();
  if (*(char *)(unaff_r5 + 9) == '\0') {
    FUN_0000026a((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_0000025e(void)

{
  undefined *unaff_r4;
  int unaff_r5;
  
  FUN_0000025e();
  if (*(char *)(unaff_r5 + 9) == '\0') {
    FUN_0000026a((uint)(byte)unaff_r4[1]);
  }
  *unaff_r4 = 0;
  return;
}



void FUN_0000026a(void)

{
  undefined *unaff_r4;
  
  FUN_0000026a();
  *unaff_r4 = 0;
  return;
}



// WARNING: Removing unreachable block (ram,0x000003e8)
// WARNING: Removing unreachable block (ram,0x00000424)
// WARNING: Removing unreachable block (ram,0x00000440)
// WARNING: Removing unreachable block (ram,0x0000042a)
// WARNING: Removing unreachable block (ram,0x0000044a)
// WARNING: Removing unreachable block (ram,0x00000432)
// WARNING: Removing unreachable block (ram,0x000003ea)
// WARNING: Removing unreachable block (ram,0x000003f8)
// WARNING: Removing unreachable block (ram,0x000003fe)
// WARNING: Removing unreachable block (ram,0x0000040a)
// WARNING: Removing unreachable block (ram,0x0000044e)
// WARNING: Removing unreachable block (ram,0x00000410)

uint FUN_000002ae(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  int iVar1;
  uint uVar2;
  char *unaff_r4;
  char *pcVar3;
  int unaff_r5;
  uint uVar4;
  char **unaff_r6;
  uint unaff_r7;
  int param_11;
  
  while (iVar1 = FUN_000002ae(param_1,param_2,param_3), iVar1 != 1) {
    do {
      param_1 = unaff_r4;
      unaff_r4 = param_1 + 0x1c;
      unaff_r5 = unaff_r5 + 1;
      if ((int)(uint)*(byte *)(unaff_r6 + 1) <= unaff_r5) {
        uVar4 = 0;
        goto LAB_000002e8;
      }
    } while ((*unaff_r4 == '\0') || ((uint)*(ushort *)(param_1 + 0x24) != unaff_r7));
    param_3 = 4;
    param_1 = param_1 + 0x20;
    param_2 = param_5;
  }
  uVar4 = unaff_r5 + 1U & 0xff;
  if ((uVar4 == 0) || (*(char *)((int)unaff_r6 + 9) == '\0')) {
LAB_000002e8:
    uVar2 = FUN_000002ec(param_7,param_8);
    if (uVar2 != 0) {
      if (uVar4 == 0) {
        pcVar3 = *unaff_r6;
        while ((int)uVar4 < (int)(uint)*(byte *)(unaff_r6 + 1)) {
          if (*pcVar3 == '\0') {
            FUN_0000034a(pcVar3 + 4,param_7,4);
            *(short *)(pcVar3 + 8) = (short)param_8;
            uVar4 = uVar4 + 1 & 0xff;
            *pcVar3 = '\x01';
            if (uVar4 != 0) goto LAB_0000035c;
            break;
          }
          pcVar3 = pcVar3 + 0x1c;
          uVar4 = uVar4 + 1;
        }
        iVar1 = FUN_00000316(0x10);
        FUN_0000031e(iVar1,5);
        FUN_00000326(iVar1 + 2,0);
        FUN_0000032e(iVar1 + 4,0x45c);
        FUN_00000340((uint)*(byte *)(DAT_00000454 + 1),param_7,param_8,iVar1);
      }
      else {
LAB_0000035c:
        pcVar3 = *unaff_r6 + uVar4 * 0x1c + -0x1c;
        pcVar3[2] = '\0';
        if ((*pcVar3 == '\x01') && (*(char *)((int)unaff_r6 + 9) == '\0')) {
          FUN_0000037c((uint)(byte)pcVar3[1],0);
        }
        FUN_00000382(param_9);
        iVar1 = FUN_0000038a();
        pcVar3 = (char *)(iVar1 * 0x10000);
        if (*pcVar3 != '\x01') {
          FUN_0000039e(pcVar3,0x21);
          FUN_000003a4(pcVar3);
        }
        *(undefined2 *)(pcVar3 + 10) = 0x200;
        FUN_000003c0(pcVar3,param_9 + 2,param_11 - 2U & 0xffff);
        if ((int)((uint)(byte)pcVar3[2] << 0x1d) < 0) {
          return 1;
        }
        FUN_00000438(uVar4,0,0x468);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = FUN_000002d8(uVar4,param_9,param_11);
    uVar2 = uVar2 & 0xffff;
  }
  return uVar2;
}



uint FUN_000002d8(void)

{
  uint uVar1;
  
  uVar1 = FUN_000002d8();
  return uVar1 & 0xffff;
}



// WARNING: Removing unreachable block (ram,0x000003e8)
// WARNING: Removing unreachable block (ram,0x00000424)
// WARNING: Removing unreachable block (ram,0x00000440)
// WARNING: Removing unreachable block (ram,0x0000042a)
// WARNING: Removing unreachable block (ram,0x0000044a)
// WARNING: Removing unreachable block (ram,0x00000432)
// WARNING: Removing unreachable block (ram,0x000003ea)
// WARNING: Removing unreachable block (ram,0x000003f8)
// WARNING: Removing unreachable block (ram,0x000003fe)
// WARNING: Removing unreachable block (ram,0x0000040a)
// WARNING: Removing unreachable block (ram,0x0000044e)
// WARNING: Removing unreachable block (ram,0x00000410)

int FUN_000002ec(void)

{
  int iVar1;
  char *pcVar2;
  uint unaff_r5;
  char **unaff_r6;
  undefined4 param_7;
  undefined4 param_8;
  int in_stack_00000010;
  int in_stack_00000028;
  
  iVar1 = FUN_000002ec();
  if (iVar1 != 0) {
    if (unaff_r5 == 0) {
      pcVar2 = *unaff_r6;
      while ((int)unaff_r5 < (int)(uint)*(byte *)(unaff_r6 + 1)) {
        if (*pcVar2 == '\0') {
          FUN_0000034a(pcVar2 + 4,param_7,4);
          *(short *)(pcVar2 + 8) = (short)param_8;
          unaff_r5 = unaff_r5 + 1 & 0xff;
          *pcVar2 = '\x01';
          if (unaff_r5 != 0) goto LAB_0000035c;
          break;
        }
        pcVar2 = pcVar2 + 0x1c;
        unaff_r5 = unaff_r5 + 1;
      }
      iVar1 = FUN_00000316(0x10);
      FUN_0000031e(iVar1,5);
      FUN_00000326(iVar1 + 2,0);
      FUN_0000032e(iVar1 + 4,0x45c);
      FUN_00000340((uint)*(byte *)(DAT_00000454 + 1),param_7,param_8,iVar1);
    }
    else {
LAB_0000035c:
      pcVar2 = *unaff_r6 + unaff_r5 * 0x1c + -0x1c;
      pcVar2[2] = '\0';
      if ((*pcVar2 == '\x01') && (*(char *)((int)unaff_r6 + 9) == '\0')) {
        FUN_0000037c((uint)(byte)pcVar2[1],0);
      }
      FUN_00000382(in_stack_00000010);
      iVar1 = FUN_0000038a();
      pcVar2 = (char *)(iVar1 * 0x10000);
      if (*pcVar2 != '\x01') {
        FUN_0000039e(pcVar2,0x21);
        FUN_000003a4(pcVar2);
      }
      *(undefined2 *)(pcVar2 + 10) = 0x200;
      FUN_000003c0(pcVar2,in_stack_00000010 + 2,in_stack_00000028 - 2U & 0xffff);
      if ((int)((uint)(byte)pcVar2[2] << 0x1d) < 0) {
        return 1;
      }
      FUN_00000438(unaff_r5,0,0x468);
    }
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 FUN_00000316(void)

{
  int iVar1;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_00000316();
  FUN_0000031e(iVar1,5);
  FUN_00000326(iVar1 + 2,0);
  FUN_0000032e(iVar1 + 4,0x45c);
  FUN_00000340((uint)*(byte *)(DAT_00000454 + 1),in_stack_00000008,in_stack_0000000c,iVar1);
  return 0;
}



undefined4 FUN_0000031e(void)

{
  int unaff_r4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0000031e();
  FUN_00000326(unaff_r4 + 2,0);
  FUN_0000032e(unaff_r4 + 4,0x45c);
  FUN_00000340((uint)*(byte *)(DAT_00000454 + 1),in_stack_00000008,in_stack_0000000c);
  return 0;
}



undefined4 FUN_00000326(void)

{
  int unaff_r4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00000326();
  FUN_0000032e(unaff_r4 + 4,0x45c);
  FUN_00000340((uint)*(byte *)(DAT_00000454 + 1),in_stack_00000008,in_stack_0000000c);
  return 0;
}



undefined4 FUN_0000032e(void)

{
  undefined4 param_7;
  undefined4 in_stack_0000000c;
  
  FUN_0000032e();
  FUN_00000340((uint)*(byte *)(DAT_00000454 + 1),param_7,in_stack_0000000c);
  return 0;
}



undefined4 FUN_00000340(void)

{
  FUN_00000340();
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000003e8)
// WARNING: Removing unreachable block (ram,0x00000424)
// WARNING: Removing unreachable block (ram,0x00000440)
// WARNING: Removing unreachable block (ram,0x0000042a)
// WARNING: Removing unreachable block (ram,0x0000044a)
// WARNING: Removing unreachable block (ram,0x00000432)
// WARNING: Removing unreachable block (ram,0x000003ea)
// WARNING: Removing unreachable block (ram,0x000003f8)
// WARNING: Removing unreachable block (ram,0x000003fe)
// WARNING: Removing unreachable block (ram,0x0000040a)
// WARNING: Removing unreachable block (ram,0x0000044e)
// WARNING: Removing unreachable block (ram,0x00000410)

undefined4 FUN_0000034a(void)

{
  int iVar1;
  undefined *unaff_r4;
  char *pcVar2;
  int unaff_r5;
  uint uVar3;
  int *unaff_r6;
  undefined unaff_r7;
  undefined2 param_5;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000028;
  
  FUN_0000034a();
  *(undefined2 *)(unaff_r4 + 8) = param_5;
  uVar3 = unaff_r5 + 1U & 0xff;
  *unaff_r4 = unaff_r7;
  if (uVar3 == 0) {
    iVar1 = FUN_00000316(0x10);
    FUN_0000031e(iVar1,5);
    FUN_00000326(iVar1 + 2,0);
    FUN_0000032e(iVar1 + 4,0x45c);
    FUN_00000340((uint)*(byte *)(DAT_00000454 + 1),in_stack_00000008,in_stack_0000000c,iVar1);
  }
  else {
    pcVar2 = (char *)(*unaff_r6 + uVar3 * 0x1c + -0x1c);
    pcVar2[2] = '\0';
    if ((*pcVar2 == '\x01') && (*(char *)((int)unaff_r6 + 9) == '\0')) {
      FUN_0000037c((uint)(byte)pcVar2[1],0);
    }
    FUN_00000382(in_stack_00000010);
    iVar1 = FUN_0000038a();
    pcVar2 = (char *)(iVar1 * 0x10000);
    if (*pcVar2 != '\x01') {
      FUN_0000039e(pcVar2,0x21);
      FUN_000003a4(pcVar2);
    }
    *(undefined2 *)(pcVar2 + 10) = 0x200;
    FUN_000003c0(pcVar2,in_stack_00000010 + 2,in_stack_00000028 - 2U & 0xffff);
    if ((int)((uint)(byte)pcVar2[2] << 0x1d) < 0) {
      return 1;
    }
    FUN_00000438(uVar3,0,0x468);
  }
  return 0;
}



// WARNING: Removing unreachable block (ram,0x000003e8)
// WARNING: Removing unreachable block (ram,0x00000424)
// WARNING: Removing unreachable block (ram,0x00000440)
// WARNING: Removing unreachable block (ram,0x0000042a)
// WARNING: Removing unreachable block (ram,0x0000044a)
// WARNING: Removing unreachable block (ram,0x00000432)
// WARNING: Removing unreachable block (ram,0x000003ea)
// WARNING: Removing unreachable block (ram,0x000003f8)
// WARNING: Removing unreachable block (ram,0x000003fe)
// WARNING: Removing unreachable block (ram,0x0000040a)
// WARNING: Removing unreachable block (ram,0x0000044e)
// WARNING: Removing unreachable block (ram,0x00000410)

uint FUN_0000037c(void)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  int param_9;
  int in_stack_00000028;
  
  FUN_0000037c();
  FUN_00000382(param_9);
  iVar1 = FUN_0000038a();
  pcVar2 = (char *)(iVar1 * 0x10000);
  if (*pcVar2 != '\x01') {
    FUN_0000039e(pcVar2,0x21);
    FUN_000003a4(pcVar2);
  }
  *(undefined2 *)(pcVar2 + 10) = 0x200;
  FUN_000003c0(pcVar2,param_9 + 2,in_stack_00000028 - 2U & 0xffff);
  bVar3 = (int)((uint)(byte)pcVar2[2] << 0x1d) < 0;
  if (!bVar3) {
    FUN_00000438();
  }
  return (uint)bVar3;
}



// WARNING: Removing unreachable block (ram,0x000003e8)
// WARNING: Removing unreachable block (ram,0x00000424)
// WARNING: Removing unreachable block (ram,0x00000440)
// WARNING: Removing unreachable block (ram,0x0000042a)
// WARNING: Removing unreachable block (ram,0x0000044a)
// WARNING: Removing unreachable block (ram,0x00000432)
// WARNING: Removing unreachable block (ram,0x000003ea)
// WARNING: Removing unreachable block (ram,0x000003f8)
// WARNING: Removing unreachable block (ram,0x000003fe)
// WARNING: Removing unreachable block (ram,0x0000040a)
// WARNING: Removing unreachable block (ram,0x0000044e)
// WARNING: Removing unreachable block (ram,0x00000410)

uint FUN_00000382(void)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  int in_stack_00000010;
  int in_stack_00000028;
  
  FUN_00000382();
  iVar1 = FUN_0000038a();
  pcVar2 = (char *)(iVar1 * 0x10000);
  if (*pcVar2 != '\x01') {
    FUN_0000039e(pcVar2,0x21);
    FUN_000003a4(pcVar2);
  }
  *(undefined2 *)(pcVar2 + 10) = 0x200;
  FUN_000003c0(pcVar2,in_stack_00000010 + 2,in_stack_00000028 - 2U & 0xffff);
  bVar3 = (int)((uint)(byte)pcVar2[2] << 0x1d) < 0;
  if (!bVar3) {
    FUN_00000438();
  }
  return (uint)bVar3;
}



// WARNING: Removing unreachable block (ram,0x000003e8)
// WARNING: Removing unreachable block (ram,0x00000424)
// WARNING: Removing unreachable block (ram,0x00000440)
// WARNING: Removing unreachable block (ram,0x0000042a)
// WARNING: Removing unreachable block (ram,0x0000044a)
// WARNING: Removing unreachable block (ram,0x00000432)
// WARNING: Removing unreachable block (ram,0x000003ea)
// WARNING: Removing unreachable block (ram,0x000003f8)
// WARNING: Removing unreachable block (ram,0x000003fe)
// WARNING: Removing unreachable block (ram,0x0000040a)
// WARNING: Removing unreachable block (ram,0x0000044e)
// WARNING: Removing unreachable block (ram,0x00000410)

uint FUN_0000038a(void)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  int in_stack_00000010;
  int in_stack_00000028;
  
  iVar1 = FUN_0000038a();
  pcVar2 = (char *)(iVar1 * 0x10000);
  if (*pcVar2 != '\x01') {
    FUN_0000039e(pcVar2,0x21);
    FUN_000003a4(pcVar2);
  }
  *(undefined2 *)(pcVar2 + 10) = 0x200;
  FUN_000003c0(pcVar2,in_stack_00000010 + 2,in_stack_00000028 - 2U & 0xffff);
  bVar3 = (int)((uint)(byte)pcVar2[2] << 0x1d) < 0;
  if (!bVar3) {
    FUN_00000438();
  }
  return (uint)bVar3;
}



undefined4 FUN_0000039e(void)

{
  undefined uVar1;
  int iVar2;
  undefined *unaff_r4;
  int unaff_r6;
  undefined4 unaff_r7;
  int in_stack_00000010;
  
  FUN_0000039e();
  FUN_000003a4();
  *(undefined2 *)(unaff_r4 + 10) = 0x200;
  FUN_000003c0();
  if ((int)((uint)(byte)unaff_r4[2] << 0x1d) < 0) {
    if (unaff_r6 == 1) {
      iVar2 = FUN_000003ee(in_stack_00000010 + 2,0x494);
      *(int *)(unaff_r4 + 0x18) = iVar2;
      if (iVar2 == 0) goto LAB_00000436;
      if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
        FUN_00000400();
        unaff_r4[2] = unaff_r4[2] | (byte)unaff_r7;
      }
      uVar1 = 2;
      *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
    }
    else {
      if (unaff_r6 != 2) {
        return 1;
      }
      iVar2 = FUN_0000041a(in_stack_00000010 + 2,0x4a8);
      *(int *)(unaff_r4 + 0x18) = iVar2;
      if (iVar2 == 0) goto LAB_00000436;
      if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
        FUN_0000042c();
      }
      else {
        *(undefined2 *)(unaff_r4 + 0xc) = 0;
        FUN_00000446();
      }
      uVar1 = 3;
      *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
    }
    *unaff_r4 = uVar1;
    return 1;
  }
LAB_00000436:
  FUN_00000438();
  return 0;
}



undefined4 FUN_000003a4(void)

{
  undefined uVar1;
  int iVar2;
  undefined *unaff_r4;
  int unaff_r6;
  undefined4 unaff_r7;
  int param_9;
  
  FUN_000003a4();
  *(undefined2 *)(unaff_r4 + 10) = 0x200;
  FUN_000003c0();
  if ((int)((uint)(byte)unaff_r4[2] << 0x1d) < 0) {
    if (unaff_r6 == 1) {
      iVar2 = FUN_000003ee(param_9 + 2,0x494);
      *(int *)(unaff_r4 + 0x18) = iVar2;
      if (iVar2 == 0) goto LAB_00000436;
      if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
        FUN_00000400();
        unaff_r4[2] = unaff_r4[2] | (byte)unaff_r7;
      }
      uVar1 = 2;
      *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
    }
    else {
      if (unaff_r6 != 2) {
        return 1;
      }
      iVar2 = FUN_0000041a(param_9 + 2,0x4a8);
      *(int *)(unaff_r4 + 0x18) = iVar2;
      if (iVar2 == 0) goto LAB_00000436;
      if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
        FUN_0000042c();
      }
      else {
        *(undefined2 *)(unaff_r4 + 0xc) = 0;
        FUN_00000446();
      }
      uVar1 = 3;
      *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
    }
    *unaff_r4 = uVar1;
    return 1;
  }
LAB_00000436:
  FUN_00000438();
  return 0;
}



undefined4 FUN_000003c0(void)

{
  undefined uVar1;
  int iVar2;
  undefined *unaff_r4;
  int unaff_r6;
  undefined4 unaff_r7;
  undefined4 param_9;
  
  FUN_000003c0();
  if ((int)((uint)(byte)unaff_r4[2] << 0x1d) < 0) {
    if (unaff_r6 == 1) {
      iVar2 = FUN_000003ee(param_9,0x494);
      *(int *)(unaff_r4 + 0x18) = iVar2;
      if (iVar2 == 0) goto LAB_00000436;
      if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
        FUN_00000400();
        unaff_r4[2] = unaff_r4[2] | (byte)unaff_r7;
      }
      uVar1 = 2;
      *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
    }
    else {
      if (unaff_r6 != 2) {
        return 1;
      }
      iVar2 = FUN_0000041a(param_9,0x4a8);
      *(int *)(unaff_r4 + 0x18) = iVar2;
      if (iVar2 == 0) goto LAB_00000436;
      if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
        FUN_0000042c();
      }
      else {
        *(undefined2 *)(unaff_r4 + 0xc) = 0;
        FUN_00000446();
      }
      uVar1 = 3;
      *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
    }
    *unaff_r4 = uVar1;
    return 1;
  }
LAB_00000436:
  FUN_00000438();
  return 0;
}



undefined4 FUN_000003ee(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *unaff_r4;
  undefined4 unaff_r7;
  
  iVar1 = FUN_000003ee();
  *(int *)(unaff_r4 + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_00000438();
    uVar2 = 0;
  }
  else {
    if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
      FUN_00000400();
      unaff_r4[2] = unaff_r4[2] | (byte)unaff_r7;
    }
    *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
    *unaff_r4 = 2;
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 FUN_00000400(void)

{
  undefined *unaff_r4;
  undefined4 unaff_r7;
  
  FUN_00000400();
  unaff_r4[2] = unaff_r4[2] | (byte)unaff_r7;
  *(short *)(unaff_r4 + 0xc) = (short)unaff_r7;
  *unaff_r4 = 2;
  return 1;
}



undefined4 FUN_0000041a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *unaff_r4;
  undefined2 unaff_r7;
  
  iVar1 = FUN_0000041a();
  *(int *)(unaff_r4 + 0x18) = iVar1;
  if (iVar1 == 0) {
    FUN_00000438();
    uVar2 = 0;
  }
  else {
    if ((int)((uint)(byte)unaff_r4[2] << 0x1c) < 0) {
      FUN_0000042c();
    }
    else {
      *(undefined2 *)(unaff_r4 + 0xc) = 0;
      FUN_00000446();
    }
    *(undefined2 *)(unaff_r4 + 0xc) = unaff_r7;
    *unaff_r4 = 3;
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 FUN_0000042c(void)

{
  undefined *unaff_r4;
  undefined2 unaff_r7;
  
  FUN_0000042c();
  *(undefined2 *)(unaff_r4 + 0xc) = unaff_r7;
  *unaff_r4 = 3;
  return 1;
}



undefined4 FUN_00000438(void)

{
  FUN_00000438();
  return 0;
}



undefined4 FUN_00000446(void)

{
  undefined *unaff_r4;
  undefined2 unaff_r7;
  
  FUN_00000446();
  *(undefined2 *)(unaff_r4 + 0xc) = unaff_r7;
  *unaff_r4 = 3;
  return 1;
}



void FUN_000004d8(void)

{
  byte bVar1;
  uint uVar2;
  int unaff_r4;
  int unaff_r6;
  
  uVar2 = FUN_000004d8();
  bVar1 = *(byte *)(unaff_r4 + 2);
  *(byte *)(unaff_r4 + 2) = bVar1 & 0xfe;
  if ((int)((uint)(bVar1 >> 1) << 0x1d) < 0) {
    if (uVar2 == 0) {
      *(byte *)(unaff_r4 + 2) = bVar1 & 0xf6;
      return;
    }
  }
  else {
    if ((uint)*(ushort *)(unaff_r4 + 0xc) == uVar2 + 1) {
      if (*(char *)(unaff_r4 + 3) != '\0') {
        FUN_0000050a((uint)*(byte *)(unaff_r4 + 1),*(undefined4 *)(unaff_r4 + 0x14));
        FUN_0000051a((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8),
                     *(undefined4 *)(unaff_r4 + 0x14));
        *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r6 + 8);
        *(char *)(unaff_r4 + 3) = *(char *)(unaff_r4 + 3) + -1;
        return;
      }
    }
    else {
      if ((uint)*(ushort *)(unaff_r4 + 0xc) == uVar2) {
        if ((int)((uint)(bVar1 >> 1) << 0x1f) < 0) {
          FUN_00000544();
          return;
        }
        FUN_00000550();
        *(short *)(unaff_r4 + 0xc) = *(short *)(unaff_r4 + 0xc) + 1;
        return;
      }
    }
  }
  FUN_00000530();
  return;
}



void FUN_0000050a(void)

{
  int unaff_r4;
  int unaff_r6;
  
  FUN_0000050a();
  FUN_0000051a((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8),
               *(undefined4 *)(unaff_r4 + 0x14));
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r6 + 8);
  *(char *)(unaff_r4 + 3) = *(char *)(unaff_r4 + 3) + -1;
  return;
}



void FUN_0000051a(void)

{
  int unaff_r4;
  int unaff_r6;
  
  FUN_0000051a();
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r6 + 8);
  *(char *)(unaff_r4 + 3) = *(char *)(unaff_r4 + 3) + -1;
  return;
}



void FUN_00000530(void)

{
  FUN_00000530();
  return;
}



void FUN_00000544(void)

{
  FUN_00000544();
  return;
}



void FUN_00000550(void)

{
  int unaff_r4;
  
  FUN_00000550();
  *(short *)(unaff_r4 + 0xc) = *(short *)(unaff_r4 + 0xc) + 1;
  return;
}



void FUN_0000059c(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar4;
  int unaff_r7;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_0000059c();
  if (uVar1 == 0) {
LAB_000005c4:
    uVar3 = 0x624;
  }
  else {
    if ((uint)*(ushort *)(unaff_r4 + 0xc) != uVar1 + 1) {
      if ((uint)*(ushort *)(unaff_r4 + 0xc) == uVar1) {
        uVar4 = unaff_r6 - 4U & 0xffff;
        uVar1 = FUN_000005d6(*(undefined4 *)(unaff_r4 + 0x18),unaff_r5 + 4,uVar4);
        if (uVar1 == uVar4) {
          FUN_000005ec();
          if (uVar4 < *(ushort *)(unaff_r4 + 10)) {
            FUN_000005f8(in_stack_00000000);
            return;
          }
          *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r7 + 5);
          *(short *)(unaff_r4 + 0xc) = *(short *)(unaff_r4 + 0xc) + 1;
          return;
        }
        uVar2 = 3;
        uVar3 = 0x634;
        goto LAB_000005e2;
      }
      goto LAB_000005c4;
    }
    if (*(char *)(unaff_r4 + 3) != '\0') {
      *(char *)(unaff_r4 + 3) = *(char *)(unaff_r4 + 3) + -1;
      return;
    }
    uVar3 = 0x610;
  }
  uVar2 = 0;
LAB_000005e2:
  FUN_000005e4(in_stack_00000000,uVar2,uVar3);
  return;
}



void FUN_000005d6(void)

{
  uint uVar1;
  int unaff_r4;
  uint unaff_r6;
  int unaff_r7;
  undefined4 param_5;
  
  uVar1 = FUN_000005d6();
  if (uVar1 == unaff_r6) {
    FUN_000005ec();
    if (unaff_r6 < *(ushort *)(unaff_r4 + 10)) {
      FUN_000005f8(param_5);
    }
    else {
      *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r7 + 5);
      *(short *)(unaff_r4 + 0xc) = *(short *)(unaff_r4 + 0xc) + 1;
    }
  }
  else {
    FUN_000005e4(param_5,3,0x634);
  }
  return;
}



void FUN_000005e4(void)

{
  FUN_000005e4();
  return;
}



void FUN_000005ec(void)

{
  int unaff_r4;
  uint unaff_r6;
  int unaff_r7;
  undefined4 param_5;
  
  FUN_000005ec();
  if (unaff_r6 < *(ushort *)(unaff_r4 + 10)) {
    FUN_000005f8(param_5);
  }
  else {
    *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r7 + 5);
    *(short *)(unaff_r4 + 0xc) = *(short *)(unaff_r4 + 0xc) + 1;
  }
  return;
}



void FUN_000005f8(void)

{
  FUN_000005f8();
  return;
}



void FUN_0000064c(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  int in_stack_00000000;
  
  iVar2 = FUN_0000064c();
  if (iVar2 != 0) {
    iVar3 = FUN_00000656(iVar2,0x6b8);
    if ((iVar3 == 1) || (iVar3 = FUN_00000662(iVar2,0x6c0), iVar3 == 1)) {
      *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 4;
    }
    do {
      iVar2 = FUN_00000682(iVar2);
      if (iVar2 == 0) {
        return;
      }
      iVar3 = FUN_00000676(iVar2,0x6cc);
    } while (iVar3 != 1);
    FUN_00000698(iVar2 + 8,0x6d4);
    uVar1 = (undefined2)DAT_000006d8;
    if (in_stack_00000000 <= DAT_000006d8) {
      uVar1 = (undefined2)in_stack_00000000;
    }
    *(undefined2 *)(unaff_r5 + 10) = uVar1;
    *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 8;
  }
  return;
}



void FUN_00000656(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int in_stack_00000000;
  
  iVar2 = FUN_00000656();
  if ((iVar2 == 1) || (iVar2 = FUN_00000662(), iVar2 == 1)) {
    *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 4;
  }
  do {
    unaff_r4 = FUN_00000682(unaff_r4);
    if (unaff_r4 == 0) {
      return;
    }
    iVar2 = FUN_00000676(unaff_r4,0x6cc);
  } while (iVar2 != 1);
  FUN_00000698(unaff_r4 + 8,0x6d4);
  uVar1 = (undefined2)DAT_000006d8;
  if (in_stack_00000000 <= DAT_000006d8) {
    uVar1 = (undefined2)in_stack_00000000;
  }
  *(undefined2 *)(unaff_r5 + 10) = uVar1;
  *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 8;
  return;
}



void FUN_00000662(void)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int in_stack_00000000;
  
  iVar2 = FUN_00000662();
  if (iVar2 == 1) {
    *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 4;
  }
  do {
    unaff_r4 = FUN_00000682(unaff_r4);
    if (unaff_r4 == 0) {
      return;
    }
    iVar2 = FUN_00000676(unaff_r4,0x6cc);
  } while (iVar2 != 1);
  FUN_00000698(unaff_r4 + 8,0x6d4);
  uVar1 = (undefined2)DAT_000006d8;
  if (in_stack_00000000 <= DAT_000006d8) {
    uVar1 = (undefined2)in_stack_00000000;
  }
  *(undefined2 *)(unaff_r5 + 10) = uVar1;
  *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 8;
  return;
}



void FUN_00000676(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  
  while( true ) {
    iVar2 = FUN_00000676(param_1,param_2);
    if (iVar2 == 1) {
      FUN_00000698(unaff_r4 + 8,0x6d4);
      uVar1 = (undefined2)DAT_000006d8;
      if (param_5 <= DAT_000006d8) {
        uVar1 = (undefined2)param_5;
      }
      *(undefined2 *)(unaff_r5 + 10) = uVar1;
      *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 8;
      return;
    }
    param_1 = FUN_00000682(unaff_r4);
    if (param_1 == 0) break;
    param_2 = 0x6cc;
    unaff_r4 = param_1;
  }
  return;
}



void FUN_00000682(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int unaff_r5;
  int in_stack_00000000;
  
  do {
    param_1 = FUN_00000682(param_1);
    if (param_1 == 0) {
      return;
    }
    iVar2 = FUN_00000676(param_1,0x6cc);
  } while (iVar2 != 1);
  FUN_00000698(param_1 + 8,0x6d4);
  uVar1 = (undefined2)DAT_000006d8;
  if (in_stack_00000000 <= DAT_000006d8) {
    uVar1 = (undefined2)in_stack_00000000;
  }
  *(undefined2 *)(unaff_r5 + 10) = uVar1;
  *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 8;
  return;
}



void FUN_00000698(void)

{
  undefined2 uVar1;
  int unaff_r5;
  int param_5;
  
  FUN_00000698();
  uVar1 = (undefined2)DAT_000006d8;
  if (param_5 <= DAT_000006d8) {
    uVar1 = (undefined2)param_5;
  }
  *(undefined2 *)(unaff_r5 + 10) = uVar1;
  *(byte *)(unaff_r5 + 2) = *(byte *)(unaff_r5 + 2) | 8;
  return;
}



undefined4 FUN_000006e6(void)

{
  int iVar1;
  
  iVar1 = FUN_000006e6();
  if (iVar1 == 3) {
    FUN_0000070e();
  }
  else {
    if (iVar1 == 4) {
      FUN_0000071a();
    }
    else {
      if (iVar1 != 5) {
        FUN_000006fc();
        return 0;
      }
      FUN_00000726();
    }
  }
  return 1;
}



undefined4 FUN_000006fc(void)

{
  FUN_000006fc();
  return 0;
}



undefined4 FUN_0000070e(void)

{
  FUN_0000070e();
  return 1;
}



undefined4 FUN_0000071a(void)

{
  FUN_0000071a();
  return 1;
}



undefined4 FUN_00000726(void)

{
  FUN_00000726();
  return 1;
}



void FUN_00000796(uint param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  
  do {
    FUN_00000796(param_1,param_2,param_3);
    while( true ) {
      do {
        pbVar2 = DAT_0000081c;
        unaff_r6 = unaff_r6 + 1;
        if ((int)(uint)*(byte *)(unaff_r5 + 1) <= unaff_r6) {
          return;
        }
        bVar1 = *DAT_0000081c;
        *DAT_0000081c = bVar1 + 1;
        if (*(byte *)(unaff_r5 + 1) < (byte)(bVar1 + 1)) {
          *pbVar2 = unaff_r7;
        }
        param_1 = (uint)*pbVar2;
        pcVar6 = (char *)(*unaff_r5 + param_1 * 0x1c + -0x1c);
      } while (*pcVar6 == '\0');
      if ((((int)((uint)*(byte *)(DAT_00000820 + 0xc) << 0x1e) < 0) && (pcVar6[0xe] != '\0')) &&
         (cVar3 = pcVar6[0xe] + -1, pcVar6[0xe] = cVar3, cVar3 == '\0')) break;
      if (((pcVar6[2] & 1U) == 0) && (*pcVar6 == '\x02')) {
        iVar4 = FUN_000007b8((uint)*(ushort *)(pcVar6 + 10) + 4 & 0xffff);
        FUN_000007c0(iVar4,3);
        FUN_000007c8(iVar4 + 2,(uint)*(ushort *)(pcVar6 + 0xc));
        iVar5 = FUN_000007d2(*(undefined4 *)(pcVar6 + 0x18),iVar4 + 4,(uint)*(ushort *)(pcVar6 + 10)
                            );
        bVar1 = pcVar6[2];
        pcVar6[2] = bVar1 | unaff_r7;
        if (iVar5 < (int)(uint)*(ushort *)(pcVar6 + 10)) {
          pcVar6[2] = bVar1 | unaff_r7 | 2;
        }
        FUN_000007ee((uint)(byte)pcVar6[1],iVar4);
        FUN_00000800((uint)(byte)pcVar6[1],pcVar6 + 4,(uint)*(ushort *)(pcVar6 + 8),iVar4);
        FUN_0000080a(pcVar6,iVar4,iVar5 + 4U & 0xffff);
        pcVar6[3] = *(char *)((int)unaff_r5 + 5);
        pcVar6[0xe] = *(char *)(unaff_r5 + 2);
        return;
      }
    }
    param_2 = 0;
    param_3 = 0x824;
  } while( true );
}



void FUN_000007b8(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int unaff_r4;
  int unaff_r5;
  byte unaff_r7;
  
  iVar1 = FUN_000007b8();
  FUN_000007c0(iVar1,3);
  FUN_000007c8(iVar1 + 2,(uint)*(ushort *)(unaff_r4 + 0xc));
  iVar2 = FUN_000007d2(*(undefined4 *)(unaff_r4 + 0x18),iVar1 + 4,(uint)*(ushort *)(unaff_r4 + 10));
  bVar3 = *(byte *)(unaff_r4 + 2) | unaff_r7;
  *(byte *)(unaff_r4 + 2) = bVar3;
  if (iVar2 < (int)(uint)*(ushort *)(unaff_r4 + 10)) {
    *(byte *)(unaff_r4 + 2) = bVar3 | 2;
  }
  FUN_000007ee((uint)*(byte *)(unaff_r4 + 1),iVar1);
  FUN_00000800((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8),iVar1);
  FUN_0000080a();
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r5 + 5);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r5 + 8);
  return;
}



void FUN_000007c0(void)

{
  int iVar1;
  byte bVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  
  FUN_000007c0();
  FUN_000007c8(unaff_r6 + 2,(uint)*(ushort *)(unaff_r4 + 0xc));
  iVar1 = FUN_000007d2(*(undefined4 *)(unaff_r4 + 0x18),unaff_r6 + 4,
                       (uint)*(ushort *)(unaff_r4 + 10));
  bVar2 = *(byte *)(unaff_r4 + 2) | unaff_r7;
  *(byte *)(unaff_r4 + 2) = bVar2;
  if (iVar1 < (int)(uint)*(ushort *)(unaff_r4 + 10)) {
    *(byte *)(unaff_r4 + 2) = bVar2 | 2;
  }
  FUN_000007ee((uint)*(byte *)(unaff_r4 + 1));
  FUN_00000800((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  FUN_0000080a();
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r5 + 5);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r5 + 8);
  return;
}



void FUN_000007c8(void)

{
  int iVar1;
  byte bVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  
  FUN_000007c8();
  iVar1 = FUN_000007d2(*(undefined4 *)(unaff_r4 + 0x18),unaff_r6 + 4,
                       (uint)*(ushort *)(unaff_r4 + 10));
  bVar2 = *(byte *)(unaff_r4 + 2) | unaff_r7;
  *(byte *)(unaff_r4 + 2) = bVar2;
  if (iVar1 < (int)(uint)*(ushort *)(unaff_r4 + 10)) {
    *(byte *)(unaff_r4 + 2) = bVar2 | 2;
  }
  FUN_000007ee((uint)*(byte *)(unaff_r4 + 1));
  FUN_00000800((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  FUN_0000080a();
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r5 + 5);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r5 + 8);
  return;
}



void FUN_000007d2(void)

{
  int iVar1;
  byte bVar2;
  int unaff_r4;
  int unaff_r5;
  byte unaff_r7;
  
  iVar1 = FUN_000007d2();
  bVar2 = *(byte *)(unaff_r4 + 2) | unaff_r7;
  *(byte *)(unaff_r4 + 2) = bVar2;
  if (iVar1 < (int)(uint)*(ushort *)(unaff_r4 + 10)) {
    *(byte *)(unaff_r4 + 2) = bVar2 | 2;
  }
  FUN_000007ee((uint)*(byte *)(unaff_r4 + 1));
  FUN_00000800((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  FUN_0000080a();
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r5 + 5);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r5 + 8);
  return;
}



void FUN_000007ee(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_000007ee();
  FUN_00000800((uint)*(byte *)(unaff_r4 + 1),unaff_r4 + 4,(uint)*(ushort *)(unaff_r4 + 8));
  FUN_0000080a();
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r5 + 5);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r5 + 8);
  return;
}



void FUN_00000800(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_00000800();
  FUN_0000080a();
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r5 + 5);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r5 + 8);
  return;
}



void FUN_0000080a(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_0000080a();
  *(undefined *)(unaff_r4 + 3) = *(undefined *)(unaff_r5 + 5);
  *(undefined *)(unaff_r4 + 0xe) = *(undefined *)(unaff_r5 + 8);
  return;
}



void FUN_0000083a(void)

{
  int unaff_r4;
  undefined2 unaff_r5;
  undefined4 unaff_r6;
  
  FUN_0000083a();
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r6;
  *(undefined2 *)(unaff_r4 + 0x10) = unaff_r5;
  return;
}



// WARNING: This is an inlined function

void switch8_r3(void)

{
  byte bVar1;
  uint in_r3;
  int unaff_lr;
  
  if (in_r3 < (uint)*(byte *)(unaff_lr + -1)) {
    bVar1 = *(byte *)(unaff_lr + in_r3);
  }
  else {
    bVar1 = *(byte *)(unaff_lr + (uint)*(byte *)(unaff_lr + -1));
  }
                    // WARNING: Could not recover jumptable at 0x0000086c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(unaff_lr + (uint)bVar1 * 2))();
  return;
}


