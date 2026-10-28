/* SPDX-License-Identifier: MIT */
/* mercsw 1001bf60 */
/* mercsw 1001bf60: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
undefined __cdecl FUN_1002f6e8(int param_1);

void __cdecl FUN_1001bf60(int param_1, int * param_2, int * param_3, int * param_4, int * param_5, int * param_6, int * param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    *param_7 = 0;
    *param_6 = *param_7;
    *param_5 = *param_6;
    *param_4 = *param_5;
    *param_3 = *param_4;
    *param_2 = *param_3;
  }
  else {
    if (*(int *)(param_1 + 0x50) != *(int *)(iVar1 + 0x10)) {
      uVar2 = *(undefined4 *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar1;
      FUN_1002f6e8(param_1);
      *(undefined4 *)(param_1 + 0x20) = uVar2;
    }
    local_c = iVar1 + 0x18;
    *param_6 = 0x7fffffff;
    *param_4 = *param_6;
    *param_2 = *param_4;
    *param_7 = -0x7fffffff;
    *param_5 = *param_7;
    *param_3 = *param_5;
    local_10 = (int)*(short *)(iVar1 + 4);
    while( true ) {
      if (local_10 == 0) break;
      if (*param_3 < *(int *)(local_c + 0xc)) {
        *param_3 = *(int *)(local_c + 0xc);
      }
      if (*param_5 < *(int *)(local_c + 0x10)) {
        *param_5 = *(int *)(local_c + 0x10);
      }
      if (*param_7 < *(int *)(local_c + 0x14)) {
        *param_7 = *(int *)(local_c + 0x14);
      }
      if (*(int *)(local_c + 0xc) < *param_2) {
        *param_2 = *(int *)(local_c + 0xc);
      }
      if (*(int *)(local_c + 0x10) < *param_4) {
        *param_4 = *(int *)(local_c + 0x10);
      }
      if (*(int *)(local_c + 0x14) < *param_6) {
        *param_6 = *(int *)(local_c + 0x14);
      }
      local_c = local_c + 0x44;
      local_10 = local_10 + -1;
    }
  }
  return;
}
