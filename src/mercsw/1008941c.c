/* SPDX-License-Identifier: MIT */
/* mercsw 1008941c */
/* 3x3 fixed-point matrix multiply: param_3 = param_1 * param_2.
   Each 64-bit accumulator is shifted right by 29 (3.29 fixed point),
   rounded up when bit 28 is set. */
void __cdecl FUN_1008941c(int *param_1, int *param_2, int *param_3)
{
    unsigned long long lVar1;
    unsigned long long lVar2;
    unsigned long long lVar3;
    unsigned long long lVar4;
    unsigned long long lVar5;
    unsigned long long lVar6;
    unsigned long long lVar7;
    unsigned long long lVar8;
    unsigned long long lVar9;
    unsigned int uVar10;
    unsigned int uVar11;
    unsigned int uVar12;
    unsigned int uVar13;
    unsigned int uVar14;
    unsigned int uVar15;
    unsigned int uVar16;
    unsigned int uVar17;
    unsigned int uVar18;

    /* Products are signed 64-bit; sums are done on unsigned so they wrap. */
    lVar1 = (unsigned long long)((long long)param_1[1] * (long long)param_2[3])
          + (unsigned long long)((long long)*param_1 * (long long)*param_2)
          + (unsigned long long)((long long)param_1[2] * (long long)param_2[6]);
    uVar10 = (unsigned int)lVar1;
    lVar2 = (unsigned long long)((long long)param_1[1] * (long long)param_2[4])
          + (unsigned long long)((long long)*param_1 * (long long)param_2[1])
          + (unsigned long long)((long long)param_1[2] * (long long)param_2[7]);
    uVar11 = (unsigned int)lVar2;
    lVar3 = (unsigned long long)((long long)param_1[1] * (long long)param_2[5])
          + (unsigned long long)((long long)*param_1 * (long long)param_2[2])
          + (unsigned long long)((long long)param_1[2] * (long long)param_2[8]);
    uVar12 = (unsigned int)lVar3;
    lVar4 = (unsigned long long)((long long)param_1[4] * (long long)param_2[3])
          + (unsigned long long)((long long)param_1[3] * (long long)*param_2)
          + (unsigned long long)((long long)param_1[5] * (long long)param_2[6]);
    uVar13 = (unsigned int)lVar4;
    lVar5 = (unsigned long long)((long long)param_1[4] * (long long)param_2[4])
          + (unsigned long long)((long long)param_1[3] * (long long)param_2[1])
          + (unsigned long long)((long long)param_1[5] * (long long)param_2[7]);
    uVar14 = (unsigned int)lVar5;
    lVar6 = (unsigned long long)((long long)param_1[4] * (long long)param_2[5])
          + (unsigned long long)((long long)param_1[3] * (long long)param_2[2])
          + (unsigned long long)((long long)param_1[5] * (long long)param_2[8]);
    uVar15 = (unsigned int)lVar6;
    lVar7 = (unsigned long long)((long long)param_1[7] * (long long)param_2[3])
          + (unsigned long long)((long long)param_1[6] * (long long)*param_2)
          + (unsigned long long)((long long)param_1[8] * (long long)param_2[6]);
    uVar16 = (unsigned int)lVar7;
    lVar8 = (unsigned long long)((long long)param_1[7] * (long long)param_2[4])
          + (unsigned long long)((long long)param_1[6] * (long long)param_2[1])
          + (unsigned long long)((long long)param_1[8] * (long long)param_2[7]);
    uVar17 = (unsigned int)lVar8;
    lVar9 = (unsigned long long)((long long)param_1[7] * (long long)param_2[5])
          + (unsigned long long)((long long)param_1[6] * (long long)param_2[2])
          + (unsigned long long)((long long)param_1[8] * (long long)param_2[8]);
    uVar18 = (unsigned int)lVar9;

    *param_3 = (int)((uVar10 >> 0x1d | (unsigned int)(lVar1 >> 0x20) * 8u) +
                     (unsigned int)((uVar10 >> 0x1c & 1) != 0));
    param_3[1] = (int)((uVar11 >> 0x1d | (unsigned int)(lVar2 >> 0x20) * 8u) +
                       (unsigned int)((uVar11 >> 0x1c & 1) != 0));
    param_3[3] = (int)((uVar13 >> 0x1d | (unsigned int)(lVar4 >> 0x20) * 8u) +
                       (unsigned int)((uVar13 >> 0x1c & 1) != 0));
    param_3[4] = (int)((uVar14 >> 0x1d | (unsigned int)(lVar5 >> 0x20) * 8u) +
                       (unsigned int)((uVar14 >> 0x1c & 1) != 0));
    param_3[6] = (int)((uVar16 >> 0x1d | (unsigned int)(lVar7 >> 0x20) * 8u) +
                       (unsigned int)((uVar16 >> 0x1c & 1) != 0));
    param_3[7] = (int)((uVar17 >> 0x1d | (unsigned int)(lVar8 >> 0x20) * 8u) +
                       (unsigned int)((uVar17 >> 0x1c & 1) != 0));
    param_3[2] = (int)((uVar12 >> 0x1d | (unsigned int)(lVar3 >> 0x20) * 8u) +
                       (unsigned int)((uVar12 >> 0x1c & 1) != 0));
    param_3[5] = (int)((uVar15 >> 0x1d | (unsigned int)(lVar6 >> 0x20) * 8u) +
                       (unsigned int)((uVar15 >> 0x1c & 1) != 0));
    param_3[8] = (int)((uVar18 >> 0x1d | (unsigned int)(lVar9 >> 0x20) * 8u) +
                       (unsigned int)((uVar18 >> 0x1c & 1) != 0));
    return;
}
