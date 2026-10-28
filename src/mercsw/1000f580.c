/* SPDX-License-Identifier: MIT */
/* mercsw 1000f580 */
/* mercsw 1000f580: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_100082c4(int param_1, int param_2);

void __stdcall FUN_1000f580(void)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_14 = -1;
  iVar1 = *(int *)(DAT_100eef40[DAT_100adf38] + 0x20);
  for (local_10 = 0; local_10 < 0xe; local_10 = local_10 + 1) {
    iVar2 = *(int *)(iVar1 + 0x54) + local_10 * 0x40;
    if ((-1 < *(int *)(iVar2 + 4)) && (*(int *)(iVar2 + 4) == 0x1d)) {
      if (*(int *)(iVar2 + 8) == 4) {
        *(undefined4 *)(iVar2 + 8) = 1;
        local_14 = 1;
      }
      else if (*(int *)(iVar2 + 8) == 1) {
        *(undefined4 *)(iVar2 + 8) = 4;
        local_14 = 2;
      }
    }
  }
  if (local_14 != -1) {
    FUN_100082c4(10,local_14);
  }
  return;
}
