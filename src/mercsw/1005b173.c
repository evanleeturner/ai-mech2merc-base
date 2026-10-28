/* SPDX-License-Identifier: MIT */
/* mercsw 1005b173 */
extern byte *unaff_ESI;
extern void *unaff_EDI;

byte __stdcall FUN_1005b173(void)
{
    byte bVar1;
    byte *pbVar2;
    
    pbVar2 = unaff_ESI;
    if (*(int *)((byte *)unaff_EDI + 0x10) == 0) {
        pbVar2 = unaff_ESI + 1;
        *(uint *)((byte *)unaff_EDI + 0x10) = (uint)*unaff_ESI;
    }
    bVar1 = *pbVar2;
    *(int *)((byte *)unaff_EDI + 0x10) = *(int *)((byte *)unaff_EDI + 0x10) + -1;
    return bVar1;
}
