/* SPDX-License-Identifier: MIT */
/* mercsw 10044c17 */
/* mercsw 10044c17: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef034[];
undefined4 __cdecl FUN_1000dd4e(int param_1);

undefined4 __cdecl FUN_10044c17(ushort param_1)

{
  undefined4 uVar1;
  int local_10;
  
  local_10 = 0;
  if ((param_1 & 0xf00) == 0x200) {
    local_10 = *(int *)(DAT_100eef40[(short)(param_1 & 0xff)] + 0x40);
  }
  else if ((param_1 & 0xf00) == 0x400) {
    local_10 = FUN_1000dd4e(*(int *)(DAT_100ef034 + (short)(param_1 & 0xff) * 0x40));
  }
  if (local_10 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(local_10 + 0x6c);
  }
  return uVar1;
}
