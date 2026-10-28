/* SPDX-License-Identifier: MIT */
/* mercsw 10031c80 */
/* mercsw 10031c80: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_101686ec;
extern undefined4 PTR_DAT_100aaf68;
undefined4 __cdecl FUN_10011e60(int param_1, int param_2, int param_3);

void __cdecl FUN_10031c80(int * param_1)

{
  DAT_101686ec = FUN_10011e60((int)((unsigned int)(param_1[1]) << (0x10)),0x15555,(int)((unsigned int)(*param_1) << (0x10)));
  *(undefined4 *)(PTR_DAT_100aaf68 + 0x44) = DAT_101686ec;
  return;
}
