/* SPDX-License-Identifier: MIT */
/* mercsw 10070b00 */
/* mercsw 10070b00: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100eecb0[];

void __cdecl FUN_10070b00(int param_1)

{
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 0x10;
  *(undefined4 *)(DAT_100eecb0 + *(int *)(param_1 + 4) * 4) = 0xfffffffe;
  return;
}
