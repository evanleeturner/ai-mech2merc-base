/* SPDX-License-Identifier: MIT */
/* mw2shell 1000f360 */
void FUN_1000f290(int);

void __stdcall FUN_1000f360(void)
{
    int iVar1;
    
    iVar1 = 0;
    do {
        FUN_1000f290(iVar1);
        iVar1 = iVar1 + 1;
    } while (iVar1 < 0x20);
    return;
}
