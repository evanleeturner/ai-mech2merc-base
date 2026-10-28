/* SPDX-License-Identifier: MIT */
/* mw2shell 1000b8f0 */
/* mw2shell 1000b8f0: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_100b0424[];
extern undefined2 DAT_100b043c[];

undefined4 __cdecl FUN_1000b8f0(undefined4 param_1, uint param_2, int param_3, int * param_4)

{
  int iVar1;
  ushort *puVar2;
  
  iVar1 = 0;
  if (0 < (short)DAT_100b043c[param_3 * 0x14]) {
    puVar2 = (ushort *)(DAT_100b0424 + param_3 * 0x14);
    do {
      if (*puVar2 == param_2) {
        if (param_4 != (int *)0x0) {
          *param_4 = iVar1;
        }
        return 1;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (short)DAT_100b043c[param_3 * 0x14]);
  }
  return 0;
}
