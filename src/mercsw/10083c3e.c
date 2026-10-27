/* SPDX-License-Identifier: MIT */
/* mercsw 10083c3e */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
extern void __cdecl FUN_1008276d(undefined4 param_1, undefined4 param_2, undefined4 param_3);

void __cdecl FUN_10083c3e(int param_1)
{
    FUN_1008276d(DAT_100eef40[DAT_100adf38], param_1, 0x40008);
    return;
}
