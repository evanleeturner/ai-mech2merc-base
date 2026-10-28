/* SPDX-License-Identifier: MIT */
/* mercsw 1006b60b */
/* mercsw 1006b60b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab094;
extern undefined4 DAT_100adf38;
extern undefined4 PTR_DAT_100aaf68;
undefined __cdecl FUN_1006b6af(uint param_1, uint param_2, uint param_3);
undefined __cdecl FUN_100037f0(uint param_1, undefined4 param_2, uint param_3, uint param_4, int param_5);

void __cdecl FUN_1006b60b(int * param_1, int param_2)

{
  uint local_8;
  
  if ((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38) {
    FUN_1006b6af(0,-param_2,0);
  }
  if (param_2 < -0x102762) {
    local_8 = 0xfa;
  }
  else {
    local_8 = 0xfb;
  }
  FUN_100037f0(*(int *)(*param_1 + 0x50) - *(int *)PTR_DAT_100aaf68,
               (*(int *)(*param_1 + 0x54) - param_1[0x100]) - *(int *)(PTR_DAT_100aaf68 + 4),
               *(int *)(*param_1 + 0x58) - *(int *)(PTR_DAT_100aaf68 + 8),local_8,DAT_100ab094);
  return;
}
