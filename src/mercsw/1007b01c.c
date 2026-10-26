/* SPDX-License-Identifier: MIT */
/* mercsw 1007b01c */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1007b01c(uint param_1)
{
    int iVar2;
    uint uVar1;
    uint quot;
    uint rem;
    unsigned long long dividend;

    iVar2 = 0;
    if ((int)param_1 < 0) {
        iVar2 = -1;
        param_1 = 0u - param_1;
    }

    dividend = 0x400000000000ULL;

    /* DIV faults on a zero divisor or a quotient that does not fit in 32 bits
       (EDX = 0x4000 must be below the divisor) */
    if (param_1 == 0 || 0x4000u >= param_1) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    quot = (uint)(dividend / (unsigned long long)param_1);
    rem = (uint)(dividend % (unsigned long long)param_1);

    uVar1 = ((param_1 >> 1) + (uint)((param_1 & 1) != 0)) - 1u;
    quot = quot + (uint)(uVar1 < rem);

    if (iVar2 != 0) {
        quot = 0u - quot;
    }
    return (int)quot;
}
