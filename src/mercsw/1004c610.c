/* SPDX-License-Identifier: MIT */
/* mercsw 1004c610 */
unsigned int __cdecl FUN_1004c610(int param_1, int param_2)
{
    unsigned int uVar1;

    if (*(int *)(param_1 + 0xc0) < *(int *)(param_2 + 0x4c)) {
        uVar1 = 3;
    }
    else if (*(int *)(param_1 + 0xc0) < *(int *)(param_2 + 0x50)) {
        uVar1 = 2;
    }
    else if (*(int *)(param_2 + 0x50) < *(int *)(param_1 + 0xc0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}
