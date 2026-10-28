/* SPDX-License-Identifier: MIT */
/* mercsw 1003c32b */
/* mercsw 1003c32b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefb4;
extern undefined DAT_10160e90[];
undefined4 __stdcall _AIL_sequence_status_4(undefined4);
undefined4 __stdcall _AIL_stop_sequence_4(undefined4);

void __stdcall FUN_1003c32b(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_8;
  
  if (DAT_100aefb4 == 0) {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      if (*(int *)(DAT_10160e90 + local_8 * 4) != -1) {
        uVar1 = *(undefined4 *)(DAT_10160e90 + local_8 * 4);
        iVar2 = _AIL_sequence_status_4(uVar1);
        if (iVar2 == 4) {
          _AIL_stop_sequence_4(uVar1);
        }
      }
    }
  }
  return;
}
