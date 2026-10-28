/* SPDX-License-Identifier: MIT */
/* mercsw 10026950 */
/* mercsw 10026950: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10123230;
undefined4 __cdecl FUN_1004d4b9(int param_1);
undefined __cdecl FUN_1002b107(int param_1);

void __stdcall FUN_10026950(void)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < DAT_10123230; local_8 = local_8 + 1) {
    FUN_1004d4b9(local_8);
    FUN_1002b107(local_8);
  }
  return;
}
