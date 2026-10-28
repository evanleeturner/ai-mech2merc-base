/* SPDX-License-Identifier: MIT */
/* mercsw 10036649 */
/* mercsw 10036649: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100add18;
int __cdecl FUN_10036142(int param_1);
undefined __cdecl FUN_10007f49(int param_1, int param_2);

void __cdecl FUN_10036649(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_10036142(1);
  iVar2 = FUN_10036142(2);
  if (param_1 == 0) {
    if ((iVar1 != 0) && (iVar2 == 0)) {
      param_1 = 1;
      goto LAB_1003670b;
    }
    if ((iVar1 == 0) && (iVar2 != 0)) {
      param_1 = 2;
      goto LAB_1003670b;
    }
    if (iVar1 != 0) goto LAB_1003670b;
  }
  else {
    if ((param_1 == 1) && (iVar1 == 0)) {
      return;
    }
    if (param_1 != 2) goto LAB_1003670b;
  }
  if (iVar2 == 0) {
    return;
  }
LAB_1003670b:
  DAT_100add18 = param_1;
  FUN_10007f49(param_1,0);
  return;
}
