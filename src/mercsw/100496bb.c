/* SPDX-License-Identifier: MIT */
/* mercsw 100496bb */
/* mercsw 100496bb: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int * DAT_10160be0;

int * __cdecl FUN_100496bb(int param_1)

{
  int *local_8;
  
  for (local_8 = DAT_10160be0; (local_8 != (int *)0x0 && (*local_8 != param_1));
      local_8 = (int *)local_8[5]) {
  }
  return local_8;
}
