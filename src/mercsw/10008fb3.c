/* SPDX-License-Identifier: MIT */
/* mercsw 10008fb3 */
/* mercsw 10008fb3: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100af17c;
extern undefined4 DAT_101686f0;
extern undefined4 PTR_DAT_100af0b4;
undefined4 __cdecl FUN_100357e3(int * param_1);
ushort * __cdecl FUN_1008668b(int param_1, uint param_2, int * param_3);
undefined4 __cdecl FUN_10056fc4(int * param_1, int param_2, int param_3, int param_4, int param_5);
undefined __cdecl FUN_1008664f(uint param_1, int * param_2);

void __cdecl FUN_10008fb3(undefined4 * param_1, int param_2, int param_3, undefined4 param_4, int param_5)

{
  int *piVar1;
  ushort *puVar2;
  int local_8;
  
  piVar1 = (int *)*param_1;
  local_8 = FUN_100357e3(&param_2);
  if ((local_8 != 0) && (param_1[0x20] != 0)) {
    local_8 = ((int (*)(int *, int, int))((void (*)(void))((*(code *)param_1[0x20]))))(piVar1,param_2,param_3);
  }
  if (local_8 != 0) {
    puVar2 = FUN_1008668b(DAT_100af17c,param_5 + DAT_101686f0,(int *)PTR_DAT_100af0b4);
    if (puVar2 != (ushort *)0x0) {
      FUN_10056fc4(piVar1,(int)puVar2,0,param_2,param_3);
      FUN_1008664f(param_5 + DAT_101686f0,(int *)PTR_DAT_100af0b4);
    }
  }
  return;
}
