/* SPDX-License-Identifier: MIT */
/* mercsw 1005f81d */
/* mercsw 1005f81d: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100f3170[];
extern undefined DAT_10113170[];
extern undefined DAT_10113172[];
extern undefined DAT_10113178[];
extern undefined DAT_1011317a[];

void __cdecl FUN_1005f81d(short param_1, ushort param_2)

{
  int iVar1;
  
  if (0x1f < param_2) {
    param_2 = 0;
  }
  iVar1 = param_1 * 0xe;
  if ((-1 < *(short *)(DAT_10113178 + iVar1)) &&
     (0 < *(short *)(DAT_100f3170 + (uint)param_2 * 8 + *(short *)(DAT_10113170 + iVar1) * 0x100))
     ) {
    *(ushort *)(DAT_10113172 + iVar1) = param_2;
    *(undefined4 *)(DAT_1011317a + iVar1) = 0;
  }
  return;
}
