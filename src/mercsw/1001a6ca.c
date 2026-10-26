/* SPDX-License-Identifier: MIT */
/* mercsw 1001a6ca */
unsigned int __cdecl FUN_1001a6ca(unsigned int *param_1, unsigned int *param_2)
{
    if ((param_2 == (unsigned int *)0) || (param_1 == (unsigned int *)0)) {
        return 0;
    }
    param_2[0] = param_1[0];
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    param_2[6] = 1;
    return 1;
}
