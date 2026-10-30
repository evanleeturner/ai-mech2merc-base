/* SPDX-License-Identifier: MIT */
/* mercsw 10035220 */
extern unsigned char DAT_100f3044[];
extern unsigned char DAT_100f3048[];
extern unsigned char DAT_100f304c[];
extern unsigned char DAT_100f3050[];

extern int DAT_10168398;
extern int _DAT_10168384;
extern int DAT_10168380;
extern int DAT_10168388;
extern int DAT_1016838c;
extern int _DAT_10168390;
extern unsigned int DAT_10168394;
extern unsigned int DAT_10168290;
extern unsigned int DAT_100b36d8;
extern unsigned int DAT_101682a0[];
extern unsigned int DAT_101683a0[];
extern unsigned int DAT_100aaf70[];
extern unsigned char *PTR_DAT_100aaf68;
extern void (*DAT_100aafc8)();
extern void (*DAT_100aafcc)();
extern int DAT_100a7b60;

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

/* Signatures of these two are unresolved; only their addresses are stored. */
void FUN_100354cd();
void FUN_1003567a();

void __cdecl FUN_100603ff(int param_1);
void __cdecl FUN_1003b59a(int param_1);
void __cdecl FUN_1003b954(int *param_1);
void __cdecl FUN_1003b2f0(unsigned char *param_1);

void __cdecl FUN_10035220(unsigned int *param_1, int param_2, int param_3, unsigned int param_4)
{
    int iVar1;
    unsigned int *puVar2;
    unsigned int *puVar3;
    int iDiv;

    iDiv = (int)(((unsigned int)*(int *)(DAT_100f304c + param_2 * 0x14)
                  - (unsigned int)*(int *)(DAT_100f3044 + param_2 * 0x14)) + 1u);
    if (iDiv == 0 || (param_3 == (int)0x80000000 && iDiv == -1)) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    DAT_10168398 = param_3 / iDiv;
    _DAT_10168384 = param_3 / 2;
    DAT_10168380 = (int)(0u - (unsigned int)_DAT_10168384);
    DAT_10168388 = (int)(((unsigned int)(int)(((unsigned int)*(int *)(DAT_100f3050 + param_2 * 0x14)
                                               - (unsigned int)*(int *)(DAT_100f3048 + param_2 * 0x14)) + 1u)
                          * (unsigned int)DAT_10168398)) / 2;
    DAT_1016838c = (int)(0u - (unsigned int)DAT_10168388);
    _DAT_10168390 = 0;
    DAT_10168394 = param_4;
    DAT_10168290 = DAT_100b36d8;
    puVar2 = (unsigned int *)PTR_DAT_100aaf68;
    puVar3 = DAT_101682a0;
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    }
    *(unsigned int *)(PTR_DAT_100aaf68 + 0xc) = param_1[3];
    *(unsigned int *)(PTR_DAT_100aaf68 + 0x10) = param_1[4];
    *(unsigned int *)(PTR_DAT_100aaf68 + 0x14) = param_1[5];
    *(unsigned int *)PTR_DAT_100aaf68 = *param_1;
    *(unsigned int *)(PTR_DAT_100aaf68 + 4) = param_1[1];
    *(unsigned int *)(PTR_DAT_100aaf68 + 8) = param_1[2];
    FUN_100603ff(param_2);
    *(unsigned int *)(PTR_DAT_100aaf68 + 0x40) = DAT_10168394;
    puVar2 = DAT_100aaf70;
    puVar3 = DAT_101683a0;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    }
    DAT_100aafc8 = FUN_100354cd;
    DAT_100aafcc = FUN_1003567a;
    FUN_1003b59a((int)PTR_DAT_100aaf68);
    *(unsigned int *)(PTR_DAT_100aaf68 + 0x9c) = 0x2000;
    *(short *)(PTR_DAT_100aaf68 + 0xa4) = 3;
    *(int *)(PTR_DAT_100aaf68 + 0xa0) = *(int *)(PTR_DAT_100aaf68 + 0x44) >> 3;
    *(short *)(PTR_DAT_100aaf68 + 0xa6) = 3;
    FUN_1003b954((int *)PTR_DAT_100aaf68);
    FUN_1003b2f0(PTR_DAT_100aaf68);
    DAT_100a7b60 = 0;
    return;
}
