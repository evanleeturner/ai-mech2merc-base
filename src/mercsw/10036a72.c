/* SPDX-License-Identifier: MIT */
/* mercsw 10036a72 */
/* mercsw 10036a72: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100add20[];
extern undefined DAT_100ade20[];
extern undefined4 DAT_100adf20;
extern undefined4 DAT_100adf24;

void __cdecl FUN_10036a72(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((param_1 & 0x80) == 0) {
    puVar2 = (undefined4 *)(DAT_100ade20);
    uVar1 = DAT_100adf24;
  }
  else {
    param_1 = param_1 ^ 0x80;
    puVar2 = (undefined4 *)(DAT_100add20);
    uVar1 = DAT_100adf20;
  }
  puVar2[param_1] = uVar1;
  return;
}
