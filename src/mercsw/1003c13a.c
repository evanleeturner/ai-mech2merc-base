/* SPDX-License-Identifier: MIT */
/* mercsw 1003c13a */
extern int DAT_100aefa8;

void __cdecl FUN_1003c13a(unsigned int param_1, int enable)
{
    if (enable == 0) {
        DAT_100aefa8 = 2;
    }
    else {
        DAT_100aefa8 = 1;
    }
}
