/* SPDX-License-Identifier: MIT */
/* mw2shell 10054000 */
extern unsigned char DAT_100bdf90[];
extern unsigned int _DAT_1009c68c;
extern unsigned char *PTR_DAT_1009c690;
extern unsigned int DAT_1009c698;

void __cdecl FUN_10053fc0(unsigned int param_1, unsigned int *param_2);

void __stdcall FUN_10054000(void)
{
    unsigned int *puVar1;
    int iVar2;
    unsigned int uVar3;
    unsigned int uVar4;
    int iVar5;

    iVar2 = 0;
    iVar5 = 4;
    do {
        uVar3 = 0;
        do {
            puVar1 = (unsigned int *)((int)&DAT_100bdf90 + iVar2);
            iVar2 = (int)((unsigned int)iVar2 + 0x18U);
            uVar4 = uVar3 + 1;
            FUN_10053fc0(uVar3, puVar1);
            uVar3 = uVar4;
        } while (uVar4 < 0x25);
        iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    _DAT_1009c68c = 0;
    DAT_1009c698 = 0;
    PTR_DAT_1009c690 = (unsigned char *)&DAT_100bdf90;
    return;
}
