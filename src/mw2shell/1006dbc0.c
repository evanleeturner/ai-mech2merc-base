/* SPDX-License-Identifier: MIT */
/* mw2shell 1006dbc0 */
extern int DAT_100aa6bc;
extern int DAT_100aa6b8;

int __cdecl FUN_1006dbc0(int param_1)
{
    int iVar1;
    
    iVar1 = *(int *)(param_1 + 0x364) * 0x12;
    iVar1 = *(int *)(DAT_100aa6bc + 0x760 + iVar1) - *(int *)(DAT_100aa6b8 + 0x760 + iVar1);
    return (iVar1 & 0xFFFFFF00) | (iVar1 < 1);
}
