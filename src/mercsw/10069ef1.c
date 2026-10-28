/* SPDX-License-Identifier: MIT */
/* mercsw 10069ef1 */
/* mercsw 10069ef1: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100c7fb8;
extern undefined4 DAT_100c7fbc;
extern undefined4 DAT_100c7fc0;
extern undefined4 DAT_100c7fc4;
undefined __cdecl FUN_1001d32b(int param_1, int * param_2, int * param_3);
int __cdecl FUN_1001d6b2(int param_1);

void __cdecl FUN_10069ef1(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_1001d32b(param_1,&local_8,&local_c);
  DAT_100c7fc0 = DAT_100c7fc0 + 1;
  DAT_100c7fb8 = DAT_100c7fb8 + local_8;
  DAT_100c7fc4 = DAT_100c7fc4 + local_c;
  iVar1 = FUN_1001d6b2(param_1);
  DAT_100c7fbc = DAT_100c7fbc + iVar1;
  return;
}
