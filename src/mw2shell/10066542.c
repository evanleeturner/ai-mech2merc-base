/* SPDX-License-Identifier: MIT */
/* mw2shell 10066542 */
extern unsigned char DAT_100aa2c8[];

unsigned int __cdecl FUN_10066542(int *param_1, int param_2, int param_3, int param_4)
{
    unsigned char uVar1;
    int iVar2;
    unsigned int uVar3;
    unsigned char bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unsigned int uVar8;
    unsigned int uVar9;
    unsigned char *pbVar10;
    unsigned char *pbVar11;
    unsigned int *puVar12;
    unsigned int *puVar13;
    unsigned char bVar14;

    iVar2 = ((int *)*param_1)[1];
    iVar5 = (int)((unsigned int)iVar2 + 1u);
    if (iVar5 != 0 && -2 < iVar2) {
        iVar2 = *(int *)(param_2 + 0xc);
        puVar12 = (unsigned int *)((unsigned int)*(int *)*param_1
                                   + (unsigned int)*(int *)(param_2 + 8)
                                   + (unsigned int)param_3
                                   + (unsigned int)param_1[1]
                                   + ((unsigned int)iVar2 + (unsigned int)param_4
                                      + (unsigned int)param_1[2]) * (unsigned int)iVar5);
        iVar6 = (int)((unsigned int)*(int *)(param_2 + 0x14) + 1u);
        iVar7 = (int)((unsigned int)iVar6 - (unsigned int)iVar2);
        if (iVar7 != 0 && iVar2 <= iVar6) {
            pbVar10 = (unsigned char *)(param_2 + 0x18);
            do {
                bVar4 = *pbVar10;
                pbVar10 = pbVar10 + 1;
                bVar14 = (unsigned char)(bVar4 & 1);
                bVar4 = (unsigned char)(bVar4 >> 1);
                uVar9 = (unsigned int)bVar4;
                puVar13 = puVar12;
                if (!bVar14 && bVar4 != 0) goto LAB_100665c2;
                if (bVar4 != 0) goto LAB_100665f3;
joined_r0x100665a3:
                if (bVar14) {
                    do {
                        while (1) {
                            pbVar11 = pbVar10 + 1;
                            puVar13 = (unsigned int *)((unsigned int)puVar13 + (unsigned int)*pbVar10);
                            pbVar10 = pbVar10 + 2;
                            bVar14 = (unsigned char)(*pbVar11 & 1);
                            bVar4 = (unsigned char)(*pbVar11 >> 1);
                            uVar9 = (unsigned int)bVar4;
                            if (!bVar14 && bVar4 != 0) goto LAB_100665c2;
                            if (bVar4 == 0) break;
LAB_100665f3:
                            do {
                                uVar9 = uVar9 & 0xff;
                                if (uVar9 != 0) {
                                    if (3 < uVar9) {
                                        do {
                                            *(unsigned char *)puVar13 = DAT_100aa2c8[(unsigned int)*pbVar10];
                                            *(unsigned char *)((unsigned int)puVar13 + 1u) =
                                                DAT_100aa2c8[(unsigned int)pbVar10[1]];
                                            *(unsigned char *)((unsigned int)puVar13 + 2u) =
                                                DAT_100aa2c8[(unsigned int)pbVar10[2]];
                                            *(unsigned char *)((unsigned int)puVar13 + 3u) =
                                                DAT_100aa2c8[(unsigned int)pbVar10[3]];
                                            pbVar10 = pbVar10 + 4;
                                            puVar13 = puVar13 + 1;
                                            uVar9 = uVar9 - 4;
                                            if (uVar9 == 0) goto LAB_1006664e;
                                        } while (3 < (int)uVar9);
                                    }
                                    do {
                                        *(unsigned char *)puVar13 = DAT_100aa2c8[(unsigned int)*pbVar10];
                                        pbVar10 = pbVar10 + 1;
                                        puVar13 = (unsigned int *)((unsigned int)puVar13 + 1u);
                                        uVar9 = uVar9 - 1;
                                    } while (uVar9 != 0);
                                }
LAB_1006664e:
                                bVar4 = *pbVar10;
                                pbVar10 = pbVar10 + 1;
                                bVar14 = (unsigned char)(bVar4 & 1);
                                bVar4 = (unsigned char)(bVar4 >> 1);
                                uVar9 = (unsigned int)bVar4;
                                if (bVar14 || bVar4 == 0) {
                                    if (bVar4 == 0) goto joined_r0x100665a3;
                                    goto LAB_100665f3;
                                }
LAB_100665c2:
                                do {
                                    pbVar11 = pbVar10 + 1;
                                    uVar1 = DAT_100aa2c8[(unsigned int)*pbVar10];
                                    for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                                        *(unsigned char *)puVar13 = uVar1;
                                        puVar13 = (unsigned int *)((unsigned int)puVar13 + 1u);
                                    }
                                    uVar3 = (((unsigned int)uVar1 << 8 | (unsigned int)uVar1) << 8)
                                            | (unsigned int)uVar1;
                                    for (uVar9 = (uVar9 & 0xff) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                                        __builtin_memcpy(puVar13,
                                                         &(unsigned int){(uVar3 << 8) | (unsigned int)uVar1},
                                                         4);
                                        puVar13 = puVar13 + 1;
                                    }
                                    pbVar10 = pbVar10 + 2;
                                    bVar14 = (unsigned char)(*pbVar11 & 1);
                                    bVar4 = (unsigned char)(*pbVar11 >> 1);
                                    uVar9 = (uVar3 << 8) | (unsigned int)bVar4;
                                } while (!bVar14 && bVar4 != 0);
                                if (!bVar14) goto LAB_10066661;
                            } while (bVar4 != 0);
                        }
                    } while (bVar14);
                }
LAB_10066661:
                puVar12 = (unsigned int *)((unsigned int)puVar12 + (unsigned int)iVar5);
                iVar7 = (int)((unsigned int)iVar7 - 1u);
            } while (iVar7 != 0);
        }
    }
    return 0;
}
