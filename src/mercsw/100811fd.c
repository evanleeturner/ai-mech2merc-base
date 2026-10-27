/* SPDX-License-Identifier: MIT */
/* mercsw 100811fd */
extern void FUN_1003c13a(undefined4 param_1, int param_2);
extern void FUN_1002cdde(undefined4 param_1, int param_2);
extern int DAT_100b3c9c;

void __cdecl FUN_100811fd(undefined4 param_1, int param_2)
{
    FUN_1003c13a(param_1, param_2);
    FUN_1002cdde(param_1, param_2);
    *(int *)(DAT_100b3c9c + 0x1c) = param_2;
    return;
}
