/* SPDX-License-Identifier: MIT */
/* mercsw 1008255f */
extern int DAT_100b9f60;
extern int DAT_100b38d8;
extern int DAT_100adf38;
extern int DAT_100eef40[];
extern unsigned char DAT_10215670[];

int __cdecl FUN_1008255f(unsigned int param_1, unsigned int param_2)
{
    unsigned int uVar1;
    int iVar2;
    unsigned int *puVar3;
    unsigned int *puVar4;
    unsigned int local_c;

    if ((param_2 & 0x100) == 0) {
        iVar2 = -1;
    }
    else {
        uVar1 = param_2 & 0xff;
        if ((int)uVar1 < DAT_100b9f60) {
            if (((*(unsigned short *)(DAT_10215670 + 0x24 + uVar1 * 0x54) & 1) == 0) ||
                (local_c = uVar1,
                 *(unsigned int *)(DAT_10215670 + 8 + uVar1 * 0x54) != (param_1 | 0x200))) {
                iVar2 = -1;
            }
            else {
                for (; (int)local_c < (int)((unsigned int)DAT_100b9f60 - 1u); local_c = local_c + 1) {
                    puVar3 = (unsigned int *)(DAT_10215670 + (local_c + 1) * 0x54);
                    puVar4 = (unsigned int *)(DAT_10215670 + local_c * 0x54);
                    for (iVar2 = 0x15; iVar2 != 0; iVar2 = (int)((unsigned int)iVar2 - 1u)) {
                        *puVar4 = *puVar3;
                        puVar3 = puVar3 + 1;
                        puVar4 = puVar4 + 1;
                    }
                }
                for (local_c = 0; (int)local_c < DAT_100b38d8; local_c = local_c + 1) {
                    iVar2 = DAT_100eef40[local_c];
                    if (iVar2 != 0) {
                        unsigned char *p = (unsigned char *)iVar2;
                        unsigned int tmp;

                        if (((*(unsigned short *)(p + 0x178) & 0x100) != 0) &&
                            (uVar1 < (unsigned int)(*(unsigned short *)(p + 0x178) & 0xff))) {
                            *(unsigned short *)(p + 0x178) =
                                (unsigned short)(*(unsigned short *)(p + 0x178) - 1u);
                        }
                        if (((*(unsigned short *)(p + 0x17a) & 0x100) != 0) &&
                            (uVar1 < (unsigned int)(*(unsigned short *)(p + 0x17a) & 0xff))) {
                            *(unsigned short *)(p + 0x17a) =
                                (unsigned short)(*(unsigned short *)(p + 0x17a) - 1u);
                        }
                        if ((((*(unsigned char *)(p + 0xdd) & 1) != 0) &&
                             (uVar1 < (*(unsigned int *)(p + 0xdc) & 0xff))) &&
                            (*(int *)(p + 4) != DAT_100adf38)) {
                            *(unsigned int *)(p + 0xdc) = *(unsigned int *)(p + 0xdc) - 1u;
                        }
                        if ((*(unsigned char *)(p + 0x1a3) & 1) != 0) {
                            __builtin_memcpy(&tmp, p + 0x1a2, 4);
                            if (uVar1 < (tmp & 0xff)) {
                                __builtin_memcpy(&tmp, p + 0x1a2, 4);
                                tmp = tmp - 1u;
                                __builtin_memcpy(p + 0x1a2, &tmp, 4);
                            }
                        }
                    }
                }
                DAT_100b9f60 = (int)((unsigned int)DAT_100b9f60 - 1u);
                iVar2 = DAT_100b9f60;
            }
        }
        else {
            iVar2 = -1;
        }
    }
    return iVar2;
}
