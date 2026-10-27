/* SPDX-License-Identifier: MIT */
/* mercsw 1005121e */
extern undefined4 DAT_100aa1f4;
extern void __cdecl FUN_10036b20(undefined4 param_1, undefined4 param_2);
extern void __stdcall FUN_1006aeb1(void);

void __stdcall FUN_1005121e(void)
{
    if (DAT_100aa1f4 == 0) {
        FUN_10036b20(0x80, 0);
        FUN_1006aeb1();
    }
    return;
}
