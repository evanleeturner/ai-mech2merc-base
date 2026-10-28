/* SPDX-License-Identifier: MIT */
/* mercsw 1002d49d */
/* mercsw 1002d49d: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1005aaf7(int param_1, int param_2);

int __cdecl FUN_1002d49d(char * param_1, int param_2)

{
  int iVar1;
  int local_c;
  char *local_8;
  
  local_c = 0;
  for (local_8 = param_1; *local_8 != '\0'; local_8 = local_8 + 1) {
    iVar1 = FUN_1005aaf7(param_2,(int)*local_8);
    local_c = local_c + iVar1;
  }
  return local_c;
}
