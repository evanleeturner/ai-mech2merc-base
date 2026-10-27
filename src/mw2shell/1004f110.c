/* SPDX-License-Identifier: MIT */
/* mw2shell 1004f110 */
extern unsigned int DAT_000b0f00;

void __stdcall FUN_1004f110(void)
{
    unsigned int *puVar1;
    unsigned int *puVar2;
    
    puVar1 = (unsigned int *)&DAT_000b0f00;
    do {
        puVar2 = puVar1 + 1;
        *puVar1 = *puVar1 & 0xff00ff00;
        puVar1 = puVar2;
    } while ((int)puVar2 < 0xb0fa0);
    return;
}
