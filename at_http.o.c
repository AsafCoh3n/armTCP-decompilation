#include "at_http.o.h"



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



char * FUN_00000080(int param_1,char *param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  char *pcVar7;
  char *pcStack24;
  
  iVar2 = DAT_00000190;
  if (*(byte *)(param_1 + 5) < 7) {
    if (param_2 != (char *)0x0) {
      do {
        iVar4 = FUN_0000009e(param_2,0x194);
        if (iVar4 == 1) {
          pcVar7 = param_2 + 0xe;
          iVar4 = FUN_000000ba(pcVar7,0x1b8);
          if (iVar4 == 1) {
            bVar3 = *(byte *)(param_1 + 5) | 1;
            goto LAB_00000158;
          }
          iVar4 = FUN_000000c6(pcVar7,0x1dc);
          pcStack24 = pcVar7;
          if (iVar4 == 1) {
            do {
              pcStack24 = (char *)FUN_0000010e(pcStack24,*(undefined4 *)(iVar2 + 4));
              if (pcStack24 == (char *)0x0) goto LAB_0000015a;
              iVar4 = FUN_00000102(pcStack24,0x1f0);
            } while (iVar4 != 1);
            uVar5 = FUN_0000011c(0x34);
            *(undefined4 *)(param_1 + 0x28) = uVar5;
            iVar4 = FUN_00000128(uVar5,pcStack24 + 9,0x34);
            *(undefined *)(*(int *)(param_1 + 0x28) + iVar4 + -2) = 0;
            *(undefined2 *)(param_1 + 6) = (short)(iVar4 + -2);
            *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
            uVar1 = *(ushort *)(param_1 + 2);
            uVar6 = 0x400;
          }
          else {
            uVar5 = FUN_000000d0(0x40);
            *(undefined4 *)(param_1 + 0x28) = uVar5;
            iVar4 = FUN_000000da(uVar5,pcVar7,0x40);
            *(undefined *)(*(int *)(param_1 + 0x28) + iVar4 + -2) = 0;
            *(undefined2 *)(param_1 + 6) = (short)(iVar4 + -2);
            *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
            uVar1 = *(ushort *)(param_1 + 2);
            uVar6 = 0x1000;
          }
          *(ushort *)(param_1 + 2) = uVar1 | uVar6;
        }
        else {
          iVar4 = FUN_000000aa(param_2,0x1a4);
          pcVar7 = param_2;
          if (iVar4 == 1) {
            pcVar7 = param_2 + 0x10;
            uVar5 = FUN_0000014c(pcVar7);
            *(undefined4 *)(param_1 + 0xc) = uVar5;
            bVar3 = *(byte *)(param_1 + 5) | 2;
LAB_00000158:
            *(byte *)(param_1 + 5) = bVar3;
          }
        }
LAB_0000015a:
        param_2 = (char *)FUN_0000015e(pcVar7,*(undefined4 *)(iVar2 + 4));
      } while (param_2 != (char *)0x0);
      if ((((*pcVar7 == '\r') && (pcVar7[1] == '\n')) &&
          (bVar3 = *(byte *)(param_1 + 5) | 4, *(byte *)(param_1 + 5) = bVar3, bVar3 == 7)) &&
         (pcVar7 + 2 < *(char **)(iVar2 + 4))) {
        return pcVar7 + 2;
      }
    }
    param_2 = (char *)0x0;
  }
  return param_2;
}



char * FUN_0000009e(char *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
  do {
    iVar3 = FUN_0000009e(param_1,param_2);
    if (iVar3 == 1) {
      unaff_r5 = unaff_r5 + 0xe;
      iVar3 = FUN_000000ba(unaff_r5,0x1b8);
      if (iVar3 == 1) {
        bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
        goto LAB_00000158;
      }
      iVar3 = FUN_000000c6(unaff_r5,0x1dc);
      pcStack00000000 = unaff_r5;
      if (iVar3 == 1) {
        do {
          pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4));
          if (pcStack00000000 == (char *)0x0) goto LAB_0000015a;
          iVar3 = FUN_00000102(pcStack00000000,0x1f0);
        } while (iVar3 != 1);
        uVar4 = FUN_0000011c(0x34);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_00000128(uVar4,pcStack00000000 + 9,0x34);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x400;
      }
      else {
        uVar4 = FUN_000000d0(0x40);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x1000;
      }
      *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
    }
    else {
      iVar3 = FUN_000000aa(unaff_r5,0x1a4);
      if (iVar3 == 1) {
        unaff_r5 = unaff_r5 + 0x10;
        uVar4 = FUN_0000014c(unaff_r5);
        *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
        bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
    }
LAB_0000015a:
    param_1 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
    if (param_1 == (char *)0x0) {
      if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
          (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
         (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
        pcVar5 = (char *)0x0;
      }
      return pcVar5;
    }
    param_2 = 0x194;
    unaff_r5 = param_1;
  } while( true );
}



char * FUN_000000aa(char *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
  do {
    iVar3 = FUN_000000aa(param_1,param_2);
    if (iVar3 == 1) {
      unaff_r5 = unaff_r5 + 0x10;
      uVar4 = FUN_0000014c(unaff_r5);
      *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
      bVar2 = *(byte *)(unaff_r4 + 5) | 2;
      goto LAB_00000158;
    }
LAB_0000015a:
    param_1 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
    if (param_1 == (char *)0x0) {
      if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
          (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
         (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
        pcVar5 = (char *)0x0;
      }
      return pcVar5;
    }
    iVar3 = FUN_0000009e(param_1,0x194);
    if (iVar3 == 1) {
      unaff_r5 = param_1 + 0xe;
      iVar3 = FUN_000000ba(unaff_r5,0x1b8);
      if (iVar3 == 1) {
        bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
      else {
        iVar3 = FUN_000000c6(unaff_r5,0x1dc);
        pcStack00000000 = unaff_r5;
        if (iVar3 == 1) {
          do {
            pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4));
            if (pcStack00000000 == (char *)0x0) goto LAB_0000015a;
            iVar3 = FUN_00000102(pcStack00000000,0x1f0);
          } while (iVar3 != 1);
          uVar4 = FUN_0000011c(0x34);
          *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
          iVar3 = FUN_00000128(uVar4,pcStack00000000 + 9,0x34);
          *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
          *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
          *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
          uVar1 = *(ushort *)(unaff_r4 + 2);
          uVar6 = 0x400;
        }
        else {
          uVar4 = FUN_000000d0(0x40);
          *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
          iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
          *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
          *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
          *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
          uVar1 = *(ushort *)(unaff_r4 + 2);
          uVar6 = 0x1000;
        }
        *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
      }
      goto LAB_0000015a;
    }
    param_2 = 0x1a4;
    unaff_r5 = param_1;
  } while( true );
}



char * FUN_000000ba(char *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
  do {
    iVar3 = FUN_000000ba(param_1,param_2);
    if (iVar3 == 1) {
      bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
      goto LAB_00000158;
    }
    iVar3 = FUN_000000c6(unaff_r5,0x1dc);
    pcStack00000000 = unaff_r5;
    if (iVar3 == 1) {
      do {
        pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4));
        if (pcStack00000000 == (char *)0x0) goto LAB_0000015a;
        iVar3 = FUN_00000102(pcStack00000000,0x1f0);
      } while (iVar3 != 1);
      uVar4 = FUN_0000011c(0x34);
      *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
      iVar3 = FUN_00000128(uVar4,pcStack00000000 + 9,0x34);
      *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
      *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
      uVar1 = *(ushort *)(unaff_r4 + 2);
      uVar6 = 0x400;
    }
    else {
      uVar4 = FUN_000000d0(0x40);
      *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
      iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
      *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
      *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
      uVar1 = *(ushort *)(unaff_r4 + 2);
      uVar6 = 0x1000;
    }
    *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
LAB_0000015a:
    while( true ) {
      param_1 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
      if (param_1 == (char *)0x0) {
        if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
            (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
           (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
          pcVar5 = (char *)0x0;
        }
        return pcVar5;
      }
      iVar3 = FUN_0000009e(param_1,0x194);
      if (iVar3 == 1) break;
      iVar3 = FUN_000000aa(param_1,0x1a4);
      unaff_r5 = param_1;
      if (iVar3 == 1) {
        unaff_r5 = param_1 + 0x10;
        uVar4 = FUN_0000014c(unaff_r5);
        *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
        bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
    }
    param_1 = param_1 + 0xe;
    param_2 = 0x1b8;
    unaff_r5 = param_1;
  } while( true );
}



char * FUN_000000c6(char *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *param_5;
  
  do {
    iVar3 = FUN_000000c6(param_1,param_2);
    param_5 = unaff_r5;
    if (iVar3 == 1) {
      do {
        param_5 = (char *)FUN_0000010e(param_5,*(undefined4 *)(unaff_r6 + 4));
        if (param_5 == (char *)0x0) goto LAB_0000015a;
        iVar3 = FUN_00000102(param_5,0x1f0);
      } while (iVar3 != 1);
      uVar4 = FUN_0000011c(0x34);
      *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
      iVar3 = FUN_00000128(uVar4,param_5 + 9,0x34);
      *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
      *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
      uVar1 = *(ushort *)(unaff_r4 + 2);
      uVar6 = 0x400;
    }
    else {
      uVar4 = FUN_000000d0(0x40);
      *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
      iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
      *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
      *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
      uVar1 = *(ushort *)(unaff_r4 + 2);
      uVar6 = 0x1000;
    }
    *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
LAB_0000015a:
    param_1 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
    if (param_1 == (char *)0x0) {
      if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
          (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
         (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
        pcVar5 = (char *)0x0;
      }
      return pcVar5;
    }
    iVar3 = FUN_0000009e(param_1,0x194);
    if (iVar3 != 1) break;
    param_1 = param_1 + 0xe;
    iVar3 = FUN_000000ba(param_1,0x1b8);
    if (iVar3 == 1) {
      bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
      goto LAB_00000158;
    }
    param_2 = 0x1dc;
    unaff_r5 = param_1;
  } while( true );
  iVar3 = FUN_000000aa(param_1,0x1a4);
  unaff_r5 = param_1;
  if (iVar3 == 1) {
    param_1 = param_1 + 0x10;
    uVar4 = FUN_0000014c(param_1);
    *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
    bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
    *(byte *)(unaff_r4 + 5) = bVar2;
    unaff_r5 = param_1;
  }
  goto LAB_0000015a;
}



char * FUN_000000d0(undefined4 param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
code_r0x000000d0:
  uVar3 = FUN_000000d0(param_1);
  *(undefined4 *)(unaff_r4 + 0x28) = uVar3;
  iVar4 = FUN_000000da(uVar3,unaff_r5,0x40);
  *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar4 + -2) = 0;
  *(undefined2 *)(unaff_r4 + 6) = (short)(iVar4 + -2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 2);
  uVar6 = 0x1000;
LAB_00000142:
  *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
  do {
    while( true ) {
      pcVar5 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
      if (pcVar5 == (char *)0x0) {
        if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
            (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
           (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
          pcVar5 = (char *)0x0;
        }
        return pcVar5;
      }
      iVar4 = FUN_0000009e(pcVar5,0x194);
      if (iVar4 == 1) break;
      iVar4 = FUN_000000aa(pcVar5,0x1a4);
      unaff_r5 = pcVar5;
      if (iVar4 == 1) {
        unaff_r5 = pcVar5 + 0x10;
        uVar3 = FUN_0000014c(unaff_r5);
        *(undefined4 *)(unaff_r4 + 0xc) = uVar3;
        bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
    }
    unaff_r5 = pcVar5 + 0xe;
    iVar4 = FUN_000000ba(unaff_r5,0x1b8);
    if (iVar4 == 1) {
      bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
      goto LAB_00000158;
    }
    iVar4 = FUN_000000c6(unaff_r5,0x1dc);
    pcStack00000000 = unaff_r5;
    if (iVar4 != 1) {
      param_1 = 0x40;
      goto code_r0x000000d0;
    }
    while (pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4)),
          pcStack00000000 != (char *)0x0) {
      iVar4 = FUN_00000102(pcStack00000000,0x1f0);
      if (iVar4 == 1) {
        uVar3 = FUN_0000011c(0x34);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar3;
        iVar4 = FUN_00000128(uVar3,pcStack00000000 + 9,0x34);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar4 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar4 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x400;
        goto LAB_00000142;
      }
    }
  } while( true );
}



char * FUN_000000da(undefined4 param_1,char *param_2,undefined4 param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
code_r0x000000da:
  iVar3 = FUN_000000da(param_1,param_2,param_3);
  *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
  *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 2);
  uVar6 = 0x1000;
  param_2 = unaff_r5;
LAB_00000142:
  *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
  do {
    while( true ) {
      pcVar5 = (char *)FUN_0000015e(param_2,*(undefined4 *)(unaff_r6 + 4));
      if (pcVar5 == (char *)0x0) {
        if ((((*param_2 != '\r') || (param_2[1] != '\n')) ||
            (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
           (param_2 = param_2 + 2, *(char **)(unaff_r6 + 4) <= param_2)) {
          param_2 = (char *)0x0;
        }
        return param_2;
      }
      iVar3 = FUN_0000009e(pcVar5,0x194);
      if (iVar3 == 1) break;
      iVar3 = FUN_000000aa(pcVar5,0x1a4);
      param_2 = pcVar5;
      if (iVar3 == 1) {
        param_2 = pcVar5 + 0x10;
        uVar4 = FUN_0000014c(param_2);
        *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
        bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
    }
    param_2 = pcVar5 + 0xe;
    iVar3 = FUN_000000ba(param_2,0x1b8);
    if (iVar3 == 1) {
      bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
      goto LAB_00000158;
    }
    iVar3 = FUN_000000c6(param_2,0x1dc);
    pcStack00000000 = param_2;
    if (iVar3 != 1) {
      param_1 = FUN_000000d0(0x40);
      param_3 = 0x40;
      *(undefined4 *)(unaff_r4 + 0x28) = param_1;
      unaff_r5 = param_2;
      goto code_r0x000000da;
    }
    while (pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4)),
          pcStack00000000 != (char *)0x0) {
      iVar3 = FUN_00000102(pcStack00000000,0x1f0);
      if (iVar3 == 1) {
        uVar4 = FUN_0000011c(0x34);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_00000128(uVar4,pcStack00000000 + 9,0x34);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x400;
        goto LAB_00000142;
      }
    }
  } while( true );
}



char * FUN_00000102(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   char *param_5)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  
  do {
    iVar3 = FUN_00000102(param_1,param_2);
    if (iVar3 == 1) {
      uVar4 = FUN_0000011c(0x34);
      *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
      iVar3 = FUN_00000128(uVar4,param_5 + 9,0x34);
      *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
      *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
      uVar1 = *(ushort *)(unaff_r4 + 2);
      uVar6 = 0x400;
      goto LAB_00000142;
    }
LAB_0000010a:
    param_1 = (char *)FUN_0000010e(param_5,*(undefined4 *)(unaff_r6 + 4));
    if (param_1 == (char *)0x0) {
      do {
        while( true ) {
          pcVar5 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
          if (pcVar5 == (char *)0x0) {
            if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
                (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7))
               || (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
              pcVar5 = (char *)0x0;
            }
            return pcVar5;
          }
          iVar3 = FUN_0000009e(pcVar5,0x194);
          if (iVar3 == 1) break;
          iVar3 = FUN_000000aa(pcVar5,0x1a4);
          unaff_r5 = pcVar5;
          if (iVar3 == 1) {
            unaff_r5 = pcVar5 + 0x10;
            uVar4 = FUN_0000014c(unaff_r5);
            *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
            bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
            *(byte *)(unaff_r4 + 5) = bVar2;
          }
        }
        unaff_r5 = pcVar5 + 0xe;
        iVar3 = FUN_000000ba(unaff_r5,0x1b8);
        if (iVar3 == 1) {
          bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
          goto LAB_00000158;
        }
        iVar3 = FUN_000000c6(unaff_r5,0x1dc);
        param_5 = unaff_r5;
        if (iVar3 == 1) goto LAB_0000010a;
        uVar4 = FUN_000000d0(0x40);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x1000;
LAB_00000142:
        *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
      } while( true );
    }
    param_2 = 0x1f0;
    param_5 = param_1;
  } while( true );
}



char * FUN_0000010e(char *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *param_5;
  
  param_5 = param_1;
  while( true ) {
    param_5 = (char *)FUN_0000010e(param_5,param_2);
    if (param_5 == (char *)0x0) goto LAB_0000015a;
    iVar3 = FUN_00000102(param_5,0x1f0);
    if (iVar3 == 1) break;
LAB_0000010a:
    param_2 = *(undefined4 *)(unaff_r6 + 4);
  }
  uVar4 = FUN_0000011c(0x34);
  *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
  iVar3 = FUN_00000128(uVar4,param_5 + 9,0x34);
  *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
  *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 2);
  uVar6 = 0x400;
  do {
    *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
LAB_0000015a:
    pcVar5 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
    if (pcVar5 == (char *)0x0) {
      if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
          (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
         (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
        pcVar5 = (char *)0x0;
      }
      return pcVar5;
    }
    iVar3 = FUN_0000009e(pcVar5,0x194);
    if (iVar3 != 1) break;
    unaff_r5 = pcVar5 + 0xe;
    iVar3 = FUN_000000ba(unaff_r5,0x1b8);
    if (iVar3 == 1) {
      bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
      goto LAB_00000158;
    }
    iVar3 = FUN_000000c6(unaff_r5,0x1dc);
    param_5 = unaff_r5;
    if (iVar3 == 1) goto LAB_0000010a;
    uVar4 = FUN_000000d0(0x40);
    *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
    iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
    *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
    *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
    *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
    uVar1 = *(ushort *)(unaff_r4 + 2);
    uVar6 = 0x1000;
  } while( true );
  iVar3 = FUN_000000aa(pcVar5,0x1a4);
  unaff_r5 = pcVar5;
  if (iVar3 == 1) {
    unaff_r5 = pcVar5 + 0x10;
    uVar4 = FUN_0000014c(unaff_r5);
    *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
    bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
    *(byte *)(unaff_r4 + 5) = bVar2;
  }
  goto LAB_0000015a;
}



char * FUN_0000011c(undefined4 param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *param_5;
  
code_r0x0000011c:
  uVar3 = FUN_0000011c(param_1);
  *(undefined4 *)(unaff_r4 + 0x28) = uVar3;
  iVar4 = FUN_00000128(uVar3,param_5 + 9,0x34);
  *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar4 + -2) = 0;
  *(undefined2 *)(unaff_r4 + 6) = (short)(iVar4 + -2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 2);
  uVar6 = 0x400;
LAB_00000142:
  *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
  do {
    while( true ) {
      pcVar5 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
      if (pcVar5 == (char *)0x0) {
        if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
            (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
           (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
          pcVar5 = (char *)0x0;
        }
        return pcVar5;
      }
      iVar4 = FUN_0000009e(pcVar5,0x194);
      if (iVar4 == 1) break;
      iVar4 = FUN_000000aa(pcVar5,0x1a4);
      unaff_r5 = pcVar5;
      if (iVar4 == 1) {
        unaff_r5 = pcVar5 + 0x10;
        uVar3 = FUN_0000014c(unaff_r5);
        *(undefined4 *)(unaff_r4 + 0xc) = uVar3;
        bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
    }
    unaff_r5 = pcVar5 + 0xe;
    iVar4 = FUN_000000ba(unaff_r5,0x1b8);
    if (iVar4 == 1) {
      bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
      goto LAB_00000158;
    }
    iVar4 = FUN_000000c6(unaff_r5,0x1dc);
    param_5 = unaff_r5;
    if (iVar4 != 1) break;
    while (param_5 = (char *)FUN_0000010e(param_5,*(undefined4 *)(unaff_r6 + 4)),
          param_5 != (char *)0x0) {
      iVar4 = FUN_00000102(param_5,0x1f0);
      if (iVar4 == 1) {
        param_1 = 0x34;
        goto code_r0x0000011c;
      }
    }
  } while( true );
  uVar3 = FUN_000000d0(0x40);
  *(undefined4 *)(unaff_r4 + 0x28) = uVar3;
  iVar4 = FUN_000000da(uVar3,unaff_r5,0x40);
  *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar4 + -2) = 0;
  *(undefined2 *)(unaff_r4 + 6) = (short)(iVar4 + -2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 2);
  uVar6 = 0x1000;
  goto LAB_00000142;
}



char * FUN_00000128(undefined4 param_1,char *param_2,undefined4 param_3)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
code_r0x00000128:
  iVar3 = FUN_00000128(param_1,param_2,param_3);
  *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
  *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 2);
  uVar6 = 0x400;
LAB_00000142:
  *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
  do {
    while( true ) {
      pcVar5 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
      if (pcVar5 == (char *)0x0) {
        if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
            (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
           (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
          pcVar5 = (char *)0x0;
        }
        return pcVar5;
      }
      iVar3 = FUN_0000009e(pcVar5,0x194);
      if (iVar3 == 1) break;
      iVar3 = FUN_000000aa(pcVar5,0x1a4);
      unaff_r5 = pcVar5;
      if (iVar3 == 1) {
        unaff_r5 = pcVar5 + 0x10;
        uVar4 = FUN_0000014c(unaff_r5);
        *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
        bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
    }
    unaff_r5 = pcVar5 + 0xe;
    iVar3 = FUN_000000ba(unaff_r5,0x1b8);
    if (iVar3 == 1) {
      bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
      goto LAB_00000158;
    }
    iVar3 = FUN_000000c6(unaff_r5,0x1dc);
    pcStack00000000 = unaff_r5;
    if (iVar3 != 1) break;
    while (pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4)),
          pcStack00000000 != (char *)0x0) {
      iVar3 = FUN_00000102(pcStack00000000,0x1f0);
      if (iVar3 == 1) {
        param_1 = FUN_0000011c(0x34);
        *(undefined4 *)(unaff_r4 + 0x28) = param_1;
        param_3 = 0x34;
        param_2 = pcStack00000000 + 9;
        goto code_r0x00000128;
      }
    }
  } while( true );
  uVar4 = FUN_000000d0(0x40);
  *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
  iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
  *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
  *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
  uVar1 = *(ushort *)(unaff_r4 + 2);
  uVar6 = 0x1000;
  goto LAB_00000142;
}



char * FUN_0000014c(char *param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
code_r0x0000014c:
  uVar4 = FUN_0000014c(param_1);
  *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
  bVar2 = *(byte *)(unaff_r4 + 5) | 2;
  do {
    *(byte *)(unaff_r4 + 5) = bVar2;
LAB_0000015a:
    param_1 = (char *)FUN_0000015e(unaff_r5,*(undefined4 *)(unaff_r6 + 4));
    if (param_1 == (char *)0x0) {
      if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
          (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
         (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
        pcVar5 = (char *)0x0;
      }
      return pcVar5;
    }
    iVar3 = FUN_0000009e(param_1,0x194);
    if (iVar3 != 1) {
      iVar3 = FUN_000000aa(param_1,0x1a4);
      unaff_r5 = param_1;
      if (iVar3 == 1) {
        param_1 = param_1 + 0x10;
        unaff_r5 = param_1;
        goto code_r0x0000014c;
      }
      goto LAB_0000015a;
    }
    unaff_r5 = param_1 + 0xe;
    iVar3 = FUN_000000ba(unaff_r5,0x1b8);
    if (iVar3 != 1) {
      iVar3 = FUN_000000c6(unaff_r5,0x1dc);
      pcStack00000000 = unaff_r5;
      if (iVar3 == 1) {
        do {
          pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4));
          if (pcStack00000000 == (char *)0x0) goto LAB_0000015a;
          iVar3 = FUN_00000102(pcStack00000000,0x1f0);
        } while (iVar3 != 1);
        uVar4 = FUN_0000011c(0x34);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_00000128(uVar4,pcStack00000000 + 9,0x34);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x400;
      }
      else {
        uVar4 = FUN_000000d0(0x40);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_000000da(uVar4,unaff_r5,0x40);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x1000;
      }
      *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
      goto LAB_0000015a;
    }
    bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
  } while( true );
}



char * FUN_0000015e(char *param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  ushort uVar6;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  char *pcStack00000000;
  
  do {
    param_1 = (char *)FUN_0000015e(param_1,param_2);
    if (param_1 == (char *)0x0) {
      if ((((*unaff_r5 != '\r') || (unaff_r5[1] != '\n')) ||
          (bVar2 = *(byte *)(unaff_r4 + 5) | 4, *(byte *)(unaff_r4 + 5) = bVar2, bVar2 != 7)) ||
         (pcVar5 = unaff_r5 + 2, *(char **)(unaff_r6 + 4) <= pcVar5)) {
        pcVar5 = (char *)0x0;
      }
      return pcVar5;
    }
    iVar3 = FUN_0000009e(param_1,0x194);
    if (iVar3 == 1) {
      param_1 = param_1 + 0xe;
      iVar3 = FUN_000000ba(param_1,0x1b8);
      if (iVar3 == 1) {
        bVar2 = *(byte *)(unaff_r4 + 5) | unaff_r7;
        goto LAB_00000158;
      }
      iVar3 = FUN_000000c6(param_1,0x1dc);
      pcStack00000000 = param_1;
      if (iVar3 == 1) {
        do {
          pcStack00000000 = (char *)FUN_0000010e(pcStack00000000,*(undefined4 *)(unaff_r6 + 4));
          if (pcStack00000000 == (char *)0x0) goto LAB_0000015a;
          iVar3 = FUN_00000102(pcStack00000000,0x1f0);
        } while (iVar3 != 1);
        uVar4 = FUN_0000011c(0x34);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_00000128(uVar4,pcStack00000000 + 9,0x34);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x400;
      }
      else {
        uVar4 = FUN_000000d0(0x40);
        *(undefined4 *)(unaff_r4 + 0x28) = uVar4;
        iVar3 = FUN_000000da(uVar4,param_1,0x40);
        *(undefined *)(*(int *)(unaff_r4 + 0x28) + iVar3 + -2) = 0;
        *(undefined2 *)(unaff_r4 + 6) = (short)(iVar3 + -2);
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r7;
        uVar1 = *(ushort *)(unaff_r4 + 2);
        uVar6 = 0x1000;
      }
      *(ushort *)(unaff_r4 + 2) = uVar1 | uVar6;
    }
    else {
      iVar3 = FUN_000000aa(param_1,0x1a4);
      if (iVar3 == 1) {
        param_1 = param_1 + 0x10;
        uVar4 = FUN_0000014c(param_1);
        *(undefined4 *)(unaff_r4 + 0xc) = uVar4;
        bVar2 = *(byte *)(unaff_r4 + 5) | 2;
LAB_00000158:
        *(byte *)(unaff_r4 + 5) = bVar2;
      }
    }
LAB_0000015a:
    param_2 = *(undefined4 *)(unaff_r6 + 4);
    unaff_r5 = param_1;
  } while( true );
}



uint FUN_0000027c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  do {
    iVar1 = FUN_0000027c();
    if (iVar1 == 1) {
      return (uint)*(byte *)(unaff_r4 * 6 + unaff_r6 + 5);
    }
    unaff_r4 = unaff_r4 + 1;
  } while (unaff_r4 < 0x17);
  iVar1 = FUN_0000028e(unaff_r5 + -4,0x2ac);
  if (iVar1 == 1) {
    uVar2 = 0x13;
  }
  else {
    uVar2 = 0xb;
  }
  return uVar2;
}



undefined4 FUN_0000028e(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0000028e();
  if (iVar1 == 1) {
    uVar2 = 0x13;
  }
  else {
    uVar2 = 0xb;
  }
  return uVar2;
}



void FUN_0000040a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_0000040a();
  iVar1 = iVar1 + unaff_r7;
  if (*(int *)(unaff_r6 + 0x20) != 0) {
    iVar2 = FUN_0000041a(unaff_r5 + iVar1,0x600);
    iVar3 = FUN_00000424(*(undefined4 *)(unaff_r6 + 0x20),unaff_r5 + iVar2 + iVar1);
    iVar1 = iVar3 + iVar2 + iVar1;
  }
  iVar2 = FUN_0000042e(unaff_r5 + iVar1,0x610);
                    // WARNING: Could not recover jumptable at 0x0000043c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar2 + iVar1 & 0xffff);
  return;
}



void FUN_0000041a(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_0000041a();
  iVar2 = FUN_00000424(*(undefined4 *)(unaff_r6 + 0x20),unaff_r5 + iVar1 + unaff_r7);
  iVar2 = iVar2 + iVar1 + unaff_r7;
  iVar1 = FUN_0000042e(unaff_r5 + iVar2,0x610);
                    // WARNING: Could not recover jumptable at 0x0000043c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar1 + iVar2 & 0xffff);
  return;
}



void FUN_00000424(void)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_00000424();
  iVar2 = FUN_0000042e(unaff_r5 + iVar1 + unaff_r4,0x610);
                    // WARNING: Could not recover jumptable at 0x0000043c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar2 + iVar1 + unaff_r4 & 0xffff);
  return;
}



void FUN_0000042e(void)

{
  int iVar1;
  int unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_0000042e();
                    // WARNING: Could not recover jumptable at 0x0000043c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(iVar1 + unaff_r7 & 0xffff);
  return;
}



uint FUN_000006a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar3 = 0x798;
  }
  else {
    if (param_2 == 1) {
      uVar3 = 0x7ac;
    }
    else {
      if (param_2 == 2) {
        uVar3 = 0x7c0;
      }
      else {
        if (param_2 == 3) {
          uVar3 = 2000;
        }
        else {
          uVar3 = 0x758;
        }
      }
    }
  }
  iVar1 = FUN_000006c2(param_1,0x770,uVar3);
  iVar2 = FUN_000006ca(param_1 + iVar1);
  iVar2 = iVar2 + iVar1;
  if (param_2 != 0) {
    iVar1 = FUN_000006d8(param_1 + iVar2,0x77c);
    iVar2 = iVar1 + iVar2;
    if (param_2 == 1) {
      iVar1 = FUN_000006fc(param_1 + iVar2,0x7e4,*(undefined4 *)(DAT_000007e0 + 0xc));
      iVar2 = iVar1 + iVar2;
    }
  }
  iVar1 = FUN_00000706(param_1 + iVar2,0x80c);
  uVar4 = iVar1 + iVar2;
  if (param_2 != 0) {
    iVar1 = FUN_00000714(param_1 + uVar4,DAT_00000824);
    uVar3 = DAT_00000830;
    if (((param_2 != 1) && (uVar3 = DAT_00000834, param_2 != 2)) &&
       (uVar3 = DAT_00000838, param_2 != 3)) {
      uVar3 = DAT_00000828;
    }
    iVar2 = FUN_0000072a(param_1 + iVar1 + uVar4,uVar3);
    iVar2 = iVar2 + iVar1 + uVar4;
    iVar1 = FUN_00000734(param_1 + iVar2,DAT_0000082c);
    uVar4 = iVar1 + iVar2;
  }
  return uVar4 & 0xffff;
}



uint FUN_000006c2(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_000006c2();
  iVar2 = FUN_000006ca(unaff_r5 + iVar1);
  iVar2 = iVar2 + iVar1;
  if (unaff_r6 != 0) {
    iVar1 = FUN_000006d8(unaff_r5 + iVar2,0x77c);
    iVar2 = iVar1 + iVar2;
    if (unaff_r6 == 1) {
      iVar1 = FUN_000006fc(unaff_r5 + iVar2,0x7e4,*(undefined4 *)(DAT_000007e0 + 0xc));
      iVar2 = iVar1 + iVar2;
    }
  }
  iVar1 = FUN_00000706(unaff_r5 + iVar2,0x80c);
  uVar4 = iVar1 + iVar2;
  if (unaff_r6 != 0) {
    iVar1 = FUN_00000714(unaff_r5 + uVar4,DAT_00000824);
    uVar3 = DAT_00000830;
    if (((unaff_r6 != 1) && (uVar3 = DAT_00000834, unaff_r6 != 2)) &&
       (uVar3 = DAT_00000838, unaff_r6 != 3)) {
      uVar3 = DAT_00000828;
    }
    iVar2 = FUN_0000072a(unaff_r5 + iVar1 + uVar4,uVar3);
    iVar2 = iVar2 + iVar1 + uVar4;
    iVar1 = FUN_00000734(unaff_r5 + iVar2,DAT_0000082c);
    uVar4 = iVar1 + iVar2;
  }
  return uVar4 & 0xffff;
}



uint FUN_000006ca(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint uVar4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_000006ca();
  iVar1 = iVar1 + unaff_r4;
  if (unaff_r6 != 0) {
    iVar2 = FUN_000006d8(unaff_r5 + iVar1,0x77c);
    iVar1 = iVar2 + iVar1;
    if (unaff_r6 == 1) {
      iVar2 = FUN_000006fc(unaff_r5 + iVar1,0x7e4,*(undefined4 *)(DAT_000007e0 + 0xc));
      iVar1 = iVar2 + iVar1;
    }
  }
  iVar2 = FUN_00000706(unaff_r5 + iVar1,0x80c);
  uVar4 = iVar2 + iVar1;
  if (unaff_r6 != 0) {
    iVar1 = FUN_00000714(unaff_r5 + uVar4,DAT_00000824);
    uVar3 = DAT_00000830;
    if (((unaff_r6 != 1) && (uVar3 = DAT_00000834, unaff_r6 != 2)) &&
       (uVar3 = DAT_00000838, unaff_r6 != 3)) {
      uVar3 = DAT_00000828;
    }
    iVar2 = FUN_0000072a(unaff_r5 + iVar1 + uVar4,uVar3);
    iVar2 = iVar2 + iVar1 + uVar4;
    iVar1 = FUN_00000734(unaff_r5 + iVar2,DAT_0000082c);
    uVar4 = iVar1 + iVar2;
  }
  return uVar4 & 0xffff;
}



uint FUN_000006d8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint uVar4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_000006d8();
  iVar1 = iVar1 + unaff_r4;
  if (unaff_r6 == 1) {
    iVar2 = FUN_000006fc(unaff_r5 + iVar1,0x7e4,*(undefined4 *)(DAT_000007e0 + 0xc));
    iVar1 = iVar2 + iVar1;
  }
  iVar2 = FUN_00000706(unaff_r5 + iVar1,0x80c);
  uVar4 = iVar2 + iVar1;
  if (unaff_r6 != 0) {
    iVar1 = FUN_00000714(unaff_r5 + uVar4,DAT_00000824);
    uVar3 = DAT_00000830;
    if (((unaff_r6 != 1) && (uVar3 = DAT_00000834, unaff_r6 != 2)) &&
       (uVar3 = DAT_00000838, unaff_r6 != 3)) {
      uVar3 = DAT_00000828;
    }
    iVar2 = FUN_0000072a(unaff_r5 + iVar1 + uVar4,uVar3);
    iVar2 = iVar2 + iVar1 + uVar4;
    iVar1 = FUN_00000734(unaff_r5 + iVar2,DAT_0000082c);
    uVar4 = iVar1 + iVar2;
  }
  return uVar4 & 0xffff;
}



uint FUN_000006fc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint uVar4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_000006fc();
  iVar2 = FUN_00000706(unaff_r5 + iVar1 + unaff_r4,0x80c);
  uVar4 = iVar2 + iVar1 + unaff_r4;
  if (unaff_r6 != 0) {
    iVar1 = FUN_00000714(unaff_r5 + uVar4,DAT_00000824);
    uVar3 = DAT_00000830;
    if (((unaff_r6 != 1) && (uVar3 = DAT_00000834, unaff_r6 != 2)) &&
       (uVar3 = DAT_00000838, unaff_r6 != 3)) {
      uVar3 = DAT_00000828;
    }
    iVar2 = FUN_0000072a(unaff_r5 + iVar1 + uVar4,uVar3);
    iVar2 = iVar2 + iVar1 + uVar4;
    iVar1 = FUN_00000734(unaff_r5 + iVar2,DAT_0000082c);
    uVar4 = iVar1 + iVar2;
  }
  return uVar4 & 0xffff;
}



uint FUN_00000706(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint uVar4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_00000706();
  uVar4 = iVar1 + unaff_r4;
  if (unaff_r6 != 0) {
    iVar1 = FUN_00000714(unaff_r5 + uVar4,DAT_00000824);
    uVar3 = DAT_00000830;
    if (((unaff_r6 != 1) && (uVar3 = DAT_00000834, unaff_r6 != 2)) &&
       (uVar3 = DAT_00000838, unaff_r6 != 3)) {
      uVar3 = DAT_00000828;
    }
    iVar2 = FUN_0000072a(unaff_r5 + iVar1 + uVar4,uVar3);
    iVar2 = iVar2 + iVar1 + uVar4;
    iVar1 = FUN_00000734(unaff_r5 + iVar2,DAT_0000082c);
    uVar4 = iVar1 + iVar2;
  }
  return uVar4 & 0xffff;
}



uint FUN_00000714(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_00000714();
  uVar3 = DAT_00000830;
  if (((unaff_r6 != 1) && (uVar3 = DAT_00000834, unaff_r6 != 2)) &&
     (uVar3 = DAT_00000838, unaff_r6 != 3)) {
    uVar3 = DAT_00000828;
  }
  iVar2 = FUN_0000072a(unaff_r5 + iVar1 + unaff_r4,uVar3);
  iVar2 = iVar2 + iVar1 + unaff_r4;
  iVar1 = FUN_00000734(unaff_r5 + iVar2,DAT_0000082c);
  return iVar1 + iVar2 & 0xffff;
}



uint FUN_0000072a(void)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_0000072a();
  iVar2 = FUN_00000734(unaff_r5 + iVar1 + unaff_r4,DAT_0000082c);
  return iVar2 + iVar1 + unaff_r4 & 0xffff;
}



uint FUN_00000734(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_00000734();
  return iVar1 + unaff_r4 & 0xffff;
}



void FUN_0000087c(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_0000087c();
  FUN_00000886();
  iVar1 = FUN_0000088c();
  if (iVar1 == 0) {
    FUN_000008a8(unaff_r4 + 4,0,6);
  }
  else {
    FUN_00000898(unaff_r4 + 4,iVar1,6);
  }
  return;
}



void FUN_00000886(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_00000886();
  iVar1 = FUN_0000088c();
  if (iVar1 == 0) {
    FUN_000008a8(unaff_r4 + 4,0,6);
  }
  else {
    FUN_00000898(unaff_r4 + 4,iVar1,6);
  }
  return;
}



void FUN_0000088c(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_0000088c();
  if (iVar1 == 0) {
    FUN_000008a8(unaff_r4 + 4,0,6);
  }
  else {
    FUN_00000898(unaff_r4 + 4,iVar1,6);
  }
  return;
}



void FUN_00000898(void)

{
  FUN_00000898();
  return;
}



void FUN_000008a8(void)

{
  FUN_000008a8();
  return;
}



undefined8 FUN_00000928(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *unaff_r4;
  byte *pbVar5;
  byte *unaff_r5;
  uint unaff_r6;
  byte unaff_r7;
  undefined4 in_stack_00000000;
  uint in_stack_00000008;
  
  do {
    iVar2 = FUN_00000928(param_1);
    *unaff_r5 = (byte)(iVar2 << 4);
    uVar3 = FUN_00000934((uint)unaff_r4[1]);
    uVar3 = uVar3 | *unaff_r5;
    pbVar4 = unaff_r4 + 1;
LAB_0000093c:
    *unaff_r5 = (byte)uVar3;
    pbVar5 = pbVar4 + 1;
    unaff_r5 = unaff_r5 + 1;
    unaff_r6 = unaff_r6 + 1;
    bVar1 = *pbVar5;
    uVar3 = (uint)bVar1;
    if (((bVar1 == 0x26) || (bVar1 < 0x21)) || (in_stack_00000008 <= unaff_r6)) {
      *unaff_r5 = unaff_r7;
      if (*pbVar5 == 0x26) {
        pbVar4 = pbVar4 + 2;
        goto LAB_0000095e;
      }
LAB_0000095c:
      pbVar4 = (byte *)0x0;
LAB_0000095e:
      return CONCAT44(pbVar4,in_stack_00000000);
    }
    if (*(byte **)(DAT_00000968 + 4) <= pbVar5) {
      *unaff_r5 = unaff_r7;
      goto LAB_0000095c;
    }
    if (bVar1 != 0x25) {
      pbVar4 = pbVar5;
      if (bVar1 == 0x2b) {
        uVar3 = 0x20;
      }
      goto LAB_0000093c;
    }
    param_1 = (uint)pbVar4[2];
    unaff_r4 = pbVar4 + 2;
  } while( true );
}



undefined8 FUN_00000934(uint param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *unaff_r4;
  byte *pbVar4;
  byte *unaff_r5;
  uint unaff_r6;
  byte unaff_r7;
  undefined4 param_5;
  uint param_7;
  
  do {
    uVar3 = FUN_00000934(param_1);
    uVar3 = uVar3 | *unaff_r5;
LAB_0000093c:
    *unaff_r5 = (byte)uVar3;
    pbVar4 = unaff_r4 + 1;
    unaff_r5 = unaff_r5 + 1;
    unaff_r6 = unaff_r6 + 1;
    bVar1 = *pbVar4;
    uVar3 = (uint)bVar1;
    if (((bVar1 == 0x26) || (bVar1 < 0x21)) || (param_7 <= unaff_r6)) {
      *unaff_r5 = unaff_r7;
      if (*pbVar4 == 0x26) {
        pbVar4 = unaff_r4 + 2;
        goto LAB_0000095e;
      }
LAB_0000095c:
      pbVar4 = (byte *)0x0;
LAB_0000095e:
      return CONCAT44(pbVar4,param_5);
    }
    if (*(byte **)(DAT_00000968 + 4) <= pbVar4) {
      *unaff_r5 = unaff_r7;
      goto LAB_0000095c;
    }
    if (bVar1 != 0x25) {
      unaff_r4 = pbVar4;
      if (bVar1 == 0x2b) {
        uVar3 = 0x20;
      }
      goto LAB_0000093c;
    }
    iVar2 = FUN_00000928((uint)unaff_r4[2]);
    *unaff_r5 = (byte)(iVar2 << 4);
    param_1 = (uint)unaff_r4[3];
    unaff_r4 = unaff_r4 + 3;
  } while( true );
}



void FUN_0000098c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *unaff_r4;
  undefined4 unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  while( true ) {
    iVar1 = FUN_0000098c(param_1,param_2,param_3,param_4);
    unaff_r4[1] = (char)iVar1;
    *unaff_r4 = 1;
    if ((iVar1 != 0) && (iVar1 = FUN_0000099c(iVar1,(uint)*(ushort *)(unaff_r6 + 6)), iVar1 == 1)) {
      *unaff_r4 = (char)unaff_r5;
    }
    unaff_r7 = unaff_r7 + 1;
    if ((int)(uint)*(byte *)(unaff_r6 + 4) < unaff_r7) break;
    *(undefined4 *)(unaff_r4 + 0x44) = unaff_r5;
    *(undefined4 *)(unaff_r4 + 0x48) = unaff_r5;
    *(short *)(unaff_r4 + 0x4c) = (short)unaff_r5;
    *(short *)(unaff_r4 + 0x36) = (short)unaff_r5;
    param_3 = 0;
    *(undefined4 *)(unaff_r4 + 0x58) = unaff_r5;
    param_4 = DAT_000009bc;
    param_2 = 0;
    param_1 = 5;
    *(undefined4 *)(unaff_r4 + 0x5c) = unaff_r5;
    unaff_r4 = unaff_r4 + 0x34;
  }
  return;
}



void FUN_0000099c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *unaff_r4;
  undefined *puVar3;
  undefined4 unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  do {
    iVar2 = FUN_0000099c(param_1,param_2);
    puVar3 = unaff_r4;
    if (iVar2 == 1) {
      *unaff_r4 = (char)unaff_r5;
    }
    do {
      unaff_r4 = puVar3 + 0x34;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(unaff_r6 + 4) < unaff_r7) {
        return;
      }
      *(undefined4 *)(puVar3 + 0x44) = unaff_r5;
      *(undefined4 *)(puVar3 + 0x48) = unaff_r5;
      *(short *)(puVar3 + 0x4c) = (short)unaff_r5;
      *(short *)(puVar3 + 0x36) = (short)unaff_r5;
      *(undefined4 *)(puVar3 + 0x58) = unaff_r5;
      uVar1 = DAT_000009bc;
      *(undefined4 *)(puVar3 + 0x5c) = unaff_r5;
      param_1 = FUN_0000098c(5,0,0,uVar1);
      puVar3[0x35] = (char)param_1;
      *unaff_r4 = 1;
      puVar3 = unaff_r4;
    } while (param_1 == 0);
    param_2 = (uint)*(ushort *)(unaff_r6 + 6);
  } while( true );
}



void FUN_000009d0(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  FUN_000009d0();
  if ((int)((uint)*(ushort *)(unaff_r4 + 2) << 0x17) < 0) {
    FUN_000009dc(*(undefined4 *)(unaff_r4 + 0x2c));
  }
  if ((int)((uint)*(ushort *)(unaff_r4 + 2) << 0x16) < 0) {
    FUN_000009ec(3,0);
  }
  if ((int)((uint)*(ushort *)(unaff_r4 + 2) << 0x13) < 0) {
    FUN_000009fc(4,0);
  }
  if (*(int *)(unaff_r4 + 0x24) != 0) {
    FUN_00000a06();
    *(undefined4 *)(unaff_r4 + 0x24) = unaff_r5;
  }
  if (*(int *)(unaff_r4 + 0x28) != 0) {
    FUN_00000a12();
    *(undefined4 *)(unaff_r4 + 0x28) = unaff_r5;
  }
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r5;
  *(undefined2 *)(unaff_r4 + 0x18) = (short)unaff_r5;
  *(undefined2 *)(unaff_r4 + 2) = (short)unaff_r5;
  return;
}



void FUN_000009dc(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  FUN_000009dc();
  if ((int)((uint)*(ushort *)(unaff_r4 + 2) << 0x16) < 0) {
    FUN_000009ec(3,0);
  }
  if ((int)((uint)*(ushort *)(unaff_r4 + 2) << 0x13) < 0) {
    FUN_000009fc(4,0);
  }
  if (*(int *)(unaff_r4 + 0x24) != 0) {
    FUN_00000a06();
    *(undefined4 *)(unaff_r4 + 0x24) = unaff_r5;
  }
  if (*(int *)(unaff_r4 + 0x28) != 0) {
    FUN_00000a12();
    *(undefined4 *)(unaff_r4 + 0x28) = unaff_r5;
  }
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r5;
  *(undefined2 *)(unaff_r4 + 0x18) = (short)unaff_r5;
  *(undefined2 *)(unaff_r4 + 2) = (short)unaff_r5;
  return;
}



void FUN_000009ec(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  FUN_000009ec();
  if ((int)((uint)*(ushort *)(unaff_r4 + 2) << 0x13) < 0) {
    FUN_000009fc(4,0);
  }
  if (*(int *)(unaff_r4 + 0x24) != 0) {
    FUN_00000a06();
    *(undefined4 *)(unaff_r4 + 0x24) = unaff_r5;
  }
  if (*(int *)(unaff_r4 + 0x28) != 0) {
    FUN_00000a12();
    *(undefined4 *)(unaff_r4 + 0x28) = unaff_r5;
  }
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r5;
  *(undefined2 *)(unaff_r4 + 0x18) = (short)unaff_r5;
  *(undefined2 *)(unaff_r4 + 2) = (short)unaff_r5;
  return;
}



void FUN_000009fc(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  FUN_000009fc();
  if (*(int *)(unaff_r4 + 0x24) != 0) {
    FUN_00000a06();
    *(undefined4 *)(unaff_r4 + 0x24) = unaff_r5;
  }
  if (*(int *)(unaff_r4 + 0x28) != 0) {
    FUN_00000a12();
    *(undefined4 *)(unaff_r4 + 0x28) = unaff_r5;
  }
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r5;
  *(undefined2 *)(unaff_r4 + 0x18) = (short)unaff_r5;
  *(undefined2 *)(unaff_r4 + 2) = (short)unaff_r5;
  return;
}



void FUN_00000a06(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  FUN_00000a06();
  *(undefined4 *)(unaff_r4 + 0x24) = unaff_r5;
  if (*(int *)(unaff_r4 + 0x28) != 0) {
    FUN_00000a12();
    *(undefined4 *)(unaff_r4 + 0x28) = unaff_r5;
  }
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r5;
  *(undefined2 *)(unaff_r4 + 0x18) = (short)unaff_r5;
  *(undefined2 *)(unaff_r4 + 2) = (short)unaff_r5;
  return;
}



void FUN_00000a12(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  FUN_00000a12();
  *(undefined4 *)(unaff_r4 + 0x28) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r5;
  *(undefined2 *)(unaff_r4 + 0x18) = (short)unaff_r5;
  *(undefined2 *)(unaff_r4 + 2) = (short)unaff_r5;
  return;
}



undefined4 FUN_00000a62(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int in_r12;
  undefined8 uVar2;
  
  do {
    uVar2 = FUN_00000a62(param_1,param_2);
    iVar1 = (int)((ulonglong)uVar2 >> 0x20);
    do {
      iVar1 = iVar1;
      iVar1 = iVar1 + 1;
      if ((int)(uint)*(byte *)((param_4 >> 0x18) + 0x26) <= iVar1) {
        return 0;
      }
    } while ((uint)*(byte *)(*(int *)((param_4 >> 0x18) + 0x22) + iVar1 * 0x34 + 1) != (uint)uVar2);
    param_1 = iVar1 + 2U & 0xff;
    param_2 = DAT_00000c24;
    param_4 = in_r12;
  } while (param_1 != 0);
  return 0;
}



void FUN_00000c62(undefined4 param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  
  do {
    iVar3 = FUN_00000c62(param_1);
    if (iVar3 == 0) {
      uVar2 = *(ushort *)(unaff_r4 + 2);
      uVar5 = 8;
LAB_00000d48:
      *(ushort *)(unaff_r4 + 2) = uVar2 | uVar5;
      return;
    }
    do {
      iVar3 = FUN_00000c6c(unaff_r7);
      if (iVar3 != 0) {
        uVar2 = *(ushort *)(unaff_r4 + 2);
        if (((uVar2 & 1) == 0) &&
           ((*(char *)(unaff_r4 + 4) == '\x01' || (*(char *)(unaff_r4 + 4) == '\f')))) {
          *(ushort *)(unaff_r4 + 2) = uVar2 | 0x101;
          *(int *)(unaff_r4 + 0x2c) = iVar3;
          return;
        }
        *(ushort *)(unaff_r4 + 2) = uVar2 | 0x80;
        *(int *)(unaff_r4 + 0x30) = iVar3;
        *(undefined4 *)(unaff_r4 + 0x10) = 0x80000000;
        if ((uVar2 & 1) != 0) {
          return;
        }
        iVar3 = FUN_00000c9e(unaff_r7);
        if ((iVar3 != 0) && (*(int *)(unaff_r4 + 0x20) == iVar3)) {
          *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x20;
        }
LAB_00000cb4:
        *(int *)(unaff_r4 + 0x20) = iVar3;
        return;
      }
      iVar3 = FUN_00000cca(unaff_r7);
      iVar4 = 0;
      while (iVar6 = *(int *)(unaff_r5 + iVar4 * 8), iVar6 != 0) {
        if (iVar6 == iVar3) {
          if (*(int *)(unaff_r5 + iVar4 * 8) != 0) {
            uVar2 = *(ushort *)(unaff_r4 + 2);
            if (((uVar2 & 1) == 0) &&
               ((*(char *)(unaff_r4 + 4) == '\x01' || (*(char *)(unaff_r4 + 4) == '\f')))) {
              *(ushort *)(unaff_r4 + 2) = uVar2 | 1;
              *(undefined4 *)(unaff_r4 + 0x2c) = *(undefined4 *)(iVar4 * 8 + unaff_r5 + 4);
              return;
            }
            iVar3 = iVar4 * 8 + unaff_r5;
            *(undefined4 *)(unaff_r4 + 0x30) = *(undefined4 *)(iVar3 + 4);
            *(int *)(unaff_r4 + 0x10) = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 4);
            piVar1 = DAT_00000d60;
            if ((uVar2 & 1) != 0) {
              return;
            }
            if (*(int *)(unaff_r4 + 0x20) == *DAT_00000d60) {
              *(ushort *)(unaff_r4 + 2) = uVar2 | 0x20;
            }
            iVar3 = *piVar1;
            goto LAB_00000cb4;
          }
          break;
        }
        iVar4 = iVar4 + 1;
      }
      if (unaff_r6 == 0) {
        uVar2 = *(ushort *)(unaff_r4 + 2);
        uVar5 = 4;
        goto LAB_00000d48;
      }
      unaff_r6 = 0;
      unaff_r7 = 0xd64;
      *(undefined *)(unaff_r4 + 4) = 1;
    } while ((*(char *)(unaff_r4 + 8) == '\0') || ((*(byte *)(unaff_r4 + 2) & 1) != 0));
    param_1 = 0xd64;
  } while( true );
}



void FUN_00000c6c(undefined4 param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  
  do {
    iVar3 = FUN_00000c6c(param_1);
    if (iVar3 != 0) {
      uVar2 = *(ushort *)(unaff_r4 + 2);
      if (((uVar2 & 1) == 0) &&
         ((*(char *)(unaff_r4 + 4) == '\x01' || (*(char *)(unaff_r4 + 4) == '\f')))) {
        *(ushort *)(unaff_r4 + 2) = uVar2 | 0x101;
        *(int *)(unaff_r4 + 0x2c) = iVar3;
      }
      else {
        *(ushort *)(unaff_r4 + 2) = uVar2 | 0x80;
        *(int *)(unaff_r4 + 0x30) = iVar3;
        *(undefined4 *)(unaff_r4 + 0x10) = 0x80000000;
        if ((uVar2 & 1) == 0) {
          iVar3 = FUN_00000c9e(unaff_r7);
          if ((iVar3 != 0) && (*(int *)(unaff_r4 + 0x20) == iVar3)) {
            *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x20;
          }
LAB_00000cb4:
          *(int *)(unaff_r4 + 0x20) = iVar3;
        }
      }
      return;
    }
    iVar3 = FUN_00000cca(unaff_r7);
    iVar4 = 0;
    while (iVar6 = *(int *)(unaff_r5 + iVar4 * 8), iVar6 != 0) {
      if (iVar6 == iVar3) {
        if (*(int *)(unaff_r5 + iVar4 * 8) != 0) {
          uVar2 = *(ushort *)(unaff_r4 + 2);
          if (((uVar2 & 1) == 0) &&
             ((*(char *)(unaff_r4 + 4) == '\x01' || (*(char *)(unaff_r4 + 4) == '\f')))) {
            *(ushort *)(unaff_r4 + 2) = uVar2 | 1;
            *(undefined4 *)(unaff_r4 + 0x2c) = *(undefined4 *)(iVar4 * 8 + unaff_r5 + 4);
            return;
          }
          iVar3 = iVar4 * 8 + unaff_r5;
          *(undefined4 *)(unaff_r4 + 0x30) = *(undefined4 *)(iVar3 + 4);
          *(int *)(unaff_r4 + 0x10) = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 4);
          piVar1 = DAT_00000d60;
          if ((uVar2 & 1) != 0) {
            return;
          }
          if (*(int *)(unaff_r4 + 0x20) == *DAT_00000d60) {
            *(ushort *)(unaff_r4 + 2) = uVar2 | 0x20;
          }
          iVar3 = *piVar1;
          goto LAB_00000cb4;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    }
    if (unaff_r6 == 0) {
      uVar2 = *(ushort *)(unaff_r4 + 2);
      uVar5 = 4;
LAB_00000d48:
      *(ushort *)(unaff_r4 + 2) = uVar2 | uVar5;
      return;
    }
    unaff_r6 = 0;
    unaff_r7 = 0xd64;
    *(undefined *)(unaff_r4 + 4) = 1;
    if (((*(char *)(unaff_r4 + 8) != '\0') && ((*(byte *)(unaff_r4 + 2) & 1) == 0)) &&
       (iVar3 = FUN_00000c62(0xd64), iVar3 == 0)) {
      uVar2 = *(ushort *)(unaff_r4 + 2);
      uVar5 = 8;
      goto LAB_00000d48;
    }
    param_1 = 0xd64;
  } while( true );
}



void FUN_00000c9e(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_00000c9e();
  if ((iVar1 != 0) && (*(int *)(unaff_r4 + 0x20) == iVar1)) {
    *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x20;
  }
  *(int *)(unaff_r4 + 0x20) = iVar1;
  return;
}



void FUN_00000cca(undefined4 param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  int iVar6;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  do {
    iVar3 = FUN_00000cca(param_1);
    iVar4 = 0;
    while (iVar6 = *(int *)(unaff_r5 + iVar4 * 8), iVar6 != 0) {
      if (iVar6 == iVar3) {
        if (*(int *)(unaff_r5 + iVar4 * 8) != 0) {
          uVar2 = *(ushort *)(unaff_r4 + 2);
          if (((uVar2 & 1) == 0) &&
             ((*(char *)(unaff_r4 + 4) == '\x01' || (*(char *)(unaff_r4 + 4) == '\f')))) {
            *(ushort *)(unaff_r4 + 2) = uVar2 | 1;
            *(undefined4 *)(unaff_r4 + 0x2c) = *(undefined4 *)(iVar4 * 8 + unaff_r5 + 4);
            return;
          }
          iVar3 = iVar4 * 8 + unaff_r5;
          *(undefined4 *)(unaff_r4 + 0x30) = *(undefined4 *)(iVar3 + 4);
          *(int *)(unaff_r4 + 0x10) = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 4);
          piVar1 = DAT_00000d60;
          if ((uVar2 & 1) != 0) {
            return;
          }
          if (*(int *)(unaff_r4 + 0x20) == *DAT_00000d60) {
            *(ushort *)(unaff_r4 + 2) = uVar2 | 0x20;
          }
          iVar3 = *piVar1;
          goto LAB_00000cb4;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    }
    if (unaff_r6 == 0) {
      uVar2 = *(ushort *)(unaff_r4 + 2);
      uVar5 = 4;
LAB_00000d48:
      *(ushort *)(unaff_r4 + 2) = uVar2 | uVar5;
      return;
    }
    unaff_r6 = 0;
    *(undefined *)(unaff_r4 + 4) = 1;
    if (((*(char *)(unaff_r4 + 8) != '\0') && ((*(byte *)(unaff_r4 + 2) & 1) == 0)) &&
       (iVar3 = FUN_00000c62(0xd64), iVar3 == 0)) {
      uVar2 = *(ushort *)(unaff_r4 + 2);
      uVar5 = 8;
      goto LAB_00000d48;
    }
    iVar3 = FUN_00000c6c(0xd64);
    if (iVar3 != 0) {
      uVar2 = *(ushort *)(unaff_r4 + 2);
      if (((uVar2 & 1) == 0) &&
         ((*(char *)(unaff_r4 + 4) == '\x01' || (*(char *)(unaff_r4 + 4) == '\f')))) {
        *(ushort *)(unaff_r4 + 2) = uVar2 | 0x101;
        *(int *)(unaff_r4 + 0x2c) = iVar3;
      }
      else {
        *(ushort *)(unaff_r4 + 2) = uVar2 | 0x80;
        *(int *)(unaff_r4 + 0x30) = iVar3;
        *(undefined4 *)(unaff_r4 + 0x10) = 0x80000000;
        if ((uVar2 & 1) == 0) {
          iVar3 = FUN_00000c9e(0xd64);
          if ((iVar3 != 0) && (*(int *)(unaff_r4 + 0x20) == iVar3)) {
            *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x20;
          }
LAB_00000cb4:
          *(int *)(unaff_r4 + 0x20) = iVar3;
        }
      }
      return;
    }
    param_1 = 0xd64;
  } while( true );
}



void FUN_00000d9c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    iVar1 = FUN_00000d9c(param_1,param_2);
    param_1 = unaff_r4;
    if (iVar1 == 1) {
      param_1 = unaff_r4 + 0x15;
      unaff_r5 = unaff_r5 & 0xfffffffe;
      FUN_00000dd0(param_1);
      iVar1 = FUN_00000dd8(param_1,0x3a);
      if (-1 < iVar1) {
        *(undefined *)(param_1 + iVar1) = unaff_r7;
        if (((**(char **)(DAT_00000e7c + 0x10) != '\0') &&
            (iVar2 = FUN_00000df2(param_1,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar2 == 0)) &&
           (iVar2 = FUN_00000e04(param_1 + iVar1 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)),
           iVar2 == 0)) goto LAB_00000e58;
        iVar1 = FUN_00000e14(param_1,param_1 + iVar1 + 1);
        if (iVar1 != 0) {
          unaff_r6[8] = (char)iVar1;
          goto LAB_00000e58;
        }
      }
      *unaff_r6 = 7;
      goto LAB_00000e58;
    }
    do {
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(param_1,0xe98), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar1 = 0;
        param_1 = param_1 + 0x11;
        do {
          unaff_r6[iVar1 + 0x1a] = *(undefined *)(param_1 + iVar1);
          if ((*(char *)(param_1 + iVar1) == ',') || (*(char *)(param_1 + iVar1) == '\r')) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        unaff_r6[iVar1 + 0x1a] = unaff_r7;
      }
      else {
        if (((int)(unaff_r5 << 0x1d) < 0) && (iVar1 = FUN_00000dbc(param_1,0xeac), iVar1 == 1)) {
          unaff_r5 = unaff_r5 & 0xfffffffb;
          param_1 = param_1 + 0x13;
          uVar3 = FUN_00000e52(param_1);
          *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
        }
      }
LAB_00000e58:
      param_1 = FUN_00000e5e(param_1,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((param_1 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    } while ((unaff_r5 & 1) == 0);
    param_2 = 0xe80;
    unaff_r4 = param_1;
  } while( true );
}



void FUN_00000dac(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    iVar1 = FUN_00000dac(param_1,param_2);
    param_1 = unaff_r4;
    if (iVar1 != 1) goto LAB_00000db4;
    unaff_r5 = unaff_r5 & 0xfffffffd;
    iVar1 = 0;
    param_1 = unaff_r4 + 0x11;
    do {
      unaff_r6[iVar1 + 0x1a] = *(undefined *)(param_1 + iVar1);
      if ((*(char *)(param_1 + iVar1) == ',') || (*(char *)(param_1 + iVar1) == '\r')) break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    unaff_r6[iVar1 + 0x1a] = unaff_r7;
LAB_00000e58:
    while( true ) {
      param_1 = FUN_00000e5e(param_1,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((param_1 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((unaff_r5 & 1) != 0) && (iVar1 = FUN_00000d9c(param_1,0xe80), iVar1 == 1)) {
        param_1 = param_1 + 0x15;
        unaff_r5 = unaff_r5 & 0xfffffffe;
        FUN_00000dd0(param_1);
        iVar1 = FUN_00000dd8(param_1,0x3a);
        if (-1 < iVar1) goto code_r0x00000de2;
        goto LAB_00000e20;
      }
      if ((int)(unaff_r5 << 0x1e) < 0) break;
LAB_00000db4:
      if (((int)(unaff_r5 << 0x1d) < 0) && (iVar1 = FUN_00000dbc(param_1,0xeac), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffb;
        param_1 = param_1 + 0x13;
        uVar3 = FUN_00000e52(param_1);
        *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
      }
    }
    param_2 = 0xe98;
    unaff_r4 = param_1;
  } while( true );
code_r0x00000de2:
  *(undefined *)(param_1 + iVar1) = unaff_r7;
  if (((**(char **)(DAT_00000e7c + 0x10) == '\0') ||
      (iVar2 = FUN_00000df2(param_1,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar2 != 0)) ||
     (iVar2 = FUN_00000e04(param_1 + iVar1 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)), iVar2 != 0)) {
    iVar1 = FUN_00000e14(param_1,param_1 + iVar1 + 1);
    if (iVar1 == 0) {
LAB_00000e20:
      *unaff_r6 = 7;
    }
    else {
      unaff_r6[8] = (char)iVar1;
    }
  }
  goto LAB_00000e58;
}



void FUN_00000dbc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    iVar1 = FUN_00000dbc(param_1,param_2);
    if (iVar1 == 1) {
      unaff_r5 = unaff_r5 & 0xfffffffb;
      unaff_r4 = unaff_r4 + 0x13;
      uVar3 = FUN_00000e52(unaff_r4);
      *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
    }
LAB_00000e58:
    do {
      param_1 = FUN_00000e5e(unaff_r4,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((param_1 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((unaff_r5 & 1) != 0) && (iVar1 = FUN_00000d9c(param_1,0xe80), iVar1 == 1)) {
        unaff_r4 = param_1 + 0x15;
        unaff_r5 = unaff_r5 & 0xfffffffe;
        FUN_00000dd0(unaff_r4);
        iVar1 = FUN_00000dd8(unaff_r4,0x3a);
        if (-1 < iVar1) {
          *(undefined *)(unaff_r4 + iVar1) = unaff_r7;
          if (((**(char **)(DAT_00000e7c + 0x10) != '\0') &&
              (iVar2 = FUN_00000df2(unaff_r4,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar2 == 0)) &&
             (iVar2 = FUN_00000e04(unaff_r4 + iVar1 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)),
             iVar2 == 0)) goto LAB_00000e58;
          iVar1 = FUN_00000e14(unaff_r4,unaff_r4 + iVar1 + 1);
          if (iVar1 != 0) {
            unaff_r6[8] = (char)iVar1;
            goto LAB_00000e58;
          }
        }
        *unaff_r6 = 7;
        goto LAB_00000e58;
      }
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(param_1,0xe98), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar1 = 0;
        unaff_r4 = param_1 + 0x11;
        do {
          unaff_r6[iVar1 + 0x1a] = *(undefined *)(unaff_r4 + iVar1);
          if ((*(char *)(unaff_r4 + iVar1) == ',') || (*(char *)(unaff_r4 + iVar1) == '\r')) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        unaff_r6[iVar1 + 0x1a] = unaff_r7;
        goto LAB_00000e58;
      }
      unaff_r4 = param_1;
    } while (-1 < (int)(unaff_r5 << 0x1d));
    param_2 = 0xeac;
  } while( true );
}



void FUN_00000dd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    FUN_00000dd0(param_1);
    iVar1 = FUN_00000dd8(unaff_r4,0x3a);
    if (iVar1 < 0) {
LAB_00000e20:
      *unaff_r6 = 7;
    }
    else {
      *(undefined *)(unaff_r4 + iVar1) = unaff_r7;
      if (((**(char **)(DAT_00000e7c + 0x10) == '\0') ||
          (iVar2 = FUN_00000df2(unaff_r4,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar2 != 0)) ||
         (iVar2 = FUN_00000e04(unaff_r4 + iVar1 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)),
         iVar2 != 0)) {
        iVar1 = FUN_00000e14(unaff_r4,unaff_r4 + iVar1 + 1);
        if (iVar1 == 0) goto LAB_00000e20;
        unaff_r6[8] = (char)iVar1;
      }
    }
    while( true ) {
      unaff_r4 = FUN_00000e5e(unaff_r4,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((unaff_r4 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((unaff_r5 & 1) != 0) && (iVar1 = FUN_00000d9c(unaff_r4,0xe80), iVar1 == 1)) break;
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(unaff_r4,0xe98), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar1 = 0;
        unaff_r4 = unaff_r4 + 0x11;
        do {
          unaff_r6[iVar1 + 0x1a] = *(undefined *)(unaff_r4 + iVar1);
          if ((*(char *)(unaff_r4 + iVar1) == ',') || (*(char *)(unaff_r4 + iVar1) == '\r')) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        unaff_r6[iVar1 + 0x1a] = unaff_r7;
      }
      else {
        if (((int)(unaff_r5 << 0x1d) < 0) && (iVar1 = FUN_00000dbc(unaff_r4,0xeac), iVar1 == 1)) {
          unaff_r5 = unaff_r5 & 0xfffffffb;
          unaff_r4 = unaff_r4 + 0x13;
          uVar3 = FUN_00000e52(unaff_r4);
          *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
        }
      }
    }
    param_1 = unaff_r4 + 0x15;
    unaff_r5 = unaff_r5 & 0xfffffffe;
    unaff_r4 = param_1;
  } while( true );
}



void FUN_00000dd8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    iVar1 = FUN_00000dd8(param_1,param_2);
    if (iVar1 < 0) {
LAB_00000e20:
      *unaff_r6 = 7;
    }
    else {
      *(undefined *)(unaff_r4 + iVar1) = unaff_r7;
      if (((**(char **)(DAT_00000e7c + 0x10) == '\0') ||
          (iVar2 = FUN_00000df2(unaff_r4,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar2 != 0)) ||
         (iVar2 = FUN_00000e04(unaff_r4 + iVar1 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)),
         iVar2 != 0)) {
        iVar1 = FUN_00000e14(unaff_r4,unaff_r4 + iVar1 + 1);
        if (iVar1 == 0) goto LAB_00000e20;
        unaff_r6[8] = (char)iVar1;
      }
    }
    while( true ) {
      unaff_r4 = FUN_00000e5e(unaff_r4,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((unaff_r4 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((unaff_r5 & 1) != 0) && (iVar1 = FUN_00000d9c(unaff_r4,0xe80), iVar1 == 1)) break;
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(unaff_r4,0xe98), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar1 = 0;
        unaff_r4 = unaff_r4 + 0x11;
        do {
          unaff_r6[iVar1 + 0x1a] = *(undefined *)(unaff_r4 + iVar1);
          if ((*(char *)(unaff_r4 + iVar1) == ',') || (*(char *)(unaff_r4 + iVar1) == '\r')) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        unaff_r6[iVar1 + 0x1a] = unaff_r7;
      }
      else {
        if (((int)(unaff_r5 << 0x1d) < 0) && (iVar1 = FUN_00000dbc(unaff_r4,0xeac), iVar1 == 1)) {
          unaff_r5 = unaff_r5 & 0xfffffffb;
          unaff_r4 = unaff_r4 + 0x13;
          uVar3 = FUN_00000e52(unaff_r4);
          *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
        }
      }
    }
    param_1 = unaff_r4 + 0x15;
    unaff_r5 = unaff_r5 & 0xfffffffe;
    FUN_00000dd0(param_1);
    param_2 = 0x3a;
    unaff_r4 = param_1;
  } while( true );
}



void FUN_00000df2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x00000df2:
  iVar1 = FUN_00000df2(param_1,param_2);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00000e04(unaff_r4 + param_5 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)), iVar1 == 0)
     ) goto LAB_00000e58;
LAB_00000e0c:
  iVar1 = FUN_00000e14(unaff_r4,unaff_r4 + param_5 + 1);
  if (iVar1 == 0) goto LAB_00000e20;
  unaff_r6[8] = (char)iVar1;
LAB_00000e58:
  do {
    while( true ) {
      unaff_r4 = FUN_00000e5e(unaff_r4,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((unaff_r4 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((unaff_r5 & 1) != 0) && (iVar1 = FUN_00000d9c(unaff_r4,0xe80), iVar1 == 1)) break;
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(unaff_r4,0xe98), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar1 = 0;
        unaff_r4 = unaff_r4 + 0x11;
        do {
          unaff_r6[iVar1 + 0x1a] = *(undefined *)(unaff_r4 + iVar1);
          if ((*(char *)(unaff_r4 + iVar1) == ',') || (*(char *)(unaff_r4 + iVar1) == '\r')) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        unaff_r6[iVar1 + 0x1a] = unaff_r7;
      }
      else {
        if (((int)(unaff_r5 << 0x1d) < 0) && (iVar1 = FUN_00000dbc(unaff_r4,0xeac), iVar1 == 1)) {
          unaff_r5 = unaff_r5 & 0xfffffffb;
          unaff_r4 = unaff_r4 + 0x13;
          uVar2 = FUN_00000e52(unaff_r4);
          *(undefined4 *)(unaff_r6 + 0x20) = uVar2;
        }
      }
    }
    param_1 = unaff_r4 + 0x15;
    unaff_r5 = unaff_r5 & 0xfffffffe;
    FUN_00000dd0(param_1);
    param_5 = FUN_00000dd8(param_1,0x3a);
    unaff_r4 = param_1;
    if (-1 < param_5) break;
LAB_00000e20:
    *unaff_r6 = 7;
  } while( true );
  *(undefined *)(param_1 + param_5) = unaff_r7;
  if (**(char **)(DAT_00000e7c + 0x10) != '\0') goto code_r0x00000dee;
  goto LAB_00000e0c;
code_r0x00000dee:
  param_2 = *(undefined4 *)(DAT_00000e7c + 0x10);
  goto code_r0x00000df2;
}



void FUN_00000e04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x00000e04:
  iVar1 = FUN_00000e04(param_1,param_2);
  if (iVar1 == 0) goto LAB_00000e58;
LAB_00000e0c:
  iVar1 = FUN_00000e14(unaff_r4,unaff_r4 + param_5 + 1);
  if (iVar1 == 0) goto LAB_00000e20;
  unaff_r6[8] = (char)iVar1;
LAB_00000e58:
  do {
    while( true ) {
      unaff_r4 = FUN_00000e5e(unaff_r4,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((unaff_r4 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((unaff_r5 & 1) != 0) && (iVar1 = FUN_00000d9c(unaff_r4,0xe80), iVar1 == 1)) break;
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(unaff_r4,0xe98), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar1 = 0;
        unaff_r4 = unaff_r4 + 0x11;
        do {
          unaff_r6[iVar1 + 0x1a] = *(undefined *)(unaff_r4 + iVar1);
          if ((*(char *)(unaff_r4 + iVar1) == ',') || (*(char *)(unaff_r4 + iVar1) == '\r')) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        unaff_r6[iVar1 + 0x1a] = unaff_r7;
      }
      else {
        if (((int)(unaff_r5 << 0x1d) < 0) && (iVar1 = FUN_00000dbc(unaff_r4,0xeac), iVar1 == 1)) {
          unaff_r5 = unaff_r5 & 0xfffffffb;
          unaff_r4 = unaff_r4 + 0x13;
          uVar2 = FUN_00000e52(unaff_r4);
          *(undefined4 *)(unaff_r6 + 0x20) = uVar2;
        }
      }
    }
    unaff_r4 = unaff_r4 + 0x15;
    unaff_r5 = unaff_r5 & 0xfffffffe;
    FUN_00000dd0(unaff_r4);
    param_5 = FUN_00000dd8(unaff_r4,0x3a);
    if (-1 < param_5) break;
LAB_00000e20:
    *unaff_r6 = 7;
  } while( true );
  *(undefined *)(unaff_r4 + param_5) = unaff_r7;
  if ((**(char **)(DAT_00000e7c + 0x10) == '\0') ||
     (iVar1 = FUN_00000df2(unaff_r4,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar1 != 0))
  goto LAB_00000e0c;
  param_2 = *(undefined4 *)(DAT_00000e7c + 0x14);
  param_1 = unaff_r4 + param_5 + 1;
  goto code_r0x00000e04;
}



void FUN_00000e14(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
code_r0x00000e14:
  iVar2 = FUN_00000e14(param_1,param_2);
  param_1 = unaff_r4;
  if (iVar2 == 0) goto LAB_00000e20;
  unaff_r6[8] = (char)iVar2;
LAB_00000e58:
  do {
    while( true ) {
      param_1 = FUN_00000e5e(param_1,*(undefined4 *)(DAT_00000ec0 + 4));
      if ((param_1 == 0) || (unaff_r5 == 0)) {
        if ((unaff_r5 & 1) != 0) {
          *unaff_r6 = 7;
        }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (((unaff_r5 & 1) != 0) && (iVar2 = FUN_00000d9c(param_1,0xe80), iVar2 == 1)) break;
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar2 = FUN_00000dac(param_1,0xe98), iVar2 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar2 = 0;
        param_1 = param_1 + 0x11;
        do {
          unaff_r6[iVar2 + 0x1a] = *(undefined *)(param_1 + iVar2);
          if ((*(char *)(param_1 + iVar2) == ',') || (*(char *)(param_1 + iVar2) == '\r')) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 5);
        unaff_r6[iVar2 + 0x1a] = unaff_r7;
      }
      else {
        if (((int)(unaff_r5 << 0x1d) < 0) && (iVar2 = FUN_00000dbc(param_1,0xeac), iVar2 == 1)) {
          unaff_r5 = unaff_r5 & 0xfffffffb;
          param_1 = param_1 + 0x13;
          uVar3 = FUN_00000e52(param_1);
          *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
        }
      }
    }
    param_1 = param_1 + 0x15;
    unaff_r5 = unaff_r5 & 0xfffffffe;
    FUN_00000dd0(param_1);
    iVar2 = FUN_00000dd8(param_1,0x3a);
    if (iVar2 < 0) {
LAB_00000e20:
      *unaff_r6 = 7;
      goto LAB_00000e58;
    }
    *(undefined *)(param_1 + iVar2) = unaff_r7;
    if (((**(char **)(DAT_00000e7c + 0x10) == '\0') ||
        (iVar1 = FUN_00000df2(param_1,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar1 != 0)) ||
       (iVar1 = FUN_00000e04(param_1 + iVar2 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)), iVar1 != 0))
    break;
  } while( true );
  param_2 = param_1 + iVar2 + 1;
  unaff_r4 = param_1;
  goto code_r0x00000e14;
}



void FUN_00000e52(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    uVar3 = FUN_00000e52(param_1);
    *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
LAB_00000e58:
    unaff_r4 = FUN_00000e5e(unaff_r4,*(undefined4 *)(DAT_00000ec0 + 4));
    if ((unaff_r4 == 0) || (unaff_r5 == 0)) {
      if ((unaff_r5 & 1) != 0) {
        *unaff_r6 = 7;
      }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (((unaff_r5 & 1) != 0) && (iVar1 = FUN_00000d9c(unaff_r4,0xe80), iVar1 == 1)) {
      unaff_r4 = unaff_r4 + 0x15;
      unaff_r5 = unaff_r5 & 0xfffffffe;
      FUN_00000dd0(unaff_r4);
      iVar1 = FUN_00000dd8(unaff_r4,0x3a);
      if (-1 < iVar1) {
        *(undefined *)(unaff_r4 + iVar1) = unaff_r7;
        if (((**(char **)(DAT_00000e7c + 0x10) != '\0') &&
            (iVar2 = FUN_00000df2(unaff_r4,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar2 == 0)) &&
           (iVar2 = FUN_00000e04(unaff_r4 + iVar1 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)),
           iVar2 == 0)) goto LAB_00000e58;
        iVar1 = FUN_00000e14(unaff_r4,unaff_r4 + iVar1 + 1);
        if (iVar1 != 0) {
          unaff_r6[8] = (char)iVar1;
          goto LAB_00000e58;
        }
      }
      *unaff_r6 = 7;
      goto LAB_00000e58;
    }
    if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(unaff_r4,0xe98), iVar1 == 1)) {
      unaff_r5 = unaff_r5 & 0xfffffffd;
      iVar1 = 0;
      unaff_r4 = unaff_r4 + 0x11;
      do {
        unaff_r6[iVar1 + 0x1a] = *(undefined *)(unaff_r4 + iVar1);
        if ((*(char *)(unaff_r4 + iVar1) == ',') || (*(char *)(unaff_r4 + iVar1) == '\r')) break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < 5);
      unaff_r6[iVar1 + 0x1a] = unaff_r7;
      goto LAB_00000e58;
    }
    if ((-1 < (int)(unaff_r5 << 0x1d)) || (iVar1 = FUN_00000dbc(unaff_r4,0xeac), iVar1 != 1))
    goto LAB_00000e58;
    unaff_r5 = unaff_r5 & 0xfffffffb;
    param_1 = unaff_r4 + 0x13;
    unaff_r4 = param_1;
  } while( true );
}



void FUN_00000e5e(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_r5;
  undefined *unaff_r6;
  undefined unaff_r7;
  code *UNRECOVERED_JUMPTABLE;
  
  do {
    param_1 = FUN_00000e5e(param_1,param_2);
    if ((param_1 == 0) || (unaff_r5 == 0)) {
      if ((unaff_r5 & 1) != 0) {
        *unaff_r6 = 7;
      }
                    // WARNING: Could not recover jumptable at 0x00000e78. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (((unaff_r5 & 1) == 0) || (iVar1 = FUN_00000d9c(param_1,0xe80), iVar1 != 1)) {
      if (((int)(unaff_r5 << 0x1e) < 0) && (iVar1 = FUN_00000dac(param_1,0xe98), iVar1 == 1)) {
        unaff_r5 = unaff_r5 & 0xfffffffd;
        iVar1 = 0;
        param_1 = param_1 + 0x11;
        do {
          unaff_r6[iVar1 + 0x1a] = *(undefined *)(param_1 + iVar1);
          if ((*(char *)(param_1 + iVar1) == ',') || (*(char *)(param_1 + iVar1) == '\r')) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 5);
        unaff_r6[iVar1 + 0x1a] = unaff_r7;
      }
      else {
        if (((int)(unaff_r5 << 0x1d) < 0) && (iVar1 = FUN_00000dbc(param_1,0xeac), iVar1 == 1)) {
          unaff_r5 = unaff_r5 & 0xfffffffb;
          param_1 = param_1 + 0x13;
          uVar3 = FUN_00000e52(param_1);
          *(undefined4 *)(unaff_r6 + 0x20) = uVar3;
        }
      }
    }
    else {
      param_1 = param_1 + 0x15;
      unaff_r5 = unaff_r5 & 0xfffffffe;
      FUN_00000dd0(param_1);
      iVar1 = FUN_00000dd8(param_1,0x3a);
      if (iVar1 < 0) {
LAB_00000e20:
        *unaff_r6 = 7;
      }
      else {
        *(undefined *)(param_1 + iVar1) = unaff_r7;
        if (((**(char **)(DAT_00000e7c + 0x10) == '\0') ||
            (iVar2 = FUN_00000df2(param_1,*(undefined4 *)(DAT_00000e7c + 0x10)), iVar2 != 0)) ||
           (iVar2 = FUN_00000e04(param_1 + iVar1 + 1,*(undefined4 *)(DAT_00000e7c + 0x14)),
           iVar2 != 0)) {
          iVar1 = FUN_00000e14(param_1,param_1 + iVar1 + 1);
          if (iVar1 == 0) goto LAB_00000e20;
          unaff_r6[8] = (char)iVar1;
        }
      }
    }
    param_2 = *(undefined4 *)(DAT_00000ec0 + 4);
  } while( true );
}



undefined4 FUN_00000ee8(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int unaff_r4;
  char *pcVar6;
  char *pcVar7;
  int unaff_r7;
  
  iVar2 = FUN_00000ee8();
  if (iVar2 == 0) {
    return 0;
  }
  pcVar7 = (char *)((uint)*(ushort *)(unaff_r4 + 6) + iVar2 + 4);
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
LAB_00000ef8:
  iVar2 = FUN_00000efc(pcVar7,s_Content_Disposition__00001030);
  pcVar6 = pcVar7;
  if (iVar2 == 1) {
    pcVar6 = pcVar7 + 0x15;
    pcVar7 = pcVar6;
    while (pcVar7 != (char *)0x0) {
      iVar2 = FUN_00000f0e(pcVar7,s_filename___00001048);
      if (iVar2 == 1) {
        pcVar7 = pcVar7 + 10;
        pcVar4 = pcVar7;
        goto LAB_00000f4c;
      }
      pcVar7 = (char *)FUN_00000f1a(pcVar7,*(undefined4 *)(unaff_r7 + 4));
    }
  }
  goto LAB_00000f24;
LAB_00000f4c:
  cVar1 = *pcVar4;
  if (cVar1 == '\"') goto code_r0x00000f52;
  if (((cVar1 == '\n') || (cVar1 == '\r')) || (cVar1 == '\0')) goto LAB_00000f24;
  pcVar4 = pcVar4 + 1;
  goto LAB_00000f4c;
code_r0x00000f52:
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    FUN_00000f64(1,pcVar7,(uint)(pcVar4 + -(int)pcVar7) & 0xffff);
    *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x200;
    *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x20;
  }
LAB_00000f24:
  pcVar7 = (char *)FUN_00000f28(pcVar6,*(undefined4 *)(unaff_r7 + 4));
  if (pcVar7 == (char *)0x0) {
    if (*pcVar6 != '\r') {
      return 0;
    }
    if (pcVar6[1] != '\n') {
      return 0;
    }
    pcVar6 = pcVar6 + 2;
    *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x10;
    if (*(char **)(unaff_r7 + 4) <= pcVar6) {
      return 0;
    }
    if (((uint)*(byte *)(unaff_r4 + 5) << 0x1a) >> 0x1e != 3) {
      return 0;
    }
    *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) - (uint)*(ushort *)(unaff_r7 + 2);
    if (-1 < (int)((uint)*(byte *)(unaff_r4 + 5) * 0x2000000)) {
      iVar2 = *(int *)(unaff_r7 + 4) - (int)pcVar6;
      if (((int)(uint)*(ushort *)(unaff_r4 + 6) < iVar2) &&
         (iVar2 = FUN_00000fc2(*(undefined4 *)(unaff_r4 + 0x28),pcVar6,
                               iVar2 - (uint)*(ushort *)(unaff_r4 + 6)), iVar2 != 0)) {
        iVar2 = iVar2 + -2;
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
      }
      else {
        uVar5 = *(uint *)(unaff_r4 + 0xc);
        iVar2 = *(int *)(unaff_r7 + 4);
        if ((uVar5 != 0) && (uVar5 < (uint)*(ushort *)(unaff_r4 + 6) + 8)) {
          iVar2 = (iVar2 - ((uint)*(ushort *)(unaff_r4 + 6) - uVar5)) + -8;
          *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
        }
      }
      uVar3 = FUN_00000fe2(2,pcVar6,iVar2 - (int)pcVar6 & 0xffff);
      return uVar3;
    }
    if (3 < *(uint *)(unaff_r4 + 0xc)) {
      return 0;
    }
    FUN_00000ff2(3,0);
    *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
    return 1;
  }
  goto LAB_00000ef8;
}



undefined4 FUN_00000efc(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int unaff_r4;
  char *unaff_r5;
  char *pcVar6;
  int unaff_r7;
  
code_r0x00000efc:
  iVar2 = FUN_00000efc(param_1,param_2);
  if (iVar2 == 1) {
    unaff_r5 = unaff_r5 + 0x15;
    pcVar6 = unaff_r5;
    while (pcVar6 != (char *)0x0) {
      iVar2 = FUN_00000f0e(pcVar6,s_filename___00001048);
      if (iVar2 == 1) {
        pcVar6 = pcVar6 + 10;
        pcVar4 = pcVar6;
        goto LAB_00000f4c;
      }
      pcVar6 = (char *)FUN_00000f1a(pcVar6,*(undefined4 *)(unaff_r7 + 4));
    }
  }
  goto LAB_00000f24;
LAB_00000f4c:
  cVar1 = *pcVar4;
  if (cVar1 == '\"') goto code_r0x00000f52;
  if (((cVar1 == '\n') || (cVar1 == '\r')) || (cVar1 == '\0')) goto LAB_00000f24;
  pcVar4 = pcVar4 + 1;
  goto LAB_00000f4c;
code_r0x00000f52:
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    FUN_00000f64(1,pcVar6,(uint)(pcVar4 + -(int)pcVar6) & 0xffff);
    *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x200;
    *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x20;
  }
LAB_00000f24:
  param_1 = (char *)FUN_00000f28(unaff_r5,*(undefined4 *)(unaff_r7 + 4));
  if (param_1 == (char *)0x0) {
    if ((*unaff_r5 == '\r') && (unaff_r5[1] == '\n')) {
      pcVar6 = unaff_r5 + 2;
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x10;
      if ((pcVar6 < *(char **)(unaff_r7 + 4)) &&
         (((uint)*(byte *)(unaff_r4 + 5) << 0x1a) >> 0x1e == 3)) {
        *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) - (uint)*(ushort *)(unaff_r7 + 2);
        if (-1 < (int)((uint)*(byte *)(unaff_r4 + 5) * 0x2000000)) {
          iVar2 = *(int *)(unaff_r7 + 4) - (int)pcVar6;
          if (((int)(uint)*(ushort *)(unaff_r4 + 6) < iVar2) &&
             (iVar2 = FUN_00000fc2(*(undefined4 *)(unaff_r4 + 0x28),pcVar6,
                                   iVar2 - (uint)*(ushort *)(unaff_r4 + 6)), iVar2 != 0)) {
            iVar2 = iVar2 + -2;
            *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
          }
          else {
            uVar5 = *(uint *)(unaff_r4 + 0xc);
            iVar2 = *(int *)(unaff_r7 + 4);
            if ((uVar5 != 0) && (uVar5 < (uint)*(ushort *)(unaff_r4 + 6) + 8)) {
              iVar2 = (iVar2 - ((uint)*(ushort *)(unaff_r4 + 6) - uVar5)) + -8;
              *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
            }
          }
          uVar3 = FUN_00000fe2(2,pcVar6,iVar2 - (int)pcVar6 & 0xffff);
          return uVar3;
        }
        if (*(uint *)(unaff_r4 + 0xc) < 4) {
          FUN_00000ff2(3,0);
          *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
          return 1;
        }
      }
    }
    return 0;
  }
  param_2 = s_Content_Disposition__00001030;
  unaff_r5 = param_1;
  goto code_r0x00000efc;
}



undefined4 FUN_00000f0e(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_r4;
  char *unaff_r5;
  char *pcVar5;
  char *unaff_r6;
  char *pcVar6;
  int unaff_r7;
  
  do {
    iVar2 = FUN_00000f0e(param_1,param_2);
    if (iVar2 == 1) {
      pcVar6 = unaff_r6 + 10;
      pcVar5 = pcVar6;
      while (cVar1 = *pcVar5, cVar1 != '\"') {
        if (cVar1 == '\n') goto LAB_00000f24;
        if (cVar1 == '\r') goto LAB_00000f24;
        if (cVar1 == '\0') goto LAB_00000f24;
        pcVar5 = pcVar5 + 1;
      }
      if (pcVar5 == (char *)0x0) goto LAB_00000f24;
      *pcVar5 = '\0';
      FUN_00000f64(1,pcVar6,(uint)(pcVar5 + -(int)pcVar6) & 0xffff);
      *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x200;
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x20;
      goto LAB_00000f24;
    }
    param_1 = (char *)FUN_00000f1a(unaff_r6,*(undefined4 *)(unaff_r7 + 4));
    while (param_1 == (char *)0x0) {
LAB_00000f24:
      do {
        pcVar5 = (char *)FUN_00000f28(unaff_r5,*(undefined4 *)(unaff_r7 + 4));
        if (pcVar5 == (char *)0x0) {
          if ((*unaff_r5 == '\r') && (unaff_r5[1] == '\n')) {
            pcVar5 = unaff_r5 + 2;
            *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x10;
            if ((pcVar5 < *(char **)(unaff_r7 + 4)) &&
               (((uint)*(byte *)(unaff_r4 + 5) << 0x1a) >> 0x1e == 3)) {
              *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) - (uint)*(ushort *)(unaff_r7 + 2);
              if (-1 < (int)((uint)*(byte *)(unaff_r4 + 5) * 0x2000000)) {
                iVar2 = *(int *)(unaff_r7 + 4) - (int)pcVar5;
                if (((int)(uint)*(ushort *)(unaff_r4 + 6) < iVar2) &&
                   (iVar2 = FUN_00000fc2(*(undefined4 *)(unaff_r4 + 0x28),pcVar5,
                                         iVar2 - (uint)*(ushort *)(unaff_r4 + 6)), iVar2 != 0)) {
                  iVar2 = iVar2 + -2;
                  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
                }
                else {
                  uVar4 = *(uint *)(unaff_r4 + 0xc);
                  iVar2 = *(int *)(unaff_r7 + 4);
                  if ((uVar4 != 0) && (uVar4 < (uint)*(ushort *)(unaff_r4 + 6) + 8)) {
                    iVar2 = (iVar2 - ((uint)*(ushort *)(unaff_r4 + 6) - uVar4)) + -8;
                    *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
                  }
                }
                uVar3 = FUN_00000fe2(2,pcVar5,iVar2 - (int)pcVar5 & 0xffff);
                return uVar3;
              }
              if (*(uint *)(unaff_r4 + 0xc) < 4) {
                FUN_00000ff2(3,0);
                *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
                return 1;
              }
            }
          }
          return 0;
        }
        iVar2 = FUN_00000efc(pcVar5,s_Content_Disposition__00001030);
        unaff_r5 = pcVar5;
      } while (iVar2 != 1);
      unaff_r5 = pcVar5 + 0x15;
      param_1 = unaff_r5;
    }
    param_2 = s_filename___00001048;
    unaff_r6 = param_1;
  } while( true );
}



undefined4 FUN_00000f1a(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_r4;
  char *unaff_r5;
  char *pcVar5;
  int unaff_r7;
  
code_r0x00000f1a:
  param_1 = (char *)FUN_00000f1a(param_1,param_2);
  do {
    if (param_1 != (char *)0x0) {
      iVar2 = FUN_00000f0e(param_1,s_filename___00001048);
      if (iVar2 != 1) break;
      param_1 = param_1 + 10;
      pcVar5 = param_1;
      while (cVar1 = *pcVar5, cVar1 != '\"') {
        if (((cVar1 == '\n') || (cVar1 == '\r')) || (cVar1 == '\0')) goto LAB_00000f24;
        pcVar5 = pcVar5 + 1;
      }
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
        FUN_00000f64(1,param_1,(uint)(pcVar5 + -(int)param_1) & 0xffff);
        *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x200;
        *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x20;
      }
    }
LAB_00000f24:
    do {
      pcVar5 = (char *)FUN_00000f28(unaff_r5,*(undefined4 *)(unaff_r7 + 4));
      if (pcVar5 == (char *)0x0) {
        if ((*unaff_r5 == '\r') && (unaff_r5[1] == '\n')) {
          pcVar5 = unaff_r5 + 2;
          *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x10;
          if ((pcVar5 < *(char **)(unaff_r7 + 4)) &&
             (((uint)*(byte *)(unaff_r4 + 5) << 0x1a) >> 0x1e == 3)) {
            *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) - (uint)*(ushort *)(unaff_r7 + 2);
            if (-1 < (int)((uint)*(byte *)(unaff_r4 + 5) * 0x2000000)) {
              iVar2 = *(int *)(unaff_r7 + 4) - (int)pcVar5;
              if (((int)(uint)*(ushort *)(unaff_r4 + 6) < iVar2) &&
                 (iVar2 = FUN_00000fc2(*(undefined4 *)(unaff_r4 + 0x28),pcVar5,
                                       iVar2 - (uint)*(ushort *)(unaff_r4 + 6)), iVar2 != 0)) {
                iVar2 = iVar2 + -2;
                *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
              }
              else {
                uVar4 = *(uint *)(unaff_r4 + 0xc);
                iVar2 = *(int *)(unaff_r7 + 4);
                if ((uVar4 != 0) && (uVar4 < (uint)*(ushort *)(unaff_r4 + 6) + 8)) {
                  iVar2 = (iVar2 - ((uint)*(ushort *)(unaff_r4 + 6) - uVar4)) + -8;
                  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
                }
              }
              uVar3 = FUN_00000fe2(2,pcVar5,iVar2 - (int)pcVar5 & 0xffff);
              return uVar3;
            }
            if (*(uint *)(unaff_r4 + 0xc) < 4) {
              FUN_00000ff2(3,0);
              *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
              return 1;
            }
          }
        }
        return 0;
      }
      iVar2 = FUN_00000efc(pcVar5,s_Content_Disposition__00001030);
      unaff_r5 = pcVar5;
    } while (iVar2 != 1);
    unaff_r5 = pcVar5 + 0x15;
    param_1 = unaff_r5;
  } while( true );
  param_2 = *(undefined4 *)(unaff_r7 + 4);
  goto code_r0x00000f1a;
}



undefined4 FUN_00000f28(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int unaff_r4;
  char *unaff_r5;
  char *pcVar6;
  int unaff_r7;
  
code_r0x00000f28:
  param_1 = (char *)FUN_00000f28(param_1,param_2);
  if (param_1 == (char *)0x0) {
    if ((*unaff_r5 == '\r') && (unaff_r5[1] == '\n')) {
      pcVar6 = unaff_r5 + 2;
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x10;
      if ((pcVar6 < *(char **)(unaff_r7 + 4)) &&
         (((uint)*(byte *)(unaff_r4 + 5) << 0x1a) >> 0x1e == 3)) {
        *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) - (uint)*(ushort *)(unaff_r7 + 2);
        if (-1 < (int)((uint)*(byte *)(unaff_r4 + 5) * 0x2000000)) {
          iVar2 = *(int *)(unaff_r7 + 4) - (int)pcVar6;
          if (((int)(uint)*(ushort *)(unaff_r4 + 6) < iVar2) &&
             (iVar2 = FUN_00000fc2(*(undefined4 *)(unaff_r4 + 0x28),pcVar6,
                                   iVar2 - (uint)*(ushort *)(unaff_r4 + 6)), iVar2 != 0)) {
            iVar2 = iVar2 + -2;
            *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
          }
          else {
            uVar5 = *(uint *)(unaff_r4 + 0xc);
            iVar2 = *(int *)(unaff_r7 + 4);
            if ((uVar5 != 0) && (uVar5 < (uint)*(ushort *)(unaff_r4 + 6) + 8)) {
              iVar2 = (iVar2 - ((uint)*(ushort *)(unaff_r4 + 6) - uVar5)) + -8;
              *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
            }
          }
          uVar3 = FUN_00000fe2(2,pcVar6,iVar2 - (int)pcVar6 & 0xffff);
          return uVar3;
        }
        if (*(uint *)(unaff_r4 + 0xc) < 4) {
          FUN_00000ff2(3,0);
          *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
          return 1;
        }
      }
    }
    return 0;
  }
  iVar2 = FUN_00000efc(param_1,s_Content_Disposition__00001030);
  if (iVar2 == 1) {
    param_1 = param_1 + 0x15;
    pcVar6 = param_1;
    while (pcVar6 != (char *)0x0) {
      iVar2 = FUN_00000f0e(pcVar6,s_filename___00001048);
      if (iVar2 == 1) {
        pcVar6 = pcVar6 + 10;
        pcVar4 = pcVar6;
        goto LAB_00000f4c;
      }
      pcVar6 = (char *)FUN_00000f1a(pcVar6,*(undefined4 *)(unaff_r7 + 4));
    }
  }
  goto LAB_00000f24;
LAB_00000f4c:
  cVar1 = *pcVar4;
  if (cVar1 == '\"') goto code_r0x00000f52;
  if (((cVar1 == '\n') || (cVar1 == '\r')) || (cVar1 == '\0')) goto LAB_00000f24;
  pcVar4 = pcVar4 + 1;
  goto LAB_00000f4c;
code_r0x00000f52:
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    FUN_00000f64(1,pcVar6,(uint)(pcVar4 + -(int)pcVar6) & 0xffff);
    *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x200;
    *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x20;
  }
LAB_00000f24:
  param_2 = *(undefined4 *)(unaff_r7 + 4);
  unaff_r5 = param_1;
  goto code_r0x00000f28;
}



undefined4 FUN_00000f64(undefined4 param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int unaff_r4;
  char *unaff_r5;
  int unaff_r7;
  
code_r0x00000f64:
  FUN_00000f64(param_1,param_2,param_3);
  *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) | 0x200;
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x20;
LAB_00000f24:
  do {
    do {
      pcVar4 = (char *)FUN_00000f28(unaff_r5,*(undefined4 *)(unaff_r7 + 4));
      if (pcVar4 == (char *)0x0) {
        if ((*unaff_r5 == '\r') && (unaff_r5[1] == '\n')) {
          pcVar4 = unaff_r5 + 2;
          *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x10;
          if ((pcVar4 < *(char **)(unaff_r7 + 4)) &&
             (((uint)*(byte *)(unaff_r4 + 5) << 0x1a) >> 0x1e == 3)) {
            *(int *)(unaff_r4 + 0xc) = *(int *)(unaff_r4 + 0xc) - (uint)*(ushort *)(unaff_r7 + 2);
            if (-1 < (int)((uint)*(byte *)(unaff_r4 + 5) * 0x2000000)) {
              iVar2 = *(int *)(unaff_r7 + 4) - (int)pcVar4;
              if (((int)(uint)*(ushort *)(unaff_r4 + 6) < iVar2) &&
                 (iVar2 = FUN_00000fc2(*(undefined4 *)(unaff_r4 + 0x28),pcVar4,
                                       iVar2 - (uint)*(ushort *)(unaff_r4 + 6)), iVar2 != 0)) {
                iVar2 = iVar2 + -2;
                *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
              }
              else {
                uVar5 = *(uint *)(unaff_r4 + 0xc);
                iVar2 = *(int *)(unaff_r7 + 4);
                if ((uVar5 != 0) && (uVar5 < (uint)*(ushort *)(unaff_r4 + 6) + 8)) {
                  iVar2 = (iVar2 - ((uint)*(ushort *)(unaff_r4 + 6) - uVar5)) + -8;
                  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 0x40;
                }
              }
              uVar3 = FUN_00000fe2(2,pcVar4,iVar2 - (int)pcVar4 & 0xffff);
              return uVar3;
            }
            if (*(uint *)(unaff_r4 + 0xc) < 4) {
              FUN_00000ff2(3,0);
              *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
              return 1;
            }
          }
        }
        return 0;
      }
      iVar2 = FUN_00000efc(pcVar4,s_Content_Disposition__00001030);
      unaff_r5 = pcVar4;
    } while (iVar2 != 1);
    unaff_r5 = pcVar4 + 0x15;
    param_2 = unaff_r5;
    while (param_2 != (char *)0x0) {
      iVar2 = FUN_00000f0e(param_2,s_filename___00001048);
      if (iVar2 == 1) {
        param_2 = param_2 + 10;
        pcVar4 = param_2;
        goto LAB_00000f4c;
      }
      param_2 = (char *)FUN_00000f1a(param_2,*(undefined4 *)(unaff_r7 + 4));
    }
  } while( true );
LAB_00000f4c:
  cVar1 = *pcVar4;
  if (cVar1 == '\"') goto code_r0x00000f52;
  if (((cVar1 == '\n') || (cVar1 == '\r')) || (cVar1 == '\0')) goto LAB_00000f24;
  pcVar4 = pcVar4 + 1;
  goto LAB_00000f4c;
code_r0x00000f52:
  if (pcVar4 != (char *)0x0) goto code_r0x00000f56;
  goto LAB_00000f24;
code_r0x00000f56:
  *pcVar4 = '\0';
  param_3 = (uint)(pcVar4 + -(int)param_2) & 0xffff;
  param_1 = 1;
  goto code_r0x00000f64;
}



void FUN_00000fc2(void)

{
  int iVar1;
  int unaff_r4;
  byte unaff_r6;
  
  iVar1 = FUN_00000fc2();
  if (iVar1 == 0) {
    if ((*(uint *)(unaff_r4 + 0xc) != 0) &&
       (*(uint *)(unaff_r4 + 0xc) < (uint)*(ushort *)(unaff_r4 + 6) + 8)) {
      *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r6;
    }
  }
  else {
    *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | unaff_r6;
  }
  FUN_00000fe2(2);
  return;
}



uint FUN_00000fe2(void)

{
  int unaff_r4;
  bool bVar1;
  
  FUN_00000fe2();
  bVar1 = *(uint *)(unaff_r4 + 0xc) < 4;
  if (bVar1) {
    FUN_00000ff2(3,0);
    *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
  }
  return (uint)bVar1;
}



undefined4 FUN_00000ff2(void)

{
  int unaff_r4;
  
  FUN_00000ff2();
  *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xfdff;
  return 1;
}



undefined4 FUN_00001094(void)

{
  FUN_00001094();
  return 0;
}



undefined4 FUN_0000109e(void)

{
  int unaff_r4;
  undefined4 unaff_r6;
  
  FUN_0000109e();
  *(ushort *)(unaff_r4 + 2) = *(ushort *)(unaff_r4 + 2) & 0xefff;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r6;
  return 1;
}



undefined4 FUN_000010bc(void)

{
  FUN_000010bc();
  return 1;
}



undefined4 FUN_000010de(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  
  uVar1 = FUN_000010de();
  *(undefined4 *)(unaff_r4 + 0x28) = uVar1;
  FUN_000010e8();
  *(uint *)(unaff_r4 + 0x14) = (uint)*(ushort *)(unaff_r5 + 2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 8;
  return 0;
}



undefined4 FUN_000010e8(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_000010e8();
  *(uint *)(unaff_r4 + 0x14) = (uint)*(ushort *)(unaff_r5 + 2);
  *(byte *)(unaff_r4 + 5) = *(byte *)(unaff_r4 + 5) | 8;
  return 0;
}



uint FUN_00001114(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  bool bVar2;
  
  FUN_00001114();
  uVar1 = *(int *)(unaff_r4 + 0x14) + (uint)*(ushort *)(unaff_r5 + 2);
  *(uint *)(unaff_r4 + 0x14) = uVar1;
  bVar2 = *(uint *)(unaff_r4 + 0xc) <= uVar1;
  if (bVar2) {
    *(int *)(unaff_r5 + 4) = *(int *)(unaff_r4 + 0x28) + (uint)*(ushort *)(unaff_r4 + 6);
    FUN_00001138(0);
    *(undefined4 *)(unaff_r5 + 4) = unaff_r6;
    FUN_00001140(*(undefined4 *)(unaff_r4 + 0x28));
    *(undefined4 *)(unaff_r4 + 0x28) = unaff_r6;
    *(undefined4 *)(unaff_r4 + 0x14) = unaff_r6;
  }
  return (uint)bVar2;
}



undefined4 FUN_00001138(void)

{
  int unaff_r4;
  int unaff_r5;
  undefined4 unaff_r6;
  
  FUN_00001138();
  *(undefined4 *)(unaff_r5 + 4) = unaff_r6;
  FUN_00001140(*(undefined4 *)(unaff_r4 + 0x28));
  *(undefined4 *)(unaff_r4 + 0x28) = unaff_r6;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r6;
  return 1;
}



undefined4 FUN_00001140(void)

{
  int unaff_r4;
  undefined4 unaff_r6;
  
  FUN_00001140();
  *(undefined4 *)(unaff_r4 + 0x28) = unaff_r6;
  *(undefined4 *)(unaff_r4 + 0x14) = unaff_r6;
  return 1;
}



void FUN_00001182(uint param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *unaff_r4;
  uint unaff_r5;
  int *unaff_r6;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr13;
  
  while( true ) {
    FUN_00001182(param_1,param_2,param_3,param_4);
    uVar4 = coprocessor_movefromRt(0,4,7,in_cr1,in_cr13);
    coprocessor_load(0,in_cr0,(param_3 >> 4) + -0x40);
    uVar3 = FUN_00001196((uint)unaff_r4[1],uVar4);
    if (uVar3 < 2) {
      FUN_000011a2((uint)unaff_r4[1],(uint)*(ushort *)((int)unaff_r6 + 6));
    }
    unaff_r6 = DAT_0000148c;
    pbVar2 = DAT_00001484;
    unaff_r5 = unaff_r5 + 1;
    if (*(byte *)(DAT_0000148c + 1) <= unaff_r5) break;
    bVar1 = *DAT_00001484;
    *DAT_00001484 = bVar1 + 1;
    if (*(byte *)(unaff_r6 + 1) < (byte)(bVar1 + 1)) {
      *pbVar2 = 1;
    }
    param_3 = 0x34;
    param_2 = *unaff_r6;
    unaff_r4 = (byte *)(param_2 + (uint)*DAT_00001484 * 0x34 + -0x34);
    param_1 = (uint)*unaff_r4;
    param_4 = param_1;
  }
  return;
}



void FUN_00001196(uint param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *unaff_r4;
  uint unaff_r5;
  int *unaff_r6;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr13;
  
  while( true ) {
    uVar3 = FUN_00001196(param_1,param_2);
    if (uVar3 < 2) {
      FUN_000011a2((uint)unaff_r4[1],(uint)*(ushort *)((int)unaff_r6 + 6));
    }
    unaff_r6 = DAT_0000148c;
    pbVar2 = DAT_00001484;
    unaff_r5 = unaff_r5 + 1;
    if (*(byte *)(DAT_0000148c + 1) <= unaff_r5) break;
    bVar1 = *DAT_00001484;
    *DAT_00001484 = bVar1 + 1;
    if (*(byte *)(unaff_r6 + 1) < (byte)(bVar1 + 1)) {
      *pbVar2 = 1;
    }
    iVar4 = 0x34;
    unaff_r4 = (byte *)(*unaff_r6 + (uint)*DAT_00001484 * 0x34 + -0x34);
    FUN_00001182((uint)*unaff_r4,*unaff_r6,0x34,(uint)*unaff_r4);
    param_2 = coprocessor_movefromRt(0,4,7,in_cr1,in_cr13);
    coprocessor_load(0,in_cr0,(iVar4 >> 4) + -0x40);
    param_1 = (uint)unaff_r4[1];
  }
  return;
}



void FUN_000011a2(uint param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  uint unaff_r5;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr13;
  
  do {
    FUN_000011a2(param_1,param_2);
    do {
      piVar2 = DAT_0000148c;
      pbVar6 = DAT_00001484;
      unaff_r5 = unaff_r5 + 1;
      if (*(byte *)(DAT_0000148c + 1) <= unaff_r5) {
        return;
      }
      bVar1 = *DAT_00001484;
      *DAT_00001484 = bVar1 + 1;
      if (*(byte *)(piVar2 + 1) < (byte)(bVar1 + 1)) {
        *pbVar6 = 1;
      }
      iVar5 = 0x34;
      pbVar6 = (byte *)(*piVar2 + (uint)*DAT_00001484 * 0x34 + -0x34);
      FUN_00001182((uint)*pbVar6,*piVar2,0x34,(uint)*pbVar6);
      uVar4 = coprocessor_movefromRt(0,4,7,in_cr1,in_cr13);
      coprocessor_load(0,in_cr0,(iVar5 >> 4) + -0x40);
      uVar3 = FUN_00001196((uint)pbVar6[1],uVar4);
    } while (1 < uVar3);
    param_2 = (uint)*(ushort *)((int)piVar2 + 6);
    param_1 = (uint)pbVar6[1];
  } while( true );
}



int FUN_000014b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = FUN_000014ba(param_1 + 0xc);
  uVar7 = iVar1 + DAT_00001550;
  if (uVar7 < 0x88) {
    uVar6 = 0;
    do {
      iVar1 = FUN_000014e2(param_1 + 8,uVar6 * 4 + DAT_00001554);
      if (iVar1 == 1) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xc);
    if (uVar6 != 0xc) {
      iVar1 = (uint)*(ushort *)(DAT_00001554 + 0x4c + uVar6 * 2) + uVar7 * 0x16d + (uVar7 + 1 >> 2);
      if ((1 < uVar6) && ((uVar7 & 3) == 2)) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = FUN_00001510(param_1 + 5);
      if (iVar2 - 1U < 0x1f) {
        iVar3 = FUN_00001528(param_1 + 0x11);
        iVar4 = FUN_00001536(param_1 + 0x14);
        iVar5 = FUN_00001544(param_1 + 0x17);
        return (((iVar1 + (iVar2 - 1U)) * 0x18 + iVar3) * 0x3c + iVar4) * 0x3c + iVar5;
      }
    }
  }
  return 0;
}



int FUN_000014ba(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  uint uVar6;
  uint uVar7;
  
  iVar1 = FUN_000014ba();
  uVar7 = iVar1 + DAT_00001550;
  if (uVar7 < 0x88) {
    uVar6 = 0;
    do {
      iVar1 = FUN_000014e2(unaff_r4 + 8,uVar6 * 4 + DAT_00001554);
      if (iVar1 == 1) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0xc);
    if (uVar6 != 0xc) {
      iVar1 = (uint)*(ushort *)(DAT_00001554 + 0x4c + uVar6 * 2) + uVar7 * 0x16d + (uVar7 + 1 >> 2);
      if ((1 < uVar6) && ((uVar7 & 3) == 2)) {
        iVar1 = iVar1 + 1;
      }
      iVar2 = FUN_00001510(unaff_r4 + 5);
      if (iVar2 - 1U < 0x1f) {
        iVar3 = FUN_00001528(unaff_r4 + 0x11);
        iVar4 = FUN_00001536(unaff_r4 + 0x14);
        iVar5 = FUN_00001544(unaff_r4 + 0x17);
        return (((iVar1 + (iVar2 - 1U)) * 0x18 + iVar3) * 0x3c + iVar4) * 0x3c + iVar5;
      }
    }
  }
  return 0;
}



int FUN_000014e2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  
  while ((iVar1 = FUN_000014e2(param_1,param_2), iVar1 != 1 &&
         (unaff_r5 = unaff_r5 + 1, unaff_r5 < 0xc))) {
    param_2 = unaff_r5 * 4 + DAT_00001554;
    param_1 = param_5;
  }
  if (unaff_r5 != 0xc) {
    iVar1 = (uint)*(ushort *)(DAT_00001554 + 0x4c + unaff_r5 * 2) + unaff_r7;
    if ((1 < unaff_r5) && ((unaff_r6 & 3) == 2)) {
      iVar1 = iVar1 + 1;
    }
    iVar2 = FUN_00001510(unaff_r4 + 5);
    if (iVar2 - 1U < 0x1f) {
      iVar3 = FUN_00001528(unaff_r4 + 0x11);
      iVar4 = FUN_00001536(unaff_r4 + 0x14);
      iVar5 = FUN_00001544(unaff_r4 + 0x17);
      return (((iVar1 + (iVar2 - 1U)) * 0x18 + iVar3) * 0x3c + iVar4) * 0x3c + iVar5;
    }
  }
  return 0;
}



int FUN_00001510(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r7;
  
  iVar1 = FUN_00001510();
  if (iVar1 - 1U < 0x1f) {
    iVar3 = FUN_00001528(unaff_r4 + 0x11);
    iVar4 = FUN_00001536(unaff_r4 + 0x14);
    iVar2 = FUN_00001544(unaff_r4 + 0x17);
    iVar2 = (((unaff_r7 + (iVar1 - 1U)) * 0x18 + iVar3) * 0x3c + iVar4) * 0x3c + iVar2;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_00001528(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_00001528();
  iVar2 = FUN_00001536(unaff_r4 + 0x14);
  iVar3 = FUN_00001544(unaff_r4 + 0x17);
  return ((unaff_r5 * 0x18 + iVar1) * 0x3c + iVar2) * 0x3c + iVar3;
}



int FUN_00001536(void)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_00001536();
  iVar2 = FUN_00001544(unaff_r4 + 0x17);
  return (unaff_r5 * 0x3c + iVar1) * 0x3c + iVar2;
}



int FUN_00001544(void)

{
  int iVar1;
  int unaff_r5;
  
  iVar1 = FUN_00001544();
  return unaff_r5 * 0x3c + iVar1;
}



void FUN_00001594(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  undefined unaff_r5;
  char unaff_r6;
  
  while( true ) {
    iVar1 = FUN_00001594(param_1,param_2,param_3);
    if (iVar1 == 0) break;
    if (**(char **)(unaff_r4 + 0x24) != '#') goto LAB_000015a4;
    param_2 = *(undefined4 *)(unaff_r4 + 0x24);
    param_1 = *(undefined4 *)(unaff_r4 + 0x2c);
    param_3 = 0x78;
  }
  **(char **)(unaff_r4 + 0x24) = unaff_r6;
  *(undefined *)(*(int *)(unaff_r4 + 0x24) + 1) = unaff_r5;
LAB_000015a4:
  if (*(char *)(unaff_r4 + 4) == '\f') {
    iVar2 = FUN_000015ac(*(undefined4 *)(unaff_r4 + 0x24));
    iVar3 = *(int *)(unaff_r4 + 0x24);
    iVar1 = iVar2;
    if ((*(char *)(iVar3 + iVar2 + -1) == '\n') &&
       (iVar1 = iVar2 + -1, *(char *)(iVar3 + iVar2 + -2) == '\r')) {
      iVar1 = iVar2 + -2;
    }
    *(undefined *)(iVar3 + iVar1) = unaff_r5;
  }
  return;
}



void FUN_000015ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  undefined unaff_r5;
  
  iVar1 = FUN_000015ac();
  iVar3 = *(int *)(unaff_r4 + 0x24);
  iVar2 = iVar1;
  if ((*(char *)(iVar3 + iVar1 + -1) == '\n') &&
     (iVar2 = iVar1 + -1, *(char *)(iVar3 + iVar1 + -2) == '\r')) {
    iVar2 = iVar1 + -2;
  }
  *(undefined *)(iVar3 + iVar2) = unaff_r5;
  return;
}



// WARNING: Possible PIC construction at 0x0000165a: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000165e)
// WARNING: Removing unreachable block (ram,0x0000166e)

char * FUN_00001646(char *param_1)

{
  int iVar1;
  char *unaff_r4;
  uint unaff_r5;
  
  do {
    iVar1 = FUN_00001646(param_1);
    if (iVar1 == 1) {
      return unaff_r4;
    }
    while( true ) {
      do {
        param_1 = unaff_r4;
        unaff_r4 = param_1 + 2;
        unaff_r5 = unaff_r5 - 2;
        if (unaff_r5 < 2) {
          return (char *)0;
        }
      } while (param_1[3] != '-');
      if (*unaff_r4 == '-') break;
      if (param_1[4] == '-') {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    param_1 = param_1 + 4;
  } while( true );
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
                    // WARNING: Could not recover jumptable at 0x00001874. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


