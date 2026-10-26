/* SPDX-License-Identifier: MIT */
/* mercsw 1001b72b */
void __cdecl FUN_1001b72b(unsigned short *param_1, int *param_2)
{
    long long lVar1;
    unsigned int uVar2;
    unsigned int uHi;

    *param_1 = *param_1 & 0xfdff;

    lVar1 = (long long)((unsigned long long)(long long)param_2[1] * (unsigned long long)(long long)*(int *)(param_1 + 0x16)
                      + (unsigned long long)(long long)*param_2 * (unsigned long long)(long long)*(int *)(param_1 + 0x14)
                      + (unsigned long long)(long long)param_2[2] * (unsigned long long)(long long)*(int *)(param_1 + 0x18));
    uVar2 = (unsigned int)lVar1;
    uHi = (unsigned int)((unsigned long long)lVar1 >> 0x20);
    *(unsigned int *)(param_1 + 0x1a) =
        ((uVar2 >> 0x1d) | (uHi * 8u)) + (unsigned int)param_2[9] +
        (unsigned int)((uVar2 >> 0x1c & 1) != 0);

    lVar1 = (long long)((unsigned long long)(long long)param_2[4] * (unsigned long long)(long long)*(int *)(param_1 + 0x16)
                      + (unsigned long long)(long long)param_2[3] * (unsigned long long)(long long)*(int *)(param_1 + 0x14)
                      + (unsigned long long)(long long)param_2[5] * (unsigned long long)(long long)*(int *)(param_1 + 0x18));
    uVar2 = (unsigned int)lVar1;
    uHi = (unsigned int)((unsigned long long)lVar1 >> 0x20);
    *(unsigned int *)(param_1 + 0x1c) =
        ((uVar2 >> 0x1d) | (uHi * 8u)) + (unsigned int)param_2[10] +
        (unsigned int)((uVar2 >> 0x1c & 1) != 0);

    lVar1 = (long long)((unsigned long long)(long long)param_2[7] * (unsigned long long)(long long)*(int *)(param_1 + 0x16)
                      + (unsigned long long)(long long)param_2[6] * (unsigned long long)(long long)*(int *)(param_1 + 0x14)
                      + (unsigned long long)(long long)param_2[8] * (unsigned long long)(long long)*(int *)(param_1 + 0x18));
    uVar2 = (unsigned int)lVar1;
    uHi = (unsigned int)((unsigned long long)lVar1 >> 0x20);
    *(unsigned int *)(param_1 + 0x1e) =
        ((uVar2 >> 0x1d) | (uHi * 8u)) + (unsigned int)param_2[0xb] +
        (unsigned int)((uVar2 >> 0x1c & 1) != 0);

    *(int *)(param_1 + 0x28) = (int)((unsigned int)*(int *)(param_1 + 0x28) + 1u);
    return;
}
