/* SPDX-License-Identifier: MIT */
/* mercsw 10029e46 */
extern int DAT_100adf38;
extern int DAT_100b38d8;
extern int DAT_100ad0a4;
extern int DAT_100eef40[];

extern int __cdecl FUN_1004fefa(int param_1);
extern int __cdecl FUN_1004d47f(int param_1);
extern int __cdecl FUN_1004d5e3(int param_1);
extern unsigned char __cdecl FUN_1004d69b(int param_1, int param_2);

unsigned int __cdecl FUN_10029e46(int param_1, unsigned short param_2, unsigned short param_3)
{
    unsigned short uVar1;
    unsigned char bVar2;
    int iVar3;
    int iVar4;
    int uVar5;
    unsigned int uVar6;
    unsigned short local_8;

    local_8 = 0xffff;
    iVar4 = *(int *)(param_1 + 4);
    if ((param_2 & 0x6000) == 0) {
        if (((param_2 ^ (param_3 & 0xfff)) & 0xfff) == 0) {
            uVar6 = 0xffff;
        } else {
            uVar6 = (unsigned int)param_2;
        }
    } else {
        if (param_3 != 0xffff) {
            if ((param_2 & 0x2000) != 0) {
                return ((unsigned int)(unsigned short)((short)param_2 >> 0xf) << 16) | 0xffffU;
            }
            param_3 = param_3 & 0xff;
        }
        uVar1 = local_8;
        if ((param_2 & 0x200) == 0) {
            if (((param_2 & 0x400) == 0) && ((param_2 & 0x100) != 0)) {
                if (param_2 == 0x2100) {
                    uVar5 = FUN_1004fefa(*(int *)(param_1 + 8));
                    uVar1 = (unsigned short)uVar5;
                } else if (param_2 == 0x2101) {
                    int tmp;
                    __builtin_memcpy(&tmp, (char *)param_1 + 0x1a2, sizeof(tmp));
                    uVar1 = (unsigned short)tmp;
                }
            }
        } else if ((param_2 & 0x4000) == 0) {
            if (param_2 == 0x2200) {
                uVar1 = (unsigned short)DAT_100adf38;
            } else if (param_2 == 0x2201) {
                uVar5 = FUN_1004d47f(*(int *)(param_1 + 8));
                uVar1 = (unsigned short)uVar5;
            } else if (param_2 == 0x2202) {
                uVar1 = (unsigned short)*(int *)(param_1 + 4);
            }
        } else if (param_2 == 0x4200) {
            for (;;) {
                param_3 = (unsigned short)(param_3 + 1);
                uVar1 = local_8;
                if (DAT_100b38d8 <= (short)param_3) break;
                iVar4 = FUN_1004d47f(*(int *)(DAT_100eef40[(short)param_3] + 8));
                uVar1 = param_3;
                if (iVar4 == DAT_100adf38) break;
                if (DAT_100ad0a4 != 0) {
                    iVar4 = FUN_1004d5e3((int)(short)param_3);
                    uVar1 = param_3;
                    if (iVar4 == 0) break;
                }
            }
        } else if (param_2 == 0x4201) {
            for (;;) {
                param_3 = (unsigned short)(param_3 + 1);
                uVar1 = local_8;
                if (DAT_100b38d8 <= (short)param_3) break;
                bVar2 = FUN_1004d69b((int)(short)param_3, iVar4);
                if (bVar2 == 0) {
                    iVar3 = FUN_1004d5e3((int)(short)param_3);
                    uVar1 = param_3;
                    if (iVar3 != 2) break;
                }
            }
        }
        local_8 = uVar1;
        uVar6 = (unsigned int)(int)(short)local_8;
        if ((uVar6 != 0xffffffffU) && (uVar6 = (unsigned int)(int)(short)local_8, (uVar6 & 0xf00) == 0)) {
            uVar6 = ((unsigned int)(int)(short)param_2 & 0xf00U) | (unsigned int)(int)(short)local_8;
            local_8 = (unsigned short)uVar6;
        }
        uVar6 = ((unsigned int)(unsigned short)(uVar6 >> 0x10) << 16) | (unsigned int)local_8;
    }
    return uVar6;
}
