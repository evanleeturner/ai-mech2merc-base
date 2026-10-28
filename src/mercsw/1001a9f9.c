/* SPDX-License-Identifier: MIT */
/* mercsw 1001a9f9 */
/* mercsw 1001a9f9: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab078;
extern undefined4 DAT_100ab07c;
extern undefined4 DAT_100ab080;
extern undefined DAT_101eb330[];
extern undefined4 PTR_DAT_100aaf68;
undefined4 __cdecl FUN_1001a6ca(undefined4 * param_1, undefined4 * param_2);
undefined __cdecl FUN_1001a635(int param_1);
undefined * __stdcall FUN_1004baf4(void);
undefined4 __cdecl FUN_1001a74a(undefined4 * param_1, undefined4 * param_2);
undefined __cdecl FUN_1001a5e1(int param_1);

void __stdcall FUN_1001a9f9(void)

{
  undefined4 *puVar1;
  
  if (DAT_100ab07c != 3) {
    DAT_100ab080 = DAT_100ab07c;
    FUN_1001a6ca((undefined4 *)PTR_DAT_100aaf68,(undefined4 *)DAT_101eb330);
    DAT_100ab078 = 0x20000;
    FUN_1001a635(0);
  }
  puVar1 = (undefined4 *)FUN_1004baf4();
  if (puVar1 == (undefined4 *)0x0) {
    FUN_1001a5e1(DAT_100ab080);
    if (DAT_100ab080 == 2) {
      FUN_1001a74a((undefined4 *)PTR_DAT_100aaf68,(undefined4 *)DAT_101eb330);
    }
  }
  else {
    FUN_1001a74a((undefined4 *)PTR_DAT_100aaf68,puVar1);
  }
  return;
}
