/* SPDX-License-Identifier: MIT */
/* mercsw 1005fb3a */
/* mercsw 1005fb3a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aa540;
extern undefined4 DAT_100aa544;
extern undefined4 DAT_100aa548;
undefined __cdecl FUN_1005fbab(ushort * param_1, int param_2, int param_3, int param_4, undefined4 * param_5, undefined4 * param_6, int * param_7);

int __cdecl FUN_1005fb3a(ushort * param_1, int param_2, int param_3, int param_4, int * param_5)

{
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  FUN_1005fbab(param_1,param_2,param_3,param_4,&local_8,(undefined4 *)(&local_c),&local_10);
  if (local_c != 0) {
    *param_5 = local_10;
    DAT_100aa548 = 0;
    DAT_100aa540 = 0;
    DAT_100aa544 = 0x10000;
  }
  return local_c;
}
