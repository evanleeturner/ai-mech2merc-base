/* SPDX-License-Identifier: MIT */
/* mercsw 1003c260 */
/* mercsw 1003c260: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefb4;
extern undefined DAT_10160e80[];
extern undefined DAT_10160e90[];
extern undefined4 PTR_DAT_100af0c4;
undefined4 __stdcall _AIL_sequence_status_4(undefined4);
undefined4 __stdcall _AIL_stop_sequence_4(undefined4);
undefined4 __stdcall _AIL_release_sequence_handle_4(undefined4);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __stdcall FUN_1003c260(void)

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
        _AIL_release_sequence_handle_4(uVar1);
        *(undefined4 *)(DAT_10160e90 + local_8 * 4) = 0xffffffff;
      }
      if (*(short *)(DAT_10160e80 + local_8 * 2) != 0) {
        FUN_1008664f((int)*(short *)(DAT_10160e80 + local_8 * 2),(int *)PTR_DAT_100af0c4);
        *(undefined2 *)(DAT_10160e80 + local_8 * 2) = 0;
      }
    }
  }
  return;
}
