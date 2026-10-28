/* SPDX-License-Identifier: MIT */
/* mercsw 10068905 */
extern unsigned int DAT_100aaf70;
extern unsigned int DAT_100aaf88;
extern unsigned int _DAT_100aaf78;
extern unsigned int DAT_100aaf7c;
extern unsigned int DAT_100aaf74;
extern unsigned int g_disabledBits100aafc0;
extern unsigned int g_disabled100aafbc;
extern unsigned int _DAT_100aaf80;

void __cdecl FUN_10068905(unsigned int *param_1)
{
    unsigned int *puVar2;
    int iVar1;
    
    puVar2 = &DAT_100aaf70;
    for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 - 1) {
        *param_1 = *puVar2;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
    }
    DAT_100aaf88 = 0;
    _DAT_100aaf78 = 0;
    DAT_100aaf7c = 1;
    DAT_100aaf74 = 1;
    g_disabledBits100aafc0 = 0xb00;
    g_disabled100aafbc = 1;
    _DAT_100aaf80 = _DAT_100aaf80 & 0xfffffffb;
    return;
}
