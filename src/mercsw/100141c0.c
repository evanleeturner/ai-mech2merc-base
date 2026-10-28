/* SPDX-License-Identifier: MIT */
/* mercsw 100141c0 */
/* mercsw 100141c0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1003df3a(ushort * param_1);
undefined __cdecl FUN_1003ddbc(ushort * param_1);

void __cdecl FUN_100141c0(ushort * param_1, int param_2)

{
  *(int *)(param_1 + 0x12) = param_2;
  if (param_2 == 4) {
    FUN_1003df3a(param_1);
  }
  else {
    FUN_1003ddbc(param_1);
  }
  return;
}
