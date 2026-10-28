/* SPDX-License-Identifier: MIT */
/* mercsw 1002c3c6 */
/* mercsw 1002c3c6: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined4 DAT_100b0710;
extern undefined DAT_1015f2e0[];
undefined4 __cdecl FUN_1004cf27(int param_1, char * param_2);
undefined __stdcall FUN_100082ad(void);
undefined4 __cdecl FUN_1002ae60(int param_1, short param_2);

void __cdecl FUN_1002c3c6(int param_1, int param_2)

{
  if (param_1 == -1) {
    FUN_1004cf27(DAT_100b0710,(char *)(DAT_1015f2e0 + param_2 * 0x1c));
    FUN_100082ad();
  }
  else {
    FUN_1002ae60(param_2,(short)param_1);
  }
  return;
}
