#include "at_slip.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(undefined4 param_1,uint param_2)

{
  uint unaff_r8;
  bool in_ZR;
  
  if (in_ZR) {
    param_2 = unaff_r8 & param_2 & param_2;
    *(uint *)param_2 = param_2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(uint param_1,uint param_2)

{
  bool in_ZR;
  
  if (in_ZR) {
    *(uint *)(param_1 & param_2) = param_1 & param_2;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(undefined4 param_1)

{
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined4 *)param_1 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(undefined4 param_1)

{
  bool in_ZR;
  
  if (in_ZR) {
    *(undefined4 *)param_1 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



void FUN_00000056(void)

{
  FUN_00000056();
  return;
}



void FUN_00000066(void)

{
  undefined *puVar1;
  
  FUN_00000066();
  FUN_0000006a();
  puVar1 = DAT_00000080;
  *DAT_00000080 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



void FUN_0000006a(void)

{
  undefined *puVar1;
  
  FUN_0000006a();
  puVar1 = DAT_00000080;
  *DAT_00000080 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  return;
}



void FUN_000000a2(void)

{
  FUN_000000a2();
  return;
}



void FUN_000000b8(void)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  byte *unaff_r4;
  undefined uVar6;
  int unaff_r6;
  byte unaff_r7;
  
code_r0x000000b8:
  uVar3 = FUN_000000b8();
  if (uVar3 == 0xffffffff) {
    if ((*unaff_r4 & 1) == 0) {
      return;
    }
    if (unaff_r6 == 1) {
      *(undefined2 *)(unaff_r4 + 2) = *DAT_00000188;
      return;
    }
    if (*(short *)(unaff_r4 + 2) != 0) {
      return;
    }
    uVar3 = 0xc0;
    *unaff_r4 = *unaff_r4 & unaff_r7;
  }
  uVar6 = (undefined)uVar3;
  bVar2 = *unaff_r4;
  unaff_r6 = 1;
  if ((bVar2 & 1) == 0) {
    if (((int)((uint)bVar2 << 0x1a) < 0) && (uVar3 == 0xc0)) {
      bVar5 = 1;
      goto LAB_0000015c;
    }
    iVar4 = FUN_0000012a(uVar3 & 0xff);
    if (iVar4 != 1) goto code_r0x000000b8;
    bVar2 = *unaff_r4;
    bVar5 = 0x20;
  }
  else {
    if (-1 < (int)((uint)bVar2 << 0x1d)) {
      *unaff_r4 = bVar2 | 4;
      iVar4 = FUN_000000ec(DAT_00000184);
      *(int *)(unaff_r4 + 4) = iVar4;
      *(undefined2 *)(iVar4 + 2) = 0xe;
    }
    bVar2 = *unaff_r4;
    if ((int)((uint)bVar2 << 0x1e) < 0) {
      bVar2 = bVar2 & unaff_r7;
      *unaff_r4 = bVar2;
      if (uVar3 == 0xdc) {
        uVar6 = 0xc0;
      }
      else {
        if (uVar3 != 0xdd) goto LAB_00000108;
        uVar6 = 0xdb;
      }
LAB_00000142:
      iVar4 = *(int *)(unaff_r4 + 4);
      uVar1 = *(ushort *)(iVar4 + 2);
      if ((uint)uVar1 < DAT_00000184) {
        *(short *)(iVar4 + 2) = uVar1 + 1;
        *(undefined *)(iVar4 + (uint)uVar1 + 4) = uVar6;
        FUN_000000b8();
        return;
      }
      goto code_r0x000000b8;
    }
LAB_00000108:
    if (uVar3 == 0xc0) {
      if (*(short *)(*(int *)(unaff_r4 + 4) + 2) != 0xe) {
        FUN_0000016e(*(int *)(unaff_r4 + 4),(uint)*(ushort *)(*(int *)(unaff_r4 + 4) + 2));
        *unaff_r4 = *unaff_r4 & 0xf8 | 8;
        return;
      }
      goto code_r0x000000b8;
    }
    if (uVar3 != 0xdb) goto LAB_00000142;
    bVar5 = 2;
  }
LAB_0000015c:
  *unaff_r4 = bVar2 | bVar5;
  FUN_000000b8();
  return;
}



void FUN_000000ec(uint param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *unaff_r4;
  undefined uVar5;
  uint unaff_r5;
  int unaff_r6;
  byte unaff_r7;
  
  do {
    iVar3 = FUN_000000ec(param_1);
    *(int *)(unaff_r4 + 4) = iVar3;
    *(undefined2 *)(iVar3 + 2) = 0xe;
    do {
      uVar5 = (undefined)unaff_r5;
      bVar2 = *unaff_r4;
      if ((int)((uint)bVar2 << 0x1e) < 0) {
        bVar2 = bVar2 & unaff_r7;
        *unaff_r4 = bVar2;
        if (unaff_r5 == 0xdc) {
          uVar5 = 0xc0;
        }
        else {
          if (unaff_r5 != 0xdd) goto LAB_00000108;
          uVar5 = 0xdb;
        }
LAB_00000142:
        iVar3 = *(int *)(unaff_r4 + 4);
        uVar1 = *(ushort *)(iVar3 + 2);
        if ((uint)uVar1 < DAT_00000184) {
          *(short *)(iVar3 + 2) = uVar1 + 1;
          *(undefined *)(iVar3 + (uint)uVar1 + 4) = uVar5;
          FUN_000000b8();
          return;
        }
      }
      else {
LAB_00000108:
        if (unaff_r5 != 0xc0) {
          if (unaff_r5 == 0xdb) {
            bVar4 = 2;
LAB_0000015c:
            *unaff_r4 = bVar2 | bVar4;
            FUN_000000b8();
            return;
          }
          goto LAB_00000142;
        }
        if (*(short *)(*(int *)(unaff_r4 + 4) + 2) != 0xe) {
          FUN_0000016e(*(int *)(unaff_r4 + 4),(uint)*(ushort *)(*(int *)(unaff_r4 + 4) + 2));
          *unaff_r4 = *unaff_r4 & 0xf8 | 8;
          return;
        }
      }
      while( true ) {
        unaff_r5 = FUN_000000b8();
        if (unaff_r5 == 0xffffffff) {
          if ((*unaff_r4 & 1) == 0) {
            return;
          }
          if (unaff_r6 == 1) {
            *(undefined2 *)(unaff_r4 + 2) = *DAT_00000188;
            return;
          }
          if (*(short *)(unaff_r4 + 2) != 0) {
            return;
          }
          unaff_r5 = 0xc0;
          *unaff_r4 = *unaff_r4 & unaff_r7;
        }
        bVar2 = *unaff_r4;
        unaff_r6 = 1;
        if ((bVar2 & 1) != 0) break;
        if (((int)((uint)bVar2 << 0x1a) < 0) && (unaff_r5 == 0xc0)) {
          bVar4 = 1;
          goto LAB_0000015c;
        }
        iVar3 = FUN_0000012a(unaff_r5 & 0xff);
        if (iVar3 == 1) {
          bVar2 = *unaff_r4;
          bVar4 = 0x20;
          goto LAB_0000015c;
        }
      }
    } while ((int)((uint)bVar2 << 0x1d) < 0);
    *unaff_r4 = bVar2 | 4;
    param_1 = DAT_00000184;
  } while( true );
}



void FUN_0000012a(uint param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *unaff_r4;
  undefined uVar5;
  int unaff_r6;
  byte unaff_r7;
  
  do {
    iVar3 = FUN_0000012a(param_1);
    if (iVar3 == 1) {
      bVar2 = *unaff_r4;
      bVar4 = 0x20;
LAB_0000015c:
      *unaff_r4 = bVar2 | bVar4;
      FUN_000000b8();
      return;
    }
    while( true ) {
      param_1 = FUN_000000b8();
      if (param_1 == 0xffffffff) {
        if ((*unaff_r4 & 1) == 0) {
          return;
        }
        if (unaff_r6 == 1) {
          *(undefined2 *)(unaff_r4 + 2) = *DAT_00000188;
          return;
        }
        if (*(short *)(unaff_r4 + 2) != 0) {
          return;
        }
        param_1 = 0xc0;
        *unaff_r4 = *unaff_r4 & unaff_r7;
      }
      uVar5 = (undefined)param_1;
      bVar2 = *unaff_r4;
      unaff_r6 = 1;
      if ((bVar2 & 1) == 0) break;
      if (-1 < (int)((uint)bVar2 << 0x1d)) {
        *unaff_r4 = bVar2 | 4;
        iVar3 = FUN_000000ec(DAT_00000184);
        *(int *)(unaff_r4 + 4) = iVar3;
        *(undefined2 *)(iVar3 + 2) = 0xe;
      }
      bVar2 = *unaff_r4;
      if ((int)((uint)bVar2 << 0x1e) < 0) {
        bVar2 = bVar2 & unaff_r7;
        *unaff_r4 = bVar2;
        if (param_1 == 0xdc) {
          uVar5 = 0xc0;
        }
        else {
          if (param_1 != 0xdd) goto LAB_00000108;
          uVar5 = 0xdb;
        }
LAB_00000142:
        iVar3 = *(int *)(unaff_r4 + 4);
        uVar1 = *(ushort *)(iVar3 + 2);
        if ((uint)uVar1 < DAT_00000184) {
          *(short *)(iVar3 + 2) = uVar1 + 1;
          *(undefined *)(iVar3 + (uint)uVar1 + 4) = uVar5;
          FUN_000000b8();
          return;
        }
      }
      else {
LAB_00000108:
        if (param_1 != 0xc0) {
          if (param_1 != 0xdb) goto LAB_00000142;
          bVar4 = 2;
          goto LAB_0000015c;
        }
        if (*(short *)(*(int *)(unaff_r4 + 4) + 2) != 0xe) {
          FUN_0000016e(*(int *)(unaff_r4 + 4),(uint)*(ushort *)(*(int *)(unaff_r4 + 4) + 2));
          *unaff_r4 = *unaff_r4 & 0xf8 | 8;
          return;
        }
      }
    }
    if (((int)((uint)bVar2 << 0x1a) < 0) && (param_1 == 0xc0)) {
      bVar4 = 1;
      goto LAB_0000015c;
    }
    param_1 = param_1 & 0xff;
  } while( true );
}



void FUN_0000016e(void)

{
  byte *unaff_r4;
  
  FUN_0000016e();
  *unaff_r4 = *unaff_r4 & 0xf8 | 8;
  return;
}



void FUN_0000018c(void)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = DAT_00000200;
  iVar3 = DAT_000001fc;
  if ((*(byte *)(DAT_000001fc + 0xc) & 1) != 0) {
    FUN_00000198();
    if (*(short *)(pbVar2 + 2) != 0) {
      *(short *)(pbVar2 + 2) = *(short *)(pbVar2 + 2) + -1;
    }
  }
  FUN_000001a6();
  FUN_000001aa();
  if ((int)((uint)*pbVar2 << 0x1c) < 0) {
    *(undefined *)(iVar3 + 0xe) = 1;
    iVar3 = FUN_000001bc(*(undefined4 *)(pbVar2 + 4),2);
    if (iVar3 == 1) {
      cVar1 = *(char *)(*(int *)(pbVar2 + 4) + 0x1b);
      if (cVar1 == '\x01') {
        FUN_000001d6();
      }
      else {
        if (cVar1 == '\x06') {
          FUN_000001e2();
        }
        else {
          if (cVar1 == '\x11') {
            FUN_000001dc();
            return;
          }
        }
      }
    }
    FUN_000001e8(*(undefined4 *)(pbVar2 + 4));
    *pbVar2 = *pbVar2 & 0xf7;
  }
  return;
}



void FUN_00000198(void)

{
  char cVar1;
  int iVar2;
  byte *unaff_r4;
  int unaff_r5;
  
  FUN_00000198();
  if (*(short *)(unaff_r4 + 2) != 0) {
    *(short *)(unaff_r4 + 2) = *(short *)(unaff_r4 + 2) + -1;
  }
  FUN_000001a6();
  FUN_000001aa();
  if ((int)((uint)*unaff_r4 << 0x1c) < 0) {
    *(undefined *)(unaff_r5 + 0xe) = 1;
    iVar2 = FUN_000001bc(*(undefined4 *)(unaff_r4 + 4),2);
    if (iVar2 == 1) {
      cVar1 = *(char *)(*(int *)(unaff_r4 + 4) + 0x1b);
      if (cVar1 == '\x01') {
        FUN_000001d6();
      }
      else {
        if (cVar1 == '\x06') {
          FUN_000001e2();
        }
        else {
          if (cVar1 == '\x11') {
            FUN_000001dc();
            return;
          }
        }
      }
    }
    FUN_000001e8(*(undefined4 *)(unaff_r4 + 4));
    *unaff_r4 = *unaff_r4 & 0xf7;
  }
  return;
}



void FUN_000001a6(void)

{
  char cVar1;
  int iVar2;
  byte *unaff_r4;
  int unaff_r5;
  
  FUN_000001a6();
  FUN_000001aa();
  if ((int)((uint)*unaff_r4 << 0x1c) < 0) {
    *(undefined *)(unaff_r5 + 0xe) = 1;
    iVar2 = FUN_000001bc(*(undefined4 *)(unaff_r4 + 4),2);
    if (iVar2 == 1) {
      cVar1 = *(char *)(*(int *)(unaff_r4 + 4) + 0x1b);
      if (cVar1 == '\x01') {
        FUN_000001d6();
      }
      else {
        if (cVar1 == '\x06') {
          FUN_000001e2();
        }
        else {
          if (cVar1 == '\x11') {
            FUN_000001dc();
            return;
          }
        }
      }
    }
    FUN_000001e8(*(undefined4 *)(unaff_r4 + 4));
    *unaff_r4 = *unaff_r4 & 0xf7;
  }
  return;
}



void FUN_000001aa(void)

{
  char cVar1;
  int iVar2;
  byte *unaff_r4;
  int unaff_r5;
  
  FUN_000001aa();
  if ((int)((uint)*unaff_r4 << 0x1c) < 0) {
    *(undefined *)(unaff_r5 + 0xe) = 1;
    iVar2 = FUN_000001bc(*(undefined4 *)(unaff_r4 + 4),2);
    if (iVar2 == 1) {
      cVar1 = *(char *)(*(int *)(unaff_r4 + 4) + 0x1b);
      if (cVar1 == '\x01') {
        FUN_000001d6();
      }
      else {
        if (cVar1 == '\x06') {
          FUN_000001e2();
        }
        else {
          if (cVar1 == '\x11') {
            FUN_000001dc();
            return;
          }
        }
      }
    }
    FUN_000001e8(*(undefined4 *)(unaff_r4 + 4));
    *unaff_r4 = *unaff_r4 & 0xf7;
  }
  return;
}



void FUN_000001bc(void)

{
  char cVar1;
  int iVar2;
  byte *unaff_r4;
  
  iVar2 = FUN_000001bc();
  if (iVar2 == 1) {
    cVar1 = *(char *)(*(int *)(unaff_r4 + 4) + 0x1b);
    if (cVar1 == '\x01') {
      FUN_000001d6();
    }
    else {
      if (cVar1 == '\x06') {
        FUN_000001e2();
      }
      else {
        if (cVar1 == '\x11') {
          FUN_000001dc();
          return;
        }
      }
    }
  }
  FUN_000001e8(*(undefined4 *)(unaff_r4 + 4));
  *unaff_r4 = *unaff_r4 & 0xf7;
  return;
}



void FUN_000001d6(void)

{
  byte *unaff_r4;
  
  FUN_000001d6();
  FUN_000001e8(*(undefined4 *)(unaff_r4 + 4));
  *unaff_r4 = *unaff_r4 & 0xf7;
  return;
}



void FUN_000001dc(void)

{
  byte *unaff_r4;
  
  FUN_000001dc();
  FUN_000001e8(*(undefined4 *)(unaff_r4 + 4));
  *unaff_r4 = *unaff_r4 & 0xf7;
  return;
}



void FUN_000001e2(void)

{
  byte *unaff_r4;
  
  FUN_000001e2();
  FUN_000001e8(*(undefined4 *)(unaff_r4 + 4));
  *unaff_r4 = *unaff_r4 & 0xf7;
  return;
}



void FUN_000001e8(void)

{
  byte *unaff_r4;
  
  FUN_000001e8();
  *unaff_r4 = *unaff_r4 & 0xf7;
  return;
}



int FUN_0000020a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *unaff_r5;
  
  iVar1 = FUN_0000020a();
  if (iVar1 != 0) {
    iVar2 = FUN_00000214((uint)*unaff_r5);
    FUN_00000220(iVar2 + 4,unaff_r5 + 2,(uint)*unaff_r5);
    *(undefined2 *)(iVar2 + 2) = 0xd;
    iVar1 = DAT_0000024c;
    *(undefined4 *)(iVar2 + 4) = 0;
    iVar3 = *(int *)(iVar1 + 8);
    if (iVar3 == 0) {
      *(int *)(iVar1 + 8) = iVar2;
    }
    else {
      do {
        iVar1 = iVar3;
        iVar3 = *(int *)(iVar1 + 4);
      } while (iVar3 != 0);
      *(int *)(iVar1 + 4) = iVar2;
    }
    iVar1 = 1;
  }
  return iVar1;
}



undefined4 FUN_00000214(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *unaff_r5;
  
  iVar1 = FUN_00000214();
  FUN_00000220(iVar1 + 4,unaff_r5 + 2,(uint)*unaff_r5);
  *(undefined2 *)(iVar1 + 2) = 0xd;
  iVar3 = DAT_0000024c;
  *(undefined4 *)(iVar1 + 4) = 0;
  iVar2 = *(int *)(iVar3 + 8);
  if (iVar2 == 0) {
    *(int *)(iVar3 + 8) = iVar1;
  }
  else {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 4);
    } while (iVar2 != 0);
    *(int *)(iVar3 + 4) = iVar1;
  }
  return 1;
}



undefined4 FUN_00000220(void)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  
  FUN_00000220();
  *(undefined2 *)(unaff_r4 + 2) = 0xd;
  iVar2 = DAT_0000024c;
  *(undefined4 *)(unaff_r4 + 4) = 0;
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 0) {
    *(int *)(iVar2 + 8) = unaff_r4;
  }
  else {
    do {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar2 + 4);
    } while (iVar1 != 0);
    *(int *)(iVar2 + 4) = unaff_r4;
  }
  return 1;
}



void FUN_0000026c(uint param_1)

{
  byte bVar1;
  int iVar2;
  byte *unaff_r4;
  uint unaff_r5;
  ushort *unaff_r6;
  uint unaff_r7;
  
code_r0x0000026c:
  while( true ) {
    while( true ) {
      iVar2 = FUN_0000026c(param_1);
      if (iVar2 == 0) {
        unaff_r6[1] = (ushort)unaff_r5;
        *(undefined *)((int)unaff_r6 + 0x11) = (char)unaff_r7;
        return;
      }
      if (unaff_r5 != 0) break;
      param_1 = 0xc0;
      unaff_r5 = 1;
      unaff_r7 = param_1;
    }
    if (unaff_r5 == 1) {
      *(undefined4 *)(unaff_r4 + 8) = *(undefined4 *)(unaff_r6 + 2);
      FUN_00000304();
      *(undefined *)(DAT_00000314 + 0xe) = 1;
      return;
    }
    bVar1 = *(byte *)((int)unaff_r6 + unaff_r5 + 4);
    param_1 = (uint)bVar1;
    if (bVar1 != 0xc0) break;
    bVar1 = *unaff_r4;
    if ((int)((uint)bVar1 << 0x1b) < 0) {
      param_1 = 0xdc;
      *unaff_r4 = bVar1 & 0xef;
      goto LAB_000002f2;
    }
    param_1 = 0xdb;
    *unaff_r4 = bVar1 | 0x10;
    unaff_r7 = param_1;
  }
  if (bVar1 == 0xdb) {
    bVar1 = *unaff_r4;
    if (-1 < (int)((uint)bVar1 << 0x1b)) {
      *unaff_r4 = bVar1 | 0x10;
      unaff_r7 = param_1;
      goto code_r0x0000026c;
    }
    param_1 = 0xdd;
    *unaff_r4 = bVar1 & 0xef;
  }
LAB_000002f2:
  unaff_r5 = unaff_r5 + 1;
  unaff_r7 = param_1;
  if (*unaff_r6 <= unaff_r5) {
    unaff_r5 = 0;
  }
  goto code_r0x0000026c;
}



void FUN_0000028e(void)

{
  int iVar1;
  byte *unaff_r4;
  
  iVar1 = FUN_0000028e();
  if (iVar1 != 1) {
    FUN_00000296();
    if ((int)((uint)*unaff_r4 << 0x1d) < 0) {
      FUN_000002a2(*(undefined4 *)(unaff_r4 + 4));
    }
    *unaff_r4 = 0;
  }
  return;
}



void FUN_00000296(void)

{
  byte *unaff_r4;
  
  FUN_00000296();
  if ((int)((uint)*unaff_r4 << 0x1d) < 0) {
    FUN_000002a2(*(undefined4 *)(unaff_r4 + 4));
  }
  *unaff_r4 = 0;
  return;
}



void FUN_000002a2(void)

{
  undefined *unaff_r4;
  
  FUN_000002a2();
  *unaff_r4 = 0;
  return;
}



void FUN_00000304(void)

{
  FUN_00000304();
  *(undefined *)(DAT_00000314 + 0xe) = 1;
  return;
}


