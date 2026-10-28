/* SPDX-License-Identifier: MIT */
/* mercsw 100509fd */
/* mercsw 100509fd: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101155c4[];
extern undefined DAT_101155e4[];
undefined __cdecl FUN_1001d671(undefined * param_1);

void __cdecl FUN_100509fd(int param_1, int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x48;
  if (((-1 < *(int *)(DAT_101155c4 + iVar1)) && (*(int *)(DAT_101155c4 + iVar1) == param_2)) &&
     (*(int *)(DAT_101155e4 + iVar1) != 0)) {
    FUN_1001d671(*(undefined **)(DAT_101155e4 + iVar1));
    *(undefined4 *)(DAT_101155e4 + iVar1) = 0;
    *(undefined4 *)(DAT_101155c4 + iVar1) = 0xffffffff;
  }
  return;
}
