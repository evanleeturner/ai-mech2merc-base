/* SPDX-License-Identifier: MIT */
/* mercsw 100473bb */
extern int *PTR_DAT_100af0d8;
extern unsigned char *PTR_DAT_100af144;
extern char s_TLISADATANTKANFLOBJICID_100ad6c4[];
extern int *DAT_100ecbd0[];

unsigned short * __cdecl FUN_1007bbed(short *param_1, int *param_2, unsigned char *param_3, int param_4, unsigned int *param_5, int *param_6);
int __cdecl FUN_10072879(void);
int __cdecl FUN_100814bb(int param_1, int param_2);

unsigned int __cdecl FUN_100473bb(short *param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned short *puVar5;
    unsigned int uVar6;
    int iVar7;
    int iVar8;
    int local_a4;
    int local_98;
    unsigned int local_88;
    int aiStack_84[32];

    puVar5 = FUN_1007bbed(param_1, PTR_DAT_100af0d8, PTR_DAT_100af144, 3, &local_88,
                          (int *)(s_TLISADATANTKANFLOBJICID_100ad6c4 + 0xc));
    if (puVar5 == (unsigned short *)0) {
        uVar6 = 0;
    }
    else {
        iVar3 = *(int *)puVar5;
        iVar4 = *(int *)(puVar5 + 2);
        local_98 = 8;
        iVar7 = FUN_10072879();
        for (local_a4 = 0; local_a4 < iVar3; local_a4 = local_a4 + 1) {
            uVar6 = *(unsigned int *)((unsigned char *)puVar5 + (unsigned int)(local_98 + 4));
            iVar1 = (int)((unsigned int)local_98 + 8u);
            if (0x1f < *(int *)((unsigned char *)puVar5 + local_98)) {
                return 0;
            }
            iVar2 = (int)((unsigned int)*(int *)((unsigned char *)puVar5 + local_98) + (unsigned int)iVar7);
            if (0x77f < iVar2) {
                return 0;
            }
            local_98 = (int)((unsigned int)iVar4 * 4u + (unsigned int)iVar1);
            iVar8 = FUN_100814bb(0x14, *(int *)(s_TLISADATANTKANFLOBJICID_100ad6c4 + 8));
            DAT_100ecbd0[iVar2] = (int *)iVar8;
            if (DAT_100ecbd0[iVar2] == (int *)0) {
                return 0;
            }
            DAT_100ecbd0[iVar2][3] = (int)((unsigned int)iVar1 + (unsigned int)(int)puVar5);
            DAT_100ecbd0[iVar2][2] = (int)uVar6;
            DAT_100ecbd0[iVar2][1] = iVar4;
            if (*param_1 == -1) {
                DAT_100ecbd0[iVar2][0] = 1;
            }
            else {
                DAT_100ecbd0[iVar2][0] = 0;
            }
            aiStack_84[local_a4] = iVar2;
        }
        for (local_a4 = 0; local_a4 < iVar3; local_a4 = local_a4 + 1) {
            DAT_100ecbd0[aiStack_84[local_a4]][4] = (int)((unsigned int)local_98 + (unsigned int)(int)puVar5);
        }
        uVar6 = 1;
    }
    return uVar6;
}
