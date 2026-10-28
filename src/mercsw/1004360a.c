/* SPDX-License-Identifier: MIT */
/* mercsw 1004360a */
/* mercsw 1004360a: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __cdecl FUN_1002950f(int param_1, short param_2);
int __cdecl FUN_100297b4(int param_1);
int __cdecl FUN_10022b70(int param_1, int param_2);
undefined __cdecl FUN_10044a83(int param_1);

undefined4 __cdecl FUN_1004360a(int param_1, short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_1002950f(param_1,param_2);
  iVar2 = FUN_100297b4(param_1);
  FUN_10022b70(param_1,iVar2);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x3d8);
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 8) = 0x400;
  FUN_10044a83(param_1);
  return uVar1;
}
