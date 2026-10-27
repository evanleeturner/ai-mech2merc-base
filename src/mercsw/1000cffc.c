/* SPDX-License-Identifier: MIT */
/* mercsw 1000cffc */
extern unsigned int DAT_100a7598;

void * _AddressOfReturnAddress(void);

void __stdcall FUN_1000cffc(void)
{
    int iVar1;
    unsigned int *puVar2;
    unsigned int *puVar3;

    puVar3 = (unsigned int *)_AddressOfReturnAddress();
    puVar2 = &DAT_100a7598;
    for (iVar1 = 9; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar2 = *puVar3;
        puVar2 = puVar2 + 1;
    }
    return;
}
