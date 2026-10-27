/* SPDX-License-Identifier: MIT */
/* mercsw 100141fb */
extern int DAT_100aa540;
extern int DAT_100aa544;
extern int DAT_100aa548;

int __cdecl FUN_1001b82d(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

int __cdecl FUN_100141fb(int param_1, int param_2, int param_3, int param_4, int param_5, int *param_6)
{
    int iVar1;
    int iVar2;

    iVar2 = (int)((unsigned int)*(unsigned char *)(*(int *)(param_1 + 4) + param_1) * 0x44U + (unsigned int)param_2);
    iVar1 = *(int *)(iVar2 + 0x10);
    iVar2 = FUN_1001b82d(*(int *)(param_1 + 0x14), *(int *)(param_1 + 0x18), *(int *)(param_1 + 0x1c), 0,
                         (int)((unsigned int)param_3 - (unsigned int)*(int *)(iVar2 + 0xc)),
                         (int)((unsigned int)param_5 - (unsigned int)*(int *)(iVar2 + 0x14)));
    *param_6 = (int)((unsigned int)iVar1 - (unsigned int)iVar2);
    DAT_100aa540 = *(int *)(param_1 + 0x14) >> 0xd;
    DAT_100aa544 = *(int *)(param_1 + 0x18) >> 0xd;
    DAT_100aa548 = *(int *)(param_1 + 0x1c) >> 0xd;
    return param_4 < *param_6;
}
