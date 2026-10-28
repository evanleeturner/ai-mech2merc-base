/* SPDX-License-Identifier: MIT */
/* mw2shell 10067a14 */
int __cdecl FUN_10067a14(int *param_1, unsigned char param_2)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int *puVar8;
    unsigned int uVar9;
    unsigned int uVar10;

    piVar1 = (int *)*param_1;
    iVar7 = piVar1[1];
    iVar3 = iVar7 + 1;
    if ((iVar3 == 0 || iVar7 < -1) || (iVar2 = piVar1[2], iVar2 < 0)) {
        return 0xffffffff;
    }
    iVar4 = param_1[1];
    if (iVar4 < 1) {
        iVar4 = 0;
    }
    iVar5 = param_1[2];
    if (iVar5 < 1) {
        iVar5 = 0;
    }
    iVar6 = param_1[3];
    if (iVar7 <= param_1[3]) {
        iVar6 = iVar7;
    }
    iVar7 = param_1[4];
    if (iVar2 <= param_1[4]) {
        iVar7 = iVar2;
    }
    if ((iVar4 <= iVar6) && (iVar5 <= iVar7)) {
        puVar8 = (int *)(iVar5 * iVar3 + *piVar1 + iVar4);
        uVar10 = (iVar6 + 1) - iVar4;
        for (; iVar5 <= iVar7; iVar5 = iVar5 + 1) {
            for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *(unsigned char *)puVar8 = param_2;
                puVar8 = (int *)((int)puVar8 + 1);
            }
            for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar8 = (unsigned int)param_2 | ((unsigned int)param_2 << 8) | ((unsigned int)param_2 << 16) | ((unsigned int)param_2 << 24);
                puVar8 = puVar8 + 1;
            }
            puVar8 = (int *)((int)puVar8 + (iVar3 - uVar10));
        }
        return 0;
    }
    return 0xfffffffe;
}
