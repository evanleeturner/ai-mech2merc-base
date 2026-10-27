/* SPDX-License-Identifier: MIT */
/* mercsw 1001d57c */
void __cdecl FUN_1001d57c(int param_1, int param_2, unsigned short param_3)
{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 != 0) && (param_2 < (int)*(short *)(iVar1 + 6))) {
        *(unsigned short *)((unsigned int)*(int *)(iVar1 + 8) + (unsigned int)iVar1 + (unsigned int)param_2 * 0x24U) = param_3;
    }
    return;
}
