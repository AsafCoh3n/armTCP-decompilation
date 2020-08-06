#include "at_dns.o.h"



void UndefinedInstruction(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00000074;
  *DAT_00000074 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  uVar3 = DAT_00000078;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  uVar2 = FUN_00000050(0,3,uVar3);
  puVar1[1] = uVar2;
  uVar3 = FUN_00000056();
  *(undefined4 *)(puVar1 + 0x1c) = uVar3;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void SupervisorCall(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00000074;
  *DAT_00000074 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  uVar3 = DAT_00000078;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  uVar2 = FUN_00000050(0,3,uVar3);
  puVar1[1] = uVar2;
  uVar3 = FUN_00000056();
  *(undefined4 *)(puVar1 + 0x1c) = uVar3;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void PrefetchAbort(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00000074;
  *DAT_00000074 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  uVar3 = DAT_00000078;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  uVar2 = FUN_00000050(0,3,uVar3);
  puVar1[1] = uVar2;
  uVar3 = FUN_00000056();
  *(undefined4 *)(puVar1 + 0x1c) = uVar3;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void DataAbort(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00000074;
  *DAT_00000074 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  uVar3 = DAT_00000078;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  uVar2 = FUN_00000050(0,3,uVar3);
  puVar1[1] = uVar2;
  uVar3 = FUN_00000056();
  *(undefined4 *)(puVar1 + 0x1c) = uVar3;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void NotUsed(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00000074;
  *DAT_00000074 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  uVar3 = DAT_00000078;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  uVar2 = FUN_00000050(0,3,uVar3);
  puVar1[1] = uVar2;
  uVar3 = FUN_00000056();
  *(undefined4 *)(puVar1 + 0x1c) = uVar3;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void IRQ(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00000074;
  *DAT_00000074 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  uVar3 = DAT_00000078;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  uVar2 = FUN_00000050(0,3,uVar3);
  puVar1[1] = uVar2;
  uVar3 = FUN_00000056();
  *(undefined4 *)(puVar1 + 0x1c) = uVar3;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void FIQ(void)

{
  undefined *puVar1;
  undefined uVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00000074;
  *DAT_00000074 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 6) = 0;
  uVar3 = DAT_00000078;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  uVar2 = FUN_00000050(0,3,uVar3);
  puVar1[1] = uVar2;
  uVar3 = FUN_00000056();
  *(undefined4 *)(puVar1 + 0x1c) = uVar3;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void FUN_00000050(void)

{
  undefined uVar1;
  undefined4 uVar2;
  int unaff_r4;
  
  uVar1 = FUN_00000050();
  *(undefined *)(unaff_r4 + 1) = uVar1;
  uVar2 = FUN_00000056();
  *(undefined4 *)(unaff_r4 + 0x1c) = uVar2;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void FUN_00000056(void)

{
  undefined4 uVar1;
  int unaff_r4;
  
  uVar1 = FUN_00000056();
  *(undefined4 *)(unaff_r4 + 0x1c) = uVar1;
  FUN_00000068(*DAT_0000007c,0,(uint)*(byte *)(DAT_0000007c + 1) * 0xc);
  return;
}



void FUN_00000068(void)

{
  FUN_00000068();
  return;
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

undefined4 FUN_00000080(uint param_1,undefined4 param_2,int param_3,ushort *param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  pcVar3 = DAT_00000228;
  if (((((uint)(byte)DAT_00000228[1] == param_1) && (*DAT_00000228 == '\x02')) && (param_3 == 0x35))
     && (0xf < param_5)) {
    iVar4 = FUN_000000aa(param_2,DAT_00000228 + 0x18,4,param_2,DAT_00000228 + 0x18);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar3[2] = pcVar3[2] | 2;
    if (((uint)*(ushort *)(pcVar3 + 8) << 0x18 | (uint)*(ushort *)(pcVar3 + 8) << 8) >> 0x10 ==
        (uint)*param_4) {
      *(undefined2 *)(pcVar3 + 6) = 0;
      uVar2 = param_4[1];
      if ((int)((uint)uVar2 << 0x18) < 0) {
        if ((uVar2 & 0x7a) == 0) {
          if ((uint)(uVar2 >> 8) * 0x100 < 0x8001) {
            if (param_4[2] == 0x100) {
              iVar4 = FUN_0000010c(param_4 + 6,*(undefined4 *)(pcVar3 + 0x10));
              if (iVar4 == 0) {
                return 0;
              }
              bVar1 = DAT_00000228[4];
              iVar4 = (int)param_4 + (uint)bVar1 + 0xe;
              iVar6 = FUN_0000011e(iVar4);
              if ((iVar6 == 1) && (iVar4 = FUN_00000128(iVar4 + 2), iVar4 == 1)) {
                uVar8 = ((uint)param_4[3] << 0x18 | (uint)param_4[3] << 8) >> 0x10;
                uVar9 = ((uint)param_4[4] << 0x18 | (uint)param_4[4] << 8) >> 0x10;
                iVar4 = (uint)bVar1 + 0x12;
                do {
                  if ((uVar8 | uVar9) == 0) {
                    return 1;
                  }
                  while (*(char *)((int)param_4 + iVar4) != '\0') {
                    if (*(char *)((int)param_4 + iVar4) == -0x40) {
                      iVar4 = iVar4 + 1;
                      break;
                    }
                    iVar4 = iVar4 + 1;
                  }
                  iVar6 = (int)param_4 + iVar4 + 1;
                  iVar7 = FUN_00000164();
                  if ((iVar7 == 1) && (iVar7 = FUN_00000176(iVar6 + 2), iVar7 == 1)) {
                    do {
                    // WARNING: Do nothing block with infinite loop
                    } while( true );
                  }
                  iVar6 = FUN_00000182(iVar6 + 8);
                  iVar4 = iVar6 + iVar4 + 1 + 10;
                  if (uVar8 == 0) {
                    if (uVar9 != 0) {
                      uVar9 = uVar9 - 1;
                    }
                  }
                  else {
                    uVar8 = uVar8 - 1;
                  }
                } while( true );
              }
            }
          }
          else {
            if (((uint)uVar2 << 0x14) >> 0x1c == 3) {
              uVar5 = FUN_0000020a(1,0);
              return uVar5;
            }
          }
        }
        FUN_00000134(3,0);
      }
    }
  }
  return 0;
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

undefined4 FUN_000000aa(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r4;
  ushort *unaff_r5;
  uint uVar7;
  uint uVar8;
  
  iVar3 = FUN_000000aa();
  if (iVar3 == 0) {
    return 0;
  }
  *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) | 2;
  if (((uint)*(ushort *)(unaff_r4 + 8) << 0x18 | (uint)*(ushort *)(unaff_r4 + 8) << 8) >> 0x10 ==
      (uint)*unaff_r5) {
    *(undefined2 *)(unaff_r4 + 6) = 0;
    uVar2 = unaff_r5[1];
    if ((int)((uint)uVar2 << 0x18) < 0) {
      if ((uVar2 & 0x7a) == 0) {
        if ((uint)(uVar2 >> 8) * 0x100 < 0x8001) {
          if (unaff_r5[2] == 0x100) {
            iVar3 = FUN_0000010c(unaff_r5 + 6,*(undefined4 *)(unaff_r4 + 0x10));
            if (iVar3 == 0) {
              return 0;
            }
            bVar1 = *(byte *)(DAT_00000228 + 4);
            iVar3 = (int)unaff_r5 + (uint)bVar1 + 0xe;
            iVar5 = FUN_0000011e(iVar3);
            if ((iVar5 == 1) && (iVar3 = FUN_00000128(iVar3 + 2), iVar3 == 1)) {
              uVar7 = ((uint)unaff_r5[3] << 0x18 | (uint)unaff_r5[3] << 8) >> 0x10;
              uVar8 = ((uint)unaff_r5[4] << 0x18 | (uint)unaff_r5[4] << 8) >> 0x10;
              iVar3 = (uint)bVar1 + 0x12;
              do {
                if ((uVar7 | uVar8) == 0) {
                  return 1;
                }
                while (*(char *)((int)unaff_r5 + iVar3) != '\0') {
                  if (*(char *)((int)unaff_r5 + iVar3) == -0x40) {
                    iVar3 = iVar3 + 1;
                    break;
                  }
                  iVar3 = iVar3 + 1;
                }
                iVar5 = (int)unaff_r5 + iVar3 + 1;
                iVar6 = FUN_00000164();
                if ((iVar6 == 1) && (iVar6 = FUN_00000176(iVar5 + 2), iVar6 == 1)) {
                  do {
                    // WARNING: Do nothing block with infinite loop
                  } while( true );
                }
                iVar5 = FUN_00000182(iVar5 + 8);
                iVar3 = iVar5 + iVar3 + 1 + 10;
                if (uVar7 == 0) {
                  if (uVar8 != 0) {
                    uVar8 = uVar8 - 1;
                  }
                }
                else {
                  uVar7 = uVar7 - 1;
                }
              } while( true );
            }
          }
        }
        else {
          if (((uint)uVar2 << 0x14) >> 0x1c == 3) {
            uVar4 = FUN_0000020a(1,0);
            return uVar4;
          }
        }
      }
      FUN_00000134(3,0);
    }
  }
  return 0;
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

int FUN_0000010c(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r5;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_0000010c();
  if (iVar2 != 0) {
    bVar1 = *(byte *)(DAT_00000228 + 4);
    iVar2 = unaff_r5 + (uint)bVar1 + 0xe;
    iVar3 = FUN_0000011e(iVar2);
    if ((iVar3 == 1) && (iVar2 = FUN_00000128(iVar2 + 2), iVar2 == 1)) {
      uVar5 = ((uint)*(ushort *)(unaff_r5 + 6) << 0x18 | (uint)*(ushort *)(unaff_r5 + 6) << 8) >>
              0x10;
      uVar6 = ((uint)*(ushort *)(unaff_r5 + 8) << 0x18 | (uint)*(ushort *)(unaff_r5 + 8) << 8) >>
              0x10;
      iVar2 = (uint)bVar1 + 0x12;
      while ((uVar5 | uVar6) != 0) {
        while (*(char *)(unaff_r5 + iVar2) != '\0') {
          if (*(char *)(unaff_r5 + iVar2) == -0x40) {
            iVar2 = iVar2 + 1;
            break;
          }
          iVar2 = iVar2 + 1;
        }
        iVar3 = unaff_r5 + iVar2 + 1;
        iVar4 = FUN_00000164();
        if ((iVar4 == 1) && (iVar4 = FUN_00000176(iVar3 + 2), iVar4 == 1)) {
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        iVar3 = FUN_00000182(iVar3 + 8);
        iVar2 = iVar3 + iVar2 + 1 + 10;
        if (uVar5 == 0) {
          if (uVar6 != 0) {
            uVar6 = uVar6 - 1;
          }
        }
        else {
          uVar5 = uVar5 - 1;
        }
      }
      iVar2 = 1;
    }
    else {
      FUN_00000134(3,0);
      iVar2 = 0;
    }
  }
  return iVar2;
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

undefined4 FUN_0000011e(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_0000011e();
  if ((iVar2 == 1) && (iVar2 = FUN_00000128(unaff_r6 + 2), iVar2 == 1)) {
    uVar5 = ((uint)*(ushort *)(unaff_r5 + 6) << 0x18 | (uint)*(ushort *)(unaff_r5 + 6) << 8) >> 0x10
    ;
    uVar6 = ((uint)*(ushort *)(unaff_r5 + 8) << 0x18 | (uint)*(ushort *)(unaff_r5 + 8) << 8) >> 0x10
    ;
    iVar2 = unaff_r4 + 4;
    while ((uVar5 | uVar6) != 0) {
      while (*(char *)(unaff_r5 + iVar2) != '\0') {
        if (*(char *)(unaff_r5 + iVar2) == -0x40) {
          iVar2 = iVar2 + 1;
          break;
        }
        iVar2 = iVar2 + 1;
      }
      iVar3 = unaff_r5 + iVar2 + 1;
      iVar4 = FUN_00000164();
      if ((iVar4 == 1) && (iVar4 = FUN_00000176(iVar3 + 2), iVar4 == 1)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar3 = FUN_00000182(iVar3 + 8);
      iVar2 = iVar3 + iVar2 + 1 + 10;
      if (uVar5 == 0) {
        if (uVar6 != 0) {
          uVar6 = uVar6 - 1;
        }
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    uVar1 = 1;
  }
  else {
    FUN_00000134(3,0);
    uVar1 = 0;
  }
  return uVar1;
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

undefined4 FUN_00000128(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r5;
  uint uVar5;
  uint uVar6;
  
  iVar2 = FUN_00000128();
  if (iVar2 == 1) {
    uVar5 = ((uint)*(ushort *)(unaff_r5 + 6) << 0x18 | (uint)*(ushort *)(unaff_r5 + 6) << 8) >> 0x10
    ;
    uVar6 = ((uint)*(ushort *)(unaff_r5 + 8) << 0x18 | (uint)*(ushort *)(unaff_r5 + 8) << 8) >> 0x10
    ;
    iVar2 = unaff_r4 + 4;
    while ((uVar5 | uVar6) != 0) {
      while (*(char *)(unaff_r5 + iVar2) != '\0') {
        if (*(char *)(unaff_r5 + iVar2) == -0x40) {
          iVar2 = iVar2 + 1;
          break;
        }
        iVar2 = iVar2 + 1;
      }
      iVar3 = unaff_r5 + iVar2 + 1;
      iVar4 = FUN_00000164();
      if ((iVar4 == 1) && (iVar4 = FUN_00000176(iVar3 + 2), iVar4 == 1)) {
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar3 = FUN_00000182(iVar3 + 8);
      iVar2 = iVar3 + iVar2 + 1 + 10;
      if (uVar5 == 0) {
        if (uVar6 != 0) {
          uVar6 = uVar6 - 1;
        }
      }
      else {
        uVar5 = uVar5 - 1;
      }
    }
    uVar1 = 1;
  }
  else {
    FUN_00000134(3,0);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00000134(void)

{
  FUN_00000134();
  return 0;
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

undefined4 FUN_00000164(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int param_7;
  
  do {
    iVar1 = FUN_00000164();
    if ((iVar1 == 1) && (iVar1 = FUN_00000176(param_7 + 2), iVar1 == 1)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar1 = FUN_00000182(param_7 + 8);
    iVar1 = iVar1 + unaff_r4 + 10;
    if (unaff_r6 == 0) {
      if (unaff_r7 != 0) {
        unaff_r7 = unaff_r7 - 1;
      }
    }
    else {
      unaff_r6 = unaff_r6 - 1;
    }
    if ((unaff_r6 | unaff_r7) == 0) {
      return 1;
    }
    while (*(char *)(unaff_r5 + iVar1) != '\0') {
      if (*(char *)(unaff_r5 + iVar1) == -0x40) {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar1 = iVar1 + 1;
    }
    unaff_r4 = iVar1 + 1;
    param_7 = unaff_r5 + unaff_r4;
  } while( true );
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

undefined4 FUN_00000176(int param_1)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  int param_7;
  
  do {
    iVar1 = FUN_00000176(param_1);
    if (iVar1 == 1) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    do {
      iVar1 = FUN_00000182(param_7 + 8);
      iVar1 = iVar1 + unaff_r4 + 10;
      if (unaff_r6 == 0) {
        if (unaff_r7 != 0) {
          unaff_r7 = unaff_r7 - 1;
        }
      }
      else {
        unaff_r6 = unaff_r6 - 1;
      }
      if ((unaff_r6 | unaff_r7) == 0) {
        return 1;
      }
      while (*(char *)(unaff_r5 + iVar1) != '\0') {
        if (*(char *)(unaff_r5 + iVar1) == -0x40) {
          iVar1 = iVar1 + 1;
          break;
        }
        iVar1 = iVar1 + 1;
      }
      unaff_r4 = iVar1 + 1;
      param_7 = unaff_r5 + unaff_r4;
      iVar1 = FUN_00000164();
    } while (iVar1 != 1);
    param_1 = param_7 + 2;
  } while( true );
}



// WARNING: Possible PIC construction at 0x00000196: Changing call to branch
// WARNING: Removing unreachable block (ram,0x0000019a)
// WARNING: Removing unreachable block (ram,0x0000019e)
// WARNING: Removing unreachable block (ram,0x00000210)
// WARNING: Removing unreachable block (ram,0x000001ae)
// WARNING: Removing unreachable block (ram,0x000001c0)
// WARNING: Removing unreachable block (ram,0x000001b6)
// WARNING: Removing unreachable block (ram,0x000001bc)
// WARNING: Removing unreachable block (ram,0x000001c6)
// WARNING: Removing unreachable block (ram,0x000001e0)
// WARNING: Removing unreachable block (ram,0x000001d2)
// WARNING: Removing unreachable block (ram,0x000001d8)
// WARNING: Removing unreachable block (ram,0x000001dc)
// WARNING: Removing unreachable block (ram,0x000001e6)

undefined4 FUN_00000182(int param_1)

{
  int iVar1;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  uint unaff_r7;
  
  do {
    iVar1 = FUN_00000182(param_1);
    iVar1 = iVar1 + unaff_r4 + 10;
    if (unaff_r6 == 0) {
      if (unaff_r7 != 0) {
        unaff_r7 = unaff_r7 - 1;
      }
    }
    else {
      unaff_r6 = unaff_r6 - 1;
    }
    if ((unaff_r6 | unaff_r7) == 0) {
      return 1;
    }
    while (*(char *)(unaff_r5 + iVar1) != '\0') {
      if (*(char *)(unaff_r5 + iVar1) == -0x40) {
        iVar1 = iVar1 + 1;
        break;
      }
      iVar1 = iVar1 + 1;
    }
    unaff_r4 = iVar1 + 1;
    iVar1 = FUN_00000164();
    if ((iVar1 == 1) && (iVar1 = FUN_00000176(unaff_r5 + unaff_r4 + 2), iVar1 == 1)) {
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    param_1 = unaff_r5 + unaff_r4 + 8;
  } while( true );
}



undefined4 FUN_000001a6(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_r6;
  undefined4 param_5;
  int param_7;
  
  FUN_000001a6();
  if (unaff_r6 == 0) {
    *(undefined2 *)(DAT_00000228 + 6) = 1;
  }
  else {
    iVar1 = 0;
    puVar5 = (undefined4 *)*DAT_0000022c;
    while (iVar1 < (int)(uint)*(byte *)(DAT_0000022c + 1)) {
      if (puVar5[1] == 0) goto LAB_000001e6;
      iVar1 = iVar1 + 1;
      puVar5 = puVar5 + 3;
    }
    uVar4 = 0xffffffff;
    puVar5 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)*DAT_0000022c;
    iVar1 = 0;
    while (iVar1 < (int)(uint)*(byte *)(DAT_0000022c + 1)) {
      if ((uint)puVar2[1] < uVar4) {
        uVar4 = puVar2[1];
        puVar5 = puVar2;
      }
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 + 1;
    }
LAB_000001e6:
    *puVar5 = *(undefined4 *)(DAT_00000228 + 0x14);
    uVar3 = FUN_000001f2(param_7 + 4);
    puVar5[1] = uVar3;
    FUN_00000202(puVar5 + 2,param_5,4);
    FUN_0000020a(0,puVar5 + 2);
  }
  return 1;
}



undefined4 FUN_000001f2(void)

{
  undefined4 uVar1;
  int unaff_r4;
  undefined4 param_5;
  
  uVar1 = FUN_000001f2();
  *(undefined4 *)(unaff_r4 + 4) = uVar1;
  FUN_00000202(unaff_r4 + 8,param_5,4);
  FUN_0000020a(0,unaff_r4 + 8);
  return 1;
}



undefined4 FUN_00000202(void)

{
  FUN_00000202();
  FUN_0000020a(0);
  return 1;
}



undefined4 FUN_0000020a(void)

{
  FUN_0000020a();
  return 1;
}



void FUN_00000230(void)

{
  int *piVar1;
  char *pcVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  piVar1 = DAT_000002d4;
  iVar5 = DAT_000002d0;
  if ((int)((uint)*(byte *)(DAT_000002d0 + 0xc) << 0x1e) < 0) {
    iVar6 = 0;
    iVar4 = *DAT_000002d4;
    while (iVar6 < (int)(uint)*(byte *)(piVar1 + 1)) {
      if (*(int *)(iVar4 + 4) != 0) {
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + -1;
      }
      iVar4 = iVar4 + 0xc;
      iVar6 = iVar6 + 1;
    }
  }
  pcVar2 = DAT_000002d8;
  if (*DAT_000002d8 != '\0') {
    pcVar7 = DAT_000002d8 + 0x18;
    if (*DAT_000002d8 == '\x01') {
      FUN_000002c8(0,pcVar7);
      return;
    }
    if (*(short *)(DAT_000002d8 + 6) == 0) {
      *(undefined *)(iVar5 + 0xe) = 1;
      if (pcVar2[3] == '\0') {
        if (((uint)(byte)pcVar2[2] << 0x1d) >> 0x1e == 0) {
          pcVar2[2] = pcVar2[2] ^ 1;
          FUN_000002a8();
          iVar5 = FUN_000002ae(pcVar7);
          if (iVar5 != 0) {
            pcVar2[2] = pcVar2[2] | 4;
            pcVar2[3] = '\x05';
            return;
          }
        }
        FUN_000002c8(2,0);
        return;
      }
      pcVar2[3] = pcVar2[3] + -1;
      FUN_0000028a();
      sVar3 = (ushort)*(byte *)(DAT_000002dc + 8) << 1;
    }
    else {
      if ((*(byte *)(iVar5 + 0xc) & 1) == 0) {
        return;
      }
      sVar3 = *(short *)(DAT_000002d8 + 6) + -1;
    }
    *(short *)(pcVar2 + 6) = sVar3;
  }
  return;
}



void FUN_0000028a(void)

{
  int unaff_r4;
  
  FUN_0000028a();
  *(short *)(unaff_r4 + 6) = (ushort)*(byte *)(DAT_000002dc + 8) << 1;
  return;
}



void FUN_000002a8(void)

{
  int iVar1;
  int unaff_r4;
  
  FUN_000002a8();
  iVar1 = FUN_000002ae();
  if (iVar1 == 0) {
    FUN_000002c8(2,0);
  }
  else {
    *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) | 4;
    *(undefined *)(unaff_r4 + 3) = 5;
  }
  return;
}



void FUN_000002ae(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_000002ae();
  if (iVar1 == 0) {
    FUN_000002c8(2,0);
  }
  else {
    *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) | 4;
    *(undefined *)(unaff_r4 + 3) = 5;
  }
  return;
}



void FUN_000002c8(void)

{
  FUN_000002c8();
  return;
}



void FUN_000002e8(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int unaff_r6;
  
  puVar1 = (ushort *)FUN_000002e8();
  *puVar1 = (ushort)(((uint)*(ushort *)(unaff_r6 + 8) << 0x18) >> 0x10) |
            (ushort)(((uint)*(ushort *)(unaff_r6 + 8) << 8) >> 0x10);
  puVar1[1] = 1;
  puVar1[2] = 0x100;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  iVar2 = FUN_00000310(puVar1 + 6,*(undefined4 *)(unaff_r6 + 0x10));
  iVar3 = (int)puVar1 + iVar2 + 0xd;
  *(undefined *)((int)puVar1 + iVar2 + 0xd) = 0;
  *(undefined *)(iVar3 + 1) = 1;
  *(undefined *)(iVar3 + 2) = 0;
  *(undefined *)(iVar3 + 3) = 1;
  FUN_00000334((uint)*(byte *)(unaff_r6 + 1),unaff_r6 + 0x18,0x35,puVar1);
  return;
}



void FUN_00000310(void)

{
  int iVar1;
  int iVar2;
  int unaff_r4;
  undefined unaff_r5;
  int unaff_r6;
  undefined unaff_r7;
  
  iVar1 = FUN_00000310();
  iVar2 = unaff_r4 + iVar1 + 0xd;
  *(undefined *)(unaff_r4 + iVar1 + 0xd) = unaff_r5;
  *(undefined *)(iVar2 + 1) = unaff_r7;
  *(undefined *)(iVar2 + 2) = unaff_r5;
  *(undefined *)(iVar2 + 3) = unaff_r7;
  FUN_00000334((uint)*(byte *)(unaff_r6 + 1),unaff_r6 + 0x18,0x35);
  return;
}



void FUN_00000334(void)

{
  FUN_00000334();
  return;
}



void FUN_00000344(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = DAT_00000378;
  FUN_0000034a(param_1,param_2,*(undefined4 *)(DAT_00000378 + 0xc));
  *puVar1 = 0;
  puVar1[2] = puVar1[2] & 1;
  *(undefined2 *)(puVar1 + 6) = 0;
  puVar1[3] = 0;
  if (*(int *)(puVar1 + 0x10) != 0) {
    FUN_00000364();
    *(undefined4 *)(puVar1 + 0x10) = 0;
  }
  FUN_0000036c((uint)(byte)puVar1[1]);
  return;
}



void FUN_0000034a(void)

{
  undefined *unaff_r4;
  
  FUN_0000034a();
  *unaff_r4 = 0;
  unaff_r4[2] = unaff_r4[2] & 1;
  *(undefined2 *)(unaff_r4 + 6) = 0;
  unaff_r4[3] = 0;
  if (*(int *)(unaff_r4 + 0x10) != 0) {
    FUN_00000364();
    *(undefined4 *)(unaff_r4 + 0x10) = 0;
  }
  FUN_0000036c((uint)(byte)unaff_r4[1]);
  return;
}



void FUN_00000364(void)

{
  int unaff_r4;
  undefined4 unaff_r5;
  
  FUN_00000364();
  *(undefined4 *)(unaff_r4 + 0x10) = unaff_r5;
  FUN_0000036c((uint)*(byte *)(unaff_r4 + 1));
  return;
}



void FUN_0000036c(void)

{
  FUN_0000036c();
  return;
}



void FUN_0000037c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_000003bc;
  iVar3 = DAT_000003bc + 0x18;
  if ((*(byte *)(DAT_000003bc + 2) & 1) != 0) {
    iVar2 = FUN_0000038e(*(int *)(DAT_000003bc + 0x1c) + 0x10);
    if (iVar2 != 0) {
      FUN_0000039e(iVar3,*(int *)(iVar1 + 0x1c) + 0x10,4);
      return;
    }
    *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) & 0xfe;
  }
  FUN_0000039e(iVar3,*(int *)(iVar1 + 0x1c) + 0xc,4);
  return;
}



void FUN_0000038e(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_0000038e();
  if (iVar1 != 0) {
    FUN_0000039e();
    return;
  }
  *(byte *)(unaff_r4 + 2) = *(byte *)(unaff_r4 + 2) & 0xfe;
  FUN_0000039e();
  return;
}



void FUN_0000039e(void)

{
  FUN_0000039e();
  return;
}



undefined4 FUN_000005b8(void)

{
  char cVar1;
  undefined uVar2;
  char *unaff_r4;
  undefined *unaff_r5;
  
  uVar2 = FUN_000005b8();
  *unaff_r5 = uVar2;
  do {
    cVar1 = *unaff_r4;
    unaff_r4 = unaff_r4 + 1;
  } while (cVar1 != '.');
  uVar2 = FUN_000005c8(unaff_r4);
  unaff_r5[1] = uVar2;
  do {
    cVar1 = *unaff_r4;
    unaff_r4 = unaff_r4 + 1;
  } while (cVar1 != '.');
  uVar2 = FUN_000005d8(unaff_r4);
  unaff_r5[2] = uVar2;
  do {
    cVar1 = *unaff_r4;
    unaff_r4 = unaff_r4 + 1;
  } while (cVar1 != '.');
  uVar2 = FUN_000005e8(unaff_r4);
  unaff_r5[3] = uVar2;
  return 1;
}



undefined4 FUN_000005c8(void)

{
  char cVar1;
  undefined uVar2;
  char *unaff_r4;
  int unaff_r5;
  
  uVar2 = FUN_000005c8();
  *(undefined *)(unaff_r5 + 1) = uVar2;
  do {
    cVar1 = *unaff_r4;
    unaff_r4 = unaff_r4 + 1;
  } while (cVar1 != '.');
  uVar2 = FUN_000005d8(unaff_r4);
  *(undefined *)(unaff_r5 + 2) = uVar2;
  do {
    cVar1 = *unaff_r4;
    unaff_r4 = unaff_r4 + 1;
  } while (cVar1 != '.');
  uVar2 = FUN_000005e8(unaff_r4);
  *(undefined *)(unaff_r5 + 3) = uVar2;
  return 1;
}



undefined4 FUN_000005d8(void)

{
  char cVar1;
  undefined uVar2;
  char *unaff_r4;
  int unaff_r5;
  
  uVar2 = FUN_000005d8();
  *(undefined *)(unaff_r5 + 2) = uVar2;
  do {
    cVar1 = *unaff_r4;
    unaff_r4 = unaff_r4 + 1;
  } while (cVar1 != '.');
  uVar2 = FUN_000005e8(unaff_r4);
  *(undefined *)(unaff_r5 + 3) = uVar2;
  return 1;
}



undefined4 FUN_000005e8(void)

{
  undefined uVar1;
  int unaff_r5;
  
  uVar1 = FUN_000005e8();
  *(undefined *)(unaff_r5 + 3) = uVar1;
  return 1;
}


