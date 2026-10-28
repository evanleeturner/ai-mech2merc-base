/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f4c0 */
int FUN_1004f4c0(int param_1, int *param_2, int param_3)
{
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    iVar2 = *param_2;
    while (iVar2 < param_3 && *(char *)(*param_2 + param_1) == ' ') {
        iVar2 = *param_2 + 1;
        iVar1 = iVar1 + 1;
        *param_2 = iVar2;
    }
    return iVar1;
}
