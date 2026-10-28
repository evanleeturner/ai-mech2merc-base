/* SPDX-License-Identifier: MIT */
/* mw2shell 10009f90 */
/* mw2shell 10009f90: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b0424[];
extern undefined2 DAT_100b043c[];

undefined4 __cdecl FUN_10009f90(uint param_1, int param_2, int * param_3)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = 0;
  if (0 < (short)DAT_100b043c[param_2 * 0x14]) {
    puVar2 = (ushort *)(DAT_100b0424 + param_2 * 0x14);
    do {
      if (*puVar2 == param_1) {
        if (param_3 != (int *)0x0) {
          *param_3 = iVar1;
        }
        return 1;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (short)DAT_100b043c[param_2 * 0x14]);
  }
  return 0;
}
