/* SPDX-License-Identifier: MIT */
/* mercsw 10089643 */
void __cdecl FUN_10089643(unsigned int *param_1, unsigned int *param_2)
{
    unsigned int uVar1;

    *param_2 = *param_1;
    param_2[4] = param_1[4];
    param_2[8] = param_1[8];
    uVar1 = param_1[1];
    param_2[1] = param_1[3];
    param_2[3] = uVar1;
    uVar1 = param_1[6];
    param_2[6] = param_1[2];
    param_2[2] = uVar1;
    uVar1 = param_1[7];
    param_2[7] = param_1[5];
    param_2[5] = uVar1;
}
