/* SPDX-License-Identifier: MIT */
/* mercsw 1000381c */
/* mercsw 1000381c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 PTR_DAT_100aaf68;
int __cdecl FUN_10006b20(int param_1);

int __cdecl FUN_1000381c(int param_1)

{
  int iVar1;
  int local_8;
  
  iVar1 = FUN_10006b20(*(int *)(PTR_DAT_100aaf68 + 0xc) - param_1);
  local_8 = (iVar1 >> 0x17) + 0x40;
  if (local_8 < 0xf) {
    local_8 = 0xf;
  }
  else if (0x6f < local_8) {
    local_8 = 0x6f;
  }
  return local_8;
}
