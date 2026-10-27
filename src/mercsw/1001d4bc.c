/* SPDX-License-Identifier: MIT */
/* mercsw 1001d4bc */
void __cdecl FUN_1001d4bc(int param_1, int param_2, unsigned int *param_3, unsigned int *param_4, int param_5, unsigned int param_6)
{
    unsigned int uVar1;
    int iVar2;
    unsigned short *puVar3;
    unsigned int local_10;

    iVar2 = *(int *)(param_1 + 0x20);
    if (iVar2 != 0) {
        puVar3 = (unsigned short *)((unsigned int)*(int *)(iVar2 + 8) + (unsigned int)iVar2 + (unsigned int)param_2 * 0x24U);
        if (param_3 != (unsigned int *)0) {
            *param_3 = (unsigned int)*puVar3;
        }
        local_10 = (unsigned int)puVar3[1];
        if (param_4 != (unsigned int *)0) {
            *param_4 = local_10;
        }
        if (param_5 != 0) {
            if ((int)param_6 < (int)local_10) {
                local_10 = param_6;
            }
            while (uVar1 = local_10 - 1U, local_10 != 0) {
                *(unsigned int *)((unsigned int)param_5 + uVar1 * 4U) =
                    (unsigned int)*(unsigned char *)((unsigned int)*(int *)(puVar3 + 2) + uVar1 + (unsigned int)puVar3);
                local_10 = uVar1;
            }
        }
    }
    return;
}
