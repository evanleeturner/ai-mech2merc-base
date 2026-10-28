/* SPDX-License-Identifier: MIT */
/* mercsw 10081763 */
/* mercsw 10081763: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b98a4;
extern undefined DAT_100c8280[];
extern undefined DAT_100c8284[];
undefined __cdecl FUN_100108a0(undefined4 param_1, char * param_2);

bool __cdecl FUN_10081763(int param_1, int param_2)

{
  int iVar1;
  int local_c;
  
  for (local_c = 0;
      (local_c < DAT_100b98a4 && (*(int *)(DAT_100c8280 + local_c * 0x14) != param_2));
      local_c = local_c + 1) {
  }
  iVar1 = local_c * 0x14;
  if (local_c == DAT_100b98a4) {
    *(int *)(DAT_100c8280 + iVar1) = param_2;
    *(undefined4 *)(DAT_100c8284 + iVar1) = 0;
    DAT_100b98a4 = DAT_100b98a4 + 1;
    if (0x20 < DAT_100b98a4) {
      FUN_100108a0(0x44,(char *)0x0);
    }
  }
  *(int *)(DAT_100c8284 + iVar1) = *(int *)(DAT_100c8284 + iVar1) + param_1;
  return *(int *)(DAT_100c8284 + iVar1) < 0xffdd;
}
