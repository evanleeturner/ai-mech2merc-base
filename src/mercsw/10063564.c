/* SPDX-License-Identifier: MIT */
/* mercsw 10063564 */
/* mercsw 10063564: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];

void __cdecl FUN_10063564(undefined4 param_1)

{
  *(undefined4 *)
   (*(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x3e0) * 0x40 +
    *(int *)(*(int *)(DAT_100eef40[DAT_100adf38] + 0x20) + 0x54) + 0xc) = param_1;
  return;
}
