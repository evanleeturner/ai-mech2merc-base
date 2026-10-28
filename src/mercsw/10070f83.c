/* SPDX-License-Identifier: MIT */
/* mercsw 10070f83 */
/* mercsw 10070f83: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl __strcmpi(char * _Str1, char * _Str2);

int __cdecl FUN_10070f83(int param_1, char * param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while ((local_8 < *(int *)(param_1 + 0x4b4) &&
         (iVar1 = __strcmpi(param_2,*(char **)(param_1 + 4 + local_8 * 0xc)), iVar1 != 0))) {
    local_8 = local_8 + 1;
  }
  if (*(int *)(param_1 + 0x4b4) == local_8) {
    local_8 = -1;
  }
  return local_8;
}
