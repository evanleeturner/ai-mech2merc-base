/* SPDX-License-Identifier: MIT */
/* mercsw 10002570 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_10002570(unsigned int param_1, int param_2)
{
    unsigned int hi;
    unsigned int lo;
    long long dividend;
    long long q;

    hi = ((unsigned int)((int)param_1 >> 0x1f) << 0x10) | (param_1 >> 0x10);
    lo = param_1 << 0x10;
    dividend = (long long)(((unsigned long long)hi << 32) | (unsigned long long)lo);

    if (param_2 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    if (param_2 == -1 && dividend == (long long)(0x8000000000000000ULL)) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    q = dividend / (long long)param_2;
    if (q > 2147483647LL || q < -2147483647LL - 1) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    return (int)q;
}
