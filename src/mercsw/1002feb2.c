/* SPDX-License-Identifier: MIT */
/* mercsw 1002feb2 */
/* mercsw 1002feb2: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl __strcmpi(char * _Str1, char * _Str2);
int __cdecl FUN_1002feb2(int param_1, char * param_2);

int __cdecl FUN_1002feb2(int param_1, char * param_2)

{
  int iVar1;
  int local_8;
  
  if ((*(int *)(param_1 + 0x70) == 0) ||
     (iVar1 = __strcmpi(*(char **)(param_1 + 0x70),param_2), iVar1 != 0)) {
    for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
      iVar1 = FUN_1002feb2(local_8,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    param_1 = 0;
  }
  return param_1;
}
