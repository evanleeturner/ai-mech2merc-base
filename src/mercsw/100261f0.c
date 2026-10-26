/* SPDX-License-Identifier: MIT */
/* mercsw 100261f0 */
void __cdecl FUN_100261f0(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
    param_1[0] = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[4] = param_6;
    param_1[5] = param_7;
    param_1[6] = (int)((unsigned int)param_5 - (unsigned int)param_2);
    param_1[7] = (int)((unsigned int)param_6 - (unsigned int)param_3);
    param_1[8] = (int)((unsigned int)param_7 - (unsigned int)param_4);
    param_1[0xc] = 0;
    param_1[0xb] = param_1[0xc];
    param_1[10] = param_1[0xb];
    param_1[9] = param_1[10];
    param_1[0xd] = 0;
}
