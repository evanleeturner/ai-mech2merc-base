/* SPDX-License-Identifier: MIT */
/* mercsw 1004671f */
/* mercsw 1004671f: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100b04c0;
extern undefined4 DAT_100b04c4;
extern undefined DAT_100c7cf0[];
undefined4 __stdcall FUN_10046563(void);
undefined __cdecl FUN_100463ee(undefined4 param_1, int param_2);
undefined __cdecl FUN_10046824(uint * param_1);
undefined __stdcall FUN_1004639a(void);

void __stdcall FUN_1004671f(void)

{
  undefined4 uVar1;
  
  if (DAT_100b04c4 != 0) {
    uVar1 = FUN_10046563();
    switch(uVar1) {
    case 1:
      break;
    case 2:
      FUN_100463ee(*DAT_100b04c0,0);
      break;
    case 3:
      FUN_10046824((uint *)(DAT_100c7cf0));
      break;
    case 4:
      FUN_1004639a();
    }
  }
  return;
}
