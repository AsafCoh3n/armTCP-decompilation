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




void UndefinedInstruction(int *param_1,uint param_2,uint param_3);
void SupervisorCall(int *param_1,uint param_2,uint param_3);
void PrefetchAbort(int *param_1,uint param_2,uint param_3);
void DataAbort(int *param_1,uint param_2,uint param_3);
void NotUsed(int *param_1,uint param_2,uint param_3);
void IRQ(int *param_1,undefined4 param_2,uint param_3);
void FIQ(int *param_1,undefined4 param_2,uint param_3);
void FUN_00000048(char *param_1,undefined4 param_2);
void FUN_00000054(char *param_1,undefined4 param_2);
void FUN_00000060(char *param_1,undefined4 param_2);
void FUN_0000006c(char *param_1,undefined4 param_2);
void FUN_00000078(char *param_1,undefined4 param_2);
undefined4 FUN_0000010e(void);
undefined4 FUN_0000012a(void);
undefined4 FUN_0000013c(void);
void FUN_00000148(void);
void FUN_00000150(void);
void FUN_0000015c(void);
void FUN_000001ae(void);
void FUN_0000021a(void);
void FUN_0000028a(void);
void FUN_00000384(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined param_5);
void FUN_00000398(void);
void FUN_0000039e(void);
void FUN_000003a6(void);
void switch8_r3(void);

