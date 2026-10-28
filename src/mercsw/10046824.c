/* SPDX-License-Identifier: MIT */
/* mercsw 10046824 */
/* mercsw 10046824: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b04c4;
extern undefined4 DAT_100c7cf0;
extern undefined4 DAT_100c7cf4;
extern undefined4 DAT_100c7cf8;
extern undefined4 DAT_100c7cfc;
undefined4 __stdcall FUN_10046563(void);
undefined __cdecl FUN_10046f3b(uint * param_1);

void __cdecl FUN_10046824(uint * param_1)

{
  undefined4 uVar1;
  
  if (DAT_100b04c4 != 0) {
    uVar1 = FUN_10046563();
    switch(uVar1) {
    case 1:
    case 2:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      break;
    case 3:
      FUN_10046f3b(param_1);
      break;
    case 4:
      *param_1 = DAT_100c7cf0;
      param_1[1] = DAT_100c7cf4;
      param_1[2] = DAT_100c7cf8;
      param_1[3] = DAT_100c7cfc;
    }
  }
  return;
}
