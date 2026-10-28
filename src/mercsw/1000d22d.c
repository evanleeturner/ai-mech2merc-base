/* SPDX-License-Identifier: MIT */
/* mercsw 1000d22d */
/* mercsw 1000d22d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100a7584;
extern undefined DAT_101f64ad[];
extern undefined DAT_101f6518[];
undefined __cdecl FUN_1005db35(int * param_1);

void __stdcall FUN_1000d22d(void)

{
  int iVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < DAT_100a7584; local_8 = local_8 + 1) {
    iVar1 = local_8 * 0x7c;
    if (((DAT_101f64ad[iVar1] & 8) == 0) && (*(int *)(DAT_101f6518 + iVar1) != 0)) {
      FUN_1005db35((int *)(DAT_101f6518 + iVar1));
    }
  }
  return;
}
