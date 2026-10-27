/* SPDX-License-Identifier: MIT */
/* mercsw 10065d43 */
extern void FUN_10036a72(int param_1);
extern int FUN_10036a37(int param_1);
extern int DAT_100b392c;

void __stdcall FUN_10065d43(void)
{
    int iVar1;
    
    FUN_10036a72(DAT_100b392c);
    do {
        iVar1 = FUN_10036a37(DAT_100b392c);
    } while (iVar1 < 0x5b);
    return;
}
