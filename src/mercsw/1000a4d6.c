/* SPDX-License-Identifier: MIT */
/* mercsw 1000a4d6 */
/* mercsw 1000a4d6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7b30[];
extern undefined4 DAT_10215654;
extern undefined4 DAT_10215658;
extern undefined4 DAT_1021565c;
extern undefined4 DAT_10215660;
undefined4 __stdcall FUN_100086f7(void);
undefined __cdecl FUN_10003d80(int * param_1);
undefined4 __cdecl FUN_1000a3fd(int param_1, undefined4 * param_2, int * param_3, int param_4);
undefined __stdcall FUN_1000895c(void);

void __stdcall FUN_1000a4d6(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_10215658 < 3) {
    FUN_100086f7();
    if (DAT_10215658 < 3) {
      if (DAT_10215658 != 0) {
        DAT_10215654 = DAT_1021565c;
        DAT_1021565c = 1;
      }
      puVar1 = *(undefined4 **)(DAT_100a7b30 + DAT_10215658 * 4);
      if ((puVar1 != (undefined4 *)0x0) && (piVar2 = (int *)puVar1[5], piVar2 != (int *)0x0)) {
        if (DAT_10215654 != DAT_1021565c) {
          FUN_10003d80(piVar2);
        }
        iVar3 = FUN_1000a3fd(0,puVar1,piVar2,0);
        if (iVar3 == 0) {
          FUN_1000895c();
        }
      }
    }
  }
  else if ((DAT_10215658 == 4) && (DAT_10215660 < 3)) {
    FUN_100086f7();
  }
  return;
}
