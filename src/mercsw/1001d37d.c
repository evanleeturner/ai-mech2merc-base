/* SPDX-License-Identifier: MIT */
/* mercsw 1001d37d */
void __cdecl FUN_1001d37d(int param_1, void (__cdecl *param_2)(int))
{
    int iVar1;
    int local_8;

    if (param_1 != 0) {
        local_8 = *(int *)(param_1 + 8);
        while (local_8 != 0) {
            iVar1 = *(int *)(local_8 + 8);
            (*param_2)(local_8);
            local_8 = iVar1;
        }
    }
    return;
}
