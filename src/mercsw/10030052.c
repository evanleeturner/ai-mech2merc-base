/* SPDX-License-Identifier: MIT */
/* mercsw 10030052 */
/* mercsw 10030052: Ghidra's C, repaired by tools/ghidra_repair.py */
int __cdecl FUN_10030052(int param_1, uint param_2);

int __cdecl FUN_10030052(int param_1, uint param_2)

{
  int iVar1;
  int local_8;
  
  if ((*(int *)(param_1 + 0x6c) == 0) || (*(ushort *)(*(int *)(param_1 + 0x6c) + 0x16) != param_2))
  {
    for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
      iVar1 = FUN_10030052(local_8,param_2);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    param_1 = 0;
  }
  return param_1;
}
