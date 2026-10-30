/* SPDX-License-Identifier: MIT */
/* mercsw 10048240 */
extern void *DAT_100adf74;
extern unsigned int *DAT_10160bdc;
extern unsigned int *DAT_10160be0;

void * __stdcall HeapAlloc(void *, unsigned long, unsigned long);

unsigned int __cdecl FUN_10048240(unsigned int param_1)
{
    unsigned int *puVar1;
    unsigned int uVar2;
    int iVar3;
    unsigned int *puVar4;

    puVar1 = (unsigned int *)HeapAlloc(DAT_100adf74, 1, 0x18);
    if (puVar1 == (unsigned int *)0) {
        uVar2 = 0;
    }
    else {
        puVar4 = puVar1;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
        }
        *puVar1 = param_1;
        puVar4 = puVar1;
        if (DAT_10160be0 != (unsigned int *)0) {
            DAT_10160bdc[5] = (unsigned int)puVar1;
            puVar4 = DAT_10160be0;
        }
        DAT_10160be0 = puVar4;
        uVar2 = 1;
        DAT_10160bdc = puVar1;
    }
    return uVar2;
}
