/* SPDX-License-Identifier: MIT */
/* mercsw 100602f4 */
/* mercsw 100602f4: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined4 __cdecl FUN_10014db6(int param_1, int param_2, int * param_3);

undefined4 __cdecl FUN_100602f4(int param_1, int * param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    for (local_10 = 0; local_10 < *(short *)(iVar1 + 6); local_10 = local_10 + 1) {
      iVar2 = FUN_10014db6(*(int *)(iVar1 + 8) + iVar1 + local_10 * 0x24,iVar1 + 0x18,param_2);
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}
