/* SPDX-License-Identifier: MIT */
/* mw2shell 10042340 */
extern void __stdcall FUN_10042270(void);
extern int DAT_100d08c0;
extern int DAT_100d08c4;
extern int DAT_100d08c8;

void __stdcall FUN_10042340(void)
{
    DAT_100d08c0 = 0;
    DAT_100d08c4 = 0;
    DAT_100d08c8 = 0;
    FUN_10042270();
    return;
}
