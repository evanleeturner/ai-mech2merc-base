/* SPDX-License-Identifier: MIT */
/* mercsw 1000fdac */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1000fdac(int param_1, int param_2)
{
    long long n1;
    long long q1;
    long long n2;
    long long q2;
    int d1;
    int d2;
    int r1;

    d1 = *(int *)(param_2 + 0x98);
    n1 = (long long)(int)((unsigned int)*(int *)(param_2 + 0x90) - (unsigned int)param_1)
         * (long long)*(int *)(param_2 + 100);
    if (d1 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    q1 = n1 / (long long)d1;
    if (q1 < -2147483648LL || q1 > 2147483647LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }

    r1 = (int)((unsigned int)(int)q1 + (unsigned int)(*(int *)(param_2 + 0x70) >> 0x10));
    r1 = (int)(0u - (unsigned int)r1);

    d2 = *(int *)(param_2 + 0x58);
    n2 = (long long)r1 * (long long)*(int *)(param_2 + 0x94);
    if (d2 == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    q2 = n2 / (long long)d2;
    if (q2 < -2147483648LL || q2 > 2147483647LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }

    return (int)((unsigned int)*(int *)(param_2 + 0x8c) + (unsigned int)(int)q2);
}
