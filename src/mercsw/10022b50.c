/* SPDX-License-Identifier: MIT */
/* mercsw 10022b50 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_10022b50(uint param_1, int param_2)
{
    uint hi;
    uint lo;
    long long num;
    long long den;
    long long quot;

    /* CDQ/SHLD-style widening: EDX:EAX = (sign-extended param_1) << 29 */
    hi = (((uint)((int)param_1 >> 0x1f)) << 0x1d) | (param_1 >> 3);
    lo = param_1 << 0x1d;

    num = (long long)(((unsigned long long)hi << 32) | (unsigned long long)lo);
    den = (long long)param_2;

    /* IDIV faults on a zero divisor */
    if (den == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    /* num fits in 35 bits, so INT64_MIN / -1 cannot occur */
    quot = num / den;

    /* IDIV faults when the quotient does not fit in 32 signed bits */
    if (quot > 0x7FFFFFFFLL || quot < -0x80000000LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    return (int)quot;
}
