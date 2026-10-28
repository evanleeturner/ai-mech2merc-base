/* SPDX-License-Identifier: MIT */
/* mercsw 1001dce2 */
/* mercsw 1001dce2: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ab4c0;
extern char s__s_ID__d_100ab2a0[];
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);

int __cdecl FUN_1001dce2(int param_1)

{
  int local_10;
  int local_c;
  
  local_10 = 0;
  if ((undefined4)(**(int **)(param_1 + 0x1b)) == DAT_100ab4c0) {
    local_c = 0xc;
  }
  else {
    local_c = *(int *)(*(int *)(param_1 + 0x1b) + 4);
  }
  local_c = *(int *)(param_1 + 0x1b) + local_c;
  if (local_c - *(int *)(param_1 + 0x17) < *(int *)(param_1 + 0xf)) {
    if ((*(int *)(param_1 + 0x13) < *(int *)(local_c + 4)) || (*(uint *)(local_c + 4) < 8)) {
      FUN_100108a0(0x2c,s__s_ID__d_100ab2a0);
    }
    else {
      *(int *)(param_1 + 0x1b) = local_c;
      local_10 = local_c;
    }
  }
  return local_10;
}
