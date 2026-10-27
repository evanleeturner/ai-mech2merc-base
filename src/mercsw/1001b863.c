/* SPDX-License-Identifier: MIT */
/* mercsw 1001b863 */
unsigned long long __fastcall FUN_1001b863(unsigned int param_1, int param_2, int param_3, int param_4, int param_5, int param_6);

unsigned long long __fastcall FUN_1001b863(unsigned int param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    unsigned int uVar1;
    unsigned long long lVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    unsigned int uVar6;
    int iVar7;
    int iVar8;
    unsigned int uVar9;
    unsigned int uVar10;
    int bFail;

    iVar3 = (int)((unsigned int)*(int *)(param_3 + 0x34) - (unsigned int)param_4);
    iVar4 = (int)((unsigned int)*(int *)(param_3 + 0x38) - (unsigned int)param_5);
    iVar5 = (int)((unsigned int)*(int *)(param_3 + 0x3c) - (unsigned int)param_6);
    iVar7 = *(int *)(param_3 + 0x40);
    iVar8 = (int)(0U - (unsigned int)iVar7);

    bFail = 1;
    if (!(iVar7 < iVar3) && !(iVar3 < iVar8) && !(iVar7 < iVar4) &&
        !(iVar4 < iVar8) && !(iVar7 < iVar5) && !(iVar5 < iVar8)) {
        unsigned long long sq7;
        lVar2 = (unsigned long long)((long long)iVar3 * (long long)iVar3) +
                (unsigned long long)((long long)iVar5 * (long long)iVar5) +
                (unsigned long long)((long long)iVar4 * (long long)iVar4);
        uVar9 = (unsigned int)(lVar2 >> 0x20);
        sq7 = (unsigned long long)((long long)iVar7 * (long long)iVar7);
        uVar10 = (unsigned int)(sq7 >> 0x20);
        uVar6 = (unsigned int)((unsigned int)sq7 < (unsigned int)lVar2);
        uVar1 = uVar10 - uVar9;
        param_2 = (int)(uVar1 - uVar6);
        if (!(uVar10 < uVar9 || uVar1 < uVar6)) {
            bFail = 0;
        }
    }

    if (bFail) {
        uVar6 = 0x7fffffff;
    }
    else {
        if (iVar3 < 0) {
            iVar3 = (int)(0U - (unsigned int)iVar3);
        }
        if (iVar4 < 0) {
            iVar4 = (int)(0U - (unsigned int)iVar4);
        }
        iVar7 = iVar3;
        if (iVar3 < iVar4) {
            iVar7 = iVar4;
            param_2 = iVar3;
            iVar4 = iVar3;
        }
        if (iVar5 < 0) {
            iVar5 = (int)(0U - (unsigned int)iVar5);
        }
        iVar3 = iVar7;
        if (iVar7 < iVar5) {
            iVar3 = iVar5;
            iVar5 = iVar7;
            param_2 = iVar7;
        }
        uVar6 = ((unsigned int)iVar3 * 4U + (unsigned int)iVar4 + (unsigned int)iVar5) >> 2;
    }
    return ((unsigned long long)(unsigned int)param_2 << 32) | (unsigned long long)uVar6;
}
