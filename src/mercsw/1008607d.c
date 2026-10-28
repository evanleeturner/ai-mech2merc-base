/* SPDX-License-Identifier: MIT */
/* mercsw 1008607d */
/* mercsw 1008607d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ba7bc;
extern undefined4 DAT_100c9054;
extern undefined4 DAT_100c9058;
undefined __cdecl FUN_10085f40(int param_1);

void __stdcall FUN_1008607d(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  DAT_100c9054 = 0;
  DAT_100c9058 = 0;
  for (local_c = 0; local_c < 0x3f1; local_c = local_c + 1) {
    for (local_8 = *(int *)(DAT_100ba7bc + local_c * 4); local_8 != 0;
        local_8 = *(int *)(local_8 + 8)) {
      if (*(short *)(local_8 + 2) == 0) {
        *(undefined2 *)(local_8 + 2) = 1;
        FUN_10085f40(local_8);
      }
    }
  }
  return;
}
