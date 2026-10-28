/* SPDX-License-Identifier: MIT */
/* mercsw 1003dd75 */
/* mercsw 1003dd75: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined * DAT_100af098;
extern undefined DAT_100c6d00[];
undefined __cdecl FUN_1003e369(int param_1);
undefined __cdecl FUN_1003e3e3(int param_1, int param_2);

void __cdecl FUN_1003dd75(int param_1)

{
  if ((DAT_100af098 == DAT_100c6d00) && (param_1 != 0)) {
    FUN_1003e369(param_1);
    FUN_1003e3e3(param_1,0x100c7ac8);
  }
  return;
}
