/* SPDX-License-Identifier: MIT */
/* mercsw 10061cf0 */
/* mercsw 10061cf0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100f2fb0[];
extern undefined DAT_100f2ff0[];

void __cdecl FUN_10061cf0(int param_1)

{
  int iVar1;
  int local_c;
  
  for (local_c = 0; local_c < 0xe; local_c = local_c + 1) {
    iVar1 = *(int *)(param_1 + 0x54) + local_c * 0x40;
    if ((*(int *)(iVar1 + 8) == 2) || (*(int *)(iVar1 + 8) == 3)) {
      *(undefined4 *)(iVar1 + 8) = 1;
    }
  }
  for (local_c = 0; local_c < 0xe; local_c = local_c + 1) {
    *(undefined4 *)(DAT_100f2ff0 + local_c * 4) = 0;
    *(undefined4 *)(DAT_100f2fb0 + local_c * 4) = 0;
  }
  return;
}
