#include "at_dhcp.o.h"



void UndefinedInstruction(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void SupervisorCall(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void PrefetchAbort(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void DataAbort(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void NotUsed(uint param_1,uint param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  bool in_ZR;
  
  if (in_ZR) {
    *(uint *)(param_1 & param_2) = param_1 & param_2;
  }
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void IRQ(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined4 *)param_1 = param_1;
  }
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void FIQ(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined4 *)param_1 = param_1;
  }
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void FUN_00000040(void)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = DAT_00000074;
  if (*DAT_00000074 != '\0') {
    FUN_0000004c((uint)(byte)DAT_00000074[1]);
    FUN_00000052((uint)(byte)pcVar1[1]);
    uVar2 = DAT_00000078;
    pcVar1[1] = '\0';
    FUN_00000062(uVar2,pcVar1 + 8,4);
    *pcVar1 = '\0';
    FUN_00000068();
  }
  return;
}



void FUN_0000004c(void)

{
  undefined4 uVar1;
  undefined *unaff_r4;
  
  FUN_0000004c();
  FUN_00000052((uint)(byte)unaff_r4[1]);
  uVar1 = DAT_00000078;
  unaff_r4[1] = 0;
  FUN_00000062(uVar1,unaff_r4 + 8,4);
  *unaff_r4 = 0;
  FUN_00000068();
  return;
}



void FUN_00000052(void)

{
  undefined4 uVar1;
  undefined *unaff_r4;
  
  FUN_00000052();
  uVar1 = DAT_00000078;
  unaff_r4[1] = 0;
  FUN_00000062(uVar1,unaff_r4 + 8,4);
  *unaff_r4 = 0;
  FUN_00000068();
  return;
}



void FUN_00000062(void)

{
  undefined *unaff_r4;
  undefined unaff_r5;
  
  FUN_00000062();
  *unaff_r4 = unaff_r5;
  FUN_00000068();
  return;
}



void FUN_00000068(void)

{
  FUN_00000068();
  return;
}



void FUN_0000007c(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00000084(0,3,DAT_000000c4);
  puVar1 = DAT_000000c8;
  DAT_000000c8[1] = (char)iVar2;
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  else {
    FUN_00000094(iVar2,0x44);
    FUN_000000a0(puVar1 + 8,DAT_000000cc,4);
    FUN_000000aa(DAT_000000cc,0,4);
    *puVar1 = 3;
    uVar3 = FUN_000000b2();
    *(undefined4 *)(puVar1 + 0x18) = uVar3;
    *(undefined2 *)(puVar1 + 2) = 0;
  }
  return;
}



void FUN_00000084(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00000084();
  puVar1 = DAT_000000c8;
  DAT_000000c8[1] = (char)iVar2;
  if (iVar2 == 0) {
    *puVar1 = 0;
  }
  else {
    FUN_00000094(iVar2,0x44);
    FUN_000000a0(puVar1 + 8,DAT_000000cc,4);
    FUN_000000aa(DAT_000000cc,0,4);
    *puVar1 = 3;
    uVar3 = FUN_000000b2();
    *(undefined4 *)(puVar1 + 0x18) = uVar3;
    *(undefined2 *)(puVar1 + 2) = 0;
  }
  return;
}



void FUN_00000094(void)

{
  undefined4 uVar1;
  undefined *unaff_r4;
  undefined2 unaff_r5;
  
  FUN_00000094();
  FUN_000000a0(unaff_r4 + 8,DAT_000000cc,4);
  FUN_000000aa(DAT_000000cc,0,4);
  *unaff_r4 = 3;
  uVar1 = FUN_000000b2();
  *(undefined4 *)(unaff_r4 + 0x18) = uVar1;
  *(undefined2 *)(unaff_r4 + 2) = unaff_r5;
  return;
}



void FUN_000000a0(void)

{
  undefined4 uVar1;
  undefined *unaff_r4;
  undefined2 unaff_r5;
  
  FUN_000000a0();
  FUN_000000aa(DAT_000000cc,0,4);
  *unaff_r4 = 3;
  uVar1 = FUN_000000b2();
  *(undefined4 *)(unaff_r4 + 0x18) = uVar1;
  *(undefined2 *)(unaff_r4 + 2) = unaff_r5;
  return;
}



void FUN_000000aa(void)

{
  undefined4 uVar1;
  undefined *unaff_r4;
  undefined2 unaff_r5;
  
  FUN_000000aa();
  *unaff_r4 = 3;
  uVar1 = FUN_000000b2();
  *(undefined4 *)(unaff_r4 + 0x18) = uVar1;
  *(undefined2 *)(unaff_r4 + 2) = unaff_r5;
  return;
}



void FUN_000000b2(void)

{
  undefined4 uVar1;
  int unaff_r4;
  undefined2 unaff_r5;
  
  uVar1 = FUN_000000b2();
  *(undefined4 *)(unaff_r4 + 0x18) = uVar1;
  *(undefined2 *)(unaff_r4 + 2) = unaff_r5;
  return;
}



void FUN_000004b0(void)

{
  char cVar1;
  char **ppcVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int unaff_r6;
  int unaff_r7;
  
  puVar3 = (undefined *)FUN_000004b0();
  FUN_000004ba(puVar3,0);
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = 6;
  pcVar8 = DAT_00000668;
  puVar3[3] = 0;
  FUN_000004d2(puVar3 + 4,*(undefined4 *)(pcVar8 + 0x18));
  FUN_000004dc(puVar3 + 8,(uint)*(ushort *)(pcVar8 + 2));
  if (unaff_r6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x8000;
  }
  FUN_000004f0(puVar3 + 10,uVar6);
  cVar1 = *DAT_00000668;
  if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\b')) {
    FUN_0000050c(puVar3 + 0xc,DAT_00000670,4);
  }
  FUN_00000518(puVar3 + 0x1c,DAT_00000674,6);
  FUN_00000522(puVar3 + 0xec,DAT_00000678);
  puVar3[0xf0] = 0x35;
  puVar3[0xf1] = 1;
  puVar3[0xf2] = (char)unaff_r7;
  puVar3[0xf3] = 0x3d;
  puVar3[0xf4] = 7;
  puVar3[0xf5] = 1;
  FUN_00000544(puVar3 + 0xf6,DAT_00000674,6);
  iVar10 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      puVar3[0xfc] = 0x32;
      puVar3[0xfd] = 4;
      FUN_00000576(puVar3 + 0xfe,DAT_00000668 + 8,4);
      iVar10 = 0x102;
    }
    pcVar8 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && ((cVar1 != '\a' && (cVar1 != '\b')))) {
      puVar3[iVar10] = 0x36;
      (puVar3 + iVar10)[1] = 4;
      FUN_000005a0(puVar3 + iVar10 + 2,pcVar8 + 4);
      iVar10 = iVar10 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  puVar3[iVar10] = 0xc;
  uVar4 = FUN_000005b6(puVar3 + iVar10 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  (puVar3 + iVar10)[1] = (char)(uVar4 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar10 = (uVar4 & 0xff) + iVar10 + 2;
  if (**DAT_0000066c != '\0') {
    puVar3[iVar10] = 0x3c;
    puVar5 = puVar3 + iVar10;
    uVar4 = FUN_000005da(puVar5 + 2,*ppcVar2);
    iVar10 = (uVar4 & 0xff) + iVar10 + 2;
    puVar5[1] = (char)(uVar4 & 0xff);
  }
  puVar3[iVar10] = 0x37;
  puVar5 = puVar3 + iVar10;
  puVar5[2] = 1;
  puVar5[3] = 3;
  puVar5[4] = 6;
  puVar5[5] = 0xc;
  puVar5[6] = 0x33;
  puVar5[7] = 0x3a;
  puVar5[8] = 0x3b;
  iVar7 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    puVar3[iVar10 + 9] = 0x43;
    iVar7 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar9 = iVar10 + iVar7;
    iVar7 = iVar7 + 1;
    puVar3[iVar9 + 2] = 0x2a;
  }
  iVar10 = iVar10 + iVar7 + 2;
  puVar5[1] = (char)iVar7;
LAB_00000634:
  puVar3[iVar10] = 0xff;
  pcVar8 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar8 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar8,0x43,puVar3);
  return;
}



void FUN_000004ba(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined *unaff_r4;
  int iVar9;
  int unaff_r6;
  int unaff_r7;
  
  FUN_000004ba();
  *unaff_r4 = 1;
  unaff_r4[1] = 1;
  unaff_r4[2] = 6;
  pcVar7 = DAT_00000668;
  unaff_r4[3] = 0;
  FUN_000004d2(unaff_r4 + 4,*(undefined4 *)(pcVar7 + 0x18));
  FUN_000004dc(unaff_r4 + 8,(uint)*(ushort *)(pcVar7 + 2));
  if (unaff_r6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x8000;
  }
  FUN_000004f0(unaff_r4 + 10,uVar5);
  cVar1 = *DAT_00000668;
  if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\b')) {
    FUN_0000050c(unaff_r4 + 0xc,DAT_00000670,4);
  }
  FUN_00000518(unaff_r4 + 0x1c,DAT_00000674,6);
  FUN_00000522(unaff_r4 + 0xec,DAT_00000678);
  unaff_r4[0xf0] = 0x35;
  unaff_r4[0xf1] = 1;
  unaff_r4[0xf2] = (char)unaff_r7;
  unaff_r4[0xf3] = 0x3d;
  unaff_r4[0xf4] = 7;
  unaff_r4[0xf5] = 1;
  FUN_00000544(unaff_r4 + 0xf6,DAT_00000674,6);
  iVar9 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      unaff_r4[0xfc] = 0x32;
      unaff_r4[0xfd] = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar9 = 0x102;
    }
    pcVar7 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && ((cVar1 != '\a' && (cVar1 != '\b')))) {
      unaff_r4[iVar9] = 0x36;
      (unaff_r4 + iVar9)[1] = 4;
      FUN_000005a0(unaff_r4 + iVar9 + 2,pcVar7 + 4);
      iVar9 = iVar9 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  unaff_r4[iVar9] = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar9 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  (unaff_r4 + iVar9)[1] = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar9 = (uVar3 & 0xff) + iVar9 + 2;
  if (**DAT_0000066c != '\0') {
    unaff_r4[iVar9] = 0x3c;
    puVar4 = unaff_r4 + iVar9;
    uVar3 = FUN_000005da(puVar4 + 2,*ppcVar2);
    iVar9 = (uVar3 & 0xff) + iVar9 + 2;
    puVar4[1] = (char)(uVar3 & 0xff);
  }
  unaff_r4[iVar9] = 0x37;
  puVar4 = unaff_r4 + iVar9;
  puVar4[2] = 1;
  puVar4[3] = 3;
  puVar4[4] = 6;
  puVar4[5] = 0xc;
  puVar4[6] = 0x33;
  puVar4[7] = 0x3a;
  puVar4[8] = 0x3b;
  iVar6 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    unaff_r4[iVar9 + 9] = 0x43;
    iVar6 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar8 = iVar9 + iVar6;
    iVar6 = iVar6 + 1;
    unaff_r4[iVar8 + 2] = 0x2a;
  }
  iVar9 = iVar9 + iVar6 + 2;
  puVar4[1] = (char)iVar6;
LAB_00000634:
  unaff_r4[iVar9] = 0xff;
  pcVar7 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar7 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar7,0x43);
  return;
}



void FUN_000004d2(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int unaff_r4;
  int unaff_r5;
  int iVar9;
  int unaff_r6;
  int unaff_r7;
  
  FUN_000004d2();
  FUN_000004dc(unaff_r4 + 8,(uint)*(ushort *)(unaff_r5 + 2));
  if (unaff_r6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x8000;
  }
  FUN_000004f0(unaff_r4 + 10,uVar5);
  cVar1 = *DAT_00000668;
  if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\b')) {
    FUN_0000050c(unaff_r4 + 0xc,DAT_00000670,4);
  }
  FUN_00000518(unaff_r4 + 0x1c,DAT_00000674,6);
  FUN_00000522(unaff_r4 + 0xec,DAT_00000678);
  *(undefined *)(unaff_r4 + 0xf0) = 0x35;
  *(undefined *)(unaff_r4 + 0xf1) = 1;
  *(undefined *)(unaff_r4 + 0xf2) = (char)unaff_r7;
  *(undefined *)(unaff_r4 + 0xf3) = 0x3d;
  *(undefined *)(unaff_r4 + 0xf4) = 7;
  *(undefined *)(unaff_r4 + 0xf5) = 1;
  FUN_00000544(unaff_r4 + 0xf6,DAT_00000674,6);
  iVar9 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      *(undefined *)(unaff_r4 + 0xfc) = 0x32;
      *(undefined *)(unaff_r4 + 0xfd) = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar9 = 0x102;
    }
    pcVar7 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && ((cVar1 != '\a' && (cVar1 != '\b')))) {
      *(undefined *)(unaff_r4 + iVar9) = 0x36;
      *(undefined *)(unaff_r4 + iVar9 + 1) = 4;
      FUN_000005a0(unaff_r4 + iVar9 + 2,pcVar7 + 4);
      iVar9 = iVar9 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  *(undefined *)(unaff_r4 + iVar9) = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar9 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  *(undefined *)(unaff_r4 + iVar9 + 1) = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar9 = (uVar3 & 0xff) + iVar9 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar9) = 0x3c;
    iVar4 = unaff_r4 + iVar9;
    uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
    iVar9 = (uVar3 & 0xff) + iVar9 + 2;
    *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar9) = 0x37;
  iVar4 = unaff_r4 + iVar9;
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 3;
  *(undefined *)(iVar4 + 4) = 6;
  *(undefined *)(iVar4 + 5) = 0xc;
  *(undefined *)(iVar4 + 6) = 0x33;
  *(undefined *)(iVar4 + 7) = 0x3a;
  *(undefined *)(iVar4 + 8) = 0x3b;
  iVar6 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    *(undefined *)(iVar9 + unaff_r4 + 9) = 0x43;
    iVar6 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar8 = iVar9 + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined *)(iVar8 + unaff_r4 + 2) = 0x2a;
  }
  iVar9 = iVar9 + iVar6 + 2;
  *(undefined *)(iVar4 + 1) = (char)iVar6;
LAB_00000634:
  *(undefined *)(unaff_r4 + iVar9) = 0xff;
  pcVar7 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar7 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar7,0x43);
  return;
}



void FUN_000004dc(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int unaff_r4;
  int iVar9;
  int unaff_r6;
  int unaff_r7;
  
  FUN_000004dc();
  if (unaff_r6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x8000;
  }
  FUN_000004f0(unaff_r4 + 10,uVar5);
  cVar1 = *DAT_00000668;
  if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\b')) {
    FUN_0000050c(unaff_r4 + 0xc,DAT_00000670,4);
  }
  FUN_00000518(unaff_r4 + 0x1c,DAT_00000674,6);
  FUN_00000522(unaff_r4 + 0xec,DAT_00000678);
  *(undefined *)(unaff_r4 + 0xf0) = 0x35;
  *(undefined *)(unaff_r4 + 0xf1) = 1;
  *(undefined *)(unaff_r4 + 0xf2) = (char)unaff_r7;
  *(undefined *)(unaff_r4 + 0xf3) = 0x3d;
  *(undefined *)(unaff_r4 + 0xf4) = 7;
  *(undefined *)(unaff_r4 + 0xf5) = 1;
  FUN_00000544(unaff_r4 + 0xf6,DAT_00000674,6);
  iVar9 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      *(undefined *)(unaff_r4 + 0xfc) = 0x32;
      *(undefined *)(unaff_r4 + 0xfd) = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar9 = 0x102;
    }
    pcVar7 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && ((cVar1 != '\a' && (cVar1 != '\b')))) {
      *(undefined *)(unaff_r4 + iVar9) = 0x36;
      *(undefined *)(unaff_r4 + iVar9 + 1) = 4;
      FUN_000005a0(unaff_r4 + iVar9 + 2,pcVar7 + 4);
      iVar9 = iVar9 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  *(undefined *)(unaff_r4 + iVar9) = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar9 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  *(undefined *)(unaff_r4 + iVar9 + 1) = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar9 = (uVar3 & 0xff) + iVar9 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar9) = 0x3c;
    iVar4 = unaff_r4 + iVar9;
    uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
    iVar9 = (uVar3 & 0xff) + iVar9 + 2;
    *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar9) = 0x37;
  iVar4 = unaff_r4 + iVar9;
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 3;
  *(undefined *)(iVar4 + 4) = 6;
  *(undefined *)(iVar4 + 5) = 0xc;
  *(undefined *)(iVar4 + 6) = 0x33;
  *(undefined *)(iVar4 + 7) = 0x3a;
  *(undefined *)(iVar4 + 8) = 0x3b;
  iVar6 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    *(undefined *)(iVar9 + unaff_r4 + 9) = 0x43;
    iVar6 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar8 = iVar9 + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined *)(iVar8 + unaff_r4 + 2) = 0x2a;
  }
  iVar9 = iVar9 + iVar6 + 2;
  *(undefined *)(iVar4 + 1) = (char)iVar6;
LAB_00000634:
  *(undefined *)(unaff_r4 + iVar9) = 0xff;
  pcVar7 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar7 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar7,0x43);
  return;
}



void FUN_000004f0(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int unaff_r6;
  int unaff_r7;
  
  FUN_000004f0();
  cVar1 = *DAT_00000668;
  if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\b')) {
    FUN_0000050c(unaff_r4 + 0xc,DAT_00000670,4);
  }
  FUN_00000518(unaff_r4 + 0x1c,DAT_00000674,6);
  FUN_00000522(unaff_r4 + 0xec,DAT_00000678);
  *(undefined *)(unaff_r4 + 0xf0) = 0x35;
  *(undefined *)(unaff_r4 + 0xf1) = 1;
  *(undefined *)(unaff_r4 + 0xf2) = (char)unaff_r7;
  *(undefined *)(unaff_r4 + 0xf3) = 0x3d;
  *(undefined *)(unaff_r4 + 0xf4) = 7;
  *(undefined *)(unaff_r4 + 0xf5) = 1;
  FUN_00000544(unaff_r4 + 0xf6,DAT_00000674,6);
  iVar8 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      *(undefined *)(unaff_r4 + 0xfc) = 0x32;
      *(undefined *)(unaff_r4 + 0xfd) = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar8 = 0x102;
    }
    pcVar6 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if (((cVar1 != '\x01') && (cVar1 != '\x02')) && ((cVar1 != '\a' && (cVar1 != '\b')))) {
      *(undefined *)(unaff_r4 + iVar8) = 0x36;
      *(undefined *)(unaff_r4 + iVar8 + 1) = 4;
      FUN_000005a0(unaff_r4 + iVar8 + 2,pcVar6 + 4);
      iVar8 = iVar8 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  *(undefined *)(unaff_r4 + iVar8) = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar8 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  *(undefined *)(unaff_r4 + iVar8 + 1) = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar8 = (uVar3 & 0xff) + iVar8 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar8) = 0x3c;
    iVar4 = unaff_r4 + iVar8;
    uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
    iVar8 = (uVar3 & 0xff) + iVar8 + 2;
    *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar8) = 0x37;
  iVar4 = unaff_r4 + iVar8;
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 3;
  *(undefined *)(iVar4 + 4) = 6;
  *(undefined *)(iVar4 + 5) = 0xc;
  *(undefined *)(iVar4 + 6) = 0x33;
  *(undefined *)(iVar4 + 7) = 0x3a;
  *(undefined *)(iVar4 + 8) = 0x3b;
  iVar5 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    *(undefined *)(iVar8 + unaff_r4 + 9) = 0x43;
    iVar5 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar7 = iVar8 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined *)(iVar7 + unaff_r4 + 2) = 0x2a;
  }
  iVar8 = iVar8 + iVar5 + 2;
  *(undefined *)(iVar4 + 1) = (char)iVar5;
LAB_00000634:
  *(undefined *)(unaff_r4 + iVar8) = 0xff;
  pcVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar6,0x43);
  return;
}



void FUN_0000050c(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int unaff_r6;
  int unaff_r7;
  
  FUN_0000050c();
  FUN_00000518(unaff_r4 + 0x1c,DAT_00000674,6);
  FUN_00000522(unaff_r4 + 0xec,DAT_00000678);
  *(undefined *)(unaff_r4 + 0xf0) = 0x35;
  *(undefined *)(unaff_r4 + 0xf1) = 1;
  *(undefined *)(unaff_r4 + 0xf2) = (char)unaff_r7;
  *(undefined *)(unaff_r4 + 0xf3) = 0x3d;
  *(undefined *)(unaff_r4 + 0xf4) = 7;
  *(undefined *)(unaff_r4 + 0xf5) = 1;
  FUN_00000544(unaff_r4 + 0xf6,DAT_00000674,6);
  iVar8 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      *(undefined *)(unaff_r4 + 0xfc) = 0x32;
      *(undefined *)(unaff_r4 + 0xfd) = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar8 = 0x102;
    }
    pcVar6 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if ((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) && (cVar1 != '\b')) {
      *(undefined *)(unaff_r4 + iVar8) = 0x36;
      *(undefined *)(unaff_r4 + iVar8 + 1) = 4;
      FUN_000005a0(unaff_r4 + iVar8 + 2,pcVar6 + 4);
      iVar8 = iVar8 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  *(undefined *)(unaff_r4 + iVar8) = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar8 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  *(undefined *)(unaff_r4 + iVar8 + 1) = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar8 = (uVar3 & 0xff) + iVar8 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar8) = 0x3c;
    iVar4 = unaff_r4 + iVar8;
    uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
    iVar8 = (uVar3 & 0xff) + iVar8 + 2;
    *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar8) = 0x37;
  iVar4 = unaff_r4 + iVar8;
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 3;
  *(undefined *)(iVar4 + 4) = 6;
  *(undefined *)(iVar4 + 5) = 0xc;
  *(undefined *)(iVar4 + 6) = 0x33;
  *(undefined *)(iVar4 + 7) = 0x3a;
  *(undefined *)(iVar4 + 8) = 0x3b;
  iVar5 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    *(undefined *)(iVar8 + unaff_r4 + 9) = 0x43;
    iVar5 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar7 = iVar8 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined *)(iVar7 + unaff_r4 + 2) = 0x2a;
  }
  iVar8 = iVar8 + iVar5 + 2;
  *(undefined *)(iVar4 + 1) = (char)iVar5;
LAB_00000634:
  *(undefined *)(unaff_r4 + iVar8) = 0xff;
  pcVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar6,0x43);
  return;
}



void FUN_00000518(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000518();
  FUN_00000522(unaff_r4 + 0xec,DAT_00000678);
  *(undefined *)(unaff_r4 + 0xf0) = 0x35;
  *(undefined *)(unaff_r4 + 0xf1) = 1;
  *(undefined *)(unaff_r4 + 0xf2) = (char)unaff_r7;
  *(undefined *)(unaff_r4 + 0xf3) = 0x3d;
  *(undefined *)(unaff_r4 + 0xf4) = 7;
  *(undefined *)(unaff_r4 + 0xf5) = 1;
  FUN_00000544(unaff_r4 + 0xf6,DAT_00000674,6);
  iVar8 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      *(undefined *)(unaff_r4 + 0xfc) = 0x32;
      *(undefined *)(unaff_r4 + 0xfd) = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar8 = 0x102;
    }
    pcVar6 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if ((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) && (cVar1 != '\b')) {
      *(undefined *)(unaff_r4 + iVar8) = 0x36;
      *(undefined *)(unaff_r4 + iVar8 + 1) = 4;
      FUN_000005a0(unaff_r4 + iVar8 + 2,pcVar6 + 4);
      iVar8 = iVar8 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  *(undefined *)(unaff_r4 + iVar8) = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar8 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  *(undefined *)(unaff_r4 + iVar8 + 1) = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar8 = (uVar3 & 0xff) + iVar8 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar8) = 0x3c;
    iVar4 = unaff_r4 + iVar8;
    uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
    iVar8 = (uVar3 & 0xff) + iVar8 + 2;
    *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar8) = 0x37;
  iVar4 = unaff_r4 + iVar8;
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 3;
  *(undefined *)(iVar4 + 4) = 6;
  *(undefined *)(iVar4 + 5) = 0xc;
  *(undefined *)(iVar4 + 6) = 0x33;
  *(undefined *)(iVar4 + 7) = 0x3a;
  *(undefined *)(iVar4 + 8) = 0x3b;
  iVar5 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    *(undefined *)(iVar8 + unaff_r4 + 9) = 0x43;
    iVar5 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar7 = iVar8 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined *)(iVar7 + unaff_r4 + 2) = 0x2a;
  }
  iVar8 = iVar8 + iVar5 + 2;
  *(undefined *)(iVar4 + 1) = (char)iVar5;
LAB_00000634:
  *(undefined *)(unaff_r4 + iVar8) = 0xff;
  pcVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar6,0x43);
  return;
}



void FUN_00000522(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000522();
  *(undefined *)(unaff_r4 + 0xf0) = 0x35;
  *(undefined *)(unaff_r4 + 0xf1) = 1;
  *(undefined *)(unaff_r4 + 0xf2) = (char)unaff_r7;
  *(undefined *)(unaff_r4 + 0xf3) = 0x3d;
  *(undefined *)(unaff_r4 + 0xf4) = 7;
  *(undefined *)(unaff_r4 + 0xf5) = 1;
  FUN_00000544(unaff_r4 + 0xf6,DAT_00000674,6);
  iVar8 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      *(undefined *)(unaff_r4 + 0xfc) = 0x32;
      *(undefined *)(unaff_r4 + 0xfd) = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar8 = 0x102;
    }
    pcVar6 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if ((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) && (cVar1 != '\b')) {
      *(undefined *)(unaff_r4 + iVar8) = 0x36;
      *(undefined *)(unaff_r4 + iVar8 + 1) = 4;
      FUN_000005a0(unaff_r4 + iVar8 + 2,pcVar6 + 4);
      iVar8 = iVar8 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  *(undefined *)(unaff_r4 + iVar8) = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar8 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  *(undefined *)(unaff_r4 + iVar8 + 1) = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar8 = (uVar3 & 0xff) + iVar8 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar8) = 0x3c;
    iVar4 = unaff_r4 + iVar8;
    uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
    iVar8 = (uVar3 & 0xff) + iVar8 + 2;
    *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar8) = 0x37;
  iVar4 = unaff_r4 + iVar8;
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 3;
  *(undefined *)(iVar4 + 4) = 6;
  *(undefined *)(iVar4 + 5) = 0xc;
  *(undefined *)(iVar4 + 6) = 0x33;
  *(undefined *)(iVar4 + 7) = 0x3a;
  *(undefined *)(iVar4 + 8) = 0x3b;
  iVar5 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    *(undefined *)(iVar8 + unaff_r4 + 9) = 0x43;
    iVar5 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar7 = iVar8 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined *)(iVar7 + unaff_r4 + 2) = 0x2a;
  }
  iVar8 = iVar8 + iVar5 + 2;
  *(undefined *)(iVar4 + 1) = (char)iVar5;
LAB_00000634:
  *(undefined *)(unaff_r4 + iVar8) = 0xff;
  pcVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar6,0x43);
  return;
}



void FUN_00000544(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000544();
  iVar8 = 0xfc;
  if (unaff_r7 != 1) {
    if ((unaff_r7 != 3) && (unaff_r7 != 4)) goto LAB_00000634;
    if ((*DAT_00000668 != '\a') && (*DAT_00000668 != '\b')) {
      *(undefined *)(unaff_r4 + 0xfc) = 0x32;
      *(undefined *)(unaff_r4 + 0xfd) = 4;
      FUN_00000576(unaff_r4 + 0xfe,DAT_00000668 + 8,4);
      iVar8 = 0x102;
    }
    pcVar6 = DAT_00000668;
    cVar1 = *DAT_00000668;
    if ((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) && (cVar1 != '\b')) {
      *(undefined *)(unaff_r4 + iVar8) = 0x36;
      *(undefined *)(unaff_r4 + iVar8 + 1) = 4;
      FUN_000005a0(unaff_r4 + iVar8 + 2,pcVar6 + 4);
      iVar8 = iVar8 + 6;
    }
    if (unaff_r7 == 4) goto LAB_00000634;
  }
  *(undefined *)(unaff_r4 + iVar8) = 0xc;
  uVar3 = FUN_000005b6(unaff_r4 + iVar8 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
  *(undefined *)(unaff_r4 + iVar8 + 1) = (char)(uVar3 & 0xff);
  ppcVar2 = DAT_0000066c;
  iVar8 = (uVar3 & 0xff) + iVar8 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar8) = 0x3c;
    iVar4 = unaff_r4 + iVar8;
    uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
    iVar8 = (uVar3 & 0xff) + iVar8 + 2;
    *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar8) = 0x37;
  iVar4 = unaff_r4 + iVar8;
  *(undefined *)(iVar4 + 2) = 1;
  *(undefined *)(iVar4 + 3) = 3;
  *(undefined *)(iVar4 + 4) = 6;
  *(undefined *)(iVar4 + 5) = 0xc;
  *(undefined *)(iVar4 + 6) = 0x33;
  *(undefined *)(iVar4 + 7) = 0x3a;
  *(undefined *)(iVar4 + 8) = 0x3b;
  iVar5 = 7;
  if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
    *(undefined *)(iVar8 + unaff_r4 + 9) = 0x43;
    iVar5 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
    iVar7 = iVar8 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined *)(iVar7 + unaff_r4 + 2) = 0x2a;
  }
  iVar8 = iVar8 + iVar5 + 2;
  *(undefined *)(iVar4 + 1) = (char)iVar5;
LAB_00000634:
  *(undefined *)(unaff_r4 + iVar8) = 0xff;
  pcVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar6,0x43);
  return;
}



void FUN_00000576(void)

{
  char cVar1;
  char **ppcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_r4;
  int iVar8;
  int unaff_r6;
  int unaff_r7;
  
  FUN_00000576();
  pcVar6 = DAT_00000668;
  iVar8 = 0x102;
  cVar1 = *DAT_00000668;
  if ((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\a')) && (cVar1 != '\b')) {
    *(undefined *)(unaff_r4 + 0x102) = 0x36;
    *(undefined *)(unaff_r4 + 0x103) = 4;
    FUN_000005a0(unaff_r4 + 0x104,pcVar6 + 4);
    iVar8 = 0x108;
  }
  if (unaff_r7 != 4) {
    *(undefined *)(unaff_r4 + iVar8) = 0xc;
    uVar3 = FUN_000005b6(unaff_r4 + iVar8 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
    *(undefined *)(unaff_r4 + iVar8 + 1) = (char)(uVar3 & 0xff);
    ppcVar2 = DAT_0000066c;
    iVar8 = (uVar3 & 0xff) + iVar8 + 2;
    if (**DAT_0000066c != '\0') {
      *(undefined *)(unaff_r4 + iVar8) = 0x3c;
      iVar4 = unaff_r4 + iVar8;
      uVar3 = FUN_000005da(iVar4 + 2,*ppcVar2);
      iVar8 = (uVar3 & 0xff) + iVar8 + 2;
      *(undefined *)(iVar4 + 1) = (char)(uVar3 & 0xff);
    }
    *(undefined *)(unaff_r4 + iVar8) = 0x37;
    iVar4 = unaff_r4 + iVar8;
    *(undefined *)(iVar4 + 2) = 1;
    *(undefined *)(iVar4 + 3) = 3;
    *(undefined *)(iVar4 + 4) = 6;
    *(undefined *)(iVar4 + 5) = 0xc;
    *(undefined *)(iVar4 + 6) = 0x33;
    *(undefined *)(iVar4 + 7) = 0x3a;
    *(undefined *)(iVar4 + 8) = 0x3b;
    iVar5 = 7;
    if ((*(byte *)(ppcVar2 + 1) & 1) != 0) {
      *(undefined *)(iVar8 + unaff_r4 + 9) = 0x43;
      iVar5 = 8;
    }
    if ((int)((uint)*(byte *)(ppcVar2 + 1) << 0x1e) < 0) {
      iVar7 = iVar8 + iVar5;
      iVar5 = iVar5 + 1;
      *(undefined *)(iVar7 + unaff_r4 + 2) = 0x2a;
    }
    iVar8 = iVar8 + iVar5 + 2;
    *(undefined *)(iVar4 + 1) = (char)iVar5;
  }
  *(undefined *)(unaff_r4 + iVar8) = 0xff;
  pcVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    pcVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)(byte)DAT_00000668[1],pcVar6,0x43);
  return;
}



void FUN_000005a0(void)

{
  char **ppcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  int unaff_r5;
  int iVar6;
  int unaff_r6;
  int unaff_r7;
  
  FUN_000005a0();
  iVar6 = unaff_r5 + 6;
  if (unaff_r7 != 4) {
    *(undefined *)(unaff_r4 + iVar6) = 0xc;
    uVar2 = FUN_000005b6(unaff_r4 + iVar6 + 2,*(undefined4 *)(DAT_0000067c + 0xc));
    *(undefined *)(unaff_r4 + iVar6 + 1) = (char)(uVar2 & 0xff);
    ppcVar1 = DAT_0000066c;
    iVar6 = (uVar2 & 0xff) + unaff_r5 + 8;
    if (**DAT_0000066c != '\0') {
      *(undefined *)(unaff_r4 + iVar6) = 0x3c;
      iVar3 = unaff_r4 + iVar6;
      uVar2 = FUN_000005da(iVar3 + 2,*ppcVar1);
      iVar6 = (uVar2 & 0xff) + iVar6 + 2;
      *(undefined *)(iVar3 + 1) = (char)(uVar2 & 0xff);
    }
    *(undefined *)(unaff_r4 + iVar6) = 0x37;
    iVar3 = unaff_r4 + iVar6;
    *(undefined *)(iVar3 + 2) = 1;
    *(undefined *)(iVar3 + 3) = 3;
    *(undefined *)(iVar3 + 4) = 6;
    *(undefined *)(iVar3 + 5) = 0xc;
    *(undefined *)(iVar3 + 6) = 0x33;
    *(undefined *)(iVar3 + 7) = 0x3a;
    *(undefined *)(iVar3 + 8) = 0x3b;
    iVar4 = 7;
    if ((*(byte *)(ppcVar1 + 1) & 1) != 0) {
      *(undefined *)(iVar6 + unaff_r4 + 9) = 0x43;
      iVar4 = 8;
    }
    if ((int)((uint)*(byte *)(ppcVar1 + 1) << 0x1e) < 0) {
      iVar5 = iVar6 + iVar4;
      iVar4 = iVar4 + 1;
      *(undefined *)(iVar5 + unaff_r4 + 2) = 0x2a;
    }
    iVar6 = iVar6 + iVar4 + 2;
    *(undefined *)(iVar3 + 1) = (char)iVar4;
  }
  *(undefined *)(unaff_r4 + iVar6) = 0xff;
  iVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    iVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)*(byte *)(DAT_00000668 + 1),iVar6,0x43);
  return;
}



void FUN_000005b6(void)

{
  char **ppcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_r4;
  int unaff_r5;
  int iVar6;
  int unaff_r6;
  int unaff_r7;
  
  uVar2 = FUN_000005b6();
  *(undefined *)(unaff_r7 + 1) = (char)(uVar2 & 0xff);
  ppcVar1 = DAT_0000066c;
  iVar6 = (uVar2 & 0xff) + unaff_r5 + 2;
  if (**DAT_0000066c != '\0') {
    *(undefined *)(unaff_r4 + iVar6) = 0x3c;
    iVar3 = unaff_r4 + iVar6;
    uVar2 = FUN_000005da(iVar3 + 2,*ppcVar1);
    iVar6 = (uVar2 & 0xff) + iVar6 + 2;
    *(undefined *)(iVar3 + 1) = (char)(uVar2 & 0xff);
  }
  *(undefined *)(unaff_r4 + iVar6) = 0x37;
  iVar3 = unaff_r4 + iVar6;
  *(undefined *)(iVar3 + 2) = 1;
  *(undefined *)(iVar3 + 3) = 3;
  *(undefined *)(iVar3 + 4) = 6;
  *(undefined *)(iVar3 + 5) = 0xc;
  *(undefined *)(iVar3 + 6) = 0x33;
  *(undefined *)(iVar3 + 7) = 0x3a;
  *(undefined *)(iVar3 + 8) = 0x3b;
  iVar4 = 7;
  if ((*(byte *)(ppcVar1 + 1) & 1) != 0) {
    *(undefined *)(iVar6 + unaff_r4 + 9) = 0x43;
    iVar4 = 8;
  }
  if ((int)((uint)*(byte *)(ppcVar1 + 1) << 0x1e) < 0) {
    iVar5 = iVar6 + iVar4;
    iVar4 = iVar4 + 1;
    *(undefined *)(iVar5 + unaff_r4 + 2) = 0x2a;
  }
  *(undefined *)(iVar3 + 1) = (char)iVar4;
  *(undefined *)(unaff_r4 + iVar6 + iVar4 + 2) = 0xff;
  iVar6 = DAT_00000680;
  if (unaff_r6 == 0) {
    iVar6 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)*(byte *)(DAT_00000668 + 1),iVar6,0x43);
  return;
}



void FUN_000005da(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int iVar5;
  int unaff_r6;
  int unaff_r7;
  int param_5;
  
  uVar1 = FUN_000005da();
  iVar5 = (uVar1 & 0xff) + unaff_r5 + 2;
  *(undefined *)(param_5 + 1) = (char)(uVar1 & 0xff);
  *(undefined *)(unaff_r4 + iVar5) = 0x37;
  iVar2 = unaff_r4 + iVar5;
  *(undefined *)(iVar2 + 2) = 1;
  *(undefined *)(iVar2 + 3) = 3;
  *(undefined *)(iVar2 + 4) = 6;
  *(undefined *)(iVar2 + 5) = 0xc;
  *(undefined *)(iVar2 + 6) = 0x33;
  *(undefined *)(iVar2 + 7) = 0x3a;
  *(undefined *)(iVar2 + 8) = 0x3b;
  iVar3 = 7;
  if ((*(byte *)(unaff_r7 + 4) & 1) != 0) {
    *(undefined *)(iVar5 + unaff_r4 + 9) = 0x43;
    iVar3 = 8;
  }
  if ((int)((uint)*(byte *)(unaff_r7 + 4) << 0x1e) < 0) {
    iVar4 = iVar5 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined *)(iVar4 + unaff_r4 + 2) = 0x2a;
  }
  *(undefined *)(iVar2 + 1) = (char)iVar3;
  *(undefined *)(unaff_r4 + iVar5 + iVar3 + 2) = 0xff;
  iVar2 = DAT_00000680;
  if (unaff_r6 == 0) {
    iVar2 = DAT_00000668 + 4;
  }
  FUN_0000065e((uint)*(byte *)(DAT_00000668 + 1),iVar2,0x43);
  return;
}



void FUN_0000065e(void)

{
  FUN_0000065e();
  return;
}



int FUN_000006ae(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  iVar1 = FUN_000006ae();
  uVar2 = FUN_000006ba(iVar1 * 5,10);
  *(undefined4 *)(unaff_r6 + 0x10) = uVar2;
  *(uint *)(unaff_r6 + 0x14) = (uint)(iVar1 * 7) >> 3;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5 + 2;
}



int FUN_000006ba(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  uVar1 = FUN_000006ba();
  *(undefined4 *)(unaff_r6 + 0x10) = uVar1;
  *(uint *)(unaff_r6 + 0x14) = (uint)(unaff_r7 * 7) >> 3;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5 + 2;
}



int FUN_000006ca(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  uVar1 = FUN_000006ca();
  *(undefined4 *)(unaff_r6 + 0x10) = uVar1;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5 + 2;
}



int FUN_000006d4(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  
  uVar1 = FUN_000006d4();
  *(undefined4 *)(unaff_r6 + 0x14) = uVar1;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5 + 2;
}



int FUN_000006e2(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_000006e2();
  FUN_000006ee(DAT_0000070c + -4,unaff_r4 + 2,(uint)*(byte *)(unaff_r4 + 1));
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5 + 2;
}



int FUN_000006ee(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_000006ee();
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5 + 2;
}



int FUN_00000762(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_00000762();
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5;
}



void FUN_00000770(void)

{
  int unaff_r4;
  
  FUN_00000770();
  FUN_00000762(DAT_000007ec + 4,unaff_r4 + 2,(uint)*(byte *)(unaff_r4 + 1));
  return;
}



int FUN_00000780(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  iVar1 = FUN_00000780();
  uVar2 = FUN_0000078c(iVar1 * 5,10);
  *(undefined4 *)(unaff_r7 + 0x10) = uVar2;
  *(uint *)(unaff_r7 + 0x14) = (uint)(iVar1 * 7) >> 3;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5;
}



int FUN_0000078c(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  
  uVar1 = FUN_0000078c();
  *(undefined4 *)(unaff_r7 + 0x10) = uVar1;
  *(uint *)(unaff_r7 + 0x14) = (uint)(unaff_r6 * 7) >> 3;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5;
}



int FUN_0000079c(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  uVar1 = FUN_0000079c();
  *(undefined4 *)(unaff_r7 + 0x10) = uVar1;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5;
}



int FUN_000007a6(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  uVar1 = FUN_000007a6();
  *(undefined4 *)(unaff_r7 + 0x14) = uVar1;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5;
}



int FUN_000007be(void)

{
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined unaff_r7;
  
  FUN_000007be();
  *(undefined *)((uint)*(byte *)(unaff_r4 + 1) + unaff_r6 + unaff_r5) = unaff_r7;
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5;
}



int FUN_000007d0(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_000007d0();
  return (uint)*(byte *)(unaff_r4 + 1) + unaff_r5;
}



int FUN_0000080c(void)

{
  int unaff_r4;
  int unaff_r5;
  
  FUN_0000080c();
  return (uint)*(byte *)(unaff_r5 + 1) + unaff_r4 + 2;
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
                    // WARNING: Could not recover jumptable at 0x0000084c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


