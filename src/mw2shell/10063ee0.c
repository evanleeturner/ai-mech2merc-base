/* SPDX-License-Identifier: MIT */
/* mw2shell 10063ee0 */
/* mw2shell 10063ee0: Ghidra's C, repaired by tools/ghidra_repair.py */

void __cdecl ClearAllEntryFlags(int * param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    while (iVar2 != -1) {
      param_1[0xb] = 0;
      piVar1 = param_1 + 0xe;
      param_1 = param_1 + 0xe;
      iVar2 = *piVar1;
    }
  }
  return;
}
