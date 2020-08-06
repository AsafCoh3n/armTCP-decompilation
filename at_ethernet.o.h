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




void UndefinedInstruction(uint param_1,uint param_2,uint param_3);
void SupervisorCall(uint param_1,uint param_2,uint param_3);
void PrefetchAbort(uint param_1,uint param_2,uint param_3);
void DataAbort(uint param_1,uint param_2,uint param_3);
void NotUsed(uint param_1,uint param_2,uint param_3);
void IRQ(uint param_1,undefined4 param_2,uint param_3);
void FIQ(uint param_1,undefined4 param_2,uint param_3);
void FUN_00000056(void);
void FUN_00000062(void);
void FUN_00000066(void);
void FUN_00000072(void);
void FUN_00000076(void);
void FUN_0000007e(void);
void FUN_0000009a(void);
void FUN_0000009e(void);
void FUN_000000d8(void);
void FUN_000000e2(void);
void FUN_000000f2(void);
void FUN_000000fc(void);
void FUN_00000110(void);
void FUN_0000011e(void);
void FUN_00000138(void);
void FUN_00000140(void);
void FUN_00000148(void);
void FUN_00000150(void);
void FUN_00000156(void);
undefined4 FUN_00000180(void);
int FUN_0000018c(void);
undefined4 FUN_000001a2(void);
int FUN_000001bc(void);
undefined4 FUN_000001cc(void);
undefined4 FUN_000001d8(void);
undefined4 FUN_000001e2(void);
void FUN_00000238(void);

