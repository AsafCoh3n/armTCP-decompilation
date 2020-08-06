typedef unsigned char   undefined;

typedef unsigned int    undefined4;



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



uint FUN_000000e2(void)

{
  uint uVar1;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  
  uVar1 = FUN_000000e2();
  *(undefined *)(unaff_r4 + 3) = (char)(uVar1 & 0xff);
  *(undefined *)(unaff_r4 + 10) = (char)unaff_r5;
  uVar1 = (uVar1 & 0xff) + unaff_r5 + 1;
  if (uVar1 < 0x7f) {
    *(undefined *)(unaff_r4 + 9) = (char)uVar1;
  }
  return unaff_r6 & 0xffff;
}



uint FUN_00000114(void)

{
  undefined uVar1;
  int unaff_r4;
  uint unaff_r6;
  
  uVar1 = FUN_00000114();
  *(undefined *)(unaff_r4 + 3) = uVar1;
  return unaff_r6 & 0xffff;
}



void FUN_00000204(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_00000204();
  FUN_0000020e();
  iVar1 = FUN_00000214();
  if (iVar1 == 0) {
    FUN_00000230(unaff_r4 + 4,0,6);
  }
  else {
    FUN_00000220(unaff_r4 + 4,iVar1,6);
  }
  return;
}



void FUN_0000020e(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_0000020e();
  iVar1 = FUN_00000214();
  if (iVar1 == 0) {
    FUN_00000230(unaff_r4 + 4,0,6);
  }
  else {
    FUN_00000220(unaff_r4 + 4,iVar1,6);
  }
  return;
}



void FUN_00000214(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_00000214();
  if (iVar1 == 0) {
    FUN_00000230(unaff_r4 + 4,0,6);
  }
  else {
    FUN_00000220(unaff_r4 + 4,iVar1,6);
  }
  return;
}



void FUN_00000220(void)

{
  FUN_00000220();
  return;
}



void FUN_00000230(void)

{
  FUN_00000230();
  return;
}



void FUN_00000298(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined uVar1;
  int iVar2;
  undefined *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  
  while( true ) {
    iVar2 = FUN_00000298(param_1,param_2,param_3,param_4);
    unaff_r4[1] = (char)iVar2;
    *unaff_r4 = 1;
    uVar1 = (undefined)unaff_r7;
    if ((iVar2 != 0) && (iVar2 = FUN_000002a8(iVar2,(uint)*(ushort *)(unaff_r5 + 8)), iVar2 == 1)) {
      *unaff_r4 = uVar1;
    }
    unaff_r6 = unaff_r6 + 1;
    if ((int)(uint)*(byte *)(unaff_r5 + 4) < unaff_r6) break;
    unaff_r4[0x173] = uVar1;
    unaff_r4[0x172] = uVar1;
    *(short *)(unaff_r4 + 0x174) = (short)unaff_r7;
    unaff_r4[0x177] = uVar1;
    unaff_r4[0x178] = uVar1;
    unaff_r4[0x17a] = uVar1;
    unaff_r4[0x179] = uVar1;
    unaff_r4[0x260] = uVar1;
    param_3 = (uint)*(ushort *)(unaff_r5 + 10);
    param_1 = 1;
    if (*(ushort *)(unaff_r5 + 10) == 0) {
      param_1 = 0x11;
    }
    param_2 = 0;
    param_4 = DAT_000002c8;
    unaff_r4 = unaff_r4 + 0x170;
  }
  return;
}



void FUN_000002a8(int param_1,uint param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *unaff_r4;
  undefined *puVar4;
  int unaff_r5;
  int unaff_r6;
  undefined4 unaff_r7;
  
  do {
    iVar3 = FUN_000002a8(param_1,param_2);
    uVar1 = (undefined)unaff_r7;
    puVar4 = unaff_r4;
    if (iVar3 == 1) {
      *unaff_r4 = uVar1;
    }
    do {
      unaff_r4 = puVar4 + 0x170;
      unaff_r6 = unaff_r6 + 1;
      if ((int)(uint)*(byte *)(unaff_r5 + 4) < unaff_r6) {
        return;
      }
      puVar4[0x173] = uVar1;
      puVar4[0x172] = uVar1;
      *(short *)(puVar4 + 0x174) = (short)unaff_r7;
      puVar4[0x177] = uVar1;
      puVar4[0x178] = uVar1;
      puVar4[0x17a] = uVar1;
      puVar4[0x179] = uVar1;
      puVar4[0x260] = uVar1;
      uVar2 = 1;
      if (*(ushort *)(unaff_r5 + 10) == 0) {
        uVar2 = 0x11;
      }
      param_1 = FUN_00000298(uVar2,0,(uint)*(ushort *)(unaff_r5 + 10),DAT_000002c8);
      puVar4[0x171] = (char)param_1;
      *unaff_r4 = 1;
      puVar4 = unaff_r4;
    } while (param_1 == 0);
    param_2 = (uint)*(ushort *)(unaff_r5 + 8);
  } while( true );
}



undefined4 FUN_00000334(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *unaff_r5;
  
  while( true ) {
    uVar1 = FUN_00000334(param_1,param_2);
    do {
      iVar2 = param_4;
      param_4 = iVar2 + 1;
      if ((int)(uint)*(byte *)(unaff_r5 + 1) <= param_4) {
        return 0;
      }
    } while ((uint)*(byte *)(*unaff_r5 + param_4 * 0x170 + 1) != uVar1);
    param_1 = iVar2 + 2U & 0xff;
    if (param_1 == 0) break;
    *(undefined *)(DAT_000003c8 + 1) = (char)param_1;
    param_2 = param_1 * 0x170 + -0x170;
    param_4 = param_3;
  }
  return 0;
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Possible PIC construction at 0x000004e8: Changing call to branch
// WARNING: Possible PIC construction at 0x000004c8: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000004ec)
// WARNING: Removing unreachable block (ram,0x000004cc)
// WARNING: Removing unreachable block (ram,0x000004d0)

void FUN_00000468(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  piVar4 = DAT_00000854;
  uVar7 = 0;
  while( true ) {
    pbVar6 = DAT_00000858;
    if (*(byte *)(piVar4 + 1) <= uVar7) {
      return;
    }
    bVar1 = *DAT_00000858;
    *DAT_00000858 = bVar1 + 1;
    if (*(byte *)(piVar4 + 1) < (byte)(bVar1 + 1)) {
      *pbVar6 = 1;
    }
    bVar1 = *pbVar6;
    pbVar6[1] = bVar1;
    pbVar6 = (byte *)(*piVar4 + (uint)bVar1 * 0x170 + -0x170);
    bVar2 = *pbVar6;
    if ((bVar2 == 0) || (bVar2 == 2)) break;
    uVar5 = (uint)pbVar6[2];
    if (-1 < (int)(uVar5 << 0x1e)) {
      if (-1 < (int)(uVar5 << 0x1d)) {
        FUN_000004f8((uint)bVar1,(uint)bVar2 - 3,uVar5,(uint)bVar2 - 3);
                    // WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
      }
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if ((((*(byte *)(DAT_0000085c + 0xc) & 1) != 0) && ((int)(uVar5 << 0x1a) < 0)) &&
       (sVar3 = *(short *)(pbVar6 + 4), *(short *)(pbVar6 + 4) = sVar3 + -1,
       (short)(sVar3 + -1) == 0)) {
      pbVar6[2] = pbVar6[2] & 0xdf;
    }
    uVar7 = uVar7 + 1;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Possible PIC construction at 0x000004d4: Changing call to branch
// WARNING: Possible PIC construction at 0x000004ee: Changing call to branch
// WARNING: Removing unreachable block (ram,0x000004d8)
// WARNING: Removing unreachable block (ram,0x000004f2)

void FUN_000004c8(uint param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  int *unaff_r5;
  uint unaff_r6;
  
  do {
    uVar4 = FUN_000004c8(param_1);
    if (uVar4 < 2) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    while( true ) {
      pbVar5 = DAT_00000858;
      unaff_r6 = unaff_r6 + 1;
      if (*(byte *)(unaff_r5 + 1) <= unaff_r6) {
        return;
      }
      bVar1 = *DAT_00000858;
      *DAT_00000858 = bVar1 + 1;
      if (*(byte *)(unaff_r5 + 1) < (byte)(bVar1 + 1)) {
        *pbVar5 = 1;
      }
      bVar1 = *pbVar5;
      pbVar5[1] = bVar1;
      pbVar5 = (byte *)(*unaff_r5 + (uint)bVar1 * 0x170 + -0x170);
      bVar2 = *pbVar5;
      if ((bVar2 == 0) || (bVar2 == 2)) break;
      uVar4 = (uint)pbVar5[2];
      if (-1 < (int)(uVar4 << 0x1e)) {
        if (-1 < (int)(uVar4 << 0x1d)) {
          FUN_000004f8((uint)bVar1,(uint)bVar2 - 3,uVar4,(uint)bVar2 - 3);
                    // WARNING: Bad instruction - Truncating control flow here
          halt_baddata();
        }
        func_0x000004e8((uint)pbVar5[1]);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if ((((*(byte *)(DAT_0000085c + 0xc) & 1) != 0) && ((int)(uVar4 << 0x1a) < 0)) &&
         (sVar3 = *(short *)(pbVar5 + 4), *(short *)(pbVar5 + 4) = sVar3 + -1,
         (short)(sVar3 + -1) == 0)) {
        pbVar5[2] = pbVar5[2] & 0xdf;
      }
    }
    param_1 = (uint)pbVar5[1];
  } while( true );
}



// WARNING: Control flow encountered bad instruction data

void FUN_000004f8(void)

{
  FUN_000004f8();
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_0000050e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r4;
  
  uVar1 = FUN_0000050e();
  uVar2 = FUN_00000514();
  uVar1 = FUN_00000520(7,uVar2,uVar1);
  FUN_00000754((uint)*(byte *)(unaff_r4 + 1),uVar2,uVar1);
  return;
}



void FUN_00000514(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r4;
  
  uVar1 = FUN_00000514();
  uVar2 = FUN_00000520(7,uVar1);
  FUN_00000754((uint)*(byte *)(unaff_r4 + 1),uVar1,uVar2);
  return;
}



void FUN_00000520(void)

{
  int unaff_r4;
  
  FUN_00000520();
  FUN_00000754((uint)*(byte *)(unaff_r4 + 1));
  return;
}



void FUN_0000063e(void)

{
  undefined *puVar1;
  int unaff_r4;
  
  puVar1 = (undefined *)FUN_0000063e();
  *puVar1 = 8;
  puVar1[1] = 0x20;
  puVar1[2] = 8;
  *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) | 2;
  FUN_00000a3a((uint)*(byte *)(unaff_r4 + 1),puVar1,3);
  return;
}



void FUN_00000754(void)

{
  int unaff_r4;
  
  FUN_00000754();
  *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) | 2;
  return;
}



void FUN_0000093a(void)

{
  undefined uVar1;
  undefined *puVar2;
  int unaff_r4;
  int unaff_r5;
  
  puVar2 = (undefined *)FUN_0000093a();
  *puVar2 = 0xff;
  puVar2[1] = 0xfd;
  puVar2[2] = 3;
  puVar2[3] = 0xff;
  puVar2[4] = 0xfb;
  puVar2[5] = 3;
  puVar2[6] = 0xff;
  if (*(char *)(unaff_r5 + 6) == '\0') {
    uVar1 = 0xfe;
  }
  else {
    uVar1 = 0xfd;
  }
  puVar2[7] = uVar1;
  puVar2[8] = 1;
  puVar2[9] = 0xff;
  if (*(char *)(unaff_r5 + 6) == '\0') {
    uVar1 = 0xfb;
  }
  else {
    uVar1 = 0xfc;
  }
  puVar2[10] = uVar1;
  puVar2[0xb] = 1;
  FUN_00000a3a((uint)*(byte *)(unaff_r4 + 1),puVar2,0xc);
  return;
}



void FUN_00000a3a(void)

{
  FUN_00000a3a();
  return;
}



// WARNING: This is an inlined function

void FUN_00000a84(void)

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
                    // WARNING: Could not recover jumptable at 0x00000a98. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


