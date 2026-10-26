/* SPDX-License-Identifier: MIT */
/* mw2shell 10056c20 */
void __cdecl FUN_10056c20(int *param_1, int param_2, int param_3)
{
    param_1[1] = (int)((unsigned int)param_1[1] + (unsigned int)param_2);
    param_1[3] = (int)((unsigned int)param_1[3] + (unsigned int)param_2);
    *param_1 = (int)((unsigned int)*param_1 + (unsigned int)param_3);
    param_1[2] = (int)((unsigned int)param_1[2] + (unsigned int)param_3);
    return;
}
