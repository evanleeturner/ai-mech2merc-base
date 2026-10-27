/* SPDX-License-Identifier: MIT */
/* mercsw 1000d301 */
extern int DAT_101f6518;
void __cdecl FUN_1005dadc(int *param_1);

void __cdecl FUN_1000d301(int param_1)
{
    FUN_1005dadc((int *)((int)&DAT_101f6518 + param_1 * 0x7c));
    return;
}
