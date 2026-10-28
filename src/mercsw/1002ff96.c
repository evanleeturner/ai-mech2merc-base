/* SPDX-License-Identifier: MIT */
/* mercsw 1002ff96 */
/* mercsw 1002ff96: Ghidra's C, repaired by tools/ghidra_repair.py */

int __cdecl FUN_1002ff96(int param_1, int param_2)

{
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_c = *(int *)(param_1 + 4);
    if (local_c == 0) {
      local_8 = 0;
    }
    else {
      for (; local_c != 0; local_c = *(int *)(local_c + 8)) {
        local_10 = local_10 + 1;
      }
      local_10 = local_10 + (-1 - param_2);
      if (local_10 < 0) {
        local_8 = 0;
      }
      else {
        for (local_8 = *(int *)(param_1 + 4); (local_10 != 0 && (local_8 != 0));
            local_8 = *(int *)(local_8 + 8)) {
          local_10 = local_10 + -1;
        }
      }
    }
  }
  return local_8;
}
