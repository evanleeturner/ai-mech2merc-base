/* SPDX-License-Identifier: MIT */
/* mercsw 1003517a */
/* mercsw 1003517a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b4;
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __cdecl FUN_10056fc4(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_1003517a(int param_1, int param_2, int param_3, int * param_4)

{
  ushort *puVar1;
  
  puVar1 = FUN_1008668b(DAT_100af17c,param_3 + DAT_101686f0,(int *)PTR_DAT_100af0b4);
  if (puVar1 != (ushort *)0x0) {
    FUN_10056fc4(param_4,(int)puVar1,0,param_1,param_2);
    FUN_1008664f(param_3 + DAT_101686f0,(int *)PTR_DAT_100af0b4);
  }
  return;
}
