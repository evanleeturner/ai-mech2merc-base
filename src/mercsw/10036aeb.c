/* SPDX-License-Identifier: MIT */
/* mercsw 10036aeb */
/* mercsw 10036aeb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100add20[];
extern undefined DAT_100ade20[];

void __cdecl FUN_10036aeb(uint param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 & 0x80) == 0) {
    puVar1 = (undefined4 *)(DAT_100ade20);
  }
  else {
    param_1 = param_1 ^ 0x80;
    puVar1 = (undefined4 *)(DAT_100add20);
  }
  puVar1[param_1] = 0;
  return;
}
