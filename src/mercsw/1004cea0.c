/* SPDX-License-Identifier: MIT */
/* mercsw 1004cea0 */
/* mercsw 1004cea0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_1015f2e0[];
extern undefined DAT_101600e0[];
extern undefined DAT_101600e8[];
extern undefined DAT_101600f8[];
extern undefined DAT_101604c0[];

void __stdcall FUN_1004cea0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_8;
  
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    *(undefined4 *)(DAT_101600e0 + local_8 * 0x3c) = 0;
    *(undefined4 *)(DAT_101600f8 + local_8 * 0x3c) = 0;
    *(undefined4 *)(DAT_101600e8 + local_8 * 0x3c) = 0;
    puVar2 = (undefined4 *)(DAT_1015f2e0);
    puVar3 = (undefined4 *)(DAT_101604c0 + local_8 * 0x70);
    for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}
