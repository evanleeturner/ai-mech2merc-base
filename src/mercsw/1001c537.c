/* SPDX-License-Identifier: MIT */
/* mercsw 1001c537 */
undefined4 __cdecl FUN_1001c537(int param_1)
{
    undefined4 uVar1;

    if (*(undefined4 **)(param_1 + 0x20) == (undefined4 *)0) {
        uVar1 = 0;
    }
    else {
        uVar1 = **(undefined4 **)(param_1 + 0x20);
    }
    return uVar1;
}
