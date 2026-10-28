/* SPDX-License-Identifier: MIT */
/* mw2shell 1000d880 */
long long __ftol(void);
int FUN_1000a160(int param_1);

void __cdecl FUN_1000d880(int param_1)
{
    int iVar1;
    int *piVar2;
    long long lVar3;
    
    iVar1 = 8;
    do {
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    
    piVar2 = (int *)(param_1 + 0x250);
    lVar3 = __ftol();
    *piVar2 = (int)lVar3;
    iVar1 = FUN_1000a160(*piVar2 * 2);
    *piVar2 = iVar1 / 2;
    return;
}
