/* SPDX-License-Identifier: MIT */
/* mercsw 10068962 */
extern int DAT_100aaf70[];
extern int DAT_100aaf74;
extern int DAT_100aaf78;
extern int DAT_100aaf7c;
extern int DAT_100aaf80;
extern int DAT_100aaf88;
extern int g_disabled100aafbc_Likely;
extern int g_disabledBits100aafc0_Likely;

void __cdecl FUN_10068962(int *param_1)
{
    int iVar1;
    int *puVar2;
    
    puVar2 = DAT_100aaf70;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 - 1) {
        *param_1 = *puVar2;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
    }
    DAT_100aaf88 = 0;
    DAT_100aaf78 = 0;
    DAT_100aaf7c = 1;
    DAT_100aaf74 = 1;
    g_disabledBits100aafc0_Likely = 0xb00;
    g_disabled100aafbc_Likely = 1;
    DAT_100aaf80 = DAT_100aaf80 & 0xfffffffb;
    return;
}
