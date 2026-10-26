/* SPDX-License-Identifier: MIT */
/* mercsw 10011e60 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_10011e60(int param_1, int param_2, int param_3)
{
    long long prod;
    long long den;
    long long quot;

    /* one-operand IMUL: EDX:EAX = param_1 * param_2 (fits in 64 bits) */
    prod = (long long)param_1 * (long long)param_2;
    den = (long long)param_3;

    /* IDIV faults on a zero divisor */
    if (den == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    quot = prod / den;

    /* IDIV faults when the quotient does not fit in 32 bits */
    if (quot < -2147483647LL - 1 || quot > 2147483647LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    return (int)quot;
}
