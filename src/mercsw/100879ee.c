/* SPDX-License-Identifier: MIT */
/* mercsw 100879ee */
/* mercsw 100879ee: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };

undefined4 __cdecl FUN_100879ee(int param_1, int param_2)

{
  int local_8;
  
  local_8 = 0;
  do {
    if (param_1 <= local_8) {
      return 1;
    }
    if (*(int *)(param_2 + 8 + local_8 * 0xc) == 1) {
      if ((*(uint *)(param_2 + 4 + local_8 * 0xc) & **(uint **)(param_2 + local_8 * 0xc)) != 0) {
        return 0;
      }
    }
    else if ((*(uint *)(param_2 + 4 + local_8 * 0xc) & **(uint **)(param_2 + local_8 * 0xc)) == 0) {
      return 0;
    }
    local_8 = local_8 + 1;
  } while( true );
}
