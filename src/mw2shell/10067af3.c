/* SPDX-License-Identifier: MIT */
/* mw2shell 10067af3 */
unsigned int __cdecl FUN_10067af3(int *param_1, int param_2, int param_3, int *param_4, int param_5, int param_6, unsigned int param_7)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    int iVar6;
    int bVar7;
    unsigned char uVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    unsigned int uVar24;
    int iVar25;
    unsigned int uVar26;
    unsigned char *puVar27;
    unsigned int *puVar28;
    unsigned char *puVar29;
    unsigned int *puVar30;
    int local_60;
    int local_54;
    int local_40;
    int step;

    piVar1 = (int *)*param_1;
    iVar25 = piVar1[1];
    iVar9 = (int)((unsigned int)iVar25 + 1u);
    if ((iVar9 == 0 || iVar25 < -1) || (iVar23 = piVar1[2], iVar23 < 0)) {
        return 0xffffffff;
    }
    iVar2 = param_1[1];
    iVar10 = iVar2;
    if (iVar2 < 1) {
        iVar10 = 0;
    }
    iVar3 = param_1[2];
    iVar11 = iVar3;
    if (iVar3 < 1) {
        iVar11 = 0;
    }
    iVar12 = param_1[3];
    if (iVar25 <= param_1[3]) {
        iVar12 = iVar25;
    }
    iVar25 = param_1[4];
    if (iVar23 <= param_1[4]) {
        iVar25 = iVar23;
    }
    if ((iVar12 < iVar10) || (iVar25 < iVar11)) {
        return 0xfffffffe;
    }
    iVar10 = (int)((unsigned int)iVar10 - (unsigned int)iVar2);
    iVar12 = (int)((unsigned int)iVar12 - (unsigned int)iVar2);
    iVar11 = (int)((unsigned int)iVar11 - (unsigned int)iVar3);
    iVar25 = (int)((unsigned int)iVar25 - (unsigned int)iVar3);
    piVar4 = (int *)*param_4;
    iVar23 = piVar4[1];
    iVar13 = (int)((unsigned int)iVar23 + 1u);
    if ((iVar13 == 0 || iVar23 < -1) || (iVar18 = piVar4[2], iVar18 < 0)) {
        return 0xffffffff;
    }
    iVar5 = param_4[1];
    iVar14 = iVar5;
    if (iVar5 < 1) {
        iVar14 = 0;
    }
    iVar6 = param_4[2];
    iVar15 = iVar6;
    if (iVar6 < 1) {
        iVar15 = 0;
    }
    iVar22 = param_4[3];
    if (iVar23 <= param_4[3]) {
        iVar22 = iVar23;
    }
    iVar23 = param_4[4];
    if (iVar18 <= param_4[4]) {
        iVar23 = iVar18;
    }
    if ((iVar14 <= iVar22) && (iVar15 <= iVar23)) {
        iVar14 = (int)((unsigned int)iVar14 - (unsigned int)iVar5);
        iVar22 = (int)((unsigned int)iVar22 - (unsigned int)iVar5);
        iVar15 = (int)((unsigned int)iVar15 - (unsigned int)iVar6);
        iVar23 = (int)((unsigned int)iVar23 - (unsigned int)iVar6);
        iVar16 = (int)((unsigned int)param_2 - (unsigned int)param_5);
        iVar17 = (int)((unsigned int)param_3 - (unsigned int)param_6);
        iVar18 = iVar10;
        if (iVar10 <= (int)((unsigned int)iVar14 + (unsigned int)iVar16)) {
            iVar18 = (int)((unsigned int)iVar14 + (unsigned int)iVar16);
        }
        iVar19 = iVar11;
        if (iVar11 <= (int)((unsigned int)iVar15 + (unsigned int)iVar17)) {
            iVar19 = (int)((unsigned int)iVar15 + (unsigned int)iVar17);
        }
        iVar20 = iVar12;
        if ((int)((unsigned int)iVar22 + (unsigned int)iVar16) <= iVar12) {
            iVar20 = (int)((unsigned int)iVar22 + (unsigned int)iVar16);
        }
        iVar21 = iVar25;
        if ((int)((unsigned int)iVar23 + (unsigned int)iVar17) <= iVar25) {
            iVar21 = (int)((unsigned int)iVar23 + (unsigned int)iVar17);
        }
        if ((iVar18 <= iVar20) && (iVar19 <= iVar21)) {
            if (iVar14 <= (int)((unsigned int)iVar10 - (unsigned int)iVar16)) {
                iVar14 = (int)((unsigned int)iVar10 - (unsigned int)iVar16);
            }
            if (iVar15 <= (int)((unsigned int)iVar11 - (unsigned int)iVar17)) {
                iVar15 = (int)((unsigned int)iVar11 - (unsigned int)iVar17);
            }
            if ((int)((unsigned int)iVar12 - (unsigned int)iVar16) <= iVar22) {
                iVar22 = (int)((unsigned int)iVar12 - (unsigned int)iVar16);
            }
            if ((int)((unsigned int)iVar25 - (unsigned int)iVar17) <= iVar23) {
                iVar23 = (int)((unsigned int)iVar25 - (unsigned int)iVar17);
            }
            uVar24 = ((unsigned int)iVar20 + 1u) - (unsigned int)iVar18;
            iVar25 = (int)(((unsigned int)iVar21 + 1u) - (unsigned int)iVar19);
            local_54 = iVar13;
            local_40 = iVar9;
            if (iVar19 <= iVar15) {
                local_54 = (int)(0u - (unsigned int)iVar13);
                local_40 = (int)(0u - (unsigned int)iVar9);
                iVar19 = iVar21;
                iVar15 = iVar23;
            }
            bVar7 = (iVar18 <= iVar14);
            if (bVar7) {
                local_60 = 3;
                uVar26 = uVar24;
            } else {
                local_60 = 0;
                iVar20 = iVar18;
                iVar22 = iVar14;
                uVar26 = 0u - uVar24;
            }
            local_40 = (int)((unsigned int)local_40 + uVar26);
            local_54 = (int)((unsigned int)local_54 + uVar26);
            step = bVar7 ? -1 : 1;
            puVar29 = (unsigned char *)((unsigned int)iVar6 * (unsigned int)iVar13 + (unsigned int)*piVar4 + (unsigned int)iVar5 + (unsigned int)iVar15 * (unsigned int)iVar13 + (unsigned int)iVar22);
            puVar27 = (unsigned char *)((unsigned int)iVar3 * (unsigned int)iVar9 + (unsigned int)*piVar1 + (unsigned int)iVar2 + (unsigned int)iVar19 * (unsigned int)iVar9 + (unsigned int)iVar20);
            if ((param_7 & 0xffffff00u) == 0) {
                uVar8 = (unsigned char)param_7;
                do {
                    for (uVar26 = uVar24 & 3u; uVar26 != 0; uVar26 = uVar26 - 1) {
                        *puVar29 = uVar8;
                        puVar29 = puVar29 + step;
                    }
                    puVar28 = (unsigned int *)(puVar29 - local_60);
                    for (uVar26 = uVar24 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                        *puVar28 = (unsigned int)uVar8 * 0x01010101u;
                        puVar28 = puVar28 + step;
                    }
                    puVar29 = (unsigned char *)((unsigned int)puVar28 + (unsigned int)local_54 + (unsigned int)local_60);
                    iVar25 = iVar25 - 1;
                } while (iVar25 != 0);
            } else {
                do {
                    for (uVar26 = uVar24 & 3u; uVar26 != 0; uVar26 = uVar26 - 1) {
                        *puVar29 = *puVar27;
                        puVar27 = puVar27 + step;
                        puVar29 = puVar29 + step;
                    }
                    puVar28 = (unsigned int *)(puVar27 - local_60);
                    puVar30 = (unsigned int *)(puVar29 - local_60);
                    for (uVar26 = uVar24 >> 2; uVar26 != 0; uVar26 = uVar26 - 1) {
                        *puVar30 = *puVar28;
                        puVar28 = puVar28 + step;
                        puVar30 = puVar30 + step;
                    }
                    puVar27 = (unsigned char *)((unsigned int)puVar28 + (unsigned int)local_40 + (unsigned int)local_60);
                    puVar29 = (unsigned char *)((unsigned int)puVar30 + (unsigned int)local_54 + (unsigned int)local_60);
                    iVar25 = iVar25 - 1;
                } while (iVar25 != 0);
            }
            return 0;
        }
        return 0xfffffffd;
    }
    return 0xfffffffe;
}
