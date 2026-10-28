/* SPDX-License-Identifier: MIT */
/* mercsw 10055f10 */
/* mercsw 10055f10: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100aaf80;
uint __cdecl FUN_10055f9e(int param_1, int param_2, int * param_3, int param_4, int param_5);

void __cdecl FUN_10055f10(uint param_1, int param_2, int * param_3, int param_4)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xf;
  if (((uVar1 == 0) || ((uVar1 != 1 && (uVar1 == 3)))) && ((DAT_100aaf80 & 1) != 0)) {
    FUN_10055f9e((param_1 & 0xff0) >> 4,param_2,param_3,param_4,0);
  }
  return;
}
