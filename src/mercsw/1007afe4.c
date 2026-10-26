/* SPDX-License-Identifier: MIT */
/* mercsw 1007afe4 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1007afe4(int param_1, uint param_2)
{
    unsigned long long uVar1;
    uint iVar2;
    uint uVar3;
    uint hi;
    uint lo;
    uint rem;
    uint quot;

    uVar3 = (uint)(param_1 < 0);
    if (param_1 < 0) {
        param_1 = (int)(0u - (uint)param_1);
    }
    if ((int)param_2 < 0) {
        uVar3 = uVar3 - 1u;
        param_2 = 0u - param_2;
    }

    hi = (uint)(param_1 >> 2);
    lo = (uint)param_1 << 0x1e;
    uVar1 = ((unsigned long long)hi << 32) | (unsigned long long)lo;

    /* DIV faults on a zero divisor or a quotient that does not fit in 32 bits */
    if (param_2 == 0 || hi >= param_2) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    quot = (uint)(uVar1 / (unsigned long long)param_2);
    rem = (uint)(uVar1 % (unsigned long long)param_2);

    iVar2 = quot + (uint)((((param_2 >> 1) + (uint)((param_2 & 1) != 0)) - 1u) < rem);
    if (uVar3 != 0) {
        iVar2 = 0u - iVar2;
    }
    return (int)iVar2;
}
