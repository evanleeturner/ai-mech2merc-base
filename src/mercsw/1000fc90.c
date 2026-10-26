/* SPDX-License-Identifier: MIT */
/* mercsw 1000fc90 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1000fc90(int param_1, int param_2, int param_3)
{
    int a;
    int b;
    int t1;
    int t2;
    int d;
    long long prod;
    long long q;

    /* param_3 + 0x8c, 0x90, 0x58, 0x94, 100, 0x98, 0x70: unresolved struct, offsets kept */

    a = (int)((unsigned int)param_1 - (unsigned int)*(int *)(param_3 + 0x8c));
    d = *(int *)(param_3 + 0x94);
    prod = (long long)a * (long long)*(int *)(param_3 + 0x58);
    if (d == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    if (d == -1 && prod == (-0x7FFFFFFFFFFFFFFFLL - 1)) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    q = prod / (long long)d;
    if (q > 0x7FFFFFFFLL || q < -0x80000000LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    t1 = (int)q;

    b = (int)((unsigned int)*(int *)(param_3 + 0x90) - (unsigned int)param_2);
    d = *(int *)(param_3 + 0x98);
    prod = (long long)b * (long long)*(int *)(param_3 + 100);
    if (d == 0) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    if (d == -1 && prod == (-0x7FFFFFFFFFFFFFFFLL - 1)) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    q = prod / (long long)d;
    if (q > 0x7FFFFFFFLL || q < -0x80000000LL) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    t2 = (int)q;

    return ((int)(0u - (unsigned int)*(int *)(param_3 + 0x70)) >> 16) <=
           (int)((unsigned int)t1 + (unsigned int)t2);
}
