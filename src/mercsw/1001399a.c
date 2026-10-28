/* SPDX-License-Identifier: MIT */
/* mercsw 1001399a */
/* mercsw 1001399a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa1cc;
extern undefined2 DAT_100aa2c0;
extern undefined DAT_100aa2c2;
undefined __cdecl FUN_10006e00(undefined4 param_1, undefined4 param_2);

void __stdcall FUN_1001399a(void)

{
  undefined2 local_8;
  undefined1 local_6;
  
  (void)local_6;
  local_8 = DAT_100aa2c0;
  local_6 = DAT_100aa2c2;
  if (DAT_100aa1cc == 0) {
    FUN_10006e00((undefined4)(&local_8),2);
    DAT_100aa1cc = 1;
  }
  return;
}
