/* SPDX-License-Identifier: MIT */
/* mercsw 10036317 */
/* mercsw 10036317: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
int __cdecl FUN_1002ab38(int param_1);

int __cdecl FUN_10036317(int param_1)

{
  int iVar1;
  int local_14;
  
  local_14 = -1;
  if (param_1 < 8) {
    iVar1 = FUN_1002ab38(param_1);
    if (iVar1 != -1) {
      if (DAT_100eef40[iVar1] != (undefined4)(-0x170)) {
        local_14 = (int)*(short *)(DAT_100eef40[iVar1] + 0x176);
      }
    }
  }
  return local_14 + 1;
}
