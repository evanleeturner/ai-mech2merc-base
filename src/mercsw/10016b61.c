/* SPDX-License-Identifier: MIT */
/* mercsw 10016b61 */
unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __cdecl FUN_10016b61(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int local_1c;

    iVar1 = param_4 / 2;
    iVar2 = (int)((unsigned int)param_3 - (unsigned int)param_5);
    if (0 < param_5) {
        for (local_1c = 0; iVar3 = iVar1 / 2, local_1c < iVar1 / 2; local_1c = (int)((unsigned int)local_1c + 1u)) {
            FUN_10056489(param_1, (int)((unsigned int)local_1c + (unsigned int)param_2), param_3,
                         (int)((unsigned int)local_1c + (unsigned int)param_2), iVar2, 0,
                         (int)((unsigned int)param_6 - 1u));
        }
        while (local_1c = iVar3, local_1c < iVar1) {
            FUN_10056489(param_1, (int)((unsigned int)local_1c + (unsigned int)param_2), param_3,
                         (int)((unsigned int)local_1c + (unsigned int)param_2), iVar2, 0, param_6);
            iVar3 = (int)((unsigned int)local_1c + 1u);
        }
        iVar3 = (int)((unsigned int)iVar1 + (unsigned int)((int)((unsigned int)param_4 - (unsigned int)iVar1) / 2));
        for (local_1c = iVar1; local_1c < iVar3; local_1c = (int)((unsigned int)local_1c + 1u)) {
            FUN_10056489(param_1, (int)((unsigned int)local_1c + (unsigned int)param_2), param_3,
                         (int)((unsigned int)local_1c + (unsigned int)param_2), iVar2, 0,
                         (int)((unsigned int)param_6 - 1u));
        }
        while (local_1c = iVar3, local_1c < param_4) {
            FUN_10056489(param_1, (int)((unsigned int)local_1c + (unsigned int)param_2), param_3,
                         (int)((unsigned int)local_1c + (unsigned int)param_2), iVar2, 0,
                         (int)((unsigned int)param_6 - 2u));
            iVar3 = (int)((unsigned int)local_1c + 1u);
        }
    }
    return;
}
