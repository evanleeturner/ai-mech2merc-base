/* SPDX-License-Identifier: MIT */
/* mercsw 10055b90 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_10055b90(int param_1, int param_2, int param_3, int param_4, int param_5)
{
    unsigned long long a;
    unsigned long long b;
    long long dividend;
    long long q;

    a = (unsigned long long)(long long)param_1 * (unsigned long long)(long long)param_4;
    b = (unsigned long long)(long long)param_2 * (unsigned long long)(long long)param_3;
    dividend = (long long)(a - b);

    if (param_5 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    if (param_5 == -1 && dividend == (long long)(0x8000000000000000ULL)) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    q = dividend / (long long)param_5;
    if (q > 2147483647LL || q < -2147483647LL - 1) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    return (int)q;
}
