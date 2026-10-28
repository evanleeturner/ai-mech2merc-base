/* SPDX-License-Identifier: MIT */
/* mercsw 100300e2 */
/* mercsw 100300e2: Ghidra's C, repaired by tools/ghidra_repair.py */
ushort __cdecl FUN_1001ca17(ushort * param_1);
undefined __cdecl FUN_1001c9e8(ushort * param_1, ushort param_2);

void __cdecl FUN_100300e2(int param_1, int param_2, uint param_3)

{
  ushort uVar1;
  int local_8;
  
  uVar1 = FUN_1001ca17(*(ushort **)(param_1 + 0x6c));
  if (((0 < param_2) && (param_2 < 0x10)) && ((int)((uVar1 & 0xf0) >> 4) < param_2)) {
    if ((*(int *)(param_1 + 0x6c) != 0) && (*(ushort *)(*(int *)(param_1 + 0x6c) + 0x16) == param_3)
       ) {
      FUN_1001c9e8(*(ushort **)(param_1 + 0x6c),(ushort)((int)((unsigned int)(param_2) << (4))));
    }
    for (local_8 = *(int *)(param_1 + 4); local_8 != 0; local_8 = *(int *)(local_8 + 8)) {
      FUN_100300e2(local_8,((int)((unsigned int)(param_2) << (4))) >> 4,param_3);
    }
  }
  return;
}
