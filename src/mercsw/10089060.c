/* SPDX-License-Identifier: MIT */
/* mercsw 10089060 */
void __cdecl FUN_10089060(int *param_1, int *param_2, int *param_3, int *param_4)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    unsigned long long uVar5;
    unsigned long long uVar6;
    unsigned long long uVar7;
    unsigned int uVar8;
    unsigned int uVar9;
    unsigned int uVar10;

    iVar1 = *param_2;
    iVar2 = *param_3;
    iVar3 = *param_4;

    /* 64-bit products are summed on unsigned operands so the sum wraps. */
    uVar5 = (unsigned long long)((long long)param_1[1] * (long long)iVar2)
          + (unsigned long long)((long long)*param_1 * (long long)iVar1)
          + (unsigned long long)((long long)param_1[2] * (long long)iVar3);
    uVar8 = (unsigned int)uVar5;

    uVar6 = (unsigned long long)((long long)param_1[4] * (long long)iVar2)
          + (unsigned long long)((long long)param_1[3] * (long long)iVar1)
          + (unsigned long long)((long long)param_1[5] * (long long)iVar3);
    uVar9 = (unsigned int)uVar6;

    iVar4 = param_1[10];

    uVar7 = (unsigned long long)((long long)param_1[7] * (long long)iVar2)
          + (unsigned long long)((long long)param_1[6] * (long long)iVar1)
          + (unsigned long long)((long long)param_1[8] * (long long)iVar3);
    uVar10 = (unsigned int)uVar7;

    iVar1 = param_1[0xb];

    *param_2 = (int)(((uVar8 >> 0x1d) | ((unsigned int)(uVar5 >> 0x20) * 8u))
                     + (unsigned int)param_1[9]
                     + (unsigned int)((uVar8 >> 0x1c & 1u) != 0));
    *param_3 = (int)(((uVar9 >> 0x1d) | ((unsigned int)(uVar6 >> 0x20) * 8u))
                     + (unsigned int)iVar4
                     + (unsigned int)((uVar9 >> 0x1c & 1u) != 0));
    *param_4 = (int)(((uVar10 >> 0x1d) | ((unsigned int)(uVar7 >> 0x20) * 8u))
                     + (unsigned int)iVar1
                     + (unsigned int)((uVar10 >> 0x1c & 1u) != 0));
}
