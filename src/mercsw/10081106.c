/* SPDX-License-Identifier: MIT */
/* mercsw 10081106 */
extern void __cdecl FUN_1002cd87(undefined4 param_1, int param_2);
extern undefined4 DAT_100b3c9c;

void __cdecl FUN_10081106(undefined4 param_1, int param_2)
{
    FUN_1002cd87(0x100, param_2);
    FUN_1002cd87(0x200, param_2);
    *(int *)(DAT_100b3c9c + 0x14) = param_2;
    return;
}
