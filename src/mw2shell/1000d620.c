/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d620 */
extern int DAT_100a678c;
extern int __cdecl FindListEntryByKey_Likely(int param_1, int param_2);
extern int __cdecl FUN_1006b230(int param_1, int param_2, char param_3);

bool __cdecl FUN_1000d620(int param_1)
{
    int iVar1;
    
    iVar1 = FindListEntryByKey_Likely(DAT_100a678c, *(int *)(param_1 + 0x810));
    iVar1 = FUN_1006b230(param_1, iVar1, '\x01');
    return iVar1 != 0;
}
