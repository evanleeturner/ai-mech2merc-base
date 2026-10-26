/* SPDX-License-Identifier: MIT */
/* mercsw 1001cac9 */
unsigned int __cdecl FUN_1001cac9(int param_1, unsigned int *param_2, unsigned int *param_3, unsigned int *param_4)
{
    if (param_2 != (unsigned int *)0) {
        *param_2 = *(unsigned int *)(param_1 + 0x34);
    }
    if (param_3 != (unsigned int *)0) {
        *param_3 = *(unsigned int *)(param_1 + 0x38);
    }
    if (param_4 != (unsigned int *)0) {
        *param_4 = *(unsigned int *)(param_1 + 0x3c);
    }
    return *(unsigned int *)(param_1 + 0x40);
}
