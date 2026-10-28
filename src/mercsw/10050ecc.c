/* SPDX-License-Identifier: MIT */
/* mercsw 10050ecc */
/* mercsw 10050ecc: Ghidra's C, repaired by tools/ghidra_repair.py */
enum { false = 0, true = 1 };
extern int DAT_100b0864;
extern undefined DAT_101155c4[];
extern undefined DAT_101155e4[];
extern undefined DAT_101155e8[];
extern undefined DAT_10115606[];
undefined __cdecl FUN_1001d671(undefined * param_1);

void __cdecl FUN_10050ecc(int param_1)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (DAT_100b0864 <= local_8) {
      return;
    }
    iVar1 = local_8 * 0x48;
    if (*(int *)(DAT_101155e8 + iVar1) == param_1) break;
    local_8 = local_8 + 1;
  }
  if (*(int *)(DAT_101155e4 + iVar1) != 0) {
    FUN_1001d671(*(undefined **)(DAT_101155e4 + iVar1));
  }
  *(undefined4 *)(DAT_101155e4 + iVar1) = 0;
  *(undefined4 *)(DAT_101155c4 + iVar1) = 0xffffffff;
  *(undefined2 *)(DAT_10115606 + iVar1) = 1;
  return;
}
