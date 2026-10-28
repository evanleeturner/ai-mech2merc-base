/* SPDX-License-Identifier: MIT */
/* mercsw 1000d14a */
/* mercsw 1000d14a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7584;
extern undefined4 DAT_100a7588;
undefined __cdecl FUN_1000d05f(int param_1);

void __stdcall FUN_1000d14a(void)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 0x402; local_8 = local_8 + 1) {
    FUN_1000d05f(local_8);
  }
  DAT_100a7584 = 0;
  DAT_100a7588 = 1;
  return;
}
