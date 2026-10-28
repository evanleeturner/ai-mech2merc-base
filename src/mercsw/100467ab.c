/* SPDX-License-Identifier: MIT */
/* mercsw 100467ab */
/* mercsw 100467ab: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b04c4;
undefined __stdcall FUN_100463c4(void);
undefined4 __stdcall FUN_10046563(void);

void __stdcall FUN_100467ab(void)

{
  int iVar1;
  
  if (DAT_100b04c4 != 0) {
    do {
      FUN_100463c4();
      iVar1 = FUN_10046563();
    } while (iVar1 == 3);
  }
  return;
}
