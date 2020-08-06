#include "at_http_cgi.o.h"



// WARNING: Control flow encountered bad instruction data

void UndefinedInstruction(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4 >> (unaff_r10 & 0xff);
    *(uint *)uVar1 = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void SupervisorCall(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4 >> (unaff_r10 & 0xff);
    *(uint *)uVar1 = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void PrefetchAbort(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4 >> (unaff_r10 & 0xff);
    *(uint *)uVar1 = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void DataAbort(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r8;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
    uVar1 = unaff_r8 & param_2 & param_2 & unaff_r4 >> (unaff_r10 & 0xff);
    *(uint *)uVar1 = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void NotUsed(uint param_1,uint param_2)

{
  uint uVar1;
  uint unaff_r4;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
    uVar1 = param_1 & param_2 & unaff_r4 >> (unaff_r10 & 0xff);
    *(uint *)uVar1 = uVar1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void IRQ(uint param_1)

{
  uint unaff_r4;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
    param_1 = param_1 & unaff_r4 >> (unaff_r10 & 0xff);
    *(uint *)param_1 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Control flow encountered bad instruction data

void FIQ(uint param_1)

{
  uint unaff_r4;
  uint unaff_r10;
  bool in_ZR;
  
  if (in_ZR) {
    param_1 = param_1 & unaff_r4 >> (unaff_r10 & 0xff);
    *(uint *)param_1 = param_1;
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}


