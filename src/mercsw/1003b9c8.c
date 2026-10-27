/* SPDX-License-Identifier: MIT */
/* mercsw 1003b9c8 */
extern void __cdecl FUN_1003b59a(int param_1);
extern void __cdecl FUN_1003b954(int *param_1);

void __cdecl FUN_1003b9c8(int *param_1)
{
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    FUN_1003b59a((int)param_1);
    FUN_1003b954(param_1);
    return;
}
