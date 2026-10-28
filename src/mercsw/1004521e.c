/* SPDX-License-Identifier: MIT */
/* mercsw 1004521e */
/* mercsw 1004521e: Ghidra's C, repaired by tools/ghidra_repair.py */

undefined4 __cdecl FUN_1004521e(int * param_1)

{
  undefined4 uVar1;
  
  if ((((param_1[0xf6] == 0) || (*(char *)(*(int *)(*param_1 + 0x4c) + 0x30) == '\x01')) ||
      (*(int *)(*param_1 + 0x1ea) != 0)) || (*(short *)(*param_1 + 0x1c4) == 10)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
