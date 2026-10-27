/* SPDX-License-Identifier: MIT */
/* mercsw 1000d1f0 */
extern undefined4 DAT_101f6518;
extern void __cdecl FUN_1005d8f5(int *param_1, undefined *param_2, undefined4 param_3, undefined4 param_4);

void __cdecl FUN_1000d1f0(int param_1, undefined *param_2, undefined4 param_3, undefined4 param_4)
{
    FUN_1005d8f5((int *)(&DAT_101f6518 + param_1 * 0x7c), param_2, param_3, param_4);
    return;
}
