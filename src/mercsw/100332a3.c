/* SPDX-License-Identifier: MIT */
/* mercsw 100332a3 */
/* mercsw 100332a3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38dc;
extern char s_Too_many_gamethings_100adae8[];
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);

int __stdcall FUN_100332a3(void)

{
  int local_8;
  
  local_8 = -1;
  if (DAT_100b38dc < 0xfe) {
    local_8 = DAT_100b38dc;
    DAT_100b38dc = DAT_100b38dc + 1;
  }
  else {
    FUN_100108a0(0x2f,s_Too_many_gamethings_100adae8);
  }
  return local_8;
}
