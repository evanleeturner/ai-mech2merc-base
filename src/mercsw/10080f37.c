/* SPDX-License-Identifier: MIT */
/* mercsw 10080f37 */
/* mercsw 10080f37: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b3c9c;
undefined __cdecl FUN_10081106(undefined4 param_1, int param_2);
undefined __cdecl FUN_1008117d(undefined4 param_1, int param_2);
undefined __cdecl FUN_100811fd(undefined4 param_1, int param_2);
undefined __cdecl FUN_1008124c(undefined4 param_1, int param_2);
undefined __cdecl FUN_1000e511(undefined4 param_1, undefined4 param_2);
undefined __cdecl FUN_10081023(undefined4 param_1, int param_2);
undefined __cdecl FUN_10081060(undefined4 param_1, int param_2);
undefined __cdecl FUN_1008109d(undefined4 param_1, int param_2);

undefined4 __stdcall FUN_10080f37(void)

{
  if (DAT_100b3c9c != 0) {
    FUN_10081106(1,*(int *)(DAT_100b3c9c + 0x14));
    FUN_1008117d(1,*(int *)(DAT_100b3c9c + 0x18));
    FUN_100811fd(1,*(int *)(DAT_100b3c9c + 0x1c));
    FUN_1008124c(1,*(int *)(DAT_100b3c9c + 0x20));
    FUN_1000e511(1,*(undefined4 *)(DAT_100b3c9c + 0x24));
    FUN_10081023(1,*(int *)(DAT_100b3c9c + 0x28));
    FUN_10081060(1,*(int *)(DAT_100b3c9c + 0x2c));
    FUN_1008109d(1,*(int *)(DAT_100b3c9c + 0x30));
  }
  return 1;
}
