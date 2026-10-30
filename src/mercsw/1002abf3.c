/* SPDX-License-Identifier: MIT */
/* mercsw 1002abf3 */
extern int DAT_100adf38;
extern int DAT_100eef40[];

extern unsigned int __cdecl FUN_10029e46(int param_1, unsigned short param_2, unsigned short param_3);
extern int __cdecl FUN_1002a446(int param_1, short param_2);
extern int __cdecl FUN_1002a4e0(int param_1, short param_2, unsigned short param_3, int param_4);

unsigned int __cdecl FUN_1002abf3(int param_1, unsigned short param_2, short param_3, unsigned short param_4)
{
    int iVar1;
    int bVar2;
    int bVar3;
    unsigned int uVar4;
    int iVar5;
    int bVar6;
    unsigned short local_1c;
    short local_8;
    unsigned int uTmp;

    local_1c = 0xffff;
    local_8 = 0;
    bVar3 = 1;
    if (param_2 == 0x4200) {
        bVar2 = 1;
    } else {
        bVar2 = 0;
    }
    while (1) {
        uVar4 = FUN_10029e46(param_1, param_2, local_1c);
        local_1c = (unsigned short)uVar4;
        if (local_1c == 0xffff) {
            break;
        }
        if ((uVar4 & 0x200) != 0) {
            if (local_1c == param_4) {
                local_8 = (short)((unsigned short)local_8 + 1);
            } else {
                iVar1 = DAT_100eef40[((int)(short)local_1c) & 0xff];
                bVar6 = (*(int *)(iVar1 + 0xc) == 4);
                if ((param_3 == 2) || (param_3 == 5)) {
                    if (bVar2 && bVar6) {
                        bVar3 = 0;
                    }
                } else if (bVar6) {
                    bVar3 = 0;
                }
                if ((*(int *)(iVar1 + 4) != DAT_100adf38) && bVar3) {
                    if ((*(short *)(iVar1 + 0x176) == 0xc) ||
                        (iVar5 = FUN_1002a446(iVar1, param_3), iVar5 == 0)) {
                        local_8 = (short)((unsigned short)local_8 + 1);
                    } else if (param_3 == 3) {
                        int v182;
                        __builtin_memcpy(&v182, (unsigned char *)iVar1 + 0x182, 4);
                        if (v182 == 0) {
                            uTmp = 1;
                        } else {
                            uTmp = 0;
                        }
                        __builtin_memcpy((unsigned char *)iVar1 + 0x182, &uTmp, 4);
                        __builtin_memcpy(&uTmp, (unsigned char *)iVar1 + 0x17e, 4);
                        uTmp = uTmp & 0xfffffffc;
                        __builtin_memcpy((unsigned char *)iVar1 + 0x17e, &uTmp, 4);
                    } else {
                        uTmp = 0;
                        __builtin_memcpy((unsigned char *)iVar1 + 0x17e, &uTmp, 4);
                        if (param_3 == 7) {
                            FUN_1002a4e0(iVar1, 7, param_4, 0);
                        } else {
                            FUN_1002a4e0(iVar1, param_3, param_4, 1);
                        }
                        if (param_3 == 2) {
                            __builtin_memcpy(&uTmp, (unsigned char *)iVar1 + 0x17e, 4);
                            uTmp = uTmp | 0x11;
                            __builtin_memcpy((unsigned char *)iVar1 + 0x17e, &uTmp, 4);
                        } else {
                            if (param_3 == 5) {
                                uTmp = 0;
                                __builtin_memcpy((unsigned char *)iVar1 + 0x182, &uTmp, 4);
                                __builtin_memcpy(&uTmp, (unsigned char *)iVar1 + 0x17e, 4);
                                uTmp = uTmp | 0x11;
                                __builtin_memcpy((unsigned char *)iVar1 + 0x17e, &uTmp, 4);
                            }
                            __builtin_memcpy(&uTmp, (unsigned char *)iVar1 + 0x17e, 4);
                            uTmp = uTmp | 0x12;
                            __builtin_memcpy((unsigned char *)iVar1 + 0x17e, &uTmp, 4);
                        }
                    }
                }
            }
        }
    }
    return 0xffff0000u | (unsigned int)(unsigned short)local_8;
}
