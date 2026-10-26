/* SPDX-License-Identifier: MIT */
/* mercsw 1003b8cd */
void __cdecl FUN_1003b8cd(int param_1, int param_2)
{
    *(int *)0x10160f54 = param_2;
    *(int *)(param_1 + 0x3c) = param_2;
    *(unsigned int *)0x10160eb0 = (unsigned int)param_2 << 2;
    return;
}
