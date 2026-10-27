/* SPDX-License-Identifier: MIT */
/* mercsw 1001b550 */
void __cdecl FUN_1001b550(int param_1, int *param_2)
{
    long long lVar1;
    int *piVar2;
    int iVar3;
    unsigned int uVar4;
    short local_18;
    short local_c;

    piVar2 = (int *)(param_1 + 0x18);
    iVar3 = (int)((unsigned int)*(int *)(param_1 + 8) + (unsigned int)param_1);
    local_c = *(short *)(param_1 + 4);
    local_18 = *(short *)(param_1 + 6);
    do {
        lVar1 = (long long)((unsigned long long)((long long)param_2[1] * (long long)piVar2[1]) +
                            (unsigned long long)((long long)*param_2 * (long long)*piVar2) +
                            (unsigned long long)((long long)param_2[2] * (long long)piVar2[2]));
        uVar4 = (unsigned int)lVar1;
        piVar2[3] = (int)(((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
                          (unsigned int)param_2[9] +
                          (unsigned int)((uVar4 >> 0x1c & 1) != 0));

        lVar1 = (long long)((unsigned long long)((long long)param_2[4] * (long long)piVar2[1]) +
                            (unsigned long long)((long long)param_2[3] * (long long)*piVar2) +
                            (unsigned long long)((long long)param_2[5] * (long long)piVar2[2]));
        uVar4 = (unsigned int)lVar1;
        piVar2[4] = (int)(((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
                          (unsigned int)param_2[10] +
                          (unsigned int)((uVar4 >> 0x1c & 1) != 0));

        lVar1 = (long long)((unsigned long long)((long long)param_2[7] * (long long)piVar2[1]) +
                            (unsigned long long)((long long)param_2[6] * (long long)*piVar2) +
                            (unsigned long long)((long long)param_2[8] * (long long)piVar2[2]));
        uVar4 = (unsigned int)lVar1;
        piVar2[5] = (int)(((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
                          (unsigned int)param_2[0xb] +
                          (unsigned int)((uVar4 >> 0x1c & 1) != 0));

        lVar1 = (long long)((unsigned long long)((long long)param_2[1] * (long long)piVar2[0xc]) +
                            (unsigned long long)((long long)*param_2 * (long long)piVar2[0xb]) +
                            (unsigned long long)((long long)param_2[2] * (long long)piVar2[0xd]));
        uVar4 = (unsigned int)lVar1;
        piVar2[0xe] = (int)(((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
                            (unsigned int)((uVar4 >> 0x1c & 1) != 0));

        lVar1 = (long long)((unsigned long long)((long long)param_2[4] * (long long)piVar2[0xc]) +
                            (unsigned long long)((long long)param_2[3] * (long long)piVar2[0xb]) +
                            (unsigned long long)((long long)param_2[5] * (long long)piVar2[0xd]));
        uVar4 = (unsigned int)lVar1;
        piVar2[0xf] = (int)(((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
                            (unsigned int)((uVar4 >> 0x1c & 1) != 0));

        lVar1 = (long long)((unsigned long long)((long long)param_2[7] * (long long)piVar2[0xc]) +
                            (unsigned long long)((long long)param_2[6] * (long long)piVar2[0xb]) +
                            (unsigned long long)((long long)param_2[8] * (long long)piVar2[0xd]));
        uVar4 = (unsigned int)lVar1;
        piVar2[0x10] = (int)(((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
                             (unsigned int)((uVar4 >> 0x1c & 1) != 0));

        piVar2 = piVar2 + 0x11;
        local_c = (short)(local_c - 1);
    } while (local_c != 0);

    do {
        lVar1 = (long long)((unsigned long long)((long long)param_2[1] * (long long)*(int *)(iVar3 + 0xc)) +
                            (unsigned long long)((long long)*param_2 * (long long)*(int *)(iVar3 + 8)) +
                            (unsigned long long)((long long)param_2[2] * (long long)*(int *)(iVar3 + 0x10)));
        uVar4 = (unsigned int)lVar1;
        *(unsigned int *)(iVar3 + 0x14) =
            ((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
            (unsigned int)((uVar4 >> 0x1c & 1) != 0);

        lVar1 = (long long)((unsigned long long)((long long)param_2[4] * (long long)*(int *)(iVar3 + 0xc)) +
                            (unsigned long long)((long long)param_2[3] * (long long)*(int *)(iVar3 + 8)) +
                            (unsigned long long)((long long)param_2[5] * (long long)*(int *)(iVar3 + 0x10)));
        uVar4 = (unsigned int)lVar1;
        *(unsigned int *)(iVar3 + 0x18) =
            ((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
            (unsigned int)((uVar4 >> 0x1c & 1) != 0);

        lVar1 = (long long)((unsigned long long)((long long)param_2[7] * (long long)*(int *)(iVar3 + 0xc)) +
                            (unsigned long long)((long long)param_2[6] * (long long)*(int *)(iVar3 + 8)) +
                            (unsigned long long)((long long)param_2[8] * (long long)*(int *)(iVar3 + 0x10)));
        uVar4 = (unsigned int)lVar1;
        *(unsigned int *)(iVar3 + 0x1c) =
            ((uVar4 >> 0x1d) | ((unsigned int)((unsigned long long)lVar1 >> 0x20) * 8U)) +
            (unsigned int)((uVar4 >> 0x1c & 1) != 0);

        iVar3 = iVar3 + 0x24;
        local_18 = (short)(local_18 - 1);
    } while (local_18 != 0);
    return;
}
