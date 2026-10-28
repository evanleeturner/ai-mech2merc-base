/* SPDX-License-Identifier: MIT */
/* mercsw 1001a635 */
/* mercsw 1001a635: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100a7b60;
extern undefined4 DAT_100ab074;
extern undefined4 DAT_100ab078;
extern undefined4 PTR_DAT_100aaf68;
undefined4 __stdcall FUN_1001a620(void);
undefined __cdecl FUN_10003742(uint param_1, int param_2, undefined4 param_3, int param_4, ushort param_5);

void __cdecl FUN_1001a635(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(PTR_DAT_100aaf68 + 0x18);
  if (param_1 != 0) {
    DAT_100ab074 = 0x10000;
    DAT_100ab078 = 0x10000;
  }
  iVar2 = FUN_1001a620();
  if (iVar2 == 0) {
    *(undefined4 *)(PTR_DAT_100aaf68 + 0x18) = DAT_100ab074;
  }
  else {
    *(undefined4 *)(PTR_DAT_100aaf68 + 0x18) = DAT_100ab078;
  }
  if (*(int *)(PTR_DAT_100aaf68 + 0x18) != iVar1) {
    DAT_100a7b60 = 1;
    FUN_10003742(0x15b,100,0x40,5,0x50);
  }
  return;
}
