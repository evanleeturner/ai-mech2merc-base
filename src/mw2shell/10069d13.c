/* SPDX-License-Identifier: MIT */
/* mw2shell 10069d13 */
extern int unaff_EDI;
extern byte *unaff_ESI;

byte __stdcall FUN_10069d13(void)
{
    byte bVar1;
    byte *pbVar2;
    
    pbVar2 = unaff_ESI;
    if (*(int *)(unaff_EDI + 0x10) == 0) {
        pbVar2 = unaff_ESI + 1;
        *(uint *)(unaff_EDI + 0x10) = (uint)*unaff_ESI;
    }
    bVar1 = *pbVar2;
    *(int *)(unaff_EDI + 0x10) = *(int *)(unaff_EDI + 0x10) + -1;
    return bVar1;
}
