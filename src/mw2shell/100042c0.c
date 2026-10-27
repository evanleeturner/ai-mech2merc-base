/* SPDX-License-Identifier: MIT */
/* mw2shell 100042c0 */
extern int __cdecl FUN_1000a590(int param_1);
extern void __cdecl FUN_1000a3f0(int param_1, int param_2);

void __cdecl FUN_100042c0(int param_1)
{
    int iVar1;
    
    if (0 < param_1) {
        iVar1 = FUN_1000a590(param_1);
        if (iVar1 != 0) {
            FUN_1000a3f0(param_1, iVar1);
        }
    }
    return;
}
