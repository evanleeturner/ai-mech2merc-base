/* SPDX-License-Identifier: MIT */
/* mercsw 1005f2f6 */
/* mercsw 1005f2f6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b38fc;
extern undefined DAT_100f3170[];
extern undefined DAT_10113170[];
extern undefined DAT_10113172[];
extern undefined DAT_10113174[];
extern undefined DAT_10113176[];
extern undefined DAT_10113178[];
extern undefined DAT_1011317a[];

void __stdcall FUN_1005f2f6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_18;
  uint local_14;
  
  iVar2 = DAT_100b38fc;
  for (local_18 = 0; local_18 < 0x200; local_18 = local_18 + 1) {
    iVar1 = local_18 * 0xe;
    if (((-1 < *(short *)(DAT_10113178 + iVar1)) && (*(short *)(DAT_10113176 + iVar1) != 0)) &&
       (*(short *)(DAT_10113174 + iVar1) != 0)) {
      if (*(int *)(DAT_1011317a + iVar1) == 0) {
        *(int *)(DAT_1011317a + iVar1) = iVar2;
      }
      iVar3 = (iVar2 - *(int *)(DAT_1011317a + iVar1)) /
              (int)(uint)*(ushort *)(DAT_10113174 + iVar1);
      local_14 = (uint)*(short *)(DAT_10113172 + iVar1);
      if (0 < iVar3) {
        for (local_20 = 0; local_20 < iVar3; local_20 = local_20 + 1) {
          local_14 = local_14 + 1 & 0x1f;
          if (*(short *)(DAT_100f3170 + local_14 * 8 + *(short *)(DAT_10113170 + iVar1) * 0x100) <
              1) {
            local_14 = 0;
          }
        }
        if ((*(short *)(DAT_10113176 + iVar1) == 2) &&
           (local_14 < (uint)(int)*(short *)(DAT_10113172 + iVar1))) {
          *(undefined2 *)(DAT_10113176 + iVar1) = 0;
          local_14 = 0;
        }
        *(short *)(DAT_10113172 + iVar1) = (short)local_14;
        *(uint *)(DAT_1011317a + iVar1) =
             iVar2 - ((iVar2 - *(int *)(DAT_1011317a + iVar1)) -
                     (uint)*(ushort *)(DAT_10113174 + iVar1) * iVar3);
      }
    }
  }
  return;
}
