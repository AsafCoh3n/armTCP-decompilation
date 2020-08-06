#include "at_icmp.o.h"



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



undefined4 FUN_0000005c(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined2 extraout_var;
  undefined4 unaff_r6;
  
  iVar2 = FUN_0000005c();
  pbVar1 = DAT_000000b4;
  if ((iVar2 == 0) && ((*DAT_000000b4 & 1) == 0)) {
    pbVar4 = DAT_000000b4 + 0xc;
    *(undefined4 *)(DAT_000000b4 + 8) = unaff_r6;
    FUN_0000007e(pbVar4);
    *pbVar1 = *pbVar1 | 1;
    *(ushort *)(pbVar1 + 2) = (ushort)*(byte *)(DAT_000000b8 + 8);
    pbVar1[1] = 3;
    FUN_00000094();
    *(undefined2 *)(pbVar1 + 4) = extraout_var;
    *(undefined2 *)(pbVar1 + 6) = 0;
    iVar2 = FUN_000000a0();
    if (iVar2 == 0) {
      *(undefined2 *)(pbVar1 + 2) = 1;
      pbVar1[1] = 4;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_0000007e(void)

{
  undefined2 extraout_var;
  int iVar1;
  byte *unaff_r4;
  
  FUN_0000007e();
  *unaff_r4 = *unaff_r4 | 1;
  *(ushort *)(unaff_r4 + 2) = (ushort)*(byte *)(DAT_000000b8 + 8);
  unaff_r4[1] = 3;
  FUN_00000094();
  *(undefined2 *)(unaff_r4 + 4) = extraout_var;
  *(undefined2 *)(unaff_r4 + 6) = 0;
  iVar1 = FUN_000000a0();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_r4 + 2) = 1;
    unaff_r4[1] = 4;
  }
  return 1;
}



undefined4 FUN_00000094(void)

{
  undefined2 extraout_var;
  int iVar1;
  int unaff_r4;
  undefined2 unaff_r5;
  
  FUN_00000094();
  *(undefined2 *)(unaff_r4 + 4) = extraout_var;
  *(undefined2 *)(unaff_r4 + 6) = 0;
  iVar1 = FUN_000000a0();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_r4 + 2) = unaff_r5;
    *(undefined *)(unaff_r4 + 1) = 4;
  }
  return 1;
}



undefined4 FUN_000000a0(void)

{
  int iVar1;
  int unaff_r4;
  undefined2 unaff_r5;
  
  iVar1 = FUN_000000a0();
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_r4 + 2) = unaff_r5;
    *(undefined *)(unaff_r4 + 1) = 4;
  }
  return 1;
}



undefined4 FUN_000000c4(void)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *unaff_r4;
  
  iVar3 = FUN_000000c4();
  pbVar1 = DAT_0000018c;
  if (iVar3 == 0) {
    if (*(char *)(unaff_r4 + 0x13) == '\0') {
      if (((*DAT_0000018c & 1) != 0) && (*(char *)((int)unaff_r4 + 0x27) == '\0')) {
        iVar3 = FUN_00000144(unaff_r4 + 0xf,DAT_0000018c + 0xc,4);
        if (iVar3 == 0) {
          return 0;
        }
        if ((((uint)unaff_r4[0x15] << 0x18 | (uint)unaff_r4[0x15] << 8) >> 0x10 ==
             (uint)*(ushort *)(pbVar1 + 4)) && (*unaff_r4 == 0x1a)) {
          uVar5 = 0x61;
          do {
            if ((uint)*(byte *)((int)unaff_r4 + (uVar5 - 0x33)) != uVar5) {
              return 0;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < 0x73);
          FUN_00000178(0,*(undefined4 *)(pbVar1 + 8));
          *pbVar1 = 0;
          return 1;
        }
      }
    }
    else {
      if ((*(char *)(unaff_r4 + 0x13) == '\b') && (*(char *)((int)unaff_r4 + 0x27) == '\0')) {
        puVar4 = (ushort *)FUN_000000e8((uint)*unaff_r4 + 0x22);
        *(undefined *)(puVar4 + 0x13) = 0;
        *(undefined *)((int)puVar4 + 0x27) = 0;
        puVar4[0x14] = 0;
        FUN_00000102(puVar4 + 0x15,unaff_r4 + 0x15,(uint)*unaff_r4 - 4);
        uVar2 = FUN_0000010c(puVar4 + 0x13,(uint)*unaff_r4);
        puVar4[0x14] = uVar2;
        *puVar4 = *unaff_r4;
        FUN_00000122(puVar4,unaff_r4 + 0xf,1,0);
        FUN_00000128(puVar4);
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_000000e8(void)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *unaff_r4;
  undefined4 unaff_r7;
  
  puVar2 = (ushort *)FUN_000000e8();
  *(char *)(puVar2 + 0x13) = (char)unaff_r7;
  *(undefined *)((int)puVar2 + 0x27) = (char)unaff_r7;
  puVar2[0x14] = (ushort)unaff_r7;
  FUN_00000102(puVar2 + 0x15,unaff_r4 + 0x15,(uint)*unaff_r4 - 4);
  uVar1 = FUN_0000010c(puVar2 + 0x13,(uint)*unaff_r4);
  puVar2[0x14] = uVar1;
  *puVar2 = *unaff_r4;
  FUN_00000122(puVar2);
  FUN_00000128(puVar2);
  return 1;
}



undefined4 FUN_00000102(void)

{
  ushort uVar1;
  ushort *unaff_r4;
  ushort *unaff_r5;
  
  FUN_00000102();
  uVar1 = FUN_0000010c(unaff_r5 + 0x13,(uint)*unaff_r4);
  unaff_r5[0x14] = uVar1;
  *unaff_r5 = *unaff_r4;
  FUN_00000122();
  FUN_00000128();
  return 1;
}



undefined4 FUN_0000010c(void)

{
  undefined2 uVar1;
  undefined2 *unaff_r4;
  undefined2 *unaff_r5;
  
  uVar1 = FUN_0000010c();
  unaff_r5[0x14] = uVar1;
  *unaff_r5 = *unaff_r4;
  FUN_00000122();
  FUN_00000128();
  return 1;
}



undefined4 FUN_00000122(void)

{
  FUN_00000122();
  FUN_00000128();
  return 1;
}



undefined4 FUN_00000128(void)

{
  FUN_00000128();
  return 1;
}



int FUN_00000144(void)

{
  int iVar1;
  uint uVar2;
  short *unaff_r4;
  undefined *unaff_r5;
  undefined unaff_r7;
  
  iVar1 = FUN_00000144();
  if (iVar1 != 0) {
    if ((((uint)(ushort)unaff_r4[0x15] << 0x18 | (uint)(ushort)unaff_r4[0x15] << 8) >> 0x10 ==
         (uint)*(ushort *)(unaff_r5 + 4)) && (*unaff_r4 == 0x1a)) {
      uVar2 = 0x61;
      do {
        if ((uint)*(byte *)((int)unaff_r4 + (uVar2 - 0x33)) != uVar2) goto LAB_00000186;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 0x73);
      FUN_00000178(0,*(undefined4 *)(unaff_r5 + 8));
      *unaff_r5 = unaff_r7;
      iVar1 = 1;
    }
    else {
LAB_00000186:
      iVar1 = 0;
    }
  }
  return iVar1;
}



undefined4 FUN_00000178(void)

{
  undefined *unaff_r5;
  undefined unaff_r7;
  
  FUN_00000178();
  *unaff_r5 = unaff_r7;
  return 1;
}



void FUN_00000190(void)

{
  byte *pbVar1;
  ushort uVar2;
  
  pbVar1 = DAT_000001d4;
  if ((*DAT_000001d4 & 1) != 0) {
    if (*(short *)(DAT_000001d4 + 2) == 0) {
      if (DAT_000001d4[1] == 0) {
        FUN_000001ca(1,*(undefined4 *)(DAT_000001d4 + 8));
        *pbVar1 = 0;
        return;
      }
      DAT_000001d4[1] = DAT_000001d4[1] - 1;
      FUN_000001b6();
      uVar2 = (ushort)*(byte *)(DAT_000001dc + 8);
    }
    else {
      if ((*(byte *)(DAT_000001d8 + 0xc) & 1) == 0) {
        return;
      }
      uVar2 = *(short *)(DAT_000001d4 + 2) - 1;
    }
    *(ushort *)(pbVar1 + 2) = uVar2;
  }
  return;
}



void FUN_000001b6(void)

{
  int unaff_r4;
  
  FUN_000001b6();
  *(ushort *)(unaff_r4 + 2) = (ushort)*(byte *)(DAT_000001dc + 8);
  return;
}



void FUN_000001ca(void)

{
  undefined *unaff_r4;
  
  FUN_000001ca();
  *unaff_r4 = 0;
  return;
}



undefined4 FUN_000001ec(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r5;
  
  puVar2 = (undefined2 *)FUN_000001ec();
  *(undefined *)(puVar2 + 0x13) = 8;
  *(undefined *)((int)puVar2 + 0x27) = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = (ushort)(((uint)*(ushort *)(unaff_r5 + 4) << 0x18) >> 0x10) |
                 (ushort)(((uint)*(ushort *)(unaff_r5 + 4) << 8) >> 0x10);
  iVar3 = 0x61;
  puVar2[0x16] = (ushort)(((uint)*(ushort *)(unaff_r5 + 6) << 0x18) >> 0x10) |
                 (ushort)(((uint)*(ushort *)(unaff_r5 + 6) << 8) >> 0x10);
  do {
    *(undefined *)((int)puVar2 + iVar3 + -0x33) = (char)iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x73);
  uVar1 = FUN_0000022a(puVar2 + 0x13,0x1a);
  puVar2[0x14] = uVar1;
  *puVar2 = 0x1a;
  uVar4 = FUN_00000242(puVar2,DAT_00000258 + 0xc,1,0);
  FUN_0000024a(puVar2);
  return uVar4;
}



undefined4 FUN_0000022a(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *unaff_r4;
  
  uVar1 = FUN_0000022a();
  unaff_r4[0x14] = uVar1;
  *unaff_r4 = 0x1a;
  uVar2 = FUN_00000242();
  FUN_0000024a();
  return uVar2;
}



undefined4 FUN_00000242(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00000242();
  FUN_0000024a();
  return uVar1;
}



void FUN_0000024a(void)

{
  FUN_0000024a();
  return;
}


