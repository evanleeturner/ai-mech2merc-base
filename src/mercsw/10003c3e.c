/* SPDX-License-Identifier: MIT */
/* mercsw 10003c3e */
/* mercsw 10003c3e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40f8;
extern undefined4 PTR_DAT_100af0a8;
undefined4 __stdcall _AIL_end_sample_4(undefined4);
undefined4 __stdcall _AIL_release_sample_handle_4(undefined4);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_10003c3e(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = *(undefined4 *)(DAT_100a40f8 + 4 + *(int *)(param_1 + 4) * 4);
    *(undefined4 *)(DAT_100a40f8 + 4 + *(int *)(param_1 + 4) * 4) = 0;
    *(undefined4 *)(DAT_100a40f8 + 0x48 + *(int *)(param_1 + 4) * 4) = 0;
    *(undefined4 *)(DAT_100a40f8 + 0x4a8 + *(int *)(param_1 + 4) * 4) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    _AIL_end_sample_4(uVar1);
    _AIL_release_sample_handle_4(uVar1);
    FUN_1008664f((int)*(short *)(param_1 + 0x1c),(int *)PTR_DAT_100af0a8);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
