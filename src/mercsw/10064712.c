/* SPDX-License-Identifier: MIT */
/* mercsw 10064712 */
/* mercsw 10064712: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ad6b8;
extern int DAT_100adf38;
extern undefined4 DAT_100eef40[];
int __cdecl FUN_100814bb(int param_1, int param_2);

bool __cdecl FUN_10064712(int param_1)

{
  int iVar1;
  int local_c;
  
  local_c = 0x206;
  if (param_1 != DAT_100adf38) {
    local_c = 0x250;
  }
  iVar1 = FUN_100814bb(local_c,DAT_100ad6b8);
  if (iVar1 != 0) {
    DAT_100eef40[param_1] = iVar1;
  }
  return iVar1 != 0;
}
