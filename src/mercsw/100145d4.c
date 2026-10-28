/* SPDX-License-Identifier: MIT */
/* mercsw 100145d4 */
/* mercsw 100145d4: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af098;
int __cdecl FUN_10014642(int param_1, int param_2, int param_3, int param_4);
undefined4 __cdecl FUN_10014718(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);

undefined4 __cdecl FUN_100145d4(int param_1, int param_2, int param_3, int * param_4)

{
  int iVar1;
  
  iVar1 = FUN_10014642(DAT_100af098,param_1,param_2,param_3);
  *param_4 = iVar1;
  if ((*param_4 != 0) && (iVar1 = FUN_10014718(*param_4,param_1,param_2,param_3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}
