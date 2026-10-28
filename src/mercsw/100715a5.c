/* SPDX-License-Identifier: MIT */
/* mercsw 100715a5 */
/* mercsw 100715a5: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1007cb42(int * param_1, undefined * param_2);
undefined __cdecl FUN_10050f5b(int param_1);
undefined __cdecl FUN_1002f37a(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4);
undefined __cdecl FUN_1002f668(int param_1, int param_2, int param_3, int param_4, uint param_5);
undefined __cdecl FUN_10050ecc(int param_1);

int * __cdecl FUN_100715a5(undefined4 * param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      FUN_1007cb42(piVar1,(undefined *)(FUN_10050ecc));
      FUN_10050f5b((int)piVar1);
      FUN_1002f37a((int)piVar1,param_1[4],param_1[5],param_1[6]);
      FUN_1002f668((int)piVar1,param_1[7],param_1[8],param_1[9],0);
      piVar2 = FUN_100715a5((undefined4 *)*param_1);
      piVar1[1] = (int)piVar2;
      piVar2 = FUN_100715a5((undefined4 *)param_1[1]);
      piVar1[2] = (int)piVar2;
      *piVar1 = param_1[3];
    }
  }
  return piVar1;
}
