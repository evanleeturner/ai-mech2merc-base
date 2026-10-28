/* SPDX-License-Identifier: MIT */
/* mercsw 10013716 */
/* mercsw 10013716: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined2 DAT_100aa1d0;
extern undefined4 DAT_100aa1f4;
extern undefined2 DAT_100aa2b8;
extern undefined DAT_100aa2ba;
extern undefined4 DAT_100adf98;
undefined __cdecl FUN_10006e00(undefined4 param_1, undefined4 param_2);

void __stdcall FUN_10013716(void)

{
  undefined2 local_8;
  undefined1 local_6;
  
  (void)local_6;
  local_8 = DAT_100aa2b8;
  local_6 = DAT_100aa2ba;
  FUN_10006e00((undefined4)(&local_8),2);
  if (DAT_100aa1f4 == 1) {
    DAT_100adf98 = DAT_100adf98 | 1;
    DAT_100aa1d0 = 1;
  }
  return;
}
