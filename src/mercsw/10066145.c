/* SPDX-License-Identifier: MIT */
/* mercsw 10066145 */
/* Parameter and return types of the callees are inferred from the call sites only. */
int __cdecl FUN_10002570(unsigned int a, int b);
int __cdecl FixedMul16(int a, int b);

int __cdecl FUN_10066145(int param_1, unsigned int param_2)
{
    int iVar1;
    int iVar2;

    iVar1 = FUN_10002570(param_2, 0xd555);
    iVar2 = FixedMul16(*(int *)(param_1 + 4), 0x13f);
    *(int *)(param_1 + 4) = iVar2;
    iVar2 = FixedMul16(*(int *)(param_1 + 8), 199);
    *(int *)(param_1 + 8) = iVar2;
    iVar2 = FixedMul16(*(int *)(param_1 + 8), iVar1);
    *(int *)(param_1 + 8) = iVar2;
    iVar2 = FixedMul16(*(int *)(param_1 + 0xc), 0x13f);
    *(int *)(param_1 + 0xc) = iVar2;
    iVar2 = FixedMul16(*(int *)(param_1 + 0x10), 199);
    *(int *)(param_1 + 0x10) = iVar2;
    iVar1 = FixedMul16(*(int *)(param_1 + 0x10), iVar1);
    *(int *)(param_1 + 0x10) = iVar1;
    return param_1;
}
