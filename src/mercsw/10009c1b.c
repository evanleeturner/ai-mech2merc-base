/* SPDX-License-Identifier: MIT */
/* mercsw 10009c1b */
extern int DAT_10215650;
extern int DAT_10215658;
extern int DAT_10215660;

void __cdecl FUN_10009c1b(int param_1)
{
    if (param_1 != DAT_10215658) {
        if ((DAT_10215658 < 3) && (param_1 < 3)) {
            DAT_10215660 = param_1;
        }
        else if (DAT_10215658 < 3) {
            DAT_10215660 = 3;
        }
        else {
            DAT_10215660 = 5;
            DAT_10215650 = param_1;
        }
    }
}
