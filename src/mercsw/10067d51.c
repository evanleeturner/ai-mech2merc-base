/* SPDX-License-Identifier: MIT */
/* mercsw 10067d51 */
int __cdecl FUN_10067d51(int *param_1)
{
    int iVar1;

    iVar1 = (int)((unsigned int)param_1[1] - (unsigned int)*param_1);
    iVar1 = iVar1 >> (*(unsigned char *)(param_1 + 2) & 0x1f);
    *param_1 = (int)((unsigned int)*param_1 + (unsigned int)iVar1);
    return *param_1;
}
