/* SPDX-License-Identifier: MIT */
/* mercsw 1001b7cd */
/* mercsw 1001b7cd: Ghidra's C, repaired by tools/ghidra_repair.py */
undefined __cdecl FUN_1001b72b(ushort * param_1, int * param_2);
undefined __cdecl FUN_1001b550(int param_1, int * param_2);

void __cdecl FUN_1001b7cd(ushort * param_1, int * param_2)

{
  int local_8;
  
  FUN_1001b72b(param_1,param_2);
  for (local_8 = *(int *)(param_1 + 0xe); local_8 != 0; local_8 = *(int *)(local_8 + 0xc)) {
    FUN_1001b550(local_8,param_2);
    *(undefined4 *)(local_8 + 0x10) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}
