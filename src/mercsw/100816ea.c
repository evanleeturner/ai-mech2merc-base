/* SPDX-License-Identifier: MIT */
/* mercsw 100816ea */
/* mercsw 100816ea: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined * __cdecl FUN_1002ce4e(char * param_1);
bool __cdecl FUN_10081763(int param_1, int param_2);

undefined4 __cdecl FUN_100816ea(char * param_1)

{
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 1;
  local_10 = (int *)FUN_1002ce4e(param_1);
  if (local_10 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    for (local_c = 0; local_c < 7; local_c = local_c + 1) {
      FUN_10081763(local_10[1],*local_10);
      local_10 = local_10 + 2;
    }
  }
  return local_8;
}
