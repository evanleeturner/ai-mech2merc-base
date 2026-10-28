/* SPDX-License-Identifier: MIT */
/* mercsw 1003d99c */
/* mercsw 1003d99c: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100aefc0;
extern undefined DAT_100c6d48[];
undefined __cdecl FUN_1003e369(int param_1);
undefined __cdecl FUN_1003e3e3(int param_1, int param_2);

void __cdecl FUN_1003d99c(int param_1, int param_2, int param_3)

{
  int local_8;
  
  if (((param_1 != 0) && (DAT_100aefc0 != 0)) && (*(int *)(param_1 + 0x6c) != 0)) {
    FUN_1003e369(*(int *)(param_1 + 0x6c));
    FUN_1003e3e3(*(int *)(param_1 + 0x6c),(int)(DAT_100c6d48 + param_2 * 0x120 + param_3 * 0x18));
    *(int *)(*(int *)(param_1 + 0x6c) + 0x44) = param_2;
    *(int *)(*(int *)(param_1 + 0x6c) + 0x48) = param_3;
    for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
      if ((*(int *)(local_8 + 0x6c) != 0) &&
         (((**(ushort **)(local_8 + 0x6c) & 0x1000) == 0 ||
          (((byte)*(undefined2 *)(*(int *)(local_8 + 0x6c) + 2) & 0xf0) != 0x70)))) {
        FUN_1003d99c(local_8,param_2,param_3);
      }
    }
  }
  return;
}
