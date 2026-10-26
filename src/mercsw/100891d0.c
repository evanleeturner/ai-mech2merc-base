/* SPDX-License-Identifier: MIT */
/* mercsw 100891d0 */
void __cdecl FUN_100891d0(int *param_1, int param_2)
{
    unsigned long long lVar1;
    unsigned int uVar2;
    unsigned int uHi;
    int iVar3;
    int iVar4;
    int iVar5;
    int local_28 = 0;
    int local_24 = 0;
    int local_18 = 0;
    int local_10 = 0;
    int local_c = 0;
    int local_8 = 0;

    if (param_2 == 0) {
        local_10 = param_1[1];
        local_24 = param_1[4];
        local_8  = param_1[7];
        local_18 = param_1[2];
        local_28 = param_1[5];
        local_c  = param_1[8];
    }
    else if (param_2 == 1) {
        local_10 = param_1[2];
        local_24 = param_1[5];
        local_8  = param_1[8];
        local_18 = *param_1;
        local_28 = param_1[3];
        local_c  = param_1[6];
    }
    else if (param_2 == 2) {
        local_10 = *param_1;
        local_24 = param_1[3];
        local_8  = param_1[6];
        local_18 = param_1[1];
        local_28 = param_1[4];
        local_c  = param_1[7];
    }

    /* 64-bit products; the difference is done on unsigned operands so it wraps. */
    lVar1 = (unsigned long long)((long long)local_24 * (long long)local_c)
          - (unsigned long long)((long long)local_28 * (long long)local_8);
    uVar2 = (unsigned int)lVar1;
    uHi = (unsigned int)(lVar1 >> 32);
    iVar3 = (int)(((uVar2 >> 0x1d) | (uHi * 8u)) + (unsigned int)((uVar2 >> 0x1c & 1u) != 0));

    lVar1 = (unsigned long long)((long long)local_8 * (long long)local_18)
          - (unsigned long long)((long long)local_c * (long long)local_10);
    uVar2 = (unsigned int)lVar1;
    uHi = (unsigned int)(lVar1 >> 32);
    iVar4 = (int)(((uVar2 >> 0x1d) | (uHi * 8u)) + (unsigned int)((uVar2 >> 0x1c & 1u) != 0));

    lVar1 = (unsigned long long)((long long)local_10 * (long long)local_28)
          - (unsigned long long)((long long)local_18 * (long long)local_24);
    uVar2 = (unsigned int)lVar1;
    uHi = (unsigned int)(lVar1 >> 32);
    iVar5 = (int)(((uVar2 >> 0x1d) | (uHi * 8u)) + (unsigned int)((uVar2 >> 0x1c & 1u) != 0));

    if (param_2 == 0) {
        *param_1 = iVar3;
        param_1[3] = iVar4;
        param_1[6] = iVar5;
    }
    else if (param_2 == 1) {
        param_1[1] = iVar3;
        param_1[4] = iVar4;
        param_1[7] = iVar5;
    }
    else if (param_2 == 2) {
        param_1[2] = iVar3;
        param_1[5] = iVar4;
        param_1[8] = iVar5;
    }
    return;
}
