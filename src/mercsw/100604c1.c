/* SPDX-License-Identifier: MIT */
/* mercsw 100604c1 */
void __cdecl FUN_100604c1(int param_1, int *param_2, int *param_3)
{
    int iVar1;
    int iVar2;
    int iVar3;

    iVar1 = *(int *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x50);
    *param_2 = (int)((unsigned int)*(int *)(param_1 + 0x4c) +
                     (unsigned int)((int)((unsigned int)*(int *)(param_1 + 0x2c) +
                                          (unsigned int)*(int *)(param_1 + 0x30)) / 2));
    *param_3 = (int)((unsigned int)iVar3 +
                     (unsigned int)((int)((unsigned int)iVar1 + (unsigned int)iVar2) / 2));
    return;
}
