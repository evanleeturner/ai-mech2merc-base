/* SPDX-License-Identifier: MIT */
/* mercsw 10022b70 */
/* mercsw 10022b70: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10022bc1(int param_1, int param_2);
int __cdecl FUN_10022e3c(int param_1, int param_2);

int __cdecl FUN_10022b70(int param_1, int param_2)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x1c0) == 0) {
    local_8 = FUN_10022e3c(param_1,param_2);
  }
  else {
    local_8 = FUN_10022bc1(param_1,param_2);
  }
  return local_8;
}
