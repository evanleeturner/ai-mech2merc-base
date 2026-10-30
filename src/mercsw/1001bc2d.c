/* SPDX-License-Identifier: MIT */
/* mercsw 1001bc2d */
void __stdcall RaiseException(DWORD, DWORD, DWORD, const DWORD *);
int __cdecl FUN_1002634e(int param_1);

int __cdecl FUN_1001bc2d(int param_1, int *param_2)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar7;
    int iVar8;
    int local_1c;
    unsigned long long lVar2;
    unsigned long long lVar6;
    unsigned long long lVar9;
    unsigned long long lVar10;
    unsigned long long lVar11;
    unsigned long long lVar12;
    unsigned long long lVar13;
    long long lVar14;
    long long lVar15;

    iVar7 = *(int *)(param_1 + 0x40);
    if (iVar7 < 1) {
        local_1c = 0x7fffffff;
    } else {
        iVar3 = (int)((unsigned int)*(int *)(param_1 + 0x34) - (unsigned int)*param_2);
        iVar4 = (int)((unsigned int)*(int *)(param_1 + 0x38) - (unsigned int)param_2[1]);
        iVar5 = (int)((unsigned int)*(int *)(param_1 + 0x3c) - (unsigned int)param_2[2]);

        lVar2 = (unsigned long long)((long long)iVar4 * (long long)iVar4)
              + (unsigned long long)((long long)iVar3 * (long long)iVar3)
              + (unsigned long long)((long long)iVar5 * (long long)iVar5);
        lVar6 = (unsigned long long)((long long)iVar7 * (long long)iVar7);

        if (lVar2 < lVar6) {
            local_1c = 10;
        } else {
            lVar9 = lVar2 - lVar6;

            lVar10 = (unsigned long long)((long long)iVar4 * (long long)param_2[7])
                   + (unsigned long long)((long long)iVar3 * (long long)param_2[6]);
            lVar11 = (unsigned long long)((long long)iVar5 * (long long)param_2[8]);
            lVar12 = lVar10 + lVar11;

            if (lVar12 < lVar10) {
                local_1c = 0x7fffffff;
            } else {
                lVar14 = (long long)lVar12;
                iVar8 = param_2[0xc];

                if (iVar8 == 0) {
                    RaiseException(0xC0000094UL, 0, 0, NULL);
                    lVar15 = 0;
                } else if (iVar8 == -1) {
                    lVar15 = (long long)(0ULL - (unsigned long long)lVar14);
                } else {
                    lVar15 = lVar14 / (long long)iVar8;
                }
                if (lVar15 < -2147483648LL || lVar15 > 2147483647LL) {
                    RaiseException(0xC0000094UL, 0, 0, NULL);
                }
                local_1c = (int)lVar15;

                lVar13 = (unsigned long long)((long long)local_1c * (long long)local_1c);
                if (lVar13 < lVar9) {
                    local_1c = 0x7fffffff;
                } else {
                    local_1c = (int)((unsigned int)local_1c - (unsigned int)iVar7);
                    if (local_1c < 0) {
                        local_1c = 0;
                    }
                    iVar7 = FUN_1002634e((int)param_2);
                    if (iVar7 <= local_1c) {
                        local_1c = 0x7fffffff;
                    }
                }
            }
        }
    }
    return local_1c;
}
