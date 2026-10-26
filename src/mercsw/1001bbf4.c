/* SPDX-License-Identifier: MIT */
/* mercsw 1001bbf4 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

uint __cdecl FUN_1001bbf4(int param_1, int param_2, uint param_3)
{
    uint local_8;
    uint hi;
    uint lo;
    int den32;
    long long num;
    long long den;
    long long quot;

    local_8 = 0;
    den32 = (int)((uint)param_1 - (uint)param_2);
    if (den32 != 0) {
        /* CDQ/SHLD-style widening: EDX:EAX = (sign-extended param_3) << 17 */
        hi = (((uint)((int)param_3 >> 0x1f)) << 0x11) | (param_3 >> 0xf);
        lo = param_3 << 0x11;

        num = (long long)(((unsigned long long)hi << 32) | (unsigned long long)lo);
        den = (long long)den32;

        /* den is non-zero here; num fits in 49 bits so INT64_MIN / -1 cannot occur */
        quot = num / den;

        /* IDIV faults when the quotient does not fit in 32 signed bits */
        if (quot > 0x7FFFFFFFLL || quot < -0x80000000LL) {
            RaiseException(0xC0000094UL, 0, 0, NULL);
            return 0;
        }

        local_8 = (uint)quot;
    }
    return local_8;
}
