/* SPDX-License-Identifier: MIT */
/* mercsw 1006ac6a */
/* mercsw 1006ac6a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3904;
extern undefined4 DAT_100b3c40;
extern undefined DAT_100b3c58;
extern undefined4 DAT_100b3ca0;
extern undefined4 DAT_100b3ca8;
undefined4 __stdcall FUN_10046928(void);
undefined __cdecl FUN_10046b4d(int param_1);
undefined4 __stdcall FUN_1004663a(void);

void __stdcall FUN_1006ac6a(void)

{
  int iVar1;
  
  DAT_100b3ca8 = DAT_100b3ca8 + DAT_100b3904;
  if ((((0x169 < DAT_100b3ca8) && (DAT_100b3ca8 = 0, DAT_100b3ca0 == 0)) &&
      ((DAT_100b3c58 & 8) != 0)) && ((iVar1 = FUN_10046928(), iVar1 != 0 && (DAT_100b3c40 != (undefined4)(-1)))))
  {
    FUN_10046b4d(DAT_100b3c40);
    FUN_1004663a();
  }
  return;
}
