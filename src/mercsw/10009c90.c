/* SPDX-License-Identifier: MIT */
/* mercsw 10009c90 */
extern int DAT_10215658;
extern int DAT_10215660;

void __stdcall FUN_10009c90(void)
{
    if ((DAT_10215658 == 4) && (DAT_10215660 == 4)) {
        DAT_10215660 = 5;
    }
    else if ((DAT_10215658 < 3) && (DAT_10215660 < 3)) {
        DAT_10215660 = 3;
    }
}
