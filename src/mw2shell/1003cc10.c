/* SPDX-License-Identifier: MIT */
/* mw2shell 1003cc10 */
extern int DAT_100b9d88;
extern void *DAT_100a6798;

void __stdcall FUN_1003cc10(void)
{
    DAT_100b9d88 = DAT_100b9d88 + 1;
    if (*(int *)(DAT_100a6798 + 4) <= DAT_100b9d88) {
        DAT_100b9d88 = 0;
    }
    return;
}
