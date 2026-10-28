/* SPDX-License-Identifier: MIT */
/* mw2shell 10006330 */
/* mw2shell 10006330: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_10083800;
extern undefined4 DAT_10083870;
int __cdecl FUN_10004420(int param_1);
undefined4 * __cdecl FUN_1000a180(int param_1);
undefined __stdcall FUN_10004800(void);
undefined __stdcall FUN_10004960(void);
undefined __stdcall FUN_100047f0(void);

int __stdcall FUN_10006330(void)

{
  int iVar1;
  
  iVar1 = DAT_10083870;
  if ((-1 < DAT_10083870) && (iVar1 = DAT_10083870 / 100, DAT_10083870 % 100 != 0)) {
    FUN_10004420(DAT_10083870);
    FUN_1000a180(DAT_10083870);
    DAT_10083870 = DAT_10083800;
    FUN_10004800();
    FUN_10004960();
    iVar1 = FUN_100047f0();
    return iVar1;
  }
  return iVar1;
}
