/* SPDX-License-Identifier: MIT */
/* mercsw 1001a58f */
/* mercsw 1001a58f: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10014480(int param_1, undefined4 param_2, int param_3);

int __cdecl FUN_1001a58f(int * param_1)

{
  int local_8;
  
  local_8 = FUN_10014480(*param_1,param_1[1],param_1[2]);
  if (local_8 < 1) {
    local_8 = local_8 + 200;
  }
  else {
    local_8 = local_8 + 500;
  }
  return local_8;
}
