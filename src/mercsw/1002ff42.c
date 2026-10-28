/* SPDX-License-Identifier: MIT */
/* mercsw 1002ff42 */
/* mercsw 1002ff42: Ghidra's C, repaired by tools/ghidra_repair.py */

int __cdecl FUN_1002ff42(int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  local_c = 0;
  iVar2 = *(int *)(param_1 + 4);
  while (iVar1 = iVar2, iVar1 != 0) {
    local_c = iVar1;
    iVar2 = *(int *)(iVar1 + 8);
  }
  return local_c;
}
