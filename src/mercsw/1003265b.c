/* SPDX-License-Identifier: MIT */
/* mercsw 1003265b */
/* mercsw 1003265b: Ghidra's C, repaired by tools/ghidra_repair.py */
extern char * DAT_100adab8;
extern char * DAT_100adabc;
extern int DAT_100b0710;
extern undefined DAT_101600ec[];
extern undefined DAT_101600f0[];
extern undefined DAT_101600f4[];
extern undefined DAT_101604a0[];
undefined4 __cdecl FUN_1004cf27(int param_1, char * param_2);

void __cdecl FUN_1003265b(int param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  for (local_10 = 0; local_10 < (int)((iVar1 - 8U) / 0x18); local_10 = local_10 + 1) {
    *(undefined4 *)(DAT_101600ec + local_10 * 0x3c) =
         *(undefined4 *)(param_1 + 8 + local_10 * 0x18);
    *(undefined4 *)(DAT_101600f4 + local_10 * 0x3c) =
         *(undefined4 *)(param_1 + 0xc + local_10 * 0x18);
    *(undefined4 *)(DAT_101604a0 + *(int *)(param_1 + 8 + local_10 * 0x18) * 4) =
         *(undefined4 *)(param_1 + 0xc + local_10 * 0x18);
    if ((local_10 == DAT_100b0710) && (DAT_100adab8 != (char *)0x0)) {
      FUN_1004cf27(local_10,DAT_100adab8);
    }
    else if ((local_10 == DAT_100b0710) || (DAT_100adabc == (char *)0x0)) {
      FUN_1004cf27(local_10,(char *)(local_10 * 0x18 + param_1 + 0x10));
    }
    else {
      FUN_1004cf27(local_10,DAT_100adabc);
    }
    *(undefined4 *)(DAT_101600f0 + local_10 * 0x3c) = 0;
  }
  return;
}
