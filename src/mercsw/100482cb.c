/* SPDX-License-Identifier: MIT */
/* mercsw 100482cb */
/* mercsw 100482cb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10160bd8;
int * __cdecl FUN_100496bb(int param_1);

undefined4 __cdecl FUN_100482cb(int param_1)

{
  int *piVar1;
  undefined4 local_8;
  
  local_8 = 0;
  if (DAT_10160bd8 == 0) {
    piVar1 = FUN_100496bb(param_1);
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 1;
      local_8 = 1;
    }
  }
  return local_8;
}
