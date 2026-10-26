/* SPDX-License-Identifier: MIT */
/* mercsw 1001b82d */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1001b82d(int param_1, int param_2, int param_3, uint param_4, int param_5, int param_6)
{
    unsigned long long usum;
    long long num;
    long long den;
    long long quot;

    /* two signed 32x32->64 IMULs, summed with carry propagation, then param_4 added (zero-extended) */
    usum = (unsigned long long)(long long)param_1 * (unsigned long long)(long long)param_5;
    usum = usum + (unsigned long long)(long long)param_3 * (unsigned long long)(long long)param_6;
    usum = usum + (unsigned long long)param_4;

    num = (long long)usum;
    den = (long long)param_2;

    /* IDIV faults on a zero divisor */
    if (den == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    /* INT64_MIN / -1 gives a quotient outside 32 bits; IDIV faults */
    if (den == -1 && num == (-9223372036854775807LL - 1)) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    quot = num / den;

    /* IDIV faults when the quotient does not fit in 32 bits */
    if (quot < -2147483647LL - 1 || quot > 2147483647LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
        return 0;
    }

    return (int)quot;
}
