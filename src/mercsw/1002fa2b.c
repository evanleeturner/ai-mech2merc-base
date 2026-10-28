/* SPDX-License-Identifier: MIT */
/* mercsw 1002fa2b */
/* mercsw 1002fa2b: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl FUN_1002fa2b(int param_1, undefined4 param_2)

{
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0x6c) != 0) {
    *(ushort *)(*(int *)(param_1 + 0x6c) + 2) =
         *(ushort *)(*(int *)(param_1 + 0x6c) + 2) & ~(ushort)param_2;
  }
  for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
    FUN_1002fa2b(local_8,param_2);
  }
  return;
}
