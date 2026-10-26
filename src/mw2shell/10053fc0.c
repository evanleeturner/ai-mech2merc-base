/* SPDX-License-Identifier: MIT */
/* mw2shell 10053fc0 */
void __cdecl FUN_10053fc0(int param_1, unsigned int *param_2)
{
    if (param_2 != (unsigned int *)0) {
        param_2[1] = 0xffffffffu;
        param_2[4] = 0xffffffffu;
        param_2[2] = 0;
        param_2[3] = 0;
        *param_2 = (unsigned int)(6 < param_1);
        param_2[5] = 0xffffffffu;
    }
    return;
}
