/* SPDX-License-Identifier: MIT */
/* mercsw 10058e74 */
unsigned int __cdecl FUN_10058e74(int *param_1, unsigned char param_2)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unsigned char *puVar8;
    unsigned int uVar9;
    unsigned int uVar10;
    unsigned int fill;

    piVar1 = (int *)*param_1;
    iVar7 = piVar1[1];
    iVar3 = (int)((unsigned int)iVar7 + 1u);
    if ((iVar3 == 0 || iVar7 < -1) || (iVar2 = piVar1[2], iVar2 < 0)) {
        return 0xffffffffu;
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
        puVar8 = (unsigned char *)((unsigned int)iVar5 * (unsigned int)iVar3
                                   + (unsigned int)*piVar1 + (unsigned int)iVar4);
        uVar10 = ((unsigned int)iVar6 + 1u) - (unsigned int)iVar4;
        fill = (unsigned int)param_2 * 0x01010101u;
        for (; iVar5 <= iVar7; iVar5 = (int)((unsigned int)iVar5 + 1u)) {
            for (uVar9 = uVar10 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar8 = param_2;
                puVar8 = puVar8 + 1;
            }
            for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                __builtin_memcpy(puVar8, &fill, 4);
                puVar8 = puVar8 + 4;
            }
            puVar8 = puVar8 + ((unsigned int)iVar3 - uVar10);
        }
        return 0;
    }
    return 0xfffffffeu;
}
