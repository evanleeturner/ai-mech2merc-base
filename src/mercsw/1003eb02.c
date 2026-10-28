/* SPDX-License-Identifier: MIT */
/* mercsw 1003eb02 */
/* mercsw 1003eb02: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

bool __cdecl FUN_1003eb02(uint param_1, int * param_2)

{
  ushort *puVar1;
  
  puVar1 = FUN_1008668b(DAT_100af17c,param_1,param_2);
  if (puVar1 != (ushort *)0x0) {
    FUN_1008664f(param_1,param_2);
  }
  return puVar1 != (ushort *)0x0;
}
