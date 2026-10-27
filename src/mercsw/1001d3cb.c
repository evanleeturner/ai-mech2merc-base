/* SPDX-License-Identifier: MIT */
/* mercsw 1001d3cb */
void __cdecl FUN_1001d3cb(int param_1, int param_2, undefined4 *param_3, undefined4 *param_4, undefined4 *param_5)
{
    int iVar1;

    if (*(int *)(param_1 + 0x20) != 0) {
        iVar1 = (int)((unsigned int)*(int *)(param_1 + 0x20) + 0x18U + (unsigned int)param_2 * 0x44U);
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(iVar1 + 0xc);
        }
        if (param_4 != (undefined4 *)0x0) {
            *param_4 = *(undefined4 *)(iVar1 + 0x10);
        }
        if (param_5 != (undefined4 *)0x0) {
            *param_5 = *(undefined4 *)(iVar1 + 0x14);
        }
    }
    return;
}
