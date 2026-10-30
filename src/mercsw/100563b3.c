/* SPDX-License-Identifier: MIT */
/* mercsw 100563b3 */
unsigned long long __fastcall FUN_100563b3(unsigned int param_1, unsigned int param_2, int *param_3, int param_4, int param_5)
{
    int *piVar1;
    int iVar2;
    int iVar3;
    long long lVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    unsigned int uLow;

    piVar1 = (int *)*param_3;
    iVar2 = piVar1[1];
    if ((int)((unsigned int)iVar2 + 1u) == 0 || iVar2 < -1) {
        return ((unsigned long long)param_2 << 32) | 0xffffffffULL;
    }
    iVar3 = piVar1[2];
    if (iVar3 < 0) {
        return ((unsigned long long)param_2 << 32) | 0xffffffffULL;
    }
    iVar9 = param_3[1];
    iVar5 = iVar9;
    if (iVar9 < 1) {
        iVar5 = 0;
    }
    iVar10 = param_3[2];
    iVar6 = iVar10;
    if (iVar10 < 1) {
        iVar6 = 0;
    }
    iVar7 = param_3[3];
    if (iVar2 <= param_3[3]) {
        iVar7 = iVar2;
    }
    iVar8 = param_3[4];
    if (iVar3 <= param_3[4]) {
        iVar8 = iVar3;
    }
    if ((iVar5 <= iVar7) && (iVar6 <= iVar8)) {
        iVar9 = (int)((unsigned int)param_4 + (unsigned int)iVar9);
        iVar10 = (int)((unsigned int)param_5 + (unsigned int)iVar10);
        if ((((iVar5 <= iVar9) && (iVar9 <= iVar7)) && (iVar6 <= iVar10)) && (iVar10 <= iVar8)) {
            lVar4 = (long long)iVar10 * (long long)(int)((unsigned int)iVar2 + 1u);
            uLow = (unsigned int)*(unsigned char *)((unsigned int)(int)lVar4 + (unsigned int)*piVar1 + (unsigned int)iVar9);
            return (((unsigned long long)lVar4 >> 32) << 32) | (unsigned long long)uLow;
        }
        return ((unsigned long long)(unsigned int)iVar3 << 32) | 0xfffffffdULL;
    }
    return ((unsigned long long)(unsigned int)iVar3 << 32) | 0xfffffffeULL;
}
