/* SPDX-License-Identifier: MIT */
/* mercsw 10055bc0 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

unsigned long long __cdecl FUN_10055bc0(int param_1, int param_2, int param_3, int param_4, int param_5)
{
    long long lVar1;
    long long quot;
    long long rem;
    int iVar2;
    int iVar3;
    int iVar4;

    if (param_1 < param_2) {
        iVar3 = (int)((uint)param_1 - (uint)param_2);
        lVar1 = (long long)(int)((uint)param_3 - (uint)param_2) *
                (long long)(int)((uint)param_4 - (uint)param_5);
        iVar4 = (int)((unsigned long long)lVar1 >> 0x20);

        /* IDIV faults on a zero divisor or on INT_MIN / -1 */
        if (iVar3 == 0 || (iVar4 == (int)0x80000000 && iVar3 == -1)) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
            return 0;
        }

        if (iVar4 / iVar3 == 0) {
            quot = lVar1 / (long long)iVar3;
            /* IDIV faults when the quotient does not fit in 32 signed bits */
            if (quot > 0x7FFFFFFFLL || quot < -0x80000000LL) {
                RaiseException(0xC0000094UL, 0, 0, NULL);
                return 0;
            }
            rem = lVar1 % (long long)iVar3;
            iVar2 = (int)quot;
            iVar4 = (int)rem;
        } else {
            iVar2 = -0x10000001;
        }
        iVar2 = (int)((uint)iVar2 + (uint)param_5);
    } else {
        iVar3 = (int)((uint)param_2 - (uint)param_1);
        lVar1 = (long long)(int)((uint)param_3 - (uint)param_1) *
                (long long)(int)((uint)param_5 - (uint)param_4);
        iVar4 = (int)((unsigned long long)lVar1 >> 0x20);

        if (iVar3 == 0 || (iVar4 == (int)0x80000000 && iVar3 == -1)) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
            return 0;
        }

        if (iVar4 / iVar3 == 0) {
            quot = lVar1 / (long long)iVar3;
            if (quot > 0x7FFFFFFFLL || quot < -0x80000000LL) {
                RaiseException(0xC0000094UL, 0, 0, NULL);
                return 0;
            }
            rem = lVar1 % (long long)iVar3;
            iVar2 = (int)quot;
            iVar4 = (int)rem;
        } else {
            iVar2 = -0x10000001;
        }
        iVar2 = (int)((uint)iVar2 + (uint)param_4);
    }

    /* EDX:EAX = (remainder / high word) : result */
    return ((unsigned long long)(uint)iVar4 << 32) | (unsigned long long)(uint)iVar2;
}
