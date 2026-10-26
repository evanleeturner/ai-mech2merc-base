/* SPDX-License-Identifier: MIT */
/* mercsw 1003b8f6 */
void __cdecl FUN_1003b8f6(int param_1, int param_2)
{
    *(int *)0x10160ef0 = param_2;
    *(int *)(param_1 + 0x40) = param_2;
    if (param_2 < 0x1fffffff) {
        *(unsigned int *)0x10160ebc = (unsigned int)param_2 << 2;
        *(int *)(param_1 + 0xb4) = param_2;
    } else {
        *(int *)0x10160ebc = 0x7fffffff;
        *(int *)(param_1 + 0xb4) = 0x7fffffff;
    }
    return;
}
