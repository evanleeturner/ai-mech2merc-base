/* SPDX-License-Identifier: MIT */
/* mercsw 10065dcd */
/* mercsw 10065dcd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
extern undefined4 DAT_100b3920;
extern undefined4 DAT_100b3924;
extern undefined4 DAT_100b3928;
extern undefined4 DAT_100b3930;
undefined __cdecl FUN_10036a72(uint param_1);

void __stdcall FUN_10065dcd(void)

{
  FUN_10036a72(DAT_100b3924);
  FUN_10036a72(DAT_100b3928);
  FUN_10036a72(DAT_100b3920);
  DAT_100b3930 = 0;
  DAT_100b38fc = 0;
  return;
}
