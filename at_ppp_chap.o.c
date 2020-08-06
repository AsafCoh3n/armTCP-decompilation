#include "at_ppp_chap.o.h"



void UndefinedInstruction(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042(*(undefined4 *)(DAT_000000d0 + 0xc));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void SupervisorCall(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042(*(undefined4 *)(DAT_000000d0 + 0xc));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void PrefetchAbort(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042(*(undefined4 *)(DAT_000000d0 + 0xc));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void DataAbort(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042(*(undefined4 *)(DAT_000000d0 + 0xc));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void NotUsed(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042(*(undefined4 *)(DAT_000000d0 + 0xc));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void IRQ(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042(*(undefined4 *)(DAT_000000d0 + 0xc));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FIQ(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042(*(undefined4 *)(DAT_000000d0 + 0xc));
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_00000042(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_00000042();
  uVar2 = uVar2 & 0xff;
  uVar3 = FUN_0000004c(0x54);
  FUN_00000052();
  FUN_0000005e(uVar3,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_00000068(uVar3,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar3,DAT_000000d8 + 4);
  FUN_00000078(uVar3);
  uVar5 = uVar2 + 0x15 & 0xff;
  iVar4 = FUN_00000088(uVar5 + 0xe);
  *(undefined *)(iVar4 + 0x12) = 1;
  *(undefined *)(iVar4 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar4 + 0x14) = (short)((uVar5 << 0x18) >> 0x10);
  *(undefined *)(iVar4 + 0x16) = 0x10;
  FUN_000000ac(iVar4 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc),uVar2);
  FUN_000000c0(iVar4);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_0000004c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r7;
  
  uVar2 = FUN_0000004c();
  FUN_00000052();
  FUN_0000005e(uVar2,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_00000068(uVar2,DAT_000000d4,4);
  iVar1 = DAT_000000d8;
  FUN_00000072(uVar2,DAT_000000d8 + 4);
  FUN_00000078(uVar2);
  uVar4 = unaff_r7 + 0x15U & 0xff;
  iVar3 = FUN_00000088(uVar4 + 0xe);
  *(undefined *)(iVar3 + 0x12) = 1;
  *(undefined *)(iVar3 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar3 + 0x14) = (short)((uVar4 << 0x18) >> 0x10);
  *(undefined *)(iVar3 + 0x16) = 0x10;
  FUN_000000ac(iVar3 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar3 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0(iVar3);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_00000052(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_r7;
  
  FUN_00000052();
  FUN_0000005e();
  FUN_00000068();
  iVar1 = DAT_000000d8;
  FUN_00000072();
  FUN_00000078();
  uVar3 = unaff_r7 + 0x15U & 0xff;
  iVar2 = FUN_00000088(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 1;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000000ac(iVar2 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar2 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0(iVar2);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_0000005e(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_r7;
  
  FUN_0000005e();
  FUN_00000068();
  iVar1 = DAT_000000d8;
  FUN_00000072();
  FUN_00000078();
  uVar3 = unaff_r7 + 0x15U & 0xff;
  iVar2 = FUN_00000088(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 1;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000000ac(iVar2 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar2 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0(iVar2);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_00000068(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_r7;
  
  FUN_00000068();
  iVar1 = DAT_000000d8;
  FUN_00000072();
  FUN_00000078();
  uVar3 = unaff_r7 + 0x15U & 0xff;
  iVar2 = FUN_00000088(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 1;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(iVar1 + 1);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000000ac(iVar2 + 0x17,iVar1 + 4,0x10);
  FUN_000000ba(iVar2 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0(iVar2);
  *(undefined2 *)(iVar1 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_00000072(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000072();
  FUN_00000078();
  uVar2 = unaff_r7 + 0x15U & 0xff;
  iVar1 = FUN_00000088(uVar2 + 0xe);
  *(undefined *)(iVar1 + 0x12) = 1;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r6 + 1);
  *(undefined2 *)(iVar1 + 0x14) = (short)((uVar2 << 0x18) >> 0x10);
  *(undefined *)(iVar1 + 0x16) = 0x10;
  FUN_000000ac(iVar1 + 0x17,unaff_r6 + 4,0x10);
  FUN_000000ba(iVar1 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0(iVar1);
  *(undefined2 *)(unaff_r6 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_00000078(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000078();
  uVar2 = unaff_r7 + 0x15U & 0xff;
  iVar1 = FUN_00000088(uVar2 + 0xe);
  *(undefined *)(iVar1 + 0x12) = 1;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r6 + 1);
  *(undefined2 *)(iVar1 + 0x14) = (short)((uVar2 << 0x18) >> 0x10);
  *(undefined *)(iVar1 + 0x16) = 0x10;
  FUN_000000ac(iVar1 + 0x17,unaff_r6 + 4,0x10);
  FUN_000000ba(iVar1 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0(iVar1);
  *(undefined2 *)(unaff_r6 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_00000088(void)

{
  int iVar1;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_00000088();
  *(undefined *)(iVar1 + 0x12) = 1;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r6 + 1);
  *(ushort *)(iVar1 + 0x14) =
       (ushort)((uint)(unaff_r5 << 0x18) >> 0x10) | (ushort)((uint)(unaff_r5 << 8) >> 0x10);
  *(undefined *)(iVar1 + 0x16) = 0x10;
  FUN_000000ac(iVar1 + 0x17,unaff_r6 + 4,0x10);
  FUN_000000ba(iVar1 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0(iVar1);
  *(undefined2 *)(unaff_r6 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_000000ac(void)

{
  int unaff_r4;
  int unaff_r6;
  
  FUN_000000ac();
  FUN_000000ba(unaff_r4 + 0x27,*(undefined4 *)(DAT_000000d0 + 0xc));
  FUN_000000c0();
  *(undefined2 *)(unaff_r6 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_000000ba(void)

{
  int unaff_r6;
  
  FUN_000000ba();
  FUN_000000c0();
  *(undefined2 *)(unaff_r6 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_000000c0(void)

{
  int unaff_r6;
  
  FUN_000000c0();
  *(undefined2 *)(unaff_r6 + 2) = *(undefined2 *)(DAT_000000dc + 6);
  return;
}



void FUN_00000116(void)

{
  FUN_00000116();
  return;
}



void FUN_00000128(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  uVar1 = FUN_00000128();
  uVar2 = FUN_00000132(0x54);
  FUN_00000138();
  FUN_00000144(uVar2,unaff_r6 + 0x13,1);
  FUN_00000150(uVar2,*(undefined4 *)(DAT_00000284 + 0x10),uVar1 & 0xff);
  FUN_0000015a(uVar2,in_stack_00000004,0x10);
  FUN_00000162(uVar2,in_stack_00000004);
  FUN_00000168(uVar2);
  uVar1 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar4 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar3 = FUN_00000184(uVar4 + 0xe);
  *(undefined *)(iVar3 + 0x12) = 2;
  *(undefined *)(iVar3 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar3 + 0x14) = (short)((uVar4 << 0x18) >> 0x10);
  *(undefined *)(iVar3 + 0x16) = 0x10;
  FUN_000001a8(iVar3 + 0x17,in_stack_00000004,0x10);
  FUN_000001b6(iVar3 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar3);
  return;
}



void FUN_00000132(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  uVar1 = FUN_00000132();
  FUN_00000138();
  FUN_00000144(uVar1,unaff_r6 + 0x13,1);
  FUN_00000150(uVar1,*(undefined4 *)(DAT_00000284 + 0x10));
  FUN_0000015a(uVar1,in_stack_00000004,0x10);
  FUN_00000162(uVar1,in_stack_00000004);
  FUN_00000168(uVar1);
  uVar2 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar4 = (uVar2 & 0xff) + 0x15 & 0xff;
  iVar3 = FUN_00000184(uVar4 + 0xe);
  *(undefined *)(iVar3 + 0x12) = 2;
  *(undefined *)(iVar3 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar3 + 0x14) = (short)((uVar4 << 0x18) >> 0x10);
  *(undefined *)(iVar3 + 0x16) = 0x10;
  FUN_000001a8(iVar3 + 0x17,in_stack_00000004,0x10);
  FUN_000001b6(iVar3 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar2 & 0xff);
  FUN_0000026e(iVar3);
  return;
}



void FUN_00000138(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  FUN_00000138();
  FUN_00000144();
  FUN_00000150();
  FUN_0000015a();
  FUN_00000162();
  FUN_00000168();
  uVar1 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar3 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar2 = FUN_00000184(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 2;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000001a8(iVar2 + 0x17,in_stack_00000004,0x10);
  FUN_000001b6(iVar2 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar2);
  return;
}



void FUN_00000144(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  FUN_00000144();
  FUN_00000150();
  FUN_0000015a();
  FUN_00000162();
  FUN_00000168();
  uVar1 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar3 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar2 = FUN_00000184(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 2;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000001a8(iVar2 + 0x17,in_stack_00000004,0x10);
  FUN_000001b6(iVar2 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar2);
  return;
}



void FUN_00000150(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  undefined4 param_6;
  
  FUN_00000150();
  FUN_0000015a();
  FUN_00000162();
  FUN_00000168();
  uVar1 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar3 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar2 = FUN_00000184(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 2;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000001a8(iVar2 + 0x17,param_6,0x10);
  FUN_000001b6(iVar2 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar2);
  return;
}



void FUN_0000015a(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  undefined4 param_6;
  
  FUN_0000015a();
  FUN_00000162();
  FUN_00000168();
  uVar1 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar3 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar2 = FUN_00000184(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 2;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000001a8(iVar2 + 0x17,param_6,0x10);
  FUN_000001b6(iVar2 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar2);
  return;
}



void FUN_00000162(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  FUN_00000162();
  FUN_00000168();
  uVar1 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar3 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar2 = FUN_00000184(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 2;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000001a8(iVar2 + 0x17,in_stack_00000004,0x10);
  FUN_000001b6(iVar2 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar2);
  return;
}



void FUN_00000168(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  FUN_00000168();
  uVar1 = FUN_00000170(*(undefined4 *)(DAT_00000284 + 0xc));
  uVar3 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar2 = FUN_00000184(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 2;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000001a8(iVar2 + 0x17,in_stack_00000004,0x10);
  FUN_000001b6(iVar2 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar2);
  return;
}



void FUN_00000170(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  uVar1 = FUN_00000170();
  uVar3 = (uVar1 & 0xff) + 0x15 & 0xff;
  iVar2 = FUN_00000184(uVar3 + 0xe);
  *(undefined *)(iVar2 + 0x12) = 2;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(undefined2 *)(iVar2 + 0x14) = (short)((uVar3 << 0x18) >> 0x10);
  *(undefined *)(iVar2 + 0x16) = 0x10;
  FUN_000001a8(iVar2 + 0x17,in_stack_00000004,0x10);
  FUN_000001b6(iVar2 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc),uVar1 & 0xff);
  FUN_0000026e(iVar2);
  return;
}



void FUN_00000184(void)

{
  int iVar1;
  int unaff_r5;
  int unaff_r6;
  undefined4 param_6;
  
  iVar1 = FUN_00000184();
  *(undefined *)(iVar1 + 0x12) = 2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r6 + 0x13);
  *(ushort *)(iVar1 + 0x14) =
       (ushort)((uint)(unaff_r5 << 0x18) >> 0x10) | (ushort)((uint)(unaff_r5 << 8) >> 0x10);
  *(undefined *)(iVar1 + 0x16) = 0x10;
  FUN_000001a8(iVar1 + 0x17,param_6,0x10);
  FUN_000001b6(iVar1 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc));
  FUN_0000026e(iVar1);
  return;
}



void FUN_000001a8(void)

{
  int unaff_r4;
  
  FUN_000001a8();
  FUN_000001b6(unaff_r4 + 0x27,*(undefined4 *)(DAT_00000284 + 0xc));
  FUN_0000026e();
  return;
}



void FUN_000001b6(void)

{
  FUN_000001b6();
  FUN_0000026e();
  return;
}



void FUN_000001cc(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined uVar4;
  ushort *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  ushort unaff_r7;
  undefined4 in_stack_00000004;
  
  uVar1 = FUN_000001cc();
  if ((((uint)*(ushort *)(unaff_r6 + 0x14) << 0x18 | (uint)*(ushort *)(unaff_r6 + 0x14) << 8) >>
       0x10 == (uVar1 & 0xff) + 0x15) &&
     (iVar2 = FUN_000001ea(unaff_r6 + 0x27,*(undefined4 *)(unaff_r4 + 6)), iVar2 != 0)) {
    uVar1 = FUN_000001f4(*(undefined4 *)(unaff_r4 + 8));
    uVar3 = FUN_000001fe(0x54);
    FUN_00000204();
    FUN_00000212(uVar3,unaff_r5 + 1,1);
    FUN_0000021c(uVar3,*(undefined4 *)(unaff_r4 + 8),uVar1 & 0xff);
    FUN_00000226(uVar3,unaff_r5 + 4,0x10);
    FUN_0000022e(uVar3,unaff_r5 + 4);
    FUN_00000234(uVar3);
    iVar2 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
    if (iVar2 != 0) {
      *unaff_r4 = *unaff_r4 | unaff_r7;
      *(undefined2 *)(unaff_r5 + 2) = 0;
    }
  }
  iVar2 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 4;
  }
  *(undefined *)(iVar2 + 0x12) = uVar4;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar2 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_000001ea(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined uVar4;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 in_stack_00000004;
  
  iVar1 = FUN_000001ea();
  if (iVar1 != 0) {
    uVar2 = FUN_000001f4(*(undefined4 *)(unaff_r4 + 8));
    uVar3 = FUN_000001fe(0x54);
    FUN_00000204();
    FUN_00000212(uVar3,unaff_r5 + 1,1);
    FUN_0000021c(uVar3,*(undefined4 *)(unaff_r4 + 8),uVar2 & 0xff);
    FUN_00000226(uVar3,unaff_r5 + 4,0x10);
    FUN_0000022e(uVar3,unaff_r5 + 4);
    FUN_00000234(uVar3);
    iVar1 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
    if (iVar1 != 0) {
      *unaff_r4 = *unaff_r4 | unaff_r7;
      *(undefined2 *)(unaff_r5 + 2) = 0;
    }
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar4;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_000001f4(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined uVar4;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 in_stack_00000004;
  
  uVar1 = FUN_000001f4();
  uVar2 = FUN_000001fe(0x54);
  FUN_00000204();
  FUN_00000212(uVar2,unaff_r5 + 1,1);
  FUN_0000021c(uVar2,*(undefined4 *)(unaff_r4 + 8),uVar1 & 0xff);
  FUN_00000226(uVar2,unaff_r5 + 4,0x10);
  FUN_0000022e(uVar2,unaff_r5 + 4);
  FUN_00000234(uVar2);
  iVar3 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
  if (iVar3 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar3 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 4;
  }
  *(undefined *)(iVar3 + 0x12) = uVar4;
  *(undefined *)(iVar3 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar3 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_000001fe(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined uVar3;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 in_stack_00000004;
  
  uVar1 = FUN_000001fe();
  FUN_00000204();
  FUN_00000212(uVar1,unaff_r5 + 1,1);
  FUN_0000021c(uVar1,*(undefined4 *)(unaff_r4 + 8));
  FUN_00000226(uVar1,unaff_r5 + 4,0x10);
  FUN_0000022e(uVar1,unaff_r5 + 4);
  FUN_00000234(uVar1);
  iVar2 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
  if (iVar2 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar2 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = 4;
  }
  *(undefined *)(iVar2 + 0x12) = uVar3;
  *(undefined *)(iVar2 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar2 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_00000204(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 param_5;
  undefined4 in_stack_00000004;
  
  FUN_00000204();
  FUN_00000212(param_5,unaff_r5 + 1,1);
  FUN_0000021c(param_5,*(undefined4 *)(unaff_r4 + 8));
  FUN_00000226(param_5,unaff_r5 + 4,0x10);
  FUN_0000022e(param_5,unaff_r5 + 4);
  FUN_00000234(param_5);
  iVar1 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
  if (iVar1 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_00000212(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 param_5;
  undefined4 in_stack_00000004;
  
  FUN_00000212();
  FUN_0000021c(param_5,*(undefined4 *)(unaff_r4 + 8));
  FUN_00000226(param_5,unaff_r5 + 4,0x10);
  FUN_0000022e(param_5,unaff_r5 + 4);
  FUN_00000234(param_5);
  iVar1 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
  if (iVar1 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_0000021c(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 param_5;
  undefined4 in_stack_00000004;
  
  FUN_0000021c();
  FUN_00000226(param_5,unaff_r5 + 4,0x10);
  FUN_0000022e(param_5,unaff_r5 + 4);
  FUN_00000234(param_5);
  iVar1 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
  if (iVar1 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_00000226(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 param_5;
  undefined4 in_stack_00000004;
  
  FUN_00000226();
  FUN_0000022e(param_5,unaff_r5 + 4);
  FUN_00000234(param_5);
  iVar1 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
  if (iVar1 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_0000022e(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 param_5;
  undefined4 in_stack_00000004;
  
  FUN_0000022e();
  FUN_00000234(param_5);
  iVar1 = FUN_0000023e(in_stack_00000004,unaff_r5 + 4,0x10);
  if (iVar1 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_00000234(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  undefined4 param_6;
  
  FUN_00000234();
  iVar1 = FUN_0000023e(param_6,unaff_r5 + 4,0x10);
  if (iVar1 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_0000023e(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  ushort unaff_r7;
  
  iVar1 = FUN_0000023e();
  if (iVar1 != 0) {
    *unaff_r4 = *unaff_r4 | unaff_r7;
    *(undefined2 *)(unaff_r5 + 2) = 0;
  }
  iVar1 = FUN_00000252(0x12);
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_00000252(void)

{
  int iVar1;
  undefined uVar2;
  ushort *unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_00000252();
  if ((int)((uint)*unaff_r4 << 0x11) < 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  *(undefined *)(iVar1 + 0x12) = uVar2;
  *(undefined *)(iVar1 + 0x13) = *(undefined *)(unaff_r5 + 1);
  *(undefined2 *)(iVar1 + 0x14) = 0x400;
  FUN_0000026e();
  return;
}



void FUN_0000026e(void)

{
  FUN_0000026e();
  return;
}



void FUN_000002bc(void)

{
  FUN_000002bc();
  return;
}



void FUN_000002dc(void)

{
  FUN_000002dc();
  return;
}



void FUN_000002f0(undefined4 param_1)

{
  FUN_000002f6(param_1,DAT_00000308);
  FUN_000002fc(param_1);
  return;
}



void FUN_000002f6(void)

{
  FUN_000002f6();
  FUN_000002fc();
  return;
}



void FUN_000002fc(void)

{
  FUN_000002fc();
  return;
}


