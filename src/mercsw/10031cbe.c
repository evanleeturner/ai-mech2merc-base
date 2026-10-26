/* SPDX-License-Identifier: MIT */
/* mercsw 10031cbe */
void __cdecl FUN_10031cbe(int *param_1)
{
    unsigned int uVar1;
    unsigned int uVar2;
    int iVar3;
    unsigned int uVar4;
    unsigned int uVar5;
    int local_10;
    int local_8;

    local_8 = 7;
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
        uVar2 = (unsigned int)*(int *)(0x100ada7c + local_10 * 8) - (unsigned int)(param_1[1] + -1);
        uVar4 = (unsigned int)((int)uVar2 >> 0x1f);
        uVar1 = (unsigned int)*(int *)(0x100ada78 + local_10 * 8) - (unsigned int)(*param_1 + -1);
        uVar5 = (unsigned int)((int)uVar1 >> 0x1f);
        iVar3 = (int)((((uVar2 ^ uVar4) - uVar4) - uVar5) + (uVar1 ^ uVar5));
        if (iVar3 < local_8) {
            *(int *)0x101686f0 = local_10;
            local_8 = iVar3;
        }
    }
    return;
}
