/* SPDX-License-Identifier: MIT */
/* mercsw 100498c5 */
/* mercsw 100498c5: Ghidra's C, repaired by tools/ghidra_repair.py */
int * __cdecl FUN_100496bb(int param_1);

int __cdecl FUN_100498c5(int param_1)

{
  int *piVar1;
  int local_c;
  
  local_c = 0;
  piVar1 = FUN_100496bb(param_1);
  if (piVar1 != (int *)0x0) {
    local_c = piVar1[1];
  }
  return local_c;
}
