/* SPDX-License-Identifier: MIT */
/* mercsw 10026e24 */
/* mercsw 10026e24: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_10029853(int param_1);
undefined __cdecl FUN_1002b4cf(undefined4 * param_1, short param_2, short param_3, short param_4);
undefined __cdecl FUN_1002c354(int param_1);
undefined __cdecl FUN_10027253(int param_1);

void __cdecl FUN_10026e24(undefined4 * param_1)

{
  int local_8;
  
  FUN_10029853((int)param_1);
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)((int)param_1 + 0x17a) = 0;
  *(undefined4 *)((int)param_1 + 0x17e) = 0;
  if (param_1[4] == 2) {
    *(undefined2 *)((int)param_1 + 0x176) = 0xc;
  }
  else {
    *(undefined2 *)((int)param_1 + 0x176) = 0;
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    FUN_1002b4cf(param_1,(short)local_8,-1,0);
  }
  *(undefined4 *)param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)((int)param_1 + 0x18e) = 0;
  FUN_1002c354((int)param_1);
  FUN_10027253((int)param_1);
  return;
}
