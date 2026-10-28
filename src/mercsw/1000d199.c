/* SPDX-License-Identifier: MIT */
/* mercsw 1000d199 */
/* mercsw 1000d199: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100a7584;
extern undefined DAT_101f64a4[];
undefined4 __cdecl FUN_1000d875(int param_1, int param_2);

void __stdcall FUN_1000d199(void)

{
  int local_8;
  
  for (local_8 = 0; local_8 < DAT_100a7584; local_8 = local_8 + 1) {
    FUN_1000d875(local_8,*(int *)(DAT_101f64a4 + local_8 * 0x7c));
  }
  return;
}
