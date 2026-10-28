/* SPDX-License-Identifier: MIT */
/* mercsw 100301b0 */
/* mercsw 100301b0: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1001ca37(int param_1, undefined2 param_2);
undefined __cdecl FUN_1002fcce(int * param_1);
undefined __cdecl FUN_1002f727(int param_1);
undefined __cdecl FUN_1002f7f7(int param_1);
undefined __cdecl FUN_1002fbc0(int * param_1);
undefined __cdecl FUN_10050ecc(int param_1);

void __cdecl FUN_100301b0(int * param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[0x1b] != 0)) {
    FUN_1001ca37(param_1[0x1b],0x50);
    FUN_1002fcce(param_1);
    FUN_1002f727((int)param_1);
    FUN_1002f7f7((int)param_1);
    FUN_1002fbc0(param_1);
    FUN_10050ecc((int)param_1);
  }
  return;
}
