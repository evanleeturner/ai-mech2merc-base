/* SPDX-License-Identifier: MIT */
/* mercsw 1000895c */
/* mercsw 1000895c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10114db0;
undefined4 __stdcall FUN_100086f7(void);
undefined __stdcall FUN_1000a73a(void);
undefined __stdcall FUN_1000898c(void);

void __stdcall FUN_1000895c(void)

{
  FUN_100086f7();
  if (*(short *)(DAT_10114db0 + 6) == 0) {
    FUN_1000898c();
  }
  else {
    FUN_1000a73a();
  }
  return;
}
