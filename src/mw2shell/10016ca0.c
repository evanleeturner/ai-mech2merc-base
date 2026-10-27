/* SPDX-License-Identifier: MIT */
/* mw2shell 10016ca0 */
extern int DAT_1008edfc;
extern char s_UnregisterMenuFunction__pointer_m_1008f16c[];

void __cdecl FUN_100640a0(char *param_1);

void __cdecl FUN_10016ca0(int param_1)
{
    DAT_1008edfc = param_1;
    if (param_1 != 0) {
        DAT_1008edfc = 0;
        return;
    }
    FUN_100640a0(s_UnregisterMenuFunction__pointer_m_1008f16c);
    return;
}
