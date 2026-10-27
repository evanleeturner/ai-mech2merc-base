/* SPDX-License-Identifier: MIT */
/* mercsw 1001d444 */
void __cdecl FUN_1001d444(int param_1, int param_2, undefined4 *param_3, undefined4 *param_4, undefined4 *param_5)
{
    undefined4 *puVar1;

    if (*(int *)(param_1 + 0x20) != 0) {
        puVar1 = (undefined4 *)((unsigned int)*(int *)(param_1 + 0x20) + 0x18U + (unsigned int)param_2 * 0x44U);
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = *puVar1;
        }
        if (param_4 != (undefined4 *)0x0) {
            *param_4 = puVar1[1];
        }
        if (param_5 != (undefined4 *)0x0) {
            *param_5 = puVar1[2];
        }
    }
    return;
}
