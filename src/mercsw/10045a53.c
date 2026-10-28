/* SPDX-License-Identifier: MIT */
/* mercsw 10045a53 */
/* mercsw 10045a53: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 * DAT_100b9a2c;
extern undefined DAT_100b9a30[];
extern undefined4 DAT_100b9d30;
extern undefined DAT_101e86b0[];
extern undefined DAT_101e86b2[];
undefined __cdecl FUN_1001d94c(byte * param_1, undefined1 * param_2);
undefined4 __cdecl FUN_10045873(int param_1, int param_2, int param_3);
undefined4 __stdcall FUN_100455b7(void);

undefined4 __cdecl FUN_10045a53(int param_1)

{
  undefined2 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    puVar1 = (undefined2 *)(local_8 * 3 + param_1);
    *(undefined2 *)(DAT_101e86b0 + local_8 * 3) = *puVar1;
    DAT_101e86b2[local_8 * 3] = *(undefined1 *)(puVar1 + 1);
    FUN_1001d94c((byte *)(local_8 * 3 + param_1),DAT_100b9a30 + local_8 * 3);
  }
  FUN_10045873(0,0x100,0x100b9a30);
  FUN_100455b7();
  *DAT_100b9a2c = DAT_100b9d30;
  return 0;
}
