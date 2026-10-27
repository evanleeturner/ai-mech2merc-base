/* SPDX-License-Identifier: MIT */
/* mercsw 10081023 */
extern void __cdecl FUN_100240be(int param_1);
extern int DAT_100b3c9c;

void __cdecl FUN_10081023(undefined4 param_1, int param_2)
{
    FUN_100240be(param_2);
    *(int *)(DAT_100b3c9c + 0x28) = param_2;
    return;
}
