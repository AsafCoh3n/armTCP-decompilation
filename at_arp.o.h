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
void FUN_00000042(void);
void FUN_00000060(char *param_1);
void FUN_00000076(void);
void FUN_00000082(void);
void FUN_0000009c(char *param_1,undefined4 param_2,undefined4 param_3);
void FUN_000000b0(void);
void FUN_000000ca(void);
void FUN_000000d4(void);
void FUN_0000019c(char *param_1);
void FUN_000001b0(void);
void FUN_000001bc(void);
void FUN_000001c6(void);
void FUN_000001d4(void);
void FUN_000001ea(void);
void FUN_000001f4(void);
undefined8 FUN_0000021c(void);
undefined8 FUN_00000228(void);
undefined8 FUN_00000250(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
ulonglong FUN_00000264(void);
ulonglong FUN_00000272(void);
ulonglong FUN_00000288(void);
ulonglong FUN_00000292(void);
undefined4 FUN_000002ce(void);
undefined4 FUN_000002da(void);
undefined4 FUN_000002ea(void);
undefined4 FUN_0000031c(byte *param_1);
undefined4 FUN_00000330(void);
undefined4 FUN_0000033e(void);
undefined4 FUN_00000354(void);
undefined4 FUN_0000035e(void);
void FUN_0000042c(void);
void FUN_00000450(void);
byte * FUN_0000049e(byte *param_1);
undefined4 FUN_000004c6(void);
undefined4 FUN_000004d0(void);
undefined4 FUN_000004f6(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
undefined4 FUN_00000514(void);
undefined4 FUN_00000562(void);
void FUN_000005a6(void);
void FUN_000005c8(void);
void FUN_00000604(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_0000061e(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);
void FUN_0000063c(void);
void FUN_0000069a(void);
void FUN_000006b0(void);
void FUN_000006bc(void);
void FUN_000006ca(void);
void FUN_000006e6(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_000006f6(void);
void FUN_00000732(void);
void FUN_00000794(void);
void FUN_000007a4(void);
void FUN_000007b0(void);
void FUN_000007de(void);
void FUN_000007ec(void);
void FUN_000007f8(void);
void FUN_00000804(void);
void FUN_0000080a(void);
void FUN_00000810(void);
void FUN_0000082e(void);
void FUN_00000842(void);
void FUN_0000084e(void);
void FUN_0000087a(void);
void FUN_0000088c(void);
void FUN_0000089e(void);
void FUN_000008b0(void);
void FUN_000008b6(void);
void FUN_000008bc(void);
void switch8_r3(void);

