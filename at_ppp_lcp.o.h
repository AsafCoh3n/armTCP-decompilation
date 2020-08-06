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




void UndefinedInstruction(undefined4 *param_1,uint param_2,uint param_3);
void SupervisorCall(undefined4 *param_1,uint param_2,uint param_3);
void PrefetchAbort(undefined4 *param_1,uint param_2,uint param_3);
void DataAbort(undefined4 *param_1,uint param_2,uint param_3);
void NotUsed(undefined4 *param_1,uint param_2,uint param_3);
void IRQ(undefined4 *param_1,uint param_2,uint param_3);
void FIQ(undefined4 *param_1,uint param_2,uint param_3);
void FUN_00000190(void);
void FUN_000001fe(void);
void FUN_00000218(void);
void FUN_00000234(void);
void FUN_0000023a(void);
void FUN_00000270(void);
void FUN_00000784(void);
void FUN_000007b2(void);
void FUN_000007bc(void);
void FUN_000007c2(void);
void FUN_000007cc(void);
void FUN_000007d2(void);
void FUN_000007e0(undefined4 param_1);
void FUN_000007e6(void);
void FUN_000007ec(void);
void FUN_00000800(void);
void FUN_00000814(void);
void FUN_0000084c(void);
void switch8_r3(void);

