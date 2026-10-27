/* SPDX-License-Identifier: MIT */
/* mercsw 100467d6 */
extern undefined4 DAT_100b04b8;
extern undefined4 DAT_100b04c4;
extern void __cdecl FUN_10046a29(undefined4 *param_1, int param_2);

void __stdcall FUN_100467d6(void)
{
    if (DAT_100b04c4 != 0) {
        FUN_10046a29(&DAT_100b04b8, -1);
    }
    return;
}
