/* SPDX-License-Identifier: MIT */
/* mercsw 1003c170 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

uint __cdecl FUN_1003c170(int param_1, int param_2, int param_3)
{
    long long num;
    long long den;
    long long quot;
    int d;

    /* IMUL: 32x32 -> 64-bit product in EDX:EAX (cannot overflow 64 bits) */
    num = (long long)param_1 * (long long)param_2;

    d = (int)((uint)param_2 + (uint)param_3);
    den = (long long)d;

    /* IDIV faults on a zero divisor */
    if (den == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    /* |num| <= 2^62, so INT64_MIN / -1 cannot occur */
    quot = num / den;

    /* IDIV faults when the quotient does not fit in 32 signed bits */
    if (quot > 0x7FFFFFFFLL || quot < -0x80000000LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    return ((uint)(int)quot) >> 0xc;
}
