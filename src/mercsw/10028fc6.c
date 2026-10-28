/* SPDX-License-Identifier: MIT */
/* mercsw 10028fc6 */
extern int __cdecl FUN_1002a1e0(uint param_1, int param_2);
extern int __cdecl FUN_1004d47f(int param_1);
extern int __cdecl FUN_10008156(int param_1, int param_2);
extern int DAT_100adf38;

uint __cdecl FUN_10028fc6(int param_1, uint param_2)
{
    int iVar1;
    
    iVar1 = FUN_1002a1e0(param_2, 2);
    if (iVar1 == 0) {
        param_2 = 0;
        iVar1 = 0;
    }
    else {
        iVar1 = FUN_1004d47f(*(int *)(param_1 + 8));
        if (iVar1 == DAT_100adf38) {
            iVar1 = FUN_10008156(5, *(int *)(param_1 + 0xc));
        }
    }
    return (iVar1 & 0xFFFF0000) | (param_2 & 0xFFFF);
}
