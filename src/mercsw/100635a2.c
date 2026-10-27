/* SPDX-License-Identifier: MIT */
/* mercsw 100635a2 */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern void __cdecl FUN_10062fc4(undefined4 param_1);

void __stdcall FUN_100635a2(void)
{
    FUN_10062fc4(*(undefined4 *)(DAT_100eef40[DAT_100adf38] + 0x20));
    return;
}
