/* SPDX-License-Identifier: MIT */
/* mercsw 10083770 */
/* mercsw 10083770: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100adf38;
extern undefined4 DAT_100eef40[];

uint __stdcall FUN_10083770(void)

{
  uint local_8;
  
  local_8 = *(uint *)(DAT_100eef40[DAT_100adf38] + 0xdc) & 0xff;
  if ((*(uint *)(DAT_100eef40[DAT_100adf38] + 0xdc) & 0xf00) != 0x400) {
    local_8 = 0xffffffff;
  }
  return local_8;
}
