/* SPDX-License-Identifier: MIT */
/* mercsw 1000fef4 */
int __cdecl ApproxLength3_Likely(unsigned int param_1, unsigned int param_2, unsigned int param_3);
unsigned int __cdecl FUN_10002570(unsigned int param_1, int param_2);

void __cdecl NormalizeVec3(unsigned int *param_1, unsigned int *param_2, unsigned int *param_3)
{
    int iVar1;
    unsigned int uVar2;

    iVar1 = ApproxLength3_Likely(*param_1, *param_2, *param_3);
    if (0 < iVar1) {
        uVar2 = FUN_10002570(*param_1, iVar1);
        *param_1 = uVar2;
        uVar2 = FUN_10002570(*param_2, iVar1);
        *param_2 = uVar2;
        uVar2 = FUN_10002570(*param_3, iVar1);
        *param_3 = uVar2;
    }
    return;
}
