/* SPDX-License-Identifier: MIT */
/* mercsw 10009b92 */
extern int DAT_10215658;
extern int DAT_10215660;

void __stdcall FUN_10009b92(void)
{
    if ((DAT_10215658 < 3) && (DAT_10215660 < 3)) {
        DAT_10215660 = (int)((unsigned int)DAT_10215658 + 1u) % 3;
    }
}
