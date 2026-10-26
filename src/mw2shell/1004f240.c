/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f240 */
extern int DAT_1009bdf8;

int __cdecl FUN_1004f240(int param_1)
{
    if ((-1 < param_1) && (param_1 < 5)) {
        DAT_1009bdf8 = param_1;
        return 0;
    }
    return 2;
}
