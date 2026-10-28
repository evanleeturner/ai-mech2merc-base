/* SPDX-License-Identifier: MIT */
/* mercsw 1001d671 */
/* mercsw 1001d671: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_1001d5cb(int param_1);
undefined __cdecl FUN_1002f272(int param_1, undefined4 param_2);
undefined __cdecl FUN_1001d644(undefined * param_1);

void __cdecl FUN_1001d671(undefined * param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001d5cb((int)param_1);
  if (iVar1 != 0) {
    FUN_1002f272(iVar1,0);
  }
  FUN_1001d644(param_1);
  return;
}
