/* SPDX-License-Identifier: MIT */
/* mercsw 1003c230 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1003c230(int param_1, int param_2, uint param_3, int param_4)
{
    unsigned long long prod;
    unsigned long long addend;
    uint hi;
    uint lo;
    long long num;
    long long den;
    long long quot;

    /* IMUL: 32x32 -> 64-bit product (wraps modulo 2^64 for the add below) */
    prod = (unsigned long long)(long long)param_1 * (unsigned long long)(long long)param_2;

    /* EDX:EAX addend = (sign-extended param_3) << 16 */
    hi = (((uint)((int)param_3 >> 0x1f)) << 0x10) | (param_3 >> 0x10);
    lo = param_3 << 0x10;
    addend = ((unsigned long long)hi << 32) | (unsigned long long)lo;

    num = (long long)(prod + addend);
    den = (long long)param_4;

    /* IDIV faults on a zero divisor */
    if (den == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    if (den == -1) {
        /* negate with wraparound; INT64_MIN stays out of 32-bit range */
        quot = (long long)(0ULL - (unsigned long long)num);
    } else {
        quot = num / den;
    }

    /* IDIV faults when the quotient does not fit in 32 signed bits */
    if (quot > 0x7FFFFFFFLL || quot < -0x80000000LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    return (int)quot;
}
