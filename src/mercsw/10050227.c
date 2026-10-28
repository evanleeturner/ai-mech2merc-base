/* SPDX-License-Identifier: MIT */
/* mercsw 10050227 */
/* mercsw 10050227: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b0864;
extern undefined4 DAT_100b0868;
extern undefined DAT_101155c0[];
extern undefined DAT_101155c4[];
extern undefined DAT_101155dc[];
extern undefined DAT_101155e0[];
extern undefined DAT_101155e4[];
extern undefined DAT_101155e8[];
extern undefined DAT_101155f0[];
extern undefined DAT_101155f4[];
extern undefined DAT_101155f8[];
extern undefined DAT_10115606[];

void __stdcall FUN_10050227(void)

{
  int iVar1;
  int local_10;
  int local_c;
  
  for (local_c = 0; local_c < 0x30c; local_c = local_c + 1) {
    iVar1 = local_c * 0x48;
    *(undefined4 *)(DAT_101155c0 + iVar1) = 0xffffffff;
    *(undefined4 *)(DAT_101155c4 + iVar1) = 0xffffffff;
    *(undefined4 *)(DAT_101155dc + iVar1) = 0xffffffff;
    *(undefined4 *)(DAT_101155e4 + iVar1) = 0;
    *(undefined4 *)(DAT_101155e8 + iVar1) = 0;
    *(undefined4 *)(DAT_101155e0 + iVar1) = 0;
    *(undefined2 *)(DAT_10115606 + iVar1) = 0;
    *(undefined4 *)(DAT_101155f8 + iVar1) = 0;
    *(undefined4 *)(DAT_101155f4 + iVar1) = *(undefined4 *)(DAT_101155f8 + iVar1);
    *(undefined4 *)(DAT_101155f0 + iVar1) = *(undefined4 *)(DAT_101155f4 + iVar1);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      *(undefined4 *)(iVar1 + 0x101155c8 + local_10 * 4) = 0xffffffff;
      *(undefined2 *)(iVar1 + 0x101155fc + local_10 * 2) = 0;
    }
  }
  DAT_100b0864 = 0;
  DAT_100b0868 = 1;
  return;
}
