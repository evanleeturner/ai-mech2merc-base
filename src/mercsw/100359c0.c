/* SPDX-License-Identifier: MIT */
/* mercsw 100359c0 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_100359c0(uint param_1, int param_2, byte param_3, int param_4)
{
    uint s;
    uint hi;
    uint lo;
    uint sign;
    uint right;
    long long num;
    long long den;
    long long quot;
    int q32;

    s = (uint)(param_3 & 0x1f);
    sign = (uint)((int)param_1 >> 0x1f);

    /* SHLD-style widening: EDX:EAX = (sign-extended param_1) << s */
    if (s == 0) {
        right = 0;
    } else {
        right = param_1 >> (0x20 - s);
    }
    hi = (sign << s) | right;
    lo = param_1 << s;

    num = (long long)(((unsigned long long)hi << 32) | (unsigned long long)lo);
    den = (long long)param_2;

    /* IDIV faults on a zero divisor */
    if (den == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    /* num fits in 63 bits, so INT64_MIN / -1 cannot occur */
    quot = num / den;

    /* IDIV faults when the quotient does not fit in 32 signed bits */
    if (quot > 0x7FFFFFFFLL || quot < -0x80000000LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    q32 = (int)quot;
    q32 = (int)((uint)q32 + 2u);
    q32 = q32 >> 2;
    return (int)((uint)q32 + (uint)param_4);
}
