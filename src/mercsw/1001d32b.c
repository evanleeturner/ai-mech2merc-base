/* SPDX-License-Identifier: MIT */
/* mercsw 1001d32b */
void __cdecl FUN_1001d32b(int param_1, int *param_2, int *param_3);

void __cdecl FUN_1001d32b(int param_1, int *param_2, int *param_3)
{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
        if (param_2 != (int *)0x0) {
            *param_2 = (int)*(short *)(iVar1 + 4);
        }
        if (param_3 != (int *)0x0) {
            *param_3 = (int)*(short *)(iVar1 + 6);
        }
    }
    return;
}
