typedef unsigned char   undefined;

typedef unsigned int    undefined4;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void




void UndefinedInstruction(uint *param_1,uint param_2,uint param_3,int param_4);
void SupervisorCall(uint *param_1,uint param_2,uint param_3,int param_4);
void PrefetchAbort(uint *param_1,uint param_2,uint param_3,int param_4);
void DataAbort(uint *param_1,uint param_2,uint param_3,int param_4);
void NotUsed(uint *param_1,uint param_2,uint param_3,int param_4);
void IRQ(uint *param_1,undefined4 param_2,uint param_3,int param_4);
void FIQ(uint *param_1,undefined4 param_2,uint param_3,int param_4);
undefined4 FUN_000000aa(void);
undefined4 FUN_000000ee(void);
undefined4 FUN_000000f8(void);
undefined4 FUN_0000010a(void);
undefined4 FUN_00000130(void);
undefined4 FUN_0000013c(void);
undefined4 FUN_00000148(void);
undefined4 FUN_00000156(void);
undefined4 FUN_0000015c(void);

