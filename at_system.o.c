#include "at_system.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0000005a(void)

{
  undefined4 *puVar1;
  
  FUN_0000005a();
  puVar1 = DAT_00000080;
  *DAT_00000080 = 1;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined2 *)((int)puVar1 + 10) = 0;
  *(undefined *)(puVar1 + 3) = 0;
  FUN_00000072(puVar1 + -0xf,DAT_00000084,0x3c);
  FUN_00000076();
  return;
}



void FUN_00000072(void)

{
  FUN_00000072();
  FUN_00000076();
  return;
}



void FUN_00000076(void)

{
  FUN_00000076();
  return;
}



uint FUN_00000088(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = DAT_000000e4;
  if (*(char *)(DAT_000000e4 + 0xd) == '\x01') {
    *(undefined *)(DAT_000000e4 + 0xd) = 0;
    *(undefined *)(iVar2 + 0xe) = 1;
    iVar3 = DAT_000000e8;
    bVar1 = *(byte *)(iVar2 + 0xc);
    *(byte *)(iVar2 + 0xc) = bVar1 | 1;
    uVar5 = (uint)*(ushort *)(iVar2 + 10) + (uint)*(byte *)(iVar3 + 9) & 0xffff;
    *(undefined2 *)(iVar2 + 10) = (short)uVar5;
    if (999 < uVar5) {
      *(undefined2 *)(iVar2 + 10) = 0;
      iVar3 = DAT_000000ec;
      *(short *)(iVar2 + 8) = *(short *)(iVar2 + 8) + 1;
      *(byte *)(iVar2 + 0xc) = bVar1 | 3;
      *(int *)(iVar2 + 4) = iVar3 * *(int *)(iVar2 + 4) + DAT_000000f0;
      uVar4 = FUN_00000098();
      return uVar4;
    }
  }
  else {
    *(undefined *)(DAT_000000e4 + 0xc) = 0;
    *(undefined *)(iVar2 + 0xe) = 0;
  }
  FUN_00000098();
  return (uint)*(byte *)(iVar2 + 0xe);
}



uint FUN_00000098(void)

{
  int unaff_r4;
  
  FUN_00000098();
  return (uint)*(byte *)(unaff_r4 + 0xe);
}


