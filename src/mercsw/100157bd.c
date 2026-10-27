/* SPDX-License-Identifier: MIT */
/* mercsw 100157bd */
int __cdecl FUN_10011e60(int a, int b, int c);

unsigned int __cdecl FUN_100157bd(int param_1, int param_2, int param_3, int param_4)
{
    unsigned char bVar1;
    unsigned char bVar2;
    unsigned char *pbVar3;
    int iVar4;
    int iVar5;
    unsigned int uVar6;
    unsigned int local_18;
    unsigned int local_10;
    int local_c;

    bVar1 = 0;
    bVar2 = 0;
    uVar6 = (unsigned int)*(unsigned short *)(param_1 + 2);
    if (2 < uVar6) {
        pbVar3 = (unsigned char *)(int)((unsigned int)*(int *)(param_1 + 4) + (unsigned int)param_1);
        local_10 = 0;
        local_18 = uVar6;
        do {
            if (local_18 == 0) break;
            iVar4 = (int)((unsigned int)pbVar3[local_18 - 1] * 0x44U + (unsigned int)param_2);
            if (param_3 < *(int *)(iVar4 + 0x10)) {
                local_10 = local_10 | 2;
            }
            else {
                local_10 = local_10 | 1;
            }
            if (param_4 < *(int *)(iVar4 + 0x14)) {
                local_10 = local_10 | 8;
            }
            else {
                local_10 = local_10 | 4;
            }
            local_18 = local_18 - 1;
        } while (local_10 != 0xf);
        if (local_10 == 0xf) {
            local_18 = uVar6;
            iVar4 = (int)((unsigned int)*pbVar3 * 0x44U + (unsigned int)param_2);
            for (;;) {
                local_c = iVar4;
                uVar6 = local_18 - 1;
                if (local_18 == 0) break;
                iVar4 = (int)((unsigned int)pbVar3[uVar6] * 0x44U + (unsigned int)param_2);
                local_18 = uVar6;
                if (((param_4 <= *(int *)(iVar4 + 0x14)) || (param_4 <= *(int *)(local_c + 0x14))) &&
                    ((*(int *)(iVar4 + 0x14) <= param_4) || (*(int *)(local_c + 0x14) <= param_4))) {
                    if ((*(int *)(iVar4 + 0x14) == param_4) && (*(int *)(local_c + 0x14) == param_4)) {
                        if ((*(int *)(iVar4 + 0x10) < param_3) && (*(int *)(local_c + 0x10) < param_3)) {
                            return 0;
                        }
                        if ((param_3 < *(int *)(iVar4 + 0x10)) && (param_3 < *(int *)(local_c + 0x10))) {
                            return 0;
                        }
                        return 1;
                    }
                    if (*(int *)(iVar4 + 0x14) != param_4) {
                        if ((*(int *)(iVar4 + 0x10) < param_3) && (*(int *)(local_c + 0x10) < param_3)) {
                            if (bVar1) {
                                return 0;
                            }
                            if (bVar2) {
                                return 1;
                            }
                            bVar1 = 1;
                        }
                        else if ((param_3 < *(int *)(iVar4 + 0x10)) && (param_3 < *(int *)(local_c + 0x10))) {
                            if (bVar2) {
                                return 0;
                            }
                            if (bVar1) {
                                return 1;
                            }
                            bVar2 = 1;
                        }
                        else {
                            iVar5 = FUN_10011e60(
                                (int)((unsigned int)*(int *)(local_c + 0x10) - (unsigned int)*(int *)(iVar4 + 0x10)),
                                (int)((unsigned int)param_4 - (unsigned int)*(int *)(iVar4 + 0x14)),
                                (int)((unsigned int)*(int *)(local_c + 0x14) - (unsigned int)*(int *)(iVar4 + 0x14)));
                            iVar5 = (int)(((unsigned int)*(int *)(iVar4 + 0x10) + (unsigned int)iVar5) - (unsigned int)param_3);
                            if (iVar5 < 0) {
                                if (bVar1) {
                                    return 0;
                                }
                                if (bVar2) {
                                    return 1;
                                }
                                bVar1 = 1;
                            }
                            else {
                                if (iVar5 < 1) {
                                    return 1;
                                }
                                if (bVar2) {
                                    return 0;
                                }
                                if (bVar1) {
                                    return 1;
                                }
                                bVar2 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
