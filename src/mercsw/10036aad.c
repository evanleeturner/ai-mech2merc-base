/* SPDX-License-Identifier: MIT */
/* mercsw 10036aad */
/* mercsw 10036aad: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100add20[];
extern undefined DAT_100ade20[];
extern undefined4 DAT_100adf20;
extern undefined4 DAT_100adf24;

void __cdecl FUN_10036aad(uint param_1, int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_1 & 0x80) == 0) {
    puVar2 = (undefined4 *)(DAT_100ade20);
    iVar1 = DAT_100adf24;
  }
  else {
    param_1 = param_1 ^ 0x80;
    puVar2 = (undefined4 *)(DAT_100add20);
    iVar1 = DAT_100adf20;
  }
  puVar2[param_1] = iVar1 - param_2;
  return;
}
