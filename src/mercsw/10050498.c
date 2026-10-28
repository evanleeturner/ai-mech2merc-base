/* SPDX-License-Identifier: MIT */
/* mercsw 10050498 */
/* mercsw 10050498: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0864;
extern undefined DAT_101155c0[];
undefined __cdecl FUN_100509fd(int param_1, int param_2);

void __cdecl FUN_10050498(int param_1, int param_2)

{
  int local_8;
  
  for (local_8 = 0; local_8 < DAT_100b0864; local_8 = local_8 + 1) {
    if (*(int *)(DAT_101155c0 + local_8 * 0x48) == param_1) {
      FUN_100509fd(local_8,param_2);
    }
  }
  return;
}
