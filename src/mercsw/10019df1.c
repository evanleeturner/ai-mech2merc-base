/* SPDX-License-Identifier: MIT */
/* mercsw 10019df1 */
/* mercsw 10019df1: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_101eb480;
extern undefined4 DAT_101eb484;
extern undefined DAT_101f52e0[];
uint __cdecl FUN_10056489(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7);

void __cdecl FUN_10019df1(int param_1, int param_2, int param_3)

{
  FUN_10056489((int *)(DAT_101f52e0),param_1,param_2,DAT_101eb480,DAT_101eb484,0,param_3);
  DAT_101eb480 = param_1;
  DAT_101eb484 = param_2;
  return;
}
