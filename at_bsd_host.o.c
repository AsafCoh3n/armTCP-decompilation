typedef unsigned char   undefined;

typedef unsigned int    undefined4;



void UndefinedInstruction(void)

{
  FUN_00000044(DAT_0000005c,0,0x20);
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void SupervisorCall(void)

{
  FUN_00000044(DAT_0000005c,0,0x20);
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void PrefetchAbort(void)

{
  FUN_00000044(DAT_0000005c,0,0x20);
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void DataAbort(void)

{
  FUN_00000044(DAT_0000005c,0,0x20);
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void NotUsed(void)

{
  FUN_00000044(DAT_0000005c,0,0x20);
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void IRQ(void)

{
  FUN_00000044(DAT_0000005c,0,0x20);
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void FIQ(void)

{
  FUN_00000044(DAT_0000005c,0,0x20);
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void FUN_00000044(void)

{
  FUN_00000044();
  if (*(char *)(DAT_00000060 + 5) != '\0') {
    *DAT_0000005c = 1;
  }
  return;
}



void FUN_00000064(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = DAT_000000a0;
  *DAT_000000a0 = *DAT_000000a0 | 4;
  pbVar1[1] = (byte)param_1;
  if (param_1 == 0) {
    *(undefined4 *)(pbVar1 + 4) = 0;
    *(undefined4 *)(pbVar1 + 8) = 0;
    *(undefined2 *)(pbVar1 + 0xc) = 1;
    *(undefined2 *)(pbVar1 + 0xe) = 4;
    *(byte **)(pbVar1 + 0x10) = pbVar1 + 0x14;
    *(undefined4 *)(pbVar1 + 0x18) = 0;
    *(byte **)(pbVar1 + 0x14) = pbVar1 + 0x1c;
    FUN_0000008e();
  }
  FUN_00000094((uint)pbVar1[2]);
  pbVar1[2] = 0;
  return;
}



void FUN_0000008e(void)

{
  int unaff_r4;
  undefined unaff_r5;
  
  FUN_0000008e();
  FUN_00000094((uint)*(byte *)(unaff_r4 + 2));
  *(undefined *)(unaff_r4 + 2) = unaff_r5;
  return;
}



void FUN_00000094(void)

{
  int unaff_r4;
  undefined unaff_r5;
  
  FUN_00000094();
  *(undefined *)(unaff_r4 + 2) = unaff_r5;
  return;
}



ulonglong FUN_000000aa(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *unaff_r4;
  undefined8 uVar4;
  uint param_5;
  int param_6;
  
  FUN_000000aa();
  pbVar2 = DAT_0000015c;
  if (DAT_0000015c[2] == 0) {
    bVar1 = *DAT_0000015c;
    iVar3 = -1;
    if ((int)((uint)bVar1 << 0x1e) < 0) {
      if (-1 < (int)((uint)bVar1 << 0x1d)) {
        if (unaff_r4 == (int *)0x0) goto LAB_00000106;
        iVar3 = -4;
        goto LAB_000000de;
      }
      *DAT_0000015c = bVar1 & 0xf9;
      bVar1 = pbVar2[1];
      if (bVar1 == 0) {
        if (unaff_r4 != (int *)0x0) {
          *unaff_r4 = 0;
        }
        uVar4 = FUN_00000108();
        return uVar4;
      }
      if (bVar1 == 1) {
        iVar3 = -10;
      }
      else {
        if (bVar1 == 2) {
          iVar3 = -8;
        }
      }
    }
    else {
      iVar3 = -3;
      if (param_6 != 0) {
        FUN_000000ee(param_6,DAT_00000160);
        uVar4 = FUN_000000f4();
        unaff_r4 = (int *)((ulonglong)uVar4 >> 0x20);
        iVar3 = (int)uVar4 << 0x10;
      }
    }
    if (unaff_r4 != (int *)0x0) {
      *unaff_r4 = iVar3;
    }
  }
  else {
    if (unaff_r4 == (int *)0x0) goto LAB_00000106;
    iVar3 = -7;
LAB_000000de:
    *unaff_r4 = iVar3;
  }
LAB_00000106:
  FUN_00000108();
  return (ulonglong)param_5;
}



ulonglong FUN_000000ee(void)

{
  int *piVar1;
  undefined8 uVar2;
  uint in_stack_00000000;
  
  FUN_000000ee();
  uVar2 = FUN_000000f4();
  piVar1 = (int *)((ulonglong)uVar2 >> 0x20);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)uVar2 << 0x10;
  }
  FUN_00000108();
  return (ulonglong)in_stack_00000000;
}



ulonglong FUN_000000f4(void)

{
  int *piVar1;
  undefined8 uVar2;
  uint in_stack_00000000;
  
  uVar2 = FUN_000000f4();
  piVar1 = (int *)((ulonglong)uVar2 >> 0x20);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)uVar2 << 0x10;
  }
  FUN_00000108();
  return (ulonglong)in_stack_00000000;
}



void FUN_00000108(void)

{
  FUN_00000108();
  return;
}



ulonglong FUN_0000011c(int param_1)

{
  char cVar1;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 unaff_r7;
  undefined8 uVar2;
  uint in_stack_00000000;
  
  while (FUN_0000011c(param_1), *(char *)(unaff_r5 + 2) != '\0') {
    param_1 = unaff_r5 + 2;
  }
  cVar1 = *(char *)(unaff_r5 + 1);
  if (cVar1 == '\0') {
    if (unaff_r4 != (undefined4 *)0x0) {
      *unaff_r4 = 0;
    }
    uVar2 = FUN_00000108();
    return uVar2;
  }
  if (cVar1 == '\x01') {
    unaff_r7 = 0xfffffff6;
  }
  else {
    if (cVar1 == '\x02') {
      unaff_r7 = 0xfffffff8;
    }
  }
  if (unaff_r4 != (undefined4 *)0x0) {
    *unaff_r4 = unaff_r7;
  }
  FUN_00000108();
  return (ulonglong)in_stack_00000000;
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
                    // WARNING: Could not recover jumptable at 0x00000184. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(in_lr + (uint)bVar1 * 2))();
  return;
}


