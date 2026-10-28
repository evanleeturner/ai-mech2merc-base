/* SPDX-License-Identifier: MIT */
/* mercsw 10054330 */
/* mercsw 10054330: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_1011515c;
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_10003d60(int param_1, int param_2);
undefined __cdecl FUN_1002f6e8(int param_1);
undefined __cdecl FUN_10080919(undefined2 * param_1, int param_2);

undefined4 __cdecl FUN_10054330(int param_1, int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *local_24;
  int local_20;
  int *local_18;
  int *local_10;
  undefined2 *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  local_24 = (int *)0x0;
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    local_10 = *(int **)(param_1 + 0x1c);
    if (local_10 == (int *)0x0) {
      uVar2 = 1;
    }
    else {
      piVar1 = local_10;
      if (*local_10 != 0) {
        for (; local_24 = piVar1, piVar1 = local_8, local_10 != (int *)0x0;
            local_10 = (int *)local_10[3]) {
          iVar3 = FUN_10003d60(*(int *)(PTR_DAT_100aaf68 + 0xb8),*local_10);
          if (param_2 < iVar3) {
            local_8 = local_24;
            piVar1 = local_8;
            break;
          }
          local_24 = local_10;
          piVar1 = local_24;
        }
      }
      local_8 = piVar1;
      if (local_8 == (int *)0x0) {
        local_8 = local_24;
      }
      if (local_8 == (int *)0x0) {
        uVar2 = 1;
      }
      else {
        *(int **)(param_1 + 0x20) = local_8;
        if (local_8[4] != *(int *)(param_1 + 0x50)) {
          FUN_1002f6e8(param_1);
        }
        local_20 = (int)(short)local_8[1];
        local_18 = local_8 + 6;
        while (local_20 != 0) {
          local_18[9] = 0;
          *(byte *)(local_18 + 10) = *(byte *)(local_18 + 10) & 0xfb;
          local_18 = local_18 + 0x11;
          local_20 = local_20 + -1;
        }
        local_c = (undefined2 *)(local_8[2] + (int)local_8);
        local_20 = (int)*(short *)((int)local_8 + 6);
        do {
          if (local_20 == 0) break;
          FUN_10080919(local_c,(int)(local_8 + 6));
          local_c = local_c + 0x12;
          local_20 = local_20 + -1;
        } while (DAT_1011515c != 0);
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
