/* SPDX-License-Identifier: MIT */
/* mercsw 10044761 */
/* mercsw 10044761: Ghidra's C, repaired by tools/ghidra_repair.py */
bool __cdecl FUN_1002950f(int param_1, short param_2);
int __cdecl FUN_1002a132(int param_1);

int __cdecl FUN_10044761(int param_1, short param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xdc);
  FUN_1002950f(param_1,param_2);
  iVar2 = FUN_1002a132(param_1);
  FUN_1002950f(param_1,(short)uVar1);
  return (iVar2 + 0x1680000) % 0x1680000;
}
