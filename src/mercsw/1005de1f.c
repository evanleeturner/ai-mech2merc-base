/* SPDX-License-Identifier: MIT */
/* mercsw 1005de1f */
/* mercsw 1005de1f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab238;
extern undefined4 DAT_100ab23c;
extern undefined4 DAT_100b3c9c;
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined __cdecl FUN_1001d916(undefined4 param_1);

void __cdecl FUN_1005de1f(undefined4 param_1, int param_2)

{
  DAT_100ab238 = FUN_10003d60(param_2,0xf);
  DAT_100ab23c = DAT_100ab238;
  *(int *)(DAT_100b3c9c + 0x34) = DAT_100ab238;
  FUN_1001d916(DAT_100ab238);
  return;
}
