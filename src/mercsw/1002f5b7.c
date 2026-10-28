/* SPDX-License-Identifier: MIT */
/* mercsw 1002f5b7 */
/* mercsw 1002f5b7: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1008984b(int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, uint param_8);
undefined __cdecl FUN_1002f54b(void * param_1, int * param_2);

void __cdecl FUN_1002f5b7(void * param_1, int param_2, int param_3, int param_4, uint param_5, int param_6, int param_7, int param_8)

{
  int local_34 [12];
  
  *(uint *)((int)param_1 + 0x74) = *(uint *)((int)param_1 + 0x74) | 1;
  FUN_1008984b(local_34,0,0,0,-param_6,-param_7,-param_8,param_5);
  FUN_1002f54b(param_1,local_34);
  FUN_1008984b(local_34,param_2,param_3,param_4,0,0,0,param_5);
  FUN_1002f54b(param_1,local_34);
  FUN_1008984b(local_34,0,0,0,param_6,param_7,param_8,param_5);
  FUN_1002f54b(param_1,local_34);
  return;
}
