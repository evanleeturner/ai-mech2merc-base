/* SPDX-License-Identifier: MIT */
/* mercsw 100655f6 */
/* mercsw 100655f6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38e0;
extern undefined4 DAT_100b38e4;
extern undefined4 DAT_100b38e8;
extern undefined4 DAT_100c7fa8;

uint __cdecl FUN_100655f6(uint param_1, byte param_2)

{
  uint uVar1;
  undefined4 local_8;
  
  if (DAT_100c7fa8 < 0x1000) {
    local_8 = (uint)param_2 << 8 ^ param_1;
    while (local_8 = local_8 % 0x26f5, *(int *)(DAT_100b38e8 + local_8 * 4) != 0xffff) {
      local_8 = local_8 + 0x7f7;
    }
    *(uint *)(DAT_100b38e8 + local_8 * 4) = DAT_100c7fa8;
    *(byte *)(DAT_100c7fa8 + DAT_100b38e0) = param_2;
    if (param_1 == 0xffff) {
      *(undefined4 *)(DAT_100b38e4 + DAT_100c7fa8 * 4) = 0xffff;
    }
    else {
      *(uint *)(DAT_100b38e4 + DAT_100c7fa8 * 4) = param_1;
    }
    uVar1 = DAT_100c7fa8;
    DAT_100c7fa8 = DAT_100c7fa8 + 1;
  }
  else {
    uVar1 = 0xffff;
  }
  return uVar1;
}
