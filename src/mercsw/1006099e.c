/* SPDX-License-Identifier: MIT */
/* mercsw 1006099e */
/* mercsw 1006099e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined DAT_100f3120[];
extern undefined4 PTR_DAT_100af0c8;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

undefined4 __cdecl FUN_1006099e(uint param_1, int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_100f3120 + param_2 * 4);
  *(uint *)(DAT_100f3120 + param_2 * 4) = param_1;
  FUN_1008668b(DAT_100af17c,param_1,(int *)PTR_DAT_100af0c8);
  FUN_1008664f(param_1,(int *)PTR_DAT_100af0c8);
  return uVar1;
}
