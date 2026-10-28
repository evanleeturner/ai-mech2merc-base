/* SPDX-License-Identifier: MIT */
/* mw2shell 100046f0 */
int DAT_1008371c;
int DAT_10083720;
int DAT_10083724;
int DAT_10083728;
int DAT_1008372c;
int DAT_10083710;
int DAT_10084c58;
int DAT_10084c5c;

void __stdcall FUN_100046f0(void)
{
    int iVar1;
    
    iVar1 = (DAT_1008371c % 10000) * 0x10;
    DAT_10083724 = *(int *)(&DAT_10084c5c + iVar1);
    DAT_10083720 = *(int *)(&DAT_10084c58 + iVar1);
    if (9999 < DAT_1008371c) {
        DAT_10083724 = DAT_10083724 / 2;
    }
    DAT_10083728 = (DAT_1008371c < 10000) - 1 & 7;
    DAT_1008372c = DAT_10083710 - DAT_10083724;
    return;
}
