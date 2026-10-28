/* SPDX-License-Identifier: MIT */
/* mw2shell 1006d9e0 */
/* mw2shell 1006d9e0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a678c;
extern undefined DAT_100aaa98[];
int __cdecl FUN_1000ad30(int param_1, int param_2);
int __cdecl FUN_1006b230(int param_1, int param_2, char param_3);
undefined __cdecl FUN_10063de0(int * param_1);

int __cdecl FUN_1006d9e0(int param_1, char param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000ad30(DAT_100a678c,*(int *)(param_1 + 0x810));
  iVar1 = FUN_1006b230(param_1,iVar1,param_2);
  FUN_10063de0((int *)DAT_100aaa98);
  return iVar1;
}
