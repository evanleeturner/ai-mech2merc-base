/* SPDX-License-Identifier: MIT */
/* mercsw 10025c83 */
extern int __cdecl RaySlabInterval(int param_1, int param_2, int param_3, int param_4, int *param_5, int *param_6);
extern int __cdecl FUN_1002634e(int param_1);
extern unsigned char __cdecl FUN_10025e99(int param_1, int param_2, int *param_3);
extern int __cdecl FUN_10014db6(int param_1, int param_2, int *param_3);

unsigned int __cdecl FUN_10025c83(int *param_1, int param_2, int *param_3)
{
    unsigned char bVar1;
    unsigned int uVar2;
    int iVar3;
    int local_20;
    int local_1c;
    int local_18;
    int *local_14;
    int local_10;
    int local_c;
    int local_8;

    if (param_1 == (int *)0) {
        uVar2 = 0;
    }
    else {
        iVar3 = RaySlabInterval(*param_3, param_3[9], *param_1, param_1[1], &local_8, &local_20);
        if (iVar3 == 0) {
            iVar3 = RaySlabInterval(param_3[1], param_3[10], param_1[2], param_1[3], &local_10, &local_1c);
            if (iVar3 == 0) {
                if (local_8 < local_10) {
                    local_8 = local_10;
                }
                if (local_1c < local_20) {
                    local_20 = local_1c;
                }
                iVar3 = RaySlabInterval(param_3[2], param_3[0xb], param_1[4], param_1[5], &local_10, &local_1c);
                if (iVar3 == 0) {
                    if (local_8 < local_10) {
                        local_8 = local_10;
                    }
                    if (local_1c < local_20) {
                        local_20 = local_1c;
                    }
                    if (local_20 < local_8) {
                        uVar2 = 0;
                    }
                    else {
                        if (local_8 < 0) {
                            local_8 = 0;
                        }
                        local_10 = FUN_1002634e((int)param_3);
                        if (local_10 < local_20) {
                            local_20 = local_10;
                        }
                        if (local_20 < local_8) {
                            uVar2 = 0;
                        }
                        else if (param_1[6] == 0) {
                            bVar1 = FUN_10025e99((int)param_1, param_2, param_3);
                            if ((unsigned int)bVar1 == 0) {
                                uVar2 = 0;
                            }
                            else {
                                uVar2 = 1;
                            }
                        }
                        else {
                            local_c = (int)((unsigned int)param_2 + 0x18U);
                            local_14 = param_1 + 0xb;
                            for (local_18 = 0; local_18 < param_1[6]; local_18 = local_18 + 1) {
                                iVar3 = *local_14;
                                local_14 = local_14 + 1;
                                iVar3 = FUN_10014db6(iVar3, local_c, param_3);
                                if (iVar3 != 0) {
                                    return 1;
                                }
                            }
                            uVar2 = 0;
                        }
                    }
                }
                else {
                    uVar2 = 0;
                }
            }
            else {
                uVar2 = 0;
            }
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}
