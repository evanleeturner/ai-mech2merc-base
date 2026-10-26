/* SPDX-License-Identifier: MIT */
/* mercsw 1000fd2a */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1000fd2a(int param_1, int param_2)
{
    int a;
    int d;
    int t1;
    int t2;
    int t3;
    long long prod;
    long long q;

    /* param_2 + 0x8c, 0x58, 0x94, 0x70, 0x98, 100, 0x90: unresolved struct, offsets kept */

    a = (int)((unsigned int)param_1 + (unsigned int)*(int *)(param_2 + 0x8c) * 0xFFFFFFFFu);
    d = *(int *)(param_2 + 0x94);
    prod = (long long)a * (long long)*(int *)(param_2 + 0x58);
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

    t2 = (int)((unsigned int)t1 + (unsigned int)(*(int *)(param_2 + 0x70) >> 0x10));
    t2 = (int)((unsigned int)t2 * 0xFFFFFFFFu);

    d = *(int *)(param_2 + 100);
    prod = (long long)t2 * (long long)*(int *)(param_2 + 0x98);
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
    t3 = (int)q;

    return (int)((unsigned int)*(int *)(param_2 + 0x90) + (unsigned int)t3 * 0xFFFFFFFFu);
}
