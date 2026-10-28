/* SPDX-License-Identifier: MIT */
/* mercsw 10046cbe */
/* mercsw 10046cbe: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b04c4;
extern undefined4 DAT_100c7cf0;
extern undefined4 DAT_100c7cf4;
extern undefined4 DAT_100c7cf8;
undefined4 __stdcall FUN_10046563(void);
undefined __cdecl FUN_10046824(uint * param_1);
undefined __stdcall FUN_100463c4(void);
undefined __cdecl FUN_100463ee(undefined4 param_1, int param_2);

void __cdecl FUN_10046cbe(uint param_1, uint param_2)

{
  int iVar1;
  uint local_14 [4];
  
  if ((((DAT_100b04c4 != 0) && (iVar1 = FUN_10046563(), iVar1 != 1)) && (1 < iVar1)) &&
     ((iVar1 < 5 && (FUN_10046824(local_14), param_1 < param_2)))) {
    if (iVar1 == 3) {
      FUN_100463c4();
      FUN_100463ee(param_1,param_2);
    }
    else if (iVar1 == 4) {
      FUN_100463ee(param_1,param_2);
      DAT_100c7cf0 = 0;
      DAT_100c7cf4 = 0;
      DAT_100c7cf8 = 0;
    }
    else {
      FUN_100463ee(param_1,param_2);
    }
  }
  return;
}
