/* SPDX-License-Identifier: MIT */
/* mercsw 1001a040 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1001a040(uint param_1, uint param_2)
{
    uint hi;
    uint lo;
    unsigned long long num;
    unsigned long long den;
    unsigned long long quot;

    /* CDQ/SHLD-style 16.16 widening: EDX:EAX = (sign-extended param_1) << 16 */
    hi = (((uint)((int)param_1 >> 0x1f)) << 0x10) | (param_1 >> 0x10);
    lo = param_1 << 0x10;

    num = ((unsigned long long)hi << 32) | (unsigned long long)lo;
    den = (unsigned long long)param_2;

    /* DIV faults on a zero divisor */
    if (den == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    quot = num / den;

    /* DIV faults when the quotient does not fit in 32 bits */
    if (quot > 0xFFFFFFFFULL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    return (int)(uint)quot;
}
