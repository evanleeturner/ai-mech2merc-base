/* SPDX-License-Identifier: MIT */
/* mercsw 10016cdd */
unsigned int __cdecl FUN_10056489(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __cdecl FUN_10016cdd(int *param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
{
    int iVar1;
    int iVar2;
    int iVar3;
    int local_1c;

    iVar1 = param_5 / 2;
    iVar2 = (int)((unsigned int)param_4 + (unsigned int)param_2);
    if (0 < param_4) {
        for (local_1c = 0; iVar3 = iVar1 / 2, local_1c < iVar1 / 2; local_1c = (int)((unsigned int)local_1c + 1u)) {
            FUN_10056489(param_1, param_2, (int)((unsigned int)param_3 + (unsigned int)local_1c), iVar2,
                         (int)((unsigned int)param_3 + (unsigned int)local_1c), 0,
                         (int)((unsigned int)param_6 - 1u));
        }
        while (local_1c = iVar3, local_1c < iVar1) {
            FUN_10056489(param_1, param_2, (int)((unsigned int)param_3 + (unsigned int)local_1c), iVar2,
                         (int)((unsigned int)param_3 + (unsigned int)local_1c), 0, param_6);
            iVar3 = (int)((unsigned int)local_1c + 1u);
        }
        iVar3 = (int)((unsigned int)iVar1 + (unsigned int)((int)((unsigned int)param_5 - (unsigned int)iVar1) / 2));
        for (local_1c = iVar1; local_1c < iVar3; local_1c = (int)((unsigned int)local_1c + 1u)) {
            FUN_10056489(param_1, param_2, (int)((unsigned int)param_3 + (unsigned int)local_1c), iVar2,
                         (int)((unsigned int)param_3 + (unsigned int)local_1c), 0,
                         (int)((unsigned int)param_6 - 1u));
        }
        while (local_1c = iVar3, local_1c < param_5) {
            FUN_10056489(param_1, param_2, (int)((unsigned int)param_3 + (unsigned int)local_1c), iVar2,
                         (int)((unsigned int)param_3 + (unsigned int)local_1c), 0,
                         (int)((unsigned int)param_6 - 2u));
            iVar3 = (int)((unsigned int)local_1c + 1u);
        }
    }
    return;
}
