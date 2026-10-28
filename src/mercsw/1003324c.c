/* SPDX-License-Identifier: MIT */
/* mercsw 1003324c */
/* mercsw 1003324c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adaa8;
extern undefined4 DAT_100adaac;
extern undefined DAT_10168490[];
undefined4 __cdecl FUN_10050a68(int param_1);

undefined4 __stdcall FUN_1003324c(void)

{
  undefined4 local_c;
  
  if (DAT_100adaac < DAT_100adaa8) {
    local_c = FUN_10050a68(*(int *)(DAT_10168490 + DAT_100adaac * 4));
    DAT_100adaac = DAT_100adaac + 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}
