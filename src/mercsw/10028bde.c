/* SPDX-License-Identifier: MIT */
/* mercsw 10028bde */
extern int __cdecl FUN_1002b6fe(int param_1, int param_2, int param_3);
extern unsigned int __cdecl FUN_10029e46(int param_1, unsigned short param_2, unsigned short param_3);
extern int __cdecl FUN_1002950f(int param_1, short param_2);
extern unsigned int __cdecl FUN_1002883b(int param_1, unsigned short param_2, short param_3);

extern unsigned char DAT_10123240;
extern int DAT_10123130;

int __cdecl FUN_10028bde(int param_1, unsigned short param_2, short param_3, unsigned short *param_4, unsigned short *param_5)
{
    int local_1c = 0;
    int local_20 = 100000000;
    unsigned int local_8 = 0xFFFF;
    *param_5 = 0;
    *param_4 = *param_5;
    int local_44[8];
    int iVar4 = FUN_1002b6fe(*(int *)(param_1 + 8), (int)local_44, 1);
    if (iVar4 == 0) {
        local_1c = 0;
    } else {
        unsigned char *local_c = (unsigned char *)&DAT_10123240 + *(int *)(param_1 + 8) * 0x3C0A;
        int local_24 = *(int *)(&DAT_10123130 + *(int *)(param_1 + 8) * 4);
        if (local_24 == -1) {
            local_1c = 0;
        } else {
            unsigned int local_10 = *(unsigned short *)(local_c + local_24 * 0x13F + 0x3C);
            while (1) {
                unsigned int uVar5 = FUN_10029e46(param_1, param_2, (unsigned short)local_8);
                short sVar3 = (short)uVar5;
                local_8 = (unsigned int)(unsigned short)sVar3;
                if (sVar3 == -1) break;
                int bVar1 = 0;
                int bVar2 = FUN_1002950f(param_1, sVar3);
                if (bVar2 != 0) {
                    if (*(int *)(param_1 + 0xC0) < local_20) {
                        local_20 = *(int *)(param_1 + 0xC0);
                        *param_5 = (unsigned short)local_8;
                        bVar1 = 1;
                        if ((local_8 & 0x200) == 0) {
                            *param_4 = (unsigned short)local_8;
                        }
                    }
                    if ((local_8 & 0x200) != 0) {
                        short local_18 = 0;
                        for (; local_18 < iVar4; local_18++) {
                            int local_14 = local_44[local_18];
                            if ( (*(int *)(local_14 + 4) != *(int *)(param_1 + 4)) &&
                                 ((*(unsigned short *)(local_14 + 0x14) & 0x16) == 0) &&
                                 ((*(unsigned short *)(local_14 + 0x17A) & 0xF000) == 0) &&
                                 ((unsigned int)*(unsigned short *)(local_14 + 0x17A) == (unsigned int)(short)(unsigned short)local_8) &&
                                 ((*(short *)(local_14 + 0x176) == 3) || (*(short *)(local_14 + 0x176) == 2)) &&
                                 bVar1 &&
                                 ((local_10 & 0xFFFF) != 4) ) {
                                bVar1 = 0;
                                local_1c = local_14;
                                break;
                            }
                        }
                        if (bVar1) {
                            *param_4 = (unsigned short)local_8;
                        }
                    }
                }
            }
            if ((*param_4 != 0) && ((short)FUN_1002883b(param_1, *param_4, param_3) == 0)) {
                *param_4 = 0;
            }
            if ((*param_5 != 0) && ((short)FUN_1002883b(param_1, *param_5, param_3) == 0)) {
                *param_5 = 0;
            }
        }
    }
    return local_1c;
}
