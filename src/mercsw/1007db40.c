/* SPDX-License-Identifier: MIT */
/* mercsw 1007db40 */
/* mercsw 1007db40: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a40cc;
extern undefined4 DAT_100adf34;
extern undefined4 DAT_10160be4;
undefined __cdecl FUN_10053021(uint param_1);
undefined __stdcall FUN_1004839c(void);

void __cdecl FUN_1007db40(undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, int param_6)

{
  undefined4 uVar1;
  
  if ((param_6 != 0) &&
     (((*(int *)(param_6 + 0x10) == param_3 && (DAT_10160be4 == 0xd)) ||
      (DAT_10160be4 + -0x31 == (undefined4)(param_3))))) {
    *(undefined1 *)(DAT_100adf34 + 1) = 0;
    uVar1 = DAT_100a40cc;
    DAT_100a40cc = 0;
    FUN_10053021(0x71);
    DAT_100a40cc = uVar1;
    FUN_1004839c();
  }
  return;
}
