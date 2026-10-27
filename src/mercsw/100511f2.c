/* SPDX-License-Identifier: MIT */
/* mercsw 100511f2 */
extern undefined4 DAT_100aa1f4;
extern void __cdecl FUN_10036b20(undefined4 param_1, undefined4 param_2);
extern void __stdcall FUN_1006ae8d(void);

void __stdcall FUN_100511f2(void)
{
    if (DAT_100aa1f4 == 0) {
        FUN_10036b20(0x80, 1);
        FUN_1006ae8d();
    }
    return;
}
