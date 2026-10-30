/* SPDX-License-Identifier: MIT */
/* mercsw 100186c5 */
extern int DAT_100aafd8;
extern int DAT_100aae80;
extern int DAT_100ad6a4;
extern int DAT_100ad6a0;
extern int DAT_100aae68;
extern int DAT_100aae6c;
extern int DAT_100aae70;
extern int DAT_100aaf90;
extern int DAT_100aaf8c;
extern int DAT_100aaf94;
extern int DAT_100aaf74;
extern int DAT_100aae84;
extern char *PTR_DAT_100aaf68;
extern int DAT_101f52e0[5];

void FUN_1008975d(int *);
int FUN_10006b9a(int);
int FUN_10006b20(int);
void FUN_10089060(int *, int *, int *, int *);
unsigned char FUN_1000fc90(int, int, int);
void FUN_10058e74(int *, char);
int FUN_1000fd2a(int, int);
int FUN_1000fdac(int, int);
void FUN_10019d07(int, int, int, int, int, int, int, int, int);
void FUN_10019d88(int, int, int, int, int, int, int);
void FUN_10019c6e(int, int, int, int, int, int, int, int, int, int, int);
void FUN_1003f893(int *, int, int, unsigned int *);
void FUN_10018265(int, int, int);

#define ADD(a, b) ((int)((unsigned int)(a) + (unsigned int)(b)))
#define SUB(a, b) ((int)((unsigned int)(a) - (unsigned int)(b)))

void __cdecl FUN_100186c5(int param_1)
{
    unsigned char bVar1;
    unsigned char bVar2;
    unsigned char bVar3;
    unsigned char bVar4;
    int iVar5;
    int *piVar6;
    int *piVar7;
    int local_dc[12];
    unsigned int local_90[21];
    int local_30[5];
    int local_1c;
    int local_14;
    int local_10;
    int local_18;
    int local_8;
    unsigned int local_c;
    unsigned int local_ac;
    int local_a8;
    unsigned int local_a4;
    int local_a0;
    unsigned int local_9c;
    int local_98;
    int local_94;

    /* local_90 array indices: 0=local_90 1=local_8c 2=local_88
       6=local_78 7=local_74 8=local_70
       12=local_60 13=local_5c 14=local_58
       18=local_48 19=local_44 20=local_40 */

    local_ac = *(unsigned int *)(param_1 + 0x2c);
    local_c = *(unsigned int *)(param_1 + 0x30);
    local_18 = *(int *)(param_1 + 0x34);
    local_8 = *(int *)(param_1 + 0x38);
    local_a8 = 0;
    piVar6 = DAT_101f52e0;
    piVar7 = local_30;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
    }
    local_98 = 0;
    local_1c = 0;
    local_94 = DAT_100aafd8;
    FUN_1008975d(local_dc);
    local_dc[0] = FUN_10006b9a(*(int *)(param_1 + 0x14));
    local_dc[4] = local_dc[0];
    local_dc[3] = FUN_10006b20(*(int *)(param_1 + 0x14));
    local_dc[1] = SUB(0, local_dc[3]);
    local_dc[11] = 0;
    local_dc[10] = 0;
    local_dc[9] = 0;
    FUN_10089060(local_dc, &local_1c, &local_94, &local_98);
    bVar1 = FUN_1000fc90(local_ac, local_8, param_1);
    bVar2 = FUN_1000fc90(local_c, local_18, param_1);
    bVar3 = FUN_1000fc90(local_c, local_8, param_1);
    bVar4 = FUN_1000fc90(local_ac, local_18, param_1);
    local_14 = ADD(ADD(ADD((int)bVar1 * 4, (int)bVar2 * 2), (int)bVar3 * 8), (int)bVar4);
    if (DAT_100aae80 == 0) {
        DAT_100ad6a4 = 0xd0;
    } else {
        DAT_100ad6a4 = 0xdf;
    }
    local_90[2] = (unsigned int)DAT_100ad6a0 << 0x10;
    local_90[20] = 0x7e0000;
    local_90[14] = 0x7e0000;
    if (((DAT_100aae68 < 1) || (DAT_100aae6c < 1)) || (DAT_100aae70 < 1)) {
        DAT_100aaf90 = 0;
    }
    local_90[8] = local_90[2];
    switch (local_14) {
    case 0:
        local_30[1] = ADD(local_30[1], local_ac);
        local_30[2] = ADD(local_30[2], local_18);
        local_30[3] = SUB(ADD(local_30[1], local_c), local_ac);
        local_30[4] = SUB(ADD(local_30[2], local_8), local_18);
        if (DAT_100aaf90 == 0) {
            FUN_10058e74(local_30, 0);
        } else {
            FUN_10058e74(local_30, (char)DAT_100ad6a4);
        }
        break;
    case 1:
        local_a4 = FUN_1000fdac(local_18, param_1);
        local_10 = FUN_1000fd2a(local_ac, param_1);
        if (DAT_100aaf8c != 0) {
            FUN_10019d88(local_ac, local_18, local_ac, local_10, local_a4, local_18, DAT_100ad6a0);
        }
        if (DAT_100aaf90 == 0) {
            FUN_10019c6e(local_ac, local_8, local_c, local_8, local_c, local_18, local_a4, local_18, local_ac,
                         local_10, 0);
        } else {
            FUN_10019c6e(local_ac, local_8, local_c, local_8, local_c, local_18, local_a4, local_18, local_ac,
                         local_10, DAT_100ad6a4);
        }
        break;
    case 2:
        local_a4 = FUN_1000fdac(local_18, param_1);
        local_a0 = FUN_1000fd2a(local_c, param_1);
        if (DAT_100aaf8c != 0) {
            FUN_10019d88(local_c, local_18, local_a4, local_18, local_c, local_a0, DAT_100ad6a0);
        }
        if (DAT_100aaf90 == 0) {
            FUN_10019c6e(local_ac, local_18, local_ac, local_8, local_c, local_8, local_c, local_a0, local_a4,
                         local_18, 0);
        } else {
            FUN_10019c6e(local_ac, local_18, local_ac, local_8, local_c, local_8, local_c, local_a0, local_a4,
                         local_18, DAT_100ad6a4);
        }
        break;
    case 3:
        local_10 = FUN_1000fd2a(local_ac, param_1);
        local_a0 = FUN_1000fd2a(local_c, param_1);
        if ((DAT_100aaf94 != 0) && (DAT_100aaf8c != 0)) {
            local_90[18] = local_c;
            local_90[0] = local_c;
            local_90[12] = local_ac;
            local_90[6] = local_ac;
            local_90[1] = SUB(local_a0, local_94);
            local_90[7] = SUB(local_10, local_94);
            local_90[13] = local_10;
            local_a8 = 1;
            local_90[19] = local_a0;
        }
        if (local_a0 == local_10) {
            if (DAT_100aaf8c != 0) {
                local_30[1] = ADD(local_30[1], local_ac);
                local_30[2] = ADD(local_30[2], local_18);
                local_30[3] = SUB(ADD(local_30[1], local_c), local_ac);
                local_30[4] = SUB(ADD(local_30[2], local_10), local_18);
                FUN_10058e74(local_30, (char)DAT_100ad6a0);
            }
            piVar6 = DAT_101f52e0;
            piVar7 = local_30;
            for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar7 = *piVar6;
                piVar6 = piVar6 + 1;
                piVar7 = piVar7 + 1;
            }
            local_30[1] = ADD(local_30[1], local_ac);
            local_30[2] = ADD(local_30[2], local_10);
            local_30[3] = SUB(ADD(local_30[1], local_c), local_ac);
            local_30[4] = SUB(ADD(local_30[2], local_8), local_10);
            if (DAT_100aaf90 == 0) {
                FUN_10058e74(local_30, 0);
            } else {
                FUN_10058e74(local_30, (char)DAT_100ad6a4);
            }
        } else {
            if (DAT_100aaf8c != 0) {
                FUN_10019d07(local_c, local_18, local_ac, local_18, local_ac, local_10, local_c, local_a0,
                             DAT_100ad6a0);
            }
            if (DAT_100aaf90 == 0) {
                FUN_10019d07(local_ac, local_8, local_c, local_8, local_c, local_a0, local_ac, local_10, 0);
            } else {
                FUN_10019d07(local_ac, local_8, local_c, local_8, local_c, local_a0, local_ac, local_10,
                             DAT_100ad6a4);
            }
        }
        break;
    case 4:
        local_9c = FUN_1000fdac(local_8, param_1);
        local_10 = FUN_1000fd2a(local_ac, param_1);
        if (DAT_100aaf8c != 0) {
            FUN_10019d88(local_ac, local_10, local_ac, local_8, local_9c, local_8, DAT_100ad6a0);
        }
        if (DAT_100aaf90 == 0) {
            FUN_10019c6e(local_c, local_8, local_c, local_18, local_ac, local_18, local_ac, local_10, local_9c,
                         local_8, 0);
        } else {
            FUN_10019c6e(local_c, local_8, local_c, local_18, local_ac, local_18, local_ac, local_10, local_9c,
                         local_8, DAT_100ad6a4);
        }
        break;
    case 5:
        local_a4 = FUN_1000fdac(local_18, param_1);
        local_9c = FUN_1000fdac(local_8, param_1);
        if (local_a4 == local_9c) {
            if (DAT_100aaf8c != 0) {
                local_30[1] = ADD(local_30[1], local_ac);
                local_30[2] = ADD(local_30[2], local_18);
                local_30[3] = ADD(SUB(ADD(local_30[1], local_a4), local_ac), -1);
                local_30[4] = ADD(SUB(ADD(local_30[2], local_8), local_18), -1);
                FUN_10058e74(local_30, (char)DAT_100ad6a0);
            }
            piVar6 = DAT_101f52e0;
            piVar7 = local_30;
            for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar7 = *piVar6;
                piVar6 = piVar6 + 1;
                piVar7 = piVar7 + 1;
            }
            local_30[1] = ADD(local_30[1], ADD(SUB(local_a4, local_ac), 1));
            local_30[2] = ADD(local_30[2], local_18);
            local_30[3] = ADD(SUB(ADD(local_30[1], local_c), local_a4), -1);
            local_30[4] = ADD(SUB(ADD(local_30[2], local_8), local_18), -1);
            if (DAT_100aaf90 == 0) {
                FUN_10058e74(local_30, 0);
            } else {
                FUN_10058e74(local_30, (char)DAT_100ad6a4);
            }
        } else {
            if (DAT_100aaf8c != 0) {
                FUN_10019d07(local_ac, local_18, local_ac, local_8, local_9c, local_8, local_a4, local_18,
                             DAT_100ad6a0);
            }
            if (DAT_100aaf90 == 0) {
                FUN_10019d07(local_c, local_8, local_c, local_18, local_a4, local_18, local_9c, local_8, 0);
            } else {
                FUN_10019d07(local_c, local_8, local_c, local_18, local_a4, local_18, local_9c, local_8,
                             DAT_100ad6a4);
            }
        }
        if ((DAT_100aaf94 != 0) && (DAT_100aaf8c != 0)) {
            local_90[0] = SUB(local_a4, local_1c);
            local_90[6] = SUB(local_9c, local_1c);
            local_90[12] = local_9c;
            local_90[18] = local_a4;
            local_90[1] = local_18;
            local_90[19] = local_18;
            local_90[7] = local_8;
            local_90[13] = local_8;
            local_a8 = 1;
        }
        break;
    case 7:
        local_9c = FUN_1000fdac(local_8, param_1);
        local_a0 = FUN_1000fd2a(local_c, param_1);
        local_10 = FUN_1000fd2a(local_ac, param_1);
        if (DAT_100aaf90 == 0) {
            FUN_10019d88(local_9c, local_8, local_c, local_8, local_c, local_a0, 0);
        } else {
            FUN_10019d88(local_9c, local_8, local_c, local_8, local_c, local_a0, DAT_100ad6a4);
        }
        if (DAT_100aaf8c != 0) {
            FUN_10019c6e(local_c, local_18, local_ac, local_18, local_ac, local_8, local_9c, local_8, local_c,
                         local_a0, DAT_100ad6a0);
            if (DAT_100aaf94 != 0) {
                local_90[12] = local_ac;
                local_90[6] = local_ac;
                local_90[0] = local_c;
                local_90[18] = local_c;
                local_90[1] = SUB(local_a0, local_94);
                local_90[7] = SUB(local_10, local_94);
                local_90[13] = local_10;
                local_90[19] = local_a0;
                local_a8 = 1;
            }
        }
        break;
    case 8:
        local_9c = FUN_1000fdac(local_8, param_1);
        local_a0 = FUN_1000fd2a(local_c, param_1);
        if (DAT_100aaf8c != 0) {
            FUN_10019d88(local_9c, local_8, local_c, local_8, local_c, local_a0, DAT_100ad6a0);
        }
        if (DAT_100aaf90 == 0) {
            FUN_10019c6e(local_c, local_18, local_ac, local_18, local_ac, local_8, local_9c, local_8, local_c,
                         local_a0, 0);
        } else {
            FUN_10019c6e(local_c, local_18, local_ac, local_18, local_ac, local_8, local_9c, local_8, local_c,
                         local_a0, DAT_100ad6a4);
        }
        break;
    case 10:
        local_a4 = FUN_1000fdac(local_18, param_1);
        local_9c = FUN_1000fdac(local_8, param_1);
        if (local_a4 == local_9c) {
            local_30[1] = ADD(local_30[1], local_ac);
            local_30[2] = ADD(local_30[2], local_18);
            local_30[3] = ADD(SUB(ADD(local_30[1], local_a4), local_ac), -1);
            local_30[4] = ADD(SUB(ADD(local_30[2], local_8), local_18), -1);
            if (DAT_100aaf90 == 0) {
                FUN_10058e74(local_30, 0);
            } else {
                FUN_10058e74(local_30, (char)DAT_100ad6a4);
            }
            if (DAT_100aaf8c != 0) {
                piVar6 = DAT_101f52e0;
                piVar7 = local_30;
                for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *piVar7 = *piVar6;
                    piVar6 = piVar6 + 1;
                    piVar7 = piVar7 + 1;
                }
                local_30[1] = ADD(local_30[1], ADD(SUB(local_a4, local_ac), 1));
                local_30[2] = ADD(local_30[2], local_18);
                local_30[3] = ADD(SUB(ADD(local_30[1], local_c), local_a4), -1);
                local_30[4] = ADD(SUB(ADD(local_30[2], local_8), local_18), -1);
                FUN_10058e74(local_30, (char)DAT_100ad6a0);
            }
        } else {
            if (DAT_100aaf90 == 0) {
                FUN_10019d07(local_ac, local_18, local_ac, local_8, local_9c, local_8, local_a4, local_18, 0);
            } else {
                FUN_10019d07(local_ac, local_18, local_ac, local_8, local_9c, local_8, local_a4, local_18,
                             DAT_100ad6a4);
            }
            if (DAT_100aaf8c != 0) {
                FUN_10019d07(local_c, local_8, local_c, local_18, local_a4, local_18, local_9c, local_8,
                             DAT_100ad6a0);
            }
        }
        if ((DAT_100aaf94 != 0) && (DAT_100aaf8c != 0)) {
            local_90[0] = SUB(local_a4, local_1c);
            local_90[6] = SUB(local_9c, local_1c);
            local_90[12] = local_9c;
            local_90[18] = local_a4;
            local_90[1] = local_18;
            local_90[19] = local_18;
            local_90[7] = local_8;
            local_90[13] = local_8;
            local_a8 = 1;
        }
        break;
    case 0xb:
        local_9c = FUN_1000fdac(local_8, param_1);
        local_10 = FUN_1000fd2a(local_ac, param_1);
        local_a0 = FUN_1000fd2a(local_c, param_1);
        if (DAT_100aaf90 == 0) {
            FUN_10019d88(local_ac, local_10, local_ac, local_8, local_9c, local_8, 0);
        } else {
            FUN_10019d88(local_ac, local_10, local_ac, local_8, local_9c, local_8, DAT_100ad6a4);
        }
        if (DAT_100aaf8c != 0) {
            FUN_10019c6e(local_c, local_8, local_c, local_18, local_ac, local_18, local_ac, local_10, local_9c,
                         local_8, DAT_100ad6a0);
            if (DAT_100aaf94 != 0) {
                local_90[12] = local_ac;
                local_90[6] = local_ac;
                local_90[0] = local_c;
                local_90[18] = local_c;
                local_90[1] = SUB(local_a0, local_94);
                local_90[7] = SUB(local_10, local_94);
                local_90[13] = local_10;
                local_90[19] = local_a0;
                local_a8 = 1;
            }
        }
        break;
    case 0xc:
        local_10 = FUN_1000fd2a(local_ac, param_1);
        local_a0 = FUN_1000fd2a(local_c, param_1);
        if ((DAT_100aaf94 != 0) && (DAT_100aaf8c != 0)) {
            local_90[6] = SUB(local_c, local_1c);
            local_90[0] = ADD(local_ac, local_1c);
            local_90[19] = local_10;
            local_90[1] = SUB(local_10, local_94);
            local_90[7] = SUB(local_a0, local_94);
            local_a8 = 1;
            local_90[12] = local_90[6];
            local_90[13] = local_a0;
            local_90[18] = local_90[0];
        }
        if (local_a0 == local_10) {
            local_30[1] = ADD(local_30[1], local_ac);
            local_30[2] = ADD(local_30[2], local_18);
            local_30[3] = SUB(ADD(local_30[1], local_c), local_ac);
            local_30[4] = SUB(ADD(local_30[2], local_10), local_18);
            if (DAT_100aaf90 == 0) {
                FUN_10058e74(local_30, 0);
            } else {
                FUN_10058e74(local_30, (char)DAT_100ad6a4);
            }
            if (DAT_100aaf8c != 0) {
                piVar6 = DAT_101f52e0;
                piVar7 = local_30;
                for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *piVar7 = *piVar6;
                    piVar6 = piVar6 + 1;
                    piVar7 = piVar7 + 1;
                }
                local_30[1] = ADD(local_30[1], local_ac);
                local_30[2] = ADD(local_30[2], local_10);
                local_30[3] = SUB(ADD(local_30[1], local_c), local_ac);
                local_30[4] = SUB(ADD(local_30[2], local_8), local_10);
                FUN_10058e74(local_30, (char)DAT_100ad6a0);
            }
        } else {
            if (DAT_100aaf90 == 0) {
                FUN_10019d07(local_c, local_18, local_ac, local_18, local_ac, local_10, local_c, local_a0, 0);
            } else {
                FUN_10019d07(local_c, local_18, local_ac, local_18, local_ac, local_10, local_c, local_a0,
                             DAT_100ad6a4);
            }
            if (DAT_100aaf8c != 0) {
                FUN_10019d07(local_ac, local_8, local_c, local_8, local_c, local_a0, local_ac, local_10,
                             DAT_100ad6a0);
            }
        }
        break;
    case 0xd:
        local_a4 = FUN_1000fdac(local_18, param_1);
        local_a0 = FUN_1000fd2a(local_c, param_1);
        if (DAT_100aaf90 == 0) {
            FUN_10019d88(local_c, local_18, local_a4, local_18, local_c, local_a0, 0);
        } else {
            FUN_10019d88(local_c, local_18, local_a4, local_18, local_c, local_a0, DAT_100ad6a4);
        }
        if (DAT_100aaf8c != 0) {
            FUN_10019c6e(local_ac, local_18, local_ac, local_8, local_c, local_8, local_c, local_a0, local_a4,
                         local_18, DAT_100ad6a0);
        }
        break;
    case 0xe:
        local_a4 = FUN_1000fdac(local_18, param_1);
        local_10 = FUN_1000fd2a(local_ac, param_1);
        if (DAT_100aaf90 == 0) {
            FUN_10019d88(local_ac, local_18, local_ac, local_10, local_a4, local_18, 0);
        } else {
            FUN_10019d88(local_ac, local_18, local_ac, local_10, local_a4, local_18, DAT_100ad6a4);
        }
        if (DAT_100aaf8c != 0) {
            FUN_10019c6e(local_ac, local_8, local_c, local_8, local_c, local_18, local_a4, local_18, local_ac,
                         local_10, DAT_100ad6a0);
        }
        break;
    case 0xf:
        if (DAT_100aaf8c != 0) {
            if ((DAT_100aaf94 != 0) &&
                (bVar1 = FUN_1000fc90(local_ac, ADD(local_8, local_94), param_1), (int)bVar1 == 0)) {
                local_10 = FUN_1000fd2a(local_ac, param_1);
                local_a0 = FUN_1000fd2a(local_c, param_1);
                if ((SUB(local_a0, local_94) < local_8) || (SUB(local_10, local_94) < local_8)) {
                    local_90[18] = local_c;
                    local_90[0] = local_c;
                    local_90[12] = local_ac;
                    local_90[6] = local_ac;
                    local_90[1] = SUB(local_a0, local_94);
                    local_90[7] = SUB(local_10, local_94);
                    local_90[13] = local_10;
                    local_a8 = 1;
                    local_90[19] = local_a0;
                }
            }
            local_30[1] = ADD(local_30[1], local_ac);
            local_30[2] = ADD(local_30[2], local_18);
            local_30[3] = SUB(ADD(local_30[1], local_c), local_ac);
            local_30[4] = SUB(ADD(local_30[2], local_8), local_18);
            FUN_10058e74(local_30, (char)DAT_100ad6a0);
        }
    }
    if ((local_a8 != 0) && (DAT_100aaf74 != 0)) {
        FUN_1003f893(DAT_101f52e0, 0x8000, 4, &local_90[0]);
    }
    if (((DAT_100aae84 != 0) && (DAT_100aaf90 != 0)) &&
        (FUN_10018265(*(int *)(PTR_DAT_100aaf68 + 0x3c), DAT_100aae68, 0x4a), 0 < DAT_100aae68)) {
        FUN_10018265(DAT_100aae68, DAT_100aae6c, 0x4a);
    }
    return;
}
