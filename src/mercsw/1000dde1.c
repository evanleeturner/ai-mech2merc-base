/* SPDX-License-Identifier: MIT */
/* mercsw 1000dde1 */
extern int DAT_100a7584;
extern char DAT_101f64bc[];
extern char DAT_101f64c0[];

void __cdecl FUN_1002f322(int param_1, unsigned int *param_2, unsigned int *param_3, unsigned int *param_4);

void __cdecl FUN_1000dde1(int param_1, unsigned int *param_2, unsigned int *param_3, unsigned int *param_4)
{
    int iVar1;

    if ((DAT_100a7584 < param_1) || (param_1 < 0)) {
        *param_4 = 0;
        *param_3 = *param_4;
        *param_2 = *param_3;
    }
    else {
        iVar1 = *(int *)(DAT_101f64bc + (unsigned int)param_1 * 0x7cu);
        if (iVar1 == 0) {
            if (*(int *)(DAT_101f64c0 + (unsigned int)param_1 * 0x7cu) == 0) {
                *param_4 = 0;
                *param_3 = *param_4;
                *param_2 = *param_3;
            }
            else {
                FUN_1002f322(*(int *)(DAT_101f64c0 + (unsigned int)param_1 * 0x7cu), param_2, param_3, param_4);
            }
        }
        else {
            *param_2 = *(unsigned int *)((char *)iVar1 + 0x34);
            *param_3 = *(unsigned int *)((char *)iVar1 + 0x38);
            *param_4 = *(unsigned int *)((char *)iVar1 + 0x3c);
        }
    }
    return;
}
