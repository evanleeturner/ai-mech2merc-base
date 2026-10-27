/* SPDX-License-Identifier: MIT */
/* mercsw 1008109d */
extern void __cdecl FUN_1003106f(int param_1);
extern int DAT_100b3c9c;

void __cdecl FUN_1008109d(undefined4 param_1, int param_2)
{
    FUN_1003106f(param_2);
    *(int *)(DAT_100b3c9c + 0x30) = param_2;
    return;
}
