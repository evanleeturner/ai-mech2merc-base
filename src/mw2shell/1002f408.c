/* SPDX-License-Identifier: MIT */
/* mw2shell 1002f408 */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);

int __cdecl FUN_1002f408(uint param_1)
{
    int iVar1;
    int iVar2;
    uint q;
    uint r;

    iVar2 = 0;
    if ((int)param_1 < 0) {
        iVar2 = -1;
        param_1 = (uint)(0u - param_1);
    }

    /* 64-bit / 32-bit DIV: EDX:EAX = 0x4000:0x00000000.
       Faults on divisor 0 or quotient exceeding 32 bits (divisor <= 0x4000). */
    if (param_1 <= 0x4000u) {
        RaiseException(0xC0000094UL, 0, 0, NULL);
    }
    q = (uint)(0x400000000000ULL / (unsigned long long)param_1);
    r = (uint)(0x400000000000ULL % (unsigned long long)param_1);

    iVar1 = (int)(q + (uint)((((param_1 >> 1) + (uint)((param_1 & 1) != 0)) - 1) < r));
    if (iVar2 != 0) {
        iVar1 = (int)(0u - (uint)iVar1);
    }
    return iVar1;
}
