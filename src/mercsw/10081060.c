/* SPDX-License-Identifier: MIT */
/* mercsw 10081060 */
extern void __cdecl FUN_1007d0a4(int param_1);
extern int DAT_100b3c9c;

void __cdecl FUN_10081060(undefined4 param_1, int param_2)
{
    FUN_1007d0a4(param_2);
    *(int *)(DAT_100b3c9c + 0x2c) = param_2;
    return;
}
