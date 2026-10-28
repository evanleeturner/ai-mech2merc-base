/* SPDX-License-Identifier: MIT */
/* mercsw 1002a1e0 */
/* mercsw 1002a1e0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];
extern undefined DAT_10215694[];

undefined4 __cdecl FUN_1002a1e0(uint param_1, int param_2)

{
  uint uVar1;
  uint uVar2;
  ushort *local_18;
  undefined4 local_10;
  ushort local_c;
  
  local_18 = (ushort *)0x0;
  local_10 = 1;
  uVar1 = param_1 & 0xff00;
  uVar2 = param_1 & 0xff;
  if ((param_1 & 0xf000) != 0) {
    return 1;
  }
  if (uVar1 == 0x100) {
    local_18 = (ushort *)(DAT_10215694 + uVar2 * 0x54);
  }
  else if (uVar1 == 0x200) {
    local_18 = (ushort *)(DAT_100eef40[uVar2] + 0x14);
  }
  else if (uVar1 == 0x400) {
    local_18 = (ushort *)(DAT_100ef030 + uVar2 * 0x40);
  }
  if (local_18 == (ushort *)0x0) {
    return 1;
  }
  if (param_2 < 5) {
    if ((param_2 != 4) && ((param_2 < 1 || (2 < param_2)))) goto LAB_1002a3b0;
  }
  else {
    if ((param_2 == 8) || (param_2 == 0x100)) {
      if (uVar1 == 0x200) {
        local_c = 0x20;
      }
      else if (uVar1 == 0x400) {
        local_c = 0x20;
      }
      else if (uVar1 == 0x100) {
        local_c = 0x20;
      }
      goto LAB_1002a3b0;
    }
    if (param_2 != 0x1000) goto LAB_1002a3b0;
  }
  if (uVar1 == 0x200) {
    local_c = 4;
  }
  else if (uVar1 == 0x400) {
    local_c = 4;
  }
  else if (uVar1 == 0x100) {
    local_18 = (ushort *)0x0;
    local_10 = 0;
  }
LAB_1002a3b0:
  if ((local_18 != (ushort *)0x0) && ((local_c & *local_18) == 0)) {
    local_10 = 0;
  }
  return local_10;
}
