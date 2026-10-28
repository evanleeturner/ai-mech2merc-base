/* SPDX-License-Identifier: MIT */
/* mercsw 10050975 */
/* mercsw 10050975: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern int DAT_100b38d8;
extern undefined4 DAT_100eef40[];
undefined __cdecl FUN_10050498(int param_1, int param_2);

void __stdcall FUN_10050975(void)

{
  bool bVar1;
  int local_c;
  
  bVar1 = false;
  local_c = 0;
  while ((local_c < DAT_100b38d8 && (!bVar1))) {
    if (*(int *)(DAT_100eef40[local_c] + 0x1c) != -1) {
      bVar1 = true;
      FUN_10050498(local_c,*(int *)(DAT_100eef40[local_c] + 0x1c));
      *(undefined4 *)(DAT_100eef40[local_c] + 0x1c) = 0xffffffff;
    }
    local_c = local_c + 1;
  }
  return;
}
