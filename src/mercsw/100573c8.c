/* SPDX-License-Identifier: MIT */
/* mercsw 100573c8 */
unsigned int __cdecl FUN_100573c8(int *param_1, int param_2, int param_3, int param_4)
{
    int iVar1;
    int iVar4;
    int iVar5;
    int iVar6;
    unsigned int uVar2;
    unsigned int uVar7;
    unsigned int uVar8;
    unsigned int uVal;
    unsigned char bVar3;
    unsigned char bVar13;
    unsigned char *pbVar9;
    unsigned char *pbVar10;
    unsigned char *pbVar11;
    unsigned char *pbVar12;

    iVar1 = ((int *)*param_1)[1];
    iVar4 = (int)((unsigned int)iVar1 + 1u);
    if (iVar4 != 0 && -2 < iVar1) {
        iVar1 = *(int *)(param_2 + 0xc);
        pbVar11 = (unsigned char *)(unsigned int)(
            (unsigned int)*(int *)*param_1 + (unsigned int)*(int *)(param_2 + 8) +
            (unsigned int)param_3 + (unsigned int)param_1[1] +
            ((unsigned int)iVar1 + (unsigned int)param_4 + (unsigned int)param_1[2]) *
                (unsigned int)iVar4);
        iVar5 = (int)((unsigned int)*(int *)(param_2 + 0x14) + 1u);
        iVar6 = (int)((unsigned int)iVar5 - (unsigned int)iVar1);
        if (iVar6 != 0 && iVar1 <= iVar5) {
            pbVar9 = (unsigned char *)(param_2 + 0x18);
            do {
                bVar3 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                bVar13 = (unsigned char)(bVar3 & 1);
                bVar3 = (unsigned char)(bVar3 >> 1);
                uVar8 = (unsigned int)bVar3;
                pbVar12 = pbVar11;
                if (!bVar13 && bVar3 != 0) goto LAB_1005743c;
                if (bVar3 != 0) goto LAB_10057465;
joined_r0x10057425:
                if (bVar13) {
                    do {
                        while (1) {
                            pbVar10 = pbVar9 + 1;
                            pbVar12 = pbVar12 + *pbVar9;
                            pbVar9 = pbVar9 + 2;
                            bVar13 = (unsigned char)(*pbVar10 & 1);
                            bVar3 = (unsigned char)(*pbVar10 >> 1);
                            uVar8 = (unsigned int)bVar3;
                            if (!bVar13 && bVar3 != 0) goto LAB_1005743c;
                            if (bVar3 == 0) break;
LAB_10057465:
                            do {
                                while (1) {
                                    for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                                        *pbVar12 = *pbVar9;
                                        pbVar9 = pbVar9 + 1;
                                        pbVar12 = pbVar12 + 1;
                                    }
                                    pbVar10 = pbVar9;
                                    for (uVar8 = (uVar8 & 0xff) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                                        __builtin_memcpy(&uVal, pbVar10, 4);
                                        __builtin_memcpy(pbVar12, &uVal, 4);
                                        pbVar10 = pbVar10 + 4;
                                        pbVar12 = pbVar12 + 4;
                                    }
                                    pbVar9 = pbVar10 + 1;
                                    bVar13 = (unsigned char)(*pbVar10 & 1);
                                    bVar3 = (unsigned char)(*pbVar10 >> 1);
                                    uVar8 = (unsigned int)bVar3;
                                    if (!bVar13 && bVar3 != 0) break;
                                    if (bVar3 == 0) goto joined_r0x10057425;
                                }
LAB_1005743c:
                                do {
                                    bVar3 = *pbVar9;
                                    pbVar10 = pbVar9 + 1;
                                    for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                                        *pbVar12 = bVar3;
                                        pbVar12 = pbVar12 + 1;
                                    }
                                    uVar2 = (unsigned int)bVar3 * 0x010101u;
                                    uVal = (uVar2 << 8) | (unsigned int)bVar3;
                                    for (uVar8 = (uVar8 & 0xff) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
                                        __builtin_memcpy(pbVar12, &uVal, 4);
                                        pbVar12 = pbVar12 + 4;
                                    }
                                    pbVar9 = pbVar9 + 2;
                                    bVar13 = (unsigned char)(*pbVar10 & 1);
                                    bVar3 = (unsigned char)(*pbVar10 >> 1);
                                    uVar8 = (uVar2 << 8) | (unsigned int)bVar3;
                                } while (!bVar13 && bVar3 != 0);
                                if (!bVar13) goto LAB_1005747f;
                            } while (bVar3 != 0);
                        }
                    } while (bVar13);
                }
LAB_1005747f:
                pbVar11 = pbVar11 + iVar4;
                iVar6 = (int)((unsigned int)iVar6 - 1u);
            } while (iVar6 != 0);
        }
    }
    return 0;
}
