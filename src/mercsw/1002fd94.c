/* SPDX-License-Identifier: MIT */
/* mercsw 1002fd94 */
/* mercsw 1002fd94: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1002fcce(int * param_1);
undefined __cdecl FUN_100896cd(undefined4 * param_1, int * param_2);
undefined __cdecl FUN_100895ca(int * param_1, int * param_2, undefined4 * param_3);
undefined __cdecl FUN_1002fbc0(int * param_1);

void __cdecl FUN_1002fd94(int * param_1, int * param_2)

{
  int local_34 [12];
  
  if (*param_1 != 0) {
    FUN_1002fcce(param_1);
  }
  *param_1 = (int)param_2;
  param_1[2] = param_2[1];
  param_2[1] = (int)param_1;
  FUN_100896cd((undefined4 *)(param_2 + 0xf),local_34);
  FUN_100895ca(local_34,param_1 + 0xf,(undefined4 *)(param_1 + 3));
  param_1[0x1d] = param_1[0x1d] & 0xfffffffe;
  param_2[0x1d] = param_2[0x1d] | 1;
  FUN_1002fbc0(param_2);
  return;
}
