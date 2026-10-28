/* SPDX-License-Identifier: MIT */
/* mercsw 1003c756 */
/* mercsw 1003c756: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefb4;
extern undefined DAT_10160e90[];
uint __stdcall FUN_1003c6bf(void);
undefined4 __stdcall _AIL_sequence_status_4(undefined4);
undefined4 __stdcall _AIL_set_sequence_volume_12(undefined4, undefined4, undefined4);

void __cdecl FUN_1003c756(short param_1)

{
  uint uVar1;
  int iVar2;
  int local_8;
  
  if ((DAT_100aefb4 == 0) && (uVar1 = FUN_1003c6bf(), (short)uVar1 != 0)) {
    for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
      if ((*(int *)(DAT_10160e90 + local_8 * 4) != -1) &&
         (iVar2 = _AIL_sequence_status_4(*(undefined4 *)(DAT_10160e90 + local_8 * 4)), iVar2 == 4))
      {
        _AIL_set_sequence_volume_12(*(undefined4 *)(DAT_10160e90 + local_8 * 4),(int)param_1,1000);
      }
    }
  }
  return;
}
