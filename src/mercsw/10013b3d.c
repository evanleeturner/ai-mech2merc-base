/* SPDX-License-Identifier: MIT */
/* mercsw 10013b3d */
extern unsigned int *DAT_100aa208;
extern unsigned char *DAT_100aa1b0;

unsigned int __stdcall FUN_10013a8b(unsigned int *param_1, unsigned int *param_2, unsigned int param_3, unsigned char param_4);

int __cdecl FUN_10013b3d(unsigned int *param_1)
{
    unsigned char bVar1;
    unsigned char *pbVar2;
    int iVar3;
    unsigned char *pbVar4;
    unsigned int *puVar5;
    unsigned int *puVar6;
    int bVar7;
    unsigned int local_80[31];

    puVar5 = param_1;
    puVar6 = local_80;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = (int)((unsigned int)iVar3 - 1U)) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
    }
    iVar3 = (*(int (__stdcall *)(unsigned int *, unsigned int *, int,
                                 unsigned int (__stdcall *)(unsigned int *, unsigned int *, unsigned int, unsigned char),
                                 unsigned int *, int))
              (*(unsigned int *)((unsigned char *)(*DAT_100aa208) + 0x38)))(
                  DAT_100aa208, local_80, 500, FUN_10013a8b, param_1, 1);
    if (iVar3 == 0) {
        pbVar2 = (unsigned char *)(param_1 + 9);
        pbVar4 = DAT_100aa1b0;
        do {
            bVar1 = *pbVar2;
            bVar7 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_10013bcd:
                iVar3 = (int)((1U - (unsigned int)bVar7) - (unsigned int)(bVar7 != 0));
                goto LAB_10013bd2;
            }
            if (bVar1 == 0) {
                break;
            }
            bVar1 = pbVar2[1];
            bVar7 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) {
                goto LAB_10013bcd;
            }
            pbVar2 = pbVar2 + 2;
            pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_10013bd2:
        if (iVar3 == 0) {
            iVar3 = 1;
        }
    } else {
        iVar3 = 0;
    }
    return iVar3;
}
