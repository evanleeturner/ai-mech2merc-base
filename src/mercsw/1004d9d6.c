/* SPDX-License-Identifier: MIT */
/* mercsw 1004d9d6 */
/* mercsw 1004d9d6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100eef40[];
extern undefined DAT_100ef030[];
extern undefined DAT_100ef032[];
extern undefined DAT_10215694[];
extern undefined DAT_10215696[];

undefined4 __cdecl FUN_1004d9d6(byte * param_1, byte param_2)

{
  byte bVar1;
  undefined4 local_10;
  uint local_8;
  
  local_8 = (uint)*param_1;
  bVar1 = param_1[1];
  local_10 = 0;
  if (bVar1 == 1) {
    if (((*(ushort *)(DAT_10215694 + local_8 * 0x54) & 0x20) != 0) &&
       (((int)((unsigned int)(1) << ((param_2 & 0x1f))) & (int)*(short *)(DAT_10215696 + local_8 * 0x54)) != 0)) {
      local_10 = 1;
    }
  }
  else if (bVar1 == 2) {
    if (((*(ushort *)(DAT_100eef40[local_8] + 0x14) & 0x20) != 0) &&
       (((int)((unsigned int)(1) << ((param_2 & 0x1f))) & (int)*(short *)(DAT_100eef40[local_8] + 0x16)) != 0)) {
      local_10 = 1;
    }
  }
  else if (((bVar1 == 4) && ((*(ushort *)(DAT_100ef030 + local_8 * 0x40) & 0x20) != 0)) &&
          (((int)((unsigned int)(1) << ((param_2 & 0x1f))) & (int)*(short *)(DAT_100ef032 + local_8 * 0x40)) != 0)) {
    local_10 = 1;
  }
  return local_10;
}
