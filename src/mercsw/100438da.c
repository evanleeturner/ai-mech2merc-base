/* SPDX-License-Identifier: MIT */
/* mercsw 100438da */
/* mercsw 100438da: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __cdecl FUN_1002950f(int param_1, short param_2);
int __cdecl FUN_1002a132(int param_1);
int __cdecl FUN_10022b70(int param_1, int param_2);

bool __cdecl FUN_100438da(int param_1, short param_2)

{
  int iVar1;
  
  FUN_1002950f(param_1,param_2);
  iVar1 = FUN_1002a132(param_1);
  FUN_10022b70(param_1,iVar1);
  return *(int *)(param_1 + 0xcc) + 2000 <= *(int *)(param_1 + 0x54);
}
