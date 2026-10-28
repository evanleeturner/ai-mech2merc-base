/* SPDX-License-Identifier: MIT */
/* mercsw 1004cd24 */
/* mercsw 1004cd24: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ad6bc;
undefined4 __stdcall FUN_10022aaa(void);
int __cdecl FUN_100814bb(int param_1, int param_2);

undefined4 __cdecl FUN_1004cd24(undefined4 param_1, int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined4 *local_10;
  int *local_8;
  
  *(undefined4 *)(param_2 + 0x20) = 0;
  iVar1 = FUN_10022aaa();
  local_8 = (int *)FUN_100814bb(iVar1,DAT_100ad6bc);
  if (local_8 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_8[0x15] = (int)local_8 + 0x4d3;
    local_8[0x16] = (int)local_8 + 0x853;
    local_8[0x17] = (int)local_8 + 0x993;
    *local_8 = param_2;
    for (local_18 = 0; local_18 < 8; local_18 = local_18 + 1) {
      local_8[local_18 + 0xe6] = 0;
    }
    *(int **)(param_2 + 0x20) = local_8;
    *(undefined4 *)(param_2 + 0x24) = 0x4d3;
    local_10 = (undefined4 *)local_8[0x15];
    local_8 = local_8 + 0x19;
    for (local_18 = 0; local_18 < 0xe; local_18 = local_18 + 1) {
      *local_10 = 0xffffffff;
      local_10[1] = 0xffffffff;
      local_10[2] = 0xffffffff;
      local_10[4] = 0;
      local_10[5] = 0;
      local_10 = local_10 + 0x10;
      *(undefined4 *)((int)local_8 + 2) = 0xffffffff;
      local_8 = (int *)((int)local_8 + 0x3a);
    }
    uVar2 = 1;
  }
  return uVar2;
}
