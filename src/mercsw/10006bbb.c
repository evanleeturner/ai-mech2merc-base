/* SPDX-License-Identifier: MIT */
/* mercsw 10006bbb */
extern int DAT_10167250;
extern unsigned int DAT_10167450;

void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_10006bbb(unsigned int param_1)
{
    unsigned int uVar1;
    unsigned int uVar2;
    int *piVar3;
    unsigned int uVar4;
    int bVar5;
    int local_c;

    if (param_1 == 0) {
        local_c = 0;
    }
    else {
        bVar5 = (int)param_1 < 0;
        if (bVar5) {
            param_1 = 0u - param_1;
        }
        if ((int)param_1 < 0x20000000) {
            piVar3 = (int *)&DAT_10167250;
            uVar2 = 0;
            if (DAT_10167450 <= param_1) {
                piVar3 = (int *)&DAT_10167450;
                uVar2 = 0x800000;
            }
            if ((unsigned int)piVar3[0x40] <= param_1) {
                piVar3 = piVar3 + 0x40;
                uVar2 = uVar2 | 0x400000;
            }
            if ((unsigned int)piVar3[0x20] <= param_1) {
                piVar3 = piVar3 + 0x20;
                uVar2 = uVar2 | 0x200000;
            }
            if ((unsigned int)piVar3[0x10] <= param_1) {
                piVar3 = piVar3 + 0x10;
                uVar2 = uVar2 | 0x100000;
            }
            if ((unsigned int)piVar3[8] <= param_1) {
                piVar3 = piVar3 + 8;
                uVar2 = uVar2 | 0x80000;
            }
            if ((unsigned int)piVar3[4] <= param_1) {
                piVar3 = piVar3 + 4;
                uVar2 = uVar2 | 0x40000;
            }
            if ((unsigned int)piVar3[2] <= param_1) {
                piVar3 = piVar3 + 2;
                uVar2 = uVar2 | 0x20000;
            }
            if ((unsigned int)piVar3[1] <= param_1) {
                piVar3 = piVar3 + 1;
                uVar2 = uVar2 | 0x10000;
            }
            uVar1 = param_1 - (unsigned int)*piVar3;
            if (uVar1 != 0) {
                uVar4 = (unsigned int)piVar3[1] - (unsigned int)*piVar3;
                if ((uVar4 == 0) || (uVar1 < uVar4)) {
                    long long n;
                    long long q;
                    int d;

                    n = (long long)((unsigned long long)(long long)(int)uVar1 << 16);
                    d = (int)uVar4;
                    q = 0;
                    if (d == 0) {
                        RaiseException(0xC0000094UL, 0, 0, NULL);
                    }
                    else {
                        q = n / (long long)d;
                        if (q != (long long)(int)q) {
                            RaiseException(0xC0000094UL, 0, 0, NULL);
                        }
                    }
                    uVar2 = ((((uVar2 >> 0x10) & 0xFFFFu)) << 16) | ((unsigned int)q & 0xFFFFu);
                }
                else {
                    uVar2 = uVar2 + 0x10000;
                }
            }
            local_c = (int)((unsigned long long)((long long)(int)uVar2 * 0x5a000000LL) >> 0x20);
        }
        else {
            local_c = 0x5a0000;
        }
        if (bVar5) {
            local_c = (int)(0u - (unsigned int)local_c);
        }
    }
    return local_c;
}
