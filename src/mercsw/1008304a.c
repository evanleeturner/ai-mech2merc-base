/* SPDX-License-Identifier: MIT */
/* mercsw 1008304a */
extern int DAT_100eef40[];
extern unsigned char DAT_100ef030[];
extern int DAT_100b38dc;
extern int DAT_100b9f68;
extern int DAT_100adf38;

extern int __cdecl FUN_1004d60d(int param_1);
extern int __cdecl FUN_1000dd4e(int param_1);
extern int __cdecl FUN_1000dd98(int param_1);
extern void __cdecl FUN_1000dde1(int param_1, int *param_2, int *param_3, int *param_4);
extern void __cdecl FUN_10083a59(unsigned int param_1, int param_2, unsigned int param_3,
                                 int *param_4, int *param_5, unsigned int *param_6, int *param_7);

unsigned int __cdecl FUN_1008304a(int param_1, int param_2, unsigned int param_3)
{
    unsigned int uVar1;
    int iVar2;
    int local_30;
    unsigned int local_2c;
    int local_28;
    int local_24;
    unsigned int local_20;
    unsigned char *local_1c;
    unsigned short *local_18;
    int local_14;
    int local_10;
    unsigned int local_c;
    int local_8;

    if (param_2 < 0) {
        uVar1 = 0xffffffff;
    }
    else if (param_2 < DAT_100b38dc) {
        if ((param_3 & 0x23) == 0) {
            local_1c = (unsigned char *)DAT_100eef40[param_1];
            local_18 = (unsigned short *)(DAT_100ef030 + (unsigned int)param_2 * 0x40);
            if ((*local_18 & 4) == 0) {
                if (((param_3 & 0x20000) == 0) || (iVar2 = FUN_1004d60d(param_2), iVar2 == 0)) {
                    if (((param_3 & 0x40000) == 0) || (iVar2 = FUN_1004d60d(param_2), iVar2 == 1)) {
                        if (((DAT_100b9f68 == 0) && ((*local_18 & 0x1400) == 0)) && (param_1 == DAT_100adf38)) {
                            uVar1 = 0xfffffffb;
                        }
                        else if (((*local_18 & 0x800) == 0) || (param_1 != DAT_100adf38)) {
                            iVar2 = FUN_1000dd4e(*(int *)(local_18 + 2));
                            if (iVar2 == 0) {
                                uVar1 = 0xfffffff8;
                            }
                            else {
                                iVar2 = FUN_1000dd98(*(int *)(local_18 + 2));
                                if (iVar2 == 0) {
                                    uVar1 = 0xfffffff8;
                                }
                                else {
                                    FUN_1000dde1(*(int *)(local_18 + 2), &local_30, &local_8, &local_10);
                                    local_2c = (unsigned int)local_30 - *(unsigned int *)(local_1c + 0x50);
                                    local_c = (unsigned int)local_10 - *(unsigned int *)(local_1c + 0x58);
                                    FUN_10083a59(local_2c,
                                                 (int)((unsigned int)local_8 - *(unsigned int *)(local_1c + 0x54)),
                                                 local_c, &local_24, &local_28, &local_20, &local_14);
                                    if ((((*local_18 & 0x1000) == 0) && (0x2ab98 < local_28)) &&
                                        (param_1 == DAT_100adf38)) {
                                        uVar1 = 0xfffffff9;
                                    }
                                    else {
                                        *(int *)(local_1c + 200) = local_30;
                                        *(int *)(local_1c + 0xcc) = local_8;
                                        *(int *)(local_1c + 0xd0) = local_10;
                                        *(int *)(local_1c + 0xd4) = local_24;
                                        *(int *)(local_1c + 0xc4) = local_28;
                                        *(unsigned int *)(local_1c + 0xc0) = local_20;
                                        *(int *)(local_1c + 0xd8) = local_14;
                                        uVar1 = 1;
                                    }
                                }
                            }
                        }
                        else {
                            uVar1 = 0xfffffffb;
                        }
                    }
                    else {
                        uVar1 = 0xfffffff7;
                    }
                }
                else {
                    uVar1 = 0xfffffff7;
                }
            }
            else {
                uVar1 = 0xfffffffd;
            }
        }
        else {
            uVar1 = 0xfffffff7;
        }
    }
    else {
        uVar1 = 0xfffffffe;
    }
    return uVar1;
}
