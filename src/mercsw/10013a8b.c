/* SPDX-License-Identifier: MIT */
/* mercsw 10013a8b */
extern unsigned char *DAT_100aa1b0;

unsigned int __stdcall FUN_10013a8b(unsigned int *param_1, unsigned int *param_2, unsigned int param_3, unsigned char param_4)
{
    unsigned char bVar1;
    unsigned char *pbVar2;
    int iVar3;
    unsigned char *pbVar4;
    int bVar5;

    if ((param_4 & 1) == 0) {
        pbVar2 = (unsigned char *)(param_1 + 9);
        pbVar4 = DAT_100aa1b0;
        do {
            bVar1 = *pbVar2;
            bVar5 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
                iVar3 = (int)((1U - (unsigned int)bVar5) - (unsigned int)(bVar5 != 0));
                goto LAB_10013ae6;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar5 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) {
                iVar3 = (int)((1U - (unsigned int)bVar5) - (unsigned int)(bVar5 != 0));
                goto LAB_10013ae6;
            }
            pbVar2 = pbVar2 + 2;
            pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10013ae6:
        if (iVar3 == 0) {
            for (iVar3 = 0x1f; iVar3 != 0; iVar3 = (int)((unsigned int)iVar3 - 1U)) {
                *param_2 = *param_1;
                param_1 = param_1 + 1;
                param_2 = param_2 + 1;
            }
        }
    }
    return 0;
}
