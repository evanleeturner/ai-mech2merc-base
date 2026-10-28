/* SPDX-License-Identifier: MIT */
/* mw2shell 1000bfd0 */
/* mw2shell 1000bfd0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083508;
extern undefined4 DAT_100a6798;

undefined4 __stdcall FUN_1000bfd0(void)

{
  if (*(int *)(DAT_10083508 + 0x23bb) == 2) {
    return 0x3e;
  }
  return *(undefined4 *)(DAT_100a6798 + 4);
}
