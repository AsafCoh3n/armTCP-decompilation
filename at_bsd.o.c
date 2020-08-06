#include "at_bsd.o.h"



undefined8 UndefinedInstruction(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined8 uVar6;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if ((((param_2 < 1) || ((int)(uint)*(byte *)(DAT_000000ec + 1) < param_2)) ||
      (pcVar5 = (char *)(*DAT_000000ec + param_2 * 0x1c + -0x1c), *pcVar5 != '\a')) ||
     (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(param_2,unaff_r5,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,param_2);
}



undefined8 SupervisorCall(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined8 uVar6;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if ((((param_2 < 1) || ((int)(uint)*(byte *)(DAT_000000ec + 1) < param_2)) ||
      (pcVar5 = (char *)(*DAT_000000ec + param_2 * 0x1c + -0x1c), *pcVar5 != '\a')) ||
     (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(param_2,unaff_r5,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,param_2);
}



undefined8 PrefetchAbort(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined8 uVar6;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if ((((param_2 < 1) || ((int)(uint)*(byte *)(DAT_000000ec + 1) < param_2)) ||
      (pcVar5 = (char *)(*DAT_000000ec + param_2 * 0x1c + -0x1c), *pcVar5 != '\a')) ||
     (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(param_2,unaff_r5,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,param_2);
}



undefined8 DataAbort(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined8 uVar6;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if ((((param_2 < 1) || ((int)(uint)*(byte *)(DAT_000000ec + 1) < param_2)) ||
      (pcVar5 = (char *)(*DAT_000000ec + param_2 * 0x1c + -0x1c), *pcVar5 != '\a')) ||
     (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(param_2,unaff_r5,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,param_2);
}



undefined8 NotUsed(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined8 uVar6;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if ((((param_2 < 1) || ((int)(uint)*(byte *)(DAT_000000ec + 1) < param_2)) ||
      (pcVar5 = (char *)(*DAT_000000ec + param_2 * 0x1c + -0x1c), *pcVar5 != '\a')) ||
     (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(param_2,unaff_r5,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,param_2);
}



undefined8 IRQ(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined8 uVar6;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if ((((param_2 < 1) || ((int)(uint)*(byte *)(DAT_000000ec + 1) < param_2)) ||
      (pcVar5 = (char *)(*DAT_000000ec + param_2 * 0x1c + -0x1c), *pcVar5 != '\a')) ||
     (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(param_2,unaff_r5,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,param_2);
}



undefined8 FIQ(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined8 uVar6;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if ((((param_2 < 1) || ((int)(uint)*(byte *)(DAT_000000ec + 1) < param_2)) ||
      (pcVar5 = (char *)(*DAT_000000ec + param_2 * 0x1c + -0x1c), *pcVar5 != '\a')) ||
     (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(param_2,unaff_r5,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,param_2);
}



undefined8 FUN_00000040(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_r6;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  FUN_00000040();
  piVar1 = DAT_000000ec;
  iVar4 = -2;
  if (unaff_r6 < 1) goto code_r0x000000de;
  if ((int)(uint)*(byte *)(DAT_000000ec + 1) < unaff_r6) goto code_r0x000000de;
  pcVar5 = (char *)(*DAT_000000ec + unaff_r6 * 0x1c + -0x1c);
  if ((*pcVar5 != '\a') || (pcVar5[3] != '\x01')) goto code_r0x000000de;
  iVar2 = FUN_0000006c(pcVar5);
  if (iVar2 == 0) {
    iVar2 = -4;
    if ((pcVar5[2] & 1U) == 0) {
      uVar3 = FUN_00000080(pcVar5,3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_0000008a(pcVar5);
        goto LAB_00000090;
      }
      if ((int)(uVar3 << 0x1e) < 0) {
        uVar6 = FUN_000000de();
        return uVar6;
      }
      if ((int)(uVar3 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar4 = iVar2 * 0x1c;
    *(byte *)(*piVar1 + iVar4 + -0x1a) =
         *(byte *)(*piVar1 + iVar4 + -0x1a) & 0x8e | pcVar5[2] & 0x71U;
    FUN_000000b4(*piVar1 + iVar4 + -0x1c);
    FUN_000000c8(in_stack_00000004,in_stack_00000008,*(undefined4 *)(*piVar1 + iVar4 + -0x10),
                 (uint)*(ushort *)(*piVar1 + iVar4 + -0x16));
  }
  iVar4 = iVar2;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(iVar4,in_stack_00000000);
}



undefined8 FUN_0000006c(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  int iVar3;
  int *unaff_r5;
  int unaff_r7;
  undefined8 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_0000006c();
  if (iVar1 == 0) {
    iVar1 = unaff_r4 << 1;
    if ((*(byte *)(unaff_r7 + 2) & 1) == 0) {
      uVar2 = FUN_00000080();
      if ((uVar2 & 1) != 0) {
        iVar1 = FUN_0000008a();
        goto LAB_00000090;
      }
      if ((int)(uVar2 << 0x1e) < 0) {
        uVar4 = FUN_000000de();
        return uVar4;
      }
      if ((int)(uVar2 << 0x1a) < 0) goto code_r0x000000de;
    }
  }
  else {
LAB_00000090:
    iVar3 = iVar1 * 0x1c;
    *(byte *)(*unaff_r5 + iVar3 + -0x1a) =
         *(byte *)(*unaff_r5 + iVar3 + -0x1a) & 0x8e | *(byte *)(unaff_r7 + 2) & 0x71;
    FUN_000000b4(*unaff_r5 + iVar3 + -0x1c);
    FUN_000000c8(in_stack_00000004,in_stack_00000008,*(undefined4 *)(*unaff_r5 + iVar3 + -0x10),
                 (uint)*(ushort *)(*unaff_r5 + iVar3 + -0x16));
  }
  unaff_r4 = iVar1;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(unaff_r4,in_stack_00000000);
}



undefined8 FUN_00000080(void)

{
  uint uVar1;
  int unaff_r4;
  int iVar2;
  int *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  undefined8 uVar3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar1 = FUN_00000080();
  if ((uVar1 & 1) == 0) {
    if ((int)(uVar1 << 0x1e) < 0) {
      uVar3 = FUN_000000de();
      return uVar3;
    }
    if ((int)(uVar1 << 0x1a) < 0) goto code_r0x000000de;
  }
  else {
    unaff_r6 = FUN_0000008a();
    iVar2 = unaff_r6 * 0x1c;
    *(byte *)(*unaff_r5 + iVar2 + -0x1a) =
         *(byte *)(*unaff_r5 + iVar2 + -0x1a) & 0x8e | *(byte *)(unaff_r7 + 2) & 0x71;
    FUN_000000b4(*unaff_r5 + iVar2 + -0x1c);
    FUN_000000c8(in_stack_00000004,in_stack_00000008,*(undefined4 *)(*unaff_r5 + iVar2 + -0x10),
                 (uint)*(ushort *)(*unaff_r5 + iVar2 + -0x16));
  }
  unaff_r4 = unaff_r6;
code_r0x000000de:
  FUN_000000de();
  return CONCAT44(unaff_r4,in_stack_00000000);
}



undefined8 FUN_0000008a(void)

{
  int iVar1;
  int iVar2;
  int *unaff_r5;
  int unaff_r7;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_0000008a();
  iVar2 = iVar1 * 0x1c;
  *(byte *)(*unaff_r5 + iVar2 + -0x1a) =
       *(byte *)(*unaff_r5 + iVar2 + -0x1a) & 0x8e | *(byte *)(unaff_r7 + 2) & 0x71;
  FUN_000000b4(*unaff_r5 + iVar2 + -0x1c);
  FUN_000000c8(in_stack_00000004,in_stack_00000008,*(undefined4 *)(*unaff_r5 + iVar2 + -0x10),
               (uint)*(ushort *)(*unaff_r5 + iVar2 + -0x16));
  FUN_000000de();
  return CONCAT44(iVar1,in_stack_00000000);
}



void FUN_000000b4(void)

{
  int unaff_r4;
  int *unaff_r5;
  undefined4 param_6;
  undefined4 in_stack_00000008;
  
  FUN_000000b4();
  FUN_000000c8(param_6,in_stack_00000008,*(undefined4 *)(*unaff_r5 + unaff_r4 + -0x10),
               (uint)*(ushort *)(*unaff_r5 + unaff_r4 + -0x16));
  FUN_000000de();
  return;
}



void FUN_000000c8(void)

{
  FUN_000000c8();
  FUN_000000de();
  return;
}



void FUN_000000de(void)

{
  FUN_000000de();
  return;
}



void FUN_00000118(void)

{
  undefined4 *unaff_r4;
  
  FUN_00000118();
  *unaff_r4 = 0x10;
  return;
}



int FUN_00000130(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  
  FUN_00000130();
  iVar4 = -2;
  if (0 < unaff_r6) {
    if (unaff_r6 <= (int)(uint)*(byte *)(DAT_000001b8 + 1)) {
      pbVar1 = *DAT_000001b8 + unaff_r6 * 0x1c + -0x1c;
      if ((*pbVar1 == 1) && (iVar4 = (uint)*pbVar1 - 4, 0xf < unaff_r7)) {
        pbVar2 = *DAT_000001b8;
        iVar3 = 0;
        while (iVar3 < (int)(uint)*(byte *)(DAT_000001b8 + 1)) {
          if (((1 < *pbVar2) &&
              ((uint)*(ushort *)(pbVar2 + 4) ==
               ((uint)*(ushort *)(unaff_r5 + 2) << 0x18 | (uint)*(ushort *)(unaff_r5 + 2) << 8) >>
               0x10)) && (pbVar2[3] == pbVar1[3])) goto code_r0x000001aa;
          pbVar2 = pbVar2 + 0x1c;
          iVar3 = iVar3 + 1;
        }
        *(undefined4 *)(pbVar1 + 8) = *(undefined4 *)(unaff_r5 + 4);
        *(ushort *)(pbVar1 + 4) =
             (ushort)(((uint)*(ushort *)(unaff_r5 + 2) << 0x18) >> 0x10) |
             (ushort)(((uint)*(ushort *)(unaff_r5 + 2) << 8) >> 0x10);
        *pbVar1 = 2;
        if (pbVar1[3] == 2) {
          FUN_000001a4();
        }
        iVar4 = 0;
      }
    }
  }
code_r0x000001aa:
  FUN_000001aa();
  return iVar4;
}



undefined4 FUN_000001a4(void)

{
  FUN_000001a4();
  FUN_000001aa();
  return 0;
}



void FUN_000001aa(void)

{
  FUN_000001aa();
  return;
}



undefined4 FUN_0000020a(void)

{
  undefined4 uVar1;
  int unaff_r4;
  
  uVar1 = FUN_0000020a();
  *(undefined *)(unaff_r4 + 1) = (char)uVar1;
  FUN_00000212(uVar1,(uint)*(ushort *)(unaff_r4 + 4));
  return 1;
}



undefined4 FUN_00000212(void)

{
  FUN_00000212();
  return 1;
}



void FUN_00000232(void)

{
  int unaff_r4;
  
  FUN_00000232();
  *(undefined *)(unaff_r4 + 0x13) = 0;
  return;
}



void FUN_0000024e(void)

{
  FUN_0000024e();
  return;
}



void FUN_0000026c(void)

{
  int unaff_r4;
  undefined uVar1;
  
  FUN_0000026c();
  FUN_00000272((uint)*(byte *)(unaff_r4 + 1));
  *(undefined *)(unaff_r4 + 1) = 0;
  FUN_0000027c();
  uVar1 = 0;
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1d) < 0) {
    uVar1 = 0x20;
    FUN_0000028e();
  }
  FUN_00000298();
  *(undefined *)(unaff_r4 + 0x12) = uVar1;
  return;
}



void FUN_00000272(void)

{
  int unaff_r4;
  undefined uVar1;
  
  FUN_00000272();
  *(undefined *)(unaff_r4 + 1) = 0;
  FUN_0000027c();
  uVar1 = 0;
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1d) < 0) {
    uVar1 = 0x20;
    FUN_0000028e();
  }
  FUN_00000298();
  *(undefined *)(unaff_r4 + 0x12) = uVar1;
  return;
}



void FUN_0000027c(void)

{
  int unaff_r4;
  undefined uVar1;
  
  FUN_0000027c();
  uVar1 = 0;
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1d) < 0) {
    uVar1 = 0x20;
    FUN_0000028e();
  }
  FUN_00000298();
  *(undefined *)(unaff_r4 + 0x12) = uVar1;
  return;
}



void FUN_0000028e(void)

{
  int unaff_r4;
  undefined unaff_r5;
  
  FUN_0000028e();
  FUN_00000298();
  *(undefined *)(unaff_r4 + 0x12) = unaff_r5;
  return;
}



void FUN_00000298(void)

{
  int unaff_r4;
  undefined unaff_r5;
  
  FUN_00000298();
  *(undefined *)(unaff_r4 + 0x12) = unaff_r5;
  return;
}



void FUN_000002a4(void)

{
  int unaff_r4;
  undefined uVar1;
  
  FUN_000002a4();
  FUN_000002aa((uint)*(byte *)(unaff_r4 + 1));
  *(undefined *)(unaff_r4 + 1) = 0;
  FUN_0000027c();
  uVar1 = 0;
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1d) < 0) {
    uVar1 = 0x20;
    FUN_0000028e();
  }
  FUN_00000298();
  *(undefined *)(unaff_r4 + 0x12) = uVar1;
  return;
}



void FUN_000002aa(void)

{
  int unaff_r4;
  undefined uVar1;
  
  FUN_000002aa();
  *(undefined *)(unaff_r4 + 1) = 0;
  FUN_0000027c();
  uVar1 = 0;
  if ((int)((uint)*(byte *)(unaff_r4 + 2) << 0x1d) < 0) {
    uVar1 = 0x20;
    FUN_0000028e();
  }
  FUN_00000298();
  *(undefined *)(unaff_r4 + 0x12) = uVar1;
  return;
}



void FUN_000002ee(void)

{
  FUN_000002ee();
  return;
}



void FUN_000002f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte **ppbVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  
  ppbVar1 = DAT_00000374;
  if ((*(byte *)(DAT_00000370 + 0xc) & 1) != 0) {
    iVar4 = 0;
    pbVar3 = *DAT_00000374;
    while (iVar4 < (int)(uint)*(byte *)(ppbVar1 + 1)) {
      uVar2 = (uint)*pbVar3;
      FUN_0000030e(uVar2,param_2,param_3,uVar2);
      uVar5 = FUN_0000031e((uint)pbVar3[1],extraout_r1,param_3,uVar2 - (int)pbVar3 >> 0x1c);
      param_2 = (undefined4)uVar5;
      if (uVar5 < 0x200000000) {
        FUN_0000032a((uint)pbVar3[1],(uint)*(ushort *)(pbVar3 + 4));
        param_2 = extraout_r1_00;
      }
      pbVar3 = pbVar3 + 0x1c;
      iVar4 = iVar4 + 1;
    }
  }
  return;
}



void FUN_0000030e(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  ulonglong uVar1;
  
  while( true ) {
    FUN_0000030e(param_1,param_2,param_3,param_4);
    uVar1 = FUN_0000031e((uint)unaff_r4[1],extraout_r1,param_3,param_4 - (int)unaff_r4 >> 0x1c);
    param_2 = (undefined4)uVar1;
    if (uVar1 < 0x200000000) {
      FUN_0000032a((uint)unaff_r4[1],(uint)*(ushort *)(unaff_r4 + 4));
      param_2 = extraout_r1_00;
    }
    unaff_r4 = unaff_r4 + 0x1c;
    unaff_r5 = unaff_r5 + 1;
    if ((int)(uint)*(byte *)(unaff_r6 + 4) <= unaff_r5) break;
    param_1 = (uint)*unaff_r4;
    param_4 = param_1;
  }
  return;
}



void FUN_0000031e(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 extraout_r1;
  byte *unaff_r4;
  byte *pbVar2;
  int unaff_r5;
  int unaff_r6;
  
  while( true ) {
    uVar1 = FUN_0000031e(param_1,param_2,param_3,param_4);
    if (uVar1 < 2) {
      FUN_0000032a((uint)unaff_r4[1],(uint)*(ushort *)(unaff_r4 + 4));
    }
    pbVar2 = unaff_r4 + 0x1c;
    unaff_r5 = unaff_r5 + 1;
    if ((int)(uint)*(byte *)(unaff_r6 + 4) <= unaff_r5) break;
    uVar1 = (uint)*pbVar2;
    FUN_0000030e();
    param_4 = uVar1 - (int)pbVar2 >> 0x1c;
    param_1 = (uint)unaff_r4[0x1d];
    param_2 = extraout_r1;
    unaff_r4 = pbVar2;
  }
  return;
}



void FUN_0000032a(uint param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  byte *unaff_r4;
  byte *pbVar3;
  int unaff_r5;
  int unaff_r6;
  ulonglong uVar4;
  
  do {
    FUN_0000032a(param_1,param_2);
    uVar2 = extraout_r1_00;
    do {
      pbVar3 = unaff_r4;
      unaff_r4 = pbVar3 + 0x1c;
      unaff_r5 = unaff_r5 + 1;
      if ((int)(uint)*(byte *)(unaff_r6 + 4) <= unaff_r5) {
        return;
      }
      uVar1 = (uint)*unaff_r4;
      FUN_0000030e(uVar1,uVar2,param_3,uVar1);
      uVar4 = FUN_0000031e((uint)pbVar3[0x1d],extraout_r1,param_3,uVar1 - (int)unaff_r4 >> 0x1c);
      uVar2 = (undefined4)uVar4;
    } while (0x1ffffffff < uVar4);
    param_2 = (uint)*(ushort *)(pbVar3 + 0x20);
    param_1 = (uint)pbVar3[0x1d];
  } while( true );
}



uint FUN_00000390(void)

{
  byte bVar1;
  int unaff_r4;
  
  do {
    FUN_00000390();
  } while (*(char *)(unaff_r4 + 0x13) != '\0');
  *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) & 0xfb;
  bVar1 = *(byte *)(unaff_r4 + 0x12);
  *(undefined *)(unaff_r4 + 0x12) = 0;
  return (uint)bVar1;
}



undefined4 FUN_000003b4(void)

{
  char cVar1;
  char **ppcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint unaff_r6;
  
  FUN_000003b4();
  ppcVar2 = DAT_00000490;
  if (((int)unaff_r6 < 1) || ((int)(uint)*(byte *)(DAT_00000490 + 1) < (int)unaff_r6)) {
    uVar3 = FUN_00000484();
    return uVar3;
  }
  pcVar6 = *DAT_00000490 + unaff_r6 * 0x1c + -0x1c;
  cVar1 = *pcVar6;
  if (cVar1 != '\0') {
    if (cVar1 == '\x06') {
      uVar3 = FUN_00000484();
      return uVar3;
    }
    if (pcVar6[3] != '\x02') {
      if (cVar1 == '\a') {
        while (iVar5 = FUN_0000041e(pcVar6), iVar5 != 0) {
          FUN_0000041e(*ppcVar2 + iVar5 * 0x1c + -0x1c);
        }
        pcVar7 = *ppcVar2;
        iVar5 = 1;
        while (iVar5 <= (int)(uint)*(byte *)(DAT_00000490 + 1)) {
          if (((uint)(byte)pcVar7[0x11] == unaff_r6) && (pcVar7[0x11] = '\0', *pcVar7 == '\x03')) {
            FUN_00000444(pcVar7);
          }
          pcVar7 = pcVar7 + 0x1c;
          iVar5 = iVar5 + 1;
        }
      }
      else {
        FUN_000003ec((uint)(byte)pcVar6[1]);
        uVar4 = FUN_000003f2((uint)(byte)pcVar6[1]);
        if (2 < uVar4) {
          if ((pcVar6[2] & 1U) != 0) {
LAB_00000466:
            uVar3 = FUN_00000484();
            return uVar3;
          }
          *pcVar6 = '\x06';
          iVar5 = FUN_0000045e(pcVar6,2);
          if (-1 < iVar5 << 0x1e) goto LAB_00000466;
        }
        if (((int)((uint)(byte)pcVar6[2] << 0x1e) < 0) && (pcVar6[0x11] != '\0')) {
          *pcVar6 = '\x03';
          FUN_0000047e((uint)(byte)pcVar6[1],(uint)*(ushort *)(pcVar6 + 4));
          goto LAB_00000482;
        }
      }
    }
    FUN_0000040e(pcVar6);
  }
LAB_00000482:
  FUN_00000484();
  return 0;
}



undefined4 FUN_000003ec(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *unaff_r4;
  
  FUN_000003ec();
  uVar1 = FUN_000003f2((uint)(byte)unaff_r4[1]);
  if (2 < uVar1) {
    if ((unaff_r4[2] & 1) == 0) {
      *unaff_r4 = 6;
      iVar2 = FUN_0000045e();
      if (iVar2 << 0x1e < 0) goto LAB_0000046a;
    }
    uVar3 = FUN_00000484();
    return uVar3;
  }
LAB_0000046a:
  if (((int)((uint)(byte)unaff_r4[2] << 0x1e) < 0) && (unaff_r4[0x11] != '\0')) {
    *unaff_r4 = 3;
    FUN_0000047e((uint)(byte)unaff_r4[1],(uint)*(ushort *)(unaff_r4 + 4));
  }
  else {
    FUN_0000040e();
  }
  FUN_00000484();
  return 0;
}



undefined4 FUN_000003f2(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *unaff_r4;
  
  uVar1 = FUN_000003f2();
  if (2 < uVar1) {
    if ((unaff_r4[2] & 1) == 0) {
      *unaff_r4 = 6;
      iVar2 = FUN_0000045e();
      if (iVar2 << 0x1e < 0) goto LAB_0000046a;
    }
    uVar3 = FUN_00000484();
    return uVar3;
  }
LAB_0000046a:
  if (((int)((uint)(byte)unaff_r4[2] << 0x1e) < 0) && (unaff_r4[0x11] != '\0')) {
    *unaff_r4 = 3;
    FUN_0000047e((uint)(byte)unaff_r4[1],(uint)*(ushort *)(unaff_r4 + 4));
  }
  else {
    FUN_0000040e();
  }
  FUN_00000484();
  return 0;
}



undefined4 FUN_0000040e(void)

{
  FUN_0000040e();
  FUN_00000484();
  return 0;
}



undefined4 FUN_0000041e(char *param_1)

{
  int iVar1;
  char **unaff_r5;
  char *pcVar2;
  uint unaff_r6;
  
  while( true ) {
    FUN_0000041e(param_1);
    iVar1 = FUN_0000041e();
    if (iVar1 == 0) break;
    param_1 = *unaff_r5 + iVar1 * 0x1c + -0x1c;
  }
  pcVar2 = *unaff_r5;
  iVar1 = 1;
  while (iVar1 <= (int)(uint)*(byte *)(DAT_00000490 + 4)) {
    if (((uint)(byte)pcVar2[0x11] == unaff_r6) && (pcVar2[0x11] = '\0', *pcVar2 == '\x03')) {
      FUN_00000444(pcVar2);
    }
    pcVar2 = pcVar2 + 0x1c;
    iVar1 = iVar1 + 1;
  }
  FUN_0000040e();
  FUN_00000484();
  return 0;
}



undefined4 FUN_00000444(char *param_1)

{
  char *unaff_r5;
  char *pcVar1;
  uint unaff_r6;
  int unaff_r7;
  
  do {
    FUN_00000444(param_1);
    do {
      pcVar1 = unaff_r5;
      param_1 = pcVar1 + 0x1c;
      unaff_r7 = unaff_r7 + 1;
      if ((int)(uint)*(byte *)(DAT_00000490 + 4) < unaff_r7) {
        FUN_0000040e();
        FUN_00000484();
        return 0;
      }
      unaff_r5 = param_1;
    } while (((uint)(byte)pcVar1[0x2d] != unaff_r6) || (pcVar1[0x2d] = '\0', *param_1 != '\x03'));
  } while( true );
}



undefined4 FUN_0000045e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *unaff_r4;
  
  iVar1 = FUN_0000045e();
  if (-1 < iVar1 << 0x1e) {
    uVar2 = FUN_00000484();
    return uVar2;
  }
  if (((int)((uint)(byte)unaff_r4[2] << 0x1e) < 0) && (unaff_r4[0x11] != '\0')) {
    *unaff_r4 = 3;
    FUN_0000047e((uint)(byte)unaff_r4[1],(uint)*(ushort *)(unaff_r4 + 4));
  }
  else {
    FUN_0000040e();
  }
  FUN_00000484();
  return 0;
}



undefined4 FUN_0000047e(void)

{
  FUN_0000047e();
  FUN_00000484();
  return 0;
}



void FUN_00000484(void)

{
  FUN_00000484();
  return;
}



undefined4 FUN_0000049a(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r4;
  undefined *puVar5;
  undefined4 uVar6;
  int unaff_r6;
  uint in_stack_00000008;
  
  FUN_0000049a();
  uVar6 = 0xfffffffe;
  if (0 < unaff_r4) {
    if (unaff_r4 <= (int)(uint)*(byte *)(DAT_00000554 + 1)) {
      uVar2 = FUN_000004be((uint)*(byte *)(*DAT_00000554 + unaff_r4 * 0x1c + -0x1c));
      puVar5 = (undefined *)(uVar2 * 0x10000);
      if ((((unaff_r6 == 0) || (uVar1 = *(ushort *)(unaff_r6 + 2), uVar1 == 0)) ||
          (*(int *)(unaff_r6 + 4) == 0)) || (in_stack_00000008 < 0x10)) {
        uVar6 = FUN_00000546();
        return uVar6;
      }
      uVar4 = (uint)uVar1 << 0x18 | (uint)uVar1 << 8;
      *(short *)(puVar5 + 6) = (short)(uVar4 >> 0x10);
      *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)(unaff_r6 + 4);
      if (puVar5[3] == '\x02') {
        FUN_0000051a(puVar5,uVar4,param_3 + uVar2 + (uint)((uVar2 >> 0x10 & 1) != 0));
LAB_00000532:
        uVar6 = FUN_00000546();
        return uVar6;
      }
      iVar3 = FUN_00000504((uint)(byte)puVar5[1],puVar5 + 0xc,(uint)*(ushort *)(puVar5 + 6),
                           (uint)*(ushort *)(puVar5 + 4));
      if (iVar3 == 0) {
        uVar6 = FUN_00000546();
        return uVar6;
      }
      *puVar5 = 4;
      if ((puVar5[2] & 1) == 0) {
        uVar2 = FUN_0000052a(puVar5,3);
        if ((uVar2 & 1) != 0) goto LAB_00000532;
        if ((int)(uVar2 << 0x1e) < 0) {
          uVar6 = FUN_00000546();
          return uVar6;
        }
        if ((int)(uVar2 << 0x1a) < 0) goto code_r0x00000546;
      }
      uVar6 = 0xfffffffc;
    }
  }
code_r0x00000546:
  FUN_00000546();
  return uVar6;
}



undefined4 FUN_000004be(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  uint param_7;
  
  uVar2 = FUN_000004be();
  puVar6 = (undefined *)(uVar2 * 0x10000);
  if ((((unaff_r6 == 0) || (uVar1 = *(ushort *)(unaff_r6 + 2), uVar1 == 0)) ||
      (*(int *)(unaff_r6 + 4) == 0)) || (param_7 < 0x10)) {
    uVar3 = FUN_00000546();
    return uVar3;
  }
  uVar5 = (uint)uVar1 << 0x18 | (uint)uVar1 << 8;
  *(short *)(puVar6 + 6) = (short)(uVar5 >> 0x10);
  *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(unaff_r6 + 4);
  if (puVar6[3] == '\x02') {
    FUN_0000051a(puVar6,uVar5,param_3 + uVar2 + (uint)((uVar2 >> 0x10 & 1) != 0));
LAB_00000532:
    uVar3 = FUN_00000546();
    return uVar3;
  }
  iVar4 = FUN_00000504((uint)(byte)puVar6[1],puVar6 + 0xc,(uint)*(ushort *)(puVar6 + 6),
                       (uint)*(ushort *)(puVar6 + 4));
  if (iVar4 == 0) {
    uVar3 = FUN_00000546();
    return uVar3;
  }
  *puVar6 = 4;
  if ((puVar6[2] & 1) == 0) {
    uVar2 = FUN_0000052a(puVar6,3);
    if ((uVar2 & 1) != 0) goto LAB_00000532;
    if ((int)(uVar2 << 0x1e) < 0) {
      uVar3 = FUN_00000546();
      return uVar3;
    }
    if ((int)(uVar2 << 0x1a) < 0) goto code_r0x00000546;
  }
  unaff_r5 = unaff_r7;
code_r0x00000546:
  FUN_00000546();
  return unaff_r5;
}



undefined4 FUN_00000504(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  
  iVar1 = FUN_00000504();
  if (iVar1 == 0) {
    uVar3 = FUN_00000546();
    return uVar3;
  }
  *unaff_r4 = 4;
  if ((unaff_r4[2] & 1) == 0) {
    uVar2 = FUN_0000052a();
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00000546();
      return uVar3;
    }
    if ((int)(uVar2 << 0x1e) < 0) {
      uVar3 = FUN_00000546();
      return uVar3;
    }
    if ((int)(uVar2 << 0x1a) < 0) goto code_r0x00000546;
  }
  unaff_r5 = unaff_r7;
code_r0x00000546:
  FUN_00000546();
  return unaff_r5;
}



void FUN_0000051a(void)

{
  FUN_0000051a();
  FUN_00000546();
  return;
}



undefined4 FUN_0000052a(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  
  uVar1 = FUN_0000052a();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00000546();
    return uVar2;
  }
  if ((int)(uVar1 << 0x1e) < 0) {
    uVar2 = FUN_00000546();
    return uVar2;
  }
  if (-1 < (int)(uVar1 << 0x1a)) {
    unaff_r5 = unaff_r7;
  }
  FUN_00000546();
  return unaff_r5;
}



void FUN_00000546(void)

{
  FUN_00000546();
  return;
}



undefined4 FUN_00000560(void)

{
  undefined4 uVar1;
  int unaff_r4;
  
  FUN_00000560();
  if (0 < unaff_r4) {
    if (unaff_r4 <= (int)(uint)*(byte *)(DAT_000005a8 + 1)) {
      if (*(char *)(*DAT_000005a8 + unaff_r4 * 0x1c + -0x1c) != '\0') {
        FUN_0000058e();
        FUN_00000594();
        return 0;
      }
      uVar1 = FUN_00000594();
      return uVar1;
    }
  }
  uVar1 = FUN_00000594();
  return uVar1;
}



undefined4 FUN_0000058e(void)

{
  FUN_0000058e();
  FUN_00000594();
  return 0;
}



void FUN_00000594(void)

{
  FUN_00000594();
  return;
}



undefined4 FUN_000005b4(void)

{
  undefined4 uVar1;
  int unaff_r4;
  
  FUN_000005b4();
  if (0 < unaff_r4) {
    if (unaff_r4 <= (int)(uint)*(byte *)(DAT_000005fc + 1)) {
      if (*(char *)(*DAT_000005fc + unaff_r4 * 0x1c + -0x1c) != '\0') {
        FUN_000005e2();
        FUN_000005e8();
        return 0;
      }
      uVar1 = FUN_000005e8();
      return uVar1;
    }
  }
  uVar1 = FUN_000005e8();
  return uVar1;
}



undefined4 FUN_000005e2(void)

{
  FUN_000005e2();
  FUN_000005e8();
  return 0;
}



void FUN_000005e8(void)

{
  FUN_000005e8();
  return;
}



undefined4 FUN_00000612(void)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000612();
  uVar4 = 0xfffffffe;
  if (unaff_r7 < 1) goto code_r0x00000680;
  if ((int)(uint)*(byte *)(DAT_000006b8 + 1) < unaff_r7) goto code_r0x00000680;
  pcVar1 = (char *)(*DAT_000006b8 + unaff_r7 * 0x1c + -0x1c);
  if (*pcVar1 == '\0') {
    uVar4 = FUN_00000680();
    return uVar4;
  }
  if (unaff_r6 == 1) {
    if (unaff_r5 == 0) {
      bVar2 = pcVar1[2] & 0xfe;
    }
    else {
      bVar2 = pcVar1[2] | 1;
    }
    pcVar1[2] = bVar2;
  }
  else {
    if (unaff_r6 == 2) {
      if (pcVar1[3] != '\x01') goto code_r0x00000680;
      bVar2 = pcVar1[2];
      if (unaff_r5 == 0) {
        bVar3 = 0xef;
        goto LAB_000006b4;
      }
      bVar3 = 0x10;
LAB_000006ae:
      bVar2 = bVar2 | bVar3;
    }
    else {
      if (unaff_r6 == 3) {
        if (pcVar1[3] != '\x01') goto code_r0x00000680;
        bVar2 = pcVar1[2];
        if (unaff_r5 == 0) {
          bVar3 = 0xdf;
          goto LAB_000006b4;
        }
        bVar3 = 0x20;
        goto LAB_000006ae;
      }
      if (unaff_r6 != 4) {
        uVar4 = FUN_00000680();
        return uVar4;
      }
      if (pcVar1[3] != '\x01') goto code_r0x00000680;
      bVar2 = pcVar1[2];
      if (unaff_r5 != 0) {
        bVar3 = 0x40;
        goto LAB_000006ae;
      }
      bVar3 = 0xbf;
LAB_000006b4:
      bVar2 = bVar2 & bVar3;
    }
    pcVar1[2] = bVar2;
    FUN_0000067a();
  }
  uVar4 = 0;
code_r0x00000680:
  FUN_00000680();
  return uVar4;
}



undefined4 FUN_0000067a(void)

{
  FUN_0000067a();
  FUN_00000680();
  return 0;
}



void FUN_00000680(void)

{
  FUN_00000680();
  return;
}



undefined4 FUN_000006e2(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r6;
  int unaff_r7;
  
  FUN_000006e2();
  uVar4 = 0xfffffffe;
  if (0 < unaff_r6) {
    if (unaff_r6 <= (int)(uint)*(byte *)(DAT_00000760 + 1)) {
      pcVar2 = (char *)(*DAT_00000760 + unaff_r6 * 0x1c + -0x1c);
      if ((*pcVar2 == '\x02') && (pcVar2[3] == '\x01')) {
        if ((unaff_r7 == 0) || ((int)(uint)*(byte *)(DAT_00000764 + 4) < unaff_r7)) {
          uVar4 = FUN_0000074c();
          return uVar4;
        }
        FUN_00000722((uint)(byte)pcVar2[1]);
        *pcVar2 = '\a';
        pcVar2[2] = pcVar2[2] | 2;
        pcVar2[1] = '\0';
        iVar3 = 0;
        while (iVar3 < unaff_r7) {
          iVar1 = FUN_0000073c();
          if (iVar1 == 0) {
            uVar4 = FUN_0000074c();
            return uVar4;
          }
          iVar3 = iVar3 + 1;
        }
        uVar4 = 0;
      }
    }
  }
  FUN_0000074c();
  return uVar4;
}



undefined4 FUN_00000722(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *unaff_r4;
  int iVar3;
  int unaff_r7;
  
  FUN_00000722();
  *unaff_r4 = 7;
  unaff_r4[2] = unaff_r4[2] | 2;
  unaff_r4[1] = 0;
  iVar3 = 0;
  while( true ) {
    if (unaff_r7 <= iVar3) {
      FUN_0000074c();
      return 0;
    }
    iVar1 = FUN_0000073c();
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  uVar2 = FUN_0000074c();
  return uVar2;
}



undefined4 FUN_0000073c(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r7;
  
  do {
    iVar1 = FUN_0000073c();
    if (iVar1 == 0) {
      uVar2 = FUN_0000074c();
      return uVar2;
    }
    unaff_r4 = unaff_r4 + 1;
  } while (unaff_r4 < unaff_r7);
  FUN_0000074c();
  return 0;
}



void FUN_0000074c(void)

{
  FUN_0000074c();
  return;
}



void FUN_00000790(void)

{
  undefined4 *unaff_r4;
  
  while (FUN_00000790(), unaff_r4 != (undefined4 *)0x0) {
    unaff_r4 = (undefined4 *)*unaff_r4;
  }
  return;
}



void FUN_000007a8(void)

{
  FUN_000007a8();
  return;
}



void FUN_00000906(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000906();
                    // WARNING: Could not recover jumptable at 0x00000912. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000924(void)

{
  FUN_00000924();
  return;
}



// WARNING: Possible PIC construction at 0x000009b2: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000009b6)
// WARNING: Removing unreachable block (ram,0x000009c0)
// WARNING: Removing unreachable block (ram,0x00000a92)
// WARNING: Removing unreachable block (ram,0x000009c4)
// WARNING: Removing unreachable block (ram,0x000009ba)

void FUN_00000992(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int in_stack_00000030;
  uint param_11;
  code *UNRECOVERED_JUMPTABLE;
  
  while( true ) {
    iVar1 = FUN_00000992(param_1);
    if (iVar1 == 0) {
      if (((param_11 & 1) == 0) && ((*(byte *)(unaff_r4 + 2) & 1) == 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (unaff_r5 == 0) {
        FUN_00000aa6();
        return;
      }
      FUN_00000aa6();
      return;
    }
    uVar2 = FUN_000009ca((uint)*(byte *)(unaff_r4 + 1));
    if (unaff_r6 - unaff_r5 < (int)uVar2) {
      uVar2 = unaff_r6 - unaff_r5;
    }
    uVar3 = FUN_000009de();
    FUN_000009ec(uVar3,in_stack_00000030 + unaff_r5,uVar2);
    iVar1 = FUN_000009f6((uint)*(byte *)(unaff_r4 + 1),uVar3,uVar2 & 0xffff);
    if (iVar1 == 0) break;
    unaff_r5 = unaff_r5 + uVar2;
    if (unaff_r6 <= unaff_r5) {
      FUN_00000aa6();
                    // WARNING: Could not recover jumptable at 0x00000ab2. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    param_1 = (uint)*(byte *)(unaff_r4 + 1);
  }
  FUN_00000aa6();
  return;
}



// WARNING: Possible PIC construction at 0x000009b2: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000009b6)
// WARNING: Removing unreachable block (ram,0x000009c0)
// WARNING: Removing unreachable block (ram,0x00000a92)
// WARNING: Removing unreachable block (ram,0x000009c4)
// WARNING: Removing unreachable block (ram,0x000009ba)

void FUN_000009ca(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int in_stack_00000030;
  uint in_stack_00000038;
  code *UNRECOVERED_JUMPTABLE;
  
  while( true ) {
    uVar1 = FUN_000009ca(param_1);
    if (unaff_r6 - unaff_r5 < (int)uVar1) {
      uVar1 = unaff_r6 - unaff_r5;
    }
    uVar2 = FUN_000009de();
    FUN_000009ec(uVar2,in_stack_00000030 + unaff_r5,uVar1);
    iVar3 = FUN_000009f6((uint)*(byte *)(unaff_r4 + 1),uVar2,uVar1 & 0xffff);
    if (iVar3 == 0) {
      FUN_00000aa6();
      return;
    }
    unaff_r5 = unaff_r5 + uVar1;
    if (unaff_r6 <= unaff_r5) {
      FUN_00000aa6();
                    // WARNING: Could not recover jumptable at 0x00000ab2. Too many branches
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    iVar3 = FUN_00000992((uint)*(byte *)(unaff_r4 + 1));
    if (iVar3 == 0) break;
    param_1 = (uint)*(byte *)(unaff_r4 + 1);
  }
  if (((in_stack_00000038 & 1) == 0) && ((*(byte *)(unaff_r4 + 2) & 1) == 0)) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (unaff_r5 == 0) {
    FUN_00000aa6();
    return;
  }
  FUN_00000aa6();
  return;
}



// WARNING: Possible PIC construction at 0x000009b2: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000009b6)
// WARNING: Removing unreachable block (ram,0x000009c0)
// WARNING: Removing unreachable block (ram,0x00000a92)
// WARNING: Removing unreachable block (ram,0x000009c4)
// WARNING: Removing unreachable block (ram,0x000009ba)

void FUN_000009de(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  uint param_5;
  int param_11;
  uint in_stack_00000038;
  code *UNRECOVERED_JUMPTABLE;
  
  while( true ) {
    uVar1 = FUN_000009de();
    FUN_000009ec(uVar1,param_11 + unaff_r5,unaff_r7);
    iVar2 = FUN_000009f6((uint)*(byte *)(unaff_r4 + 1),uVar1,param_5);
    if (iVar2 == 0) {
      FUN_00000aa6();
      return;
    }
    unaff_r5 = unaff_r5 + unaff_r7;
    if (unaff_r6 <= unaff_r5) break;
    iVar2 = FUN_00000992((uint)*(byte *)(unaff_r4 + 1));
    if (iVar2 == 0) {
      if (((in_stack_00000038 & 1) == 0) && ((*(byte *)(unaff_r4 + 2) & 1) == 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (unaff_r5 == 0) {
        FUN_00000aa6();
        return;
      }
      FUN_00000aa6();
      return;
    }
    unaff_r7 = FUN_000009ca((uint)*(byte *)(unaff_r4 + 1));
    if (unaff_r6 - unaff_r5 < (int)unaff_r7) {
      unaff_r7 = unaff_r6 - unaff_r5;
    }
    param_5 = unaff_r7 & 0xffff;
  }
  FUN_00000aa6();
                    // WARNING: Could not recover jumptable at 0x00000ab2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Possible PIC construction at 0x000009b2: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000009b6)
// WARNING: Removing unreachable block (ram,0x000009c0)
// WARNING: Removing unreachable block (ram,0x00000a92)
// WARNING: Removing unreachable block (ram,0x000009c4)
// WARNING: Removing unreachable block (ram,0x000009ba)

void FUN_000009ec(undefined4 param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int in_stack_00000030;
  uint in_stack_00000038;
  code *UNRECOVERED_JUMPTABLE;
  
  while( true ) {
    FUN_000009ec(param_1,param_2,param_3);
    iVar1 = FUN_000009f6((uint)*(byte *)(unaff_r4 + 1),param_6,param_5);
    if (iVar1 == 0) {
      FUN_00000aa6();
      return;
    }
    unaff_r5 = unaff_r5 + unaff_r7;
    if (unaff_r6 <= unaff_r5) break;
    iVar1 = FUN_00000992((uint)*(byte *)(unaff_r4 + 1));
    if (iVar1 == 0) {
      if (((in_stack_00000038 & 1) == 0) && ((*(byte *)(unaff_r4 + 2) & 1) == 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (unaff_r5 == 0) {
        FUN_00000aa6();
        return;
      }
      FUN_00000aa6();
      return;
    }
    param_3 = FUN_000009ca((uint)*(byte *)(unaff_r4 + 1));
    if (unaff_r6 - unaff_r5 < (int)param_3) {
      param_3 = unaff_r6 - unaff_r5;
    }
    param_5 = param_3 & 0xffff;
    param_1 = FUN_000009de();
    param_2 = in_stack_00000030 + unaff_r5;
    unaff_r7 = param_3;
    param_6 = param_1;
  }
  FUN_00000aa6();
                    // WARNING: Could not recover jumptable at 0x00000ab2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Possible PIC construction at 0x000009b2: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000009b6)
// WARNING: Removing unreachable block (ram,0x000009c0)
// WARNING: Removing unreachable block (ram,0x00000a92)
// WARNING: Removing unreachable block (ram,0x000009c4)
// WARNING: Removing unreachable block (ram,0x000009ba)

void FUN_000009f6(uint param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint unaff_r7;
  int in_stack_00000030;
  uint in_stack_00000038;
  code *UNRECOVERED_JUMPTABLE;
  
  while( true ) {
    iVar1 = FUN_000009f6(param_1,param_2,param_3);
    if (iVar1 == 0) {
      FUN_00000aa6();
      return;
    }
    unaff_r5 = unaff_r5 + unaff_r7;
    if (unaff_r6 <= unaff_r5) break;
    iVar1 = FUN_00000992((uint)*(byte *)(unaff_r4 + 1));
    if (iVar1 == 0) {
      if (((in_stack_00000038 & 1) == 0) && ((*(byte *)(unaff_r4 + 2) & 1) == 0)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (unaff_r5 == 0) {
        FUN_00000aa6();
        return;
      }
      FUN_00000aa6();
      return;
    }
    unaff_r7 = FUN_000009ca((uint)*(byte *)(unaff_r4 + 1));
    if (unaff_r6 - unaff_r5 < (int)unaff_r7) {
      unaff_r7 = unaff_r6 - unaff_r5;
    }
    param_3 = unaff_r7 & 0xffff;
    param_2 = FUN_000009de();
    FUN_000009ec(param_2,in_stack_00000030 + unaff_r5,unaff_r7);
    param_1 = (uint)*(byte *)(unaff_r4 + 1);
  }
  FUN_00000aa6();
                    // WARNING: Could not recover jumptable at 0x00000ab2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// WARNING: Possible PIC construction at 0x00000a36: Changing call to branch
// WARNING: Possible PIC construction at 0x00000a84: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00000a3a)
// WARNING: Removing unreachable block (ram,0x00000a50)
// WARNING: Removing unreachable block (ram,0x00000a3e)
// WARNING: Removing unreachable block (ram,0x00000a42)
// WARNING: Removing unreachable block (ram,0x00000a56)
// WARNING: Removing unreachable block (ram,0x00000a62)
// WARNING: Removing unreachable block (ram,0x00000a6e)
// WARNING: Removing unreachable block (ram,0x00000a7a)
// WARNING: Removing unreachable block (ram,0x00000a84)
// WARNING: Removing unreachable block (ram,0x00000a74)
// WARNING: Removing unreachable block (ram,0x00000a68)
// WARNING: Removing unreachable block (ram,0x00000a88)
// WARNING: Removing unreachable block (ram,0x00000a98)
// WARNING: Removing unreachable block (ram,0x00000a92)

void FUN_00000a08(void)

{
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000a08();
  if (unaff_r6 < 1) {
    FUN_00000aa6();
                    // WARNING: Could not recover jumptable at 0x00000ab2. Too many branches
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00000a28();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Possible PIC construction at 0x00000a36: Changing call to branch
// WARNING: Possible PIC construction at 0x00000a84: Changing call to branch
// WARNING: Removing unreachable block (ram,0x00000a3a)
// WARNING: Removing unreachable block (ram,0x00000a50)
// WARNING: Removing unreachable block (ram,0x00000a3e)
// WARNING: Removing unreachable block (ram,0x00000a42)
// WARNING: Removing unreachable block (ram,0x00000a56)
// WARNING: Removing unreachable block (ram,0x00000a62)
// WARNING: Removing unreachable block (ram,0x00000a6e)
// WARNING: Removing unreachable block (ram,0x00000a7a)
// WARNING: Removing unreachable block (ram,0x00000a84)
// WARNING: Removing unreachable block (ram,0x00000a74)
// WARNING: Removing unreachable block (ram,0x00000a68)
// WARNING: Removing unreachable block (ram,0x00000a88)
// WARNING: Removing unreachable block (ram,0x00000a98)
// WARNING: Removing unreachable block (ram,0x00000a14)
// WARNING: Removing unreachable block (ram,0x00000a1e)
// WARNING: Removing unreachable block (ram,0x00000a20)
// WARNING: Removing unreachable block (ram,0x00000aa4)
// WARNING: Removing unreachable block (ram,0x00000a92)

void FUN_00000a28(void)

{
  FUN_00000a28();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00000aa6(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00000aa6();
                    // WARNING: Could not recover jumptable at 0x00000ab2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00000ade(void)

{
  FUN_00000ade();
  return;
}



undefined4 FUN_00000af0(void)

{
  char **ppcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  int unaff_r6;
  int iVar6;
  ulonglong uVar7;
  
  uVar2 = FUN_00000af0();
  ppcVar1 = DAT_00000b88;
  uVar4 = 0xfffffffd;
  if (unaff_r6 == 1) {
    if (unaff_r5 == 1) {
      if ((unaff_r4 == 0) || (unaff_r4 == 1)) goto LAB_00000b1a;
    }
    else {
      if ((unaff_r5 == 2) && ((unaff_r4 == 0 || (unaff_r4 == 2)))) {
LAB_00000b1a:
        iVar6 = 1;
        pcVar5 = *DAT_00000b88;
        do {
          uVar3 = (uint)*(byte *)(DAT_00000b88 + 1);
          if ((int)uVar3 < iVar6) {
LAB_00000b32:
            FUN_00000b36(uVar3,uVar4);
            return 0xffffffff;
          }
          if (*pcVar5 == '\0') {
            uVar3 = 0;
            pcVar5[1] = '\0';
            if (unaff_r5 == 2) {
              uVar7 = FUN_00000b76(0,3,DAT_00000b90);
            }
            else {
              if (unaff_r5 != 1) goto LAB_00000b32;
              uVar7 = FUN_00000b56(2,0,0,DAT_00000b8c);
            }
            uVar4 = (undefined4)uVar7;
            pcVar5[1] = (char)(uVar7 >> 0x20);
            uVar3 = (uint)(uVar7 >> 0x20) & 0xff;
            if ((uVar7 & 0xff00000000) != 0) {
              pcVar5[3] = (char)unaff_r5;
              *pcVar5 = '\x01';
              if (*(char *)((int)ppcVar1 + 5) == '\0') {
                pcVar5[2] = pcVar5[2] | 1;
              }
              uVar2 = FUN_00000b36();
              return uVar2;
            }
            goto LAB_00000b32;
          }
          pcVar5 = pcVar5 + 0x1c;
          iVar6 = iVar6 + 1;
        } while( true );
      }
    }
  }
  uVar2 = FUN_00000b36(uVar2,0xfffffffd);
  return uVar2;
}



void FUN_00000b36(void)

{
  FUN_00000b36();
  return;
}



undefined4 FUN_00000b56(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *unaff_r4;
  undefined unaff_r5;
  int unaff_r7;
  
  uVar1 = FUN_00000b56();
  unaff_r4[1] = (char)uVar1;
  if ((uVar1 & 0xff) == 0) {
    FUN_00000b36();
    return 0xffffffff;
  }
  unaff_r4[3] = unaff_r5;
  *unaff_r4 = 1;
  if (*(char *)(unaff_r7 + 5) == '\0') {
    unaff_r4[2] = unaff_r4[2] | 1;
  }
  uVar2 = FUN_00000b36();
  return uVar2;
}



undefined4 FUN_00000b76(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *unaff_r4;
  undefined unaff_r5;
  int unaff_r7;
  
  uVar1 = FUN_00000b76();
  unaff_r4[1] = (char)uVar1;
  if ((uVar1 & 0xff) == 0) {
    FUN_00000b36();
    return 0xffffffff;
  }
  unaff_r4[3] = unaff_r5;
  *unaff_r4 = 1;
  if (*(char *)(unaff_r7 + 5) == '\0') {
    unaff_r4[2] = unaff_r4[2] | 1;
  }
  uVar2 = FUN_00000b36();
  return uVar2;
}



int FUN_00000b9e(void)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_00000b9e();
  if (iVar1 != 0) {
    uVar2 = (undefined2)((uint)DAT_00000c74 >> 0x10);
    iVar1 = *DAT_00000c74 + iVar1 * 0x1c + -0x1c;
    FUN_00000bb6();
    *(undefined2 *)(iVar1 + 6) = uVar2;
    FUN_00000bcc(iVar1 + 0xc,in_stack_0000000c,4);
    iVar1 = 1;
  }
  return iVar1;
}



undefined4 FUN_00000bb6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int unaff_r4;
  undefined4 param_8;
  
  uVar1 = (undefined2)((uint)param_3 >> 0x10);
  FUN_00000bb6();
  *(undefined2 *)(unaff_r4 + 6) = uVar1;
  FUN_00000bcc(unaff_r4 + 0xc,param_8,4);
  return 1;
}



undefined4 FUN_00000bcc(void)

{
  FUN_00000bcc();
  return 1;
}



undefined4 FUN_00000c30(void)

{
  FUN_00000c30();
  return 1;
}



undefined4 FUN_00000c86(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  undefined2 unaff_r6;
  undefined4 param_7;
  undefined4 in_stack_00000010;
  
  iVar1 = FUN_00000c86();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *DAT_00000cf8 + iVar1 * 0x1c + -0x1c;
  if (*(int *)(iVar1 + 0xc) != 0) {
    if (*(int *)(iVar1 + 0xc) == -1) {
      return 0;
    }
    iVar2 = FUN_00000ca6(param_7);
    if (iVar2 != *(int *)(iVar1 + 0xc)) {
      return 0;
    }
  }
  iVar2 = FUN_00000cb4(unaff_r5 + DAT_00000cfc);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined2 *)(iVar2 + 4) = (short)unaff_r5;
  *(undefined2 *)(iVar2 + 6) = unaff_r6;
  FUN_00000cc8(iVar2 + 8,param_7,4);
  FUN_00000cd4(iVar2 + 0xc,in_stack_00000010);
  FUN_00000cdc(iVar1,iVar2);
  FUN_00000ce4(iVar1,8);
  return 1;
}



undefined4 FUN_00000ca6(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r5;
  undefined2 unaff_r6;
  int unaff_r7;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  iVar1 = FUN_00000ca6();
  if ((iVar1 == *(int *)(unaff_r7 + 0xc)) &&
     (iVar1 = FUN_00000cb4(unaff_r5 + DAT_00000cfc), iVar1 != 0)) {
    *(undefined2 *)(iVar1 + 4) = (short)unaff_r5;
    *(undefined2 *)(iVar1 + 6) = unaff_r6;
    FUN_00000cc8(iVar1 + 8,in_stack_00000008,4);
    FUN_00000cd4(iVar1 + 0xc,in_stack_00000010);
    FUN_00000cdc();
    FUN_00000ce4();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint FUN_00000cb4(void)

{
  int iVar1;
  undefined2 unaff_r5;
  undefined2 unaff_r6;
  undefined4 param_7;
  undefined4 in_stack_00000010;
  
  iVar1 = FUN_00000cb4();
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 4) = unaff_r5;
    *(undefined2 *)(iVar1 + 6) = unaff_r6;
    FUN_00000cc8(iVar1 + 8,param_7,4);
    FUN_00000cd4(iVar1 + 0xc,in_stack_00000010);
    FUN_00000cdc();
    FUN_00000ce4();
  }
  return (uint)(iVar1 != 0);
}



undefined4 FUN_00000cc8(void)

{
  int unaff_r4;
  undefined4 param_9;
  
  FUN_00000cc8();
  FUN_00000cd4(unaff_r4 + 0xc,param_9);
  FUN_00000cdc();
  FUN_00000ce4();
  return 1;
}



undefined4 FUN_00000cd4(void)

{
  FUN_00000cd4();
  FUN_00000cdc();
  FUN_00000ce4();
  return 1;
}



undefined4 FUN_00000cdc(void)

{
  FUN_00000cdc();
  FUN_00000ce4();
  return 1;
}



undefined4 FUN_00000ce4(void)

{
  FUN_00000ce4();
  return 1;
}



// WARNING: This is an inlined function

void FUN_00000d0c(void)

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
                    // WARNING: Could not recover jumptable at 0x00000d20. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


