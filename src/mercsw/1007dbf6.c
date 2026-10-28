/* SPDX-License-Identifier: MIT */
/* mercsw 1007dbf6 */
/* mercsw 1007dbf6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf34;
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100b9420;
extern undefined4 DAT_100eef40[];
extern undefined4 DAT_10160be4;
undefined __cdecl FUN_100069d3(int * param_1, int param_2);
undefined __stdcall FUN_1004839c(void);

void __cdecl FUN_1007dbf6(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, int param_6)

{
  if ((param_6 != 0) &&
     (((*(int *)(param_6 + 0x10) == param_3 && (DAT_10160be4 == 0xd)) ||
      (DAT_10160be4 + -0x31 == (undefined4)(param_3))))) {
    DAT_100b9420 = 1;
    *(undefined1 *)(DAT_100adf34 + 1) = 0;
    FUN_100069d3(*(int **)(DAT_100eef40[DAT_100adf38] + 0x20),0);
    FUN_1004839c();
  }
  return;
}
