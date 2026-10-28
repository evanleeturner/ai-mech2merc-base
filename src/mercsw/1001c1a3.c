/* SPDX-License-Identifier: MIT */
/* mercsw 1001c1a3 */
/* mercsw 1001c1a3: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10026183(int param_1);

int __cdecl FUN_1001c1a3(int param_1)

{
  undefined4 local_8;
  
  if (param_1 == 0) {
    local_8 = 0;
  }
  else if (*(int *)(param_1 + 0x4c) == 0) {
    local_8 = 0;
  }
  else if (*(int *)(param_1 + 0x24) == 0) {
    local_8 = 0x78;
  }
  else if (*(int *)(param_1 + 0x24) == 5) {
    local_8 = FUN_10026183(*(int *)(param_1 + 0x4c));
  }
  else {
    local_8 = 0;
  }
  return local_8;
}
