/* SPDX-License-Identifier: MIT */
/* mercsw 10049b98 */
/* mercsw 10049b98: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
extern undefined DAT_101ec774[];
extern undefined DAT_101ec778[];
extern undefined DAT_101ec780[];
extern undefined DAT_101ec78c[];
extern undefined DAT_101ec790[];
undefined __cdecl FUN_10049c45(int param_1);

void __stdcall FUN_10049b98(void)

{
  int iVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 0xff; local_8 = local_8 + 1) {
    iVar1 = local_8 * 0x60;
    if ((*(int *)(DAT_101ec78c + iVar1) != 0) && (*(int *)(DAT_101ec780 + iVar1) != 0)) {
      *(int *)(DAT_101ec774 + iVar1) = *(int *)(DAT_101ec774 + iVar1) + DAT_100b3904;
      *(int *)(DAT_101ec778 + iVar1) = *(int *)(DAT_101ec778 + iVar1) - DAT_100b3904;
      if (*(int *)(DAT_101ec790 + iVar1) == 0) {
        FUN_10049c45(local_8);
      }
    }
  }
  return;
}
