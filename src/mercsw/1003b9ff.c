/* SPDX-License-Identifier: MIT */
/* mercsw 1003b9ff */
void __cdecl FUN_10089643(undefined4 *param_1, undefined4 *param_2);

void __cdecl FUN_1003b9ff(int param_1, undefined4 *param_2)
{
    FUN_10089643(param_2, (undefined4 *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x78) = param_2[9];
    *(undefined4 *)(param_1 + 0x7c) = param_2[10];
    *(undefined4 *)(param_1 + 0x80) = param_2[0xb];
    return;
}
