/* SPDX-License-Identifier: MIT */
/* mercsw 100227cb */
/* mercsw 100227cb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
undefined __stdcall FUN_1005d5c1(void);
undefined __cdecl FUN_10030fd2(int param_1);

void __cdecl FUN_100227cb(int * param_1)

{
  if (param_1 != (int *)0x0) {
    if ((undefined4)(*(int *)(*param_1 + 4)) == DAT_100adf38) {
      FUN_1005d5c1();
    }
    FUN_10030fd2(*(int *)(*param_1 + 0x140));
    *(undefined4 *)(*param_1 + 0x140) = 0xffffffff;
  }
  return;
}
