/* SPDX-License-Identifier: MIT */
/* mw2shell 100609d0 */
/* mw2shell 100609d0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100c4af8[];

void __cdecl FUN_100609d0(int param_1, int param_2, int param_3, int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 8) {
    iVar2 = param_2 * 0xc;
    iVar1 = param_3;
    do {
      while (iVar1 = iVar1 + 1, iVar1 < 0xc) {
        if (*(int *)(param_1 + 0x368 + (iVar2 + iVar1) * 4) == param_4) {
          DAT_100c4af8[iVar1 + iVar2] = 1;
        }
      }
      iVar2 = iVar2 + 0xc;
      iVar1 = param_3;
    } while (iVar2 < 0x60);
  }
  return;
}
