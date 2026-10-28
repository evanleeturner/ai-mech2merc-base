/* SPDX-License-Identifier: MIT */
/* mercsw 10036726 */
/* mercsw 10036726: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10036142(int param_1);

int __cdecl FUN_10036726(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10036142(1);
  iVar2 = FUN_10036142(2);
  if (param_1 == 0) {
    if ((iVar1 == 0) || (iVar2 != 0)) {
      if ((iVar1 == 0) && (iVar2 != 0)) {
        param_1 = 2;
      }
      else if ((iVar1 == 0) && (iVar2 == 0)) {
        param_1 = -1;
      }
    }
    else {
      param_1 = 1;
    }
  }
  else if ((param_1 == 1) && (iVar1 == 0)) {
    param_1 = -1;
  }
  else if ((param_1 == 2) && (iVar2 == 0)) {
    param_1 = -1;
  }
  return param_1;
}
