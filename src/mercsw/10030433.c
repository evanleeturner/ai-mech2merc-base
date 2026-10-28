/* SPDX-License-Identifier: MIT */
/* mercsw 10030433 */
/* mercsw 10030433: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_10030433(int param_1, int * param_2, int * param_3)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*param_2 != 0)) && (*param_3 != 0)) {
    if (*param_2 == param_1) {
      if (*param_3 == param_1) {
        *param_2 = 0;
        *param_3 = 0;
      }
      else {
        *param_2 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(*param_2 + 0xc) = 0;
      }
    }
    else if (*param_3 == param_1) {
      *param_3 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(*param_3 + 0x10) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x10) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0xc) = iVar1;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
