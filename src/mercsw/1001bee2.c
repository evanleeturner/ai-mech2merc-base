/* SPDX-License-Identifier: MIT */
/* mercsw 1001bee2 */
/* mercsw 1001bee2: Ghidra's C, repaired by tools/ghidra_repair.py */
int * __cdecl FUN_1001be70(int param_1);

void __cdecl FUN_1001bee2(ushort * param_1)

{
  int *piVar1;
  
  if ((param_1 != (ushort *)0x0) && ((*param_1 & 0x200) == 0)) {
    if (*(int *)(param_1 + 0x26) == 0) {
      piVar1 = FUN_1001be70((int)param_1);
      *(int **)(param_1 + 0x26) = piVar1;
    }
    if (*(int *)(param_1 + 0x26) != 0) {
      *param_1 = *param_1 | 0x200;
    }
  }
  return;
}
