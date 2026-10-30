/* SPDX-License-Identifier: MIT */
/* mercsw 100258ea */
unsigned int __cdecl FUN_100258ea(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int *param_7, int *param_8)
{
    int iVar1;
    int iVar2;
    int iVar3;
    unsigned int uVar4;
    int local_38;
    int local_34;
    int local_30;
    int local_28;
    int local_14;
    int local_10;
    int local_c;

    local_34 = 0x7fffffff;
    local_30 = 0x7fffffff;
    local_14 = 0x7fffffff;
    local_10 = -0x7fffffff;
    local_c = -0x7fffffff;
    local_38 = -0x7fffffff;
    for (local_28 = 0; local_28 < (int)(unsigned int)*(unsigned short *)(param_1 + 2); local_28 = local_28 + 1) {
        iVar3 = (int)((unsigned int)*(unsigned char *)(int)((unsigned int)*(int *)(param_1 + 4) + (unsigned int)local_28 + (unsigned int)param_1) * 0x44u + (unsigned int)param_2 + 0x18u);
        iVar1 = *(int *)(iVar3 + 0xc);
        iVar2 = *(int *)(iVar3 + 0x10);
        iVar3 = *(int *)(iVar3 + 0x14);
        if (iVar1 < local_14) {
            local_14 = iVar1;
        }
        if (iVar2 < local_30) {
            local_30 = iVar2;
        }
        if (iVar3 < local_34) {
            local_34 = iVar3;
        }
        if (local_38 < iVar1) {
            local_38 = iVar1;
        }
        if (local_c < iVar2) {
            local_c = iVar2;
        }
        if (local_10 < iVar3) {
            local_10 = iVar3;
        }
    }
    if ((((param_4 < local_14) || (local_38 < param_3)) || (param_6 < local_34)) ||
        (local_10 < param_5)) {
        uVar4 = 0;
    }
    else {
        *param_7 = local_30;
        *param_8 = local_c;
        uVar4 = 1;
    }
    return uVar4;
}
