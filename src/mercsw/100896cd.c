/* SPDX-License-Identifier: MIT */
/* mercsw 100896cd */
void __cdecl FUN_10089643(unsigned int *param_1, int *param_2);
void __cdecl FUN_10089060(int *param_1, int *param_2, int *param_3, int *param_4);

void __cdecl FUN_100896cd(unsigned int *param_1, int *param_2)
{
    int local_10;
    int local_c;
    int local_8;

    local_8 = (int)(0u - param_1[9]);
    local_c = (int)(0u - param_1[10]);
    local_10 = (int)(0u - param_1[0xb]);
    FUN_10089643(param_1, param_2);
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    FUN_10089060(param_2, &local_8, &local_c, &local_10);
    param_2[9] = local_8;
    param_2[10] = local_c;
    param_2[0xb] = local_10;
    return;
}
