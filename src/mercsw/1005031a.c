/* SPDX-License-Identifier: MIT */
/* mercsw 1005031a */
/* mercsw 1005031a: Ghidra's C, repaired by tools/ghidra_repair.py */
extern int DAT_100b0864;
extern undefined DAT_101155c0[];
extern undefined DAT_101155dc[];

void __cdecl FUN_1005031a(int param_1)

{
  int iVar1;
  int local_c;
  
  for (local_c = 0; local_c < DAT_100b0864; local_c = local_c + 1) {
    iVar1 = local_c * 0x48;
    if ((*(int *)(DAT_101155c0 + iVar1) == -2) &&
       (*(int *)(DAT_101155c0 + iVar1) = *(int *)(param_1 + 4),
       *(int *)(DAT_101155dc + iVar1) == -1)) {
      *(undefined4 *)(DAT_101155dc + iVar1) = 0xfffffffe;
    }
  }
  return;
}
