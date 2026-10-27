/* SPDX-License-Identifier: MIT */
/* mercsw 1001c599 */
undefined2 __cdecl FUN_1001c599(int param_1)
{
    undefined2 uVar1;

    if (*(int *)(param_1 + 0x20) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x14);
    }
    return uVar1;
}
