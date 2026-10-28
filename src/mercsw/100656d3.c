/* SPDX-License-Identifier: MIT */
/* mercsw 100656d3 */
/* mercsw 100656d3: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern undefined4 DAT_100b38e0;
extern undefined4 DAT_100b38e4;
extern undefined4 DAT_100b38e8;

uint __cdecl FUN_100656d3(uint param_1, byte param_2)

{
  uint uVar1;
  uint local_8;
  
  if (param_1 == 0xffff) {
    uVar1 = (uint)param_2;
  }
  else {
    local_8 = (uint)param_2 << 8 ^ param_1;
    while( true ) {
      local_8 = local_8 % 0x26f5;
      uVar1 = *(uint *)(DAT_100b38e8 + local_8 * 4);
      if (uVar1 == 0xffff) break;
      if ((*(uint *)(DAT_100b38e4 + uVar1 * 4) == param_1) &&
         (*(byte *)(uVar1 + DAT_100b38e0) == param_2)) {
        return uVar1;
      }
      local_8 = local_8 + 0x7f7;
    }
    uVar1 = 0xffff;
  }
  return uVar1;
}
