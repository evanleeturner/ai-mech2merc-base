/* SPDX-License-Identifier: MIT */
/* mercsw 1002b855 */
extern int DAT_100eef40[];
extern int DAT_10123130[];
extern char DAT_101232f3[];
extern char DAT_101600e0[];

extern int __cdecl FUN_1004d47f(int param_1);
extern int __cdecl FUN_1002b6fe(int param_1, int *param_2, int param_3);
extern int __cdecl FUN_10044933(int param_1);
extern void __cdecl FUN_1002a4e0(int param_1, int param_2, unsigned short param_3, int param_4);

unsigned int __cdecl FUN_1002b855(int param_1, unsigned int param_2)
{
    int iVar1;
    int iVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    unsigned short uVar6;
    int local_58;
    unsigned int local_4c;
    int local_48;
    int local_38[5];
    int local_18;
    unsigned int local_14;
    int local_10;
    int local_c;
    char *local_8;
    int tmp_i;
    unsigned int tmp_u;

    local_14 = 0;
    if ((param_2 & 0xf000) == 0) {
        iVar1 = FUN_1004d47f(param_1);
        if (iVar1 == -1) {
            local_4c = 0;
        }
        else {
            iVar2 = FUN_1002b6fe(param_1, local_38, 1);
            if (iVar2 == 0) {
                local_4c = 0;
            }
            else {
                if ((param_2 & 0xf00) == 0x200) {
                    local_14 = (unsigned int)*(unsigned short *)((char *)DAT_100eef40[param_2 & 0xff] + 0x17c);
                }
                uVar6 = (unsigned short)param_2;
                if (DAT_10123130[param_1] == 4) {
                    local_4c = 0;
                    local_8 = DAT_101600e0 + param_1 * 0x3c;
                    __builtin_memcpy(&local_58,
                                     DAT_101232f3 + DAT_10123130[param_1] * 0x13f + param_1 * 0x3c0a,
                                     4);
                    __builtin_memcpy(&tmp_i,
                                     DAT_101232f3 + DAT_10123130[param_1] * 0x13f + param_1 * 0x3c0a,
                                     4);
                    if (tmp_i == 0) {
                        local_58 = iVar2;
                    }
                    local_18 = 0;
                    while ((local_18 < iVar2) && (local_58 != 0)) {
                        local_10 = local_38[local_18];
                        __builtin_memcpy(&tmp_i, (char *)local_10 + 0x182, 4);
                        if ((*(short *)((char *)local_10 + 0x176) != 2) &&
                            ((*(short *)((char *)local_10 + 0x176) != 3) &&
                             ((iVar1 = FUN_10044933(*(int *)((char *)local_10 + 0x20)), iVar1 == 0) &&
                              (tmp_i != 0)))) {
                            FUN_1002a4e0(local_10, 2, uVar6, 1);
                            local_4c = 1;
                        }
                        local_18 = local_18 + 1;
                    }
                    if (*(int *)(local_8 + 8) != 0) {
                        local_18 = 4;
                        local_10 = local_38[4];
                        if ((*(short *)((char *)local_10 + 0x176) != 2) &&
                            (*(short *)((char *)local_10 + 0x176) != 3)) {
                            iVar1 = FUN_10044933(*(int *)((char *)local_10 + 0x20));
                            if (iVar1 == 0) {
                                __builtin_memcpy(&tmp_i, (char *)local_10 + 0x182, 4);
                                if (tmp_i != 0) {
                                    FUN_1002a4e0(local_10, 2, uVar6, 1);
                                    local_4c = 1;
                                }
                            }
                        }
                    }
                }
                else {
                    local_8 = DAT_101600e0 + param_1 * 0x3c;
                    local_c = -1;
                    local_48 = 0x7fff;
                    for (local_18 = 0; local_18 < iVar2; local_18 = local_18 + 1) {
                        local_10 = local_38[local_18];
                        if ((*(int *)((char *)local_10 + 4) != iVar1) &&
                            ((*(unsigned char *)((char *)local_10 + 0x17e) & 3) == 0) &&
                            (*(short *)((char *)local_10 + 0x176) != 2) &&
                            (*(short *)((char *)local_10 + 0x176) != 3)) {
                            iVar3 = FUN_10044933(*(int *)((char *)local_10 + 0x20));
                            if (iVar3 == 0) {
                                __builtin_memcpy(&tmp_i, (char *)local_10 + 0x182, 4);
                                if (tmp_i != 0) {
                                    uVar4 = (unsigned int)*(unsigned short *)((char *)local_10 + 0x17c) - local_14;
                                    uVar5 = (unsigned int)((int)uVar4 >> 0x1f);
                                    if ((int)((uVar4 ^ uVar5) - uVar5) < local_48) {
                                        local_48 = (int)((uVar4 ^ uVar5) - uVar5);
                                        local_c = *(int *)((char *)local_10 + 4);
                                    }
                                }
                            }
                        }
                    }
                    if (*(int *)(local_8 + 8) != 0) {
                        local_18 = 4;
                        local_10 = local_38[4];
                        if ((*(int *)((char *)local_10 + 4) != iVar1) &&
                            ((*(unsigned char *)((char *)local_10 + 0x17e) & 3) == 0) &&
                            (*(short *)((char *)local_10 + 0x176) != 2) &&
                            (*(short *)((char *)local_10 + 0x176) != 3)) {
                            iVar2 = FUN_10044933(*(int *)((char *)local_10 + 0x20));
                            if (iVar2 == 0) {
                                __builtin_memcpy(&tmp_i, (char *)local_10 + 0x182, 4);
                                if (tmp_i != 0) {
                                    uVar4 = (unsigned int)*(unsigned short *)((char *)local_10 + 0x17c) - local_14;
                                    uVar5 = (unsigned int)((int)uVar4 >> 0x1f);
                                    if ((int)((uVar4 ^ uVar5) - uVar5) < local_48) {
                                        local_c = *(int *)((char *)local_10 + 4);
                                    }
                                }
                            }
                        }
                    }
                    if (local_c == -1) {
                        local_10 = DAT_100eef40[iVar1];
                        __builtin_memcpy(&tmp_i, (char *)local_10 + 0x182, 4);
                        if ((((*(unsigned char *)((char *)local_10 + 0x17e) & 3) != 0) ||
                             (*(short *)((char *)local_10 + 0x176) == 2)) ||
                            (*(short *)((char *)local_10 + 0x176) == 3) ||
                            ((iVar1 = FUN_10044933(*(int *)((char *)local_10 + 0x20)), iVar1 != 0) ||
                             (tmp_i == 0))) {
                            local_10 = 0;
                        }
                    }
                    else {
                        local_10 = DAT_100eef40[local_c];
                    }
                    if (local_10 == 0) {
                        local_4c = 0;
                    }
                    else {
                        FUN_1002a4e0(local_10, 2, uVar6, 1);
                        __builtin_memcpy(&tmp_u, (char *)local_10 + 0x17e, 4);
                        tmp_u = tmp_u | 0x20;
                        __builtin_memcpy((char *)local_10 + 0x17e, &tmp_u, 4);
                        __builtin_memcpy(&tmp_u, (char *)local_10 + 0x17e, 4);
                        tmp_u = tmp_u & 0xffffffbf;
                        __builtin_memcpy((char *)local_10 + 0x17e, &tmp_u, 4);
                        local_4c = 1;
                    }
                }
            }
        }
    }
    else {
        local_4c = 0;
    }
    return local_4c;
}
