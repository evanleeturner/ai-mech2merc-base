/* SPDX-License-Identifier: MIT */
/* mercsw 1006312b */
/* mercsw 1006312b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100a7ba8[];

undefined4 __cdecl FUN_1006312b(int param_1, int param_2)

{
  int iVar1;
  int local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  if ((param_2 < 0) || (2 < param_2)) {
    local_18 = 0;
  }
  else if (*(int *)(param_1 + 0x3dc) < 1) {
    local_18 = 0;
  }
  else if (*(int *)(*(int *)(param_1 + 0x3e0) * 0x40 + 0xc + *(int *)(param_1 + 0x54)) == param_2) {
    local_18 = 1;
  }
  else {
    for (local_1c = 0; local_1c < 0xe; local_1c = local_1c + 1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x54) + 4 + local_1c * 0x40);
      if ((((-1 < iVar1) && (*(int *)(*(int *)(param_1 + 0x54) + local_1c * 0x40) != -1)) &&
          (*(int *)(*(int *)(param_1 + 0x54) + 0xc + local_1c * 0x40) == param_2)) &&
         ((*(int *)(*(int *)(param_1 + 0x54) + 8 + local_1c * 0x40) != -1 &&
          ((DAT_100a7ba8[iVar1 * 0x68] & 4) != 0)))) {
        *(int *)(param_1 + 0x3e0) = local_1c;
        return 1;
      }
    }
  }
  return local_18;
}
