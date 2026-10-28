/* SPDX-License-Identifier: MIT */
/* mercsw 10032793 */
/* mercsw 10032793: Ghidra's C, repaired by tools/ghidra_repair.py */
extern undefined DAT_101600f0[];
undefined4 __cdecl FUN_1004cf27(int param_1, char * param_2);

void __cdecl FUN_10032793(int param_1)

{
  int local_c;
  
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    FUN_1004cf27(local_c,(char *)(local_c * 0x11 + param_1 + 8));
    *(undefined4 *)(DAT_101600f0 + local_c * 0x3c) = 0;
  }
  return;
}
