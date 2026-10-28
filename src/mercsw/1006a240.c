/* SPDX-License-Identifier: MIT */
/* mercsw 1006a240 */
extern int DAT_100b3a9c;
extern int DAT_100b3aa0;

void __stdcall FUN_1006a240(void)
{
    int iVar1;
    
    iVar1 = DAT_100b3aa0;
    DAT_100b3a9c = DAT_100b3a9c + -1;
    if (DAT_100b3a9c == 0) {
        DAT_100b3a9c = 4;
        DAT_100b3aa0 = DAT_100b3aa0 + -1;
        if (iVar1 == 0) {
            DAT_100b3aa0 = 3;
        }
    }
    return;
}
