/* SPDX-License-Identifier: MIT */
/* mw2shell 1003cc40 */
extern int DAT_100b9d88;
extern void *DAT_100a6798;

void __stdcall FUN_1003cc40(void)
{
    DAT_100b9d88 = DAT_100b9d88 + -1;
    if (DAT_100b9d88 >= 0) {
        DAT_100b9d88 = *(int *)(DAT_100a6798 + 4) + -1;
    }
    return;
}
