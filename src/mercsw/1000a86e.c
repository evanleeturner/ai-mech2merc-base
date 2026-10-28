/* SPDX-License-Identifier: MIT */
/* mercsw 1000a86e */
/* mercsw 1000a86e: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7b30[];
extern undefined4 DAT_10215654;
extern undefined4 DAT_10215658;
extern undefined4 DAT_1021565c;
extern undefined4 DAT_10215660;
undefined4 __stdcall FUN_100086f7(void);
undefined __cdecl FUN_10003d80(int * param_1);
undefined4 __cdecl FUN_1000a3fd(int param_1, undefined4 * param_2, int * param_3, int param_4);

void __stdcall FUN_1000a86e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (DAT_10215658 < 3) {
    FUN_100086f7();
    if (DAT_10215658 < 3) {
      if (DAT_10215658 != 0) {
        DAT_10215654 = DAT_1021565c;
        DAT_1021565c = 3;
      }
      puVar1 = *(undefined4 **)(DAT_100a7b30 + DAT_10215658 * 4);
      if ((puVar1 != (undefined4 *)0x0) && (piVar2 = (int *)puVar1[5], piVar2 != (int *)0x0)) {
        if (DAT_10215654 != DAT_1021565c) {
          FUN_10003d80(piVar2);
        }
        FUN_1000a3fd(1,puVar1,piVar2,0);
      }
    }
  }
  else if ((DAT_10215658 == 4) && (DAT_10215660 < 3)) {
    FUN_100086f7();
  }
  return;
}
