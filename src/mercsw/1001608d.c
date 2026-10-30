/* SPDX-License-Identifier: MIT */
/* mercsw 1001608d */
int __cdecl FUN_10006b20(int param_1);
int __cdecl FUN_10006b9a(int param_1);
int __cdecl FixedMul29(int param_1, int param_2);
void __cdecl FUN_100676f7(int param_1, int *param_2, int *param_3);
void __cdecl FUN_10066f36(int param_1, int *param_2, int *param_3);
unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __cdecl FUN_1001608d(int *param_1, int param_2, int param_3, int param_4)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int local_28[2];   /* local_28 / local_24: pair written by FUN_100676f7 */
    int local_1c[2];   /* local_1c / local_18: pair passed by address */
    int local_14[2];   /* local_14 / local_10: pair written by FUN_10066f36 */
    int local_20;
    int local_c;
    int local_8;

    local_8 = (int)((unsigned int)((unsigned int)param_1[4] - (unsigned int)param_1[2] + 1u) * 0x10000u);
    local_20 = FUN_10006b20(param_2);
    local_c = FUN_10006b9a(param_2);
    iVar1 = param_1[3];
    iVar2 = param_1[1];
    iVar3 = FixedMul29(local_8, local_c);
    local_1c[0] = (int)((unsigned int)((int)((unsigned int)iVar1 - (unsigned int)iVar2 + 1u) >> 1) +
                        (unsigned int)(iVar3 >> 0x10));
    iVar1 = param_1[4];
    iVar2 = param_1[2];
    iVar3 = FixedMul29(local_8, local_20);
    local_1c[1] = (int)((unsigned int)((int)((unsigned int)iVar1 - (unsigned int)iVar2 + 1u) >> 1) +
                        (unsigned int)(iVar3 >> 0x10));
    FUN_100676f7((int)param_1, local_1c, local_28);
    if (param_4 == 0) {
        FUN_10056489(param_1, local_28[0], local_28[1],
                     (int)((unsigned int)param_1[3] - (unsigned int)param_1[1] + 1u) >> 1,
                     (int)((unsigned int)param_1[4] - (unsigned int)param_1[2] + 1u) >> 1,
                     0, param_3);
    }
    else {
        local_8 = (int)((unsigned int)((unsigned int)((int *)param_4)[3] -
                                       (unsigned int)((int *)param_4)[1] + 1u) * 0x10000u);
        iVar1 = ((int *)param_4)[3];
        iVar2 = ((int *)param_4)[1];
        iVar3 = FixedMul29(local_8, local_c);
        local_1c[0] = (int)((unsigned int)((int)((unsigned int)iVar1 - (unsigned int)iVar2 + 1u) >> 1) +
                            (unsigned int)(iVar3 >> 0x10));
        iVar1 = ((int *)param_4)[4];
        iVar2 = ((int *)param_4)[2];
        iVar3 = FixedMul29(local_8, local_20);
        local_1c[1] = (int)((unsigned int)((int)((unsigned int)iVar1 - (unsigned int)iVar2 + 1u) >> 1) +
                            (unsigned int)(iVar3 >> 0x10));
        FUN_10066f36(param_4, local_1c, local_14);
        local_14[0] = (int)((unsigned int)local_14[0] +
                            ((unsigned int)((int)((unsigned int)param_1[3] - (unsigned int)param_1[1] + 1u) >> 1) -
                             (unsigned int)((int)((unsigned int)((int *)param_4)[3] -
                                                  (unsigned int)((int *)param_4)[1] + 1u) >> 1)));
        local_14[1] = (int)((unsigned int)local_14[1] +
                            ((unsigned int)((int)((unsigned int)param_1[4] - (unsigned int)param_1[2] + 1u) >> 1) -
                             (unsigned int)((int)((unsigned int)((int *)param_4)[4] -
                                                  (unsigned int)((int *)param_4)[2] + 1u) >> 1)));
        FUN_10056489(param_1, local_28[0], local_28[1], local_14[0], local_14[1], 0, param_3);
    }
    return;
}
