/* SPDX-License-Identifier: MIT */
/* mercsw 10086110 */
/* mercsw 10086110: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100ba7bc;
undefined __cdecl FUN_10086336(ushort * param_1);

void __stdcall FUN_10086110(void)

{
  ushort *puVar1;
  int local_c;
  ushort *local_8;
  
  if (DAT_100ba7bc != 0) {
    for (local_c = 0; local_c < 0x3f1; local_c = local_c + 1) {
      puVar1 = *(ushort **)(DAT_100ba7bc + local_c * 4);
      while (local_8 = puVar1, local_8 != (ushort *)0x0) {
        puVar1 = *(ushort **)(local_8 + 4);
        if (0xefff < *local_8) {
          FUN_10086336(local_8);
        }
      }
    }
  }
  return;
}
