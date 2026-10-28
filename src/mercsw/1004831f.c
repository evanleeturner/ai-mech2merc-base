/* SPDX-License-Identifier: MIT */
/* mercsw 1004831f */
/* mercsw 1004831f: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_100498c5(int param_1);
undefined __cdecl FUN_1004890b(int param_1);
undefined4 __cdecl FUN_100482cb(int param_1);

undefined4 __cdecl FUN_1004831f(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_100498c5(param_1);
  if (iVar1 == 0) {
    FUN_100482cb(param_1);
    local_8 = 1;
  }
  else if (iVar1 == 1) {
    FUN_1004890b(param_1);
  }
  return local_8;
}
