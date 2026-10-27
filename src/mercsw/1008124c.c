/* SPDX-License-Identifier: MIT */
/* mercsw 1008124c */
extern void __cdecl FUN_1003e425(int param_1);
extern int DAT_100b3c9c;

void __cdecl FUN_1008124c(undefined4 param_1, int param_2)
{
    FUN_1003e425(param_2);
    *(int *)(DAT_100b3c9c + 0x20) = param_2;
    return;
}
