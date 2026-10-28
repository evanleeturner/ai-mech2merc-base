/* SPDX-License-Identifier: MIT */
/* mercsw 1001bdc6 */
/* mercsw 1001bdc6: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 * __stdcall FUN_1001bd50(void);
undefined __cdecl FUN_1001bf60(int param_1, int * param_2, int * param_3, int * param_4, int * param_5, int * param_6, int * param_7);

void __cdecl FUN_1001bdc6(ushort * param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((param_1 != (ushort *)0x0) && ((*param_1 & 0x200) == 0)) {
    if (*(int *)(param_1 + 0x26) == 0) {
      puVar2 = FUN_1001bd50();
      *(undefined4 **)(param_1 + 0x26) = puVar2;
    }
    piVar1 = *(int **)(param_1 + 0x26);
    if (piVar1 != (int *)0x0) {
      FUN_1001bf60((int)param_1,piVar1,piVar1 + 1,piVar1 + 2,piVar1 + 3,piVar1 + 4,piVar1 + 5);
      *param_1 = *param_1 | 0x200;
    }
  }
  return;
}
