/* SPDX-License-Identifier: MIT */
/* mercsw 10026183 */
/* mercsw 10026183: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10026183(int param_1);

int __cdecl FUN_10026183(int param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(param_1 + 0x18) * 4 + 0x2c;
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      iVar1 = FUN_10026183(*(int *)(param_1 + 0x1c + local_c * 4));
      local_8 = local_8 + iVar1;
    }
  }
  return local_8;
}
