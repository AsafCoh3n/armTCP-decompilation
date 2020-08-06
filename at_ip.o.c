#include "at_ip.o.h"



undefined4 UndefinedInstruction(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = (uint)param_2[10] << 0x18 | (uint)param_2[10] << 8;
  if ((uint)*param_2 < (uVar2 >> 0x10) + 0xe) {
    return 0;
  }
  if (*(byte *)(param_2 + 9) >> 4 != 4) {
    return 0;
  }
  if (0xd < *(byte *)(param_2 + 0xf) >> 4) {
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    iVar4 = FUN_0000008e(0x1e);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 == (ushort *)0x3) goto LAB_000000da;
  }
  puVar3 = param_2 + 0x11;
  iVar4 = FUN_00000080(puVar3,(int)param_2 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(puVar3,DAT_00000110,4), iVar4 == 0)) {
    if (param_2 != (ushort *)0x0) {
      return 0;
    }
    if (*(byte *)puVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(puVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      if (IRQ == (code)0x2) goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be(0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (IRQ != (code)0x11) {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(param_2 + 9);
  if ((iVar4 == 0) && ((param_2[0xc] & 0xff3f) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(param_2 + 9) << 0x1c) >> 0x10);
    param_2[1] = (uVar1 >> 10) + 0xe;
    *param_2 = (short)(uVar2 >> 0x10) - (uVar1 >> 10);
    return 1;
  }
  return 0;
}



undefined4 SupervisorCall(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = (uint)param_2[10] << 0x18 | (uint)param_2[10] << 8;
  if ((uint)*param_2 < (uVar2 >> 0x10) + 0xe) {
    return 0;
  }
  if (*(byte *)(param_2 + 9) >> 4 != 4) {
    return 0;
  }
  if (0xd < *(byte *)(param_2 + 0xf) >> 4) {
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    iVar4 = FUN_0000008e(0x1e);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 == (ushort *)0x3) goto LAB_000000da;
  }
  puVar3 = param_2 + 0x11;
  iVar4 = FUN_00000080(puVar3,(int)param_2 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(puVar3,DAT_00000110,4), iVar4 == 0)) {
    if (param_2 != (ushort *)0x0) {
      return 0;
    }
    if (*(byte *)puVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(puVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      if (IRQ == (code)0x2) goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be(0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (IRQ != (code)0x11) {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(param_2 + 9);
  if ((iVar4 == 0) && ((param_2[0xc] & 0xff3f) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(param_2 + 9) << 0x1c) >> 0x10);
    param_2[1] = (uVar1 >> 10) + 0xe;
    *param_2 = (short)(uVar2 >> 0x10) - (uVar1 >> 10);
    return 1;
  }
  return 0;
}



undefined4 PrefetchAbort(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = (uint)param_2[10] << 0x18 | (uint)param_2[10] << 8;
  if ((uint)*param_2 < (uVar2 >> 0x10) + 0xe) {
    return 0;
  }
  if (*(byte *)(param_2 + 9) >> 4 != 4) {
    return 0;
  }
  if (0xd < *(byte *)(param_2 + 0xf) >> 4) {
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    iVar4 = FUN_0000008e(0x1e);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 == (ushort *)0x3) goto LAB_000000da;
  }
  puVar3 = param_2 + 0x11;
  iVar4 = FUN_00000080(puVar3,(int)param_2 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(puVar3,DAT_00000110,4), iVar4 == 0)) {
    if (param_2 != (ushort *)0x0) {
      return 0;
    }
    if (*(byte *)puVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(puVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      if (IRQ == (code)0x2) goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be(0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (IRQ != (code)0x11) {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(param_2 + 9);
  if ((iVar4 == 0) && ((param_2[0xc] & 0xff3f) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(param_2 + 9) << 0x1c) >> 0x10);
    param_2[1] = (uVar1 >> 10) + 0xe;
    *param_2 = (short)(uVar2 >> 0x10) - (uVar1 >> 10);
    return 1;
  }
  return 0;
}



undefined4 DataAbort(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = (uint)param_2[10] << 0x18 | (uint)param_2[10] << 8;
  if ((uint)*param_2 < (uVar2 >> 0x10) + 0xe) {
    return 0;
  }
  if (*(byte *)(param_2 + 9) >> 4 != 4) {
    return 0;
  }
  if (0xd < *(byte *)(param_2 + 0xf) >> 4) {
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    iVar4 = FUN_0000008e(0x1e);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 == (ushort *)0x3) goto LAB_000000da;
  }
  puVar3 = param_2 + 0x11;
  iVar4 = FUN_00000080(puVar3,(int)param_2 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(puVar3,DAT_00000110,4), iVar4 == 0)) {
    if (param_2 != (ushort *)0x0) {
      return 0;
    }
    if (*(byte *)puVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(puVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      if (IRQ == (code)0x2) goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be(0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (IRQ != (code)0x11) {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(param_2 + 9);
  if ((iVar4 == 0) && ((param_2[0xc] & 0xff3f) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(param_2 + 9) << 0x1c) >> 0x10);
    param_2[1] = (uVar1 >> 10) + 0xe;
    *param_2 = (short)(uVar2 >> 0x10) - (uVar1 >> 10);
    return 1;
  }
  return 0;
}



undefined4 NotUsed(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = (uint)param_2[10] << 0x18 | (uint)param_2[10] << 8;
  if ((uint)*param_2 < (uVar2 >> 0x10) + 0xe) {
    return 0;
  }
  if (*(byte *)(param_2 + 9) >> 4 != 4) {
    return 0;
  }
  if (0xd < *(byte *)(param_2 + 0xf) >> 4) {
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    iVar4 = FUN_0000008e(0x1e);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 == (ushort *)0x3) goto LAB_000000da;
  }
  puVar3 = param_2 + 0x11;
  iVar4 = FUN_00000080(puVar3,(int)param_2 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(puVar3,DAT_00000110,4), iVar4 == 0)) {
    if (param_2 != (ushort *)0x0) {
      return 0;
    }
    if (*(byte *)puVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(puVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      if (IRQ == (code)0x2) goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be(0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (IRQ != (code)0x11) {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(param_2 + 9);
  if ((iVar4 == 0) && ((param_2[0xc] & 0xff3f) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(param_2 + 9) << 0x1c) >> 0x10);
    param_2[1] = (uVar1 >> 10) + 0xe;
    *param_2 = (short)(uVar2 >> 0x10) - (uVar1 >> 10);
    return 1;
  }
  return 0;
}



undefined4 IRQ(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = (uint)param_2[10] << 0x18 | (uint)param_2[10] << 8;
  if ((uint)*param_2 < (uVar2 >> 0x10) + 0xe) {
    return 0;
  }
  if (*(byte *)(param_2 + 9) >> 4 != 4) {
    return 0;
  }
  if (0xd < *(byte *)(param_2 + 0xf) >> 4) {
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    iVar4 = FUN_0000008e(0x1e);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 == (ushort *)0x3) goto LAB_000000da;
  }
  puVar3 = param_2 + 0x11;
  iVar4 = FUN_00000080(puVar3,(int)param_2 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(puVar3,DAT_00000110,4), iVar4 == 0)) {
    if (param_2 != (ushort *)0x0) {
      return 0;
    }
    if (*(byte *)puVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(puVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      if (cRam0000001b == '\x02') goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be(0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (cRam0000001b != '\x11') {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(param_2 + 9);
  if ((iVar4 == 0) && ((param_2[0xc] & 0xff3f) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(param_2 + 9) << 0x1c) >> 0x10);
    param_2[1] = (uVar1 >> 10) + 0xe;
    *param_2 = (short)(uVar2 >> 0x10) - (uVar1 >> 10);
    return 1;
  }
  return 0;
}



undefined4 FIQ(undefined4 param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  
  uVar2 = (uint)param_2[10] << 0x18 | (uint)param_2[10] << 8;
  if ((uint)*param_2 < (uVar2 >> 0x10) + 0xe) {
    return 0;
  }
  if (*(byte *)(param_2 + 9) >> 4 != 4) {
    return 0;
  }
  if (0xd < *(byte *)(param_2 + 0xf) >> 4) {
    return 0;
  }
  if (param_2 == (ushort *)0x0) {
    iVar4 = FUN_0000008e(0x1e);
    if (iVar4 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 == (ushort *)0x3) goto LAB_000000da;
  }
  puVar3 = param_2 + 0x11;
  iVar4 = FUN_00000080(puVar3,(int)param_2 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(puVar3,DAT_00000110,4), iVar4 == 0)) {
    if (param_2 != (ushort *)0x0) {
      return 0;
    }
    if (*(byte *)puVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(puVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      if (IRQ == (code)0x2) goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be(0);
      if (iVar4 == 0) {
        return 0;
      }
    }
    if (IRQ != (code)0x11) {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(param_2 + 9);
  if ((iVar4 == 0) && ((param_2[0xc] & 0xff3f) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(param_2 + 9) << 0x1c) >> 0x10);
    param_2[1] = (uVar1 >> 10) + 0xe;
    *param_2 = (short)(uVar2 >> 0x10) - (uVar1 >> 10);
    return 1;
  }
  return 0;
}



undefined4 FUN_00000080(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short *unaff_r4;
  int unaff_r5;
  short unaff_r6;
  byte *unaff_r7;
  
  iVar3 = FUN_00000080();
  if ((iVar3 == 0) && (iVar3 = FUN_0000009e(), iVar3 == 0)) {
    if (unaff_r5 != 0) {
      return 0;
    }
    if (*unaff_r7 >> 4 == 0xe) {
      iVar3 = FUN_000000ca();
    }
    else {
      iVar3 = FUN_000000b4();
    }
    if (iVar3 == 1) {
      cVar1 = *(char *)((int)unaff_r4 + 0x1b);
      if (cVar1 == '\x02') goto LAB_000000da;
    }
    else {
      iVar3 = FUN_000000be();
      if (iVar3 == 0) {
        return 0;
      }
      cVar1 = *(char *)((int)unaff_r4 + 0x1b);
    }
    if (cVar1 != '\x11') {
      return 0;
    }
  }
LAB_000000da:
  iVar3 = FUN_000000de(unaff_r4 + 9);
  if ((iVar3 == 0) && ((unaff_r4[0xc] & 0xff3fU) == 0)) {
    uVar2 = (ushort)(((uint)*(byte *)(unaff_r4 + 9) << 0x1c) >> 0x10);
    unaff_r4[1] = (uVar2 >> 10) + 0xe;
    *unaff_r4 = unaff_r6 - (uVar2 >> 10);
    return 1;
  }
  return 0;
}



undefined4 FUN_0000008e(void)

{
  char cVar1;
  ushort uVar2;
  short *psVar3;
  int iVar4;
  short *unaff_r4;
  int unaff_r5;
  short unaff_r6;
  
  iVar4 = FUN_0000008e();
  if (iVar4 != 0) {
    return 0;
  }
  psVar3 = unaff_r4 + 0x11;
  iVar4 = FUN_00000080(psVar3,unaff_r5 * 0x14 + DAT_0000010c,4);
  if ((iVar4 == 0) && (iVar4 = FUN_0000009e(psVar3,DAT_00000110,4), iVar4 == 0)) {
    if (unaff_r5 != 0) {
      return 0;
    }
    if (*(byte *)psVar3 >> 4 == 0xe) {
      iVar4 = FUN_000000ca(psVar3);
    }
    else {
      iVar4 = FUN_000000b4();
    }
    if (iVar4 == 1) {
      cVar1 = *(char *)((int)unaff_r4 + 0x1b);
      if (cVar1 == '\x02') goto LAB_000000da;
    }
    else {
      iVar4 = FUN_000000be();
      if (iVar4 == 0) {
        return 0;
      }
      cVar1 = *(char *)((int)unaff_r4 + 0x1b);
    }
    if (cVar1 != '\x11') {
      return 0;
    }
  }
LAB_000000da:
  iVar4 = FUN_000000de(unaff_r4 + 9);
  if ((iVar4 == 0) && ((unaff_r4[0xc] & 0xff3fU) == 0)) {
    uVar2 = (ushort)(((uint)*(byte *)(unaff_r4 + 9) << 0x1c) >> 0x10);
    unaff_r4[1] = (uVar2 >> 10) + 0xe;
    *unaff_r4 = unaff_r6 - (uVar2 >> 10);
    return 1;
  }
  return 0;
}



undefined4 FUN_0000009e(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short *unaff_r4;
  int unaff_r5;
  short unaff_r6;
  byte *unaff_r7;
  
  iVar3 = FUN_0000009e();
  if (iVar3 == 0) {
    if (unaff_r5 != 0) {
      return 0;
    }
    if (*unaff_r7 >> 4 == 0xe) {
      iVar3 = FUN_000000ca();
    }
    else {
      iVar3 = FUN_000000b4();
    }
    if (iVar3 == 1) {
      cVar1 = *(char *)((int)unaff_r4 + 0x1b);
      if (cVar1 == '\x02') goto LAB_000000da;
    }
    else {
      iVar3 = FUN_000000be();
      if (iVar3 == 0) {
        return 0;
      }
      cVar1 = *(char *)((int)unaff_r4 + 0x1b);
    }
    if (cVar1 != '\x11') {
      return 0;
    }
  }
LAB_000000da:
  iVar3 = FUN_000000de(unaff_r4 + 9);
  if ((iVar3 == 0) && ((unaff_r4[0xc] & 0xff3fU) == 0)) {
    uVar2 = (ushort)(((uint)*(byte *)(unaff_r4 + 9) << 0x1c) >> 0x10);
    unaff_r4[1] = (uVar2 >> 10) + 0xe;
    *unaff_r4 = unaff_r6 - (uVar2 >> 10);
    return 1;
  }
  return 0;
}



undefined4 FUN_000000b4(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short *unaff_r4;
  short unaff_r6;
  
  iVar3 = FUN_000000b4();
  if (iVar3 == 1) {
    cVar1 = *(char *)((int)unaff_r4 + 0x1b);
    if (cVar1 == '\x02') goto LAB_000000da;
  }
  else {
    iVar3 = FUN_000000be();
    if (iVar3 == 0) {
      return 0;
    }
    cVar1 = *(char *)((int)unaff_r4 + 0x1b);
  }
  if (cVar1 != '\x11') {
    return 0;
  }
LAB_000000da:
  iVar3 = FUN_000000de(unaff_r4 + 9);
  if ((iVar3 == 0) && ((unaff_r4[0xc] & 0xff3fU) == 0)) {
    uVar2 = (ushort)(((uint)*(byte *)(unaff_r4 + 9) << 0x1c) >> 0x10);
    unaff_r4[1] = (uVar2 >> 10) + 0xe;
    *unaff_r4 = unaff_r6 - (uVar2 >> 10);
    return 1;
  }
  return 0;
}



undefined4 FUN_000000be(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  short *unaff_r4;
  short unaff_r6;
  
  iVar2 = FUN_000000be();
  if ((((iVar2 == 0) || (*(char *)((int)unaff_r4 + 0x1b) != '\x11')) ||
      (iVar2 = FUN_000000de(unaff_r4 + 9), iVar2 != 0)) || ((unaff_r4[0xc] & 0xff3fU) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = (ushort)(((uint)*(byte *)(unaff_r4 + 9) << 0x1c) >> 0x10);
    unaff_r4[1] = (uVar1 >> 10) + 0xe;
    *unaff_r4 = unaff_r6 - (uVar1 >> 10);
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 FUN_000000ca(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  short *unaff_r4;
  short unaff_r6;
  
  iVar3 = FUN_000000ca();
  if (iVar3 == 1) {
    cVar1 = *(char *)((int)unaff_r4 + 0x1b);
    if (cVar1 == '\x02') goto LAB_000000da;
  }
  else {
    iVar3 = FUN_000000be();
    if (iVar3 == 0) {
      return 0;
    }
    cVar1 = *(char *)((int)unaff_r4 + 0x1b);
  }
  if (cVar1 != '\x11') {
    return 0;
  }
LAB_000000da:
  iVar3 = FUN_000000de(unaff_r4 + 9);
  if ((iVar3 == 0) && ((unaff_r4[0xc] & 0xff3fU) == 0)) {
    uVar2 = (ushort)(((uint)*(byte *)(unaff_r4 + 9) << 0x1c) >> 0x10);
    unaff_r4[1] = (uVar2 >> 10) + 0xe;
    *unaff_r4 = unaff_r6 - (uVar2 >> 10);
    return 1;
  }
  return 0;
}



undefined4 FUN_000000de(void)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  short *unaff_r4;
  short unaff_r6;
  
  iVar2 = FUN_000000de();
  if ((iVar2 == 0) && ((unaff_r4[0xc] & 0xff3fU) == 0)) {
    uVar1 = (ushort)(((uint)*(byte *)(unaff_r4 + 9) << 0x1c) >> 0x10);
    unaff_r4[1] = (uVar1 >> 10) + 0xe;
    *unaff_r4 = unaff_r6 - (uVar1 >> 10);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_0000011c(void)

{
  FUN_0000011c();
  return;
}



int FUN_00000140(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_00000140();
  if ((iVar1 != 0) || (iVar1 = FUN_0000016e(), iVar1 != 0)) {
LAB_000001bc:
    *(undefined *)(unaff_r5 + 4) = 0;
    return DAT_000001e0;
  }
  iVar1 = DAT_000001e0 + 0x14;
  if (((int)((uint)*(byte *)(unaff_r4 + 0xb) * 0x40000000) < 0) &&
     (iVar2 = FUN_00000188(), iVar2 != 0)) {
LAB_000001c8:
    *(undefined *)(unaff_r5 + 4) = 1;
    iVar2 = iVar1;
  }
  else {
    iVar2 = DAT_000001e0 + 0x28;
    if ((-1 < (int)((uint)*(byte *)(unaff_r4 + 0xb) << 0x1d)) ||
       (iVar3 = FUN_0000019e(), iVar3 == 0)) {
      uVar4 = (uint)*(byte *)(unaff_r4 + 0xb);
      if ((~uVar4 & 10) == 0) goto LAB_000001c8;
      if ((~uVar4 & 0x14) != 0) {
        if ((*(byte *)(unaff_r4 + 0xb) & 1) != 0) goto LAB_000001bc;
        if ((int)(uVar4 << 0x1e) < 0) goto LAB_000001c8;
      }
    }
    *(undefined *)(unaff_r5 + 4) = 2;
  }
  return iVar2;
}



undefined4 FUN_00000154(void)

{
  int iVar1;
  int unaff_r5;
  
  iVar1 = FUN_00000154();
  if (iVar1 == 0) {
    *(undefined *)(unaff_r5 + 4) = 4;
  }
  return DAT_000001e4;
}



int FUN_0000016e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_0000016e();
  if (iVar1 != 0) {
LAB_000001bc:
    *(undefined *)(unaff_r5 + 4) = 0;
    return DAT_000001e0;
  }
  iVar1 = DAT_000001e0 + 0x14;
  if (((int)((uint)*(byte *)(unaff_r4 + 0xb) * 0x40000000) < 0) &&
     (iVar2 = FUN_00000188(), iVar2 != 0)) {
LAB_000001c8:
    *(undefined *)(unaff_r5 + 4) = 1;
    iVar2 = iVar1;
  }
  else {
    iVar2 = DAT_000001e0 + 0x28;
    if ((-1 < (int)((uint)*(byte *)(unaff_r4 + 0xb) << 0x1d)) ||
       (iVar3 = FUN_0000019e(), iVar3 == 0)) {
      uVar4 = (uint)*(byte *)(unaff_r4 + 0xb);
      if ((~uVar4 & 10) == 0) goto LAB_000001c8;
      if ((~uVar4 & 0x14) != 0) {
        if ((*(byte *)(unaff_r4 + 0xb) & 1) != 0) goto LAB_000001bc;
        if ((int)(uVar4 << 0x1e) < 0) goto LAB_000001c8;
      }
    }
    *(undefined *)(unaff_r5 + 4) = 2;
  }
  return iVar2;
}



int FUN_00000188(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_r4;
  int unaff_r5;
  int in_stack_00000000;
  
  iVar1 = FUN_00000188();
  if (iVar1 == 0) {
    iVar1 = DAT_000001e0 + 0x28;
    if ((-1 < (int)((uint)*(byte *)(unaff_r4 + 0xb) << 0x1d)) ||
       (iVar2 = FUN_0000019e(), iVar2 == 0)) {
      uVar3 = (uint)*(byte *)(unaff_r4 + 0xb);
      if ((~uVar3 & 10) == 0) goto LAB_000001c8;
      if ((~uVar3 & 0x14) != 0) {
        if ((*(byte *)(unaff_r4 + 0xb) & 1) != 0) {
          *(undefined *)(unaff_r5 + 4) = 0;
          return DAT_000001e0;
        }
        if ((int)(uVar3 << 0x1e) < 0) goto LAB_000001c8;
      }
    }
    *(undefined *)(unaff_r5 + 4) = 2;
  }
  else {
LAB_000001c8:
    *(undefined *)(unaff_r5 + 4) = 1;
    iVar1 = in_stack_00000000;
  }
  return iVar1;
}



void FUN_0000019e(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  int unaff_r5;
  
  iVar1 = FUN_0000019e();
  if (iVar1 == 0) {
    uVar2 = (uint)*(byte *)(unaff_r4 + 0xb);
    if ((~uVar2 & 10) == 0) {
LAB_000001c8:
      *(undefined *)(unaff_r5 + 4) = 1;
      return;
    }
    if ((~uVar2 & 0x14) != 0) {
      if ((*(byte *)(unaff_r4 + 0xb) & 1) != 0) {
        *(undefined *)(unaff_r5 + 4) = 0;
        return;
      }
      if ((int)(uVar2 << 0x1e) < 0) goto LAB_000001c8;
    }
  }
  *(undefined *)(unaff_r5 + 4) = 2;
  return;
}



void FUN_0000020c(void)

{
  char cVar1;
  int iVar2;
  int unaff_r4;
  
  iVar2 = FUN_0000020c();
  if (iVar2 == 1) {
    cVar1 = *(char *)(unaff_r4 + 0x1b);
    if (cVar1 == '\x01') {
      FUN_00000226();
    }
    else {
      if (cVar1 == '\x06') {
        FUN_00000236();
      }
      else {
        if (cVar1 == '\x11') {
          FUN_0000022e();
        }
      }
    }
  }
  FUN_0000023c();
  return;
}



void FUN_00000226(void)

{
  FUN_00000226();
  FUN_0000023c();
  return;
}



void FUN_0000022e(void)

{
  FUN_0000022e();
  FUN_0000023c();
  return;
}



void FUN_00000236(void)

{
  FUN_00000236();
  FUN_0000023c();
  return;
}



void FUN_0000023c(void)

{
  FUN_0000023c();
  return;
}



void FUN_0000031c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_0000031c();
                    // WARNING: Could not recover jumptable at 0x00000326. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined4 FUN_00000398(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint *unaff_r4;
  
  uVar1 = FUN_00000398();
  if ((((*unaff_r4 ^ uVar1) & unaff_r4[2]) == 0) && ((unaff_r4[2] | uVar1) == 0xffffffff)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// WARNING: This is an inlined function

void FUN_000003dc(void)

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
                    // WARNING: Could not recover jumptable at 0x000003f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


