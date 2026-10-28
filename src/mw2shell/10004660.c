/* SPDX-License-Identifier: MIT */
/* mw2shell 10004660 */
/* mw2shell 10004660: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083720;
extern undefined4 DAT_10083738;
extern undefined4 DAT_1008373c;
extern int DAT_10083740;
undefined4 * __cdecl FUN_1000a180(int param_1);
undefined __cdecl FUN_1000a3f0(int param_1, undefined4 param_2);

void __stdcall FUN_10004660(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_10083740;
  DAT_10083740 = DAT_10083720 / -0x19 + DAT_1008373c / 100 + 10;
  if (DAT_10083740 < 0) {
    DAT_10083740 = 0;
  }
  if ((-1 < iVar2) && (iVar2 != DAT_10083740)) {
    if (DAT_10083740 < iVar2) {
      do {
        iVar1 = iVar2 + 8000;
        iVar2 = iVar2 + -1;
        FUN_1000a180(iVar1);
      } while (DAT_10083740 < iVar2);
    }
    if (iVar2 < DAT_10083740) {
      do {
        iVar1 = iVar2 + 0x1f41;
        iVar2 = iVar2 + 1;
        FUN_1000a3f0(iVar1,DAT_10083738);
      } while (iVar2 < DAT_10083740);
    }
  }
  return;
}
