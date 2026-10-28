/* SPDX-License-Identifier: MIT */
/* mercsw 100398e3 */
extern byte DAT_100ae75c;
extern byte DAT_100ae75d;
extern byte DAT_100ae75e;
extern byte DAT_100ae75f;
extern byte *unaff_EDI;

void __fastcall FUN_100398e3(int param_1)
{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    uVar3 = uVar5 >> 2;
    bVar1 = *(byte *)(uVar3 + unaff_EDI);
    (&DAT_100ae75c)[uVar5] = bVar1;
    uVar2 = ((uint)*(byte *)(uVar3 + 1 + unaff_EDI) + (uint)bVar1) >> 1;
    (&DAT_100ae75e)[uVar5] = (char)uVar2;
    (&DAT_100ae75d)[uVar5] = (char)((uVar2 + bVar1) >> 1);
    (&DAT_100ae75f)[uVar5] = (char)((uVar2 + *(byte *)(uVar3 + 1 + unaff_EDI)) >> 1);
    uVar5 = uVar5 + 4;
  } while (uVar5 < param_1 - 1U);
  iVar4 = 0;
  do {
    *(byte *)(iVar4 + unaff_EDI) = (&DAT_100ae75c)[iVar4];
    iVar4 = iVar4 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}
